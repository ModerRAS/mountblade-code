// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SaveLoad.SavedGameVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.SaveSystem;
using TaleWorlds.SaveSystem.Load;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.ViewModelCollection.SaveLoad
{
  public class SavedGameVM : ViewModel
  {
    private readonly bool _isSaving;
    private readonly Action _onDone;
    private readonly Action<SavedGameVM> _onDelete;
    private readonly Action<SavedGameVM> _onSelection;
    private readonly Action _onCancelLoadSave;
    private readonly TextObject _newlineTextObject = new TextObject("{=ol0rBSrb}{STR1}{newline}{STR2}");
    private readonly ApplicationVersion _gameVersion;
    private readonly ApplicationVersion _saveVersion;
    private MBBindingList<SavedGamePropertyVM> _savedGameProperties;
    private MBBindingList<SavedGameModuleInfoVM> _loadedModulesInSave;
    private HintViewModel _dateTimeHint;
    private HintViewModel _updateButtonHint;
    private HintViewModel _disabledReasonHint;
    private ImageIdentifierVM _clanBanner;
    private CharacterViewModel _characterVisual;
    private string _deleteText;
    private string _nameText;
    private string _gameTimeText;
    private string _realTimeText1;
    private string _realTimeText2;
    private string _levelText;
    private string _characterNameText;
    private string _saveLoadText;
    private string _overwriteSaveText;
    private string _updateSaveText;
    private string _modulesText;
    private string _corruptedSaveText;
    private string _saveVersionAsString;
    private string _mainHeroVisualCode;
    private string _bannerTextCode;
    private bool _isSelected;
    private bool _isCorrupted;
    private bool _isFilteredOut;
    private bool _isDisabled;

    public SaveGameFileInfo Save { get; }

    public bool RequiresInquiryOnLoad { get; private set; }

    public bool IsModuleDiscrepancyDetected { get; private set; }

    public SavedGameVM(
      SaveGameFileInfo save,
      bool isSaving,
      Action<SavedGameVM> onDelete,
      Action<SavedGameVM> onSelection,
      Action onCancelLoadSave,
      Action onDone,
      bool isCorruptedSave = false,
      bool isDiscrepancyDetectedForSave = false,
      bool isIronman = false)
    {
      this.Save = save;
      this._isSaving = isSaving;
      this._onDelete = onDelete;
      this._onSelection = onSelection;
      this._onCancelLoadSave = onCancelLoadSave;
      this._onDone = onDone;
      this.IsCorrupted = isCorruptedSave;
      this.SavedGameProperties = new MBBindingList<SavedGamePropertyVM>();
      this.LoadedModulesInSave = new MBBindingList<SavedGameModuleInfoVM>();
      if (isIronman)
      {
        GameTexts.SetVariable("RANK", this.Save.MetaData.GetCharacterName());
        GameTexts.SetVariable("NUMBER", new TextObject("{=Fm0rjkH7}Ironman"));
        this.NameText = new TextObject("{=AVoWvlue}{RANK} ({NUMBER})").ToString();
      }
      else
        this.NameText = this.Save.Name;
      this._newlineTextObject.SetTextVariable("newline", "\n");
      this._gameVersion = ApplicationVersion.FromParametersFile();
      this._saveVersion = this.Save.MetaData.GetApplicationVersion();
      this.IsModuleDiscrepancyDetected = isCorruptedSave | isDiscrepancyDetectedForSave;
      this.MainHeroVisualCode = this.IsModuleDiscrepancyDetected ? string.Empty : this.Save.MetaData.GetCharacterVisualCode();
      this.BannerTextCode = this.IsModuleDiscrepancyDetected ? string.Empty : this.Save.MetaData.GetClanBannerCode();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.LoadedModulesInSave.Clear();
      this.SavedGameProperties.Clear();
      this.SaveVersionAsString = this._saveVersion.ToString();
      if (this._gameVersion != this._saveVersion)
        this.RequiresInquiryOnLoad = true;
      foreach (string module in this.Save.MetaData.GetModules())
      {
        string str = this.Save.MetaData.GetModuleVersion(module).ToString();
        this.LoadedModulesInSave.Add(new SavedGameModuleInfoVM(module, "", str));
      }
      this.CharacterNameText = this.Save.MetaData.GetCharacterName();
      this.ClanBanner = new ImageIdentifierVM(BannerCode.CreateFrom(this.Save.MetaData.GetClanBannerCode()), true);
      this.DeleteText = new TextObject("{=deleteaction}Delete").ToString();
      this.ModulesText = new TextObject("{=JXyxj1J5}Modules").ToString();
      DateTime creationTime = this.Save.MetaData.GetCreationTime();
      this.RealTimeText1 = LocalizedTextManager.GetDateFormattedByLanguage(BannerlordConfig.Language, creationTime);
      this.RealTimeText2 = LocalizedTextManager.GetTimeFormattedByLanguage(BannerlordConfig.Language, creationTime);
      int healthPercentage = this.Save.MetaData.GetPlayerHealthPercentage();
      TextObject textObject1 = new TextObject("{=gYATKZJp}{NUMBER}%");
      textObject1.SetTextVariable("NUMBER", healthPercentage.ToString());
      this.SavedGameProperties.Add(new SavedGamePropertyVM(SavedGamePropertyVM.SavedGameProperty.Health, textObject1, new TextObject("{=hZrwUIaq}Health")));
      this.SavedGameProperties.Add(new SavedGamePropertyVM(SavedGamePropertyVM.SavedGameProperty.Gold, SavedGameVM.GetAbbreviatedValueTextFromValue(this.Save.MetaData.GetMainHeroGold()), new TextObject("{=Hxf6bzmR}Current Denars")));
      this.SavedGameProperties.Add(new SavedGamePropertyVM(SavedGamePropertyVM.SavedGameProperty.Influence, SavedGameVM.GetAbbreviatedValueTextFromValue((int) this.Save.MetaData.GetClanInfluence()), new TextObject("{=RVPidk5a}Influence")));
      int variable1 = this.Save.MetaData.GetMainPartyHealthyMemberCount() + this.Save.MetaData.GetMainPartyWoundedMemberCount();
      int prisonerMemberCount = this.Save.MetaData.GetMainPartyPrisonerMemberCount();
      TextObject empty = TextObject.Empty;
      TextObject textObject2;
      if (prisonerMemberCount > 0)
      {
        textObject2 = new TextObject("{=6qYaQkDD}{COUNT} + {PRISONER_COUNT}p");
        textObject2.SetTextVariable("COUNT", variable1);
        textObject2.SetTextVariable("PRISONER_COUNT", prisonerMemberCount);
      }
      else
        textObject2 = new TextObject(variable1, (Dictionary<string, object>) null);
      this.SavedGameProperties.Add(new SavedGamePropertyVM(SavedGamePropertyVM.SavedGameProperty.PartySize, textObject2, new TextObject("{=IXwOaa98}Party Size")));
      this.SavedGameProperties.Add(new SavedGamePropertyVM(SavedGamePropertyVM.SavedGameProperty.Food, new TextObject((int) this.Save.MetaData.GetMainPartyFood(), (Dictionary<string, object>) null), new TextObject("{=qSi4DlT4}Food")));
      this.SavedGameProperties.Add(new SavedGamePropertyVM(SavedGamePropertyVM.SavedGameProperty.Fiefs, new TextObject(this.Save.MetaData.GetClanFiefs(), (Dictionary<string, object>) null), new TextObject("{=SRjrhb0A}Owned Fief Count")));
      TextObject textObject3 = new TextObject("{=GZWPHmAw}Day : {DAY}");
      string variable2 = ((int) this.Save.MetaData.GetDayLong()).ToString();
      textObject3.SetTextVariable("DAY", variable2);
      this.GameTimeText = textObject3.ToString();
      TextObject textObject4 = new TextObject("{=IwhpeT8C}Level : {PLAYER_LEVEL}");
      textObject4.SetTextVariable("PLAYER_LEVEL", this.Save.MetaData.GetMainHeroLevel().ToString());
      this.LevelText = textObject4.ToString();
      this.DateTimeHint = new HintViewModel(new TextObject("{=!}" + this.RealTimeText1), (string) null);
      this.UpdateButtonHint = new HintViewModel(new TextObject("{=ZDPIq4hi}Load the selected save game, overwrite it with the current version of the game and get back to this screen."), (string) null);
      this.SaveLoadText = this._isSaving ? new TextObject("{=bV75iwKa}Save").ToString() : new TextObject("{=9NuttOBC}Load").ToString();
      this.OverrideSaveText = new TextObject("{=hYL3CFHX}Do you want to overwrite this saved game?").ToString();
      this.UpdateSaveText = new TextObject("{=FFiPLPbs}Update Save").ToString();
      this.CorruptedSaveText = new TextObject("{=RoYPofhK}Corrupted Save").ToString();
      (bool IsDisabled, TextObject Reason) disabledWithReason = this.GetIsDisabledWithReason();
      this.IsDisabled = disabledWithReason.IsDisabled;
      this.DisabledReasonHint = new HintViewModel(disabledWithReason.Reason, (string) null);
    }

    private (bool IsDisabled, TextObject Reason) GetIsDisabledWithReason()
    {
      ApplicationVersion applicationVersion = this.Save.MetaData.GetApplicationVersion();
      ApplicationVersion versionWithBuildNumber = Utilities.GetApplicationVersionWithBuildNumber();
      if (!(versionWithBuildNumber < applicationVersion))
        return (false, TextObject.Empty);
      TextObject textObject = new TextObject("{=9svpUWeo}Save version ({SAVE_VERSION}) is higher than the current version ({CURRENT_VERSION}).");
      textObject.SetTextVariable("SAVE_VERSION", applicationVersion.ToString());
      textObject.SetTextVariable("CURRENT_VERSION", versionWithBuildNumber.ToString());
      return (true, textObject);
    }

    public void ExecuteSaveLoad()
    {
      if (this.IsCorrupted)
        return;
      if (this._isSaving)
        InformationManager.ShowInquiry(new InquiryData(new TextObject("{=Q1HIlJxe}Overwrite").ToString(), this.OverrideSaveText, true, true, new TextObject("{=aeouhelq}Yes").ToString(), new TextObject("{=8OkPHu4f}No").ToString(), new Action(this.OnOverrideSaveAccept), (Action) (() =>
        {
          Action onCancelLoadSave = this._onCancelLoadSave;
          if (onCancelLoadSave == null)
            return;
          onCancelLoadSave();
        })));
      else
        SandBoxSaveHelper.TryLoadSave(this.Save, new Action<LoadResult>(this.StartGame), this._onCancelLoadSave);
    }

    private void StartGame(LoadResult loadResult)
    {
      if (Game.Current != null)
      {
        ScreenManager.PopScreen();
        GameStateManager.Current.CleanStates();
        GameStateManager.Current = Module.CurrentModule.GlobalGameStateManager;
      }
      MBSaveLoad.OnStartGame(loadResult);
      MBGameManager.StartNewGame((MBGameManager) new SandBoxGameManager(loadResult));
    }

    private void OnOverrideSaveAccept()
    {
      Campaign.Current.SaveHandler.SaveAs(this.Save.Name);
      this._onDone();
    }

    private static TextObject GetAbbreviatedValueTextFromValue(int valueAmount)
    {
      string variable1 = "";
      Decimal num1 = (Decimal) valueAmount;
      if (valueAmount < 10000)
        return new TextObject(valueAmount, (Dictionary<string, object>) null);
      if (valueAmount >= 10000 && valueAmount < 1000000)
      {
        variable1 = new TextObject("{=thousandabbr}k").ToString();
        num1 /= 1000M;
      }
      else if (valueAmount >= 1000000 && valueAmount < 1000000000)
      {
        variable1 = new TextObject("{=millionabbr}m").ToString();
        num1 /= 1000000M;
      }
      else if (valueAmount >= 1000000000 && valueAmount <= int.MaxValue)
      {
        variable1 = new TextObject("{=billionabbr}b").ToString();
        num1 /= 1000000000M;
      }
      int num2 = (int) num1;
      string variable2 = num2.ToString();
      if (variable2.Length < 3)
      {
        variable2 += ".";
        string source = ((IEnumerable<string>) num1.ToString("F3").Split('.')).ElementAtOrDefault<string>(1);
        if (source != null)
        {
          for (int index = 0; index < 3 - num2.ToString().Length; ++index)
          {
            if (source.ElementAtOrDefault<char>(index) != char.MinValue)
              variable2 += source.ElementAtOrDefault<char>(index).ToString();
          }
        }
      }
      TextObject valueTextFromValue = new TextObject("{=mapbardenarvalue}{DENAR_AMOUNT}{VALUE_ABBREVIATION}");
      valueTextFromValue.SetTextVariable("DENAR_AMOUNT", variable2);
      valueTextFromValue.SetTextVariable("VALUE_ABBREVIATION", variable1);
      return valueTextFromValue;
    }

    public void ExecuteUpdate()
    {
    }

    public void ExecuteDelete() => this._onDelete(this);

    public void ExecuteSelection() => this._onSelection(this);

    [DataSourceProperty]
    public MBBindingList<SavedGamePropertyVM> SavedGameProperties
    {
      get => this._savedGameProperties;
      set
      {
        if (value == this._savedGameProperties)
          return;
        this._savedGameProperties = value;
        this.OnPropertyChangedWithValue<MBBindingList<SavedGamePropertyVM>>(value, nameof (SavedGameProperties));
      }
    }

    [DataSourceProperty]
    public MBBindingList<SavedGameModuleInfoVM> LoadedModulesInSave
    {
      get => this._loadedModulesInSave;
      set
      {
        if (value == this._loadedModulesInSave)
          return;
        this._loadedModulesInSave = value;
        this.OnPropertyChangedWithValue<MBBindingList<SavedGameModuleInfoVM>>(value, nameof (LoadedModulesInSave));
      }
    }

    [DataSourceProperty]
    public string SaveVersionAsString
    {
      get => this._saveVersionAsString;
      set
      {
        if (!(value != this._saveVersionAsString))
          return;
        this._saveVersionAsString = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (SaveVersionAsString));
      }
    }

    [DataSourceProperty]
    public string DeleteText
    {
      get => this._deleteText;
      set
      {
        if (!(value != this._deleteText))
          return;
        this._deleteText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (DeleteText));
      }
    }

    [DataSourceProperty]
    public bool IsSelected
    {
      get => this._isSelected;
      set
      {
        if (value == this._isSelected)
          return;
        this._isSelected = value;
        this.OnPropertyChangedWithValue(value, nameof (IsSelected));
      }
    }

    [DataSourceProperty]
    public bool IsCorrupted
    {
      get => this._isCorrupted;
      set
      {
        if (value == this._isCorrupted)
          return;
        this._isCorrupted = value;
        this.OnPropertyChangedWithValue(value, nameof (IsCorrupted));
      }
    }

    [DataSourceProperty]
    public string BannerTextCode
    {
      get => this._bannerTextCode;
      set
      {
        if (!(value != this._bannerTextCode))
          return;
        this._bannerTextCode = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (BannerTextCode));
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

    [DataSourceProperty]
    public string OverrideSaveText
    {
      get => this._overwriteSaveText;
      set
      {
        if (!(value != this._overwriteSaveText))
          return;
        this._overwriteSaveText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (OverrideSaveText));
      }
    }

    [DataSourceProperty]
    public string UpdateSaveText
    {
      get => this._updateSaveText;
      set
      {
        if (!(value != this._updateSaveText))
          return;
        this._updateSaveText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (UpdateSaveText));
      }
    }

    [DataSourceProperty]
    public string ModulesText
    {
      get => this._modulesText;
      set
      {
        if (!(value != this._modulesText))
          return;
        this._modulesText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ModulesText));
      }
    }

    [DataSourceProperty]
    public string CorruptedSaveText
    {
      get => this._corruptedSaveText;
      set
      {
        if (!(value != this._corruptedSaveText))
          return;
        this._corruptedSaveText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CorruptedSaveText));
      }
    }

    [DataSourceProperty]
    public string NameText
    {
      get => this._nameText;
      set
      {
        if (!(value != this._nameText))
          return;
        this._nameText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (NameText));
      }
    }

    [DataSourceProperty]
    public string GameTimeText
    {
      get => this._gameTimeText;
      set
      {
        if (!(value != this._gameTimeText))
          return;
        this._gameTimeText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (GameTimeText));
      }
    }

    [DataSourceProperty]
    public string CharacterNameText
    {
      get => this._characterNameText;
      set
      {
        if (!(value != this._characterNameText))
          return;
        this._characterNameText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CharacterNameText));
      }
    }

    [DataSourceProperty]
    public string MainHeroVisualCode
    {
      get => this._mainHeroVisualCode;
      set
      {
        if (!(value != this._mainHeroVisualCode))
          return;
        this._mainHeroVisualCode = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (MainHeroVisualCode));
      }
    }

    [DataSourceProperty]
    public CharacterViewModel CharacterVisual
    {
      get => this._characterVisual;
      set
      {
        if (value == this._characterVisual)
          return;
        this._characterVisual = value;
        this.OnPropertyChangedWithValue<CharacterViewModel>(value, nameof (CharacterVisual));
      }
    }

    [DataSourceProperty]
    public ImageIdentifierVM ClanBanner
    {
      get => this._clanBanner;
      set
      {
        if (value == this._clanBanner)
          return;
        this._clanBanner = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (ClanBanner));
      }
    }

    [DataSourceProperty]
    public string RealTimeText1
    {
      get => this._realTimeText1;
      set
      {
        if (!(value != this._realTimeText1))
          return;
        this._realTimeText1 = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (RealTimeText1));
      }
    }

    [DataSourceProperty]
    public string RealTimeText2
    {
      get => this._realTimeText2;
      set
      {
        if (!(value != this._realTimeText2))
          return;
        this._realTimeText2 = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (RealTimeText2));
      }
    }

    [DataSourceProperty]
    public string LevelText
    {
      get => this._levelText;
      set
      {
        if (!(value != this._levelText))
          return;
        this._levelText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (LevelText));
      }
    }

    [DataSourceProperty]
    public HintViewModel DateTimeHint
    {
      get => this._dateTimeHint;
      set
      {
        if (value == this._dateTimeHint)
          return;
        this._dateTimeHint = value;
        this.OnPropertyChangedWithValue<HintViewModel>(value, nameof (DateTimeHint));
      }
    }

    [DataSourceProperty]
    public HintViewModel UpdateButtonHint
    {
      get => this._updateButtonHint;
      set
      {
        if (value == this._updateButtonHint)
          return;
        this._updateButtonHint = value;
        this.OnPropertyChangedWithValue<HintViewModel>(value, nameof (UpdateButtonHint));
      }
    }

    [DataSourceProperty]
    public HintViewModel DisabledReasonHint
    {
      get => this._disabledReasonHint;
      set
      {
        if (value == this._disabledReasonHint)
          return;
        this._disabledReasonHint = value;
        this.OnPropertyChangedWithValue<HintViewModel>(value, nameof (DisabledReasonHint));
      }
    }

    [DataSourceProperty]
    public bool IsFilteredOut
    {
      get => this._isFilteredOut;
      set
      {
        if (value == this._isFilteredOut)
          return;
        this._isFilteredOut = value;
        this.OnPropertyChangedWithValue(value, nameof (IsFilteredOut));
      }
    }

    [DataSourceProperty]
    public bool IsDisabled
    {
      get => this._isDisabled;
      set
      {
        if (value == this._isDisabled)
          return;
        this._isDisabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsDisabled));
      }
    }
  }
}
