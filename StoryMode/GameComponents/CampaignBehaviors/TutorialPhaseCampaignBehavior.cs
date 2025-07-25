// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.TutorialPhaseCampaignBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.Quests.TutorialPhase;
using StoryMode.StoryModeObjects;
using StoryMode.StoryModePhases;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.ActivitySystem;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.SceneInformationPopupTypes;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class TutorialPhaseCampaignBehavior : CampaignBehaviorBase
  {
    private bool _controlledByBrother;
    private bool _notifyPlayerAboutPosition;
    private Equipment[] _mainHeroEquipmentBackup = new Equipment[2];
    private Equipment[] _brotherEquipmentBackup = new Equipment[2];

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
      CampaignEvents.TickEvent.AddNonSerializedListener((object) this, new Action<float>(this.Tick));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
      CampaignEvents.OnCharacterCreationIsOverEvent.AddNonSerializedListener((object) this, new Action(this.OnCharacterCreationIsOver));
      CampaignEvents.CanHaveQuestsOrIssuesEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.OnCanHaveQuestsOrIssuesInfoIsRequested));
      CampaignEvents.CanHeroMarryEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.CanHeroMarry));
      StoryModeEvents.OnStoryModeTutorialEndedEvent.AddNonSerializedListener((object) this, new Action(this.OnStoryModeTutorialEnded));
    }

    private void OnCanHaveQuestsOrIssuesInfoIsRequested(Hero hero, ref bool result)
    {
      Settlement settlement = Settlement.Find("village_ES3_2");
      if (StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted || !settlement.Notables.Contains(hero))
        return;
      result = false;
    }

    private void CanHeroMarry(Hero hero, ref bool result)
    {
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.IsCompleted || hero.Clan != Clan.PlayerClan)
        return;
      result = false;
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Equipment[]>("_mainHeroEquipmentBackup", ref this._mainHeroEquipmentBackup);
      dataStore.SyncData<Equipment[]>("_brotherEquipmentBackup", ref this._brotherEquipmentBackup);
    }

    private void Tick(float dt)
    {
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusSettlement == null && StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusMobileParty == null)
        return;
      float num = -1f;
      Vec2 point = Vec2.Invalid;
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusSettlement != null)
      {
        num = Campaign.Current.Models.MapDistanceModel.GetDistance(MobileParty.MainParty, StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusSettlement);
        point = StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusSettlement.GatePosition;
      }
      else if (StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusMobileParty != null)
      {
        num = Campaign.Current.Models.MapDistanceModel.GetDistance(MobileParty.MainParty, StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusMobileParty);
        point = StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialFocusMobileParty.Position2D;
      }
      if ((double) num > (double) MobileParty.MainParty.SeeingRange * 5.0)
      {
        this._controlledByBrother = true;
        MobileParty.MainParty.Ai.SetMoveGoToPoint(point);
      }
      if (this._controlledByBrother && !this._notifyPlayerAboutPosition)
      {
        this._notifyPlayerAboutPosition = true;
        MBInformationManager.AddQuickInformation(new TextObject("{=hadftxlO}We have strayed too far from our path. I'll take the lead for some time. You follow me."), announcerCharacter: (BasicCharacterObject) StoryModeHeroes.ElderBrother.CharacterObject);
        Campaign.Current.TimeControlMode = CampaignTimeControlMode.StoppablePlay;
      }
      if (!this._controlledByBrother || (double) num >= (double) MobileParty.MainParty.SeeingRange)
        return;
      this._controlledByBrother = false;
      this._notifyPlayerAboutPosition = false;
      MobileParty.MainParty.Ai.SetMoveModeHold();
      MobileParty.MainParty.Ai.SetMoveGoToPoint(MobileParty.MainParty.Position2D);
      MBInformationManager.AddQuickInformation(new TextObject("{=4vsvniPd}I think we are on the right path now. You are the better rider so you should take the lead."), announcerCharacter: (BasicCharacterObject) StoryModeHeroes.ElderBrother.CharacterObject);
    }

    private void OnCharacterCreationIsOver()
    {
      ActivityManager.SetActivityAvailability("CompleteMainQuest", true);
      ActivityManager.StartActivity("CompleteMainQuest");
      this._mainHeroEquipmentBackup[0] = Hero.MainHero.BattleEquipment.Clone();
      this._mainHeroEquipmentBackup[1] = Hero.MainHero.CivilianEquipment.Clone();
      this._brotherEquipmentBackup[0] = StoryModeHeroes.ElderBrother.BattleEquipment.Clone();
      this._brotherEquipmentBackup[1] = StoryModeHeroes.ElderBrother.CivilianEquipment.Clone();
      Settlement settlement = Settlement.Find("village_ES3_2");
      StoryModeHeroes.LittleBrother.UpdateLastKnownClosestSettlement(settlement);
      StoryModeHeroes.LittleSister.UpdateLastKnownClosestSettlement(settlement);
      Hero.MainHero.Mother.UpdateLastKnownClosestSettlement(settlement);
      Hero.MainHero.Father.UpdateLastKnownClosestSettlement(settlement);
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter campaignGameStarter, int i)
    {
      if (i != 99)
        return;
      PartyBase.MainParty.ItemRoster.Clear();
      this.AddDialogAndGameMenus(campaignGameStarter);
      this.InitializeTutorial();
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogAndGameMenus(campaignGameStarter);
      Settlement settlement = Settlement.Find("village_ES3_2");
      if (settlement.Notables.IsEmpty<Hero>())
      {
        this.CreateHeadman(settlement);
      }
      else
      {
        StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialVillageHeadman = settlement.Notables.First<Hero>();
        if (StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialVillageHeadman.FirstName.Equals(new TextObject("{=Sb46O8WO}Orthos")))
          return;
        TextObject textObject = new TextObject("{=JWLBKIkR}Headman {HEADMAN.FIRSTNAME}");
        TextObject firstName = new TextObject("{=Sb46O8WO}Orthos");
        StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialVillageHeadman.SetName(textObject, firstName);
        StringHelpers.SetCharacterProperties("HEADMAN", StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialVillageHeadman.CharacterObject, textObject);
      }
    }

    private void OnStoryModeTutorialEnded()
    {
      Settlement settlement = Settlement.Find("village_ES3_2");
      if (settlement.Notables.Count > 1)
      {
        Debug.FailedAssert("There are more than one notable in tutorial phase, control it.", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\GameComponents\\CampaignBehaviors\\TutorialPhaseCampaignBehavior.cs", nameof (OnStoryModeTutorialEnded), 188);
        foreach (Hero notable in (List<Hero>) settlement.Notables)
          notable.SetPersonalRelation(Hero.MainHero, 0);
      }
      else
      {
        Hero notable = settlement.Notables[0];
        notable.SetPersonalRelation(Hero.MainHero, 0);
        KillCharacterAction.ApplyByRemove(notable);
      }
      this.SpawnAllNotablesForVillage(settlement.Village);
      VolunteerModel volunteerModel = Campaign.Current.Models.VolunteerModel;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.IsAlive && volunteerModel.CanHaveRecruits(notable))
        {
          CharacterObject basicVolunteer = volunteerModel.GetBasicVolunteer(notable);
          for (int index = 0; index < notable.VolunteerTypes.Length; ++index)
          {
            if (notable.VolunteerTypes[index] == null && (double) MBRandom.RandomFloat < 0.5)
              notable.VolunteerTypes[index] = basicVolunteer;
          }
        }
      }
      DisableHeroAction.Apply(StoryModeHeroes.ElderBrother);
      StoryModeHeroes.ElderBrother.Clan = (Clan) null;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) PartyBase.MainParty.MemberRoster.GetTroopRoster())
      {
        if (!troopRosterElement.Character.IsPlayerCharacter)
          PartyBase.MainParty.MemberRoster.RemoveTroop(troopRosterElement.Character, PartyBase.MainParty.MemberRoster.GetTroopCount(troopRosterElement.Character));
      }
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) PartyBase.MainParty.PrisonRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero)
          DisableHeroAction.Apply(troopRosterElement.Character.HeroObject);
        else
          PartyBase.MainParty.PrisonRoster.RemoveTroop(troopRosterElement.Character, PartyBase.MainParty.PrisonRoster.GetTroopCount(troopRosterElement.Character));
      }
      StoryMode.StoryModePhases.TutorialPhase.Instance.RemoveTutorialFocusSettlement();
      PartyBase.MainParty.ItemRoster.Clear();
      Hero.MainHero.BattleEquipment.FillFrom(this._mainHeroEquipmentBackup[0]);
      Hero.MainHero.CivilianEquipment.FillFrom(this._mainHeroEquipmentBackup[1]);
      StoryModeHeroes.ElderBrother.BattleEquipment.FillFrom(this._brotherEquipmentBackup[0]);
      StoryModeHeroes.ElderBrother.CivilianEquipment.FillFrom(this._brotherEquipmentBackup[1]);
      PartyBase.MainParty.ItemRoster.AddToCounts(DefaultItems.Grain, 2);
      Hero.MainHero.Heal(Hero.MainHero.MaxHitPoints);
      Hero.MainHero.Gold = 1000;
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialQuestPhase != TutorialQuestPhase.Finalized || StoryMode.StoryModePhases.TutorialPhase.Instance.IsSkipped)
        return;
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=EWD4Op6d}Notification").ToString(), new TextObject("{=GCbqpeDs}Tutorial is over. You are now free to explore Calradia.").ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) (() =>
      {
        MBInformationManager.ShowSceneNotification((SceneNotificationData) new FindingFirstBannerPieceSceneNotificationItem(Hero.MainHero));
        CampaignEventDispatcher.Instance.RemoveListeners((object) this);
      }), (Action) null));
    }

    private void InitializeTutorial()
    {
      Hero elderBrother = StoryModeHeroes.ElderBrother;
      elderBrother.ChangeState(Hero.CharacterStates.Active);
      AddHeroToPartyAction.Apply(elderBrother, MobileParty.MainParty, false);
      elderBrother.SetHasMet();
      DisableHeroAction.Apply(StoryModeHeroes.Tacitus);
      DisableHeroAction.Apply(StoryModeHeroes.LittleBrother);
      DisableHeroAction.Apply(StoryModeHeroes.LittleSister);
      DisableHeroAction.Apply(StoryModeHeroes.Radagos);
      DisableHeroAction.Apply(StoryModeHeroes.ImperialMentor);
      DisableHeroAction.Apply(StoryModeHeroes.AntiImperialMentor);
      DisableHeroAction.Apply(StoryModeHeroes.RadagosHencman);
      this.CreateHeadman(Settlement.Find("village_ES3_2"));
      PartyBase.MainParty.ItemRoster.AddToCounts(DefaultItems.Grain, 1);
    }

    private void CreateHeadman(Settlement settlement)
    {
      Hero heroAtOccupation = HeroCreator.CreateHeroAtOccupation(Occupation.Headman, settlement);
      TextObject textObject = new TextObject("{=JWLBKIkR}Headman {HEADMAN.FIRSTNAME}");
      TextObject firstName = new TextObject("{=Sb46O8WO}Orthos");
      heroAtOccupation.SetName(textObject, firstName);
      StringHelpers.SetCharacterProperties("HEADMAN", heroAtOccupation.CharacterObject, textObject);
      heroAtOccupation.AddPower((float) (Campaign.Current.Models.NotablePowerModel.NotableDisappearPowerLimit * 2));
      StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialVillageHeadman = heroAtOccupation;
    }

    private void AddDialogAndGameMenus(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("storymode_conversation_blocker", "start", "close_window", "{=9XnFlRR0}Interaction with this person is disabled during tutorial stage.", new ConversationSentence.OnConditionDelegate(this.storymode_conversation_blocker_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 1000000);
      campaignGameStarter.AddGameMenu("storymode_game_menu_blocker", "{=pVKkclVk}Interactions are limited during tutorial phase. This interaction is disabled.", new OnInitDelegate(this.storymode_game_menu_blocker_on_init));
      campaignGameStarter.AddGameMenuOption("storymode_game_menu_blocker", "game_menu_blocker_leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.game_menu_leave_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_leave_on_consequence), true);
      campaignGameStarter.AddGameMenu("storymode_tutorial_village_game_menu", "{=7VFLb3Qj}You have arrived at the village.", new OnInitDelegate(this.storymode_tutorial_village_game_menu_on_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      campaignGameStarter.AddGameMenuOption("storymode_tutorial_village_game_menu", "storymode_tutorial_village_enter", "{=Xrz05hYE}Take a walk around", new GameMenuOption.OnConditionDelegate(this.storymode_tutorial_village_enter_on_condition), new GameMenuOption.OnConsequenceDelegate(this.storymode_tutorial_village_enter_on_consequence));
      campaignGameStarter.AddGameMenuOption("storymode_tutorial_village_game_menu", "storymode_tutorial_village_hostile_action", "{=GM3tAYMr}Take a hostile action", new GameMenuOption.OnConditionDelegate(this.raid_village_menu_option_condition), (GameMenuOption.OnConsequenceDelegate) null);
      campaignGameStarter.AddGameMenuOption("storymode_tutorial_village_game_menu", "storymode_tutorial_village_recruit", "{=E31IJyqs}Recruit troops", new GameMenuOption.OnConditionDelegate(this.recruit_troops_village_menu_option_condition), new GameMenuOption.OnConsequenceDelegate(this.storymode_recruit_volunteers_on_consequence));
      campaignGameStarter.AddGameMenuOption("storymode_tutorial_village_game_menu", "storymode_tutorial_village_buy", "{=VN4ctHIU}Buy products", new GameMenuOption.OnConditionDelegate(this.buy_products_village_menu_option_condition), new GameMenuOption.OnConsequenceDelegate(this.storymode_ui_village_buy_good_on_consequence));
      campaignGameStarter.AddGameMenuOption("storymode_tutorial_village_game_menu", "storymode_tutorial_village_wait", "{=zEoHYEUS}Wait here for some time", new GameMenuOption.OnConditionDelegate(this.wait_village_menu_option_condition), (GameMenuOption.OnConsequenceDelegate) null);
      campaignGameStarter.AddGameMenuOption("storymode_tutorial_village_game_menu", "storymode_tutorial_village_leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.game_menu_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_leave_on_consequence), true);
    }

    private bool recruit_troops_village_menu_option_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Recruit;
      return this.RecruitAndBuyProductsConditionsHold(args);
    }

    private bool buy_products_village_menu_option_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Trade;
      return this.RecruitAndBuyProductsConditionsHold(args);
    }

    private bool RecruitAndBuyProductsConditionsHold(MenuCallbackArgs args)
    {
      bool flag = StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialQuestPhase >= TutorialQuestPhase.RecruitAndPurchaseStarted;
      args.IsEnabled = flag;
      args.Tooltip = flag ? TextObject.Empty : new TextObject("{=TeMExjrH}This option is disabled during current active quest.");
      return true;
    }

    private bool raid_village_menu_option_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      return this.PlaceholderOptionsClickableCondition(args);
    }

    private bool wait_village_menu_option_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Wait;
      return this.PlaceholderOptionsClickableCondition(args);
    }

    private bool PlaceholderOptionsClickableCondition(MenuCallbackArgs args)
    {
      args.IsEnabled = false;
      args.Tooltip = new TextObject("{=F7VxtCSd}This option is disabled during tutorial phase.");
      return true;
    }

    private void storymode_recruit_volunteers_on_consequence(MenuCallbackArgs args)
    {
      StoryMode.StoryModePhases.TutorialPhase.Instance.PrepareRecruitOptionForTutorial();
      args.MenuContext.OpenRecruitVolunteers();
    }

    private void storymode_ui_village_buy_good_on_consequence(MenuCallbackArgs args)
    {
      InventoryManager.OpenScreenAsTrade(StoryMode.StoryModePhases.TutorialPhase.Instance.GetAndPrepareBuyProductsOptionForTutorial(Settlement.CurrentSettlement.Village), (SettlementComponent) Settlement.CurrentSettlement.Village);
    }

    [GameMenuInitializationHandler("storymode_tutorial_village_game_menu")]
    private static void storymode_tutorial_village_game_menu_on_init_background(
      MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.Village.WaitMeshName);
    }

    [GameMenuInitializationHandler("storymode_game_menu_blocker")]
    private static void storymode_tutorial_blocker_game_menu_on_init_background(
      MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(SettlementHelper.FindNearestVillage().Village.WaitMeshName);
    }

    private void storymode_game_menu_blocker_on_init(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement == null || !(Settlement.CurrentSettlement.StringId == "village_ES3_2"))
        return;
      GameMenu.SwitchToMenu("storymode_tutorial_village_game_menu");
    }

    private void storymode_tutorial_village_game_menu_on_init(MenuCallbackArgs args)
    {
      if (!StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted)
      {
        GameMenu.SwitchToMenu("village_outside");
      }
      else
      {
        Settlement currentSettlement = Settlement.CurrentSettlement;
        Campaign.Current.GameMenuManager.MenuLocations.Clear();
        Campaign.Current.GameMenuManager.MenuLocations.AddRange(currentSettlement.LocationComplex.GetListOfLocations());
      }
    }

    private bool storymode_conversation_blocker_on_condition()
    {
      return StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted;
    }

    private bool storymode_tutorial_village_enter_on_condition(MenuCallbackArgs args)
    {
      List<Location> list = Settlement.CurrentSettlement.LocationComplex.GetListOfLocations().ToList<Location>();
      GameMenuOption.IssueQuestFlags issueQuestFlags = Campaign.Current.IssueManager.CheckIssueForMenuLocations(list, true);
      args.OptionQuestData |= issueQuestFlags;
      args.OptionQuestData |= Campaign.Current.QuestManager.CheckQuestForMenuLocations(list);
      args.optionLeaveType = GameMenuOption.LeaveType.Mission;
      args.IsEnabled = !StoryMode.StoryModePhases.TutorialPhase.Instance.LockTutorialVillageEnter;
      if (!args.IsEnabled)
        args.Tooltip = new TextObject("{=tWwXEWh6}Use the portrait to talk and enter the mission.");
      return true;
    }

    private void storymode_tutorial_village_enter_on_consequence(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.CurrentSettlement == null)
        PlayerEncounter.EnterSettlement();
      VillageEncounter locationEncounter = PlayerEncounter.LocationEncounter as VillageEncounter;
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialQuestPhase == TutorialQuestPhase.TravelToVillageStarted)
        locationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("village_center"), (Location) null, StoryModeHeroes.ElderBrother.CharacterObject, (string) null);
      else
        locationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("village_center"), (Location) null, (CharacterObject) null, (string) null);
    }

    private bool game_menu_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private bool game_menu_leave_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void game_menu_leave_on_consequence(MenuCallbackArgs args) => PlayerEncounter.Finish();

    private void SpawnYourBrotherInLocation(Hero hero, string locationId)
    {
      if (LocationComplex.Current == null)
        return;
      Location locationWithId = LocationComplex.Current.GetLocationWithId(locationId);
      Monster baseMonsterFromRace = FaceGen.GetBaseMonsterFromRace(hero.CharacterObject.Race);
      LocationCharacter locationCharacter = new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, hero.CharacterObject)).Monster(baseMonsterFromRace).NoHorses(true), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), (string) null, true, LocationCharacter.CharacterRelations.Friendly, (string) null, true, isVisualTracked: true);
      locationWithId.AddCharacter(locationCharacter);
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      switch (quest)
      {
        case TravelToVillageTutorialQuest _:
          new TalkToTheHeadmanTutorialQuest(Settlement.CurrentSettlement.Notables.First<Hero>((Func<Hero, bool>) (n => n.IsHeadman))).StartQuest();
          StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialQuestPhase(TutorialQuestPhase.TalkToTheHeadmanStarted);
          break;
        case TalkToTheHeadmanTutorialQuest _:
          new LocateAndRescueTravellerTutorialQuest(Settlement.CurrentSettlement.Notables.First<Hero>((Func<Hero, bool>) (n => n.IsHeadman))).StartQuest();
          StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialQuestPhase(TutorialQuestPhase.LocateAndRescueTravellerStarted);
          break;
        case LocateAndRescueTravellerTutorialQuest _:
          new FindHideoutTutorialQuest(quest.QuestGiver, SettlementHelper.FindNearestHideout(toMapPoint: (IMapPoint) quest.QuestGiver.CurrentSettlement)).StartQuest();
          StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialQuestPhase(TutorialQuestPhase.FindHideoutStarted);
          break;
      }
    }

    private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      if (!(settlement.StringId == "village_ES3_2") || StoryMode.StoryModePhases.TutorialPhase.Instance.IsCompleted)
        return;
      if (party != null)
      {
        if (party.IsMainParty)
          this.SpawnYourBrotherInLocation(StoryModeHeroes.ElderBrother, "village_center");
        else if (!party.IsMilitia)
          party.Ai.SetMoveGoToSettlement(SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (s => s != settlement && (s.IsFortification || s.IsVillage) && settlement != s && settlement.MapFaction == s.MapFaction), (IMapPoint) party));
      }
      if (party != null || hero == null || hero.IsNotable)
        return;
      TeleportHeroAction.ApplyImmediateTeleportToSettlement(hero, SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (s => s != settlement && (s.IsFortification || s.IsVillage) && settlement != s && settlement.MapFaction == s.MapFaction), (IMapPoint) settlement));
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (settlement.StringId == "tutorial_training_field" && party == MobileParty.MainParty && StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialQuestPhase == TutorialQuestPhase.None)
      {
        new TravelToVillageTutorialQuest().StartQuest();
        StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialQuestPhase(TutorialQuestPhase.TravelToVillageStarted);
        Campaign.Current.IssueManager.ToggleAllIssueTracks(false);
      }
      if (party != MobileParty.MainParty)
        return;
      this.CheckIfMainPartyStarving();
    }

    private void DailyTick()
    {
      Campaign.Current.IssueManager.ToggleAllIssueTracks(false);
      this.CheckIfMainPartyStarving();
    }

    private void OnGameLoadFinished()
    {
      if (Settlement.CurrentSettlement == null || !(Settlement.CurrentSettlement.StringId == "village_ES3_2") || StoryMode.StoryModePhases.TutorialPhase.Instance.IsCompleted)
        return;
      this.SpawnYourBrotherInLocation(StoryModeHeroes.ElderBrother, "village_center");
    }

    private void CheckIfMainPartyStarving()
    {
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.IsCompleted || !PartyBase.MainParty.IsStarving)
        return;
      PartyBase.MainParty.ItemRoster.AddToCounts(DefaultItems.Grain, 1);
    }

    private void SpawnAllNotablesForVillage(Village village)
    {
      int countForSettlement = Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(village.Settlement, Occupation.RuralNotable);
      for (int index = 0; index < countForSettlement; ++index)
        HeroCreator.CreateHeroAtOccupation(Occupation.RuralNotable, village.Settlement);
    }
  }
}
