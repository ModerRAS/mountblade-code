// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MeleeCollisionReaction
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Melee_collision_reaction", false)]
  public enum MeleeCollisionReaction
  {
    Invalid = -1, // 0xFFFFFFFF
    SlicedThrough = 0,
    ContinueChecking = 1,
    Stuck = 2,
    Bounced = 3,
    Staggered = 4,
  }
}
