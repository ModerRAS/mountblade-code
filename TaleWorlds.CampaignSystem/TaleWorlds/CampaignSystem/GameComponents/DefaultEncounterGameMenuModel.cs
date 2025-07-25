// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultEncounterGameMenuModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultEncounterGameMenuModel : EncounterGameMenuModel
  {
    protected PartyBase GetEncounteredPartyBase(PartyBase attackerParty, PartyBase defenderParty)
    {
      return attackerParty == PartyBase.MainParty || defenderParty == PartyBase.MainParty ? (attackerParty != PartyBase.MainParty ? attackerParty : defenderParty) : (defenderParty.MapEvent == null ? attackerParty : defenderParty);
    }

    public override string GetEncounterMenu(
      PartyBase attackerParty,
      PartyBase defenderParty,
      out bool startBattle,
      out bool joinBattle)
    {
      PartyBase encounteredPartyBase = this.GetEncounteredPartyBase(attackerParty, defenderParty);
      joinBattle = false;
      startBattle = false;
      if (defenderParty == null)
        return "camp";
      if (encounteredPartyBase.IsSettlement)
      {
        Settlement settlement = encounteredPartyBase.Settlement;
        if (settlement.IsVillage)
        {
          if (encounteredPartyBase.MapEvent != null && encounteredPartyBase.MapEvent.IsRaid)
          {
            if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty && encounteredPartyBase.MapEvent.AttackerSide.LeaderParty == MobileParty.MainParty.Army.LeaderParty.Party && encounteredPartyBase.MapEvent.DefenderSide.TroopCount <= 0)
            {
              joinBattle = true;
              return !encounteredPartyBase.MapEvent.IsRaid ? "army_wait" : "raiding_village";
            }
            if ((MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty || attackerParty != MobileParty.MainParty.Army.LeaderParty.Party) && (MobileParty.MainParty.CurrentSettlement != settlement || MobileParty.MainParty.MapFaction != settlement.MapFaction))
              return "join_encounter";
            joinBattle = true;
            return "encounter";
          }
          return settlement.MapFaction == MobileParty.MainParty.MapFaction && MobileParty.MainParty.Army != null && attackerParty == MobileParty.MainParty.Army.LeaderParty.Party && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty ? "army_wait_at_settlement" : "village_outside";
        }
        if (settlement.IsFortification)
        {
          if (PlayerSiege.PlayerSiegeEvent != null && PlayerSiege.PlayerSide == BattleSideEnum.Defender && settlement.Party.MapEvent == null)
            return "menu_siege_strategies";
          if (settlement.Party.SiegeEvent != null && (settlement.Party.MapEvent == null && (settlement.Town.GarrisonParty == null || settlement.Town.GarrisonParty.MapEvent == null || settlement.Town.GarrisonParty.MapEvent.IsSallyOut) || MobileParty.MainParty.MapFaction == settlement.MapFaction))
          {
            if (settlement.Party.SiegeEvent.BesiegerCamp.LeaderParty == MobileParty.MainParty)
              return "continue_siege_after_attack";
            if (MobileParty.MainParty.BesiegedSettlement == null && MobileParty.MainParty.CurrentSettlement == null)
              return settlement.Party.SiegeEvent.BesiegerCamp.LeaderParty.MapEvent != null && settlement.Party.SiegeEvent.BesiegerCamp.LeaderParty.MapEvent.IsSiegeOutside ? "join_encounter" : "join_siege_event";
          }
          if (settlement.Party.MapEvent != null)
            return MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty && attackerParty == MobileParty.MainParty.Army.LeaderParty.Party || MobileParty.MainParty.CurrentSettlement == settlement && settlement.Party.MapEvent.CanPartyJoinBattle(PartyBase.MainParty, settlement.BattleSide) ? "encounter" : "join_siege_event";
          if (settlement.MapFaction == MobileParty.MainParty.MapFaction && MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
            return "army_wait_at_settlement";
          return settlement.IsCastle ? "castle_outside" : "town_outside";
        }
        if (settlement.IsHideout)
          return "hideout_place";
        return settlement.SettlementComponent is RetirementSettlementComponent ? "retirement_place" : "";
      }
      if (encounteredPartyBase.MapEvent != null)
      {
        if (MobileParty.MainParty.CurrentSettlement != null || MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
        {
          joinBattle = true;
          return "encounter";
        }
        return encounteredPartyBase.SiegeEvent != null && encounteredPartyBase.MapEvent.IsSiegeAssault ? "join_siege_event" : "join_encounter";
      }
      if (encounteredPartyBase.IsMobile && (encounteredPartyBase.MobileParty.IsGarrison && MobileParty.MainParty.BesiegedSettlement != null || MobileParty.MainParty.CurrentSettlement != null && encounteredPartyBase.MobileParty.BesiegedSettlement == MobileParty.MainParty.CurrentSettlement))
      {
        startBattle = true;
        joinBattle = false;
        return "encounter";
      }
      return encounteredPartyBase.IsMobile ? "encounter_meeting" : (string) null;
    }

    public override string GetRaidCompleteMenu() => "village_loot_complete";

    public override string GetNewPartyJoinMenu(MobileParty newParty)
    {
      if (!PartyBase.MainParty.MapEvent.IsRaid || PartyBase.MainParty.MapEvent.AttackerSide.LeaderParty.MapFaction == PartyBase.MainParty.MapEvent.MapEventSettlement.MapFaction)
        return (string) null;
      return MobileParty.MainParty.CurrentSettlement != null || MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty ? "encounter" : "join_encounter";
    }

    public override string GetGenericStateMenu()
    {
      MobileParty mainParty = MobileParty.MainParty;
      if (PlayerEncounter.Current != null && PlayerEncounter.CurrentBattleSimulation != null)
        return (string) null;
      if (mainParty.MapEvent != null)
        return "encounter";
      if (mainParty.BesiegerCamp != null)
        return "menu_siege_strategies";
      if (mainParty.AttachedTo != null)
      {
        if (mainParty.AttachedTo.CurrentSettlement != null && !mainParty.AttachedTo.CurrentSettlement.IsUnderSiege || mainParty.AttachedTo.LastVisitedSettlement != null && mainParty.AttachedTo.LastVisitedSettlement.IsVillage && (double) mainParty.AttachedTo.LastVisitedSettlement.Position2D.DistanceSquared(mainParty.AttachedTo.Position2D) < 1.0)
          return "army_wait_at_settlement";
        if (mainParty.AttachedTo.CurrentSettlement == null || !mainParty.AttachedTo.CurrentSettlement.IsUnderSiege)
          return "army_wait";
        return PlayerEncounter.Current != null && PlayerEncounter.Current.IsPlayerWaiting ? "encounter_interrupted_siege_preparations" : "menu_siege_strategies";
      }
      if (mainParty.CurrentSettlement != null)
      {
        Settlement currentSettlement = mainParty.CurrentSettlement;
        if (currentSettlement.IsFortification)
        {
          if (currentSettlement.Party.SiegeEvent != null && (currentSettlement.Party.MapEvent == null && (currentSettlement.Town.GarrisonParty == null || currentSettlement.Town.GarrisonParty.MapEvent == null) || MobileParty.MainParty.MapFaction == currentSettlement.MapFaction))
          {
            if (currentSettlement.Party.SiegeEvent.BesiegerCamp.LeaderParty == MobileParty.MainParty)
              return "continue_siege_after_attack";
            if (MobileParty.MainParty.BesiegedSettlement == null && MobileParty.MainParty.CurrentSettlement == null)
              return "join_siege_event";
            if (mainParty.CurrentSettlement.Party.MapEvent != null && mainParty.CurrentSettlement.Party.MapEvent.InvolvedParties.Contains<PartyBase>(PartyBase.MainParty))
              return "encounter";
            return PlayerEncounter.Current != null && PlayerEncounter.Current.IsPlayerWaiting ? "encounter_interrupted_siege_preparations" : "menu_siege_strategies";
          }
          if (currentSettlement.Party.MapEvent != null)
            return MobileParty.MainParty.MapFaction == currentSettlement.MapFaction ? "encounter" : "join_encounter";
          if (currentSettlement.MapFaction == MobileParty.MainParty.MapFaction && MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
            return "army_wait_at_settlement";
          if (PlayerEncounter.Current != null && PlayerEncounter.Current.IsPlayerWaiting && currentSettlement.IsFortification)
            return "town_wait_menus";
          return currentSettlement.IsCastle ? "castle_outside" : "town_outside";
        }
        if (currentSettlement.IsHideout)
          return "hideout_place";
      }
      else if (Settlement.CurrentSettlement != null)
      {
        Settlement currentSettlement = Settlement.CurrentSettlement;
        if (currentSettlement.IsVillage)
        {
          if (currentSettlement.IsUnderRaid)
            return "encounter_interrupted_raid_started";
          if (PlayerEncounter.Current != null && PlayerEncounter.Current.IsPlayerWaiting)
            return "village_wait_menus";
        }
      }
      return (string) null;
    }
  }
}
