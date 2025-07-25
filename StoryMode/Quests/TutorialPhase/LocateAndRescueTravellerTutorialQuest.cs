// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.TutorialPhase.LocateAndRescueTravellerTutorialQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.TutorialPhase
{
  public class LocateAndRescueTravellerTutorialQuest : StoryModeQuestBase
  {
    private const int MainPartyHealHitPointLimit = 50;
    private const int PlayerPartySizeMinLimitToSpawnRaiders = 4;
    private const int RaiderPartySize = 6;
    private const int RaiderPartyCount = 3;
    private const string RaiderPartyStringId = "locate_and_rescue_traveller_quest_raider_party_";
    [SaveableField(1)]
    private int _raiderPartyCount;
    [SaveableField(2)]
    private readonly List<MobileParty> _raiderParties;
    [SaveableField(3)]
    private int _defeatedRaiderPartyCount;
    [SaveableField(4)]
    private readonly JournalLog _startQuestLog;

    private TextObject _startQuestLogText
    {
      get
      {
        return new TextObject("{=JJo0i8an}Look around the village to find the party that captured the traveller whom the headman told you about.");
      }
    }

    public override TextObject Title => new TextObject("{=ACyYhA2s}Locate and Rescue Traveller");

    public LocateAndRescueTravellerTutorialQuest(Hero questGiver)
      : base("locate_and_rescue_traveler_tutorial_quest", questGiver, CampaignTime.Never)
    {
      this._raiderParties = new List<MobileParty>();
      this._defeatedRaiderPartyCount = 0;
      this.SetDialogs();
      this.AddGameMenus();
      this.InitializeQuestOnCreation();
      this._raiderPartyCount = 0;
      this._startQuestLog = this.AddDiscreteLog(this._startQuestLogText, new TextObject("{=UkNUuyr1}Defeated Parties"), this._defeatedRaiderPartyCount, 3);
      if (MobileParty.MainParty.MemberRoster.TotalManCount >= 4)
        this.SpawnRaiderParties();
      StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialFocusSettlement(Settlement.Find("village_ES3_2"));
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
    }

    protected override void InitializeQuestOnGameLoad()
    {
      this.SetDialogs();
      this.AddGameMenus();
    }

    private MobileParty CreateRaiderParty()
    {
      Settlement nearestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
      MobileParty banditParty = BanditPartyComponent.CreateBanditParty("locate_and_rescue_traveller_quest_raider_party_" + (object) this._raiderPartyCount, nearestHideout.OwnerClan, nearestHideout.Hideout, false);
      TroopRoster memberRoster = new TroopRoster(banditParty.Party);
      TroopRoster prisonerRoster = new TroopRoster(banditParty.Party);
      CharacterObject character1 = Campaign.Current.ObjectManager.GetObject<CharacterObject>("storymode_quest_raider");
      memberRoster.AddToCounts(character1, 6);
      CharacterObject character2 = MBObjectManager.Instance.GetObject<CharacterObject>("tutorial_placeholder_volunteer");
      prisonerRoster.AddToCounts(character2, (double) MBRandom.RandomFloat >= 0.5 ? 1 : 2);
      Settlement settlement = MBObjectManager.Instance.GetObject<Settlement>("village_ES3_2");
      banditParty.InitializeMobilePartyAroundPosition(memberRoster, prisonerRoster, settlement.GatePosition, MobileParty.MainParty.SeeingRange * 0.75f);
      banditParty.SetCustomName(new TextObject("{=u1Pkt4HC}Raiders"));
      banditParty.InitializePartyTrade(200);
      banditParty.ActualClan = nearestHideout.OwnerClan;
      SetPartyAiAction.GetActionForPatrollingAroundSettlement(banditParty, settlement);
      banditParty.Ai.SetDoNotMakeNewDecisions(true);
      banditParty.IgnoreByOtherPartiesTill(CampaignTime.Never);
      banditParty.Party.SetVisualAsDirty();
      this.AddTrackedObject((ITrackableCampaignObject) banditParty);
      banditParty.IsActive = true;
      ++this._raiderPartyCount;
      banditParty.SetPartyUsedByQuest(true);
      return banditParty;
    }

    private void DespawnRaiderParties()
    {
      if (this._raiderParties.IsEmpty<MobileParty>())
        return;
      foreach (MobileParty mobileParty in this._raiderParties.ToList<MobileParty>())
      {
        this.RemoveTrackedObject((ITrackableCampaignObject) mobileParty);
        DestroyPartyAction.Apply((PartyBase) null, mobileParty);
      }
      this._raiderParties.Clear();
    }

    private void SpawnRaiderParties()
    {
      if (!this._raiderParties.IsEmpty<MobileParty>())
        return;
      for (int raiderPartyCount = this._defeatedRaiderPartyCount; raiderPartyCount < 3; ++raiderPartyCount)
        this._raiderParties.Add(this.CreateRaiderParty());
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000010).NpcLine(new TextObject("{=BdYaRvhm}I don't know who you are, but I'm in your debt. These brigands would've marched us to our deaths.[ib:nervous2][if:convo_uncomfortable_voice]")).Condition(new ConversationSentence.OnConditionDelegate(this.meeting_tacitus_on_condition)).NpcLine(new TextObject("{=9VxUSDQ7}My name's Tacteos. I'm a doctor by trade. I was on, well, a bit of a quest, but now I'm thinking I'm not really made for this kind of thing.[ib:nervous][if:convo_pondering]")).NpcLine(new TextObject("{=5LJTeOBT}I was with a caravan and they just came out of the brush. We were surrounded and outnumbered, so we gave up. I figured they'd keep us alive, if just for the ransom. But then they started flogging us along at top speed, without any water, and I was just about ready to drop.[ib:nervous2]")).NpcLine(new TextObject("{=XdDQdSsW}I could feel the signs of heat-stroke creeping up and I told them but they just flogged me more... If your group hadn't come along... Maybe I have a way to thank you properly.[ib:normal][if:convo_thinking]")).PlayerLine(new TextObject("{=bkZFbCRx}We're looking for two children captured by the raiders. Can you tell us anything?")).NpcLine(new TextObject("{=ehnbi5yD}I am afraid I haven't seen any children. But after our caravan was attacked, the chief of the raiders, the one they call Radagos, took and rode off with our more valuable belongings, including a chest that I had.[ib:closed][if:convo_empathic_voice]")).NpcLine(new TextObject("{=RF3NoR3d}He seemed to be controlling more than one band raiding around this area. If this lot has your kin, then I think he'd be the one to know.[if:convo_pondering]")).NpcLine(new TextObject("{=K75sH3vW}And since I have nothing of value left to repay your help, I'll tell you this. If you do catch up with and defeat that ruffian, you may be able to recover my chest. It contains a valuable ornament which I was told could be of great value, if you knew where to sell it.[if:convo_pondering]")).NpcLine(new TextObject("{=8GCW5IRO}I was trying to find out more about it, but, as I say, I've had all my urge for travelling flogged out of me. Right now I don't think I'd venture more than 20 paces from a well as long as I live.[ib:closed2][if:convo_shocked]")).PlayerLine(new TextObject("{=Zyn5FrTR}We'll keep that in mind.")).NpcLine(new TextObject("{=vJyTsFdU}It doesn't look like much and I suspect this lot would give it away for a few coins, but I got it from a mercenary whom I treated once, and swore it was related to 'Neretzes's Folly'. I don't know what that means, except that Neretzes was, of course, the emperor who died in battle some years back. Maybe you can find out its true value.[if:convo_calm_friendly]")).NpcLine(new TextObject("{=tsjQtWsO}Thanks for saving me again. I hope our paths will cross again![ib:normal2][if:convo_calm_friendly]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.meeting_tacitus_on_consequence)).CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000010).NpcLine(new TextObject("{=!}Start encounter.")).Condition(new ConversationSentence.OnConditionDelegate(this.meeting_with_raider_party_on_condition)).CloseDialog(), (object) this);
    }

    private bool meeting_tacitus_on_condition()
    {
      return Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero == StoryModeHeroes.Tacitus && !Hero.OneToOneConversationHero.HasMet;
    }

    private void meeting_tacitus_on_consequence()
    {
      foreach (MobileParty raiderParty in this._raiderParties)
      {
        if (raiderParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, raiderParty);
      }
      DisableHeroAction.Apply(StoryModeHeroes.Tacitus);
      this.CompleteQuestWithSuccess();
    }

    private bool meeting_with_raider_party_on_condition()
    {
      return this._raiderParties.Any<MobileParty>((Func<MobileParty, bool>) (p => ConversationHelper.GetConversationCharacterPartyLeader(p.Party) == CharacterObject.OneToOneConversationCharacter));
    }

    private void OnGameMenuOpened(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement == null && PlayerEncounter.EncounteredMobileParty != null && this._raiderParties.Any<MobileParty>((Func<MobileParty, bool>) (p => p == PlayerEncounter.EncounteredMobileParty)) && args.MenuContext.GameMenu.StringId != "encounter_meeting" && args.MenuContext.GameMenu.StringId != "encounter" && args.MenuContext.GameMenu.StringId != "encounter_raiders_quest")
        GameMenu.SwitchToMenu("encounter_raiders_quest");
      if (Hero.MainHero.HitPoints < 50)
        Hero.MainHero.Heal(50 - Hero.MainHero.HitPoints);
      Hero elderBrother = StoryModeHeroes.ElderBrother;
      if (elderBrother.HitPoints < 50)
        elderBrother.Heal(50 - elderBrother.HitPoints);
      if (!Hero.MainHero.IsPrisoner)
        return;
      EndCaptivityAction.ApplyByPeace(Hero.MainHero);
      if (elderBrother.IsPrisoner)
        EndCaptivityAction.ApplyByPeace(elderBrother);
      if (elderBrother.PartyBelongedTo != MobileParty.MainParty)
        MobileParty.MainParty.AddElementToMemberRoster(elderBrother.CharacterObject, 1);
      DisableHeroAction.Apply(StoryModeHeroes.Tacitus);
      TextObject textObject = new TextObject("{=ORnjaMlM}You were defeated by the raiders, but your brother saved you. It doesn't look like they're going anywhere, though, so you should attack again once you're ready.\nYou must have at least {NUMBER} members in your party. If you don't, go back to the village and recruit some more troops.");
      textObject.SetTextVariable("NUMBER", 4);
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=FPhWhjq7}Defeated").ToString(), textObject.ToString(), true, false, new TextObject("{=lmG7uRK2}Okay").ToString(), (string) null, (Action) (() =>
      {
        PartyBase mainParty = PartyBase.MainParty;
        if ((mainParty != null ? (mainParty.MemberRoster.TotalManCount >= 4 ? 1 : 0) : 0) != 0)
          this.SpawnRaiderParties();
        else
          Campaign.Current?.VisualTrackerManager.RegisterObject((ITrackableCampaignObject) MBObjectManager.Instance.GetObject<Settlement>("village_ES3_2"));
      }), (Action) null));
      this.DespawnRaiderParties();
    }

    private void AddGameMenus()
    {
      this.AddGameMenu("encounter_raiders_quest", new TextObject("{=mU1bC1mp}You encountered the raider party."), new OnInitDelegate(this.game_menu_encounter_on_init), GameOverlays.MenuOverlayType.Encounter);
      this.AddGameMenuOption("encounter_raiders_quest", "encounter_raiders_quest_attack", new TextObject("{=1r0tDsrR}Attack!"), new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_attack_on_consequence));
      this.AddGameMenuOption("encounter_raiders_quest", "encounter_raiders_quest_send_troops", new TextObject("{=z3VamNrX}Send in your troops."), new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_send_troops_on_condition), (GameMenuOption.OnConsequenceDelegate) null);
      this.AddGameMenuOption("encounter_raiders_quest", "encounter_raiders_quest_leave", new TextObject("{=2YYRyrOO}Leave..."), new GameMenuOption.OnConditionDelegate(this.game_menu_encounter_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_leave_on_consequence), true);
    }

    private void game_menu_encounter_on_init(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Battle == null)
        PlayerEncounter.StartBattle();
      PlayerEncounter.Update();
    }

    private bool game_menu_encounter_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void game_menu_encounter_leave_on_consequence(MenuCallbackArgs args)
    {
      MenuHelper.EncounterLeaveConsequence();
    }

    private bool game_menu_encounter_attack_on_condition(MenuCallbackArgs args)
    {
      if (PartyBase.MainParty.MemberRoster.TotalManCount < 4)
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=DyE3luNM}You need to have at least {NUMBER} member in your party to deal with the raider party. Go back to village to recruit more troops.");
        args.Tooltip.SetTextVariable("NUMBER", 4);
      }
      return MenuHelper.EncounterAttackCondition(args);
    }

    internal void game_menu_encounter_attack_on_consequence(MenuCallbackArgs args)
    {
      MenuHelper.EncounterAttackConsequence(args);
    }

    private bool game_menu_encounter_send_troops_on_condition(MenuCallbackArgs args)
    {
      args.IsEnabled = false;
      args.Tooltip = new TextObject("{=hnFkhPhp}This option is disabled during tutorial stage.");
      args.optionLeaveType = GameMenuOption.LeaveType.OrderTroopsToAttack;
      return true;
    }

    [GameMenuInitializationHandler("encounter_raiders_quest")]
    private static void game_menu_encounter_on_init_background(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("encounter_looter");
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (party != MobileParty.MainParty)
        return;
      if (4 > MobileParty.MainParty.MemberRoster.TotalManCount)
      {
        this.DespawnRaiderParties();
        this.OpenRecruitMoreTroopsPopUp();
      }
      else
        this.SpawnRaiderParties();
    }

    private void OpenRecruitMoreTroopsPopUp()
    {
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=y3fn2vWY}Recruit Troops").ToString(), new TextObject("{=taOCFKtZ}You need to recruit more troops to deal with the raider party. Go back to village to recruit more troops.").ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) null, (Action) null));
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent)
        return;
      if (mapEvent.PlayerSide == mapEvent.WinningSide)
      {
        foreach (MobileParty mobileParty in this._raiderParties.ToList<MobileParty>())
        {
          MobileParty party = mobileParty;
          if (mapEvent.InvolvedParties.Any<PartyBase>((Func<PartyBase, bool>) (p => p == party.Party)))
          {
            ++this._defeatedRaiderPartyCount;
            this._startQuestLog.UpdateCurrentProgress(this._defeatedRaiderPartyCount);
            party.MemberRoster.Clear();
            if (this._raiderParties.Count > 1)
              this._raiderParties.Remove(party);
          }
          if (party.MemberRoster.TotalManCount == 0 && this._raiderParties.Count > 1)
            this._raiderParties.Remove(party);
        }
        if (this._defeatedRaiderPartyCount >= 3)
        {
          MobileParty raiderParty = this._raiderParties[0];
          TakePrisonerAction.Apply(raiderParty.Party, StoryModeHeroes.Tacitus);
          raiderParty.PrisonRoster.AddToCounts(Campaign.Current.ObjectManager.GetObject<CharacterObject>("villager_empire"), 2);
          InformationManager.ShowInquiry(new InquiryData(new TextObject("{=EWD4Op6d}Notification").ToString(), new TextObject("{=OMrnTIe0}You rescue several prisoners that the raiders had been dragging along. They look parched and exhausted. You give them a bit of water and bread, and after a short while one staggers to his feet and comes over to you.").ToString(), true, false, new TextObject("{=lmG7uRK2}Okay").ToString(), (string) null, (Action) (() => CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, noHorse: true, noWeapon: true), new ConversationCharacterData(StoryModeHeroes.Tacitus.CharacterObject, noHorse: true, noWeapon: true))), (Action) null));
        }
      }
      if (4 <= MobileParty.MainParty.MemberRoster.TotalManCount)
        return;
      this.DespawnRaiderParties();
      this.OpenRecruitMoreTroopsPopUp();
    }

    protected override void HourlyTick()
    {
      if (4 <= MobileParty.MainParty.MemberRoster.TotalManCount)
        return;
      this.DespawnRaiderParties();
      this.OpenRecruitMoreTroopsPopUp();
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (!this._raiderParties.Contains(mobileParty))
        return;
      this._raiderParties.Remove(mobileParty);
    }

    protected override void OnCompleteWithSuccess()
    {
      StoryMode.StoryModePhases.TutorialPhase.Instance.RemoveTutorialFocusSettlement();
      StoryMode.StoryModePhases.TutorialPhase.Instance.RemoveTutorialFocusMobileParty();
    }

    internal static void AutoGeneratedStaticCollectObjectsLocateAndRescueTravellerTutorialQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._raiderParties);
      collectedObjects.Add((object) this._startQuestLog);
    }

    internal static object AutoGeneratedGetMemberValue_raiderPartyCount(object o)
    {
      return (object) ((LocateAndRescueTravellerTutorialQuest) o)._raiderPartyCount;
    }

    internal static object AutoGeneratedGetMemberValue_raiderParties(object o)
    {
      return (object) ((LocateAndRescueTravellerTutorialQuest) o)._raiderParties;
    }

    internal static object AutoGeneratedGetMemberValue_defeatedRaiderPartyCount(object o)
    {
      return (object) ((LocateAndRescueTravellerTutorialQuest) o)._defeatedRaiderPartyCount;
    }

    internal static object AutoGeneratedGetMemberValue_startQuestLog(object o)
    {
      return (object) ((LocateAndRescueTravellerTutorialQuest) o)._startQuestLog;
    }
  }
}
