// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapBasicView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapBasicView))]
  public class GauntletMapBasicView : MapView
  {
    public GauntletLayer GauntletLayer { get; private set; }

    public GauntletLayer GauntletNameplateLayer { get; private set; }

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this.GauntletLayer = new GauntletLayer(100);
      this.GauntletLayer.InputRestrictions.SetInputRestrictions(false);
      this.GauntletLayer.Name = "BasicLayer";
      this.MapScreen.AddLayer((ScreenLayer) this.GauntletLayer);
      this.GauntletNameplateLayer = new GauntletLayer(90);
      this.GauntletNameplateLayer.InputRestrictions.SetInputRestrictions(false, InputUsageMask.MouseButtons | InputUsageMask.Keyboardkeys);
      this.MapScreen.AddLayer((ScreenLayer) this.GauntletNameplateLayer);
    }

    protected override void OnMapConversationStart()
    {
      base.OnMapConversationStart();
      this.GauntletLayer.TwoDimensionView.SetEnable(false);
      this.GauntletNameplateLayer.TwoDimensionView.SetEnable(false);
    }

    protected override void OnMapConversationOver()
    {
      base.OnMapConversationOver();
      this.GauntletLayer.TwoDimensionView.SetEnable(true);
      this.GauntletNameplateLayer.TwoDimensionView.SetEnable(true);
    }

    protected override void OnFinalize()
    {
      this.MapScreen.RemoveLayer((ScreenLayer) this.GauntletLayer);
      this.GauntletLayer = (GauntletLayer) null;
      base.OnFinalize();
    }
  }
}
