// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Missions.MissionGauntletBarterView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.Barter;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.Missions
{
  [OverrideView(typeof (BarterView))]
  public class MissionGauntletBarterView : MissionView
  {
    private GauntletLayer _gauntletLayer;
    private BarterVM _dataSource;
    private BarterManager _barter;
    private SpriteCategory _barterCategory;

    public override void AfterStart()
    {
      base.AfterStart();
      this._barter = Campaign.Current.BarterManager;
      this._barter.BarterBegin += new BarterManager.BarterBeginEventDelegate(this.OnBarterBegin);
      this._barter.Closed += new BarterManager.BarterCloseEventDelegate(this.OnBarterClosed);
    }

    private void OnBarterBegin(BarterData args)
    {
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._barterCategory = spriteData.SpriteCategories["ui_barter"];
      this._barterCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._dataSource = new BarterVM(args);
      this._dataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._gauntletLayer = new GauntletLayer(this.ViewOrderPriority, "Barter");
      this._gauntletLayer.LoadMovie("BarterScreen", (ViewModel) this._dataSource);
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.IsFocusLayer = true;
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this.MissionScreen.AddLayer((ScreenLayer) this._gauntletLayer);
      this.MissionScreen.SetLayerCategoriesStateAndDeactivateOthers(new string[2]
      {
        "SceneLayer",
        "Barter"
      }, true);
    }

    public override void OnMissionScreenTick(float dt)
    {
      base.OnMissionScreenTick(dt);
      BarterItemVM.IsFiveStackModifierActive = this.IsDownInGauntletLayer("FiveStackModifier");
      BarterItemVM.IsEntireStackModifierActive = this.IsDownInGauntletLayer("EntireStackModifier");
      if (this.IsReleasedInGauntletLayer("Confirm"))
      {
        if (this._dataSource.IsOfferDisabled)
          return;
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteOffer();
      }
      else if (this.IsReleasedInGauntletLayer("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteCancel();
      }
      else
      {
        if (!this.IsReleasedInGauntletLayer("Reset"))
          return;
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteReset();
      }
    }

    private bool IsDownInGauntletLayer(string hotKeyID)
    {
      GauntletLayer gauntletLayer = this._gauntletLayer;
      return gauntletLayer != null && gauntletLayer.Input.IsHotKeyDown(hotKeyID);
    }

    private bool IsReleasedInGauntletLayer(string hotKeyID)
    {
      GauntletLayer gauntletLayer = this._gauntletLayer;
      return gauntletLayer != null && gauntletLayer.Input.IsHotKeyReleased(hotKeyID);
    }

    public override void OnMissionScreenFinalize()
    {
      base.OnMissionScreenFinalize();
      this._barter.BarterBegin -= new BarterManager.BarterBeginEventDelegate(this.OnBarterBegin);
      this._barter.Closed -= new BarterManager.BarterCloseEventDelegate(this.OnBarterClosed);
      this._gauntletLayer = (GauntletLayer) null;
      ((ViewModel) this._dataSource)?.OnFinalize();
      this._dataSource = (BarterVM) null;
    }

    private void OnBarterClosed()
    {
      this.MissionScreen.SetLayerCategoriesState(new string[1]
      {
        "Barter"
      }, false);
      this.MissionScreen.SetLayerCategoriesState(new string[1]
      {
        "Conversation"
      }, true);
      this.MissionScreen.SetLayerCategoriesState(new string[1]
      {
        "SceneLayer"
      }, true);
      BarterItemVM.IsFiveStackModifierActive = false;
      BarterItemVM.IsEntireStackModifierActive = false;
      this._barterCategory.Unload();
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.InputRestrictions.ResetInputRestrictions();
      this.MissionScreen.RemoveLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer = (GauntletLayer) null;
      this._dataSource = (BarterVM) null;
    }

    public override void OnPhotoModeActivated()
    {
      base.OnPhotoModeActivated();
      if (this._gauntletLayer == null)
        return;
      this._gauntletLayer.UIContext.ContextAlpha = 0.0f;
    }

    public override void OnPhotoModeDeactivated()
    {
      base.OnPhotoModeDeactivated();
      if (this._gauntletLayer == null)
        return;
      this._gauntletLayer.UIContext.ContextAlpha = 1f;
    }

    public override bool IsOpeningEscapeMenuOnFocusChangeAllowed() => true;
  }
}
