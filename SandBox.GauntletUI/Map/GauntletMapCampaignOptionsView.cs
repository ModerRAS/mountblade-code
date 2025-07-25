// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapCampaignOptionsView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.CampaignSystem.ViewModelCollection;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapCampaignOptionsView))]
  public class GauntletMapCampaignOptionsView : MapCampaignOptionsView
  {
    private CampaignOptionsVM _dataSource;
    private GauntletLayer _layerAsGauntletLayer;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new CampaignOptionsVM(new Action(this.OnClose));
      GauntletLayer gauntletLayer = new GauntletLayer(4401);
      gauntletLayer.IsFocusLayer = true;
      this.Layer = (ScreenLayer) gauntletLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._layerAsGauntletLayer.LoadMovie("CampaignOptions", (ViewModel) this._dataSource);
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.MapScreen.AddLayer(this.Layer);
      this.MapScreen.PauseAmbientSounds();
      ScreenManager.TrySetFocus(this.Layer);
    }

    private void OnClose() => MapScreen.Instance.CloseCampaignOptions();

    protected override void OnIdleTick(float dt)
    {
      this.OnFrameTick(dt);
      if (!this.Layer.Input.IsHotKeyReleased("Exit"))
        return;
      UISoundsHelper.PlayUISound("event:/ui/default");
      this._dataSource.ExecuteDone();
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.Layer.InputRestrictions.ResetInputRestrictions();
      this.MapScreen.RemoveLayer(this.Layer);
      this.MapScreen.RestartAmbientSounds();
      ScreenManager.TryLoseFocus(this.Layer);
      this.Layer = (ScreenLayer) null;
      this._dataSource = (CampaignOptionsVM) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
    }
  }
}
