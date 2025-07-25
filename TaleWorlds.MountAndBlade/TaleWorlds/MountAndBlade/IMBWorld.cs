// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBWorld
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBWorld
  {
    [EngineMethod("get_global_time", false)]
    float GetGlobalTime(MBCommon.TimeType timeType);

    [EngineMethod("get_last_messages", false)]
    string GetLastMessages();

    [EngineMethod("get_game_type", false)]
    int GetGameType();

    [EngineMethod("set_game_type", false)]
    void SetGameType(int gameType);

    [EngineMethod("pause_game", false)]
    void PauseGame();

    [EngineMethod("unpause_game", false)]
    void UnpauseGame();

    [EngineMethod("set_mesh_used", false)]
    void SetMeshUsed(string meshName);

    [EngineMethod("set_material_used", false)]
    void SetMaterialUsed(string materialName);

    [EngineMethod("set_body_used", false)]
    void SetBodyUsed(string bodyName);

    [EngineMethod("fix_skeletons", false)]
    void FixSkeletons();

    [EngineMethod("check_resource_modifications", false)]
    void CheckResourceModifications();
  }
}
