// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSiegeEventModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSiegeEventModel : SiegeEventModel
  {
    private readonly TextObject _baseConstructionSpeedText = new TextObject("{=MhGbcXJ4}Base construction speed");
    private readonly TextObject _constructionSpeedProjectBonusText = new TextObject("{=xoTWC8Sm}Project Bonus");
    private readonly TextObject _weatherConstructionPenalty = new TextObject("{=J6RjCKbk}Weather");

    public override string GetSiegeEngineMapPrefabName(
      SiegeEngineType type,
      int wallLevel,
      BattleSideEnum side)
    {
      string engineMapPrefabName = (string) null;
      if (type == DefaultSiegeEngineTypes.Onager)
        engineMapPrefabName = "mangonel_a_mapicon";
      else if (type == DefaultSiegeEngineTypes.Catapult)
        engineMapPrefabName = "mangonel_b_mapicon";
      else if (type == DefaultSiegeEngineTypes.FireOnager)
        engineMapPrefabName = "mangonel_a_fire_mapicon";
      else if (type == DefaultSiegeEngineTypes.FireCatapult)
        engineMapPrefabName = "mangonel_b_fire_mapicon";
      else if (type == DefaultSiegeEngineTypes.Ballista)
        engineMapPrefabName = side == BattleSideEnum.Attacker ? "ballista_a_mapicon" : "ballista_b_mapicon";
      else if (type == DefaultSiegeEngineTypes.FireBallista)
        engineMapPrefabName = side == BattleSideEnum.Attacker ? "ballista_a_fire_mapicon" : "ballista_b_fire_mapicon";
      else if (type == DefaultSiegeEngineTypes.Trebuchet)
        engineMapPrefabName = "trebuchet_a_mapicon";
      else if (type == DefaultSiegeEngineTypes.Bricole)
        engineMapPrefabName = "trebuchet_b_mapicon";
      else if (type == DefaultSiegeEngineTypes.Ram)
        engineMapPrefabName = "batteringram_a_mapicon";
      else if (type == DefaultSiegeEngineTypes.SiegeTower)
      {
        switch (wallLevel)
        {
          case 1:
            engineMapPrefabName = "siegetower_5m_mapicon";
            break;
          case 2:
            engineMapPrefabName = "siegetower_9m_mapicon";
            break;
          case 3:
            engineMapPrefabName = "siegetower_12m_mapicon";
            break;
        }
      }
      return engineMapPrefabName;
    }

    public override string GetSiegeEngineMapProjectilePrefabName(SiegeEngineType type)
    {
      string projectilePrefabName = (string) null;
      if (type == DefaultSiegeEngineTypes.Onager || type == DefaultSiegeEngineTypes.Catapult || type == DefaultSiegeEngineTypes.Trebuchet || type == DefaultSiegeEngineTypes.Bricole)
        projectilePrefabName = "mangonel_mapicon_projectile";
      else if (type == DefaultSiegeEngineTypes.FireOnager || type == DefaultSiegeEngineTypes.FireCatapult)
        projectilePrefabName = "mangonel_fire_mapicon_projectile";
      else if (type == DefaultSiegeEngineTypes.Ballista)
        projectilePrefabName = "ballista_mapicon_projectile";
      else if (type == DefaultSiegeEngineTypes.FireBallista)
        projectilePrefabName = "ballista_fire_mapicon_projectile";
      return projectilePrefabName;
    }

    public override string GetSiegeEngineMapReloadAnimationName(
      SiegeEngineType type,
      BattleSideEnum side)
    {
      string reloadAnimationName = (string) null;
      if (type == DefaultSiegeEngineTypes.Onager)
        reloadAnimationName = "mangonel_a_mapicon_reload";
      else if (type == DefaultSiegeEngineTypes.Catapult)
        reloadAnimationName = "mangonel_b_mapicon_reload";
      else if (type == DefaultSiegeEngineTypes.FireOnager)
        reloadAnimationName = "mangonel_a_fire_mapicon_reload";
      else if (type == DefaultSiegeEngineTypes.FireCatapult)
        reloadAnimationName = "mangonel_b_fire_mapicon_reload";
      else if (type == DefaultSiegeEngineTypes.Ballista)
        reloadAnimationName = side == BattleSideEnum.Attacker ? "ballista_a_mapicon_reload" : "ballista_b_mapicon_reload";
      else if (type == DefaultSiegeEngineTypes.FireBallista)
        reloadAnimationName = side == BattleSideEnum.Attacker ? "ballista_a_fire_mapicon_reload" : "ballista_b_fire_mapicon_reload";
      else if (type == DefaultSiegeEngineTypes.Trebuchet)
        reloadAnimationName = "trebuchet_a_mapicon_reload";
      else if (type == DefaultSiegeEngineTypes.Bricole)
        reloadAnimationName = "trebuchet_b_mapicon_reload";
      return reloadAnimationName;
    }

    public override string GetSiegeEngineMapFireAnimationName(
      SiegeEngineType type,
      BattleSideEnum side)
    {
      string fireAnimationName = (string) null;
      if (type == DefaultSiegeEngineTypes.Onager)
        fireAnimationName = "mangonel_a_mapicon_fire";
      else if (type == DefaultSiegeEngineTypes.Catapult)
        fireAnimationName = "mangonel_b_mapicon_fire";
      else if (type == DefaultSiegeEngineTypes.FireOnager)
        fireAnimationName = "mangonel_a_fire_mapicon_fire";
      else if (type == DefaultSiegeEngineTypes.FireCatapult)
        fireAnimationName = "mangonel_b_fire_mapicon_fire";
      else if (type == DefaultSiegeEngineTypes.Ballista)
        fireAnimationName = side == BattleSideEnum.Attacker ? "ballista_a_mapicon_fire" : "ballista_b_mapicon_fire";
      else if (type == DefaultSiegeEngineTypes.FireBallista)
        fireAnimationName = side == BattleSideEnum.Attacker ? "ballista_a_fire_mapicon_fire" : "ballista_b_fire_mapicon_fire";
      else if (type == DefaultSiegeEngineTypes.Trebuchet)
        fireAnimationName = "trebuchet_a_mapicon_fire";
      else if (type == DefaultSiegeEngineTypes.Bricole)
        fireAnimationName = "trebuchet_b_mapicon_fire";
      return fireAnimationName;
    }

    public override sbyte GetSiegeEngineMapProjectileBoneIndex(
      SiegeEngineType type,
      BattleSideEnum side)
    {
      if (type == DefaultSiegeEngineTypes.Onager || type == DefaultSiegeEngineTypes.FireOnager || type == DefaultSiegeEngineTypes.Catapult || type == DefaultSiegeEngineTypes.FireCatapult)
        return 2;
      if (type == DefaultSiegeEngineTypes.Ballista || type == DefaultSiegeEngineTypes.FireBallista)
        return 7;
      if (type == DefaultSiegeEngineTypes.Trebuchet)
        return 4;
      return type == DefaultSiegeEngineTypes.Bricole ? (sbyte) 20 : (sbyte) -1;
    }

    public override MobileParty GetEffectiveSiegePartyForSide(
      SiegeEvent siegeEvent,
      BattleSideEnum battleSide)
    {
      MobileParty siegePartyForSide = (MobileParty) null;
      if (battleSide == BattleSideEnum.Attacker)
      {
        siegePartyForSide = siegeEvent.BesiegerCamp.LeaderParty;
      }
      else
      {
        int num = 0;
        int partyIndex = -1;
        for (PartyBase partyForEventType = siegeEvent.BesiegedSettlement.GetNextInvolvedPartyForEventType(ref partyIndex, MapEvent.BattleTypes.Siege); partyForEventType != null; partyForEventType = siegeEvent.BesiegedSettlement.GetNextInvolvedPartyForEventType(ref partyIndex, MapEvent.BattleTypes.Siege))
        {
          if (partyForEventType.LeaderHero != null)
          {
            Hero effectiveEngineer = partyForEventType.MobileParty.EffectiveEngineer;
            int skillValue = effectiveEngineer != null ? effectiveEngineer.GetSkillValue(DefaultSkills.Engineering) : 0;
            if (skillValue > num)
            {
              num = skillValue;
              siegePartyForSide = partyForEventType.MobileParty;
            }
          }
        }
      }
      return siegePartyForSide;
    }

    public override float GetCasualtyChance(
      MobileParty siegeParty,
      SiegeEvent siegeEvent,
      BattleSideEnum side)
    {
      float casualtyChance = 1f;
      if (siegeParty != null && siegeParty.HasPerk(DefaultPerks.Engineering.CampBuilding, true))
        casualtyChance += DefaultPerks.Engineering.CampBuilding.SecondaryBonus;
      if (siegeParty != null && siegeParty.HasPerk(DefaultPerks.Medicine.SiegeMedic, true))
        casualtyChance -= DefaultPerks.Medicine.SiegeMedic.SecondaryBonus;
      if (side == BattleSideEnum.Defender && siegeEvent.BesiegedSettlement.Town?.Governor != null && siegeEvent.BesiegedSettlement.Town.Governor.GetPerkValue(DefaultPerks.Medicine.BattleHardened))
        casualtyChance += DefaultPerks.Medicine.BattleHardened.SecondaryBonus;
      return casualtyChance;
    }

    public override int GetSiegeEngineDestructionCasualties(
      SiegeEvent siegeEvent,
      BattleSideEnum side,
      SiegeEngineType destroyedSiegeEngine)
    {
      return 2;
    }

    public override int GetColleteralDamageCasualties(
      SiegeEngineType siegeEngineType,
      MobileParty party)
    {
      int damageCasualties = 1;
      if (party != null && party.HasPerk(DefaultPerks.Crossbow.Terror) && (double) MBRandom.RandomFloat < (double) DefaultPerks.Crossbow.Terror.PrimaryBonus)
        ++damageCasualties;
      return damageCasualties;
    }

    public override float GetSiegeEngineHitChance(
      SiegeEngineType siegeEngineType,
      BattleSideEnum battleSide,
      SiegeBombardTargets target,
      Town town)
    {
      float baseNumber;
      switch (target)
      {
        case SiegeBombardTargets.Wall:
        case SiegeBombardTargets.RangedEngines:
          baseNumber = siegeEngineType.HitChance;
          break;
        case SiegeBombardTargets.People:
          baseNumber = siegeEngineType.AntiPersonnelHitChance;
          break;
        default:
          throw new ArgumentOutOfRangeException(nameof (target), (object) target, (string) null);
      }
      ExplainedNumber bonuses = new ExplainedNumber(baseNumber);
      if (battleSide == BattleSideEnum.Attacker && target == SiegeBombardTargets.RangedEngines)
      {
        float num = 0.0f;
        switch (town.GetWallLevel())
        {
          case 1:
            num = 0.05f;
            break;
          case 2:
            num = 0.1f;
            break;
          case 3:
            num = 0.15f;
            break;
        }
        bonuses.Add(-num, new TextObject("{=b9NaTqyr}Extra Defender Defense"));
      }
      if (battleSide == BattleSideEnum.Defender)
      {
        if (target == SiegeBombardTargets.RangedEngines && town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Engineering.DreadfulSieger))
          bonuses.AddFactor(DefaultPerks.Engineering.DreadfulSieger.PrimaryBonus, DefaultPerks.Engineering.DreadfulSieger.Name);
        if (siegeEngineType == DefaultSiegeEngineTypes.Ballista)
          PerkHelper.AddPerkBonusForTown(DefaultPerks.Crossbow.Pavise, town, ref bonuses);
      }
      SiegeEvent siegeEvent = town.Settlement.SiegeEvent;
      MobileParty siegePartyForSide1 = this.GetEffectiveSiegePartyForSide(siegeEvent, battleSide);
      MobileParty siegePartyForSide2 = this.GetEffectiveSiegePartyForSide(siegeEvent, battleSide.GetOppositeSide());
      if (siegePartyForSide1 != null)
      {
        if ((siegeEngineType == DefaultSiegeEngineTypes.Trebuchet || siegeEngineType == DefaultSiegeEngineTypes.Onager || siegeEngineType == DefaultSiegeEngineTypes.FireOnager) && siegePartyForSide1.HasPerk(DefaultPerks.Engineering.Foreman))
          bonuses.AddFactor(DefaultPerks.Engineering.Foreman.PrimaryBonus, DefaultPerks.Engineering.Foreman.Name);
        if ((siegeEngineType == DefaultSiegeEngineTypes.Ballista || siegeEngineType == DefaultSiegeEngineTypes.FireBallista) && siegePartyForSide1.HasPerk(DefaultPerks.Engineering.Salvager))
          bonuses.AddFactor(DefaultPerks.Engineering.Salvager.PrimaryBonus, DefaultPerks.Engineering.Salvager.Name);
      }
      if (battleSide == BattleSideEnum.Defender && siegePartyForSide2 != null && target == SiegeBombardTargets.RangedEngines && siegePartyForSide2.HasPerk(DefaultPerks.Engineering.DungeonArchitect))
        bonuses.AddFactor(DefaultPerks.Engineering.DungeonArchitect.PrimaryBonus, DefaultPerks.Engineering.DungeonArchitect.Name);
      if ((double) bonuses.ResultNumber < 0.0)
        bonuses = new ExplainedNumber();
      return bonuses.ResultNumber;
    }

    public override float GetSiegeStrategyScore(
      SiegeEvent siege,
      BattleSideEnum side,
      SiegeStrategy strategy)
    {
      if (strategy == DefaultSiegeStrategies.PreserveStrength)
        return -9000f;
      if (strategy != DefaultSiegeStrategies.Custom)
        return MBRandom.RandomFloat;
      return siege == PlayerSiege.PlayerSiegeEvent && side == PlayerSiege.PlayerSide && siege.BesiegerCamp != null && siege.BesiegerCamp.LeaderParty == MobileParty.MainParty ? 9000f : -100f;
    }

    public override float GetConstructionProgressPerHour(
      SiegeEngineType type,
      SiegeEvent siegeEvent,
      ISiegeEventSide side)
    {
      ExplainedNumber stat = new ExplainedNumber();
      float availableManDayPower = this.GetAvailableManDayPower(side);
      float manDayCost = (float) type.ManDayCost;
      stat.Add((float) (1.0 / ((double) manDayCost / (double) availableManDayPower * 24.0)), this._baseConstructionSpeedText);
      MobileParty siegePartyForSide = this.GetEffectiveSiegePartyForSide(siegeEvent, side.BattleSide);
      if (siegePartyForSide != null && (siegePartyForSide?.EffectiveEngineer?.GetSkillValue(DefaultSkills.Engineering) ?? 0) > 0)
        SkillHelper.AddSkillBonusForParty(DefaultSkills.Engineering, DefaultSkillEffects.SiegeEngineProductionBonus, siegePartyForSide, ref stat);
      float num = 0.0f;
      if (side.BattleSide == BattleSideEnum.Defender)
      {
        foreach (Building building in (List<Building>) siegeEvent.BesiegedSettlement.Town.Buildings)
          num += building.GetBuildingEffectAmount(BuildingEffectEnum.SiegeEngineSpeed);
        stat.AddFactor(num * 0.01f, this._constructionSpeedProjectBonusText);
        Hero governor = siegeEvent.BesiegedSettlement.Town.Governor;
        if (governor?.CurrentSettlement != null && governor.CurrentSettlement == siegeEvent.BesiegedSettlement)
          SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Engineering, DefaultSkillEffects.SiegeEngineProductionBonus, governor.CharacterObject, ref stat);
      }
      if (siegeEvent?.BesiegerCamp.LeaderParty != null && siegeEvent.BesiegerCamp.LeaderParty.HasPerk(DefaultPerks.Steward.Sweatshops, true))
        stat.AddFactor(DefaultPerks.Steward.Sweatshops.SecondaryBonus);
      if (siegePartyForSide != null)
      {
        SiegeEvent.SiegeEngineConstructionProgress siegePreparations = side.SiegeEngines.SiegePreparations;
        if ((siegePreparations != null ? (!siegePreparations.IsConstructed ? 1 : 0) : 0) != 0 && siegePartyForSide.HasPerk(DefaultPerks.Engineering.ImprovedTools))
        {
          stat.AddFactor(DefaultPerks.Engineering.ImprovedTools.PrimaryBonus, DefaultPerks.Engineering.ImprovedTools.Name);
        }
        else
        {
          PerkObject perk = type.IsRanged ? DefaultPerks.Engineering.TorsionEngines : DefaultPerks.Engineering.Scaffolds;
          if (siegePartyForSide.HasPerk(perk))
            stat.AddFactor(perk.PrimaryBonus, perk.Name);
        }
      }
      if (side.BattleSide == BattleSideEnum.Defender)
      {
        Settlement besiegedSettlement = siegeEvent.BesiegedSettlement;
        PerkObject salvager = DefaultPerks.Engineering.Salvager;
        if (PerkHelper.GetPerkValueForTown(salvager, besiegedSettlement.Town))
          stat.AddFactor(salvager.SecondaryBonus * besiegedSettlement.Militia, salvager.Name);
      }
      return stat.ResultNumber;
    }

    public override float GetAvailableManDayPower(ISiegeEventSide side)
    {
      int partyIndex = -1;
      PartyBase partyForEventType = side.GetNextInvolvedPartyForEventType(ref partyIndex);
      int x = 0;
      for (; partyForEventType != null; partyForEventType = side.GetNextInvolvedPartyForEventType(ref partyIndex))
        x += partyForEventType.NumberOfHealthyMembers;
      return MathF.Sqrt((float) x);
    }

    public override IEnumerable<SiegeEngineType> GetPrebuiltSiegeEnginesOfSettlement(
      Settlement settlement)
    {
      List<SiegeEngineType> enginesOfSettlement = new List<SiegeEngineType>();
      if (settlement.IsFortification)
      {
        Town town = settlement.Town;
        Building building1 = town.Buildings.Find((Predicate<Building>) (building => building.BuildingType == DefaultBuildingTypes.SettlementSiegeWorkshop));
        if (building1 != null)
        {
          switch (building1.CurrentLevel)
          {
            case 0:
              break;
            case 1:
              enginesOfSettlement.Add(DefaultSiegeEngineTypes.Ballista);
              break;
            case 2:
              enginesOfSettlement.Add(DefaultSiegeEngineTypes.Ballista);
              enginesOfSettlement.Add(DefaultSiegeEngineTypes.Catapult);
              goto case 1;
            case 3:
              enginesOfSettlement.Add(DefaultSiegeEngineTypes.Ballista);
              enginesOfSettlement.Add(DefaultSiegeEngineTypes.Catapult);
              goto case 2;
            default:
              Debug.FailedAssert("Invalid building level", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameComponents\\DefaultSiegeEventCalculationModel.cs", nameof (GetPrebuiltSiegeEnginesOfSettlement), 568);
              break;
          }
        }
        if (town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Engineering.SiegeWorks))
          enginesOfSettlement.Add(DefaultSiegeEngineTypes.Catapult);
      }
      return (IEnumerable<SiegeEngineType>) enginesOfSettlement;
    }

    public override IEnumerable<SiegeEngineType> GetPrebuiltSiegeEnginesOfSiegeCamp(
      BesiegerCamp besiegerCamp)
    {
      List<SiegeEngineType> enginesOfSiegeCamp = new List<SiegeEngineType>();
      if (besiegerCamp.LeaderParty.HasPerk(DefaultPerks.Engineering.Battlements))
        enginesOfSiegeCamp.Add(DefaultSiegeEngineTypes.Ballista);
      return (IEnumerable<SiegeEngineType>) enginesOfSiegeCamp;
    }

    public override float GetSiegeEngineHitPoints(
      SiegeEvent siegeEvent,
      SiegeEngineType siegeEngine,
      BattleSideEnum battleSide)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber((float) siegeEngine.BaseHitPoints);
      Settlement besiegedSettlement = siegeEvent.BesiegedSettlement;
      MobileParty siegePartyForSide = this.GetEffectiveSiegePartyForSide(siegeEvent, battleSide);
      if (battleSide == BattleSideEnum.Defender && besiegedSettlement.Town.Governor != null && besiegedSettlement.Town.Governor.GetPerkValue(DefaultPerks.Engineering.SiegeEngineer))
        explainedNumber.AddFactor(DefaultPerks.Engineering.SiegeEngineer.PrimaryBonus, DefaultPerks.Engineering.SiegeEngineer.Name);
      if (siegeEngine.IsRanged)
      {
        if (siegePartyForSide != null && siegePartyForSide.HasPerk(DefaultPerks.Engineering.SiegeWorks))
          explainedNumber.AddFactor(DefaultPerks.Engineering.SiegeWorks.PrimaryBonus, DefaultPerks.Engineering.SiegeWorks.Name);
      }
      else if (battleSide == BattleSideEnum.Attacker && siegePartyForSide != null && siegePartyForSide.HasPerk(DefaultPerks.Engineering.Carpenters))
        explainedNumber.AddFactor(DefaultPerks.Engineering.Carpenters.PrimaryBonus, DefaultPerks.Engineering.Carpenters.Name);
      return explainedNumber.ResultNumber;
    }

    public override float GetSiegeEngineDamage(
      SiegeEvent siegeEvent,
      BattleSideEnum battleSide,
      SiegeEngineType siegeEngine,
      SiegeBombardTargets target)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber((float) siegeEngine.Damage);
      MobileParty siegePartyForSide = this.GetEffectiveSiegePartyForSide(siegeEvent, battleSide);
      if (siegePartyForSide != null)
      {
        if (battleSide == BattleSideEnum.Attacker)
        {
          if (target == SiegeBombardTargets.Wall && siegePartyForSide.HasPerk(DefaultPerks.Engineering.WallBreaker))
            explainedNumber.AddFactor(DefaultPerks.Engineering.WallBreaker.PrimaryBonus, DefaultPerks.Engineering.WallBreaker.Name);
          if (target == SiegeBombardTargets.RangedEngines && siegePartyForSide.HasPerk(DefaultPerks.Tactics.MakeThemPay))
            explainedNumber.AddFactor(DefaultPerks.Tactics.MakeThemPay.PrimaryBonus, DefaultPerks.Tactics.MakeThemPay.Name);
        }
        if ((target == SiegeBombardTargets.RangedEngines || target == SiegeBombardTargets.Wall) && siegePartyForSide.HasPerk(DefaultPerks.Engineering.Masterwork))
        {
          int num1 = siegePartyForSide.LeaderHero.GetSkillValue(DefaultSkills.Engineering) - Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus;
          if (num1 > 0)
          {
            float num2 = (float) num1 * DefaultPerks.Engineering.Masterwork.PrimaryBonus;
            explainedNumber.AddFactor(num2, DefaultPerks.Engineering.Masterwork.Name);
          }
        }
      }
      if (battleSide == BattleSideEnum.Defender && target == SiegeBombardTargets.RangedEngines)
      {
        Hero governor = siegeEvent.BesiegedSettlement.Town.Governor;
        if ((governor != null ? (governor.GetPerkValue(DefaultPerks.Tactics.MakeThemPay) ? 1 : 0) : 0) != 0)
          explainedNumber.AddFactor(DefaultPerks.Tactics.MakeThemPay.SecondaryBonus, DefaultPerks.Tactics.MakeThemPay.Name);
      }
      return explainedNumber.ResultNumber;
    }

    public override int GetRangedSiegeEngineReloadTime(
      SiegeEvent siegeEvent,
      BattleSideEnum side,
      SiegeEngineType siegeEngine)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(siegeEngine.CampaignRateOfFirePerDay);
      MobileParty siegePartyForSide = this.GetEffectiveSiegePartyForSide(siegeEvent, side);
      if (siegePartyForSide != null)
      {
        if ((siegeEngine == DefaultSiegeEngineTypes.Ballista || siegeEngine == DefaultSiegeEngineTypes.FireBallista) && siegePartyForSide.HasPerk(DefaultPerks.Engineering.Clockwork))
          explainedNumber.AddFactor(DefaultPerks.Engineering.Clockwork.PrimaryBonus, DefaultPerks.Engineering.Clockwork.Name);
        else if ((siegeEngine == DefaultSiegeEngineTypes.Onager || siegeEngine == DefaultSiegeEngineTypes.Trebuchet || siegeEngine == DefaultSiegeEngineTypes.FireOnager) && siegePartyForSide.HasPerk(DefaultPerks.Engineering.ArchitecturalCommisions))
          explainedNumber.AddFactor(DefaultPerks.Engineering.ArchitecturalCommisions.PrimaryBonus, DefaultPerks.Engineering.ArchitecturalCommisions.Name);
      }
      return MathF.Round(1440f / explainedNumber.ResultNumber);
    }

    public override IEnumerable<SiegeEngineType> GetAvailableAttackerRangedSiegeEngines(
      PartyBase party)
    {
      bool hasFirePerks = party.MobileParty.HasPerk(DefaultPerks.Engineering.Stonecutters, true) || party.MobileParty.HasPerk(DefaultPerks.Engineering.SiegeEngineer, true);
      yield return DefaultSiegeEngineTypes.Ballista;
      if (hasFirePerks)
        yield return DefaultSiegeEngineTypes.FireBallista;
      yield return DefaultSiegeEngineTypes.Onager;
      if (hasFirePerks)
        yield return DefaultSiegeEngineTypes.FireOnager;
      yield return DefaultSiegeEngineTypes.Trebuchet;
    }

    public override IEnumerable<SiegeEngineType> GetAvailableDefenderSiegeEngines(PartyBase party)
    {
      bool hasFirePerks = party.MobileParty.HasPerk(DefaultPerks.Engineering.Stonecutters, true) || party.MobileParty.HasPerk(DefaultPerks.Engineering.SiegeEngineer, true);
      yield return DefaultSiegeEngineTypes.Ballista;
      if (hasFirePerks)
        yield return DefaultSiegeEngineTypes.FireBallista;
      yield return DefaultSiegeEngineTypes.Catapult;
      if (hasFirePerks)
        yield return DefaultSiegeEngineTypes.FireCatapult;
    }

    public override IEnumerable<SiegeEngineType> GetAvailableAttackerRamSiegeEngines(PartyBase party)
    {
      yield return DefaultSiegeEngineTypes.Ram;
    }

    public override IEnumerable<SiegeEngineType> GetAvailableAttackerTowerSiegeEngines(
      PartyBase party)
    {
      yield return DefaultSiegeEngineTypes.SiegeTower;
    }

    public override FlattenedTroopRoster GetPriorityTroopsForSallyOutAmbush()
    {
      FlattenedTroopRoster forSallyOutAmbush = new FlattenedTroopRoster();
      foreach (TroopRosterElement troop in (List<TroopRosterElement>) MobileParty.MainParty.MemberRoster.GetTroopRoster())
      {
        if (this.IsPriorityTroopForSallyOutAmbush(troop))
          forSallyOutAmbush.Add(troop);
      }
      SiegeEvent playerSiegeEvent = PlayerSiege.PlayerSiegeEvent;
      if (playerSiegeEvent.BesiegedSettlement.OwnerClan == Clan.PlayerClan && playerSiegeEvent.BesiegedSettlement.Town.GarrisonParty != null && playerSiegeEvent.BesiegedSettlement.Town.GarrisonParty.MemberRoster.Count > 0)
      {
        foreach (TroopRosterElement troop in (List<TroopRosterElement>) playerSiegeEvent.BesiegedSettlement.Town.GarrisonParty.MemberRoster.GetTroopRoster())
        {
          if (this.IsPriorityTroopForSallyOutAmbush(troop))
            forSallyOutAmbush.Add(troop);
        }
      }
      if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty)
      {
        foreach (PartyBase partyBase in playerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Defender).GetInvolvedPartiesForEventType())
        {
          if (partyBase != PartyBase.MainParty)
          {
            foreach (TroopRosterElement troop in (List<TroopRosterElement>) partyBase.MemberRoster.GetTroopRoster())
            {
              if (this.IsPriorityTroopForSallyOutAmbush(troop))
                forSallyOutAmbush.Add(troop);
            }
          }
        }
      }
      return forSallyOutAmbush;
    }

    private bool IsPriorityTroopForSallyOutAmbush(TroopRosterElement troop)
    {
      CharacterObject character = troop.Character;
      return character.IsHero || character.HasMount();
    }
  }
}
