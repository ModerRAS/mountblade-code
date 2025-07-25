// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxBattleMoraleModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxBattleMoraleModel : BattleMoraleModel
  {
    public override (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentIncapacitated(
      Agent affectedAgent,
      AgentState affectedAgentState,
      Agent affectorAgent,
      in KillingBlow killingBlow)
    {
      float battleImportance = affectedAgent.GetBattleImportance();
      Team team = affectedAgent.Team;
      // ISSUE: explicit non-virtual call
      float casualtiesFactor = this.CalculateCasualtiesFactor(team != null ? __nonvirtual (team.Side) : BattleSideEnum.None);
      CharacterObject character1 = affectorAgent?.Character as CharacterObject;
      CharacterObject character2 = affectedAgent?.Character as CharacterObject;
      SkillObject skillFromWeaponClass = WeaponComponentData.GetRelevantSkillFromWeaponClass((WeaponClass) killingBlow.WeaponClass);
      bool flag1 = skillFromWeaponClass == DefaultSkills.OneHanded || skillFromWeaponClass == DefaultSkills.TwoHanded || skillFromWeaponClass == DefaultSkills.Polearm;
      bool flag2 = skillFromWeaponClass == DefaultSkills.Bow || skillFromWeaponClass == DefaultSkills.Crossbow || skillFromWeaponClass == DefaultSkills.Throwing;
      int num1 = killingBlow.WeaponRecordWeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.AffectsArea | WeaponFlags.AffectsAreaBig | WeaponFlags.MultiplePenetration) ? 1 : 0;
      float val2 = 0.75f;
      if (num1 != 0)
      {
        val2 = 0.25f;
        if (killingBlow.WeaponRecordWeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.Burning | WeaponFlags.MultiplePenetration))
          val2 += val2 * 0.25f;
      }
      else if (flag2)
        val2 = 0.5f;
      float num2 = Math.Max(0.0f, val2);
      ExplainedNumber bonuses1 = new ExplainedNumber(battleImportance * 3f * num2);
      ExplainedNumber bonuses2 = new ExplainedNumber(battleImportance * 4f * num2 * casualtiesFactor);
      if (character1 != null)
      {
        CharacterObject character3 = affectorAgent?.Formation?.Captain?.Character as CharacterObject;
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Leadership.MakeADifference, character1, true, ref bonuses1);
        if (flag1)
        {
          if (skillFromWeaponClass == DefaultSkills.TwoHanded)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.Hope, character1, true, ref bonuses1);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.Terror, character1, true, ref bonuses2);
          }
          if (affectorAgent != null && affectorAgent.HasMount)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.ThunderousCharge, character1, true, ref bonuses2);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.ThunderousCharge, character3, ref bonuses2);
          }
        }
        else if (flag2)
        {
          if (skillFromWeaponClass == DefaultSkills.Crossbow)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.Terror, character3, ref bonuses2);
          if (affectorAgent != null && affectorAgent.HasMount)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.AnnoyingBuzz, character1, true, ref bonuses2);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.AnnoyingBuzz, character3, ref bonuses2);
          }
        }
        PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Leadership.HeroicLeader, character3, ref bonuses2);
      }
      if (character2 != null)
      {
        MobileParty mobileParty = affectedAgent?.Origin?.BattleCombatant is PartyBase battleCombatant ? battleCombatant.MobileParty : (MobileParty) null;
        if (affectedAgentState == AgentState.Unconscious && mobileParty != null && mobileParty.HasPerk(DefaultPerks.Medicine.HealthAdvise, true))
        {
          bonuses2 = new ExplainedNumber();
        }
        else
        {
          if (affectedAgent.Formation?.Captain?.Character is CharacterObject character4)
          {
            ArrangementOrder arrangementOrder = affectedAgent.Formation.ArrangementOrder;
            if (arrangementOrder == ArrangementOrder.ArrangementOrderShieldWall || arrangementOrder == ArrangementOrder.ArrangementOrderSquare || arrangementOrder == ArrangementOrder.ArrangementOrderSkein || arrangementOrder == ArrangementOrder.ArrangementOrderColumn)
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.TightFormations, character4, ref bonuses2);
            if (arrangementOrder == ArrangementOrder.ArrangementOrderLine || arrangementOrder == ArrangementOrder.ArrangementOrderLoose || arrangementOrder == ArrangementOrder.ArrangementOrderCircle || arrangementOrder == ArrangementOrder.ArrangementOrderScatter)
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.LooseFormations, character4, ref bonuses2);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.StandardBearer, character4, ref bonuses2);
          }
          Hero effectiveQuartermaster = mobileParty?.EffectiveQuartermaster;
          if (effectiveQuartermaster != null)
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Steward.PriceOfLoyalty, effectiveQuartermaster.CharacterObject, DefaultSkills.Steward, true, ref bonuses2, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
        }
      }
      BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(affectedAgent.Formation);
      if (activeBanner != null)
        BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedMoraleShock, activeBanner, ref bonuses2);
      return (MathF.Max(bonuses2.ResultNumber, 0.0f), MathF.Max(bonuses1.ResultNumber, 0.0f));
    }

    public override (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentPanicked(
      Agent agent)
    {
      double battleImportance = (double) agent.GetBattleImportance();
      Team team = agent.Team;
      // ISSUE: explicit non-virtual call
      float casualtiesFactor = this.CalculateCasualtiesFactor(team != null ? __nonvirtual (team.Side) : BattleSideEnum.None);
      float a = (float) (battleImportance * 2.0);
      float num = (float) (battleImportance * (double) casualtiesFactor * 1.1000000238418579);
      if (agent?.Character is CharacterObject)
      {
        ExplainedNumber bonuses = new ExplainedNumber(num);
        Formation formation = agent.Formation;
        CharacterObject character = formation?.Captain?.Character as CharacterObject;
        BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(formation);
        if (character != null)
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.StandardBearer, character, ref bonuses);
        Hero effectiveQuartermaster = (agent?.Origin?.BattleCombatant is PartyBase battleCombatant ? battleCombatant.MobileParty : (MobileParty) null)?.EffectiveQuartermaster;
        if (effectiveQuartermaster != null)
          PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Steward.PriceOfLoyalty, effectiveQuartermaster.CharacterObject, DefaultSkills.Steward, true, ref bonuses, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
        if (activeBanner != null)
          BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedMoraleShock, activeBanner, ref bonuses);
        num = bonuses.ResultNumber;
      }
      return (MathF.Max(num, 0.0f), MathF.Max(a, 0.0f));
    }

    public override float CalculateMoraleChangeToCharacter(Agent agent, float maxMoraleChange)
    {
      return maxMoraleChange / MathF.Max(1f, agent.Character.GetMoraleResistance());
    }

    public override float GetEffectiveInitialMorale(Agent agent, float baseMorale)
    {
      ExplainedNumber stat = new ExplainedNumber(baseMorale);
      PartyBase battleCombatant = (PartyBase) agent?.Origin?.BattleCombatant;
      MobileParty mobileParty = battleCombatant == null || !battleCombatant.IsMobile ? (MobileParty) null : battleCombatant.MobileParty;
      CharacterObject character = agent?.Character as CharacterObject;
      if (mobileParty != null && character != null)
      {
        CharacterObject characterObject1 = mobileParty.Army?.LeaderParty?.LeaderHero?.CharacterObject;
        CharacterObject characterObject2 = mobileParty.LeaderHero?.CharacterObject;
        CharacterObject characterObject3 = characterObject1 != character ? characterObject1 : (CharacterObject) null;
        CharacterObject characterObject4 = characterObject2 != character ? characterObject2 : (CharacterObject) null;
        if (characterObject4 != null)
        {
          if (battleCombatant.Side == BattleSideEnum.Attacker)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Leadership.FerventAttacker, mobileParty, true, ref stat);
          else if (battleCombatant.Side == BattleSideEnum.Defender)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Leadership.StoutDefender, mobileParty, true, ref stat);
          if (characterObject4.Culture == character.Culture)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Leadership.GreatLeader, mobileParty, false, ref stat);
          if (characterObject4.GetPerkValue(DefaultPerks.Leadership.WePledgeOurSwords))
          {
            int num = MathF.Min(battleCombatant.GetNumberOfHealthyMenOfTier(6), 10);
            stat.Add((float) num);
          }
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Throwing.LastHit, mobileParty, false, ref stat);
          PartyBase leaderParty = battleCombatant?.MapEventSide?.LeaderParty;
          if ((leaderParty == null ? 0 : (battleCombatant != leaderParty ? 1 : 0)) != 0)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Riding.ReliefForce, mobileParty, true, ref stat);
          if (battleCombatant.MapEvent != null)
          {
            float partySideStrength;
            float opposingSideStrength;
            battleCombatant.MapEvent.GetStrengthsRelativeToParty(battleCombatant.Side, out partySideStrength, out opposingSideStrength);
            if ((double) partySideStrength < (double) opposingSideStrength)
              PerkHelper.AddPerkBonusForParty(DefaultPerks.OneHanded.StandUnited, mobileParty, true, ref stat);
            if (battleCombatant.MapEvent.IsSiegeAssault || battleCombatant.MapEvent.IsSiegeOutside)
              PerkHelper.AddPerkBonusForParty(DefaultPerks.Leadership.UpliftingSpirit, mobileParty, true, ref stat);
            bool flag = false;
            foreach (PartyBase involvedParty in battleCombatant.MapEvent.InvolvedParties)
            {
              if (involvedParty.Side != battleCombatant.Side && involvedParty.MapFaction != null && involvedParty.Culture.IsBandit)
              {
                flag = true;
                break;
              }
            }
            if (flag)
              PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.Patrols, mobileParty, true, ref stat);
          }
          PerkHelper.AddPerkBonusForParty(DefaultPerks.OneHanded.LeadByExample, mobileParty, false, ref stat);
        }
        if (characterObject3 != null && characterObject3.GetPerkValue(DefaultPerks.Leadership.GreatLeader))
          stat.Add(DefaultPerks.Leadership.GreatLeader.PrimaryBonus);
        if (character.IsRanged)
        {
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Bow.RenownedArcher, battleCombatant.MobileParty, true, ref stat);
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Crossbow.Marksmen, battleCombatant.MobileParty, false, ref stat);
        }
        if (mobileParty.IsDisorganized && (mobileParty.MapEvent == null || mobileParty.SiegeEvent == null || mobileParty.MapEventSide.MissionSide != BattleSideEnum.Attacker) && (characterObject4 == null ? 0 : (characterObject4.GetPerkValue(DefaultPerks.Tactics.Improviser) ? 1 : 0)) == 0)
          stat.AddFactor(-0.2f);
      }
      return stat.ResultNumber;
    }

    public override bool CanPanicDueToMorale(Agent agent)
    {
      bool morale = true;
      if (agent.IsHuman)
      {
        CharacterObject character = agent.Character as CharacterObject;
        Hero leaderHero = ((PartyBase) agent.Origin?.BattleCombatant)?.LeaderHero;
        if (character != null && leaderHero != null && character.Tier >= (int) DefaultPerks.Leadership.LoyaltyAndHonor.PrimaryBonus && leaderHero.GetPerkValue(DefaultPerks.Leadership.LoyaltyAndHonor))
          morale = false;
      }
      return morale;
    }

    public override float CalculateCasualtiesFactor(BattleSideEnum battleSide)
    {
      float casualtiesFactor = 1f;
      if (Mission.Current != null && battleSide != BattleSideEnum.None)
      {
        float agentRatioForSide = Mission.Current.GetRemovedAgentRatioForSide(battleSide);
        casualtiesFactor = MathF.Max(0.0f, casualtiesFactor + agentRatioForSide * 2f);
      }
      return casualtiesFactor;
    }

    public override float GetAverageMorale(Formation formation)
    {
      float num1 = 0.0f;
      int num2 = 0;
      if (formation != null)
      {
        foreach (IFormationUnit allUnit in (List<IFormationUnit>) formation.Arrangement.GetAllUnits())
        {
          if (allUnit is Agent agent && agent.IsHuman && agent.IsAIControlled)
          {
            ++num2;
            num1 += agent.GetMorale();
          }
        }
      }
      return num2 > 0 ? MBMath.ClampFloat(num1 / (float) num2, 0.0f, 100f) : 0.0f;
    }
  }
}
