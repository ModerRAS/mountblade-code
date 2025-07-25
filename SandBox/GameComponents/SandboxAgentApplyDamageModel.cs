// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxAgentApplyDamageModel
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
  public class SandboxAgentApplyDamageModel : AgentApplyDamageModel
  {
    private const float SallyOutSiegeEngineDamageMultiplier = 4.5f;

    public override float CalculateDamage(
      in AttackInformation attackInformation,
      in AttackCollisionData collisionData,
      in MissionWeapon weapon,
      float baseDamage)
    {
      BannerComponent activeBanner1 = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(attackInformation.AttackerFormation);
      Agent agent = attackInformation.IsAttackerAgentMount ? attackInformation.AttackerAgent.RiderAgent : attackInformation.AttackerAgent;
      CharacterObject character1 = (attackInformation.IsAttackerAgentMount ? attackInformation.AttackerRiderAgentCharacter : attackInformation.AttackerAgentCharacter) as CharacterObject;
      CharacterObject captainCharacter1 = attackInformation.AttackerCaptainCharacter as CharacterObject;
      bool flag1 = attackInformation.IsAttackerAgentHuman && !attackInformation.DoesAttackerHaveMountAgent;
      bool flag2 = attackInformation.DoesAttackerHaveMountAgent || attackInformation.DoesAttackerHaveRiderAgent;
      CharacterObject character2 = (attackInformation.IsVictimAgentMount ? attackInformation.VictimRiderAgentCharacter : attackInformation.VictimAgentCharacter) as CharacterObject;
      CharacterObject captainCharacter2 = attackInformation.VictimCaptainCharacter as CharacterObject;
      bool flag3 = attackInformation.IsVictimAgentHuman && !attackInformation.DoesVictimHaveMountAgent;
      bool flag4 = attackInformation.DoesVictimHaveMountAgent || attackInformation.DoesVictimHaveRiderAgent;
      BannerComponent activeBanner2 = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(attackInformation.VictimFormation);
      MissionWeapon missionWeapon = attackInformation.VictimMainHandWeapon;
      WeaponComponentData currentUsageItem1 = missionWeapon.CurrentUsageItem;
      AttackCollisionData attackCollisionData;
      int num1;
      if (!collisionData.AttackBlockedWithShield)
      {
        attackCollisionData = collisionData;
        num1 = attackCollisionData.CollidedWithShieldOnBack ? 1 : 0;
      }
      else
        num1 = 1;
      bool flag5 = num1 != 0;
      float b = 0.0f;
      missionWeapon = weapon;
      WeaponComponentData currentUsageItem2 = missionWeapon.CurrentUsageItem;
      bool flag6 = false;
      if (currentUsageItem2 != null && currentUsageItem2.IsConsumable)
      {
        attackCollisionData = collisionData;
        if (attackCollisionData.CollidedWithShieldOnBack && character2 != null && character2.GetPerkValue(DefaultPerks.Crossbow.Pavise))
          flag6 = (double) MBRandom.RandomFloat <= (double) MBMath.ClampFloat(DefaultPerks.Crossbow.Pavise.PrimaryBonus, 0.0f, 1f);
      }
      if (!flag6)
      {
        ExplainedNumber bonuses = new ExplainedNumber(baseDamage);
        if (character1 != null)
        {
          if (currentUsageItem2 != null)
          {
            if (currentUsageItem2.IsMeleeWeapon)
            {
              if (currentUsageItem2.RelevantSkill == DefaultSkills.OneHanded)
              {
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.DeadlyPurpose, character1, true, ref bonuses);
                if (flag2)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.Cavalry, character1, true, ref bonuses);
                missionWeapon = attackInformation.OffHandItem;
                if (missionWeapon.IsEmpty)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.Duelist, character1, true, ref bonuses);
                if (currentUsageItem2.WeaponClass == WeaponClass.Mace || currentUsageItem2.WeaponClass == WeaponClass.OneHandedAxe)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.ToBeBlunt, character1, true, ref bonuses);
                if (flag5)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.Prestige, character1, true, ref bonuses);
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Roguery.Carver, captainCharacter1, ref bonuses);
                PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.OneHanded.WayOfTheSword, character1, DefaultSkills.OneHanded, false, ref bonuses, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
              }
              else if (currentUsageItem2.RelevantSkill == DefaultSkills.TwoHanded)
              {
                if (flag5)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.WoodChopper, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.WoodChopper, captainCharacter1, ref bonuses);
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.ShieldBreaker, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.ShieldBreaker, captainCharacter1, ref bonuses);
                }
                if (currentUsageItem2.WeaponClass == WeaponClass.TwoHandedAxe || currentUsageItem2.WeaponClass == WeaponClass.TwoHandedMace)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.HeadBasher, character1, true, ref bonuses);
                if (attackInformation.IsVictimAgentMount)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.BeastSlayer, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.BeastSlayer, captainCharacter1, ref bonuses);
                }
                if ((double) attackInformation.AttackerHitPointRate < 0.5)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.Berserker, character1, true, ref bonuses);
                else if ((double) attackInformation.AttackerHitPointRate > 0.89999997615814209)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.Confidence, character1, true, ref bonuses);
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.BladeMaster, character1, true, ref bonuses);
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Roguery.DashAndSlash, captainCharacter1, ref bonuses);
                PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.TwoHanded.WayOfTheGreatAxe, character1, DefaultSkills.TwoHanded, false, ref bonuses, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
              }
              else if (currentUsageItem2.RelevantSkill == DefaultSkills.Polearm)
              {
                if (flag2)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.Cavalry, character1, true, ref bonuses);
                else
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.Pikeman, character1, true, ref bonuses);
                attackCollisionData = collisionData;
                if (attackCollisionData.StrikeType == 1)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.CleanThrust, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.SharpenTheTip, character1, true, ref bonuses);
                }
                if (attackInformation.IsVictimAgentMount)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.SteedKiller, character1, true, ref bonuses);
                  if (flag1)
                    PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.SteedKiller, captainCharacter1, ref bonuses);
                }
                if (attackInformation.IsHeadShot)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.Guards, character1, true, ref bonuses);
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.Phalanx, captainCharacter1, ref bonuses);
                PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Polearm.WayOfTheSpear, character1, DefaultSkills.Polearm, false, ref bonuses, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
              }
              else if (currentUsageItem2.IsShield)
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.Basher, character1, true, ref bonuses);
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.Powerful, character1, true, ref bonuses);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.Powerful, captainCharacter1, ref bonuses);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Engineering.ImprovedTools, captainCharacter1, ref bonuses);
              missionWeapon = weapon;
              int num2;
              if (missionWeapon.Item != null)
              {
                missionWeapon = weapon;
                num2 = missionWeapon.Item.ItemType == ItemObject.ItemTypeEnum.Thrown ? 1 : 0;
              }
              else
                num2 = 0;
              if (num2 != 0)
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.FlexibleFighter, character1, true, ref bonuses);
              if (flag2)
              {
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.MountedWarrior, character1, true, ref bonuses);
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.MountedWarrior, captainCharacter1, ref bonuses);
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.Cavalry, captainCharacter1, ref bonuses);
              }
              else
              {
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.DeadlyPurpose, captainCharacter1, ref bonuses);
                attackCollisionData = collisionData;
                if (attackCollisionData.StrikeType == 1)
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.SharpenTheTip, captainCharacter1, ref bonuses);
              }
              if (activeBanner1 != null)
              {
                BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedMeleeDamage, activeBanner1, ref bonuses);
                if (attackInformation.DoesVictimHaveMountAgent)
                  BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedMeleeDamageAgainstMountedTroops, activeBanner1, ref bonuses);
              }
            }
            else if (currentUsageItem2.IsConsumable)
            {
              if (currentUsageItem2.RelevantSkill == DefaultSkills.Bow)
              {
                attackCollisionData = collisionData;
                if (attackCollisionData.CollisionBoneIndex != (sbyte) -1)
                {
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.BowControl, captainCharacter1, ref bonuses);
                  if (attackInformation.IsHeadShot)
                    PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.DeadAim, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.StrongBows, character1, true, ref bonuses);
                  if (character1.Tier >= 3)
                    PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.StrongBows, captainCharacter1, ref bonuses);
                  if (attackInformation.IsVictimAgentMount)
                    PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.HunterClan, character1, true, ref bonuses);
                  PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Bow.Deadshot, character1, DefaultSkills.Bow, false, ref bonuses, Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus);
                  goto label_93;
                }
              }
              if (currentUsageItem2.RelevantSkill == DefaultSkills.Crossbow)
              {
                attackCollisionData = collisionData;
                if (attackCollisionData.CollisionBoneIndex != (sbyte) -1)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Engineering.TorsionEngines, character1, false, ref bonuses);
                  if (attackInformation.IsVictimAgentMount)
                  {
                    PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.Unhorser, character1, true, ref bonuses);
                    PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.Unhorser, captainCharacter1, ref bonuses);
                  }
                  if (attackInformation.IsHeadShot)
                    PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.Sheriff, character1, true, ref bonuses);
                  if (flag3)
                    PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.Sheriff, captainCharacter1, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.HammerBolts, captainCharacter1, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Engineering.DreadfulSieger, captainCharacter1, ref bonuses);
                  PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Crossbow.MightyPull, character1, DefaultSkills.Crossbow, false, ref bonuses, Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus);
                  goto label_93;
                }
              }
              if (currentUsageItem2.RelevantSkill == DefaultSkills.Throwing)
              {
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.StrongArms, character1, true, ref bonuses);
                if (flag5)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.ShieldBreaker, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.ShieldBreaker, captainCharacter1, ref bonuses);
                  if (currentUsageItem2.WeaponClass == WeaponClass.ThrowingAxe)
                    PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.Splinters, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.Splinters, captainCharacter1, ref bonuses);
                }
                if (attackInformation.IsVictimAgentMount)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.Hunter, character1, true, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.Hunter, captainCharacter1, ref bonuses);
                }
                if (flag2)
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.MountedSkirmisher, captainCharacter1, ref bonuses);
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.Impale, captainCharacter1, ref bonuses);
                if (flag4)
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.KnockOff, captainCharacter1, ref bonuses);
                if ((double) attackInformation.VictimAgentHealth <= (double) attackInformation.VictimAgentMaxHealth * 0.5)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.LastHit, character1, true, ref bonuses);
                if (attackInformation.IsHeadShot)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.HeadHunter, character1, true, ref bonuses);
                PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Throwing.UnstoppableForce, character1, DefaultSkills.Throwing, false, ref bonuses, Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus);
              }
