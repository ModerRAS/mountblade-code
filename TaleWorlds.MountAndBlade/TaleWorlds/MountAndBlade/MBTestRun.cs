// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBTestRun
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MBTestRun
  {
    public static bool EnterEditMode() => MBAPI.IMBTestRun.EnterEditMode();

    public static bool NewScene() => MBAPI.IMBTestRun.NewScene();

    public static bool LeaveEditMode() => MBAPI.IMBTestRun.LeaveEditMode();

    public static bool OpenScene(string sceneName) => MBAPI.IMBTestRun.OpenScene(sceneName);

    public static bool CloseScene() => MBAPI.IMBTestRun.CloseScene();

    public static bool SaveScene() => false;

    public static bool OpenDefaultScene() => false;

    public static int GetFPS() => MBAPI.IMBTestRun.GetFPS();

    public static void StartMission() => MBAPI.IMBTestRun.StartMission();
  }
}
