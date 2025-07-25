// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Blow
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Runtime.InteropServices;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Blow", false)]
  public struct Blow
  {
    public BlowWeaponRecord WeaponRecord;
    public Vec3 GlobalPosition;
    public Vec3 Direction;
    public Vec3 SwingDirection;
    public int InflictedDamage;
    public int SelfInflictedDamage;
    public float BaseMagnitude;
    public float DefenderStunPeriod;
    public float AttackerStunPeriod;
    public float AbsorbedByArmor;
    public float MovementSpeedDamageModifier;
    public StrikeType StrikeType;
    public AgentAttackType AttackType;
    [CustomEngineStructMemberData("blow_flags")]
    public BlowFlags BlowFlag;
    public int OwnerId;
    public sbyte BoneIndex;
    public BoneBodyPartType VictimBodyPart;
    public DamageTypes DamageType;
    [MarshalAs(UnmanagedType.U1)]
    public bool NoIgnore;
    [MarshalAs(UnmanagedType.U1)]
    public bool DamageCalculated;
    [MarshalAs(UnmanagedType.U1)]
    public bool IsFallDamage;
    public float DamagedPercentage;

    public Blow(int ownerId)
      : this()
    {
      this.OwnerId = ownerId;
    }

    public bool IsMissile => this.WeaponRecord.IsMissile;

    public bool IsBlowCrit(int maxHitPointsOfVictim)
    {
      return (double) this.InflictedDamage > (double) maxHitPointsOfVictim * 0.5;
    }

    public bool IsBlowLow(int maxHitPointsOfVictim)
    {
      return (double) this.InflictedDamage <= (double) maxHitPointsOfVictim * 0.10000000149011612;
    }

    public bool IsHeadShot() => this.VictimBodyPart == BoneBodyPartType.Head;
  }
}
