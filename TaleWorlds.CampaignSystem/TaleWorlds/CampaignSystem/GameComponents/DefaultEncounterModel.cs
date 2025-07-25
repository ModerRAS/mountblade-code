// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultEncounterModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultEncounterModel : EncounterModel
  {
    public override float EstimatedMaximumMobilePartySpeedExceptPlayer => 10f;

    public override float NeededMaximumDistanceForEncounteringMobileParty => 0.5f;

    public override float MaximumAllowedDistanceForEncounteringMobilePartyInArmy => 1.5f;

    public override float NeededMaximumDistanceForEncounteringTown => 0.05f;

    public override float NeededMaximumDistanceForEncounteringVillage => 1f;

    public override bool IsEncounterExemptFromHostileActions(PartyBase side1, PartyBase side2)
    {
      if (side1 == null || side2 == null || side1.IsMobile && side1.MobileParty.AvoidHostileActions)
        return true;
      return side2.IsMobile && side2.MobileParty.AvoidHostileActions;
    }

    public override Hero GetLeaderOfSiegeEvent(SiegeEvent siegeEvent, BattleSideEnum side)
    {
      return this.GetLeaderOfEventInternal(siegeEvent.GetSiegeEventSide(side).GetInvolvedPartiesForEventType().ToList<PartyBase>());
    }

    public override Hero GetLeaderOfMapEvent(MapEvent mapEvent, BattleSideEnum side)
    {
      return this.GetLeaderOfEventInternal(mapEvent.GetMapEventSide(side).Parties.Select<MapEventParty, PartyBase>((Func<MapEventParty, PartyBase>) (x => x.Party)).ToList<PartyBase>());
    }

    private bool IsArmyLeader(Hero hero)
    {
      return hero.PartyBelongedTo?.Army != null && hero.PartyBelongedTo.Army.LeaderParty == hero.PartyBelongedTo;
    }

    private int GetLeadingScore(Hero hero)
    {
      return !hero.IsKingdomLeader && !this.IsArmyLeader(hero) ? this.GetCharacterSergeantScore(hero) : (int) hero.PartyBelongedTo.GetTotalStrengthWithFollowers();
    }

    private Hero GetLeaderOfEventInternal(List<PartyBase> allPartiesThatBelongToASide)
    {
      Hero hero = (Hero) null;
      int num1 = 0;
      foreach (PartyBase partyBase in allPartiesThatBelongToASide)
      {
        Hero leaderHero = partyBase.LeaderHero;
        if (leaderHero != null)
        {
          int leadingScore = this.GetLeadingScore(leaderHero);
          if (hero == null)
          {
            hero = leaderHero;
            num1 = leadingScore;
          }
          int num2 = leaderHero.IsKingdomLeader ? 1 : 0;
          bool flag1 = this.IsArmyLeader(leaderHero);
          bool isKingdomLeader = hero.IsKingdomLeader;
          bool flag2 = this.IsArmyLeader(hero);
          if (num2 != 0)
          {
            if (!isKingdomLeader || leadingScore > num1)
            {
              hero = leaderHero;
              num1 = leadingScore;
            }
          }
          else if (flag1)
          {
            if (!isKingdomLeader && !flag2 || flag2 && !isKingdomLeader && leadingScore > num1)
            {
              hero = leaderHero;
              num1 = leadingScore;
            }
          }
          else if (!isKingdomLeader && !flag2 && leadingScore > num1)
          {
            hero = leaderHero;
            num1 = leadingScore;
          }
        }
      }
      return hero;
    }

    public override int GetCharacterSergeantScore(Hero hero)
    {
      int characterSergeantScore = 0;
      Clan clan = hero.Clan;
      if (clan != null)
      {
        characterSergeantScore += clan.Tier * (hero == clan.Leader ? 100 : 20);
        if (clan.Kingdom != null && clan.Kingdom.Leader == hero)
          characterSergeantScore += 2000;
      }
      MobileParty partyBelongedTo = hero.PartyBelongedTo;
      if (partyBelongedTo != null)
      {
        if (partyBelongedTo.Army != null && partyBelongedTo.Army.LeaderParty == partyBelongedTo)
          characterSergeantScore += partyBelongedTo.Army.Parties.Count * 200;
        characterSergeantScore += partyBelongedTo.MemberRoster.TotalManCount - partyBelongedTo.MemberRoster.TotalWounded;
      }
      return characterSergeantScore;
    }

    public override IEnumerable<PartyBase> GetDefenderPartiesOfSettlement(
      Settlement settlement,
      MapEvent.BattleTypes mapEventType)
    {
      if (settlement.IsFortification)
        return settlement.Town.GetDefenderParties(mapEventType);
      if (settlement.IsVillage)
        return settlement.Village.GetDefenderParties(mapEventType);
      return settlement.IsHideout ? settlement.Hideout.GetDefenderParties(mapEventType) : (IEnumerable<PartyBase>) null;
    }

    public override PartyBase GetNextDefenderPartyOfSettlement(
      Settlement settlement,
      ref int partyIndex,
      MapEvent.BattleTypes mapEventType)
    {
      if (settlement.IsFortification)
        return settlement.Town.GetNextDefenderParty(ref partyIndex, mapEventType);
      if (settlement.IsVillage)
        return settlement.Village.GetNextDefenderParty(ref partyIndex, mapEventType);
      return settlement.IsHideout ? settlement.Hideout.GetNextDefenderParty(ref partyIndex, mapEventType) : (PartyBase) null;
    }

    public override MapEventComponent CreateMapEventComponentForEncounter(
      PartyBase attackerParty,
      PartyBase defenderParty,
      MapEvent.BattleTypes battleType)
    {
      MapEventComponent componentForEncounter = (MapEventComponent) null;
      switch (battleType)
      {
        case MapEvent.BattleTypes.FieldBattle:
          componentForEncounter = (MapEventComponent) FieldBattleEventComponent.CreateFieldBattleEvent(attackerParty, defenderParty);
          break;
        case MapEvent.BattleTypes.Raid:
          componentForEncounter = (MapEventComponent) RaidEventComponent.CreateRaidEvent(attackerParty, defenderParty);
          break;
        case MapEvent.BattleTypes.Siege:
          Campaign.Current.MapEventManager.StartSiegeMapEvent(attackerParty, defenderParty);
          break;
        case MapEvent.BattleTypes.Hideout:
          componentForEncounter = (MapEventComponent) HideoutEventComponent.CreateHideoutEvent(attackerParty, defenderParty);
          break;
        case MapEvent.BattleTypes.SallyOut:
          Campaign.Current.MapEventManager.StartSallyOutMapEvent(attackerParty, defenderParty);
          break;
        case MapEvent.BattleTypes.SiegeOutside:
          Campaign.Current.MapEventManager.StartSiegeOutsideMapEvent(attackerParty, defenderParty);
          break;
      }
      return componentForEncounter;
    }
  }
}
