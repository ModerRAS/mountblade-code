// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CombatHitResultFlags
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [Flags]
  [EngineStruct("Combat_hit_result_flags", false)]
  public enum CombatHitResultFlags : byte
  {
    NormalHit = 0,
    HitWithStartOfTheAnimation = 1,
    HitWithArm = 2,
    HitWithBackOfTheWeapon = 4,
  }
}
