// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomAgentApplyDamageModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using MBHelpers;
using System;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomAgentApplyDamageModel : AgentApplyDamageModel
  {
    private const float SallyOutSiegeEngineDamageMultiplier = 4.5f;

    public override float CalculateDamage(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float baseDamage)
    {
      BasicCharacterObject basicCharacterObject1 = attackInformation.IsAttackerAgentMount ? attackInformation.AttackerRiderAgentCharacter : attackInformation.AttackerAgentCharacter;
      BannerComponent activeBanner1 = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(attackInformation.AttackerFormation);
      BasicCharacterObject basicCharacterObject2 = attackInformation.IsVictimAgentMount ? attackInformation.VictimRiderAgentCharacter : attackInformation.VictimAgentCharacter;
      BannerComponent activeBanner2 = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(attackInformation.VictimFormation);
      FactoredNumber bonuses = new FactoredNumber(baseDamage);
      WeaponComponentData currentUsageItem = weapon.CurrentUsageItem;
      if (basicCharacterObject1 != null)
      {
        if (currentUsageItem != null)
        {
          if (currentUsageItem.IsMeleeWeapon)
          {
            if (activeBanner1 != null)
            {
              BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedMeleeDamage, activeBanner1, ref bonuses);
              if (attackInformation.DoesVictimHaveMountAgent)
                BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedMeleeDamageAgainstMountedTroops, activeBanner1, ref bonuses);
            }
          }
          else if (currentUsageItem.IsConsumable && activeBanner1 != null)
            BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedRangedDamage, activeBanner1, ref bonuses);
        }
        if (collisionData.IsHorseCharge && activeBanner1 != null)
          BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedChargeDamage, activeBanner1, ref bonuses);
      }
      float num = 1f;
      if (Mission.Current.IsSallyOutBattle)
      {
        DestructableComponent destructibleComponent = attackInformation.HitObjectDestructibleComponent;
        if (destructibleComponent != null && destructibleComponent.GameEntity.GetFirstScriptOfType<SiegeWeapon>() != null)
          num *= 4.5f;
      }
      bonuses = new FactoredNumber(bonuses.ResultNumber * num);
      if (basicCharacterObject2 != null && currentUsageItem != null)
      {
        if (currentUsageItem.IsConsumable)
        {
          if (activeBanner2 != null)
            BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedRangedAttackDamage, activeBanner2, ref bonuses);
        }
        else if (currentUsageItem.IsMeleeWeapon && activeBanner2 != null)
          BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedMeleeAttackDamage, activeBanner2, ref bonuses);
      }
      return MathF.Max(0.0f, bonuses.ResultNumber);
    }

    public override void DecideMissileWeaponFlags(
      Agent attackerAgent,
      MissionWeapon missileWeapon,
      ref WeaponFlags missileWeaponFlags)
    {
    }

    public override bool DecideCrushedThrough(
      Agent attackerAgent,
      Agent defenderAgent,
      float totalAttackEnergy,
      Agent.UsageDirection attackDirection,
      StrikeType strikeType,
      WeaponComponentData defendItem,
      bool isPassiveUsage)
    {
      EquipmentIndex wieldedItemIndex = attackerAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      if (wieldedItemIndex == EquipmentIndex.None)
        wieldedItemIndex = attackerAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      WeaponComponentData currentUsageItem = wieldedItemIndex != EquipmentIndex.None ? attackerAgent.Equipment[wieldedItemIndex].CurrentUsageItem : (WeaponComponentData) null;
      if (currentUsageItem == null | isPassiveUsage || !currentUsageItem.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanCrushThrough) || strikeType != StrikeType.Swing || attackDirection != Agent.UsageDirection.AttackUp)
        return false;
      float num = 58f;
      if (defendItem != null && defendItem.IsShield)
        num *= 1.2f;
      return (double) totalAttackEnergy > (double) num;
    }

    public override bool CanWeaponDismount(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData collisionData)
    {
      if (!MBMath.IsBetween((int) blow.VictimBodyPart, 0, 6))
        return false;
      if (!attackerAgent.HasMount && blow.StrikeType == StrikeType.Swing && blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanHook))
        return true;
      return blow.StrikeType == StrikeType.Thrust && blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanDismount);
    }

    public override void CalculateDefendedBlowStunMultipliers(
      Agent attackerAgent,
      Agent defenderAgent,
      CombatCollisionResult collisionResult,
      WeaponComponentData attackerWeapon,
      WeaponComponentData defenderWeapon,
      out float attackerStunMultiplier,
      out float defenderStunMultiplier)
    {
      attackerStunMultiplier = 1f;
      defenderStunMultiplier = 1f;
    }

    public override bool CanWeaponKnockback(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData collisionData)
    {
      if (!MBMath.IsBetween((int) collisionData.VictimHitBodyPart, 0, 6) || attackerWeapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanKnockDown))
        return false;
      if (attackerWeapon.IsConsumable || (blow.BlowFlag & BlowFlags.CrushThrough) != BlowFlags.None)
        return true;
      return blow.StrikeType == StrikeType.Thrust && blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.WideGrip);
    }

    public override bool CanWeaponKnockDown(
      Agent attackerAgent,
      Agent victimAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData collisionData)
    {
      if (attackerWeapon.WeaponClass == WeaponClass.Boulder)
        return true;
      BoneBodyPartType victimHitBodyPart = collisionData.VictimHitBodyPart;
      bool flag = MBMath.IsBetween((int) victimHitBodyPart, 0, 6);
      if (!victimAgent.HasMount && victimHitBodyPart == BoneBodyPartType.Legs)
        flag = true;
      if (!flag || !blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanKnockDown))
        return false;
      if (attackerWeapon.IsPolearm && blow.StrikeType == StrikeType.Thrust)
        return true;
      return attackerWeapon.IsMeleeWeapon && blow.StrikeType == StrikeType.Swing && MissionCombatMechanicsHelper.DecideSweetSpotCollision(in collisionData);
    }

    public override float GetDismountPenetration(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      float dismountPenetration = 0.0f;
      if (blow.StrikeType == StrikeType.Swing && blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanHook))
        dismountPenetration += 0.25f;
      return dismountPenetration;
    }

    public override float GetKnockBackPenetration(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      return 0.0f;
    }

    public override float GetKnockDownPenetration(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      float knockDownPenetration = 0.0f;
      if (attackerWeapon.WeaponClass == WeaponClass.Boulder)
        knockDownPenetration += 0.25f;
      else if (attackerWeapon.IsMeleeWeapon)
      {
        if (attackCollisionData.VictimHitBodyPart == BoneBodyPartType.Legs && blow.StrikeType == StrikeType.Swing)
          knockDownPenetration += 0.1f;
        else if (attackCollisionData.VictimHitBodyPart == BoneBodyPartType.Head)
          knockDownPenetration += 0.15f;
      }
      return knockDownPenetration;
    }

    public override float GetHorseChargePenetration() => 0.4f;

    public override float CalculateStaggerThresholdDamage(Agent defenderAgent, in Blow blow)
    {
      return ManagedParameters.Instance.GetManagedParameter(blow.DamageType != DamageTypes.Cut ? (blow.DamageType != DamageTypes.Pierce ? ManagedParametersEnum.DamageInterruptAttackThresholdBlunt : ManagedParametersEnum.DamageInterruptAttackThresholdPierce) : ManagedParametersEnum.DamageInterruptAttackThresholdCut);
    }

    public override float CalculateAlternativeAttackDamage(
      BasicCharacterObject attackerCharacter,
      WeaponComponentData weapon)
    {
      return weapon == null || weapon.WeaponClass == WeaponClass.LargeShield || weapon.WeaponClass != WeaponClass.SmallShield && weapon.IsTwoHanded ? 2f : 1f;
    }

    public override float CalculatePassiveAttackDamage(
      BasicCharacterObject attackerCharacter,
      in AttackCollisionData collisionData,
      float baseDamage)
    {
      return baseDamage;
    }

    public override MeleeCollisionReaction DecidePassiveAttackCollisionReaction(
      Agent attacker,
      Agent defender,
      bool isFatalHit)
    {
      return MeleeCollisionReaction.Bounced;
    }

    public override float CalculateShieldDamage(
      in AttackInformation attackInformation,
      float baseDamage)
    {
      baseDamage *= 1.25f;
      FactoredNumber bonuses = new FactoredNumber(baseDamage);
      BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(attackInformation.VictimFormation);
      if (activeBanner != null)
        BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedShieldDamage, activeBanner, ref bonuses);
      return Math.Max(0.0f, bonuses.ResultNumber);
    }

    public override float GetDamageMultiplierForBodyPart(
      BoneBodyPartType bodyPart,
      DamageTypes type,
      bool isHuman,
      bool isMissile)
    {
      float multiplierForBodyPart = 1f;
      switch (bodyPart)
      {
        case BoneBodyPartType.None:
          multiplierForBodyPart = 1f;
          break;
        case BoneBodyPartType.Head:
          switch (type)
          {
            case DamageTypes.Invalid:
              multiplierForBodyPart = 1.5f;
              break;
            case DamageTypes.Cut:
              multiplierForBodyPart = 1.2f;
              break;
            case DamageTypes.Pierce:
              multiplierForBodyPart = !isHuman ? 1.2f : (isMissile ? 2f : 1.25f);
              break;
            case DamageTypes.Blunt:
              multiplierForBodyPart = 1.2f;
              break;
          }
          break;
        case BoneBodyPartType.Neck:
          switch (type)
          {
            case DamageTypes.Invalid:
              multiplierForBodyPart = 1.5f;
              break;
            case DamageTypes.Cut:
              multiplierForBodyPart = 1.2f;
              break;
            case DamageTypes.Pierce:
              multiplierForBodyPart = !isHuman ? 1.2f : (isMissile ? 2f : 1.25f);
              break;
            case DamageTypes.Blunt:
              multiplierForBodyPart = 1.2f;
              break;
          }
          break;
        case BoneBodyPartType.Chest:
        case BoneBodyPartType.Abdomen:
        case BoneBodyPartType.ShoulderLeft:
        case BoneBodyPartType.ShoulderRight:
        case BoneBodyPartType.ArmLeft:
        case BoneBodyPartType.ArmRight:
          multiplierForBodyPart = !isHuman ? 0.8f : 1f;
          break;
        case BoneBodyPartType.Legs:
          multiplierForBodyPart = 0.8f;
          break;
      }
      return multiplierForBodyPart;
    }

    public override bool CanWeaponIgnoreFriendlyFireChecks(WeaponComponentData weapon)
    {
      return weapon != null && weapon.IsConsumable && weapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanPenetrateShield) && weapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.MultiplePenetration);
    }

    public override bool DecideAgentShrugOffBlow(
      Agent victimAgent,
      AttackCollisionData collisionData,
      in Blow blow)
    {
      return MissionCombatMechanicsHelper.DecideAgentShrugOffBlow(victimAgent, collisionData, in blow);
    }

    public override bool DecideAgentDismountedByBlow(
      Agent attackerAgent,
      Agent victimAgent,
      in AttackCollisionData collisionData,
      WeaponComponentData attackerWeapon,
      in Blow blow)
    {
      return MissionCombatMechanicsHelper.DecideAgentDismountedByBlow(attackerAgent, victimAgent, in collisionData, attackerWeapon, in blow);
    }

    public override bool DecideAgentKnockedBackByBlow(
      Agent attackerAgent,
      Agent victimAgent,
      in AttackCollisionData collisionData,
      WeaponComponentData attackerWeapon,
      in Blow blow)
    {
      return MissionCombatMechanicsHelper.DecideAgentKnockedBackByBlow(attackerAgent, victimAgent, in collisionData, attackerWeapon, in blow);
    }

    public override bool DecideAgentKnockedDownByBlow(
      Agent attackerAgent,
      Agent victimAgent,
      in AttackCollisionData collisionData,
      WeaponComponentData attackerWeapon,
      in Blow blow)
    {
      return MissionCombatMechanicsHelper.DecideAgentKnockedDownByBlow(attackerAgent, victimAgent, in collisionData, attackerWeapon, in blow);
    }

    public override bool DecideMountRearedByBlow(
      Agent attackerAgent,
      Agent victimAgent,
      in AttackCollisionData collisionData,
      WeaponComponentData attackerWeapon,
      in Blow blow)
    {
      return MissionCombatMechanicsHelper.DecideMountRearedByBlow(attackerAgent, victimAgent, in collisionData, attackerWeapon, in blow);
    }
  }
}
