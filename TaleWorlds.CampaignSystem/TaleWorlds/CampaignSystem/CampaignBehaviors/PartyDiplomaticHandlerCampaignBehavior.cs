// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartyDiplomaticHandlerCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PartyDiplomaticHandlerCampaignBehavior : CampaignBehaviorBase
  {
    private IFaction _lastFactionMadePeaceWithCausedPlayerToLeaveEvent;

    public override void RegisterEvents()
    {
      CampaignEvents.OnMapEventContinuityNeedsUpdateEvent.AddNonSerializedListener((object) this, new Action<IFaction>(this.OnMapEventContinuityNeedsUpdate));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnSessionLaunched(CampaignGameStarter gameSystemInitializer)
    {
      gameSystemInitializer.AddGameMenu("hostile_action_end_by_peace", "{=1rbg3Hz2}The {FACTION_1} and {FACTION_2} are no longer enemies.", new OnInitDelegate(this.game_menu_hostile_action_end_by_peace_on_init));
      gameSystemInitializer.AddGameMenuOption("hostile_action_end_by_peace", "hostile_action_en_by_peace_end", "{=WVkc4UgX}Continue.", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Leave;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args =>
      {
        if (PlayerEncounter.Current != null)
          PlayerEncounter.Finish();
        else
          GameMenu.ExitToLast();
      }), true);
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool arg5)
    {
      if (newKingdom != null)
        CampaignEventDispatcher.Instance.OnMapEventContinuityNeedsUpdate((IFaction) newKingdom);
      else
        CampaignEventDispatcher.Instance.OnMapEventContinuityNeedsUpdate((IFaction) clan);
    }

    private void OnMapEventContinuityNeedsUpdate(IFaction faction)
    {
      this.CheckMapEvents(faction);
      this.CheckSiegeEvents(faction);
      this.CheckFactionPartiesAndSettlements(faction);
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero hero1,
      Hero hero2,
      Hero hero3,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (detail != ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.BySiege && settlement.SiegeEvent != null)
        this.CheckSiegeEventContinuity(settlement.SiegeEvent);
      this.CheckSettlementSuitabilityForParties((IEnumerable<MobileParty>) settlement.Parties);
    }

    private void CheckFactionPartiesAndSettlements(IFaction faction)
    {
      this.CheckSettlementSuitabilityForParties(faction.WarPartyComponents.Select<WarPartyComponent, MobileParty>((Func<WarPartyComponent, MobileParty>) (x => x.MobileParty)));
      foreach (Settlement settlement in (List<Settlement>) faction.Settlements)
        this.CheckSettlementSuitabilityForParties((IEnumerable<MobileParty>) settlement.Parties);
    }

    private void CheckMapEvents(IFaction faction)
    {
      MBReadOnlyList<MapEvent> mapEvents = Campaign.Current.MapEventManager?.MapEvents;
      List<MapEvent> mapEventList = new List<MapEvent>();
      foreach (MapEvent mapEvent in (List<MapEvent>) mapEvents)
      {
        if (!mapEvent.IsFinalized && mapEvent.InvolvedParties.Any<PartyBase>((Func<PartyBase, bool>) (x => x.MapFaction == faction)))
          mapEventList.Add(mapEvent);
      }
      foreach (MapEvent mapEvent in mapEventList)
      {
        List<MapEventParty> list = mapEvent.AttackerSide.Parties.ToList<MapEventParty>();
        MapEventState state = mapEvent.State;
        bool flag = false;
        foreach (MapEventParty mapEventParty in list)
        {
          if (!mapEvent.CanPartyJoinBattle(mapEventParty.Party, BattleSideEnum.Attacker))
          {
            flag = flag || mapEvent.IsPlayerMapEvent;
            if (mapEventParty.Party != PartyBase.MainParty)
              mapEventParty.Party.MapEventSide = (MapEventSide) null;
          }
        }
        if (state != MapEventState.WaitingRemoval && mapEvent.State == MapEventState.WaitingRemoval)
          mapEvent.DiplomaticallyFinished = true;
        if (flag)
        {
          if (PlayerEncounter.Current != null)
            PlayerEncounter.Finish();
          else
            GameMenu.ExitToLast();
        }
      }
    }

    private void CheckSiegeEvents(IFaction faction)
    {
      MBReadOnlyList<SiegeEvent> siegeEvents = Campaign.Current.SiegeEventManager?.SiegeEvents;
      List<SiegeEvent> siegeEventList = new List<SiegeEvent>();
      foreach (SiegeEvent siegeEvent in (List<SiegeEvent>) siegeEvents)
      {
        if (!siegeEvent.ReadyToBeRemoved && siegeEvent.GetInvolvedPartiesForEventType(siegeEvent.GetCurrentBattleType()).Any<PartyBase>((Func<PartyBase, bool>) (x => x.MapFaction == faction)))
          siegeEventList.Add(siegeEvent);
      }
      foreach (SiegeEvent siegeEvent in siegeEventList)
        this.CheckSiegeEventContinuity(siegeEvent);
    }

    private void CheckSiegeEventContinuity(SiegeEvent siegeEvent)
    {
      List<PartyBase> list = siegeEvent.BesiegerCamp.GetInvolvedPartiesForEventType(siegeEvent.GetCurrentBattleType()).ToList<PartyBase>();
      bool flag = false;
      foreach (PartyBase party in list)
      {
        if (!siegeEvent.CanPartyJoinSide(party, BattleSideEnum.Attacker))
        {
          if (PlayerSiege.PlayerSiegeEvent == siegeEvent && PlayerSiege.PlayerSide == BattleSideEnum.Attacker)
            flag = true;
          else
            party.MobileParty.BesiegerCamp = (BesiegerCamp) null;
        }
      }
      if (!flag)
        return;
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Finish();
      else
        GameMenu.ExitToLast();
    }

    private void CheckSettlementSuitabilityForParties(IEnumerable<MobileParty> parties)
    {
      foreach (MobileParty mobileParty in parties.ToList<MobileParty>())
      {
        if (mobileParty.CurrentSettlement != null && mobileParty.MapFaction.IsAtWarWith(mobileParty.CurrentSettlement.MapFaction))
        {
          if (mobileParty != MobileParty.MainParty)
          {
            if (mobileParty.Army == null || mobileParty.Army.LeaderParty == mobileParty)
            {
              if (mobileParty.Army != null && mobileParty.Army.Parties.Contains(MobileParty.MainParty))
              {
                GameMenu.SwitchToMenu("army_left_settlement_due_to_war_declaration");
              }
              else
              {
                Settlement currentSettlement = mobileParty.CurrentSettlement;
                LeaveSettlementAction.ApplyForParty(mobileParty);
                SetPartyAiAction.GetActionForPatrollingAroundSettlement(mobileParty, currentSettlement);
              }
            }
          }
          else if (mobileParty.CurrentSettlement.IsFortification)
            GameMenu.SwitchToMenu("fortification_crime_rating");
        }
      }
    }

    [GameMenuInitializationHandler("hostile_action_end_by_peace")]
    public static void hostile_action_end_by_peace_on_init(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.BesiegedSettlement != null)
        args.MenuContext.SetBackgroundMeshName(MobileParty.MainParty.BesiegedSettlement.SettlementComponent.WaitMeshName);
      else if (MobileParty.MainParty.LastVisitedSettlement != null)
        args.MenuContext.SetBackgroundMeshName(MobileParty.MainParty.LastVisitedSettlement.SettlementComponent.WaitMeshName);
      else if (PlayerEncounter.EncounterSettlement != null)
        args.MenuContext.SetBackgroundMeshName(PlayerEncounter.EncounterSettlement.SettlementComponent.WaitMeshName);
      else
        Debug.FailedAssert("no menu background to initialize!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\PartyDiplomaticHandlerCampaignBehavior.cs", nameof (hostile_action_end_by_peace_on_init), 259);
    }

    private void game_menu_hostile_action_end_by_peace_on_init(MenuCallbackArgs args)
    {
      if (this._lastFactionMadePeaceWithCausedPlayerToLeaveEvent == null)
      {
        StanceLink stanceLink = MobileParty.MainParty.MapFaction.Stances.Where<StanceLink>((Func<StanceLink, bool>) (x => !x.IsAtWar)).OrderBy<StanceLink, float>((Func<StanceLink, float>) (x => x.PeaceDeclarationDate.ElapsedHoursUntilNow)).FirstOrDefault<StanceLink>();
        this._lastFactionMadePeaceWithCausedPlayerToLeaveEvent = stanceLink.Faction1 != Clan.PlayerClan.MapFaction ? stanceLink.Faction1 : stanceLink.Faction2;
      }
      GameTexts.SetVariable("FACTION_1", Clan.PlayerClan.MapFaction.EncyclopediaLinkWithName);
      GameTexts.SetVariable("FACTION_2", this._lastFactionMadePeaceWithCausedPlayerToLeaveEvent.EncyclopediaLinkWithName);
      if (PlayerEncounter.Battle == null)
        return;
      PlayerEncounter.Battle.DiplomaticallyFinished = true;
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<IFaction>("_lastFactionMadePeaceWithCausedPlayerToLeaveEvent", ref this._lastFactionMadePeaceWithCausedPlayerToLeaveEvent);
    }
  }
}
