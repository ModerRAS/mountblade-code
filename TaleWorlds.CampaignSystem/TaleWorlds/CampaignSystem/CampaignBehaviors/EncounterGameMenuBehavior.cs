// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.EncounterGameMenuBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class EncounterGameMenuBehavior : CampaignBehaviorBase
  {
    private static readonly TextObject EnemyNotAttackableTooltip = GameTexts.FindText("str_enemy_not_attackable_tooltip");
    private int _intEncounterVariable;
    private TroopRoster _breakInOutCasualties;
    private int _breakInOutArmyCasualties;
    private SettlementAccessModel.AccessDetails _accessDetails;
    private TroopRoster _getAwayCasualties;
    private ItemRoster _getAwayLostBaggage;
    private bool _playerIsAlreadyInCastle;
    private const float SmugglingCrimeRate = 10f;

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<TroopRoster>("_breakInOutCasualties", ref this._breakInOutCasualties);
      dataStore.SyncData<int>("_intEncounterVariable", ref this._intEncounterVariable);
      dataStore.SyncData<int>("_breakInOutArmyCasualties", ref this._breakInOutArmyCasualties);
      dataStore.SyncData<TroopRoster>("_getAwayCasualties", ref this._getAwayCasualties);
      dataStore.SyncData<ItemRoster>("_getAwayLostBaggage", ref this._getAwayLostBaggage);
      dataStore.SyncData<bool>("_playerIsAlreadyInCastle", ref this._playerIsAlreadyInCastle);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStarted));
    }

    private void OnSiegeEventStarted(SiegeEvent siegeEvent)
    {
      IFaction mapFaction = siegeEvent.BesiegerCamp.LeaderParty.MapFaction;
      if (!siegeEvent.IsPlayerSiegeEvent || mapFaction == null || !mapFaction.NotAttackableByPlayerUntilTime.IsFuture)
        return;
      mapFaction.NotAttackableByPlayerUntilTime = CampaignTime.Zero;
    }

    private void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (!mapEvent.IsPlayerMapEvent || attackerParty.MapFaction == null || !attackerParty.MapFaction.NotAttackableByPlayerUntilTime.IsFuture)
        return;
      attackerParty.MapFaction.NotAttackableByPlayerUntilTime = CampaignTime.Zero;
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (party != MobileParty.MainParty)
        return;
      this._playerIsAlreadyInCastle = false;
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeAccessDetails();
      this.AddGameMenus(campaignGameStarter);
    }

    private void InitializeAccessDetails()
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (currentSettlement == null || !currentSettlement.IsFortification && !currentSettlement.IsVillage)
        return;
      Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterSettlement(Settlement.CurrentSettlement, out this._accessDetails);
    }

    private void AddGameMenus(CampaignGameStarter gameSystemInitializer)
    {
      gameSystemInitializer.AddGameMenu("taken_prisoner", "{=ezClQMBj}Your enemies take you as a prisoner.", new OnInitDelegate(this.game_menu_taken_prisoner_on_init));
      gameSystemInitializer.AddGameMenuOption("taken_prisoner", "taken_prisoner_continue", "{=WVkc4UgX}Continue.", new GameMenuOption.OnConditionDelegate(this.game_menu_taken_prisoner_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_taken_prisoner_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("defeated_and_taken_prisoner", "{=ezClQMBj}Your enemies take you as a prisoner.", new OnInitDelegate(this.game_menu_taken_prisoner_on_init));
      gameSystemInitializer.AddGameMenuOption("defeated_and_taken_prisoner", "taken_prisoner_continue", "{=WVkc4UgX}Continue.", new GameMenuOption.OnConditionDelegate(this.game_menu_taken_prisoner_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_taken_prisoner_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("encounter_meeting", "{=!}.", new OnInitDelegate(this.game_menu_encounter_meeting_on_init));
      gameSystemInitializer.AddGameMenu("join_encounter", "{=jKWJpIES}{JOIN_ENCOUNTER_TEXT}. You decide to...", new OnInitDelegate(this.game_menu_join_encounter_on_init));
      gameSystemInitializer.AddGameMenuOption("join_encounter", "join_encounter_help_attackers", "{=h3yEHb4U}Help {ATTACKER}.", new GameMenuOption.OnConditionDelegate(this.game_menu_join_encounter_help_attackers_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_encounter_help_attackers_on_consequence));
      gameSystemInitializer.AddGameMenuOption("join_encounter", "join_encounter_help_defenders", "{=FwIgakj8}Help {DEFENDER}.", new GameMenuOption.OnConditionDelegate(this.game_menu_join_encounter_help_defenders_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_encounter_help_defenders_on_consequence));
      gameSystemInitializer.AddGameMenuOption("join_encounter", "join_encounter_abandon", "{=Nr49hlfC}Abandon army.", new GameMenuOption.OnConditionDelegate(this.game_menu_join_encounter_abandon_army_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_abandon_on_consequence));
      gameSystemInitializer.AddGameMenuOption("join_encounter", "join_encounter_leave", "{=!}{LEAVE_TEXT}", new GameMenuOption.OnConditionDelegate(this.game_menu_join_encounter_leave_no_army_on_condition), (GameMenuOption.OnConsequenceDelegate) (args =>
      {
        if (MobileParty.MainParty.SiegeEvent != null && MobileParty.MainParty.SiegeEvent.BesiegerCamp != null && MobileParty.MainParty.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(PartyBase.MainParty, MapEvent.BattleTypes.Siege))
          MobileParty.MainParty.BesiegerCamp = (BesiegerCamp) null;
        PlayerEncounter.Finish();
      }), true);
      gameSystemInitializer.AddGameMenu("join_sally_out", "{=CcNVobQU}Garrison of the settlement you are in decided to sally out. You decide to...", new OnInitDelegate(this.game_menu_join_sally_out_on_init), GameOverlays.MenuOverlayType.Encounter);
      gameSystemInitializer.AddGameMenuOption("join_sally_out", "join_siege_event", "{=IaA8sbY2}Join the sally out", new GameMenuOption.OnConditionDelegate(this.game_menu_join_sally_out_event_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_sally_out_on_consequence));
      gameSystemInitializer.AddGameMenuOption("join_sally_out", "join_siege_event_break_in", "{=z1RHDsOG}Stay in settlement", new GameMenuOption.OnConditionDelegate(this.game_menu_stay_in_settlement_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_stay_in_settlement_on_consequence), true);
      gameSystemInitializer.AddGameMenu("join_siege_event", "{=xNyKVMHx}{JOIN_SIEGE_TEXT} You decide to...", new OnInitDelegate(this.game_menu_join_siege_event_on_init));
      gameSystemInitializer.AddGameMenuOption("join_siege_event", "join_siege_event", "{=ZVsJf5Ff}Join the continuing siege.", new GameMenuOption.OnConditionDelegate(this.game_menu_join_siege_event_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_siege_event_on_consequence));
      gameSystemInitializer.AddGameMenuOption("join_siege_event", "attack_besiegers", "{=CVg3P07C}Assault the siege camp.", new GameMenuOption.OnConditionDelegate(this.attack_besieger_side_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_encounter_help_defenders_on_consequence));
      gameSystemInitializer.AddGameMenuOption("join_siege_event", "join_siege_event_break_in", "{=XAvwP3Ce}Break in to help the defenders", new GameMenuOption.OnConditionDelegate(this.break_in_to_help_defender_side_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_siege_event_on_defender_side_on_consequence));
      gameSystemInitializer.AddGameMenuOption("join_siege_event", "join_encounter_leave", "{=ebUwP3Q3}Don't get involved.", new GameMenuOption.OnConditionDelegate(this.game_menu_join_encounter_leave_on_condition), (GameMenuOption.OnConsequenceDelegate) (args =>
      {
        PlayerEncounter.Finish();
        if (Hero.MainHero.PartyBelongedTo == null || Hero.MainHero.PartyBelongedTo.Army == null || Hero.MainHero.PartyBelongedTo.Army.LeaderParty == MobileParty.MainParty)
          return;
        Hero.MainHero.PartyBelongedTo.Army = (Army) null;
        MobileParty.MainParty.Ai.SetMoveModeHold();
      }), true);
      gameSystemInitializer.AddGameMenu("siege_attacker_left", "{=LR6Y57Rq}Attackers abandoned the siege.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("siege_attacker_left", "siege_attacker_left_return_to_settlement", "{=j7bZRFxc}Return to {SETTLEMENT}.", new GameMenuOption.OnConditionDelegate(this.game_menu_siege_attacker_left_return_to_settlement_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_siege_attacker_left_return_to_settlement_on_consequence));
      gameSystemInitializer.AddGameMenuOption("siege_attacker_left", "siege_attacker_left_leave", "{=mfAP8Wlq}Leave settlement.", new GameMenuOption.OnConditionDelegate(this.game_menu_siege_attacker_left_leave_on_condition), (GameMenuOption.OnConsequenceDelegate) (args => PlayerEncounter.Finish()), true);
      gameSystemInitializer.AddGameMenu("siege_attacker_defeated", "{=njbpMLdJ}Attackers have been defeated.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("siege_attacker_defeated", "siege_attacker_defeated_return_to_settlement", "{=j7bZRFxc}Return to {SETTLEMENT}.", new GameMenuOption.OnConditionDelegate(this.game_menu_siege_attacker_left_return_to_settlement_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_siege_attacker_left_return_to_settlement_on_consequence));
      gameSystemInitializer.AddGameMenuOption("siege_attacker_defeated", "siege_attacker_defeated_leave", "{=mfAP8Wlq}Leave settlement.", new GameMenuOption.OnConditionDelegate(this.game_menu_siege_attacker_defeated_leave_on_condition), (GameMenuOption.OnConsequenceDelegate) (args => PlayerEncounter.Finish()), true);
      gameSystemInitializer.AddGameMenu("encounter", "{=!}{ENCOUNTER_TEXT}", new OnInitDelegate(this.game_menu_encounter_on_init), GameOverlays.MenuOverlayType.Encounter);
      gameSystemInitializer.AddGameMenuOption("encounter", "continue_preparations", "{=FOoMM4AU}Continue siege preparations.", new GameMenuOption.OnConditionDelegate(this.game_menu_town_besiege_continue_siege_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_besiege_continue_siege_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "village_raid_action", "{=lvttCRi8}Plunder the village, then raze it.", new GameMenuOption.OnConditionDelegate(this.game_menu_village_hostile_action_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_village_raid_no_resist_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "village_force_volunteer_action", "{=9YHjPkb8}Force notables to give you recruits.", new GameMenuOption.OnConditionDelegate(this.game_menu_village_hostile_action_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_village_force_volunteers_no_resist_loot_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "village_force_supplies_action", "{=JMzyh6Gl}Force people to give you supplies.", new GameMenuOption.OnConditionDelegate(this.game_menu_village_hostile_action_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_village_force_supplies_no_resist_loot_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "attack", "{=o1pZHZOF}{ATTACK_TEXT}!", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_attack_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "capture_the_enemy", "{=27yneDGL}Capture the enemy.", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_capture_the_enemy_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_capture_the_enemy_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "str_order_attack", "{=!}{SEND_TROOPS_TEXT}", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_order_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_order_attack_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "leave_soldiers_behind", "{=qNgGoqmI}Try to get away.", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_leave_your_soldiers_behind_on_condition), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.SwitchToMenu("try_to_get_away")));
      gameSystemInitializer.AddGameMenuOption("encounter", "surrender", "{=3nT5wWzb}Surrender.", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_surrender_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_surrender_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter", "leave", "{=2YYRyrOO}Leave...", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenuOption("encounter", "abandon_army", "{=Nr49hlfC}Abandon army.", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_abandon_army_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_abandon_on_consequence), true);
      gameSystemInitializer.AddGameMenuOption("encounter", "go_back_to_settlement", "{=j7bZRFxc}Return to {SETTLEMENT}.", new GameMenuOption.OnConditionDelegate(this.game_menu_sally_out_go_back_to_settlement_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_sally_out_go_back_to_settlement_consequence), true);
      gameSystemInitializer.AddGameMenu("army_encounter", "{=!}{ARMY_ENCOUNTER_TEXT}", new OnInitDelegate(this.game_menu_army_encounter_on_init));
      gameSystemInitializer.AddGameMenuOption("army_encounter", "army_talk_to_leader", "{=tYVW8iQN}Talk to army leader", new GameMenuOption.OnConditionDelegate(this.game_menu_army_talk_to_leader_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_army_talk_to_leader_on_consequence));
      gameSystemInitializer.AddGameMenuOption("army_encounter", "army_talk_to_other_members", "{=b7APCGY2}Talk to other members", new GameMenuOption.OnConditionDelegate(this.game_menu_army_talk_to_other_members_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_army_talk_to_other_members_on_consequence));
      gameSystemInitializer.AddGameMenuOption("army_encounter", "army_join_army", "{=N4Qa0WsT}Join army", new GameMenuOption.OnConditionDelegate(this.game_menu_army_join_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_army_join_on_consequence));
      gameSystemInitializer.AddGameMenuOption("army_encounter", "army_attack_army", "{=0URijoc0}Attack army", new GameMenuOption.OnConditionDelegate(this.game_menu_army_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_army_attack_on_consequence));
      gameSystemInitializer.AddGameMenuOption("army_encounter", "army_leave", "{=2YYRyrOO}Leave...", new GameMenuOption.OnConditionDelegate(this.game_menu_army_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.army_encounter_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenu("game_menu_army_talk_to_other_members", "{=yYTotiqW}Talk to...", new OnInitDelegate(this.game_menu_army_talk_to_other_members_on_init));
      gameSystemInitializer.AddGameMenuOption("game_menu_army_talk_to_other_members", "game_menu_army_talk_to_other_members_item", "{=!}{CHAR_NAME}", new GameMenuOption.OnConditionDelegate(this.game_menu_army_talk_to_other_members_item_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_army_talk_to_other_members_item_on_consequence), isRepeatable: true);
      gameSystemInitializer.AddGameMenuOption("game_menu_army_talk_to_other_members", "game_menu_army_talk_to_other_members_back", GameTexts.FindText("str_back").ToString(), new GameMenuOption.OnConditionDelegate(this.game_menu_army_talk_to_other_members_back_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_army_talk_to_other_members_back_on_consequence), true);
      gameSystemInitializer.AddGameMenu("try_to_get_away", "{=bwuawgrW}As the highest tactics skilled member {HIGHEST_TACTICS_SKILLED_MEMBER} ({HIGHEST_TACTICS_SKILL}) devise a plan to disperse into the wilderness to break away from your enemies. You and most men may escape with your lives, but as many as {NEEEDED_MEN_COUNT} {SOLDIER_OR_SOLDIERS} may be lost and part of your baggage could be captured.", new OnInitDelegate(this.game_menu_leave_soldiers_behind_on_init), GameOverlays.MenuOverlayType.Encounter);
      gameSystemInitializer.AddGameMenuOption("try_to_get_away", "try_to_get_away_accept", "{=DbOv36TA}Go ahead with that.", new GameMenuOption.OnConditionDelegate(this.game_menu_try_to_get_away_accept_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_leave_your_soldiers_behind_accept_on_consequence));
      gameSystemInitializer.AddGameMenuOption("try_to_get_away", "try_to_get_away_reject", "{=f1etg9oL}Think of something else.", new GameMenuOption.OnConditionDelegate(this.game_menu_try_to_get_away_reject_on_condition), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.SwitchToMenu("encounter")), true);
      gameSystemInitializer.AddGameMenu("try_to_get_away_debrief", "{=ruU70rFl}You disperse into the shrubs and bushes. The enemies halt and seem to hesitate for a while before resuming their pursuit. {CASUALTIES_AND_LOST_BAGGAGE}", new OnInitDelegate(this.game_menu_get_away_debrief_on_init), GameOverlays.MenuOverlayType.Encounter);
      gameSystemInitializer.AddGameMenuOption("try_to_get_away_debrief", "try_to_get_away_continue", "{=veWOovVv}Continue...", new GameMenuOption.OnConditionDelegate(this.game_menu_try_to_get_away_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_try_to_get_away_end));
      gameSystemInitializer.AddGameMenu("assault_town", "", new OnInitDelegate(this.game_menu_town_assault_on_init));
      gameSystemInitializer.AddGameMenu("assault_town_order_attack", "", new OnInitDelegate(this.game_menu_town_assault_order_attack_on_init));
      gameSystemInitializer.AddGameMenu("town_outside", "{=!}{TOWN_TEXT}", new OnInitDelegate(this.game_menu_town_outside_on_init));
      gameSystemInitializer.AddGameMenuOption("town_outside", "approach_gates", "{=XlbDnuJx}Approach the gates and hail the guard.", new GameMenuOption.OnConditionDelegate(this.game_menu_castle_outside_approach_gates_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_outside_approach_gates_on_consequence));
      gameSystemInitializer.AddGameMenuOption("town_outside", "town_disguise_yourself", "{=VCREeAF1}Disguise yourself and sneak through the gate. ({SNEAK_CHANCE}%)", new GameMenuOption.OnConditionDelegate(this.game_menu_town_disguise_yourself_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_disguise_yourself_on_consequence));
      gameSystemInitializer.AddGameMenuOption("town_outside", "town_besiege", "{=WdIGdHuL}Besiege the town.", new GameMenuOption.OnConditionDelegate(this.game_menu_town_town_besiege_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_town_besiege_on_consequence));
      gameSystemInitializer.AddGameMenuOption("town_outside", "town_enter_cheat", "{=!}Enter town (Cheat).", new GameMenuOption.OnConditionDelegate(this.game_menu_town_outside_cheat_enter_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_outside_enter_on_consequence));
      gameSystemInitializer.AddGameMenuOption("town_outside", "town_outside_leave", "{=2YYRyrOO}Leave...", new GameMenuOption.OnConditionDelegate(this.game_menu_castle_outside_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_castle_outside_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenu("menu_sneak_into_town_succeeded", "{=pSSDfAjR}Disguised in the garments of a poor pilgrim, you fool the guards and make your way into the town.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("menu_sneak_into_town_succeeded", "str_continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(EncounterGameMenuBehavior.menu_sneak_into_town_succeeded_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(EncounterGameMenuBehavior.menu_sneak_into_town_succeeded_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("menu_sneak_into_town_caught", "{=u7yLV7Vr}As you try to sneak in, one of the guards recognizes you and raises the alarm! Another quickly slams the gate shut behind you, and you have no choice but to give up.", new OnInitDelegate(EncounterGameMenuBehavior.game_menu_sneak_into_town_caught_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_sneak_into_town_caught", "mno_sneak_caught_surrender", "{=3nT5wWzb}Surrender.", new GameMenuOption.OnConditionDelegate(EncounterGameMenuBehavior.mno_sneak_caught_surrender_on_condition), new GameMenuOption.OnConsequenceDelegate(EncounterGameMenuBehavior.mno_sneak_caught_surrender_on_consequence));
      gameSystemInitializer.AddGameMenu("menu_captivity_castle_taken_prisoner", "{=AFJ3BvTH}You are quickly surrounded by guards who take away your weapons. With curses and insults, they throw you into the dungeon where you must while away the miserable days of your captivity.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("menu_captivity_castle_taken_prisoner", "mno_sneak_caught_surrender", "{=veWOovVv}Continue...", new GameMenuOption.OnConditionDelegate(EncounterGameMenuBehavior.game_menu_captivity_castle_taken_prisoner_cont_on_condition), new GameMenuOption.OnConsequenceDelegate(EncounterGameMenuBehavior.game_menu_captivity_castle_taken_prisoner_cont_on_consequence));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_castle_taken_prisoner", "cheat_continue", "{=!}Cheat : Leave.", new GameMenuOption.OnConditionDelegate(EncounterGameMenuBehavior.game_menu_captivity_taken_prisoner_cheat_on_condition), new GameMenuOption.OnConsequenceDelegate(EncounterGameMenuBehavior.game_menu_captivity_taken_prisoner_cheat_on_consequence));
      gameSystemInitializer.AddGameMenu("fortification_crime_rating", "{=!}{FORTIFICATION_CRIME_RATING_TEXT}", new OnInitDelegate(this.game_menu_fortification_high_crime_rating_on_init));
      gameSystemInitializer.AddGameMenuOption("fortification_crime_rating", "fortification_crime_rating_continue", "{=WVkc4UgX}Continue.", new GameMenuOption.OnConditionDelegate(this.game_menu_fortification_high_crime_rating_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_fortification_high_crime_rating_continue_on_consequence), true);
      gameSystemInitializer.AddGameMenu("army_left_settlement_due_to_war_declaration", "{=!}{ARMY_LEFT_SETTLEMENT_DUE_TO_WAR_TEXT}", new OnInitDelegate(this.game_menu_army_left_settlement_due_to_war_on_init));
      gameSystemInitializer.AddGameMenuOption("army_left_settlement_due_to_war_declaration", "army_left_settlement_due_to_war_declaration_continue", "{=WVkc4UgX}Continue.", new GameMenuOption.OnConditionDelegate(this.game_menu_army_left_settlement_due_to_war_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_army_left_settlement_due_to_war_on_consequence));
      gameSystemInitializer.AddGameMenu("castle_outside", "{=!}{TOWN_TEXT}", new OnInitDelegate(this.game_menu_castle_outside_on_init));
      gameSystemInitializer.AddGameMenuOption("castle_outside", "approach_gates", "{=XlbDnuJx}Approach the gates and hail the guard.", new GameMenuOption.OnConditionDelegate(this.game_menu_castle_outside_approach_gates_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_castle_outside_approach_gates_on_consequence));
      gameSystemInitializer.AddGameMenuOption("castle_outside", "town_besiege", "{=UzMYZgoE}Besiege the castle.", new GameMenuOption.OnConditionDelegate(this.game_menu_town_town_besiege_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_town_besiege_on_consequence));
      gameSystemInitializer.AddGameMenuOption("castle_outside", "town_outside_leave", "{=2YYRyrOO}Leave...", new GameMenuOption.OnConditionDelegate(this.game_menu_castle_outside_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_castle_outside_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenu("town_guard", "{=SxkaQbSa}You approach the gate. The men on the walls watch you closely.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("town_guard", "request_meeting_commander", "{=RSQbOjub}Request a meeting with someone.", new GameMenuOption.OnConditionDelegate(this.game_menu_request_meeting_someone_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_someone_on_consequence));
      gameSystemInitializer.AddGameMenuOption("town_guard", "guard_discuss_criminal_surrender", "{=ACvQdkG8}Discuss the terms of your surrender", new GameMenuOption.OnConditionDelegate(this.outside_menu_criminal_on_condition), new GameMenuOption.OnConsequenceDelegate(this.outside_menu_criminal_on_consequence));
      gameSystemInitializer.AddGameMenuOption("town_guard", "guard_back", GameTexts.FindText("str_back").ToString(), new GameMenuOption.OnConditionDelegate(this.game_menu_castle_outside_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_guard_back_on_consequence), true);
      gameSystemInitializer.AddGameMenu("castle_guard", "{=SxkaQbSa}You approach the gate. The men on the walls watch you closely.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("castle_guard", "request_shelter", "{=mG9jW8Fp}Request entry to the castle.", new GameMenuOption.OnConditionDelegate(this.game_menu_town_guard_request_shelter_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_entry_to_castle_on_consequence));
      gameSystemInitializer.AddGameMenuOption("castle_guard", "request_meeting_commander", "{=RSQbOjub}Request a meeting with someone.", new GameMenuOption.OnConditionDelegate(this.game_menu_request_meeting_someone_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_someone_on_consequence));
      gameSystemInitializer.AddGameMenuOption("castle_guard", "guard_back", GameTexts.FindText("str_back").ToString(), new GameMenuOption.OnConditionDelegate(this.game_menu_castle_outside_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_town_guard_back_on_consequence), true);
      gameSystemInitializer.AddGameMenu("menu_castle_entry_granted", "{=Mg1PotzO}After a brief wait, the guards open the gates for you and allow your party inside.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("menu_castle_entry_granted", "str_continue", "{=bLNocKd1}Continue..", new GameMenuOption.OnConditionDelegate(EncounterGameMenuBehavior.game_request_entry_to_castle_approved_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(EncounterGameMenuBehavior.game_request_entry_to_castle_approved_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("menu_castle_entry_denied", "{=QpQQJjD6}The lord of this castle has forbidden you from coming inside these walls, and the guard sergeant informs you that his men will fire if you attempt to come any closer.", new OnInitDelegate(EncounterGameMenuBehavior.menu_castle_entry_denied_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_castle_entry_denied", "str_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) null, new GameMenuOption.OnConsequenceDelegate(EncounterGameMenuBehavior.game_request_entry_to_castle_rejected_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("request_meeting", "{=pBAx7jTM}With whom do you want to meet?", new OnInitDelegate(this.game_menu_town_menu_request_meeting_on_init));
      gameSystemInitializer.AddGameMenuOption("request_meeting", "request_meeting_with", "{=!}{HERO_TO_MEET.LINK}", new GameMenuOption.OnConditionDelegate(this.game_menu_request_meeting_with_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_with_on_consequence), isRepeatable: true);
      gameSystemInitializer.AddGameMenuOption("request_meeting", "meeting_town_leave", "{=3nbuRBJK}Forget it.", new GameMenuOption.OnConditionDelegate(this.game_meeting_town_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_town_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenuOption("request_meeting", "meeting_castle_leave", "{=3nbuRBJK}Forget it.", new GameMenuOption.OnConditionDelegate(this.game_meeting_castle_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_castle_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenu("request_meeting_with_besiegers", "{=pBAx7jTM}With whom do you want to meet?", new OnInitDelegate(this.game_menu_town_menu_request_meeting_with_besiegers_on_init));
      gameSystemInitializer.AddGameMenuOption("request_meeting_with_besiegers", "request_meeting_with", "{=!}{PARTY_LEADER.LINK}", new GameMenuOption.OnConditionDelegate(this.game_menu_request_meeting_with_besiegers_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_with_besiegers_on_consequence), isRepeatable: true);
      gameSystemInitializer.AddGameMenuOption("request_meeting_with_besiegers", "request_meeting_town_leave", "{=3nbuRBJK}Forget it.", new GameMenuOption.OnConditionDelegate(this.game_meeting_town_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_town_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenuOption("request_meeting_with_besiegers", "request_meeting_castle_leave", "{=3nbuRBJK}Forget it.", new GameMenuOption.OnConditionDelegate(this.game_meeting_castle_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_request_meeting_castle_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenu("village_outside", "{=!}.", new OnInitDelegate(this.VillageOutsideOnInit));
      gameSystemInitializer.AddGameMenu("village_loot_complete", "{=qt5bkw8l}On your orders your troops sack the village, pillaging everything of any value, and then put the buildings to the torch. From the coins and valuables that are found, you get your share.", new OnInitDelegate(this.game_menu_village_loot_complete_on_init));
      gameSystemInitializer.AddGameMenuOption("village_loot_complete", "continue", "{=veWOovVv}Continue...", new GameMenuOption.OnConditionDelegate(this.game_menu_village_loot_complete_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_village_loot_complete_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("raid_interrupted", "{=KW7amS8c}While your troops are pillaging the countryside, you receive news that the enemy is approaching. You quickly gather up your soldiers and prepare for battle.", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("raid_interrupted", "continue", "{=veWOovVv}Continue...", new GameMenuOption.OnConditionDelegate(this.game_menu_raid_interrupted_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_raid_interrupted_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("encounter_interrupted", "{=lKWflUid}While you are waiting in {DEFENDER}, {ATTACKER} started an attack on it.", new OnInitDelegate(this.game_menu_encounter_interrupted_on_init));
      gameSystemInitializer.AddGameMenuOption("encounter_interrupted", "encounter_interrupted_help_attackers", "{=h3yEHb4U}Help {ATTACKER}.", new GameMenuOption.OnConditionDelegate(this.game_menu_join_encounter_help_attackers_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_encounter_help_attackers_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter_interrupted", "encounter_interrupted_help_defenders", "{=FwIgakj8}Help {DEFENDER}.", new GameMenuOption.OnConditionDelegate(this.game_menu_join_encounter_help_defenders_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_join_encounter_help_defenders_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter_interrupted", "leave", "{=UgfmaQgx}Leave {DEFENDER}", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_interrupted_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_interrupted_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenu("encounter_interrupted_siege_preparations", "{=ABeCWcLi}While you are resting, you hear news that a force led by {ATTACKER} has arrived outside the walls of {DEFENDER} and is beginning preparations for a siege.", new OnInitDelegate(this.game_menu_encounter_interrupted_siege_preparations_on_init));
      gameSystemInitializer.AddGameMenuOption("encounter_interrupted_siege_preparations", "encounter_interrupted_siege_preparations_join_defend", "{=Lxx97yNh}Join the defense of {SETTLEMENT}", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_interrupted_siege_preparations_join_defend_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_interrupted_siege_preparations_join_defend_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter_interrupted_siege_preparations", "encounter_interrupted_siege_preparations_break_out_of_town", "{=ybzBF59f}Break out of {SETTLEMENT}.", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_interrupted_siege_preparations_break_out_of_town_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_interrupted_break_out_of_town_on_consequence));
      gameSystemInitializer.AddGameMenuOption("encounter_interrupted_siege_preparations", "encounter_interrupted_siege_preparations_leave_town", "{=FILG5eZD}Leave {SETTLEMENT}.", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_interrupted_siege_preparations_leave_town_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_interrupted_leave_on_consequence), true);
      gameSystemInitializer.AddGameMenu("encounter_interrupted_raid_started", "{=7o4AfEhN}While you are resting, you hear news that a force led by {ATTACKER} has arrived outside of {DEFENDER} to raid it.", new OnInitDelegate(this.game_menu_encounter_interrupted_by_raid_on_init));
      gameSystemInitializer.AddGameMenuOption("encounter_interrupted_raid_started", "encounter_interrupted_raid_started_leave", "{=WVkc4UgX}Continue.", new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_interrupted_by_raid_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_interrupted_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("continue_siege_after_attack", "{=CVp0j9al}You have defeated the enemies outside the walls. Now you decide to...", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("continue_siege_after_attack", "continue_siege", "{=zeKvSEpN}Continue the siege", new GameMenuOption.OnConditionDelegate(this.continue_siege_after_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.continue_siege_after_attack_on_consequence));
      gameSystemInitializer.AddGameMenuOption("continue_siege_after_attack", "leave_siege", "{=b7UHp4J9}Leave the siege", new GameMenuOption.OnConditionDelegate(this.leave_siege_after_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.leave_siege_after_attack_on_consequence), true);
      gameSystemInitializer.AddGameMenuOption("continue_siege_after_attack", "leave_army", "{=hSdJ0UUv}Leave Army", new GameMenuOption.OnConditionDelegate(this.leave_army_after_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.leave_army_after_attack_on_consequence), true);
      gameSystemInitializer.AddGameMenu("town_caught_by_guards", "{=gVuF84RZ}Guards caught you", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("town_caught_by_guards", "town_caught_by_guards_criminal_outside_menu_give_yourself_up", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.outside_menu_criminal_on_condition), new GameMenuOption.OnConsequenceDelegate(this.caught_outside_menu_criminal_on_consequence));
      gameSystemInitializer.AddGameMenuOption("town_caught_by_guards", "town_caught_by_guards_enemy_outside_menu_give_yourself_up", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.caught_outside_menu_enemy_on_condition), new GameMenuOption.OnConsequenceDelegate(this.caught_outside_menu_enemy_on_consequence));
      gameSystemInitializer.AddGameMenu("break_in_menu", "{=sd15CQHI}You devised a plan to distract the besiegers so you can rush the fortress gates, expecting the defenders to let you in. You and most of your men may get through, but as many as {POSSIBLE_CASUALTIES} {?PLURAL}troops{?}troop{\\?} may be lost.", new OnInitDelegate(this.break_in_out_menu_on_init), GameOverlays.MenuOverlayType.Encounter);
      gameSystemInitializer.AddGameMenuOption("break_in_menu", "break_in_menu_accept", "{=DbOv36TA}Go ahead with that.", new GameMenuOption.OnConditionDelegate(this.break_in_menu_accept_on_condition), new GameMenuOption.OnConsequenceDelegate(this.break_in_menu_accept_on_consequence));
      gameSystemInitializer.AddGameMenuOption("break_in_menu", "break_in_menu_reject", "{=f1etg9oL}Think of something else.", new GameMenuOption.OnConditionDelegate(this.break_in_menu_reject_on_condition), new GameMenuOption.OnConsequenceDelegate(this.break_in_menu_reject_on_consequence));
      gameSystemInitializer.AddGameMenu("break_in_debrief_menu", "{=PHe0oco1}You fought your way through the attackers to reach the gates. The defenders open them quickly to let you through. When the gates are safely closed behind you, you take a quick tally only to see you have lost the following: {CASUALTIES}.{OTHER_CASUALTIES}", new OnInitDelegate(this.break_in_out_debrief_menu_on_init));
      gameSystemInitializer.AddGameMenuOption("break_in_debrief_menu", "break_in_debrief_continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.break_in_debrief_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.break_in_debrief_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("break_out_menu", "{=J1aEaygO}You devised a plan to fight your way through the attackers to escape from the fortress. You and most of your men may survive, but as many as {POSSIBLE_CASUALTIES} {?PLURAL}troops{?}troop{\\?} may be lost.", new OnInitDelegate(this.break_in_out_menu_on_init), GameOverlays.MenuOverlayType.Encounter);
      gameSystemInitializer.AddGameMenuOption("break_out_menu", "break_out_menu_accept", "{=DbOv36TA}Go ahead with that.", new GameMenuOption.OnConditionDelegate(this.break_out_menu_accept_on_condition), new GameMenuOption.OnConsequenceDelegate(this.break_out_menu_accept_on_consequence));
      gameSystemInitializer.AddGameMenuOption("break_out_menu", "break_out_menu_reject", "{=f1etg9oL}Think of something else.", new GameMenuOption.OnConditionDelegate(this.break_out_menu_reject_on_condition), new GameMenuOption.OnConsequenceDelegate(this.break_out_menu_reject_on_consequence));
      gameSystemInitializer.AddGameMenu("break_out_debrief_menu", "{=OzyrsZZK}You fought your way through the attackers to escape from the settlement. When, after some time your forces regroup, you take a quick tally only to see you have lost the following: {CASUALTIES}.{OTHER_CASUALTIES}", new OnInitDelegate(this.break_in_out_debrief_menu_on_init));
      gameSystemInitializer.AddGameMenuOption("break_out_debrief_menu", "break_out_debrief_continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.break_out_debrief_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.break_out_debrief_continue_on_consequence));
    }

    private bool game_menu_encounter_army_lead_inf_on_condition(MenuCallbackArgs args)
    {
      bool flag = MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Attacker && MobileParty.MainParty.MapEvent.DefenderSide.TroopCount == 0;
      return MobileParty.MainParty.MapEvent != null && PlayerEncounter.CheckIfLeadingAvaliable() && !flag && MobileParty.MainParty.MapEvent.PartiesOnSide(MobileParty.MainParty.MapEvent.PlayerSide).Any<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party.MemberRoster.GetTroopRoster().Any<TroopRosterElement>((Func<TroopRosterElement, bool>) (tr => tr.Character != null && tr.Character.GetFormationClass() == FormationClass.Infantry))));
    }

    private void game_menu_encounter_army_lead_inf_on_consequence(MenuCallbackArgs args)
    {
      this.game_menu_encounter_attack_on_consequence(args);
    }

    private bool game_menu_encounter_army_lead_arc_on_condition(MenuCallbackArgs args)
    {
      bool flag = MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Attacker && MobileParty.MainParty.MapEvent.DefenderSide.TroopCount == 0;
      return MobileParty.MainParty.MapEvent != null && PlayerEncounter.CheckIfLeadingAvaliable() && !flag && MobileParty.MainParty.MapEvent.PartiesOnSide(MobileParty.MainParty.MapEvent.PlayerSide).Any<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party.MemberRoster.GetTroopRoster().Any<TroopRosterElement>((Func<TroopRosterElement, bool>) (tr => tr.Character != null && tr.Character.GetFormationClass() == FormationClass.Ranged))));
    }

    private void game_menu_encounter_army_lead_arc_on_consequence(MenuCallbackArgs args)
    {
      this.game_menu_encounter_attack_on_consequence(args);
    }

    private bool game_menu_encounter_army_lead_cav_on_condition(MenuCallbackArgs args)
    {
      bool flag = MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Attacker && MobileParty.MainParty.MapEvent.DefenderSide.TroopCount == 0;
      return MobileParty.MainParty.MapEvent != null && PlayerEncounter.CheckIfLeadingAvaliable() && !flag && MobileParty.MainParty.MapEvent.PartiesOnSide(MobileParty.MainParty.MapEvent.PlayerSide).Any<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party.MemberRoster.GetTroopRoster().Any<TroopRosterElement>((Func<TroopRosterElement, bool>) (tr => tr.Character != null && tr.Character.GetFormationClass() == FormationClass.Cavalry))));
    }

    private void game_menu_encounter_army_lead_cav_on_consequence(MenuCallbackArgs args)
    {
      this.game_menu_encounter_attack_on_consequence(args);
    }

    public static void game_menu_captivity_taken_prisoner_cheat_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.Finish();
    }

    private bool game_menu_encounter_army_lead_har_on_condition(MenuCallbackArgs args)
    {
      bool flag = MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Attacker && MobileParty.MainParty.MapEvent.DefenderSide.TroopCount == 0;
      return MobileParty.MainParty.MapEvent != null && PlayerEncounter.CheckIfLeadingAvaliable() && !flag && MobileParty.MainParty.MapEvent.PartiesOnSide(MobileParty.MainParty.MapEvent.PlayerSide).Any<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party.MemberRoster.GetTroopRoster().Any<TroopRosterElement>((Func<TroopRosterElement, bool>) (tr => tr.Character != null && tr.Character.GetFormationClass() == FormationClass.HorseArcher))));
    }

    private void game_menu_encounter_army_lead_har_on_consequence(MenuCallbackArgs args)
    {
      this.game_menu_encounter_attack_on_consequence(args);
    }

    private void game_menu_join_encounter_on_init(MenuCallbackArgs args)
    {
      if (MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.0") && PlayerEncounter.Current == null)
      {
        GameMenu.ExitToLast();
      }
      else
      {
        MapEvent encounteredBattle = PlayerEncounter.EncounteredBattle;
        PartyBase leaderParty1 = encounteredBattle.GetLeaderParty(BattleSideEnum.Attacker);
        PartyBase leaderParty2 = encounteredBattle.GetLeaderParty(BattleSideEnum.Defender);
        if (leaderParty1.IsMobile && leaderParty1.MobileParty.Army != null)
          MBTextManager.SetTextVariable("ATTACKER", leaderParty1.MobileParty.ArmyName, false);
        else
          MBTextManager.SetTextVariable("ATTACKER", leaderParty1.Name, false);
        if (leaderParty2.IsMobile && leaderParty2.MobileParty.Army != null)
          MBTextManager.SetTextVariable("DEFENDER", leaderParty2.MobileParty.ArmyName, false);
        else
          MBTextManager.SetTextVariable("DEFENDER", leaderParty2.Name, false);
        if (encounteredBattle.IsSallyOut)
        {
          MBTextManager.SetTextVariable("JOIN_ENCOUNTER_TEXT", GameTexts.FindText("str_defenders_make_sally_out"), false);
          StringHelpers.SetCharacterProperties("BESIEGER_LEADER", Campaign.Current.Models.EncounterModel.GetLeaderOfMapEvent(encounteredBattle, BattleSideEnum.Defender).CharacterObject);
        }
        else if (leaderParty2.IsSettlement)
        {
          TextObject text = new TextObject("{=kDiN9iYw}{ATTACKER} is besieging the walls of {DEFENDER}");
          if (encounteredBattle.IsSiegeAssault)
          {
            switch (leaderParty2.Settlement.CurrentSiegeState)
            {
              case Settlement.SiegeState.InTheLordsHall:
                text = new TextObject("{=oXY2wnic}{ATTACKER} is fighting inside the lord's hall of {DEFENDER}");
                break;
            }
          }
          else if (encounteredBattle.IsRaid)
            text = encounteredBattle.DefenderSide.TroopCount <= 0 ? new TextObject("{=BExNNwm0}{ATTACKER} is raiding {DEFENDER}") : new TextObject("{=kvNQLcCb}{ATTACKER} is fighting in {DEFENDER}");
          MBTextManager.SetTextVariable("JOIN_ENCOUNTER_TEXT", text, false);
        }
        else
          MBTextManager.SetTextVariable("JOIN_ENCOUNTER_TEXT", GameTexts.FindText("str_come_across_battle"), false);
      }
    }

    private bool game_menu_join_encounter_help_attackers_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.DefendAction;
      MapEvent encounteredBattle = PlayerEncounter.EncounteredBattle;
      IFaction mapFaction = encounteredBattle.GetLeaderParty(BattleSideEnum.Defender).MapFaction;
      this.CheckFactionAttackableHonorably(args, mapFaction);
      return encounteredBattle.CanPartyJoinBattle(PartyBase.MainParty, BattleSideEnum.Attacker);
    }

    private void game_menu_join_encounter_help_attackers_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerEncounter.InsideSettlement && PlayerEncounter.EncounterSettlement.IsUnderSiege)
        PlayerEncounter.LeaveSettlement();
      PlayerEncounter.JoinBattle(BattleSideEnum.Attacker);
      if (PlayerEncounter.Battle.DefenderSide.TroopCount > 0)
        GameMenu.SwitchToMenu("encounter");
      else if (MobileParty.MainParty.Army != null)
      {
        if (MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
        {
          if (!MobileParty.MainParty.Army.LeaderParty.AttachedParties.Contains(MobileParty.MainParty))
          {
            MobileParty.MainParty.Army.AddPartyToMergedParties(MobileParty.MainParty);
            Campaign.Current.CameraFollowParty = MobileParty.MainParty.Army.LeaderParty.Party;
            CampaignEventDispatcher.Instance.OnArmyOverlaySetDirty();
          }
          if (PlayerEncounter.Battle.IsRaid)
            GameMenu.SwitchToMenu("raiding_village");
          else
            GameMenu.SwitchToMenu("army_wait");
        }
        else if (PlayerEncounter.Battle.IsRaid)
        {
          GameMenu.SwitchToMenu("raiding_village");
          MobileParty.MainParty.Ai.SetMoveModeHold();
        }
        else
          GameMenu.SwitchToMenu("encounter");
      }
      else if (PlayerEncounter.Battle.IsRaid)
      {
        GameMenu.SwitchToMenu("raiding_village");
        MobileParty.MainParty.Ai.SetMoveModeHold();
      }
      else
      {
        GameMenu.SwitchToMenu("menu_siege_strategies");
        MobileParty.MainParty.Ai.SetMoveModeHold();
      }
    }

    private bool game_menu_join_encounter_abandon_army_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty;
    }

    private bool game_menu_join_encounter_help_defenders_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.DefendAction;
      MapEvent encounteredBattle = PlayerEncounter.EncounteredBattle;
      IFaction mapFaction = encounteredBattle.GetLeaderParty(BattleSideEnum.Attacker).MapFaction;
      this.CheckFactionAttackableHonorably(args, mapFaction);
      return encounteredBattle.CanPartyJoinBattle(PartyBase.MainParty, BattleSideEnum.Defender);
    }

    public static bool game_menu_captivity_castle_taken_prisoner_cont_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_join_encounter_help_defenders_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerEncounter.EncounteredParty?.MapEvent != null)
      {
        PlayerEncounter.JoinBattle(BattleSideEnum.Defender);
        GameMenu.ActivateGameMenu("encounter");
      }
      else
      {
        if (PlayerEncounter.Current == null)
          return;
        if (PlayerEncounter.EncounterSettlement != null && PlayerEncounter.EncounterSettlement.SiegeEvent != null && !PlayerEncounter.EncounterSettlement.MapFaction.IsAtWarWith(MobileParty.MainParty.MapFaction))
          PlayerEncounter.RestartPlayerEncounter(PlayerEncounter.EncounterSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Party, PartyBase.MainParty, false);
        GameMenu.ActivateGameMenu("encounter");
      }
    }

    private void game_menu_join_siege_event_on_init(MenuCallbackArgs args)
    {
    }

    private void game_menu_join_sally_out_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.Current.IsPlayerWaiting = false;
    }

    private bool game_menu_join_siege_event_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      TextObject explanation;
      if (DiplomacyHelper.DidMainHeroSwornNotToAttackFaction(Settlement.CurrentSettlement.MapFaction, out explanation))
      {
        args.IsEnabled = false;
        args.Tooltip = explanation;
      }
      return Settlement.CurrentSettlement.SiegeEvent.CanPartyJoinSide(MobileParty.MainParty.Party, BattleSideEnum.Attacker);
    }

    private void game_menu_join_siege_event_on_consequence(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.IsMainParty || Settlement.CurrentSettlement.SiegeEvent.CanPartyJoinSide(MobileParty.MainParty.Party, BattleSideEnum.Attacker))
      {
        MobileParty leaderParty = Settlement.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty;
        if (!leaderParty.IsMainParty)
          MobileParty.MainParty.Ai.SetMoveEscortParty(leaderParty);
        if (Settlement.CurrentSettlement.Party.MapEvent != null)
        {
          PlayerEncounter.JoinBattle(BattleSideEnum.Attacker);
          GameMenu.SwitchToMenu("encounter");
        }
        else
        {
          Settlement currentSettlement = Settlement.CurrentSettlement;
          if (Hero.MainHero.CurrentSettlement != null)
            PlayerEncounter.LeaveSettlement();
          PlayerEncounter.Finish();
          MobileParty.MainParty.BesiegerCamp = currentSettlement.SiegeEvent.BesiegerCamp;
          PlayerSiege.StartPlayerSiege(BattleSideEnum.Attacker, settlement: currentSettlement);
          PlayerSiege.StartSiegePreparation();
          Campaign.Current.TimeControlMode = CampaignTimeControlMode.UnstoppablePlay;
        }
      }
      else
        Debug.FailedAssert("Player should not be able to join this siege.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\EncounterGameMenuBehavior.cs", nameof (game_menu_join_siege_event_on_consequence), 667);
    }

    private bool game_menu_join_sally_out_event_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      return true;
    }

    private bool game_menu_stay_in_settlement_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void game_menu_join_sally_out_on_consequence(MenuCallbackArgs args)
    {
      EncounterManager.StartPartyEncounter(MobileParty.MainParty.Party, MapEventHelper.GetSallyOutDefenderLeader());
    }

    private void game_menu_stay_in_settlement_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("menu_siege_strategies");
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.Current.IsPlayerWaiting = false;
    }

    private bool break_in_to_help_defender_side_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.DefendAction;
      return this.common_join_siege_event_button_condition(args);
    }

    private bool common_join_siege_event_button_condition(MenuCallbackArgs args)
    {
      MobileParty mainParty = MobileParty.MainParty;
      SiegeEvent siegeEvent = Settlement.CurrentSettlement.SiegeEvent;
      int besiegedSettlement = Campaign.Current.Models.TroopSacrificeModel.GetLostTroopCountForBreakingInBesiegedSettlement(mainParty, siegeEvent);
      Army army = mainParty.Army;
      int num = army != null ? army.TotalRegularCount : mainParty.MemberRoster.TotalRegulars;
      TextObject explanation;
      if (DiplomacyHelper.DidMainHeroSwornNotToAttackFaction(siegeEvent.BesiegerCamp.LeaderParty.MapFaction, out explanation))
      {
        args.IsEnabled = false;
        args.Tooltip = explanation;
      }
      else if (besiegedSettlement > num)
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
      }
      return siegeEvent.CanPartyJoinSide(MobileParty.MainParty.Party, BattleSideEnum.Defender);
    }

    private bool attack_besieger_side_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      return this.common_join_siege_event_button_condition(args);
    }

    private void game_menu_join_siege_event_on_defender_side_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("break_in_menu");
    }

    private bool game_menu_join_encounter_leave_no_army_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      MBTextManager.SetTextVariable("LEAVE_TEXT", "{=ebUwP3Q3}Don't get involved.", false);
      return MobileParty.MainParty.Army == null || MobileParty.MainParty.Army?.LeaderParty == MobileParty.MainParty;
    }

    private bool game_menu_join_encounter_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      MobileParty leaderParty = Settlement.CurrentSettlement.SiegeEvent != null ? Settlement.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty : (MobileParty) null;
      return leaderParty == null || !leaderParty.IsMainParty;
    }

    private bool game_menu_siege_attacker_left_return_to_settlement_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      GameTexts.SetVariable("SETTLEMENT", MobileParty.MainParty.LastVisitedSettlement.Name);
      return true;
    }

    private void game_menu_siege_attacker_left_return_to_settlement_on_consequence(
      MenuCallbackArgs args)
    {
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Finish(false);
      if (MobileParty.MainParty.AttachedTo == null)
        EncounterManager.StartSettlementEncounter(MobileParty.MainParty, MobileParty.MainParty.LastVisitedSettlement);
      else
        EncounterManager.StartSettlementEncounter(MobileParty.MainParty.AttachedTo, MobileParty.MainParty.LastVisitedSettlement);
      if (PlayerEncounter.Current != null && PlayerEncounter.LocationEncounter == null)
        PlayerEncounter.EnterSettlement();
      string genericStateMenu = Campaign.Current.Models.EncounterGameMenuModel.GetGenericStateMenu();
      if (string.IsNullOrEmpty(genericStateMenu))
        GameMenu.ExitToLast();
      else
        GameMenu.SwitchToMenu(genericStateMenu);
    }

    private bool game_menu_siege_attacker_left_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private bool game_menu_siege_attacker_defeated_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private bool game_menu_encounter_cheat_on_condition(MenuCallbackArgs args)
    {
      return Game.Current.CheatMode;
    }

    private void game_menu_encounter_interrupted_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MBTextManager.SetTextVariable("ATTACKER", PlayerEncounter.EncounteredBattle.GetLeaderParty(BattleSideEnum.Attacker).Name, false);
      MBTextManager.SetTextVariable("DEFENDER", currentSettlement.Name, false);
    }

    private void game_menu_encounter_interrupted_siege_preparations_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      TextObject name = Settlement.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Name;
      TextObject text = args.MenuContext.GameMenu.GetText();
      text.SetTextVariable("ATTACKER", name);
      text.SetTextVariable("DEFENDER", currentSettlement.Name);
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.Current.IsPlayerWaiting = false;
    }

    private bool game_menu_encounter_interrupted_siege_preparations_leave_town_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      args.MenuContext.GameMenu.GetText().SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.Name);
      return !FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, Hero.MainHero.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.MapFaction);
    }

    private void game_menu_encounter_interrupted_by_raid_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      TextObject name = currentSettlement.Party.MapEvent.GetLeaderParty(currentSettlement.Party.OpponentSide).Name;
      TextObject text = args.MenuContext.GameMenu.GetText();
      text.SetTextVariable("ATTACKER", name);
      text.SetTextVariable("DEFENDER", currentSettlement.Name);
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.Current.IsPlayerWaiting = false;
    }

    private bool game_menu_encounter_interrupted_by_raid_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_settlement_hide_and_wait_on_consequence(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (currentSettlement.SiegeEvent?.BesiegerCamp.LeaderParty != null)
        GameMenu.SwitchToMenu("encounter_interrupted_siege_preparations");
      else if (currentSettlement.IsTown)
      {
        GameMenu.SwitchToMenu("town");
      }
      else
      {
        if (!currentSettlement.IsCastle)
          return;
        GameMenu.SwitchToMenu("castle");
      }
    }

    private bool game_menu_settlement_hide_and_wait_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private bool wait_menu_settlement_hide_and_wait_on_condition(MenuCallbackArgs args)
    {
      args.MenuContext.GameMenu.GetText().SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.Name);
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.StoppableFastForward;
      args.optionLeaveType = GameMenuOption.LeaveType.Wait;
      return true;
    }

    private bool game_menu_encounter_interrupted_siege_preparations_break_out_of_town_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.LeaveTroopsAndFlee;
      args.MenuContext.GameMenu.GetText().SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.Name);
      MobileParty mainParty = MobileParty.MainParty;
      SiegeEvent siegeEvent = Settlement.CurrentSettlement.SiegeEvent;
      int besiegedSettlement = Campaign.Current.Models.TroopSacrificeModel.GetLostTroopCountForBreakingOutOfBesiegedSettlement(mainParty, siegeEvent);
      Army army = mainParty.Army;
      int num = army != null ? army.TotalRegularCount : mainParty.MemberRoster.TotalRegulars;
      if (besiegedSettlement > num)
      {
        args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
        args.IsEnabled = false;
      }
      if (mainParty.Army != null && mainParty.Army.LeaderParty != MobileParty.MainParty)
      {
        args.IsEnabled = true;
        TextObject textObject = new TextObject("{=!}If you break out from the siege, you will also leave the army. This is a dishonorable act and you will lose relations with all army member lords.{newline}• Army Leader: {ARMY_LEADER_RELATION_PENALTY}{newline}• Army Members: {ARMY_MEMBER_RELATION_PENALTY}");
        textObject.SetTextVariable("ARMY_LEADER_RELATION_PENALTY", Campaign.Current.Models.TroopSacrificeModel.BreakOutArmyLeaderRelationPenalty);
        textObject.SetTextVariable("ARMY_MEMBER_RELATION_PENALTY", Campaign.Current.Models.TroopSacrificeModel.BreakOutArmyMemberRelationPenalty);
        args.Tooltip = textObject;
      }
      return FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, siegeEvent.BesiegerCamp.LeaderParty.MapFaction);
    }

    private bool game_menu_encounter_interrupted_siege_preparations_hide_in_town_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Wait;
      IFaction mapFaction1 = Hero.MainHero.MapFaction;
      SiegeEvent siegeEvent = Settlement.CurrentSettlement.SiegeEvent;
      IFaction mapFaction2 = Settlement.CurrentSettlement.MapFaction;
      if (mapFaction1 == siegeEvent.BesiegerCamp.LeaderParty.MapFaction)
        return false;
      return FactionManager.IsAtWarAgainstFaction(mapFaction2, mapFaction1) || FactionManager.IsNeutralWithFaction(mapFaction2, mapFaction1);
    }

    private void game_menu_encounter_interrupted_break_out_of_town_on_consequence(
      MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("break_out_menu");
    }

    private void game_menu_encounter_interrupted_siege_preparations_join_defend_on_consequence(
      MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      PlayerSiege.StartPlayerSiege(BattleSideEnum.Defender);
      MobileParty.MainParty.Ai.SetMoveDefendSettlement(currentSettlement);
      PlayerSiege.StartSiegePreparation();
    }

    private bool game_menu_encounter_interrupted_siege_preparations_join_defend_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.DefendAction;
      GameTexts.SetVariable("SETTLEMENT", Settlement.CurrentSettlement.Name);
      return Settlement.CurrentSettlement.SiegeEvent.CanPartyJoinSide(PartyBase.MainParty, BattleSideEnum.Defender);
    }

    private void game_menu_encounter_interrupted_leave_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.Finish();
    }

    public static void menu_sneak_into_town_succeeded_continue_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("town");
    }

    public static bool menu_sneak_into_town_succeeded_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    public static void game_menu_sneak_into_town_caught_on_init(MenuCallbackArgs args)
    {
      ChangeCrimeRatingAction.Apply(Settlement.CurrentSettlement.MapFaction, 10f);
    }

    public static void mno_sneak_caught_surrender_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("menu_captivity_castle_taken_prisoner");
    }

    public static bool mno_sneak_caught_surrender_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Surrender;
      return true;
    }

    private void game_menu_encounter_interrupted_continue_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("join_encounter");
    }

    private bool game_menu_encounter_interrupted_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void game_menu_town_assault_on_init(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("encounter");
      this.game_menu_encounter_attack_on_consequence(args);
    }

    private void game_menu_town_assault_order_attack_on_init(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("encounter");
      this.game_menu_encounter_order_attack_on_consequence(args);
    }

    private void game_menu_army_encounter_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.LeaveEncounter)
        PlayerEncounter.Finish();
      else if (PlayerEncounter.Battle != null && PlayerEncounter.Battle.AttackerSide.LeaderParty != PartyBase.MainParty && PlayerEncounter.Battle.DefenderSide.LeaderParty != PartyBase.MainParty || PlayerEncounter.MeetingDone)
      {
        if (PlayerEncounter.Battle == null)
          PlayerEncounter.StartBattle();
        if (PlayerEncounter.BattleChallenge)
          GameMenu.SwitchToMenu("duel_starter_menu");
        else
          GameMenu.SwitchToMenu("encounter");
      }
      else if (PlayerEncounter.EncounteredMobileParty.SiegeEvent != null && Settlement.CurrentSettlement != null)
      {
        GameMenu.SwitchToMenu("join_siege_event");
      }
      else
      {
        if (PlayerEncounter.EncounteredMobileParty == null || PlayerEncounter.EncounteredMobileParty.Army == null)
          return;
        MBTextManager.SetTextVariable("ARMY", PlayerEncounter.EncounteredMobileParty.Army.Name, false);
        MBTextManager.SetTextVariable("ARMY_ENCOUNTER_TEXT", GameTexts.FindText("str_you_have_encountered_ARMY"), true);
      }
    }

    private void game_menu_encounter_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetPanelSound("event:/ui/panels/battle/slide_in");
      if (PlayerEncounter.Battle == null)
      {
        if (MobileParty.MainParty.MapEvent != null)
          PlayerEncounter.Init();
        else
          PlayerEncounter.StartBattle();
      }
      PlayerEncounter.Update();
      this.UpdateVillageHostileActionEncounter(args);
      if (PlayerEncounter.Current != null)
        return;
      Campaign.Current.SaveHandler.SignalAutoSave();
    }

    private void UpdateVillageHostileActionEncounter(MenuCallbackArgs args)
    {
      MapEvent battle = PlayerEncounter.Battle;
      if (!(Game.Current.GameStateManager.ActiveState is MapState) || battle?.MapEventSettlement == null || !battle.MapEventSettlement.IsVillage || !battle.DefenderSide.LeaderParty.IsSettlement || battle.AttackerSide != battle.GetMapEventSide(battle.PlayerSide))
        return;
      bool flag1 = battle.DefenderSide.Parties.All<MapEventParty>((Func<MapEventParty, bool>) (x => x.Party.MemberRoster.TotalHealthyCount == 0));
      bool flag2 = this.ConsiderMilitiaSurrenderPossibility();
      if (!(flag1 | flag2))
        return;
      if (!flag1)
      {
        for (int index = battle.DefenderSide.Parties.Count - 1; index >= 0; --index)
        {
          if (battle.DefenderSide.Parties[index].Party.IsMobile)
            battle.DefenderSide.Parties[index].Party.MapEventSide = (MapEventSide) null;
        }
        if (!battle.IsRaid)
          battle.SetOverrideWinner(BattleSideEnum.Attacker);
      }
      if (battle.IsRaid)
        this.game_menu_village_raid_no_resist_on_consequence(args);
      else if (battle.IsForcingSupplies)
      {
        this.game_menu_village_force_supplies_no_resist_loot_on_consequence(args);
      }
      else
      {
        if (!battle.IsForcingVolunteers)
          return;
        this.game_menu_village_force_volunteers_no_resist_loot_on_consequence(args);
      }
    }

    public static bool game_menu_captivity_taken_prisoner_cheat_on_condition(MenuCallbackArgs args)
    {
      return Game.Current.IsDevelopmentMode;
    }

    private bool ConsiderMilitiaSurrenderPossibility()
    {
      bool flag1 = false;
      MapEvent battle = PlayerEncounter.Battle;
      if ((battle.IsRaid || battle.IsForcingSupplies || battle.IsForcingVolunteers) && battle.MapEventSettlement.IsVillage)
      {
        Settlement mapEventSettlement = battle.MapEventSettlement;
        float num1 = 0.0f;
        bool flag2 = false;
        foreach (MapEventParty party in (List<MapEventParty>) battle.DefenderSide.Parties)
        {
          num1 += party.Party.TotalStrength;
          if (party.Party.IsMobile && party.Party.MobileParty.IsLordParty)
            flag2 = true;
        }
        float num2 = 0.0f;
        foreach (MapEventParty party in (List<MapEventParty>) battle.AttackerSide.Parties)
        {
          if (!party.Party.IsMobile || party.Party.MobileParty.Army == null)
            num2 += party.Party.TotalStrength;
          else if (party.Party.IsMobile && party.Party.MobileParty.Army != null && party.Party.MobileParty.Army.LeaderParty == party.Party.MobileParty)
          {
            foreach (MobileParty attachedParty in (List<MobileParty>) party.Party.MobileParty.Army.LeaderParty.AttachedParties)
              num2 += attachedParty.Party.TotalStrength;
          }
        }
        float num3 = mapEventSettlement.OwnerClan?.Leader?.PartyBelongedTo != null ? mapEventSettlement.OwnerClan.Leader.PartyBelongedTo.Party.RandomFloatWithSeed(1U, 0.05f, 0.15f) : 0.1f;
        flag1 = !flag2 && (double) num2 * (double) num3 > (double) num1;
      }
      return flag1;
    }

    private bool game_menu_encounter_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty || !MapEventHelper.CanLeaveBattle(MobileParty.MainParty))
        return false;
      return !MobileParty.MainParty.MapEvent.IsSallyOut || MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Defender || MobileParty.MainParty.CurrentSettlement == null;
    }

    private bool game_menu_sally_out_go_back_to_settlement_on_condition(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.IsSallyOut && MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Attacker && MobileParty.MainParty.CurrentSettlement != null)
      {
        bool flag = Campaign.Current.Models.EncounterModel.GetLeaderOfMapEvent(MobileParty.MainParty.MapEvent, MobileParty.MainParty.MapEvent.PlayerSide) == Hero.MainHero;
        if (((MobileParty.MainParty.Army == null ? 1 : (MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty ? 1 : 0)) | (flag ? 1 : 0)) != 0 && (MobileParty.MainParty.SiegeEvent == null || !MobileParty.MainParty.SiegeEvent.BesiegerCamp.IsBesiegerSideParty(MobileParty.MainParty)) && !PlayerEncounter.Current.CheckIfBattleShouldContinueAfterBattleMission())
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Leave;
          GameTexts.SetVariable("SETTLEMENT", MobileParty.MainParty.LastVisitedSettlement.Name);
          return true;
        }
      }
      return false;
    }

    private void game_menu_sally_out_go_back_to_settlement_consequence(MenuCallbackArgs args)
    {
      MapEvent playerMapEvent = MapEvent.PlayerMapEvent;
      playerMapEvent.BeginWait();
      if (Campaign.Current.Models.EncounterModel.GetLeaderOfMapEvent(playerMapEvent, playerMapEvent.PlayerSide) == Hero.MainHero)
      {
        PlayerEncounter.Current.FinalizeBattle();
        PlayerEncounter.Current.SetupFields(Settlement.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Party, PartyBase.MainParty);
      }
      else
        PlayerEncounter.LeaveBattle();
      GameMenu.SwitchToMenu("menu_siege_strategies");
    }

    private bool game_menu_encounter_abandon_army_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty && !MobileParty.MainParty.MapEvent.IsSallyOut && MapEventHelper.CanLeaveBattle(MobileParty.MainParty);
    }

    private void game_menu_army_talk_to_leader_on_consequence(MenuCallbackArgs args)
    {
      Campaign.Current.CurrentConversationContext = ConversationContext.PartyEncounter;
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      ConversationCharacterData playerCharacterData = new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty);
      ConversationCharacterData conversationCharacterData = new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(PlayerEncounter.EncounteredParty), PlayerEncounter.EncounteredParty);
      PlayerEncounter.SetMeetingDone();
      ConversationCharacterData conversationPartnerData = conversationCharacterData;
      CampaignMapConversation.OpenConversation(playerCharacterData, conversationPartnerData);
    }

    private bool game_menu_army_talk_to_leader_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      if (PlayerEncounter.EncounteredParty?.LeaderHero != null)
        MenuHelper.SetIssueAndQuestDataForHero(args, PlayerEncounter.EncounteredParty.LeaderHero);
      return true;
    }

    public static void game_menu_captivity_castle_taken_prisoner_cont_on_consequence(
      MenuCallbackArgs args)
    {
      GameMenu.ExitToLast();
      PartyBase.MainParty.AddElementToMemberRoster(CharacterObject.PlayerCharacter, -1, true);
      TakePrisonerAction.Apply(Settlement.CurrentSettlement.Party, Hero.MainHero);
    }

    private bool game_menu_army_talk_to_other_members_on_condition(MenuCallbackArgs args)
    {
      foreach (MobileParty attachedParty in (List<MobileParty>) PlayerEncounter.EncounteredMobileParty.Army.LeaderParty.AttachedParties)
      {
        Hero leaderHero = attachedParty.LeaderHero;
        if (leaderHero != null)
          MenuHelper.SetIssueAndQuestDataForHero(args, leaderHero);
      }
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      return !FactionManager.IsAtWarAgainstFaction(MobileParty.MainParty.MapFaction, PlayerEncounter.EncounteredMobileParty.MapFaction) && PlayerEncounter.EncounteredMobileParty.Army.LeaderParty.AttachedParties.Count > 0;
    }

    private void game_menu_army_talk_to_other_members_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("game_menu_army_talk_to_other_members");
    }

    private void game_menu_army_talk_to_other_members_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.LeaveEncounter)
      {
        PlayerEncounter.Finish();
      }
      else
      {
        args.MenuContext.SetRepeatObjectList((IEnumerable<object>) PlayerEncounter.EncounteredMobileParty.Army.LeaderParty.AttachedParties.ToList<MobileParty>());
        if (!PlayerEncounter.EncounteredMobileParty.MapFaction.IsAtWarWith(MobileParty.MainParty.MapFaction))
          return;
        GameMenu.SwitchToMenu("encounter");
      }
    }

    private bool game_menu_army_talk_to_other_members_item_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      MobileParty repeatableObject = args.MenuContext.GetCurrentRepeatableObject() as MobileParty;
      MBTextManager.SetTextVariable("CHAR_NAME", repeatableObject?.LeaderHero.Name, false);
      if (repeatableObject != null && repeatableObject.LeaderHero != null)
        MenuHelper.SetIssueAndQuestDataForHero(args, repeatableObject.LeaderHero);
      return true;
    }

    private void game_menu_army_talk_to_other_members_item_on_consequence(MenuCallbackArgs args)
    {
      MobileParty selectedObject = args.MenuContext.GetSelectedObject() as MobileParty;
      Campaign.Current.CurrentConversationContext = ConversationContext.PartyEncounter;
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty), new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(selectedObject.Party), selectedObject.Party));
    }

    private bool game_menu_army_talk_to_other_members_back_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void game_menu_army_talk_to_other_members_back_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("army_encounter");
    }

    private bool game_menu_army_attack_on_condition(MenuCallbackArgs args)
    {
      this.CheckEnemyAttackableHonorably(args);
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      return MobileParty.MainParty.MapFaction.IsAtWarWith(PlayerEncounter.EncounteredMobileParty.MapFaction);
    }

    private void CheckEnemyAttackableHonorably(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty || PlayerEncounter.PlayerIsDefender)
        return;
      IFaction mapFaction = PlayerEncounter.EncounteredParty.MapFaction;
      if (mapFaction == null || !mapFaction.NotAttackableByPlayerUntilTime.IsFuture)
        return;
      args.IsEnabled = false;
      args.Tooltip = EncounterGameMenuBehavior.EnemyNotAttackableTooltip;
    }

    private void CheckFactionAttackableHonorably(MenuCallbackArgs args, IFaction faction)
    {
      if (!faction.NotAttackableByPlayerUntilTime.IsFuture)
        return;
      args.IsEnabled = false;
      args.Tooltip = EncounterGameMenuBehavior.EnemyNotAttackableTooltip;
    }

    private void CheckFortificationAttackableHonorably(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
        return;
      IFaction mapFaction = PlayerEncounter.EncounterSettlement.MapFaction;
      if ((mapFaction != null ? (mapFaction.NotAttackableByPlayerUntilTime.IsFuture ? 1 : 0) : 0) == 0)
        return;
      args.IsEnabled = false;
      args.Tooltip = EncounterGameMenuBehavior.EnemyNotAttackableTooltip;
    }

    private bool game_menu_army_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void game_menu_army_attack_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("encounter");
    }

    private bool game_menu_army_join_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      if (PlayerEncounter.EncounteredMobileParty.MapFaction != MobileParty.MainParty.MapFaction || PlayerEncounter.EncounteredMobileParty.Army == MobileParty.MainParty.Army)
        return false;
      if (PlayerEncounter.EncounteredMobileParty.MapFaction != null)
      {
        foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
        {
          if (kingdom.IsAtWarWith(Clan.PlayerClan.MapFaction) && kingdom.NotAttackableByPlayerUntilTime.IsFuture)
          {
            args.IsEnabled = false;
            args.Tooltip = GameTexts.FindText("str_cant_join_army_safe_passage");
          }
        }
      }
      return MobileParty.MainParty.Army == null && PlayerEncounter.EncounteredMobileParty.MapFaction == MobileParty.MainParty.MapFaction;
    }

    private void game_menu_army_join_on_consequence(MenuCallbackArgs args)
    {
      MobileParty.MainParty.Army = PlayerEncounter.EncounteredMobileParty.Army;
      MobileParty.MainParty.Army.AddPartyToMergedParties(MobileParty.MainParty);
      PlayerEncounter.Finish();
    }

    private void army_encounter_leave_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.Finish();
    }

    private void game_menu_encounter_leave_on_consequence(MenuCallbackArgs args)
    {
      Settlement besiegedSettlement = MobileParty.MainParty.BesiegedSettlement;
      if ((besiegedSettlement != null ? (besiegedSettlement.CurrentSiegeState == Settlement.SiegeState.InTheLordsHall ? 1 : 0) : 0) != 0)
      {
        TextObject textObject = new TextObject("{=h3YuHSRb}Are you sure you want to abandon the siege?");
        InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_decision").ToString(), textObject.ToString(), true, true, GameTexts.FindText("str_yes").ToString(), GameTexts.FindText("str_no").ToString(), (Action) (() => MenuHelper.EncounterLeaveConsequence()), (Action) null));
      }
      else
        MenuHelper.EncounterLeaveConsequence();
    }

    private void game_menu_encounter_abandon_on_consequence(MenuCallbackArgs args)
    {
      (PlayerEncounter.Battle != null ? PlayerEncounter.Battle : PlayerEncounter.EncounteredBattle).BeginWait();
      MobileParty.MainParty.Ai.SetMoveModeHold();
      Hero.MainHero.PartyBelongedTo.Army = (Army) null;
      PlayerEncounter.Finish();
      if (MobileParty.MainParty.BesiegerCamp == null)
        return;
      MobileParty.MainParty.BesiegerCamp = (BesiegerCamp) null;
    }

    private bool game_menu_encounter_surrender_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Surrender;
      return MobileParty.MainParty.MapEvent != null && !MapEventHelper.CanLeaveBattle(MobileParty.MainParty) && PartyBase.MainParty.Side == BattleSideEnum.Defender && MobileParty.MainParty.MapEvent.DefenderSide.TroopCount == MobileParty.MainParty.Party.NumberOfHealthyMembers;
    }

    private void game_menu_encounter_surrender_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.PlayerSurrender = true;
      PlayerEncounter.Update();
      if (Hero.MainHero.CanBecomePrisoner())
        return;
      GameMenu.ActivateGameMenu("menu_captivity_end_no_more_enemies");
    }

    private bool game_menu_encounter_attack_on_condition(MenuCallbackArgs args)
    {
      this.CheckEnemyAttackableHonorably(args);
      return MenuHelper.EncounterAttackCondition(args);
    }

    private bool game_menu_encounter_capture_the_enemy_on_condition(MenuCallbackArgs args)
    {
      return MenuHelper.EncounterCaptureEnemyCondition(args);
    }

    private void game_menu_encounter_attack_on_consequence(MenuCallbackArgs args)
    {
      MenuHelper.EncounterAttackConsequence(args);
    }

    private void game_menu_capture_the_enemy_on_consequence(MenuCallbackArgs args)
    {
      MenuHelper.EncounterCaptureTheEnemyOnConsequence(args);
    }

    private bool game_menu_encounter_order_attack_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.OrderTroopsToAttack;
      MapEvent playerMapEvent = MapEvent.PlayerMapEvent;
      if (playerMapEvent != null)
      {
        this.CheckEnemyAttackableHonorably(args);
        int num = 0;
        foreach (MapEventParty mapEventParty in (List<MapEventParty>) playerMapEvent.PartiesOnSide(MobileParty.MainParty.Party.Side))
          num += mapEventParty.Party.MemberRoster.Sum((Func<TroopRosterElement, int>) (x =>
          {
            if (!x.Character.IsHero)
              return x.Number - x.WoundedNumber;
            return x.Character != CharacterObject.PlayerCharacter && !x.Character.HeroObject.IsWounded ? 1 : 0;
          }));
        if ((!playerMapEvent.HasTroopsOnBothSides() || playerMapEvent.GetLeaderParty(PartyBase.MainParty.OpponentSide) == null ? 0 : (num > 0 ? 1 : 0)) != 0)
        {
          if (MobileParty.MainParty.MemberRoster.Sum((Func<TroopRosterElement, int>) (x =>
          {
            if (!x.Character.IsHero)
              return x.Number - x.WoundedNumber;
            return x.Character != CharacterObject.PlayerCharacter && !x.Character.HeroObject.IsWounded ? 1 : 0;
          })) > 0)
            MBTextManager.SetTextVariable("SEND_TROOPS_TEXT", "{=QfMeoKOm}Send troops.", false);
          else
            MBTextManager.SetTextVariable("SEND_TROOPS_TEXT", "{=jo3UHKMD}Leave it to the others.", false);
          if (playerMapEvent.IsInvulnerable)
            playerMapEvent.IsInvulnerable = false;
          IFaction mapFaction = PlayerEncounter.EncounteredParty.MapFaction;
          if (mapFaction == null || mapFaction.NotAttackableByPlayerUntilTime.IsPast)
            args.Tooltip = TooltipHelper.GetSendTroopsPowerContextTooltipForMapEvent();
          return true;
        }
      }
      return false;
    }

    private void game_menu_encounter_order_attack_on_consequence(MenuCallbackArgs args)
    {
      MenuHelper.EncounterOrderAttackConsequence(args);
    }

    private bool game_menu_encounter_leave_your_soldiers_behind_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.LeaveTroopsAndFlee;
      if (PartyBase.MainParty.Side != BattleSideEnum.Defender || PlayerEncounter.Battle.DefenderSide.LeaderParty != PartyBase.MainParty || MobileParty.MainParty.MapEvent.HasWinner)
        return false;
      int forTryingToGetAway = Campaign.Current.Models.TroopSacrificeModel.GetNumberOfTroopsSacrificedForTryingToGetAway(PlayerEncounter.Current.PlayerSide, PlayerEncounter.Battle);
      this._intEncounterVariable = forTryingToGetAway;
      int ofRegularMembers = PartyBase.MainParty.NumberOfRegularMembers;
      if (MobileParty.MainParty.Army != null)
      {
        foreach (MobileParty attachedParty in (List<MobileParty>) MobileParty.MainParty.Army.LeaderParty.AttachedParties)
          ofRegularMembers += attachedParty.Party.NumberOfRegularMembers;
      }
      if (forTryingToGetAway < 0 || ofRegularMembers < forTryingToGetAway)
      {
        args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
        args.IsEnabled = false;
      }
      return true;
    }

    private void game_menu_leave_soldiers_behind_on_init(MenuCallbackArgs args)
    {
      Hero withHighestSkill = MobilePartyHelper.GetHeroWithHighestSkill(MobileParty.MainParty, DefaultSkills.Tactics);
      MBTextManager.SetTextVariable("HIGHEST_TACTICS_SKILL", withHighestSkill != null ? withHighestSkill.GetSkillValue(DefaultSkills.Tactics) : 0);
      MBTextManager.SetTextVariable("HIGHEST_TACTICS_SKILLED_MEMBER", withHighestSkill == null || withHighestSkill == Hero.MainHero ? GameTexts.FindText("str_you") : withHighestSkill.Name, false);
      MBTextManager.SetTextVariable("NEEEDED_MEN_COUNT", this._intEncounterVariable);
      MBTextManager.SetTextVariable("SOLDIER_OR_SOLDIERS", this._intEncounterVariable <= 1 ? GameTexts.FindText("str_soldier") : GameTexts.FindText("str_soldiers"), false);
    }

    public static void game_request_entry_to_castle_approved_continue_on_consequence(
      MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("castle");
    }

    public static bool game_request_entry_to_castle_approved_continue_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    public static void game_request_entry_to_castle_rejected_continue_on_consequence(
      MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("castle_outside");
    }

    public static void menu_castle_entry_denied_on_init(MenuCallbackArgs args)
    {
    }

    private void game_menu_encounter_leave_your_soldiers_behind_accept_on_consequence(
      MenuCallbackArgs args)
    {
      PlayerEncounter.SacrificeTroops(this._intEncounterVariable, out this._getAwayCasualties, out this._getAwayLostBaggage);
      CampaignEventDispatcher.Instance.OnPlayerDesertedBattle(this._intEncounterVariable);
      if (MobileParty.MainParty.BesiegerCamp != null)
        MobileParty.MainParty.BesiegerCamp = (BesiegerCamp) null;
      if (Campaign.Current.CurrentMenuContext != null)
        GameMenu.SwitchToMenu("try_to_get_away_debrief");
      else
        GameMenu.ActivateGameMenu("try_to_get_away_debrief");
    }

    private void game_menu_get_away_debrief_on_init(MenuCallbackArgs args)
    {
      TextObject text = GameTexts.FindText("str_STR1_space_STR2");
      if (this._getAwayCasualties != (TroopRoster) null)
      {
        TextObject variable;
        if (this._getAwayCasualties.Count > 0)
        {
          variable = new TextObject("{=NhHzgs5e}When, after some time your forces regroup, you take a quick tally of your troops only to see you have lost: {CASUALTIES}.");
          variable.SetTextVariable("CASUALTIES", PartyBaseHelper.PrintRegularTroopCategories(this._getAwayCasualties));
        }
        else
          variable = new TextObject("{=bXzAluln}When, after some time your forces regroup, you take a quick tally of your troops to see that your forces are intact.");
        text.SetTextVariable("STR1", variable);
      }
      if (this._getAwayLostBaggage != null)
      {
        TextObject variable = TextObject.Empty;
        if (this._getAwayLostBaggage.Count > 0)
        {
          variable = new TextObject("{=mrjz1ka4}And in your lost baggage you had: {LOST_BAGGAGE}.");
          variable.SetTextVariable("LOST_BAGGAGE", PartyBaseHelper.PrintSummarisedItemRoster(this._getAwayLostBaggage));
        }
        text.SetTextVariable("STR2", variable);
      }
      MBTextManager.SetTextVariable("CASUALTIES_AND_LOST_BAGGAGE", text, false);
    }

    private bool game_menu_try_to_get_away_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private bool game_menu_try_to_get_away_reject_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private bool game_menu_try_to_get_away_accept_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_try_to_get_away_end(MenuCallbackArgs args)
    {
      foreach (MapEventParty mapEventParty in (List<MapEventParty>) PlayerEncounter.Battle.PartiesOnSide(BattleSideEnum.Defender))
      {
        if (mapEventParty.Party.MobileParty != null)
        {
          if (mapEventParty.Party.MobileParty.BesiegerCamp != null)
            mapEventParty.Party.MobileParty.BesiegerCamp = (BesiegerCamp) null;
          if (mapEventParty.Party.MobileParty.CurrentSettlement != null && mapEventParty.Party == PartyBase.MainParty)
            LeaveSettlementAction.ApplyForParty(mapEventParty.Party.MobileParty);
        }
      }
      PlayerEncounter.Battle.DiplomaticallyFinished = true;
      PlayerEncounter.ProtectPlayerSide();
      PlayerEncounter.Finish();
    }

    private bool game_menu_town_besiege_continue_siege_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      PartyBase encounteredParty = PlayerEncounter.EncounteredParty;
      if (encounteredParty == null)
        return false;
      MapEvent encounteredBattle = PlayerEncounter.EncounteredBattle;
      return encounteredBattle != null && encounteredBattle.GetLeaderParty(PartyBase.MainParty.Side) == PartyBase.MainParty && encounteredParty.IsSettlement && encounteredParty.Settlement.IsFortification && FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, encounteredParty.MapFaction) && encounteredParty.Settlement.IsUnderSiege && encounteredParty.Settlement.CurrentSiegeState == Settlement.SiegeState.OnTheWalls;
    }

    private void game_menu_town_besiege_continue_siege_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Battle != null)
        PlayerEncounter.Finish();
      PlayerSiege.StartSiegePreparation();
    }

    private bool game_menu_village_hostile_action_on_condition(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement == null || !Settlement.CurrentSettlement.IsVillage)
        return false;
      args.optionLeaveType = GameMenuOption.LeaveType.Raid;
      MapEvent battle = PlayerEncounter.Battle;
      return PartyBase.MainParty.Side == BattleSideEnum.Attacker && !battle.PartiesOnSide(BattleSideEnum.Defender).Any<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party.NumberOfHealthyMembers > 0));
    }

    private void game_menu_village_raid_no_resist_on_consequence(MenuCallbackArgs args)
    {
      BeHostileAction.ApplyEncounterHostileAction(PartyBase.MainParty, Settlement.CurrentSettlement.Party);
      if (PlayerEncounter.Current == null)
        return;
      if (PlayerEncounter.InsideSettlement)
        PlayerEncounter.LeaveSettlement();
      GameMenu.ActivateGameMenu("raiding_village");
    }

    private void game_menu_village_force_supplies_no_resist_loot_on_consequence(
      MenuCallbackArgs args)
    {
      BeHostileAction.ApplyMinorCoercionHostileAction(PartyBase.MainParty, Settlement.CurrentSettlement.Party);
      GameMenu.ActivateGameMenu("force_supplies_village");
    }

    private void game_menu_village_force_volunteers_no_resist_loot_on_consequence(
      MenuCallbackArgs args)
    {
      BeHostileAction.ApplyMajorCoercionHostileAction(PartyBase.MainParty, Settlement.CurrentSettlement.Party);
      GameMenu.ActivateGameMenu("force_volunteers_village");
    }

    private void game_menu_taken_prisoner_on_init(MenuCallbackArgs args)
    {
    }

    private bool game_menu_taken_prisoner_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_taken_prisoner_continue_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.ExitToLast();
    }

    private void game_menu_encounter_meeting_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Current != null && (PlayerEncounter.Battle != null && PlayerEncounter.Battle.AttackerSide.LeaderParty != PartyBase.MainParty && PlayerEncounter.Battle.DefenderSide.LeaderParty != PartyBase.MainParty || PlayerEncounter.MeetingDone))
      {
        if (PlayerEncounter.LeaveEncounter)
        {
          PlayerEncounter.Finish();
        }
        else
        {
          if (PlayerEncounter.Battle == null)
            PlayerEncounter.StartBattle();
          if (PlayerEncounter.BattleChallenge)
            GameMenu.SwitchToMenu("duel_starter_menu");
          else
            GameMenu.SwitchToMenu("encounter");
        }
      }
      else
        PlayerEncounter.DoMeeting();
    }

    private void VillageOutsideOnInit(MenuCallbackArgs args) => GameMenu.SwitchToMenu("village");

    private void game_menu_town_outside_on_init(MenuCallbackArgs args)
    {
      Settlement encounterSettlement = PlayerEncounter.EncounterSettlement;
      args.MenuTitle = encounterSettlement.Name;
      TextObject empty = TextObject.Empty;
      Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterSettlement(encounterSettlement, out this._accessDetails);
      TextObject text;
      switch (this._accessDetails.AccessLevel)
      {
        case SettlementAccessModel.AccessLevel.NoAccess:
          if (this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.HostileFaction)
          {
            if (encounterSettlement.InRebelliousState)
            {
              text = GameTexts.FindText("str_gate_down_enemy_text_castle_low_loyalty");
              text.SetTextVariable("FACTION_INFORMAL_NAME", encounterSettlement.MapFaction.InformalName);
              break;
            }
            text = GameTexts.FindText("str_gate_down_enemy_text_castle");
            break;
          }
          if (this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.CrimeRating)
          {
            text = GameTexts.FindText("str_gate_down_criminal_text");
            text.SetTextVariable("FACTION", Settlement.CurrentSettlement.MapFaction.Name);
            break;
          }
          goto default;
        case SettlementAccessModel.AccessLevel.LimitedAccess:
          if (this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.CrimeRating)
          {
            text = GameTexts.FindText("str_gate_down_criminal_text");
            text.SetTextVariable("FACTION", Settlement.CurrentSettlement.MapFaction.Name);
            break;
          }
          goto default;
        default:
          if (encounterSettlement.InRebelliousState)
          {
            text = GameTexts.FindText("str_settlement_not_allowed_text_low_loyalty");
            text.SetTextVariable("FACTION_INFORMAL_NAME", encounterSettlement.MapFaction.InformalName);
            break;
          }
          text = GameTexts.FindText("str_settlement_not_allowed_text");
          break;
      }
      text.SetTextVariable("SETTLEMENT_NAME", encounterSettlement.EncyclopediaLinkWithName);
      text.SetTextVariable("FACTION_TERM", encounterSettlement.MapFaction.EncyclopediaLinkWithName);
      MBTextManager.SetTextVariable("TOWN_TEXT", text, false);
      if (this._accessDetails.PreliminaryActionObligation == SettlementAccessModel.PreliminaryActionObligation.Optional && this._accessDetails.PreliminaryActionType == SettlementAccessModel.PreliminaryActionType.FaceCharges)
      {
        GameMenu.SwitchToMenu("town_inside_criminal");
      }
      else
      {
        if (this._accessDetails.AccessLevel != SettlementAccessModel.AccessLevel.FullAccess || this._accessDetails.AccessMethod != SettlementAccessModel.AccessMethod.Direct)
          return;
        GameMenu.SwitchToMenu("town");
      }
    }

    private void game_menu_fortification_high_crime_rating_on_init(MenuCallbackArgs args)
    {
      TextObject text = new TextObject("{=DdeIg5hz}As you move through the streets, you hear whispers of an upcoming war between your faction and {SETTLEMENT_FACTION}. Upon hearing this, you slink away without attracting any suspicion.");
      text.SetTextVariable("SETTLEMENT_FACTION", Settlement.CurrentSettlement.MapFaction.EncyclopediaLinkWithName);
      MBTextManager.SetTextVariable("FORTIFICATION_CRIME_RATING_TEXT", text, false);
    }

    private bool game_menu_fortification_high_crime_rating_continue_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_army_left_settlement_due_to_war_on_init(MenuCallbackArgs args)
    {
      TextObject text = new TextObject("{=Nsb6SD4y}After receiving word of an upcoming war against {ENEMY_FACTION}, {ARMY_NAME} decided to leave {SETTLEMENT_NAME}.");
      text.SetTextVariable("ENEMY_FACTION", Settlement.CurrentSettlement.MapFaction.EncyclopediaLinkWithName);
      text.SetTextVariable("ARMY_NAME", MobileParty.MainParty.Army.Name);
      text.SetTextVariable("SETTLEMENT_NAME", Settlement.CurrentSettlement.EncyclopediaLinkWithName);
      MBTextManager.SetTextVariable("ARMY_LEFT_SETTLEMENT_DUE_TO_WAR_TEXT", text, false);
    }

    private bool game_menu_army_left_settlement_due_to_war_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_castle_outside_on_init(MenuCallbackArgs args)
    {
      Settlement encounterSettlement = PlayerEncounter.EncounterSettlement;
      args.MenuTitle = encounterSettlement.Name;
      Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterSettlement(encounterSettlement, out this._accessDetails);
      TextObject empty = TextObject.Empty;
      TextObject textObject;
      switch (this._accessDetails.AccessLevel)
      {
        case SettlementAccessModel.AccessLevel.NoAccess:
          if (this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.HostileFaction)
          {
            textObject = GameTexts.FindText("str_gate_down_enemy_text_castle");
            break;
          }
          if (this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.CrimeRating)
          {
            empty.SetTextVariable("FACTION", Settlement.CurrentSettlement.MapFaction.Name);
            textObject = GameTexts.FindText("str_gate_down_criminal_text");
            break;
          }
          textObject = GameTexts.FindText("str_settlement_not_allowed_text");
          break;
        case SettlementAccessModel.AccessLevel.LimitedAccess:
          if (this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.CrimeRating)
          {
            empty.SetTextVariable("FACTION", Settlement.CurrentSettlement.MapFaction.Name);
            textObject = GameTexts.FindText("str_gate_down_criminal_text");
            break;
          }
          goto default;
        default:
          textObject = encounterSettlement.OwnerClan != Hero.MainHero.Clan ? GameTexts.FindText("str_castle_text_1") : GameTexts.FindText("str_castle_text_yours");
          break;
      }
      encounterSettlement.OwnerClan.Leader.SetPropertiesToTextObject(textObject, "LORD");
      textObject.SetTextVariable("FACTION_TERM", encounterSettlement.MapFaction.EncyclopediaLinkWithName);
      textObject.SetTextVariable("SETTLEMENT_NAME", encounterSettlement.EncyclopediaLinkWithName);
      MBTextManager.SetTextVariable("TOWN_TEXT", textObject, false);
      if (this._accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.FullAccess && (this._accessDetails.AccessMethod == SettlementAccessModel.AccessMethod.Direct || this._playerIsAlreadyInCastle && this._accessDetails.AccessMethod == SettlementAccessModel.AccessMethod.ByRequest))
        GameMenu.SwitchToMenu("castle");
      else
        this._playerIsAlreadyInCastle = false;
    }

    private void game_menu_army_left_settlement_due_to_war_on_consequence(MenuCallbackArgs args)
    {
      MobileParty leaderParty = MobileParty.MainParty.Army.LeaderParty;
      Settlement currentSettlement = Settlement.CurrentSettlement;
      LeaveSettlementAction.ApplyForParty(leaderParty);
      SetPartyAiAction.GetActionForPatrollingAroundSettlement(leaderParty, currentSettlement);
    }

    private void game_menu_town_outside_approach_gates_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("town_guard");
    }

    private bool game_menu_castle_outside_approach_gates_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      return true;
    }

    private void game_menu_castle_outside_approach_gates_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("castle_guard");
    }

    private void game_menu_fortification_high_crime_rating_continue_on_consequence(
      MenuCallbackArgs args)
    {
      PlayerEncounter.Finish();
    }

    private bool outside_menu_criminal_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      return this._accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.LimitedAccess && this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.CrimeRating;
    }

    private void outside_menu_criminal_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("town_discuss_criminal_surrender");
    }

    private void caught_outside_menu_criminal_on_consequence(MenuCallbackArgs args)
    {
      ChangeCrimeRatingAction.Apply(Settlement.CurrentSettlement.MapFaction, 10f);
      GameMenu.SwitchToMenu("town_inside_criminal");
    }

    private bool caught_outside_menu_enemy_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Surrender;
      return Hero.MainHero.MapFaction.IsAtWarWith(Settlement.CurrentSettlement.MapFaction);
    }

    private void caught_outside_menu_enemy_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("taken_prisoner");
    }

    private bool game_menu_town_disguise_yourself_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.SneakIn;
      MBTextManager.SetTextVariable("SNEAK_CHANCE", MathF.Round(Campaign.Current.Models.DisguiseDetectionModel.CalculateDisguiseDetectionProbability(Settlement.CurrentSettlement) * 100f));
      return this._accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.LimitedAccess && this._accessDetails.LimitedAccessSolution == SettlementAccessModel.LimitedAccessSolution.Disguise;
    }

    private void game_menu_town_disguise_yourself_on_consequence(MenuCallbackArgs args)
    {
      int num = (double) Campaign.Current.Models.DisguiseDetectionModel.CalculateDisguiseDetectionProbability(Settlement.CurrentSettlement) > (double) MBRandom.RandomFloat ? 1 : 0;
      SkillLevelingManager.OnMainHeroDisguised(num != 0);
      Campaign.Current.IsMainHeroDisguised = true;
      if (num != 0)
        GameMenu.SwitchToMenu("menu_sneak_into_town_succeeded");
      else
        GameMenu.SwitchToMenu("menu_sneak_into_town_caught");
    }

    private void game_menu_castle_town_sneak_grappling_hook_on_consequence(MenuCallbackArgs args)
    {
      bool flag = false;
      ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>("grappling_hook");
      for (int index = 0; index < PartyBase.MainParty.ItemRoster.Count; ++index)
      {
        if (PartyBase.MainParty.ItemRoster.GetElementCopyAtIndex(index).EquipmentElement.Item == itemObject)
        {
          flag = true;
          break;
        }
      }
      if (flag)
      {
        Campaign.Current.GameMenuManager.SetNextMenu("town_stealth");
        PlayerEncounter.LocationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("center"));
      }
      else
        MBInformationManager.AddQuickInformation(new TextObject("{=!}TODO You have not any grappling hook!"));
    }

    private bool game_menu_town_sneak_grappling_hook_on_condition(MenuCallbackArgs args)
    {
      return Campaign.Current.IsNight;
    }

    private bool game_menu_town_town_besiege_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.BesiegeTown;
      this.CheckFortificationAttackableHonorably(args);
      return FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, Settlement.CurrentSettlement.MapFaction) && PartyBase.MainParty.NumberOfHealthyMembers > 0 && !Settlement.CurrentSettlement.IsUnderSiege;
    }

    private void leave_siege_after_attack_on_consequence(MenuCallbackArgs args)
    {
      MobileParty.MainParty.BesiegerCamp = (BesiegerCamp) null;
      GameMenu.ExitToLast();
    }

    private bool leave_siege_after_attack_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty;
    }

    private bool leave_army_after_attack_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty;
    }

    private void leave_army_after_attack_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Finish();
      else
        GameMenu.ExitToLast();
      if (Settlement.CurrentSettlement != null)
      {
        LeaveSettlementAction.ApplyForParty(MobileParty.MainParty);
        PartyBase.MainParty.SetVisualAsDirty();
      }
      MobileParty.MainParty.Army = (Army) null;
    }

    private void game_menu_town_town_besiege_on_consequence(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Finish();
      Campaign.Current.SiegeEventManager.StartSiegeEvent(currentSettlement, MobileParty.MainParty);
      PlayerSiege.StartPlayerSiege(BattleSideEnum.Attacker);
      PlayerSiege.StartSiegePreparation();
    }

    private void continue_siege_after_attack_on_consequence(MenuCallbackArgs args)
    {
      PlayerSiege.StartSiegePreparation();
    }

    private bool continue_siege_after_attack_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private bool game_menu_town_outside_cheat_enter_on_condition(MenuCallbackArgs args)
    {
      return Game.Current.IsDevelopmentMode;
    }

    private void game_menu_town_outside_enter_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("town");
      PlayerEncounter.LocationEncounter.IsInsideOfASettlement = true;
    }

    private bool game_menu_castle_outside_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void game_menu_castle_outside_leave_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.Finish();
    }

    private bool game_menu_town_guard_request_shelter_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      if (this._accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.NoAccess && this._accessDetails.AccessLimitationReason == SettlementAccessModel.AccessLimitationReason.CrimeRating)
      {
        args.Tooltip = new TextObject("{=03DZpTYi}You are a wanted criminal.");
        args.IsEnabled = false;
      }
      List<Location> list = Settlement.CurrentSettlement.LocationComplex.FindAll((Func<string, bool>) (x => x == "lordshall" || x == "prison")).ToList<Location>();
      MenuHelper.SetIssueAndQuestDataForLocations(args, list);
      return true;
    }

    private void game_menu_request_entry_to_castle_on_consequence(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (this._accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.FullAccess)
      {
        this._playerIsAlreadyInCastle = true;
        GameMenu.SwitchToMenu("menu_castle_entry_granted");
      }
      else
        GameMenu.SwitchToMenu("menu_castle_entry_denied");
    }

    private bool game_menu_request_meeting_someone_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      List<Location> list = Settlement.CurrentSettlement.LocationComplex.FindAll((Func<string, bool>) (x => x == "lordshall")).ToList<Location>();
      MenuHelper.SetIssueAndQuestDataForLocations(args, list);
      bool disableOption;
      TextObject disabledText;
      int num = Campaign.Current.Models.SettlementAccessModel.IsRequestMeetingOptionAvailable(Settlement.CurrentSettlement, out disableOption, out disabledText) ? 1 : 0;
      args.Tooltip = disabledText;
      args.IsEnabled = !disableOption;
      return num != 0;
    }

    private void game_menu_request_meeting_someone_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("request_meeting");
    }

    private void game_menu_town_guard_back_on_consequence(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.IsCastle)
        GameMenu.SwitchToMenu("castle_outside");
      else
        GameMenu.SwitchToMenu("town_outside");
    }

    private void game_menu_town_menu_request_meeting_on_init(MenuCallbackArgs args)
    {
      List<Hero> heroesToMeetInTown = TownHelpers.GetHeroesToMeetInTown(Settlement.CurrentSettlement);
      args.MenuContext.SetRepeatObjectList((IEnumerable<object>) heroesToMeetInTown);
    }

    private bool game_menu_request_meeting_with_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      if (!(args.MenuContext.GetCurrentRepeatableObject() is Hero repeatableObject))
        return false;
      StringHelpers.SetCharacterProperties("HERO_TO_MEET", repeatableObject.CharacterObject);
      MenuHelper.SetIssueAndQuestDataForHero(args, repeatableObject);
      return true;
    }

    private void game_menu_town_menu_request_meeting_with_besiegers_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (currentSettlement.SiegeEvent == null)
      {
        if (MobileParty.MainParty.BesiegerCamp == null)
          PlayerSiege.ClosePlayerSiege();
        if (currentSettlement.IsTown)
        {
          GameMenu.SwitchToMenu("town");
          return;
        }
        if (currentSettlement.IsCastle)
        {
          GameMenu.SwitchToMenu("castle");
          return;
        }
        Debug.FailedAssert("non-fortification under siege", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\EncounterGameMenuBehavior.cs", nameof (game_menu_town_menu_request_meeting_with_besiegers_on_init), 2435);
      }
      List<MobileParty> mobilePartyList = new List<MobileParty>();
      if (currentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Army != null)
        mobilePartyList.Add(currentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Army.LeaderParty);
      else
        mobilePartyList.Add(currentSettlement.SiegeEvent.BesiegerCamp.LeaderParty);
      args.MenuContext.SetRepeatObjectList((IEnumerable<object>) mobilePartyList.AsReadOnly());
    }

    private bool game_menu_request_meeting_with_besiegers_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (currentSettlement.SiegeEvent == null)
        return false;
      StringHelpers.SetCharacterProperties("PARTY_LEADER", (currentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Army != null ? currentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Army.LeaderParty : currentSettlement.SiegeEvent.BesiegerCamp.LeaderParty).LeaderHero.CharacterObject);
      return true;
    }

    private string GetMeetingScene(out string sceneLevel)
    {
      string sceneId = GameSceneDataManager.Instance.MeetingScenes.GetRandomElementWithPredicate<MeetingSceneData>((Func<MeetingSceneData, bool>) (x => x.Culture == Settlement.CurrentSettlement.Culture)).SceneID;
      if (string.IsNullOrEmpty(sceneId))
        sceneId = GameSceneDataManager.Instance.MeetingScenes.GetRandomElement<MeetingSceneData>().SceneID;
      sceneLevel = "";
      if (Settlement.CurrentSettlement.IsFortification)
        sceneLevel = Campaign.Current.Models.LocationModel.GetUpgradeLevelTag(Settlement.CurrentSettlement.Town.GetWallLevel());
      return sceneId;
    }

    private void game_menu_request_meeting_with_besiegers_on_consequence(MenuCallbackArgs args)
    {
      string sceneLevel;
      string meetingScene = this.GetMeetingScene(out sceneLevel);
      MobileParty selectedObject = (MobileParty) args.MenuContext.GetSelectedObject();
      CampaignMission.OpenConversationMission(new ConversationCharacterData(Hero.MainHero.CharacterObject, PartyBase.MainParty, true), new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(selectedObject.Party), selectedObject.Party), meetingScene, sceneLevel);
    }

    private void game_menu_request_meeting_with_on_consequence(MenuCallbackArgs args)
    {
      string sceneLevel;
      string meetingScene = this.GetMeetingScene(out sceneLevel);
      Hero selectedObject = (Hero) args.MenuContext.GetSelectedObject();
      CampaignMission.OpenConversationMission(new ConversationCharacterData(Hero.MainHero.CharacterObject, PartyBase.MainParty), new ConversationCharacterData(selectedObject.CharacterObject, selectedObject.PartyBelongedTo?.Party, true), meetingScene, sceneLevel);
    }

    private bool game_meeting_town_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return Settlement.CurrentSettlement.IsTown;
    }

    private bool game_meeting_castle_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return Settlement.CurrentSettlement.IsCastle;
    }

    private void game_menu_request_meeting_town_leave_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerSiege.PlayerSiegeEvent != null && PlayerSiege.PlayerSiegeEvent.BesiegedSettlement == Settlement.CurrentSettlement)
      {
        GameMenu.ExitToLast();
        PlayerEncounter.LeaveEncounter = false;
        if (Hero.MainHero.CurrentSettlement != null && PlayerSiege.PlayerSiegeEvent == null)
          PlayerEncounter.LeaveSettlement();
        if (PlayerSiege.PlayerSiegeEvent.BesiegedSettlement.SiegeEvent != null)
          PlayerSiege.StartSiegePreparation();
        else
          PlayerEncounter.Finish();
      }
      else
        GameMenu.SwitchToMenu("town_guard");
    }

    private void game_menu_request_meeting_castle_leave_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerSiege.PlayerSiegeEvent != null && PlayerSiege.PlayerSiegeEvent.BesiegedSettlement == Settlement.CurrentSettlement)
      {
        GameMenu.ExitToLast();
        PlayerEncounter.LeaveEncounter = false;
        if (Hero.MainHero.CurrentSettlement != null && PlayerSiege.PlayerSiegeEvent == null)
          PlayerEncounter.LeaveSettlement();
        if (PlayerSiege.PlayerSiegeEvent.BesiegedSettlement.SiegeEvent != null)
          PlayerSiege.StartSiegePreparation();
        else
          PlayerEncounter.Finish();
      }
      else
        GameMenu.SwitchToMenu("castle_guard");
    }

    private void game_menu_village_loot_complete_on_init(MenuCallbackArgs args)
    {
      PlayerEncounter.Update();
    }

    private void game_menu_village_loot_complete_continue_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.Finish();
    }

    private bool game_menu_village_loot_complete_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_raid_interrupted_continue_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("encounter");
    }

    private bool game_menu_raid_interrupted_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void break_out_menu_accept_on_consequence(MenuCallbackArgs args)
    {
      BreakInOutBesiegedSettlementAction.ApplyBreakOut(out this._breakInOutCasualties, out this._breakInOutArmyCasualties);
      GameMenu.SwitchToMenu("break_out_debrief_menu");
    }

    private bool break_out_menu_accept_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.LeaveTroopsAndFlee;
      MobileParty mainParty = MobileParty.MainParty;
      SiegeEvent siegeEvent = Settlement.CurrentSettlement.SiegeEvent;
      int besiegedSettlement = Campaign.Current.Models.TroopSacrificeModel.GetLostTroopCountForBreakingOutOfBesiegedSettlement(mainParty, siegeEvent);
      Army army = mainParty.Army;
      int num = army != null ? army.TotalRegularCount : mainParty.MemberRoster.TotalRegulars;
      if (besiegedSettlement > num)
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
      }
      return true;
    }

    private void break_in_menu_accept_on_consequence(MenuCallbackArgs args)
    {
      BreakInOutBesiegedSettlementAction.ApplyBreakIn(out this._breakInOutCasualties, out this._breakInOutArmyCasualties);
      GameMenu.SwitchToMenu("break_in_debrief_menu");
    }

    private bool break_in_menu_accept_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.LeaveTroopsAndFlee;
      MobileParty mainParty = MobileParty.MainParty;
      SiegeEvent siegeEvent = Settlement.CurrentSettlement.SiegeEvent;
      int besiegedSettlement = siegeEvent != null ? Campaign.Current.Models.TroopSacrificeModel.GetLostTroopCountForBreakingInBesiegedSettlement(mainParty, siegeEvent) : 0;
      Army army = mainParty.Army;
      int num = army != null ? army.TotalRegularCount : mainParty.MemberRoster.TotalRegulars;
      if (besiegedSettlement > num)
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
      }
      return true;
    }

    private void break_out_menu_reject_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerSiege.PlayerSiegeEvent != null)
        GameMenu.SwitchToMenu("menu_siege_strategies");
      else
        GameMenu.SwitchToMenu("encounter_interrupted_siege_preparations");
    }

    private bool break_out_menu_reject_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      return true;
    }

    private void break_in_menu_reject_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("join_siege_event");
    }

    private bool break_in_menu_reject_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      return true;
    }

    private void break_in_out_menu_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Current != null && PlayerEncounter.EncounterSettlement.Party.SiegeEvent == null)
      {
        PlayerEncounter.Finish();
      }
      else
      {
        int besiegedSettlement = Campaign.Current.Models.TroopSacrificeModel.GetLostTroopCountForBreakingInBesiegedSettlement(MobileParty.MainParty, Settlement.CurrentSettlement.SiegeEvent);
        TextObject text = args.MenuContext.GameMenu.GetText();
        text.SetTextVariable("POSSIBLE_CASUALTIES", besiegedSettlement);
        text.SetTextVariable("PLURAL", besiegedSettlement > 1 ? 1 : 0);
      }
    }

    private void break_in_out_debrief_menu_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Current != null && PlayerEncounter.EncounterSettlement.Party.SiegeEvent == null)
      {
        PlayerEncounter.Finish();
      }
      else
      {
        TextObject text = args.MenuContext.GameMenu.GetText();
        text.SetTextVariable("CASUALTIES", PartyBaseHelper.PrintRegularTroopCategories(this._breakInOutCasualties));
        if (this._breakInOutArmyCasualties > 0)
        {
          TextObject variable = new TextObject("{=hxnCr8bm} Other parties of your army lost {NUMBER} {?PLURAL}troops{?}troop{\\?}.");
          variable.SetTextVariable("NUMBER", this._breakInOutArmyCasualties);
          variable.SetTextVariable("PLURAL", this._breakInOutArmyCasualties > 1 ? 1 : 0);
          text.SetTextVariable("OTHER_CASUALTIES", variable);
        }
        else
          text.SetTextVariable("OTHER_CASUALTIES", TextObject.Empty);
      }
    }

    private void break_out_debrief_continue_on_consequence(MenuCallbackArgs args)
    {
      Settlement besiegedSettlement = PlayerSiege.PlayerSiegeEvent.BesiegedSettlement;
      PlayerEncounter.Finish();
      besiegedSettlement.Party.SetVisualAsDirty();
      if (PlayerSiege.PlayerSiegeEvent != null)
        PlayerSiege.ClosePlayerSiege();
      PlayerEncounter.ProtectPlayerSide();
    }

    private bool break_out_debrief_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private bool break_in_debrief_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void break_in_debrief_continue_on_consequence(MenuCallbackArgs args)
    {
      if (Hero.MainHero.CurrentSettlement == null)
        PlayerEncounter.EnterSettlement();
      if (PlayerSiege.PlayerSiegeEvent == null)
        PlayerSiege.StartPlayerSiege(BattleSideEnum.Defender);
      if (Hero.MainHero.CurrentSettlement.Party.MapEvent != null)
        GameMenu.SwitchToMenu("join_encounter");
      else
        PlayerSiege.StartSiegePreparation();
    }

    [GameMenuInitializationHandler("army_encounter")]
    [GameMenuInitializationHandler("game_menu_army_talk_to_other_members")]
    private static void army_encounter_background_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.EncounteredMobileParty != null && PlayerEncounter.EncounteredMobileParty.Army != null)
        args.MenuContext.SetBackgroundMeshName(PlayerEncounter.EncounteredMobileParty.Army.Kingdom.Culture.EncounterBackgroundMesh);
      else
        args.MenuContext.SetBackgroundMeshName("wait_fallback");
    }

    [GameMenuInitializationHandler("castle_outside")]
    [GameMenuInitializationHandler("town_outside")]
    [GameMenuInitializationHandler("fortification_crime_rating")]
    [GameMenuInitializationHandler("village_outside")]
    [GameMenuInitializationHandler("menu_sneak_into_town_succeeded")]
    private static void encounter_menu_ui_castle_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      args.MenuContext.SetBackgroundMeshName(currentSettlement.SettlementComponent.WaitMeshName);
    }

    [GameMenuInitializationHandler("menu_castle_taken")]
    [GameMenuInitializationHandler("menu_settlement_taken")]
    private static void encounter_menu_settlement_taken_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("encounter_win");
    }

    [GameMenuInitializationHandler("encounter_meeting")]
    private static void game_menu_encounter_meeting_background_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(PlayerEncounter.EncounteredParty.MapFaction.Culture.EncounterBackgroundMesh);
    }

    [GameMenuInitializationHandler("menu_castle_entry_denied")]
    private static void game_menu_castle_guard_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("encounter_guards");
    }

    [GameMenuInitializationHandler("break_in_menu")]
    [GameMenuInitializationHandler("break_in_debrief_menu")]
    [GameMenuInitializationHandler("break_out_menu")]
    [GameMenuInitializationHandler("break_out_debrief_menu")]
    [GameMenuInitializationHandler("continue_siege_after_attack")]
    [GameMenuInitializationHandler("siege_attacker_defeated")]
    [GameMenuInitializationHandler("siege_attacker_left")]
    private static void game_menu_siege_background_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("wait_besieging");
    }
  }
}
