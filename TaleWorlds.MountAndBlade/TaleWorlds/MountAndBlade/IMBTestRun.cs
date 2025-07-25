// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBTestRun
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBTestRun
  {
    [EngineMethod("auto_continue", false)]
    int AutoContinue(int type);

    [EngineMethod("get_fps", false)]
    int GetFPS();

    [EngineMethod("enter_edit_mode", false)]
    bool EnterEditMode();

    [EngineMethod("open_scene", false)]
    bool OpenScene(string sceneName);

    [EngineMethod("close_scene", false)]
    bool CloseScene();

    [EngineMethod("save_scene", false)]
    bool SaveScene();

    [EngineMethod("open_default_scene", false)]
    bool OpenDefaultScene();

    [EngineMethod("leave_edit_mode", false)]
    bool LeaveEditMode();

    [EngineMethod("new_scene", false)]
    bool NewScene();

    [EngineMethod("start_mission", false)]
    void StartMission();
  }
}
