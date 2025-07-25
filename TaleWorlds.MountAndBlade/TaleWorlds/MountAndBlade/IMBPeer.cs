// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBPeer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBPeer
  {
    [EngineMethod("set_user_data", false)]
    void SetUserData(int index, MBNetworkPeer data);

    [EngineMethod("set_controlled_agent", false)]
    void SetControlledAgent(int index, UIntPtr missionPointer, int agentIndex);

    [EngineMethod("set_team", false)]
    void SetTeam(int index, int teamIndex);

    [EngineMethod("is_active", false)]
    bool IsActive(int index);

    [EngineMethod("set_is_synchronized", false)]
    void SetIsSynchronized(int index, bool value);

    [EngineMethod("get_is_synchronized", false)]
    bool GetIsSynchronized(int index);

    [EngineMethod("send_existing_objects", false)]
    void SendExistingObjects(int index, UIntPtr missionPointer);

    [EngineMethod("begin_module_event", false)]
    void BeginModuleEvent(int index, bool isReliable);

    [EngineMethod("end_module_event", false)]
    void EndModuleEvent(bool isReliable);

    [EngineMethod("get_average_ping_in_milliseconds", false)]
    double GetAveragePingInMilliseconds(int index);

    [EngineMethod("get_average_loss_percent", false)]
    double GetAverageLossPercent(int index);

    [EngineMethod("set_relevant_game_options", false)]
    void SetRelevantGameOptions(int index, bool sendMeBloodEvents, bool sendMeSoundEvents);

    [EngineMethod("get_reversed_host", false)]
    uint GetReversedHost(int index);

    [EngineMethod("get_host", false)]
    uint GetHost(int index);

    [EngineMethod("get_port", false)]
    ushort GetPort(int index);
  }
}