label_93:
              if (flag2)
              {
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.HorseArcher, character1, true, ref bonuses);
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.HorseArcher, captainCharacter1, ref bonuses);
              }
              if (activeBanner1 != null)
                BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedRangedDamage, activeBanner1, ref bonuses);
            }
            missionWeapon = weapon;
            if (missionWeapon.Item != null)
            {
              missionWeapon = weapon;
              if (missionWeapon.Item.IsCivilian)
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Roguery.Carver, character1, true, ref bonuses);
            }
          }
          attackCollisionData = collisionData;
          if (attackCollisionData.IsHorseCharge)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.FullSpeed, character1, true, ref bonuses);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.FullSpeed, captainCharacter1, ref bonuses);
            if (character1.GetPerkValue(DefaultPerks.Riding.TheWayOfTheSaddle))
            {
              float num3 = (float) MathF.Max(MissionGameModels.Current.AgentStatCalculateModel.GetEffectiveSkill(agent, DefaultSkills.Riding) - Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus, 0) * DefaultPerks.Riding.TheWayOfTheSaddle.PrimaryBonus;
              bonuses.Add(num3);
            }
            if (activeBanner1 != null)
              BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedChargeDamage, activeBanner1, ref bonuses);
          }
          if (flag1)
          {
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.HeadBasher, captainCharacter1, ref bonuses);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.RecklessCharge, captainCharacter1, ref bonuses);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.Pikeman, captainCharacter1, ref bonuses);
            if (flag4)
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.Braced, captainCharacter1, ref bonuses);
          }
          if (flag2)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.Cavalry, captainCharacter1, ref bonuses);
          if (currentUsageItem2 == null)
          {
            attackCollisionData = collisionData;
            if (attackCollisionData.IsAlternativeAttack && character1.GetPerkValue(DefaultPerks.Athletics.StrongLegs))
              bonuses.AddFactor(1f);
          }
          if (flag5)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Engineering.WallBreaker, captainCharacter1, ref bonuses);
          attackCollisionData = collisionData;
          if (attackCollisionData.EntityExists)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.Vandal, captainCharacter1, ref bonuses);
          if (character2 != null)
          {
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.Coaching, captainCharacter1, ref bonuses);
            if (character2.Culture.IsBandit)
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.LawKeeper, captainCharacter1, ref bonuses);
            if (flag2 & flag3)
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.Gensdarmes, captainCharacter1, ref bonuses);
          }
          if (character1.Culture.IsBandit)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Roguery.PartnersInCrime, captainCharacter1, ref bonuses);
        }
        float num4 = 1f;
        if (Mission.Current.IsSallyOutBattle)
        {
          DestructableComponent destructibleComponent = attackInformation.HitObjectDestructibleComponent;
          if (destructibleComponent != null && destructibleComponent.GameEntity.GetFirstScriptOfType<SiegeWeapon>() != null)
            num4 *= 4.5f;
        }
        bonuses = new ExplainedNumber(bonuses.ResultNumber * num4);
        if (attackInformation.DoesAttackerHaveMountAgent && (currentUsageItem2 == null ? 0 : (currentUsageItem2.RelevantSkill == DefaultSkills.Crossbow ? 1 : 0)) == 0)
        {
          float num5 = -0.01f * MathF.Max(0.0f, DefaultSkillEffects.MountedWeaponDamagePenalty.GetPrimaryValue(MissionGameModels.Current.AgentStatCalculateModel.GetEffectiveSkill(agent, DefaultSkills.Riding)));
          bonuses.AddFactor(num5);
        }
        if (character2 != null)
        {
          if (currentUsageItem2 != null)
          {
            if (currentUsageItem2.IsConsumable)
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.SkirmishPhaseMaster, character2, true, ref bonuses);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.Skirmisher, captainCharacter2, ref bonuses);
              if (character2.IsRanged)
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.SkirmishPhaseMaster, captainCharacter2, ref bonuses);
              if (currentUsageItem1 != null)
              {
                if (currentUsageItem1.WeaponClass == WeaponClass.Crossbow)
                {
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.CounterFire, character2, true, ref bonuses);
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.CounterFire, captainCharacter2, ref bonuses);
                }
                else if (currentUsageItem1.RelevantSkill == DefaultSkills.Throwing)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.Skirmisher, character2, true, ref bonuses);
              }
              if (activeBanner2 != null)
                BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedRangedAttackDamage, activeBanner2, ref bonuses);
            }
            else if (currentUsageItem2.IsMeleeWeapon)
            {
              if (captainCharacter2 != null)
              {
                Formation victimFormation = attackInformation.VictimFormation;
                if ((victimFormation != null ? (victimFormation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall ? 1 : 0) : 0) != 0)
                  PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.Basher, captainCharacter2, ref bonuses);
              }
              if (activeBanner2 != null)
                BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedMeleeAttackDamage, activeBanner2, ref bonuses);
            }
          }
          if (flag5)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.SteelCoreShields, character2, true, ref bonuses);
            if (flag3)
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.SteelCoreShields, captainCharacter2, ref bonuses);
            attackCollisionData = collisionData;
            if (attackCollisionData.AttackBlockedWithShield)
            {
              attackCollisionData = collisionData;
              if (!attackCollisionData.CorrectSideShieldBlock)
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.ShieldWall, character2, true, ref bonuses);
            }
          }
          attackCollisionData = collisionData;
          if (attackCollisionData.IsHorseCharge)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.SureFooted, character2, true, ref bonuses);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.Braced, character2, true, ref bonuses);
            if (captainCharacter2 != null)
            {
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.SureFooted, captainCharacter2, ref bonuses);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.Braced, captainCharacter2, ref bonuses);
            }
          }
          attackCollisionData = collisionData;
          if (attackCollisionData.IsFallDamage)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.StrongLegs, character2, true, ref bonuses);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.EliteReserves, captainCharacter2, ref bonuses);
        }
        b = bonuses.ResultNumber;
      }
      return MathF.Max(0.0f, b);
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
      if ((wieldedItemIndex != EquipmentIndex.None ? attackerAgent.Equipment[wieldedItemIndex].CurrentUsageItem : (WeaponComponentData) null) == null | isPassiveUsage || strikeType != StrikeType.Swing || attackDirection != Agent.UsageDirection.AttackUp)
        return false;
      float num = 58f;
      if (defendItem != null && defendItem.IsShield)
        num *= 1.2f;
      return (double) totalAttackEnergy > (double) num;
    }

    public override void DecideMissileWeaponFlags(
      Agent attackerAgent,
      MissionWeapon missileWeapon,
      ref WeaponFlags missileWeaponFlags)
    {
      if (!(attackerAgent?.Character is CharacterObject character) || missileWeapon.CurrentUsageItem.WeaponClass != WeaponClass.Javelin || !character.GetPerkValue(DefaultPerks.Throwing.Impale))
        return;
      missileWeaponFlags |= WeaponFlags.CanPenetrateShield;
    }

    public override bool CanWeaponIgnoreFriendlyFireChecks(WeaponComponentData weapon)
    {
      return weapon != null && weapon.IsConsumable && weapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanPenetrateShield) && weapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.MultiplePenetration);
    }

    public override bool CanWeaponDismount(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData collisionData)
    {
      if (!MBMath.IsBetween((int) blow.VictimBodyPart, 0, 6))
        return false;
      if (!attackerAgent.HasMount && blow.StrikeType == StrikeType.Swing && blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanHook) || blow.StrikeType == StrikeType.Thrust && blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanDismount))
        return true;
      if (!(attackerAgent.Character is CharacterObject character))
        return false;
      if (attackerWeapon.RelevantSkill == DefaultSkills.Crossbow && attackerWeapon.IsConsumable && character.GetPerkValue(DefaultPerks.Crossbow.HammerBolts))
        return true;
      return attackerWeapon.RelevantSkill == DefaultSkills.Throwing && attackerWeapon.IsConsumable && character.GetPerkValue(DefaultPerks.Throwing.KnockOff);
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
      float b1 = 1f;
      float b2 = 1f;
      if (attackerAgent.Character is CharacterObject character && (collisionResult == CombatCollisionResult.Blocked || collisionResult == CombatCollisionResult.Parried) && character.GetPerkValue(DefaultPerks.Athletics.MightyBlow))
        b1 += b1 * DefaultPerks.Athletics.MightyBlow.PrimaryBonus;
      defenderStunMultiplier = MathF.Max(0.0f, b1);
      attackerStunMultiplier = MathF.Max(0.0f, b2);
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
      in AttackCollisionData collisionData)
    {
      float b = 0.0f;
      if (blow.StrikeType == StrikeType.Swing && blow.WeaponRecord.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanHook))
        b += 0.25f;
      if (attackerWeapon != null && attackerAgent.Character is CharacterObject character)
      {
        if (attackerWeapon.RelevantSkill == DefaultSkills.Polearm && character.GetPerkValue(DefaultPerks.Polearm.Braced))
          b += DefaultPerks.Polearm.Braced.PrimaryBonus;
        else if (attackerWeapon.RelevantSkill == DefaultSkills.Crossbow && attackerWeapon.IsConsumable && character.GetPerkValue(DefaultPerks.Crossbow.HammerBolts))
          b += DefaultPerks.Crossbow.HammerBolts.PrimaryBonus;
        else if (attackerWeapon.RelevantSkill == DefaultSkills.Throwing && attackerWeapon.IsConsumable && character.GetPerkValue(DefaultPerks.Throwing.KnockOff))
          b += DefaultPerks.Throwing.KnockOff.PrimaryBonus;
      }
      return MathF.Max(0.0f, b);
    }

    public override float GetKnockBackPenetration(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData collisionData)
    {
      float knockBackPenetration = 0.0f;
      if (attackerWeapon != null && attackerWeapon.RelevantSkill == DefaultSkills.Polearm && attackerAgent?.Character is CharacterObject character && blow.StrikeType == StrikeType.Thrust && character.GetPerkValue(DefaultPerks.Polearm.KeepAtBay))
        knockBackPenetration += DefaultPerks.Polearm.KeepAtBay.PrimaryBonus;
      return knockBackPenetration;
    }

    public override float GetKnockDownPenetration(
      Agent attackerAgent,
      WeaponComponentData attackerWeapon,
      in Blow blow,
      in AttackCollisionData collisionData)
    {
      float knockDownPenetration = 0.0f;
      if (attackerWeapon.WeaponClass == WeaponClass.Boulder)
        knockDownPenetration += 0.25f;
      else if (attackerWeapon.IsMeleeWeapon)
      {
        CharacterObject character = attackerAgent?.Character as CharacterObject;
        if (blow.StrikeType == StrikeType.Swing)
        {
          if (collisionData.VictimHitBodyPart == BoneBodyPartType.Legs)
            knockDownPenetration += 0.1f;
          if (character != null && attackerWeapon.RelevantSkill == DefaultSkills.TwoHanded && character.GetPerkValue(DefaultPerks.TwoHanded.ShowOfStrength))
            knockDownPenetration += DefaultPerks.TwoHanded.ShowOfStrength.PrimaryBonus;
        }
        if (collisionData.VictimHitBodyPart == BoneBodyPartType.Head)
          knockDownPenetration += 0.15f;
        if (character != null && attackerWeapon.RelevantSkill == DefaultSkills.Polearm && character.GetPerkValue(DefaultPerks.Polearm.HardKnock))
          knockDownPenetration += DefaultPerks.Polearm.HardKnock.PrimaryBonus;
      }
      return knockDownPenetration;
    }

    public override float GetHorseChargePenetration() => 0.4f;

    public override float CalculateStaggerThresholdDamage(Agent defenderAgent, in Blow blow)
    {
      float num = 1f;
      CharacterObject character = defenderAgent.Character as CharacterObject;
      CharacterObject captainCharacter = defenderAgent.Formation?.Captain?.Character as CharacterObject;
      if (character != null)
      {
        if (captainCharacter == character)
          captainCharacter = (CharacterObject) null;
        ExplainedNumber bonuses = new ExplainedNumber(1f);
        if (defenderAgent.HasMount)
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.DauntlessSteed, character, true, ref bonuses);
        else
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.Spartan, character, true, ref bonuses);
        WeaponComponentData currentUsageItem = defenderAgent.WieldedWeapon.CurrentUsageItem;
        if ((currentUsageItem != null ? (currentUsageItem.WeaponClass == WeaponClass.Crossbow ? 1 : 0) : 0) != 0 && defenderAgent.WieldedWeapon.IsReloading)
        {
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.DeftHands, character, true, ref bonuses);
          if (captainCharacter != null)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.DeftHands, captainCharacter, ref bonuses);
        }
        num = bonuses.ResultNumber;
      }
      return TaleWorlds.Core.ManagedParameters.Instance.GetManagedParameter(blow.DamageType != DamageTypes.Cut ? (blow.DamageType != DamageTypes.Pierce ? TaleWorlds.Core.ManagedParametersEnum.DamageInterruptAttackThresholdBlunt : TaleWorlds.Core.ManagedParametersEnum.DamageInterruptAttackThresholdPierce) : TaleWorlds.Core.ManagedParametersEnum.DamageInterruptAttackThresholdCut) * num;
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
      if (attackerCharacter is CharacterObject characterObject && collisionData.AttackBlockedWithShield && characterObject.GetPerkValue(DefaultPerks.Polearm.UnstoppableForce))
        baseDamage *= DefaultPerks.Polearm.UnstoppableForce.PrimaryBonus;
      return baseDamage;
    }

    public override MeleeCollisionReaction DecidePassiveAttackCollisionReaction(
      Agent attacker,
      Agent defender,
      bool isFatalHit)
    {
      MeleeCollisionReaction collisionReaction = MeleeCollisionReaction.Bounced;
      if (isFatalHit && attacker.HasMount)
      {
        float num = 0.05f;
        if (attacker.Character is CharacterObject character && character.GetPerkValue(DefaultPerks.Polearm.Skewer))
          num += DefaultPerks.Polearm.Skewer.PrimaryBonus;
        if ((double) MBRandom.RandomFloat < (double) num)
          collisionReaction = MeleeCollisionReaction.SlicedThrough;
      }
      return collisionReaction;
    }

    public override float CalculateShieldDamage(
      in AttackInformation attackInformation,
      float baseDamage)
    {
      Formation victimFormation = attackInformation.VictimFormation;
      ExplainedNumber bonuses = new ExplainedNumber(baseDamage);
      BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(victimFormation);
      if (activeBanner != null)
        BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedShieldDamage, activeBanner, ref bonuses);
      return bonuses.ResultNumber;
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
          multiplierForBodyPart = isHuman ? 1f : 0.8f;
          break;
        case BoneBodyPartType.Legs:
          multiplierForBodyPart = 0.8f;
          break;
      }
      return multiplierForBodyPart;
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
