// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapBarView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapBarView))]
  public class GauntletMapBarView : MapView
  {
    private GauntletMapBarGlobalLayer _gauntletMapBarGlobalLayer;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._gauntletMapBarGlobalLayer = new GauntletMapBarGlobalLayer();
      this._gauntletMapBarGlobalLayer.Initialize(this.MapScreen, 8.5f);
      ScreenManager.AddGlobalLayer((GlobalLayer) this._gauntletMapBarGlobalLayer, true);
    }

    protected override void OnFinalize()
    {
      this._gauntletMapBarGlobalLayer.OnFinalize();
      ScreenManager.RemoveGlobalLayer((GlobalLayer) this._gauntletMapBarGlobalLayer);
      base.OnFinalize();
    }

    protected override void OnResume()
    {
      base.OnResume();
      this._gauntletMapBarGlobalLayer.Refresh();
    }

    protected override bool IsEscaped() => this._gauntletMapBarGlobalLayer.IsEscaped();

    protected override void OnMapConversationStart()
    {
      this._gauntletMapBarGlobalLayer.OnMapConversationStart();
    }

    protected override void OnMapConversationOver()
    {
      this._gauntletMapBarGlobalLayer.OnMapConversationEnd();
    }
  }
}
