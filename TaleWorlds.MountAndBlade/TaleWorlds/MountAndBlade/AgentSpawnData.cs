// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AgentSpawnData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Agent_spawn_data", false)]
  public struct AgentSpawnData
  {
    public int HitPoints;
    public int MonsterUsageIndex;
    public int Weight;
    public float StandingChestHeight;
    public float StandingPelvisHeight;
    public float StandingEyeHeight;
    public float CrouchEyeHeight;
    public float MountedEyeHeight;
    public float RiderEyeHeightAdder;
    public float JumpAcceleration;
    public Vec3 EyeOffsetWrtHead;
    public Vec3 FirstPersonCameraOffsetWrtHead;
    public float RiderCameraHeightAdder;
    public float RiderBodyCapsuleHeightAdder;
    public float RiderBodyCapsuleForwardAdder;
    public float ArmLength;
    public float ArmWeight;
    public float JumpSpeedLimit;
    public float RelativeSpeedLimitForCharge;
  }
}
