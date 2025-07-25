// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMarriageOfferPopupView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.Map.MarriageOfferPopup;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MarriageOfferPopupView))]
  public class GauntletMarriageOfferPopupView : MapView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private MarriageOfferPopupVM _dataSource;
    private IGauntletMovie _movie;
    private Hero _suitor;
    private Hero _maiden;

    public GauntletMarriageOfferPopupView(Hero suitor, Hero maiden)
    {
      this._suitor = suitor;
      this._maiden = maiden;
    }

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new MarriageOfferPopupVM(this._suitor, this._maiden);
      this.InitializeKeyVisuals();
      this.Layer = (ScreenLayer) new GauntletLayer(201);
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.Layer.IsFocusLayer = true;
      ScreenManager.TrySetFocus(this.Layer);
      this._movie = this._layerAsGauntletLayer.LoadMovie("MarriageOfferPopup", (ViewModel) this._dataSource);
      this.MapScreen.AddLayer(this.Layer);
      this.MapScreen.SetIsMarriageOfferPopupActive(true);
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      Campaign.Current.SetTimeControlModeLock(true);
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this.HandleInput();
      this._dataSource?.Update();
    }

    protected override void OnMenuModeTick(float dt)
    {
      base.OnMenuModeTick(dt);
      this.HandleInput();
      this._dataSource?.Update();
    }

    protected override void OnIdleTick(float dt)
    {
      base.OnIdleTick(dt);
      this.HandleInput();
      this._dataSource?.Update();
    }

    protected override void OnFinalize()
    {
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this.MapScreen.RemoveLayer(this.Layer);
      this._movie = (IGauntletMovie) null;
      this._dataSource = (MarriageOfferPopupVM) null;
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.MapScreen.SetIsMarriageOfferPopupActive(false);
      Campaign.Current.SetTimeControlModeLock(false);
      base.OnFinalize();
    }

    protected override bool IsEscaped()
    {
      this._dataSource?.ExecuteDeclineOffer();
      return true;
    }

    protected override bool IsOpeningEscapeMenuOnFocusChangeAllowed() => false;

    private void HandleInput()
    {
      if (this._dataSource == null)
        return;
      if (this.Layer.Input.IsGameKeyPressed(39))
        this.MapScreen.OpenEncyclopedia();
      else if (this.Layer.Input.IsHotKeyReleased("Confirm"))
      {
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        this._dataSource.ExecuteAcceptOffer();
      }
      else
      {
        if (!this.Layer.Input.IsHotKeyReleased("Exit"))
          return;
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        this._dataSource.ExecuteDeclineOffer();
      }
    }

    private void InitializeKeyVisuals()
    {
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
    }
  }
}
