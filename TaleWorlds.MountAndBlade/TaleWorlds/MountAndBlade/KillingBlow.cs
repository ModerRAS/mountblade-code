// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.KillingBlow
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
  [EngineStruct("Killing_blow", false)]
  public struct KillingBlow
  {
    public Vec3 RagdollImpulseLocalPoint;
    public Vec3 RagdollImpulseAmount;
    public int DeathAction;
    public DamageTypes DamageType;
    public AgentAttackType AttackType;
    public int OwnerId;
    public BoneBodyPartType VictimBodyPart;
    public int WeaponClass;
    public Agent.KillInfo OverrideKillInfo;
    public Vec3 BlowPosition;
    public WeaponFlags WeaponRecordWeaponFlags;
    public int WeaponItemKind;
    public int InflictedDamage;
    [MarshalAs(UnmanagedType.U1)]
    public bool IsMissile;
    [MarshalAs(UnmanagedType.U1)]
    public bool IsValid;

    public KillingBlow(
      Blow b,
      Vec3 ragdollImpulsePoint,
      Vec3 ragdollImpulseAmount,
      int deathAction,
      int weaponItemKind,
      Agent.KillInfo overrideKillInfo = Agent.KillInfo.Invalid)
    {
      this.RagdollImpulseLocalPoint = ragdollImpulsePoint;
      this.RagdollImpulseAmount = ragdollImpulseAmount;
      this.DeathAction = deathAction;
      this.OverrideKillInfo = overrideKillInfo;
      this.DamageType = b.DamageType;
      this.AttackType = b.AttackType;
      this.OwnerId = b.OwnerId;
      this.VictimBodyPart = b.VictimBodyPart;
      this.WeaponClass = (int) b.WeaponRecord.WeaponClass;
      this.BlowPosition = b.GlobalPosition;
      this.WeaponRecordWeaponFlags = b.WeaponRecord.WeaponFlags;
      this.WeaponItemKind = weaponItemKind;
      this.InflictedDamage = b.InflictedDamage;
      this.IsMissile = b.IsMissile;
      this.IsValid = true;
    }

    public bool IsHeadShot() => this.VictimBodyPart == BoneBodyPartType.Head;
  }
}
