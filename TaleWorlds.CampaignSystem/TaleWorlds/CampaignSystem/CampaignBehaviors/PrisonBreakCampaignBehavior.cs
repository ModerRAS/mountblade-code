// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PrisonBreakCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PrisonBreakCampaignBehavior : CampaignBehaviorBase
  {
    private const int CoolDownInDays = 7;
    private const int PrisonBreakDialogPriority = 120;
    private Dictionary<Settlement, CampaignTime> _coolDownData = new Dictionary<Settlement, CampaignTime>();
    private Hero _prisonerHero;
    private int _bribeCost;
    private string _previousMenuId;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.CanHeroDieEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.CanHeroDie));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Hero>("_prisonerHero", ref this._prisonerHero);
      dataStore.SyncData<Dictionary<Settlement, CampaignTime>>("_coolDownData", ref this._coolDownData);
      dataStore.SyncData<string>("_previousMenuId", ref this._previousMenuId);
    }

    private void CanHeroDie(
      Hero hero,
      KillCharacterAction.KillCharacterActionDetail detail,
      ref bool result)
    {
      if (detail != KillCharacterAction.KillCharacterActionDetail.DiedInBattle || hero != Hero.MainHero || this._prisonerHero == null || CampaignMission.Current == null || CampaignMission.Current.Location != Settlement.CurrentSettlement?.LocationComplex?.GetLocationWithId("prison"))
        return;
      result = false;
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
      this.AddDialogs(campaignGameStarter);
    }

    private void AddGameMenus(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddGameMenuOption("town_keep_dungeon", "town_prison_break", "{=lc0YIqby}Stage a prison break", new GameMenuOption.OnConditionDelegate(this.game_menu_stage_prison_break_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_castle_prison_break_from_dungeon_on_consequence), index: 3);
      campaignGameStarter.AddGameMenuOption("castle_dungeon", "town_prison_break", "{=lc0YIqby}Stage a prison break", new GameMenuOption.OnConditionDelegate(this.game_menu_stage_prison_break_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_castle_prison_break_from_castle_dungeon_on_consequence), index: 3);
      campaignGameStarter.AddGameMenuOption("town_enemy_town_keep", "town_prison_break", "{=lc0YIqby}Stage a prison break", new GameMenuOption.OnConditionDelegate(this.game_menu_stage_prison_break_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_castle_prison_break_from_enemy_keep_on_consequence), index: 0);
      campaignGameStarter.AddGameMenu("start_prison_break", "{=aZaujaHb}The guard accepts your offer. He is ready to help you break {PRISONER.NAME} out, if you're willing to pay.", new OnInitDelegate(this.start_prison_break_on_init));
      campaignGameStarter.AddGameMenuOption("start_prison_break", "start", "{=N6UeziT8}Start ({COST}{GOLD_ICON})", new GameMenuOption.OnConditionDelegate(this.game_menu_castle_prison_break_on_condition), (GameMenuOption.OnConsequenceDelegate) (args => this.OpenPrisonBreakMission()));
      campaignGameStarter.AddGameMenuOption("start_prison_break", "leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.game_menu_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_cancel_prison_break), true);
      campaignGameStarter.AddGameMenu("prison_break_cool_down", "{=cGSXFJ3N}Because of a recent breakout attempt in this settlement it is on high alert. The guard won't even be seen talking to you.", (OnInitDelegate) null);
      campaignGameStarter.AddGameMenuOption("prison_break_cool_down", "leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.game_menu_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_cancel_prison_break), true);
      campaignGameStarter.AddGameMenu("settlement_prison_break_success", "{=TazumJGN}You emerge into the streets. No one is yet aware of what happened in the dungeons, and you hustle {PRISONER.NAME} towards the gates.{newline}You may now leave the {?SETTLEMENT_TYPE}settlement{?}castle{\\?}.", new OnInitDelegate(this.settlement_prison_break_success_on_init));
      campaignGameStarter.AddGameMenuOption("settlement_prison_break_success", "continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.game_menu_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.settlement_prison_break_success_continue_on_consequence));
      campaignGameStarter.AddGameMenu("settlement_prison_break_fail_player_unconscious", "{=svuD2vBo}You were knocked unconscious while trying to break {PRISONER.NAME} out of the dungeon.{newline}The guards caught you both and threw you in a cell.", new OnInitDelegate(this.settlement_prison_break_fail_on_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      campaignGameStarter.AddGameMenuOption("settlement_prison_break_fail_player_unconscious", "continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.game_menu_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.settlement_prison_break_fail_player_unconscious_continue_on_consequence));
      campaignGameStarter.AddGameMenu("settlement_prison_break_fail_prisoner_unconscious", "{=eKy1II3h}You made your way out but {PRISONER.NAME} was badly wounded during the escape. You had no choice but to leave {?PRISONER.GENDER}her{?}him{\\?} behind as you disappeared into the back streets and sneaked out the gate.{INFORMATION_IF_PRISONER_DEAD}", new OnInitDelegate(this.settlement_prison_break_fail_prisoner_injured_on_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      campaignGameStarter.AddGameMenuOption("settlement_prison_break_fail_prisoner_unconscious", "continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.game_menu_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.settlement_prison_break_fail_prisoner_unconscious_continue_on_consequence));
    }

    private void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("prison_break_start_1", "start", "prison_break_end_already_met", "{=5RDF3aZN}{SALUTATION}... You came for me!", new ConversationSentence.OnConditionDelegate(this.prison_break_end_with_success_clan_member), (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddDialogLine("prison_break_start_2", "start", "prison_break_end_already_met", "{=PRadDFN5}{SALUTATION}... Well, I hadn't expected this, but I'm very grateful.", new ConversationSentence.OnConditionDelegate(this.prison_break_end_with_success_player_already_met), (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddDialogLine("prison_break_start_3", "start", "prison_break_end_meet", "{=zbPRul7h}Well.. I don't know you, but I'm very grateful.", new ConversationSentence.OnConditionDelegate(this.prison_break_end_with_success_other_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddPlayerLine("prison_break_player_ask", "prison_break_end_already_met", "prison_break_next_move", "{=qFoMsPIf}I'm glad we made it out safe. What will you do now?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_break_player_meet", "prison_break_end_meet", "prison_break_next_move", "{=nMn63bV1}I am {PLAYER.NAME}. All I ask is that you remember that name, and what I did.{newline}Tell me, what will you do now?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_break_next_companion", "prison_break_next_move", "prison_break_next_move_player_companion", "{=aoJHP3Ud}I'm ready to rejoin you. I'm in your debt.", (ConversationSentence.OnConditionDelegate) (() => this._prisonerHero.CompanionOf == Clan.PlayerClan), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_break_next_commander", "prison_break_next_move", "prison_break_next_move_player", "{=xADZi2bK}I'll go and find my men. I will remember your help...", (ConversationSentence.OnConditionDelegate) (() => this._prisonerHero.IsCommander), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_break_next_noble", "prison_break_next_move", "prison_break_next_move_player", "{=W2vV5jzj}I'll go back to my family. I will remember your help...", (ConversationSentence.OnConditionDelegate) (() => this._prisonerHero.IsLord), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_break_next_notable", "prison_break_next_move", "prison_break_next_move_player", "{=efdCZPw4}I'll go back to my work. I will remember your help...", (ConversationSentence.OnConditionDelegate) (() => this._prisonerHero.IsNotable), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_break_next_other", "prison_break_next_move", "prison_break_next_move_player_other", "{=TWZ4abt5}I'll keep wandering about, as I've done before. I can make a living. No need to worry.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_break_end_dialog_3", "prison_break_next_move_player_companion", "close_window", "{=ncvB4XRL}You could join me.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.prison_break_end_with_success_companion));
      campaignGameStarter.AddPlayerLine("prison_break_end_dialog_1", "prison_break_next_move_player", "close_window", "{=rlAec9CM}Very well. Keep safe.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.prison_break_end_with_success_on_consequence));
      campaignGameStarter.AddPlayerLine("prison_break_end_dialog_2", "prison_break_next_move_player_other", "close_window", "{=dzXaXKaC}Very well.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.prison_break_end_with_success_on_consequence));
    }

    [GameMenuInitializationHandler("start_prison_break")]
    [GameMenuInitializationHandler("prison_break_cool_down")]
    [GameMenuInitializationHandler("settlement_prison_break_success")]
    [GameMenuInitializationHandler("settlement_prison_break_fail_player_unconscious")]
    [GameMenuInitializationHandler("settlement_prison_break_fail_prisoner_unconscious")]
    public static void game_menu_prison_menu_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.SettlementComponent.WaitMeshName);
    }

    private bool prison_break_end_with_success_clan_member()
    {
      int num = this._prisonerHero == null || this._prisonerHero.CharacterObject != CharacterObject.OneToOneConversationCharacter ? 0 : (this._prisonerHero.CompanionOf == Clan.PlayerClan ? 1 : (this._prisonerHero.Clan == Clan.PlayerClan ? 1 : 0));
      if (num == 0)
        return num != 0;
      MBTextManager.SetTextVariable("SALUTATION", Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_salutation", CharacterObject.OneToOneConversationCharacter), false);
      return num != 0;
    }

    private bool prison_break_end_with_success_player_already_met()
    {
      int num = this._prisonerHero == null || this._prisonerHero.CharacterObject != CharacterObject.OneToOneConversationCharacter ? 0 : (this._prisonerHero.HasMet ? 1 : 0);
      if (num == 0)
        return num != 0;
      MBTextManager.SetTextVariable("SALUTATION", Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_salutation", CharacterObject.OneToOneConversationCharacter), false);
      return num != 0;
    }

    private bool prison_break_end_with_success_other_on_condition()
    {
      return this._prisonerHero != null && this._prisonerHero.CharacterObject == CharacterObject.OneToOneConversationCharacter;
    }

    private void PrisonBreakEndedInternal()
    {
      ChangeRelationAction.ApplyPlayerRelation(this._prisonerHero, Campaign.Current.Models.PrisonBreakModel.GetRelationRewardOnPrisonBreak(this._prisonerHero));
      SkillLevelingManager.OnPrisonBreakEnd(this._prisonerHero, true);
    }

    private void prison_break_end_with_success_on_consequence()
    {
      this.PrisonBreakEndedInternal();
      EndCaptivityAction.ApplyByEscape(this._prisonerHero, Hero.MainHero);
      this._prisonerHero = (Hero) null;
    }

    private void prison_break_end_with_success_companion()
    {
      this.PrisonBreakEndedInternal();
      EndCaptivityAction.ApplyByEscape(this._prisonerHero, Hero.MainHero);
      this._prisonerHero.ChangeState(Hero.CharacterStates.Active);
      AddHeroToPartyAction.Apply(this._prisonerHero, MobileParty.MainParty);
      this._prisonerHero = (Hero) null;
    }

    private bool game_menu_castle_prison_break_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Mission;
      this._bribeCost = Campaign.Current.Models.PrisonBreakModel.GetPrisonBreakStartCost(this._prisonerHero);
      MBTextManager.SetTextVariable("COST", this._bribeCost);
      return true;
    }

    private void AddCoolDownForPrisonBreak(Settlement settlement)
    {
      CampaignTime campaignTime = CampaignTime.DaysFromNow(7f);
      if (this._coolDownData.ContainsKey(settlement))
        this._coolDownData[settlement] = campaignTime;
      else
        this._coolDownData.Add(settlement, campaignTime);
    }

    private bool CanPlayerStartPrisonBreak(Settlement settlement)
    {
      bool flag = true;
      CampaignTime campaignTime;
      if (this._coolDownData.TryGetValue(settlement, out campaignTime))
      {
        flag = campaignTime.IsPast;
        if (flag)
          this._coolDownData.Remove(settlement);
      }
      return flag;
    }

    private bool game_menu_stage_prison_break_on_condition(MenuCallbackArgs args)
    {
      bool flag = false;
      if (Campaign.Current.Models.PrisonBreakModel.CanPlayerStagePrisonBreak(Settlement.CurrentSettlement))
      {
        args.optionLeaveType = GameMenuOption.LeaveType.StagePrisonBreak;
        if (Hero.MainHero.IsWounded)
        {
          args.IsEnabled = false;
          args.Tooltip = new TextObject("{=yNMrF2QF}You are wounded");
        }
        flag = true;
      }
      return flag;
    }

    private void game_menu_castle_prison_break_from_dungeon_on_consequence(MenuCallbackArgs args)
    {
      this._previousMenuId = "town_keep_dungeon";
      this.game_menu_castle_prison_break_on_consequence(args);
    }

    private void game_menu_castle_prison_break_from_castle_dungeon_on_consequence(
      MenuCallbackArgs args)
    {
      this._previousMenuId = "castle_dungeon";
      this.game_menu_castle_prison_break_on_consequence(args);
    }

    private void game_menu_castle_prison_break_from_enemy_keep_on_consequence(MenuCallbackArgs args)
    {
      this._previousMenuId = "town_enemy_town_keep";
      this.game_menu_castle_prison_break_on_consequence(args);
    }

    private void game_menu_castle_prison_break_on_consequence(MenuCallbackArgs args)
    {
      if (this.CanPlayerStartPrisonBreak(Settlement.CurrentSettlement))
      {
        FlattenedTroopRoster flattenedRoster = Settlement.CurrentSettlement.Party.PrisonRoster.ToFlattenedRoster();
        if (Settlement.CurrentSettlement.Town.GarrisonParty != null)
          flattenedRoster.Add(Settlement.CurrentSettlement.Town.GarrisonParty.PrisonRoster.GetTroopRoster());
        flattenedRoster.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => !x.Troop.IsHero));
        List<InquiryElement> inquiryElements = new List<InquiryElement>();
        foreach (FlattenedTroopRosterElement troopRosterElement in flattenedRoster)
        {
          TextObject parent;
          TextObject to;
          bool flag;
          if (FactionManager.IsAtWarAgainstFaction(Clan.PlayerClan.MapFaction, troopRosterElement.Troop.HeroObject.MapFaction))
          {
            parent = new TextObject("{=!}{HERO.NAME}");
            StringHelpers.SetCharacterProperties("HERO", troopRosterElement.Troop, parent);
            to = new TextObject("{=VM1SGrla}{HERO.NAME} is your enemy.");
            to.SetCharacterProperties("HERO", troopRosterElement.Troop);
            flag = true;
          }
          else
          {
            int prisonBreakStartCost = Campaign.Current.Models.PrisonBreakModel.GetPrisonBreakStartCost(troopRosterElement.Troop.HeroObject);
            flag = Hero.MainHero.Gold < prisonBreakStartCost;
            parent = new TextObject("{=!}{HERO.NAME}");
            StringHelpers.SetCharacterProperties("HERO", troopRosterElement.Troop, parent);
            to = new TextObject("{=I4SjNT6Y}This will cost you {BRIBE_COST}{GOLD_ICON}.{?ENOUGH_GOLD}{?} You don't have enough money.{\\?}");
            to.SetTextVariable("BRIBE_COST", prisonBreakStartCost);
            to.SetTextVariable("ENOUGH_GOLD", flag ? 0 : 1);
          }
          inquiryElements.Add(new InquiryElement((object) troopRosterElement.Troop, parent.ToString(), new ImageIdentifier(CharacterCode.CreateFrom((BasicCharacterObject) troopRosterElement.Troop)), !flag, to.ToString()));
        }
        MBInformationManager.ShowMultiSelectionInquiry(new MultiSelectionInquiryData(new TextObject("{=oQjsShmH}PRISONERS").ToString(), new TextObject("{=abpzOR0D}Choose a prisoner to break out").ToString(), inquiryElements, true, 1, 1, GameTexts.FindText("str_done").ToString(), string.Empty, new Action<List<InquiryElement>>(this.StartPrisonBreak), (Action<List<InquiryElement>>) null));
      }
      else
        GameMenu.SwitchToMenu("prison_break_cool_down");
    }

    private void StartPrisonBreak(List<InquiryElement> prisonerList)
    {
      if (prisonerList.Count > 0)
      {
        this._prisonerHero = ((CharacterObject) prisonerList[0].Identifier).HeroObject;
        GameMenu.SwitchToMenu("start_prison_break");
      }
      else
        this._prisonerHero = (Hero) null;
    }

    private void OpenPrisonBreakMission()
    {
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, this._bribeCost);
      this.AddCoolDownForPrisonBreak(Settlement.CurrentSettlement);
      Location locationWithId = LocationComplex.Current.GetLocationWithId("prison");
      CampaignMission.OpenPrisonBreakMission(locationWithId.GetSceneName(Settlement.CurrentSettlement.Town.GetWallLevel()), locationWithId, this._prisonerHero.CharacterObject);
    }

    private bool game_menu_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private bool game_menu_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void game_menu_cancel_prison_break(MenuCallbackArgs args)
    {
      this._prisonerHero = (Hero) null;
      GameMenu.SwitchToMenu(this._previousMenuId);
    }

    private void start_prison_break_on_init(MenuCallbackArgs args)
    {
      StringHelpers.SetCharacterProperties("PRISONER", this._prisonerHero.CharacterObject);
    }

    private void settlement_prison_break_success_on_init(MenuCallbackArgs args)
    {
      StringHelpers.SetCharacterProperties("PRISONER", this._prisonerHero.CharacterObject);
      MBTextManager.SetTextVariable("SETTLEMENT_TYPE", Settlement.CurrentSettlement.IsTown ? 1 : 0);
    }

    private void settlement_prison_break_success_continue_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.LeaveSettlement();
      PlayerEncounter.Finish();
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter), new ConversationCharacterData(this._prisonerHero.CharacterObject));
    }

    private void settlement_prison_break_fail_prisoner_injured_on_init(MenuCallbackArgs args)
    {
      if (this._prisonerHero.IsDead)
      {
        TextObject textObject = new TextObject("{=GkwOyJn9}{newline}You later learn that {?PRISONER.GENDER}she{?}he{\\?} died from {?PRISONER.GENDER}her{?}his{\\?} injuries.");
        StringHelpers.SetCharacterProperties("PRISONER", this._prisonerHero.CharacterObject, textObject);
        MBTextManager.SetTextVariable("INFORMATION_IF_PRISONER_DEAD", textObject, false);
      }
      StringHelpers.SetCharacterProperties("PRISONER", this._prisonerHero.CharacterObject);
    }

    private void settlement_prison_break_fail_on_init(MenuCallbackArgs args)
    {
      StringHelpers.SetCharacterProperties("PRISONER", this._prisonerHero.CharacterObject);
    }

    private void settlement_prison_break_fail_player_unconscious_continue_on_consequence(
      MenuCallbackArgs args)
    {
      SkillLevelingManager.OnPrisonBreakEnd(this._prisonerHero, false);
      Settlement currentSettlement = Settlement.CurrentSettlement;
      PlayerEncounter.LeaveSettlement();
      PlayerEncounter.Finish();
      TakePrisonerAction.Apply(currentSettlement.Party, Hero.MainHero);
      this._prisonerHero = (Hero) null;
    }

    private void settlement_prison_break_fail_prisoner_unconscious_continue_on_consequence(
      MenuCallbackArgs args)
    {
      SkillLevelingManager.OnPrisonBreakEnd(this._prisonerHero, false);
      this._prisonerHero = (Hero) null;
      PlayerEncounter.LeaveSettlement();
      PlayerEncounter.Finish();
    }
  }
}
