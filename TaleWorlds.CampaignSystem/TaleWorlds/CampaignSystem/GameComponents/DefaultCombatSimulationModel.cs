// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultCombatSimulationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultCombatSimulationModel : CombatSimulationModel
  {
    public override int SimulateHit(
      CharacterObject strikerTroop,
      CharacterObject struckTroop,
      PartyBase strikerParty,
      PartyBase struckParty,
      float strikerAdvantage,
      MapEvent battle)
    {
      MilitaryPowerModel militaryPowerModel = Campaign.Current.Models.MilitaryPowerModel;
      ExplainedNumber effectiveDamage = new ExplainedNumber((float) (int) ((0.5 + 0.5 * (double) MBRandom.RandomFloat) * (40.0 * (double) MathF.Pow(militaryPowerModel.GetTroopPower(strikerTroop, strikerParty.Side, strikerParty.MapEvent.SimulationContext, strikerParty.MapEventSide.LeaderSimulationModifier) / militaryPowerModel.GetTroopPower(struckTroop, struckParty.Side, struckParty.MapEvent.SimulationContext, struckParty.MapEventSide.LeaderSimulationModifier), 0.7f) * (double) strikerAdvantage)));
      if (strikerParty.IsMobile && struckParty.IsMobile)
        this.CalculateSimulationDamagePerkEffects(strikerTroop, struckTroop, strikerParty.MobileParty, struckParty.MobileParty, ref effectiveDamage, battle);
      return (int) effectiveDamage.ResultNumber;
    }

    private void CalculateSimulationDamagePerkEffects(
      CharacterObject strikerTroop,
      CharacterObject struckTroop,
      MobileParty strikerParty,
      MobileParty struckParty,
      ref ExplainedNumber effectiveDamage,
      MapEvent battle)
    {
      if (strikerParty.HasPerk(DefaultPerks.Tactics.TightFormations) && strikerTroop.IsInfantry && struckTroop.IsMounted)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.TightFormations, strikerParty, true, ref effectiveDamage);
      if (struckParty.HasPerk(DefaultPerks.Tactics.LooseFormations) && struckTroop.IsInfantry && strikerTroop.IsRanged)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.LooseFormations, struckParty, true, ref effectiveDamage);
      TerrainType faceTerrainType = Campaign.Current.MapSceneWrapper.GetFaceTerrainType(strikerParty.CurrentNavigationFace);
      if (strikerParty.HasPerk(DefaultPerks.Tactics.ExtendedSkirmish) && (faceTerrainType == TerrainType.Snow || faceTerrainType == TerrainType.Forest))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.ExtendedSkirmish, strikerParty, true, ref effectiveDamage);
      if (strikerParty.HasPerk(DefaultPerks.Tactics.DecisiveBattle) && (faceTerrainType == TerrainType.Plain || faceTerrainType == TerrainType.Steppe || faceTerrainType == TerrainType.Desert))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.DecisiveBattle, strikerParty, true, ref effectiveDamage);
      if (!strikerParty.IsBandit && struckParty.IsBandit && strikerParty.HasPerk(DefaultPerks.Tactics.LawKeeper))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.LawKeeper, strikerParty, true, ref effectiveDamage);
      if (strikerParty.HasPerk(DefaultPerks.Tactics.Coaching))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.Coaching, strikerParty, true, ref effectiveDamage);
      if (struckParty.HasPerk(DefaultPerks.Tactics.EliteReserves) && struckTroop.Tier >= 3)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.EliteReserves, struckParty, true, ref effectiveDamage);
      if (strikerParty.HasPerk(DefaultPerks.Tactics.Encirclement) && strikerParty.MemberRoster.TotalHealthyCount > struckParty.MemberRoster.TotalHealthyCount)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.Encirclement, strikerParty, true, ref effectiveDamage);
      if (strikerParty.HasPerk(DefaultPerks.Tactics.Counteroffensive, true) && strikerParty.MemberRoster.TotalHealthyCount < struckParty.MemberRoster.TotalHealthyCount)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.Counteroffensive, strikerParty, false, ref effectiveDamage);
      bool flag1 = false;
      foreach (MapEventParty mapEventParty in (List<MapEventParty>) battle.PartiesOnSide(BattleSideEnum.Defender))
      {
        if (mapEventParty.Party == struckParty.Party)
        {
          flag1 = true;
          break;
        }
      }
      bool flag2 = !flag1;
      bool flag3 = flag2;
      if (battle.IsSiegeAssault & flag2 && strikerParty.HasPerk(DefaultPerks.Tactics.Besieged))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.Besieged, strikerParty, true, ref effectiveDamage);
      if (flag1 && strikerParty.HasPerk(DefaultPerks.Scouting.Vanguard))
        effectiveDamage.AddFactor(DefaultPerks.Scouting.Vanguard.PrimaryBonus, DefaultPerks.Scouting.Vanguard.Name);
      if (((battle.IsSiegeOutside ? 1 : (battle.IsSallyOut ? 1 : 0)) & (flag3 ? 1 : 0)) != 0 && strikerParty.HasPerk(DefaultPerks.Scouting.Rearguard))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.Rearguard, strikerParty, false, ref effectiveDamage);
      if (battle.IsSallyOut & flag1 && strikerParty.HasPerk(DefaultPerks.Scouting.Vanguard, true))
        effectiveDamage.AddFactor(DefaultPerks.Scouting.Vanguard.SecondaryBonus, DefaultPerks.Scouting.Vanguard.Name);
      if (battle.IsFieldBattle & flag2 && strikerParty.HasPerk(DefaultPerks.Tactics.Counteroffensive))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.Counteroffensive, strikerParty, true, ref effectiveDamage);
      if (strikerParty.Army == null || strikerParty.LeaderHero == null || strikerParty.Army.LeaderParty != strikerParty || !strikerParty.LeaderHero.GetPerkValue(DefaultPerks.Tactics.TacticalMastery))
        return;
      PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Tactics.TacticalMastery, strikerParty.LeaderHero.CharacterObject, DefaultSkills.Tactics, true, ref effectiveDamage, Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus);
    }

    public override float GetMaximumSiegeEquipmentProgress(Settlement settlement)
    {
      float equipmentProgress = 0.0f;
      if (settlement.SiegeEvent != null && settlement.IsFortification)
      {
        foreach (SiegeEvent.SiegeEngineConstructionProgress allSiegeEngine in settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.AllSiegeEngines())
        {
          if (!allSiegeEngine.IsConstructed && (double) allSiegeEngine.Progress > (double) equipmentProgress)
            equipmentProgress = allSiegeEngine.Progress;
        }
      }
      return equipmentProgress;
    }

    public override int GetNumberOfEquipmentsBuilt(Settlement settlement)
    {
      if (settlement.SiegeEvent == null || !settlement.IsFortification)
        return 0;
      settlement.Town.GetWallLevel();
      bool flag = false;
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      foreach (SiegeEvent.SiegeEngineConstructionProgress allSiegeEngine in settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.AllSiegeEngines())
      {
        if (allSiegeEngine.IsConstructed)
        {
          if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Ram)
            flag = true;
          else if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.SiegeTower)
            ++num1;
          else if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Trebuchet || allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Onager || allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Ballista)
            ++num2;
          else if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.FireOnager || allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.FireBallista)
            ++num3;
        }
      }
      return (flag ? 1 : 0) + num1 + num2 + num3;
    }

    public override float GetSettlementAdvantage(Settlement settlement)
    {
      if (settlement.SiegeEvent != null && settlement.IsFortification)
      {
        int wallLevel = settlement.Town.GetWallLevel();
        bool flag1 = false;
        bool flag2 = false;
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        foreach (SiegeEvent.SiegeEngineConstructionProgress allSiegeEngine in settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.AllSiegeEngines())
        {
          if (allSiegeEngine.IsConstructed)
          {
            if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Ram || allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.ImprovedRam)
            {
              if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.ImprovedRam)
                flag2 = true;
              flag1 = true;
            }
            else if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.SiegeTower)
              ++num1;
            else if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Trebuchet || allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Onager || allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.Ballista)
              ++num2;
            else if (allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.FireOnager || allSiegeEngine.SiegeEngine == DefaultSiegeEngineTypes.FireBallista)
              ++num3;
          }
        }
        float num4 = 4f + (float) (wallLevel - 1);
        if ((double) settlement.SettlementTotalWallHitPoints < 9.9999997473787516E-06)
          num4 *= 0.25f;
        ExplainedNumber effectiveAdvantage = new ExplainedNumber((float) ((1.0 + (double) num4) / (1.0 + (flag1 | num1 > 0 ? 0.11999999731779099 : 0.0) + (flag2 ? 0.23999999463558197 : (flag1 ? 0.15999999642372131 : 0.0)) + (num1 > 1 ? 0.23999999463558197 : (num1 == 1 ? 0.15999999642372131 : 0.0)) + (double) num2 * 0.079999998211860657 + (double) num3 * 0.11999999731779099)));
        ISiegeEventSide siegeEventSide = settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker);
        this.CalculateSettlementAdvantagePerkEffects(settlement, ref effectiveAdvantage, siegeEventSide);
        return effectiveAdvantage.ResultNumber;
      }
      return settlement.IsVillage ? 1.25f : 1f;
    }

    private void CalculateSettlementAdvantagePerkEffects(
      Settlement settlement,
      ref ExplainedNumber effectiveAdvantage,
      ISiegeEventSide opposingSide)
    {
      if (opposingSide.GetInvolvedPartiesForEventType().Any<PartyBase>((Func<PartyBase, bool>) (x => x.MobileParty.HasPerk(DefaultPerks.Tactics.OnTheMarch))))
        effectiveAdvantage.AddFactor(DefaultPerks.Tactics.OnTheMarch.PrimaryBonus, DefaultPerks.Tactics.OnTheMarch.Name);
      if (!PerkHelper.GetPerkValueForTown(DefaultPerks.Tactics.OnTheMarch, settlement.Town))
        return;
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Tactics.OnTheMarch, settlement.Town, ref effectiveAdvantage);
    }

    public override (int defenderRounds, int attackerRounds) GetSimulationRoundsForBattle(
      MapEvent mapEvent,
      int numDefenders,
      int numAttackers)
    {
      if (mapEvent.IsInvulnerable)
        return (0, 0);
      int eventType = (int) mapEvent.EventType;
      Settlement mapEventSettlement = mapEvent.MapEventSettlement;
      if (eventType == 5)
      {
        float num1 = this.GetSettlementAdvantage(mapEventSettlement) * 0.7f;
        float num2 = 1f + MathF.Pow((float) numDefenders, 0.3f);
        float num3 = MathF.Max(num2 * num1, (float) ((numDefenders + 1) / (numAttackers + 1)));
        if (mapEventSettlement.IsTown && numDefenders > 100 || mapEventSettlement.IsCastle && numDefenders > 30)
          return (MathF.Round(0.5f + num3), MathF.Round(0.5f + num2));
      }
      int num4;
      int num5;
      if (numDefenders <= 10)
      {
        num4 = MBRandom.RoundRandomized(MathF.Min((float) numAttackers * 3f, (float) numDefenders * 0.3f));
        num5 = MBRandom.RoundRandomized(MathF.Min((float) numDefenders * 3f, (float) numAttackers * 0.3f));
      }
      else
      {
        num4 = MBRandom.RoundRandomized(MathF.Min((float) numAttackers * 2f, MathF.Pow((float) numDefenders, 0.6f)));
        num5 = MBRandom.RoundRandomized(MathF.Min((float) numDefenders * 2f, MathF.Pow((float) numAttackers, 0.6f)));
      }
      return (num4, num5);
    }

    public override (float defenderAdvantage, float attackerAdvantage) GetBattleAdvantage(
      PartyBase defenderParty,
      PartyBase attackerParty,
      MapEvent.BattleTypes mapEventType,
      Settlement settlement)
    {
      float num1 = 1f;
      double num2 = 1.0 * (double) this.PartyBattleAdvantage(defenderParty, attackerParty);
      float num3 = num1 * this.PartyBattleAdvantage(attackerParty, defenderParty);
      if (mapEventType == MapEvent.BattleTypes.Siege)
        num3 *= 0.9f;
      double num4 = (double) num3;
      return ((float) num2, (float) num4);
    }

    private float PartyBattleAdvantage(PartyBase party, PartyBase opposingParty)
    {
      float num1 = 1f;
      if (party.LeaderHero != null)
      {
        float num2 = (float) ((double) DefaultSkillEffects.TacticsAdvantage.PrimaryBonus * (double) party.LeaderHero.GetSkillValue(DefaultSkills.Tactics) * 0.0099999997764825821);
        num1 += num2;
        if (party.LeaderHero.GetPerkValue(DefaultPerks.Scouting.Patrols) && opposingParty.Culture.IsBandit)
          num1 += DefaultPerks.Scouting.Patrols.SecondaryBonus * num1;
      }
      if (party.IsMobile && opposingParty.IsMobile && party.LeaderHero != null && opposingParty.LeaderHero != null && party.MobileParty.HasPerk(DefaultPerks.Tactics.PreBattleManeuvers, true))
      {
        int num3 = party.LeaderHero.GetSkillValue(DefaultSkills.Tactics) - opposingParty.LeaderHero.GetSkillValue(DefaultSkills.Tactics);
        if (num3 > 0)
          num1 += (float) num3 * 0.01f;
      }
      return num1;
    }
  }
}
