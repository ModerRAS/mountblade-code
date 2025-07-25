// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionItemCalatogView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Missions.MissionLogics;
using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionItemCalatogView : MissionView
  {
    private ItemCatalogController _itemCatalogController;

    public override void AfterStart()
    {
      base.AfterStart();
      this._itemCatalogController = this.Mission.GetMissionBehavior<ItemCatalogController>();
      this._itemCatalogController.BeforeCatalogTick += new ItemCatalogController.BeforeCatalogTickDelegate(this.OnBeforeCatalogTick);
      this._itemCatalogController.AfterCatalogTick += new Action(this.OnAfterCatalogTick);
    }

    private void OnBeforeCatalogTick(int currentItemIndex)
    {
      Utilities.TakeScreenshot("ItemCatalog/" + (object) this._itemCatalogController.AllItems[currentItemIndex - 1].Name + ".bmp");
    }

    private void OnAfterCatalogTick()
    {
      MatrixFrame cameraFrame = new MatrixFrame();
      Vec3 lookDirection = this.Mission.MainAgent.LookDirection;
      cameraFrame.origin = this.Mission.MainAgent.Position + lookDirection * 2f + new Vec3(z: 1.273f);
      cameraFrame.rotation.u = lookDirection;
      cameraFrame.rotation.s = new Vec3(1f);
      cameraFrame.rotation.f = new Vec3(z: 1f);
      cameraFrame.rotation.Orthonormalize();
      this.Mission.SetCameraFrame(ref cameraFrame, 1f);
      Camera camera = Camera.CreateCamera();
      camera.Frame = cameraFrame;
      this.MissionScreen.CustomCamera = camera;
    }
  }
}
