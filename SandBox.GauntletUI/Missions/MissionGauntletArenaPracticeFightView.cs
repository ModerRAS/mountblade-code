// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Missions.MissionGauntletArenaPracticeFightView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.Missions.MissionLogics.Arena;
using SandBox.View.Missions;
using SandBox.ViewModelCollection.Missions;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Missions
{
  [OverrideView(typeof (MissionArenaPracticeFightView))]
  public class MissionGauntletArenaPracticeFightView : MissionView
  {
    private MissionArenaPracticeFightVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private IGauntletMovie _movie;

    public override void OnMissionScreenInitialize()
    {
      base.OnMissionScreenInitialize();
      this._dataSource = new MissionArenaPracticeFightVM(this.Mission.GetMissionBehavior<ArenaPracticeFightMissionController>());
      this._gauntletLayer = new GauntletLayer(this.ViewOrderPriority);
      this._movie = this._gauntletLayer.LoadMovie("ArenaPracticeFight", (ViewModel) this._dataSource);
      this.MissionScreen.AddLayer((ScreenLayer) this._gauntletLayer);
    }

    public override void OnMissionScreenTick(float dt)
    {
      base.OnMissionScreenTick(dt);
      this._dataSource.Tick();
    }

    public override void OnMissionScreenFinalize()
    {
      this._dataSource.OnFinalize();
      this._gauntletLayer.ReleaseMovie(this._movie);
      this.MissionScreen.RemoveLayer((ScreenLayer) this._gauntletLayer);
      base.OnMissionScreenFinalize();
    }

    public override void OnPhotoModeActivated()
    {
      base.OnPhotoModeActivated();
      this._gauntletLayer.UIContext.ContextAlpha = 0.0f;
    }

    public override void OnPhotoModeDeactivated()
    {
      base.OnPhotoModeDeactivated();
      this._gauntletLayer.UIContext.ContextAlpha = 1f;
    }
  }
}
