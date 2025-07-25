// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.Cheat.GameplayCheatsVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.ViewModelCollection.Input;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection.Map.Cheat
{
  public class GameplayCheatsVM : ViewModel
  {
    private readonly Action _onClose;
    private readonly IEnumerable<GameplayCheatBase> _initialCheatList;
    private readonly TextObject _mainTitleText;
    private List<CheatGroupItemVM> _activeCheatGroups;
    private string _title;
    private string _buttonCloseLabel;
    private MBBindingList<CheatItemBaseVM> _cheats;
    private InputKeyItemVM _closeInputKey;

    public GameplayCheatsVM(Action onClose, IEnumerable<GameplayCheatBase> cheats)
    {
      this._onClose = onClose;
      this._initialCheatList = cheats;
      this.Cheats = new MBBindingList<CheatItemBaseVM>();
      this._activeCheatGroups = new List<CheatGroupItemVM>();
      this._mainTitleText = new TextObject("{=OYtysXzk}Cheats");
      this.FillWithCheats(cheats);
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      for (int index = 0; index < this.Cheats.Count; ++index)
        this.Cheats[index].RefreshValues();
      if (this._activeCheatGroups.Count > 0)
      {
        TextObject textObject = new TextObject("{=1tiF5JhE}{TITLE} > {SUBTITLE}");
        for (int index = 0; index < this._activeCheatGroups.Count; ++index)
        {
          if (index == 0)
            textObject.SetTextVariable("TITLE", this._mainTitleText.ToString());
          else
            textObject.SetTextVariable("TITLE", textObject.ToString());
          textObject.SetTextVariable("SUBTITLE", this._activeCheatGroups[index].Name.ToString());
        }
        this.Title = textObject.ToString();
        this.ButtonCloseLabel = GameTexts.FindText("str_back").ToString();
      }
      else
      {
        this.Title = this._mainTitleText.ToString();
        this.ButtonCloseLabel = GameTexts.FindText("str_close").ToString();
      }
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.CloseInputKey?.OnFinalize();
    }

    private void FillWithCheats(IEnumerable<GameplayCheatBase> cheats)
    {
      this.Cheats.Clear();
      foreach (GameplayCheatBase cheat1 in cheats)
      {
        if (cheat1 is GameplayCheatItem cheat2)
          this.Cheats.Add((CheatItemBaseVM) new CheatActionItemVM(cheat2, new Action<CheatActionItemVM>(this.OnCheatActionExecuted)));
        else if (cheat1 is GameplayCheatGroup cheatGroup)
          this.Cheats.Add((CheatItemBaseVM) new CheatGroupItemVM(cheatGroup, new Action<CheatGroupItemVM>(this.OnCheatGroupSelected)));
      }
      this.RefreshValues();
    }

    private void OnCheatActionExecuted(CheatActionItemVM cheatItem)
    {
      this._activeCheatGroups.Clear();
      this.FillWithCheats(this._initialCheatList);
      TextObject textObject = new TextObject("{=1QAEyN2V}Cheat Used: {CHEAT}");
      textObject.SetTextVariable("CHEAT", cheatItem.Name.ToString());
      InformationManager.DisplayMessage(new InformationMessage(textObject.ToString()));
    }

    private void OnCheatGroupSelected(CheatGroupItemVM cheatGroup)
    {
      this._activeCheatGroups.Add(cheatGroup);
      this.FillWithCheats(cheatGroup?.CheatGroup?.GetCheats() ?? this._initialCheatList);
    }

    public void ExecuteClose()
    {
      if (this._activeCheatGroups.Count > 0)
      {
        this._activeCheatGroups.RemoveAt(this._activeCheatGroups.Count - 1);
        if (this._activeCheatGroups.Count > 0)
          this.FillWithCheats(this._activeCheatGroups[this._activeCheatGroups.Count - 1].CheatGroup.GetCheats());
        else
          this.FillWithCheats(this._initialCheatList);
      }
      else
      {
        Action onClose = this._onClose;
        if (onClose == null)
          return;
        onClose();
      }
    }

    [DataSourceProperty]
    public string Title
    {
      get => this._title;
      set
      {
        if (!(value != this._title))
          return;
        this._title = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Title));
      }
    }

    [DataSourceProperty]
    public string ButtonCloseLabel
    {
      get => this._buttonCloseLabel;
      set
      {
        if (!(value != this._buttonCloseLabel))
          return;
        this._buttonCloseLabel = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ButtonCloseLabel));
      }
    }

    [DataSourceProperty]
    public MBBindingList<CheatItemBaseVM> Cheats
    {
      get => this._cheats;
      set
      {
        if (value == this._cheats)
          return;
        this._cheats = value;
        this.OnPropertyChangedWithValue<MBBindingList<CheatItemBaseVM>>(value, nameof (Cheats));
      }
    }

    public void SetCloseInputKey(HotKey hotKey)
    {
      this.CloseInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
    }

    [DataSourceProperty]
    public InputKeyItemVM CloseInputKey
    {
      get => this._closeInputKey;
      set
      {
        if (value == this._closeInputKey)
          return;
        this._closeInputKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (CloseInputKey));
      }
    }
  }
}
