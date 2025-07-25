// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DefaultStrikeMagnitudeModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DefaultStrikeMagnitudeModel : StrikeMagnitudeCalculationModel
  {
    public override float CalculateStrikeMagnitudeForMissile(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float missileSpeed)
    {
      float missileTotalDamage = collisionData.MissileTotalDamage;
      float startingBaseSpeed = collisionData.MissileStartingBaseSpeed;
      double num = (double) missileSpeed / (double) startingBaseSpeed;
      return (float) (num * num) * missileTotalDamage;
    }

    public override float CalculateStrikeMagnitudeForSwing(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float swingSpeed,
      float impactPointAsPercent,
      float extraLinearSpeed)
    {
      WeaponComponentData currentUsageItem = weapon.CurrentUsageItem;
      return CombatStatCalculator.CalculateStrikeMagnitudeForSwing(swingSpeed, impactPointAsPercent, weapon.Item.Weight, currentUsageItem.GetRealWeaponLength(), currentUsageItem.Inertia, currentUsageItem.CenterOfMass, extraLinearSpeed);
    }

    public override float CalculateStrikeMagnitudeForThrust(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float thrustWeaponSpeed,
      float extraLinearSpeed,
      bool isThrown = false)
    {
      return CombatStatCalculator.CalculateStrikeMagnitudeForThrust(thrustWeaponSpeed, weapon.Item.Weight, extraLinearSpeed, isThrown);
    }

    public override float ComputeRawDamage(
      DamageTypes damageType,
      float magnitude,
      float armorEffectiveness,
      float absorbedDamageRatio)
    {
      float factorByDamageType = this.GetBluntDamageFactorByDamageType(damageType);
      float num1 = (float) (50.0 / (50.0 + (double) armorEffectiveness));
      float num2 = magnitude * num1;
      float num3 = factorByDamageType * num2;
      float num4;
      switch (damageType)
      {
        case DamageTypes.Cut:
          num4 = MathF.Max(0.0f, num2 - armorEffectiveness * 0.5f);
          break;
        case DamageTypes.Pierce:
          num4 = MathF.Max(0.0f, num2 - armorEffectiveness * 0.33f);
          break;
        case DamageTypes.Blunt:
          num4 = MathF.Max(0.0f, num2 - armorEffectiveness * 0.2f);
          break;
        default:
          Debug.FailedAssert("Given damage type is invalid.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\ComponentInterfaces\\DefaultStrikeMagnitudeModel.cs", nameof (ComputeRawDamage), 59);
          return 0.0f;
      }
      return (num3 + (1f - factorByDamageType) * num4) * absorbedDamageRatio;
    }

    public override float GetBluntDamageFactorByDamageType(DamageTypes damageType)
    {
      float factorByDamageType = 0.0f;
      switch (damageType)
      {
        case DamageTypes.Cut:
          factorByDamageType = 0.1f;
          break;
        case DamageTypes.Pierce:
          factorByDamageType = 0.25f;
          break;
        case DamageTypes.Blunt:
          factorByDamageType = 0.6f;
          break;
      }
      return factorByDamageType;
    }

    public override float CalculateHorseArcheryFactor(BasicCharacterObject characterObject) => 100f;
  }
}
