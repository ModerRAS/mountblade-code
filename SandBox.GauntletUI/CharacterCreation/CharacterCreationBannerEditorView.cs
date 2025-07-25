// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.CharacterCreation.CharacterCreationBannerEditorView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.GauntletUI.BannerEditor;
using SandBox.View.CharacterCreation;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.CharacterCreation
{
  [CharacterCreationStageView(typeof (CharacterCreationBannerEditorStage))]
  public class CharacterCreationBannerEditorView : CharacterCreationStageViewBase
  {
    private readonly BannerEditorView _bannerEditorView;
    private bool _isFinalized;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;

    public CharacterCreationBannerEditorView(
      TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation characterCreation,
      ControlCharacterCreationStage affirmativeAction,
      TextObject affirmativeActionText,
      ControlCharacterCreationStage negativeAction,
      TextObject negativeActionText,
      ControlCharacterCreationStage onRefresh = null,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction = null,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction = null,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction = null,
      ControlCharacterCreationStageWithInt goToIndexAction = null)
      : this((BasicCharacterObject) CharacterObject.PlayerCharacter, Clan.PlayerClan.Banner, affirmativeAction, affirmativeActionText, negativeAction, negativeActionText, onRefresh, getCurrentStageIndexAction, getTotalStageCountAction, getFurthestIndexAction, goToIndexAction)
    {
    }

    public CharacterCreationBannerEditorView(
      BasicCharacterObject character,
      Banner banner,
      ControlCharacterCreationStage affirmativeAction,
      TextObject affirmativeActionText,
      ControlCharacterCreationStage negativeAction,
      TextObject negativeActionText,
      ControlCharacterCreationStage onRefresh = null,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction = null,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction = null,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction = null,
      ControlCharacterCreationStageWithInt goToIndexAction = null)
      : base(affirmativeAction, negativeAction, onRefresh, getTotalStageCountAction, getCurrentStageIndexAction, getFurthestIndexAction, goToIndexAction)
    {
      // ISSUE: method pointer
      this._bannerEditorView = new BannerEditorView(character, banner, new ControlCharacterCreationStage((object) this, __methodptr(AffirmativeAction)), affirmativeActionText, negativeAction, negativeActionText, onRefresh, getCurrentStageIndexAction, getTotalStageCountAction, getFurthestIndexAction, goToIndexAction);
    }

    public override IEnumerable<ScreenLayer> GetLayers()
    {
      return (IEnumerable<ScreenLayer>) new List<ScreenLayer>()
      {
        (ScreenLayer) this._bannerEditorView.SceneLayer,
        (ScreenLayer) this._bannerEditorView.GauntletLayer
      };
    }

    public override void PreviousStage() => this._bannerEditorView.Exit(true);

    public override void NextStage() => this._bannerEditorView.Exit(false);

    public override void Tick(float dt)
    {
      if (this._isFinalized)
        return;
      this._bannerEditorView.OnTick(dt);
      if (this._isFinalized)
        return;
      this.HandleEscapeMenu((CharacterCreationStageViewBase) this, (ScreenLayer) this._bannerEditorView.SceneLayer);
    }

    public override int GetVirtualStageCount() => 1;

    public override void GoToIndex(int index) => this._bannerEditorView.GoToIndex(index);

    protected override void OnFinalize()
    {
      this._bannerEditorView.OnDeactivate();
      this._bannerEditorView.OnFinalize();
      this._isFinalized = true;
      base.OnFinalize();
    }

    private void AffirmativeAction()
    {
      uint primaryColor = this._bannerEditorView.Banner.GetPrimaryColor();
      uint firstIconColor = this._bannerEditorView.Banner.GetFirstIconColor();
      Clan playerClan = Clan.PlayerClan;
      playerClan.Color = primaryColor;
      playerClan.Color2 = firstIconColor;
      playerClan.UpdateBannerColor(primaryColor, firstIconColor);
      (GameStateManager.Current.ActiveState as CharacterCreationState).CurrentCharacterCreationContent.SetPlayerBanner(this._bannerEditorView.Banner);
      this._affirmativeAction.Invoke();
    }

    public override void LoadEscapeMenuMovie()
    {
      this._escapeMenuDatasource = new EscapeMenuVM((IEnumerable<EscapeMenuItemVM>) this.GetEscapeMenuItems((CharacterCreationStageViewBase) this), (TextObject) null);
      this._escapeMenuMovie = this._bannerEditorView.GauntletLayer.LoadMovie("EscapeMenu", (ViewModel) this._escapeMenuDatasource);
    }

    public override void ReleaseEscapeMenuMovie()
    {
      this._bannerEditorView.GauntletLayer.ReleaseMovie(this._escapeMenuMovie);
      this._escapeMenuDatasource = (EscapeMenuVM) null;
      this._escapeMenuMovie = (IGauntletMovie) null;
    }
  }
}
