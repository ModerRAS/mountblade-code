// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ComponentInterfaces.StrikeMagnitudeCalculationModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.ComponentInterfaces
{
  public abstract class StrikeMagnitudeCalculationModel : GameModel
  {
    public abstract float CalculateStrikeMagnitudeForMissile(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float missileSpeed);

    public abstract float CalculateStrikeMagnitudeForSwing(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float swingSpeed,
      float impactPointAsPercent,
      float extraLinearSpeed);

    public abstract float CalculateStrikeMagnitudeForThrust(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float thrustSpeed,
      float extraLinearSpeed,
      bool isThrown = false);

    public abstract float ComputeRawDamage(
      DamageTypes damageType,
      float magnitude,
      float armorEffectiveness,
      float absorbedDamageRatio);

    public abstract float GetBluntDamageFactorByDamageType(DamageTypes damageType);

    public abstract float CalculateHorseArcheryFactor(BasicCharacterObject characterObject);

    public virtual float CalculateAdjustedArmorForBlow(
      float baseArmor,
      BasicCharacterObject attackerCharacter,
      BasicCharacterObject attackerCaptainCharacter,
      BasicCharacterObject victimCharacter,
      BasicCharacterObject victimCaptainCharacter,
      WeaponComponentData weaponComponent)
    {
      return baseArmor;
    }
  }
}
