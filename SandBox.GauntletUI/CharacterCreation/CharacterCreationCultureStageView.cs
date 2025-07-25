// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.CharacterCreation.CharacterCreationCultureStageView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.CharacterCreation;
using SandBox.View.Missions;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.CharacterCreation
{
  [CharacterCreationStageView(typeof (CharacterCreationCultureStage))]
  public class CharacterCreationCultureStageView : CharacterCreationStageViewBase
  {
    private const string CultureParameterId = "MissionCulture";
    private readonly IGauntletMovie _movie;
    private GauntletLayer GauntletLayer;
    private CharacterCreationCultureStageVM _dataSource;
    private SpriteCategory _characterCreationCategory;
    private SpriteCategory _bannerEditorCategory;
    private readonly TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation _characterCreation;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;

    public CharacterCreationCultureStageView(
      TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation characterCreation,
      ControlCharacterCreationStage affirmativeAction,
      TextObject affirmativeActionText,
      ControlCharacterCreationStage negativeAction,
      TextObject negativeActionText,
      ControlCharacterCreationStage onRefresh,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction,
      ControlCharacterCreationStageWithInt goToIndexAction)
      : base(affirmativeAction, negativeAction, onRefresh, getCurrentStageIndexAction, getTotalStageCountAction, getFurthestIndexAction, goToIndexAction)
    {
      this._characterCreation = characterCreation;
      GauntletLayer gauntletLayer = new GauntletLayer(1, shouldClear: true);
      gauntletLayer.IsFocusLayer = true;
      this.GauntletLayer = gauntletLayer;
      this.GauntletLayer.InputRestrictions.SetInputRestrictions();
      this.GauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      ScreenManager.TrySetFocus((ScreenLayer) this.GauntletLayer);
      this._dataSource = new CharacterCreationCultureStageVM(this._characterCreation, new Action(((CharacterCreationStageViewBase) this).NextStage), affirmativeActionText, new Action(((CharacterCreationStageViewBase) this).PreviousStage), negativeActionText, getCurrentStageIndexAction.Invoke(), getTotalStageCountAction.Invoke(), getFurthestIndexAction.Invoke(), new Action<int>(((CharacterCreationStageViewBase) this).GoToIndex), new Action<CultureObject>(this.OnCultureSelected));
      this._movie = this.GauntletLayer.LoadMovie("CharacterCreationCultureStage", (ViewModel) this._dataSource);
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._characterCreationCategory = spriteData.SpriteCategories["ui_charactercreation"];
      this._characterCreationCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      CharacterCreationContentBase instance = CharacterCreationContentBase.Instance;
      if ((instance != null ? (instance.CharacterCreationStages.Any<System.Type>((Func<System.Type, bool>) (c => c.IsEquivalentTo(typeof (CharacterCreationBannerEditorStage)))) ? 1 : 0) : 0) == 0)
        return;
      this._bannerEditorCategory = spriteData.SpriteCategories["ui_bannericons"];
      this._bannerEditorCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.GauntletLayer = (GauntletLayer) null;
      ((ViewModel) this._dataSource)?.OnFinalize();
      this._dataSource = (CharacterCreationCultureStageVM) null;
      this._characterCreationCategory.Unload();
    }

    private void HandleLayerInput()
    {
      if (this.GauntletLayer.Input.IsHotKeyReleased("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        ((CharacterCreationStageBaseVM) this._dataSource).OnPreviousStage();
      }
      else
      {
        if (!this.GauntletLayer.Input.IsHotKeyReleased("Confirm") || !((CharacterCreationStageBaseVM) this._dataSource).CanAdvance)
          return;
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        ((CharacterCreationStageBaseVM) this._dataSource).OnNextStage();
      }
    }

    public override void Tick(float dt)
    {
      base.Tick(dt);
      if (!this._dataSource.IsActive)
        return;
      this.HandleEscapeMenu((CharacterCreationStageViewBase) this, (ScreenLayer) this.GauntletLayer);
      this.HandleLayerInput();
    }

    public override void NextStage()
    {
      this._characterCreation.Name = NameGenerator.Current.GenerateFirstNameForPlayer(this._dataSource.CurrentSelectedCulture.Culture, Hero.MainHero.IsFemale).ToString();
      this._affirmativeAction.Invoke();
    }

    private void OnCultureSelected(CultureObject culture)
    {
      MissionSoundParametersView.SoundParameterMissionCulture parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.None;
      if (culture.StringId == "aserai")
        parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Aserai;
      else if (culture.StringId == "khuzait")
        parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Khuzait;
      else if (culture.StringId == "vlandia")
        parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Vlandia;
      else if (culture.StringId == "sturgia")
        parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Sturgia;
      else if (culture.StringId == "battania")
        parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Battania;
      else if (culture.StringId == "empire")
        parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Empire;
      SoundManager.SetGlobalParameter("MissionCulture", (float) parameterMissionCulture);
    }

    public override void PreviousStage() => Game.Current.GameStateManager.PopState();

    public override int GetVirtualStageCount() => 1;

    public override IEnumerable<ScreenLayer> GetLayers()
    {
      return (IEnumerable<ScreenLayer>) new List<ScreenLayer>()
      {
        (ScreenLayer) this.GauntletLayer
      };
    }

    public override void LoadEscapeMenuMovie()
    {
      this._escapeMenuDatasource = new EscapeMenuVM((IEnumerable<EscapeMenuItemVM>) this.GetEscapeMenuItems((CharacterCreationStageViewBase) this), (TextObject) null);
      this._escapeMenuMovie = this.GauntletLayer.LoadMovie("EscapeMenu", (ViewModel) this._escapeMenuDatasource);
    }

    public override void ReleaseEscapeMenuMovie()
    {
      this.GauntletLayer.ReleaseMovie(this._escapeMenuMovie);
      this._escapeMenuDatasource = (EscapeMenuVM) null;
      this._escapeMenuMovie = (IGauntletMovie) null;
    }
  }
}
