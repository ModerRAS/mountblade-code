// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxStrikeMagnitudeModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxStrikeMagnitudeModel : StrikeMagnitudeCalculationModel
  {
    public override float CalculateHorseArcheryFactor(BasicCharacterObject characterObject) => 100f;

    public override float CalculateStrikeMagnitudeForMissile(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float missileSpeed)
    {
      BasicCharacterObject attackerAgentCharacter = attackInformation.AttackerAgentCharacter;
      WeaponComponentData currentUsageItem = weapon.CurrentUsageItem;
      float missileTotalDamage = collisionData.MissileTotalDamage;
      float startingBaseSpeed = collisionData.MissileStartingBaseSpeed;
      float num1 = missileSpeed;
      float num2 = missileSpeed - startingBaseSpeed;
      if ((double) num2 > 0.0)
      {
        ExplainedNumber bonuses = new ExplainedNumber();
        if (attackerAgentCharacter is CharacterObject character && character.IsHero)
        {
          WeaponClass ammoClass = currentUsageItem.AmmoClass;
          int num3;
          switch (ammoClass)
          {
            case WeaponClass.Stone:
            case WeaponClass.ThrowingAxe:
            case WeaponClass.ThrowingKnife:
              num3 = 1;
              break;
            default:
              num3 = ammoClass == WeaponClass.Javelin ? 1 : 0;
              break;
          }
          if (num3 != 0)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.RunningThrow, character, true, ref bonuses);
        }
        num1 += num2 * bonuses.ResultNumber;
      }
      float num4 = num1 / startingBaseSpeed;
      return num4 * num4 * missileTotalDamage;
    }

    public override float CalculateStrikeMagnitudeForSwing(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float swingSpeed,
      float impactPointAsPercent,
      float extraLinearSpeed)
    {
      BasicCharacterObject attackerAgentCharacter = attackInformation.AttackerAgentCharacter;
      BasicCharacterObject captainCharacter1 = attackInformation.AttackerCaptainCharacter;
      bool attackerHaveMountAgent = attackInformation.DoesAttackerHaveMountAgent;
      WeaponComponentData currentUsageItem = weapon.CurrentUsageItem;
      CharacterObject character = attackerAgentCharacter as CharacterObject;
      ExplainedNumber bonuses1 = new ExplainedNumber(extraLinearSpeed);
      if (character != null && (double) extraLinearSpeed > 0.0)
      {
        SkillObject relevantSkill = currentUsageItem.RelevantSkill;
        CharacterObject captainCharacter2 = captainCharacter1 as CharacterObject;
        if (attackerHaveMountAgent)
        {
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.NomadicTraditions, captainCharacter2, ref bonuses1);
        }
        else
        {
          if (relevantSkill == DefaultSkills.TwoHanded)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.RecklessCharge, character, true, ref bonuses1);
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Roguery.DashAndSlash, character, true, ref bonuses1);
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.SurgingBlow, character, true, ref bonuses1);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.SurgingBlow, captainCharacter2, ref bonuses1);
        }
        if (relevantSkill == DefaultSkills.Polearm)
        {
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.Lancer, captainCharacter2, ref bonuses1);
          if (attackerHaveMountAgent)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.Lancer, character, true, ref bonuses1);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.UnstoppableForce, captainCharacter2, ref bonuses1);
          }
        }
      }
      ItemObject itemObject = weapon.Item;
      float baseNumber = CombatStatCalculator.CalculateStrikeMagnitudeForSwing(swingSpeed, impactPointAsPercent, itemObject.Weight, currentUsageItem.GetRealWeaponLength(), currentUsageItem.Inertia, currentUsageItem.CenterOfMass, bonuses1.ResultNumber);
      if (itemObject.IsCraftedByPlayer)
      {
        ExplainedNumber bonuses2 = new ExplainedNumber(baseNumber);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crafting.SharpenedEdge, character, true, ref bonuses2);
        baseNumber = bonuses2.ResultNumber;
      }
      return baseNumber;
    }

    public override float CalculateStrikeMagnitudeForThrust(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float thrustWeaponSpeed,
      float extraLinearSpeed,
      bool isThrown = false)
    {
      BasicCharacterObject attackerAgentCharacter = attackInformation.AttackerAgentCharacter;
      BasicCharacterObject captainCharacter1 = attackInformation.AttackerCaptainCharacter;
      bool attackerHaveMountAgent = attackInformation.DoesAttackerHaveMountAgent;
      ItemObject itemObject = weapon.Item;
      float weight = itemObject.Weight;
      WeaponComponentData currentUsageItem = weapon.CurrentUsageItem;
      CharacterObject character = attackerAgentCharacter as CharacterObject;
      ExplainedNumber bonuses1 = new ExplainedNumber(extraLinearSpeed);
      if (character != null && (double) extraLinearSpeed > 0.0)
      {
        SkillObject relevantSkill = currentUsageItem.RelevantSkill;
        CharacterObject captainCharacter2 = captainCharacter1 as CharacterObject;
        if (attackerHaveMountAgent)
        {
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.NomadicTraditions, captainCharacter2, ref bonuses1);
        }
        else
        {
          if (relevantSkill == DefaultSkills.TwoHanded)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.RecklessCharge, character, true, ref bonuses1);
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Roguery.DashAndSlash, character, true, ref bonuses1);
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.SurgingBlow, character, true, ref bonuses1);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.SurgingBlow, captainCharacter2, ref bonuses1);
        }
        if (relevantSkill == DefaultSkills.Polearm)
        {
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.Lancer, captainCharacter2, ref bonuses1);
          if (attackerHaveMountAgent)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.Lancer, character, true, ref bonuses1);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.UnstoppableForce, captainCharacter2, ref bonuses1);
          }
        }
      }
      float baseNumber = CombatStatCalculator.CalculateStrikeMagnitudeForThrust(thrustWeaponSpeed, weight, bonuses1.ResultNumber, isThrown);
      if (itemObject.IsCraftedByPlayer)
      {
        ExplainedNumber bonuses2 = new ExplainedNumber(baseNumber);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crafting.SharpenedTip, character, true, ref bonuses2);
        baseNumber = bonuses2.ResultNumber;
      }
      return baseNumber;
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
          Debug.FailedAssert("Given damage type is invalid.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\GameComponents\\SandboxStrikeMagnitudeModel.cs", nameof (ComputeRawDamage), 210);
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

    public override float CalculateAdjustedArmorForBlow(
      float baseArmor,
      BasicCharacterObject attackerCharacter,
      BasicCharacterObject attackerCaptainCharacter,
      BasicCharacterObject victimCharacter,
      BasicCharacterObject victimCaptainCharacter,
      WeaponComponentData weaponComponent)
    {
      bool flag = false;
      float adjustedArmorForBlow = baseArmor;
      CharacterObject character = attackerCharacter as CharacterObject;
      CharacterObject captainCharacter = attackerCaptainCharacter as CharacterObject;
      if (attackerCharacter == captainCharacter)
        captainCharacter = (CharacterObject) null;
      if ((double) adjustedArmorForBlow > 0.0 && character != null)
      {
        if (weaponComponent != null && weaponComponent.RelevantSkill == DefaultSkills.Crossbow && character.GetPerkValue(DefaultPerks.Crossbow.Piercer) && (double) baseArmor < (double) DefaultPerks.Crossbow.Piercer.PrimaryBonus)
          flag = true;
        if (flag)
        {
          adjustedArmorForBlow = 0.0f;
        }
        else
        {
          ExplainedNumber bonuses = new ExplainedNumber(baseArmor);
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.Vandal, character, true, ref bonuses);
          if (weaponComponent != null)
          {
            if (weaponComponent.RelevantSkill == DefaultSkills.OneHanded)
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.ChinkInTheArmor, character, true, ref bonuses);
            else if (weaponComponent.RelevantSkill == DefaultSkills.Bow)
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.Bodkin, character, true, ref bonuses);
              if (captainCharacter != null)
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.Bodkin, captainCharacter, ref bonuses);
            }
            else if (weaponComponent.RelevantSkill == DefaultSkills.Crossbow)
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.Puncture, character, true, ref bonuses);
              if (captainCharacter != null)
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.Puncture, captainCharacter, ref bonuses);
            }
            else if (weaponComponent.RelevantSkill == DefaultSkills.Throwing)
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.WeakSpot, character, true, ref bonuses);
              if (captainCharacter != null)
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.WeakSpot, captainCharacter, ref bonuses);
            }
          }
          float num = bonuses.ResultNumber - baseArmor;
          adjustedArmorForBlow = MathF.Max(0.0f, baseArmor - num);
        }
      }
      return adjustedArmorForBlow;
    }
  }
}
