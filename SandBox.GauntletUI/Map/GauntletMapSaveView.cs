// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapSaveView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection.SaveLoad;
using System;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapSaveView))]
  public class GauntletMapSaveView : MapView
  {
    private MapSaveVM _dataSource;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new MapSaveVM(new Action<bool>(this.OnStateChange));
      this.Layer = (ScreenLayer) new GauntletLayer(10000);
      (this.Layer as GauntletLayer).LoadMovie("MapSave", (ViewModel) this._dataSource);
      this.Layer.InputRestrictions.SetInputRestrictions(false, InputUsageMask.MouseButtons | InputUsageMask.Keyboardkeys);
      this.MapScreen.AddLayer(this.Layer);
    }

    private void OnStateChange(bool isActive)
    {
      if (isActive)
      {
        this.Layer.IsFocusLayer = true;
        ScreenManager.TrySetFocus(this.Layer);
        this.Layer.InputRestrictions.SetInputRestrictions(false);
      }
      else
      {
        this.Layer.IsFocusLayer = false;
        ScreenManager.TryLoseFocus(this.Layer);
        this.Layer.InputRestrictions.ResetInputRestrictions();
      }
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this._dataSource.OnFinalize();
      this.MapScreen.RemoveLayer(this.Layer);
      this.Layer = (ScreenLayer) null;
      this._dataSource = (MapSaveVM) null;
    }
  }
}
