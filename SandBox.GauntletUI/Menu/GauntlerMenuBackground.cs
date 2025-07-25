// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Menu.GauntlerMenuBackground
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Menu;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Menu
{
  [OverrideView(typeof (MenuBackgroundView))]
  public class GauntlerMenuBackground : MenuView
  {
    private IGauntletMovie _movie;

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this.Layer = (ScreenLayer) this.MenuViewContext.FindLayer<GauntletLayer>("BasicLayer");
      if (this.Layer == null)
      {
        GauntletLayer gauntletLayer = new GauntletLayer(100);
        gauntletLayer.Name = "BasicLayer";
        this.Layer = (ScreenLayer) gauntletLayer;
        this.MenuViewContext.AddLayer(this.Layer);
      }
      this._movie = (this.Layer as GauntletLayer).LoadMovie("GameMenuBackground", (ViewModel) null);
      this.Layer.InputRestrictions.SetInputRestrictions();
    }

    protected override void OnFinalize()
    {
      if (this.Layer is GauntletLayer layer)
        layer.ReleaseMovie(this._movie);
      this.Layer = (ScreenLayer) null;
      this._movie = (IGauntletMovie) null;
      base.OnFinalize();
    }
  }
}
