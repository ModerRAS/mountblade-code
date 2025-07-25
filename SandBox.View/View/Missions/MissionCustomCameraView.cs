// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionCustomCameraView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionCustomCameraView : MissionView
  {
    public string tag = "customcamera";
    private readonly List<Camera> _cameras = new List<Camera>();
    public Vec3 _dofParams;
    private int _currentCameraIndex;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      foreach (GameEntity gameEntity in this.Mission.Scene.FindEntitiesWithTag(this.tag))
      {
        Camera camera = Camera.CreateCamera();
        Camera cam = camera;
        ref Vec3 local = ref this._dofParams;
        gameEntity.GetCameraParamsFromCameraScript(cam, ref local);
        this._cameras.Add(camera);
      }
      this.MissionScreen.CustomCamera = this._cameras[0];
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (!this.DebugInput.IsHotKeyReleased("CustomCameraMissionViewHotkeyIncreaseCustomCameraIndex"))
        return;
      ++this._currentCameraIndex;
      if (this._currentCameraIndex >= this._cameras.Count)
        this._currentCameraIndex = 0;
      this.MissionScreen.CustomCamera = this._cameras[this._currentCameraIndex];
    }
  }
}
