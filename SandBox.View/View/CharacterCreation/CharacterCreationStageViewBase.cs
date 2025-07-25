// Decompiled with JetBrains decompiler
// Type: SandBox.View.CharacterCreation.CharacterCreationStageViewBase
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View.CharacterCreation
{
  public abstract class CharacterCreationStageViewBase : ICharacterCreationStageListener
  {
    protected readonly ControlCharacterCreationStage _affirmativeAction;
    protected readonly ControlCharacterCreationStage _negativeAction;
    protected readonly ControlCharacterCreationStage _refreshAction;
    protected readonly ControlCharacterCreationStageReturnInt _getTotalStageCountAction;
    protected readonly ControlCharacterCreationStageReturnInt _getCurrentStageIndexAction;
    protected readonly ControlCharacterCreationStageReturnInt _getFurthestIndexAction;
    protected readonly ControlCharacterCreationStageWithInt _goToIndexAction;
    protected readonly Vec3 _cameraPosition = new Vec3(6.45f, 4.35f, 1.6f);
    private bool _isEscapeOpen;

    protected CharacterCreationStageViewBase(
      ControlCharacterCreationStage affirmativeAction,
      ControlCharacterCreationStage negativeAction,
      ControlCharacterCreationStage refreshAction,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction,
      ControlCharacterCreationStageWithInt goToIndexAction)
    {
      this._affirmativeAction = affirmativeAction;
      this._negativeAction = negativeAction;
      this._refreshAction = refreshAction;
      this._getTotalStageCountAction = getTotalStageCountAction;
      this._getCurrentStageIndexAction = getCurrentStageIndexAction;
      this._getFurthestIndexAction = getFurthestIndexAction;
      this._goToIndexAction = goToIndexAction;
    }

    public virtual void SetGenericScene(Scene scene)
    {
    }

    protected virtual void OnRefresh() => this._refreshAction.Invoke();

    public abstract IEnumerable<ScreenLayer> GetLayers();

    public abstract void NextStage();

    public abstract void PreviousStage();

    void ICharacterCreationStageListener.OnStageFinalize() => this.OnFinalize();

    protected virtual void OnFinalize()
    {
    }

    public virtual void Tick(float dt)
    {
    }

    public abstract int GetVirtualStageCount();

    public virtual void GoToIndex(int index) => this._goToIndexAction.Invoke(index);

    public abstract void LoadEscapeMenuMovie();

    public abstract void ReleaseEscapeMenuMovie();

    public void HandleEscapeMenu(CharacterCreationStageViewBase view, ScreenLayer screenLayer)
    {
      if (!screenLayer.Input.IsHotKeyReleased("ToggleEscapeMenu"))
        return;
      if (this._isEscapeOpen)
        this.RemoveEscapeMenu(view);
      else
        this.OpenEscapeMenu(view);
    }

    private void OpenEscapeMenu(CharacterCreationStageViewBase view)
    {
      view.LoadEscapeMenuMovie();
      this._isEscapeOpen = true;
    }

    private void RemoveEscapeMenu(CharacterCreationStageViewBase view)
    {
      view.ReleaseEscapeMenuMovie();
      this._isEscapeOpen = false;
    }

    public List<EscapeMenuItemVM> GetEscapeMenuItems(CharacterCreationStageViewBase view)
    {
      TextObject characterCreationDisabledReason = GameTexts.FindText("str_pause_menu_disabled_hint", "CharacterCreation");
      return new List<EscapeMenuItemVM>()
      {
        new EscapeMenuItemVM(new TextObject("{=5Saniypu}Resume"), (Action<object>) (o => this.RemoveEscapeMenu(view)), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(false, TextObject.Empty)), true),
        new EscapeMenuItemVM(new TextObject("{=PXT6aA4J}Campaign Options"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, characterCreationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=NqarFr4P}Options"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, characterCreationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=bV75iwKa}Save"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, characterCreationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=e0KdfaNe}Save As"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, characterCreationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=9NuttOBC}Load"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, characterCreationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=AbEh2y8o}Save And Exit"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, characterCreationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=RamV6yLM}Exit to Main Menu"), (Action<object>) (o =>
        {
          this.RemoveEscapeMenu(view);
          view.OnFinalize();
          MBGameManager.EndGame();
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(false, TextObject.Empty)), false)
      };
    }
  }
}
