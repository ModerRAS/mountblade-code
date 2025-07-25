// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DamageParticleModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class DamageParticleModel : GameModel
  {
    public abstract void GetMeleeAttackBloodParticles(
      Agent attacker,
      Agent victim,
      in Blow blow,
      in AttackCollisionData collisionData,
      out HitParticleResultData particleResultData);

    public abstract void GetMeleeAttackSweatParticles(
      Agent attacker,
      Agent victim,
      in Blow blow,
      in AttackCollisionData collisionData,
      out HitParticleResultData particleResultData);

    public abstract int GetMissileAttackParticle(
      Agent attacker,
      Agent victim,
      in Blow blow,
      in AttackCollisionData collisionData);
  }
}
