// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SaveLoad.SaveLoadVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.ViewModelCollection.Input;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.SaveSystem;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.ViewModelCollection.SaveLoad
{
  public class SaveLoadVM : ViewModel
  {
    private const int _maxSaveFileNameLength = 30;
    private readonly TextObject _categorizedSaveGroupName = new TextObject("{=nVGqjtaa}Campaign {ID}");
    private readonly TextObject _uncategorizedSaveGroupName = new TextObject("{=uncategorized_save}Uncategorized");
    private readonly TextObject _textIsEmptyReasonText = new TextObject("{=7AI8jA0b}Input text cannot be empty.");
    private readonly TextObject _textHasSpecialCharReasonText = new TextObject("{=kXRdeawC}Input text cannot include special characters.");
    private readonly TextObject _textTooLongReasonText = new TextObject("{=B3W6fcQX}Input text cannot be longer than {MAX_LENGTH} characters.");
    private readonly TextObject _saveAlreadyExistsReasonText = new TextObject("{=aG6XMhA1}A saved game file already exists with this name.");
    private readonly TextObject _saveNameReservedReasonText = new TextObject("{=M4WMKyE1}Input text includes reserved text.");
    private readonly TextObject _allSpaceReasonText = new TextObject("{=Rtakaivj}Input text needs to include at least one non-space character.");
    private readonly TextObject _visualIsDisabledText = new TextObject("{=xlEZ02Qw}Character visual is disabled during 'Save As' on the campaign map.");
    private bool _isSearchAvailable;
    private string _searchText;
    private string _searchPlaceholderText;
    private string _doneText;
    private string _createNewSaveSlotText;
    private string _titleText;
    private string _visualDisabledText;
    private bool _isSaving;
    private bool _isActionEnabled;
    private bool _isAnyItemSelected;
    private bool _canCreateNewSave;
    private bool _isVisualDisabled;
    private string _saveLoadText;
    private string _cancelText;
    private HintViewModel _createNewSaveHint;
    private MBBindingList<SavedGameGroupVM> _saveGroups;
    private SavedGameVM _currentSelectedSave;
    private InputKeyItemVM _doneInputKey;
    private InputKeyItemVM _cancelInputKey;
    private InputKeyItemVM _deleteInputKey;

    public bool IsBusyWithAnAction { get; private set; }

    private IEnumerable<SaveGameFileInfo> _allSavedGames
    {
      get
      {
        return this.SaveGroups.SelectMany<SavedGameGroupVM, SaveGameFileInfo>((Func<SavedGameGroupVM, IEnumerable<SaveGameFileInfo>>) (s => s.SavedGamesList.Select<SavedGameVM, SaveGameFileInfo>((Func<SavedGameVM, SaveGameFileInfo>) (v => v.Save))));
      }
    }

    private SavedGameVM _defaultFirstSavedGame
    {
      get
      {
        SavedGameGroupVM savedGameGroupVm = this.SaveGroups.FirstOrDefault<SavedGameGroupVM>((Func<SavedGameGroupVM, bool>) (x => x.SavedGamesList.Count > 0));
        return savedGameGroupVm == null ? (SavedGameVM) null : savedGameGroupVm.SavedGamesList.FirstOrDefault<SavedGameVM>();
      }
    }

    public SaveLoadVM(bool isSaving, bool isCampaignMapOnStack)
    {
      this._isSaving = isSaving;
      this.SaveGroups = new MBBindingList<SavedGameGroupVM>();
      this.IsVisualDisabled = false;
      List<ModuleInfo> moduleInfos = ModuleHelper.GetModuleInfos(Utilities.GetModulesNames());
      int variable = 0;
      SaveGameFileInfo[] saveFiles = MBSaveLoad.GetSaveFiles();
      IEnumerable<SaveGameFileInfo> source1 = ((IEnumerable<SaveGameFileInfo>) saveFiles).Where<SaveGameFileInfo>((Func<SaveGameFileInfo, bool>) (s => s.IsCorrupted));
      foreach (IGrouping<string, SaveGameFileInfo> source2 in (IEnumerable<IGrouping<string, SaveGameFileInfo>>) ((IEnumerable<SaveGameFileInfo>) saveFiles).Where<SaveGameFileInfo>((Func<SaveGameFileInfo, bool>) (s => !s.IsCorrupted)).GroupBy<SaveGameFileInfo, string>((Func<SaveGameFileInfo, string>) (m => m.MetaData.GetUniqueGameId())).OrderByDescending<IGrouping<string, SaveGameFileInfo>, DateTime>((Func<IGrouping<string, SaveGameFileInfo>, DateTime>) (s => this.GetMostRecentSaveInGroup(s))))
      {
        SavedGameGroupVM savedGameGroupVm = new SavedGameGroupVM();
        if (string.IsNullOrWhiteSpace(source2.Key))
        {
          savedGameGroupVm.IdentifierID = this._uncategorizedSaveGroupName.ToString();
        }
        else
        {
          ++variable;
          this._categorizedSaveGroupName.SetTextVariable("ID", variable);
          savedGameGroupVm.IdentifierID = this._categorizedSaveGroupName.ToString();
        }
        foreach (SaveGameFileInfo save in (IEnumerable<SaveGameFileInfo>) source2.OrderByDescending<SaveGameFileInfo, DateTime>((Func<SaveGameFileInfo, DateTime>) (s => s.MetaData.GetCreationTime())))
        {
          bool isDiscrepancyDetectedForSave = SaveLoadVM.IsAnyModuleMissingFromSaveOrCurrentModules(moduleInfos, save.MetaData.GetModules());
          bool ironmanMode = save.MetaData.GetIronmanMode();
          savedGameGroupVm.SavedGamesList.Add(new SavedGameVM(save, this.IsSaving, new Action<SavedGameVM>(this.OnDeleteSavedGame), new Action<SavedGameVM>(this.OnSaveSelection), new Action(this.OnCancelLoadSave), new Action(this.ExecuteDone), isDiscrepancyDetectedForSave: isDiscrepancyDetectedForSave, isIronman: ironmanMode));
        }
        this.SaveGroups.Add(savedGameGroupVm);
      }
      if (source1.Any<SaveGameFileInfo>())
      {
        SavedGameGroupVM savedGameGroupVm = new SavedGameGroupVM()
        {
          IdentifierID = new TextObject("{=o9PIe7am}Corrupted").ToString()
        };
        foreach (SaveGameFileInfo save in source1)
          savedGameGroupVm.SavedGamesList.Add(new SavedGameVM(save, this.IsSaving, new Action<SavedGameVM>(this.OnDeleteSavedGame), new Action<SavedGameVM>(this.OnSaveSelection), new Action(this.OnCancelLoadSave), new Action(this.ExecuteDone), true));
        this.SaveGroups.Add(savedGameGroupVm);
      }
      this.RefreshCanCreateNewSave();
      this.OnSaveSelection(this._defaultFirstSavedGame);
      this.RefreshValues();
    }

    private void RefreshCanCreateNewSave()
    {
      this.CanCreateNewSave = !MBSaveLoad.IsMaxNumberOfSavesReached();
      this.CreateNewSaveHint = new HintViewModel(this.CanCreateNewSave ? TextObject.Empty : new TextObject("{=DeXfSjgY}Cannot create a new save. Save limit reached."), (string) null);
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.TitleText = new TextObject("{=hiCxFj4E}Saved Campaigns").ToString();
      this.DoneText = new TextObject("{=WiNRdfsm}Done").ToString();
      this.CreateNewSaveSlotText = new TextObject("{=eL8nhkhQ}Create New Save Slot").ToString();
      this.CancelText = new TextObject("{=3CpNUnVl}Cancel").ToString();
      this.SaveLoadText = this._isSaving ? new TextObject("{=bV75iwKa}Save").ToString() : new TextObject("{=9NuttOBC}Load").ToString();
      this.SearchPlaceholderText = new TextObject("{=tQOPRBFg}Search...").ToString();
      if (this.IsVisualDisabled)
        this.VisualDisabledText = this._visualIsDisabledText.ToString();
      this.SaveGroups.ApplyActionOnAllItems((Action<SavedGameGroupVM>) (x => x.RefreshValues()));
      this.CurrentSelectedSave?.RefreshValues();
    }

    private DateTime GetMostRecentSaveInGroup(IGrouping<string, SaveGameFileInfo> group)
    {
      SaveGameFileInfo saveGameFileInfo = group.OrderByDescending<SaveGameFileInfo, DateTime>((Func<SaveGameFileInfo, DateTime>) (g => g.MetaData.GetCreationTime())).FirstOrDefault<SaveGameFileInfo>();
      return saveGameFileInfo == null ? new DateTime() : saveGameFileInfo.MetaData.GetCreationTime();
    }

    private void OnSaveSelection(SavedGameVM save)
    {
      if (save == this.CurrentSelectedSave)
        return;
      if (this.CurrentSelectedSave != null)
        this.CurrentSelectedSave.IsSelected = false;
      this.CurrentSelectedSave = save;
      if (this.CurrentSelectedSave != null)
        this.CurrentSelectedSave.IsSelected = true;
      this.IsAnyItemSelected = this.CurrentSelectedSave != null;
      this.IsActionEnabled = this.IsAnyItemSelected && !this.CurrentSelectedSave.IsCorrupted;
    }

    public void ExecuteCreateNewSaveGame()
    {
      InformationManager.ShowTextInquiry(new TextInquiryData(new TextObject("{=7WdWK2Dt}Save Game").ToString(), new TextObject("{=WDlVhNuq}Name your save file").ToString(), true, true, new TextObject("{=WiNRdfsm}Done").ToString(), new TextObject("{=3CpNUnVl}Cancel").ToString(), new Action<string>(this.OnSaveAsDone), (Action) null, textCondition: new Func<string, Tuple<bool, string>>(this.IsSaveGameNameApplicable)));
    }

    private Tuple<bool, string> IsSaveGameNameApplicable(string inputText)
    {
      string empty = string.Empty;
      bool flag = true;
      if (string.IsNullOrEmpty(inputText))
      {
        empty = this._textIsEmptyReasonText.ToString();
        flag = false;
      }
      else if (inputText.All<char>((Func<char, bool>) (c => char.IsWhiteSpace(c))))
      {
        empty = this._allSpaceReasonText.ToString();
        flag = false;
      }
      else if (inputText.Any<char>((Func<char, bool>) (c => !char.IsLetterOrDigit(c) && !char.IsWhiteSpace(c))))
      {
        empty = this._textHasSpecialCharReasonText.ToString();
        flag = false;
      }
      else if (inputText.Length >= 30)
      {
        this._textTooLongReasonText.SetTextVariable("MAX_LENGTH", 30);
        empty = this._textTooLongReasonText.ToString();
        flag = false;
      }
      else if (MBSaveLoad.IsSaveFileNameReserved(inputText))
      {
        empty = this._saveNameReservedReasonText.ToString();
        flag = false;
      }
      else if (this._allSavedGames.Any<SaveGameFileInfo>((Func<SaveGameFileInfo, bool>) (s => string.Equals(s.Name, inputText, StringComparison.InvariantCultureIgnoreCase))))
      {
        empty = this._saveAlreadyExistsReasonText.ToString();
        flag = false;
      }
      return new Tuple<bool, string>(flag, empty);
    }

    private void OnSaveAsDone(string saveName)
    {
      Campaign.Current.SaveHandler.SaveAs(saveName);
      this.ExecuteDone();
    }

    public void ExecuteDone() => ScreenManager.PopScreen();

    public void ExecuteLoadSave() => this.LoadSelectedSave();

    private void LoadSelectedSave()
    {
      if (this.IsBusyWithAnAction || this.CurrentSelectedSave == null || this.CurrentSelectedSave.IsCorrupted)
        return;
      this.CurrentSelectedSave.ExecuteSaveLoad();
      this.IsBusyWithAnAction = true;
    }

    private void OnCancelLoadSave() => this.IsBusyWithAnAction = false;

    private void ExecuteResetCurrentSave() => this.CurrentSelectedSave = (SavedGameVM) null;

    private void OnDeleteSavedGame(SavedGameVM savedGame)
    {
      if (this.IsBusyWithAnAction)
        return;
      this.IsBusyWithAnAction = true;
      string str1 = new TextObject("{=M1AEHJ76}Please notice that this save is created for a session which has Ironman mode enabled. There is no other save file for the related session. Are you sure you want to delete this save game?").ToString();
      string str2 = new TextObject("{=HH2mZq8J}Are you sure you want to delete this save game?").ToString();
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=QHV8aeEg}Delete Save").ToString(), savedGame.Save.MetaData.GetIronmanMode() ? str1 : str2, true, true, new TextObject("{=aeouhelq}Yes").ToString(), new TextObject("{=8OkPHu4f}No").ToString(), (Action) (() =>
      {
        this.IsBusyWithAnAction = true;
        int num = MBSaveLoad.DeleteSaveGame(savedGame.Save.Name) ? 1 : 0;
        this.IsBusyWithAnAction = false;
        if (num != 0)
        {
          this.DeleteSave(savedGame);
          this.OnSaveSelection(this._defaultFirstSavedGame);
          this.RefreshCanCreateNewSave();
        }
        else
          this.OnDeleteSaveUnsuccessful();
      }), (Action) (() => this.IsBusyWithAnAction = false)));
    }

    private void OnDeleteSaveUnsuccessful()
    {
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=oZrVNUOk}Error").ToString(), new TextObject("{=PY00wRz4}Failed to delete the save file.").ToString(), true, false, new TextObject("{=WiNRdfsm}Done").ToString(), string.Empty, (Action) null, (Action) null));
    }

    private void DeleteSave(SavedGameVM save)
    {
      foreach (SavedGameGroupVM saveGroup in (Collection<SavedGameGroupVM>) this.SaveGroups)
      {
        if (saveGroup.SavedGamesList.Contains(save))
        {
          saveGroup.SavedGamesList.Remove(save);
          break;
        }
      }
      if (!string.IsNullOrEmpty(BannerlordConfig.LatestSaveGameName) && !(save.Save.Name == BannerlordConfig.LatestSaveGameName))
        return;
      BannerlordConfig.LatestSaveGameName = this._defaultFirstSavedGame?.Save.Name ?? string.Empty;
      int num = (int) BannerlordConfig.Save();
    }

    public void DeleteSelectedSave()
    {
      if (this.CurrentSelectedSave == null)
        return;
      this.OnDeleteSavedGame(this.CurrentSelectedSave);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.DoneInputKey?.OnFinalize();
      this.CancelInputKey?.OnFinalize();
      this.DeleteInputKey?.OnFinalize();
    }

    private static bool IsAnyModuleMissingFromSaveOrCurrentModules(
      List<ModuleInfo> loadedModules,
      string[] modulesInSave)
    {
      foreach (string str in modulesInSave)
      {
        string moduleName = str;
        if (loadedModules.All<ModuleInfo>((Func<ModuleInfo, bool>) (loadedModule => loadedModule.Name != moduleName)))
          return true;
      }
      using (IEnumerator<ModuleInfo> enumerator = loadedModules.Where<ModuleInfo>((Func<ModuleInfo, bool>) (loadedModule => ((IEnumerable<string>) modulesInSave).All<string>((Func<string, bool>) (moduleName => loadedModule.Name != moduleName)))).GetEnumerator())
      {
        if (enumerator.MoveNext())
        {
          ModuleInfo current = enumerator.Current;
          return true;
        }
      }
      return false;
    }

    [DataSourceProperty]
    public bool IsSearchAvailable
    {
      get => this._isSearchAvailable;
      set
      {
        if (value == this._isSearchAvailable)
          return;
        this._isSearchAvailable = value;
        this.OnPropertyChangedWithValue(value, nameof (IsSearchAvailable));
      }
    }

    [DataSourceProperty]
    public string SearchText
    {
      get => this._searchText;
      set
      {
        if (!(value != this._searchText))
          return;
        value.IndexOf(this._searchText ?? "");
        this._searchText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (SearchText));
      }
    }

    [DataSourceProperty]
    public string SearchPlaceholderText
    {
      get => this._searchPlaceholderText;
      set
      {
        if (!(value != this._searchPlaceholderText))
          return;
        this._searchPlaceholderText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (SearchPlaceholderText));
      }
    }

    [DataSourceProperty]
    public string VisualDisabledText
    {
      get => this._visualDisabledText;
      set
      {
        if (!(value != this._visualDisabledText))
          return;
        this._visualDisabledText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (VisualDisabledText));
      }
    }

    [DataSourceProperty]
    public MBBindingList<SavedGameGroupVM> SaveGroups
    {
      get => this._saveGroups;
      set
      {
        if (value == this._saveGroups)
          return;
        this._saveGroups = value;
        this.OnPropertyChangedWithValue<MBBindingList<SavedGameGroupVM>>(value, nameof (SaveGroups));
      }
    }

    [DataSourceProperty]
    public SavedGameVM CurrentSelectedSave
    {
      get => this._currentSelectedSave;
      set
      {
        if (value == this._currentSelectedSave)
          return;
        this._currentSelectedSave = value;
        this.OnPropertyChangedWithValue<SavedGameVM>(value, nameof (CurrentSelectedSave));
      }
    }

    [DataSourceProperty]
    public string CreateNewSaveSlotText
    {
      get => this._createNewSaveSlotText;
      set
      {
        if (!(value != this._createNewSaveSlotText))
          return;
        this._createNewSaveSlotText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CreateNewSaveSlotText));
      }
    }

    [DataSourceProperty]
    public string TitleText
    {
      get => this._titleText;
      set
      {
        if (!(value != this._titleText))
          return;
        this._titleText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (TitleText));
      }
    }

    [DataSourceProperty]
    public string CancelText
    {
      get => this._cancelText;
      set
      {
        if (!(value != this._cancelText))
          return;
        this._cancelText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CancelText));
      }
    }

    [DataSourceProperty]
    public bool IsSaving
    {
      get => this._isSaving;
      set
      {
        if (value == this._isSaving)
          return;
        this._isSaving = value;
        this.OnPropertyChangedWithValue(value, nameof (IsSaving));
      }
    }

    [DataSourceProperty]
    public bool CanCreateNewSave
    {
      get => this._canCreateNewSave;
      set
      {
        if (value == this._canCreateNewSave)
          return;
        this._canCreateNewSave = value;
        this.OnPropertyChangedWithValue(value, nameof (CanCreateNewSave));
      }
    }

    [DataSourceProperty]
    public bool IsVisualDisabled
    {
      get => this._isVisualDisabled;
      set
      {
        if (value == this._isVisualDisabled)
          return;
        this._isVisualDisabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsVisualDisabled));
      }
    }

    [DataSourceProperty]
    public HintViewModel CreateNewSaveHint
    {
      get => this._createNewSaveHint;
      set
      {
        if (value == this._createNewSaveHint)
          return;
        this._createNewSaveHint = value;
        this.OnPropertyChangedWithValue<HintViewModel>(value, nameof (CreateNewSaveHint));
      }
    }

    [DataSourceProperty]
    public bool IsActionEnabled
    {
      get => this._isActionEnabled;
      set
      {
        if (value == this._isActionEnabled)
          return;
        this._isActionEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsActionEnabled));
      }
    }

    [DataSourceProperty]
    public bool IsAnyItemSelected
    {
      get => this._isAnyItemSelected;
      set
      {
        if (value == this._isAnyItemSelected)
          return;
        this._isAnyItemSelected = value;
        this.OnPropertyChangedWithValue(value, nameof (IsAnyItemSelected));
      }
    }

    [DataSourceProperty]
    public string DoneText
    {
      get => this._doneText;
      set
      {
        if (!(value != this._doneText))
          return;
        this._doneText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (DoneText));
      }
    }

    [DataSourceProperty]
    public string SaveLoadText
    {
      get => this._saveLoadText;
      set
      {
        if (!(value != this._saveLoadText))
          return;
        this._saveLoadText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (SaveLoadText));
      }
    }

    public void SetDoneInputKey(HotKey hotkey)
    {
      this.DoneInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
    }

    public void SetCancelInputKey(HotKey hotkey)
    {
      this.CancelInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
    }

    public void SetDeleteInputKey(HotKey hotkey)
    {
      this.DeleteInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
    }

    public InputKeyItemVM DoneInputKey
    {
      get => this._doneInputKey;
      set
      {
        if (value == this._doneInputKey)
          return;
        this._doneInputKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (DoneInputKey));
      }
    }

    public InputKeyItemVM CancelInputKey
    {
      get => this._cancelInputKey;
      set
      {
        if (value == this._cancelInputKey)
          return;
        this._cancelInputKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (CancelInputKey));
      }
    }

    public InputKeyItemVM DeleteInputKey
    {
      get => this._deleteInputKey;
      set
      {
        if (value == this._deleteInputKey)
          return;
        this._deleteInputKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (DeleteInputKey));
      }
    }
  }
}
