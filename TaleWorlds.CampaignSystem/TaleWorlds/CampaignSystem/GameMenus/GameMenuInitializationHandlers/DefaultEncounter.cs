// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameMenus.GameMenuInitializationHandlers.DefaultEncounter
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameMenus.GameMenuInitializationHandlers
{
  public class DefaultEncounter
  {
    [GameMenuInitializationHandler("taken_prisoner")]
    [GameMenuInitializationHandler("menu_captivity_end_no_more_enemies")]
    [GameMenuInitializationHandler("menu_captivity_end_by_ally_party_saved")]
    [GameMenuInitializationHandler("menu_captivity_end_by_party_removed")]
    [GameMenuInitializationHandler("menu_captivity_end_wilderness_escape")]
    [GameMenuInitializationHandler("menu_escape_captivity_during_battle")]
    [GameMenuInitializationHandler("menu_released_after_battle")]
    [GameMenuInitializationHandler("menu_captivity_end_propose_ransom_wilderness")]
    public static void game_menu_taken_prisoner_ui_on_init(MenuCallbackArgs args)
    {
      if (Hero.MainHero.IsFemale)
        args.MenuContext.SetBackgroundMeshName("wait_captive_female");
      else
        args.MenuContext.SetBackgroundMeshName("wait_captive_male");
    }

    [GameMenuInitializationHandler("defeated_and_taken_prisoner")]
    public static void game_menu_defeat_and_taken_prisoner_ui_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("encounter_lose");
    }

    [GameMenuInitializationHandler("menu_captivity_transfer_to_town")]
    [GameMenuInitializationHandler("menu_captivity_end_exchanged_with_prisoner")]
    [GameMenuInitializationHandler("menu_captivity_end_propose_ransom_in_prison")]
    [GameMenuInitializationHandler("menu_captivity_castle_remain")]
    [GameMenuInitializationHandler("menu_captivity_end_propose_ransom_out")]
    [GameMenuInitializationHandler("menu_captivity_end_prison_escape")]
    public static void game_menu_taken_prisoner_town_ui_on_init(MenuCallbackArgs args)
    {
      if (Hero.MainHero.IsFemale)
        args.MenuContext.SetBackgroundMeshName("wait_prisoner_female");
      else
        args.MenuContext.SetBackgroundMeshName("wait_prisoner_male");
    }

    [GameMenuInitializationHandler("e3_action_menu")]
    private static void E3ActionMenuOnInit(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("gui_bg_lord_khuzait");
    }

    [GameMenuInitializationHandler("join_encounter")]
    private static void game_menu_join_encounter_on_init(MenuCallbackArgs args)
    {
      MobileParty mobileParty = PlayerEncounter.EncounteredParty.MobileParty;
      if ((mobileParty != null ? (mobileParty.IsCaravan ? 1 : 0) : 0) != 0)
        args.MenuContext.SetBackgroundMeshName("encounter_caravan");
      else
        args.MenuContext.SetBackgroundMeshName(PlayerEncounter.EncounteredParty.MapFaction.Culture.EncounterBackgroundMesh);
    }

    [GameMenuInitializationHandler("encounter")]
    [GameMenuInitializationHandler("try_to_get_away")]
    [GameMenuInitializationHandler("try_to_get_away_debrief")]
    private static void game_menu_encounter_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      bool flag = false;
      if (PlayerEncounter.Battle != null && PlayerEncounter.Current.FirstInit)
        PlayerEncounter.Current.FirstInit = false;
      if (currentSettlement != null && currentSettlement.IsVillage && PlayerEncounter.Battle != null)
        args.MenuContext.SetBackgroundMeshName("wait_ambush");
      else if (PlayerEncounter.EncounteredParty != null && PlayerEncounter.EncounteredParty.IsMobile)
      {
        if (PlayerEncounter.EncounteredParty.MobileParty.IsVillager)
          args.MenuContext.SetBackgroundMeshName("encounter_peasant");
        else if (PlayerEncounter.EncounteredParty.MobileParty.IsCaravan)
          args.MenuContext.SetBackgroundMeshName("encounter_caravan");
        else if (PlayerEncounter.EncounteredParty.MapFaction == null)
        {
          CultureObject cultureObject = Game.Current.ObjectManager.GetObject<CultureObject>("neutral_culture");
          args.MenuContext.SetBackgroundMeshName(cultureObject.EncounterBackgroundMesh);
        }
        else
          args.MenuContext.SetBackgroundMeshName(PlayerEncounter.EncounteredParty.MapFaction.Culture.EncounterBackgroundMesh);
      }
      if (PartyBase.MainParty.Side == BattleSideEnum.Defender && PartyBase.MainParty.NumberOfHealthyMembers == 0)
      {
        int num = 0;
        foreach (MapEventParty mapEventParty in (List<MapEventParty>) PartyBase.MainParty.MapEvent.PartiesOnSide(PartyBase.MainParty.Side))
        {
          if (mapEventParty.Party != PartyBase.MainParty)
            num += mapEventParty.Party.NumberOfHealthyMembers;
        }
        if (num > 0)
          MBTextManager.SetTextVariable("ENCOUNTER_TEXT", GameTexts.FindText("str_you_have_encountered_no_health_men_but_allies_has"), true);
        else
          MBTextManager.SetTextVariable("ENCOUNTER_TEXT", PartyBase.MainParty.MemberRoster.Count == 1 ? GameTexts.FindText("str_you_have_encountered_no_health_alone") : GameTexts.FindText("str_you_have_encountered_no_health_men"), true);
      }
      else if (currentSettlement != null)
      {
        if (currentSettlement.IsHideout)
          MBTextManager.SetTextVariable("ENCOUNTER_TEXT", GameTexts.FindText("str_there_are_bandits_inside"), true);
        else if (currentSettlement.IsUnderRebellionAttack())
          MBTextManager.SetTextVariable("ENCOUNTER_TEXT", GameTexts.FindText("str_there_are_rebels_inside"), true);
        else if (currentSettlement.IsVillage && PlayerEncounter.Battle != null)
        {
          int num = PlayerEncounter.Battle.InvolvedParties.Where<PartyBase>((Func<PartyBase, bool>) (party => party.Side != PartyBase.MainParty.Side)).Sum<PartyBase>((Func<PartyBase, int>) (party => party.NumberOfHealthyMembers));
          MBTextManager.SetTextVariable("SETTLEMENT", currentSettlement.Name, false);
          TextObject text;
          if (PlayerEncounter.Battle.IsRaid && num == 0)
            text = MobileParty.MainParty.MapFaction.IsAtWarWith(currentSettlement.MapFaction) ? GameTexts.FindText("str_you_have_encountered_settlement_to_raid_no_resisting_on_war") : GameTexts.FindText("str_you_have_encountered_settlement_to_raid_no_resisting_on_peace");
          else if (PlayerEncounter.Battle.IsForcingSupplies)
            text = MobileParty.MainParty.MapFaction.IsAtWarWith(currentSettlement.MapFaction) ? GameTexts.FindText("str_you_have_encountered_settlement_to_force_supplies_with_resisting_on_war") : GameTexts.FindText("str_you_have_encountered_settlement_to_force_supplies_with_resisting_on_peace");
          else if (PlayerEncounter.Battle.IsForcingVolunteers)
          {
            text = MobileParty.MainParty.MapFaction.IsAtWarWith(currentSettlement.MapFaction) ? GameTexts.FindText("str_you_have_encountered_settlement_to_force_volunteers_with_resisting_on_war") : GameTexts.FindText("str_you_have_encountered_settlement_to_force_volunteers_with_resisting_on_peace");
          }
          else
          {
            text = MobileParty.MainParty.MapFaction != currentSettlement.MapFaction ? (MobileParty.MainParty.MapFaction == PlayerEncounter.Battle.AttackerSide.MapFaction ? GameTexts.FindText("str_you_have_encountered_settlement_to_raid_with_resisting_on_war") : (!MobileParty.MainParty.MapFaction.IsAtWarWith(PlayerEncounter.Battle.AttackerSide.MapFaction) ? (MobileParty.MainParty.MapFaction.IsAtWarWith(currentSettlement.MapFaction) ? GameTexts.FindText("str_you_have_encountered_settlement_to_raid_with_resisting_on_war") : GameTexts.FindText("str_you_have_encountered_settlement_to_raid_with_resisting_on_peace")) : GameTexts.FindText("str_you_have_encountered_enemy_party_while_raiding"))) : new TextObject("{=HMt8Xo5p}{PARTY} is raiding {SETTLEMENT}. You decide to...");
            text.SetTextVariable("PARTY", PlayerEncounter.Battle.AttackerSide.LeaderParty.Name);
          }
          text.SetTextVariable("SETTLEMENT", currentSettlement.Name);
          text.SetTextVariable("KINGDOM", currentSettlement.MapFaction.IsKingdomFaction ? ((Kingdom) currentSettlement.MapFaction).EncyclopediaTitle : currentSettlement.MapFaction.Name);
          MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
        }
        else if (currentSettlement.IsFortification)
        {
          if (PlayerEncounter.Battle != null)
          {
            if (PlayerEncounter.Battle.IsSiegeAssault)
            {
              if (PlayerEncounter.EncounterSettlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
              {
                if (PlayerEncounter.CampaignBattleResult != null && PlayerEncounter.CampaignBattleResult.EnemyPulledBack && currentSettlement.CurrentSiegeState == Settlement.SiegeState.InTheLordsHall)
                  MBTextManager.SetTextVariable("ENCOUNTER_TEXT", GameTexts.FindText("str_you_have_encountered_settlement_to_siege_defenders_pulled_back"), true);
                else if (currentSettlement.CurrentSiegeState == Settlement.SiegeState.InTheLordsHall)
                {
                  MBTextManager.SetTextVariable("ENCOUNTER_TEXT", GameTexts.FindText("str_you_have_encountered_settlement_to_siege_defenders_pulled_back_2"), true);
                }
                else
                {
                  TextObject text = GameTexts.FindText("str_you_have_encountered_settlement_to_siege");
                  text.SetTextVariable("SETTLEMENT", currentSettlement.Name);
                  MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
                }
              }
              else
              {
                TextObject text = GameTexts.FindText("str_you_have_encountered_settlement_to_help_defenders_inside_settlement");
                text.SetTextVariable("SETTLEMENT", currentSettlement.Name);
                MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
              }
            }
            else if (PlayerEncounter.Battle.IsSiegeOutside)
            {
              TextObject text = GameTexts.FindText("str_you_have_encountered_PARTY");
              text.SetTextVariable("PARTY", PlayerEncounter.Battle.GetLeaderParty(PartyBase.MainParty.OpponentSide).Name);
              MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
            }
            else if (PlayerEncounter.Battle.IsSallyOut && PlayerEncounter.Battle.PlayerSide == BattleSideEnum.Attacker)
            {
              TextObject text = GameTexts.FindText("str_you_have_encountered_PARTY_sally_out");
              text.SetTextVariable("PARTY", PlayerEncounter.Battle.GetLeaderParty(PartyBase.MainParty.OpponentSide).Name);
              MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
            }
            else
            {
              TextObject text = GameTexts.FindText("str_you_have_encountered_PARTY");
              text.SetTextVariable("PARTY", PlayerEncounter.Battle.GetLeaderParty(PartyBase.MainParty.OpponentSide).Name);
              MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
            }
          }
          else
          {
            Debug.FailedAssert("settlement encounter, but there is no MapEvent, menu text will be wrong", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameMenus\\GameMenuInitializationHandlers\\DefaultEncounter.cs", nameof (game_menu_encounter_on_init), 291);
            TextObject text = GameTexts.FindText("str_you_have_encountered_settlement_to_siege");
            text.SetTextVariable("SETTLEMENT", currentSettlement.Name);
            MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
          }
        }
        else
          MBTextManager.SetTextVariable("ENCOUNTER_TEXT", GameTexts.FindText("str_you_are_trapped_by_enemies"), true);
      }
      else if (MobileParty.MainParty.MapEvent != null && PlayerEncounter.CheckIfLeadingAvaliable() && PlayerEncounter.GetLeadingHero() != Hero.MainHero)
      {
        Hero leadingHero = PlayerEncounter.GetLeadingHero();
        TextObject text = GameTexts.FindText("str_army_leader_encounter");
        text.SetTextVariable("PARTY", leadingHero.PartyBelongedTo.Name);
        text.SetTextVariable("ARMY_COMMANDER_GENDER", leadingHero.IsFemale ? 1 : 0);
        MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
      }
      else
      {
        TextObject text;
        if (Settlement.CurrentSettlement != null && PlayerEncounter.EncounteredMobileParty.BesiegedSettlement == Settlement.CurrentSettlement)
        {
          text = new TextObject("{=dGoEWaeX}The enemy has begun their assault!");
          flag = true;
        }
        else if (PlayerEncounter.EncounteredMobileParty.Army != null)
        {
          if (PlayerEncounter.EncounteredMobileParty.Army.LeaderParty == PlayerEncounter.EncounteredMobileParty)
          {
            text = GameTexts.FindText("str_you_have_encountered_ARMY");
            text.SetTextVariable("ARMY", PlayerEncounter.EncounteredMobileParty.Army.Name);
          }
          else
          {
            text = GameTexts.FindText("str_you_have_encountered_PARTY");
            text.SetTextVariable("PARTY", MapEvent.PlayerMapEvent.GetLeaderParty(PartyBase.MainParty.OpponentSide).Name);
          }
        }
        else if (PlayerEncounter.EncounteredMobileParty.MapFaction != MobileParty.MainParty.MapFaction && PlayerEncounter.EncounteredMobileParty.MapFaction != null && !MobileParty.MainParty.MapFaction.IsAtWarWith(PlayerEncounter.EncounteredMobileParty.MapFaction) && !Campaign.Current.Models.EncounterModel.IsEncounterExemptFromHostileActions(PartyBase.MainParty, PlayerEncounter.EncounteredParty))
        {
          text = GameTexts.FindText("str_you_have_encountered_PARTY_on_peace");
          IFaction mapFaction = PlayerEncounter.EncounteredMobileParty.MapFaction;
          text.SetTextVariable("KINGDOM", mapFaction.IsKingdomFaction ? ((Kingdom) mapFaction).EncyclopediaTitle : mapFaction.Name);
          text.SetTextVariable("PARTY", PlayerEncounter.EncounteredMobileParty.Name);
        }
        else if (PlayerEncounter.Battle != null && PlayerEncounter.Battle.IsSallyOut && MobileParty.MainParty.BesiegedSettlement != null)
        {
          if (PlayerEncounter.EncounteredMobileParty.IsGarrison)
          {
            text = new TextObject("{=xYeMbApi}{PARTY} has sallied out to attack you!");
            text.SetTextVariable("PARTY", PlayerEncounter.Battle.GetLeaderParty(PartyBase.MainParty.OpponentSide).Name);
          }
          else
          {
            text = new TextObject("{=zmLD6wIj}{RELIEF_PARTY} has come to support {SETTLEMENT}. {FURTHER_EXPLANATION}.");
            text.SetTextVariable("RELIEF_PARTY", PlayerEncounter.Battle.GetLeaderParty(PartyBase.MainParty.OpponentSide).Name);
            text.SetTextVariable("SETTLEMENT", MobileParty.MainParty.SiegeEvent.BesiegedSettlement.Name);
            if (MobileParty.MainParty.SiegeEvent.BesiegedSettlement.IsCastle)
              text.SetTextVariable("FURTHER_EXPLANATION", "{=urOywsiw}Castle garrison decided to sally out");
            else
              text.SetTextVariable("FURTHER_EXPLANATION", "{=xdtwRyfB}Town garrison decided to sally out");
          }
          MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
        }
        else
        {
          text = GameTexts.FindText("str_you_have_encountered_PARTY");
          text.SetTextVariable("PARTY", PlayerEncounter.EncounteredMobileParty.Name);
        }
        MBTextManager.SetTextVariable("ENCOUNTER_TEXT", text, true);
      }
      if (Settlement.CurrentSettlement != null)
        args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.SettlementComponent.WaitMeshName);
      MBTextManager.SetTextVariable("ATTACK_TEXT", flag ? new TextObject("{=Ky03jg94}Fight") : new TextObject("{=zxMOqlhs}Attack"), false);
    }

    [GameMenuInitializationHandler("join_siege_event")]
    [GameMenuInitializationHandler("join_sally_out")]
    private static void game_menu_join_siege_event_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(PlayerEncounter.EncounteredParty.MapFaction.Culture.EncounterBackgroundMesh);
      MobileParty leaderParty = Settlement.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty;
      if ((leaderParty == MobileParty.MainParty ? 1 : 0) == 1)
      {
        if (leaderParty.MapEvent != null)
        {
          MBTextManager.SetTextVariable("DEFENDER", leaderParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender).Name, false);
          MBTextManager.SetTextVariable("ATTACKER", leaderParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker).Name, false);
          MBTextManager.SetTextVariable("JOIN_SIEGE_TEXT", new TextObject("{=Qx8LaNhC}{DEFENDER} are fighting against {ATTACKER}."), false);
        }
        else
        {
          if (!leaderParty.IsMainParty)
            return;
          MBTextManager.SetTextVariable("JOIN_SIEGE_TEXT", new TextObject("{=jZ8Eqxbf}You are besieging the settlement."), false);
        }
      }
      else
        MBTextManager.SetTextVariable("JOIN_SIEGE_TEXT", new TextObject("{=arCGUuR5}The settlement is under siege."), false);
    }

    [GameMenuInitializationHandler("village_loot_complete")]
    private static void game_menu_village_loot_complete_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.Village.WaitMeshName);
    }

    [GameMenuInitializationHandler("village_start_attack")]
    public static void game_menu_village_start_attack_on_init(MenuCallbackArgs args)
    {
      Village village = Settlement.CurrentSettlement.Village;
      args.MenuContext.SetBackgroundMeshName(village.WaitMeshName);
    }

    [GameMenuInitializationHandler("town_wait")]
    [GameMenuInitializationHandler("town_guard")]
    [GameMenuInitializationHandler("menu_tournament_withdraw_verify")]
    [GameMenuInitializationHandler("menu_tournament_bet_confirm")]
    [GameMenuInitializationHandler("siege_attacker_defeated")]
    public static void game_menu_town_menu_on_init(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement != null)
      {
        args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.SettlementComponent.WaitMeshName);
      }
      else
      {
        if (PlayerSiege.BesiegedSettlement == null)
          return;
        args.MenuContext.SetBackgroundMeshName(PlayerSiege.BesiegedSettlement.SettlementComponent.WaitMeshName);
      }
    }

    [GameMenuInitializationHandler("siege_attacker_left")]
    public static void game_menu_attackers_left_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("wait_besieging");
    }

    [GameMenuInitializationHandler("new_game_begin")]
    public static void game_menu_new_game_begin_on_init(MenuCallbackArgs args)
    {
      GameMenu.ExitToLast();
      Campaign.Current.EncyclopediaManager.GoToLink(Hero.MainHero.EncyclopediaLink.ToString());
    }

    [GameMenuEventHandler("kingdom", "mno_call_to_arms", GameMenuEventHandler.EventType.OnConsequence)]
    public static void game_menu_kingdom_mno_call_to_arms_on_consequence(MenuCallbackArgs args)
    {
    }

    [GameMenuEventHandler("kingdom", "encyclopedia", GameMenuEventHandler.EventType.OnConsequence)]
    [GameMenuEventHandler("reports", "encyclopedia", GameMenuEventHandler.EventType.OnConsequence)]
    public static void game_menu_encyclopedia_on_consequence(MenuCallbackArgs args)
    {
    }

    [GameMenuInitializationHandler("request_meeting")]
    [GameMenuInitializationHandler("request_meeting_with_besiegers")]
    public static void game_menu_town_menu_request_meeting_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(PlayerEncounter.EncounterSettlement.SettlementComponent.WaitMeshName);
    }
  }
}
