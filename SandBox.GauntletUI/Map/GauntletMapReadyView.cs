// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapReadyView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapReadyView))]
  public class GauntletMapReadyView : MapReadyView
  {
    private BoolItemWithActionVM _dataSource;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new BoolItemWithActionVM((Action<object>) null, true, (object) null);
      this.Layer = (ScreenLayer) new GauntletLayer(9999);
      (this.Layer as GauntletLayer).LoadMovie("MapReadyBlocker", (ViewModel) this._dataSource);
      this.MapScreen.AddLayer(this.Layer);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      ((ViewModel) this._dataSource).OnFinalize();
      this.MapScreen.RemoveLayer(this.Layer);
      this.Layer = (ScreenLayer) null;
      this._dataSource = (BoolItemWithActionVM) null;
    }

    public override void SetIsMapSceneReady(bool isReady)
    {
      base.SetIsMapSceneReady(isReady);
      this._dataSource.IsActive = !isReady;
    }
  }
}
