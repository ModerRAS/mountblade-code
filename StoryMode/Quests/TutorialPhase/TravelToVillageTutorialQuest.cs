// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.TutorialPhase.TravelToVillageTutorialQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.TutorialPhase
{
  public class TravelToVillageTutorialQuest : StoryModeQuestBase
  {
    private const int RefugePartyCount = 4;
    [SaveableField(1)]
    private Settlement _questVillage;
    [SaveableField(2)]
    private readonly MobileParty[] _refugeeParties;

    private TextObject _startQuestLog
    {
      get
      {
        TextObject startQuestLog = new TextObject("{=bNqLQKQS}You are out of food. There is a village called {VILLAGE_NAME} north of here where you can buy provisions and find some help.");
        startQuestLog.SetTextVariable("VILLAGE_NAME", this._questVillage.Name);
        return startQuestLog;
      }
    }

    private TextObject _endQuestLog
    {
      get => new TextObject("{=7VFLb3Qj}You have arrived at the village.");
    }

    public override TextObject Title
    {
      get
      {
        TextObject title = new TextObject("{=oa4XFhve}Travel To Village {VILLAGE_NAME}");
        title.SetTextVariable("VILLAGE_NAME", this._questVillage.Name);
        return title;
      }
    }

    public TravelToVillageTutorialQuest()
      : base("travel_to_village_tutorial_quest", (Hero) null, CampaignTime.Never)
    {
      this._questVillage = Settlement.Find("village_ES3_2");
      this.AddTrackedObject((ITrackableCampaignObject) this._questVillage);
      this._refugeeParties = new MobileParty[4];
      TextObject to = new TextObject("{=3YHL3wpM}{BROTHER.NAME}:");
      to.SetCharacterProperties("BROTHER", StoryModeHeroes.ElderBrother.CharacterObject);
      InformationManager.ShowInquiry(new InquiryData(to.ToString(), new TextObject("{=dE2ufxte}Before we do anything else... We're low on food. There's a village north of here where we can buy provisions and find some help. You're a better rider than I am so I'll let you lead the way...").ToString(), true, false, new TextObject("{=JOJ09cLW}Let's go.").ToString(), (string) null, (Action) (() => StoryModeEvents.Instance.OnTravelToVillageTutorialQuestStarted()), (Action) null));
      this.SetDialogs();
      this.InitializeQuestOnCreation();
      this.AddLog(this._startQuestLog);
      StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialFocusSettlement(this._questVillage);
      this.CreateRefugeeParties();
    }

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void HourlyTick()
    {
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000010).NpcLine(new TextObject("{=MDtTC5j5}Don't hurt us![ib:nervous][if:convo_nervous]")).Condition(new ConversationSentence.OnConditionDelegate(this.news_about_raiders_condition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.news_about_raiders_consequence)).PlayerLine(new TextObject("{=pX5cx3b4}I mean you no harm. We're hunting a group of raiders who took our brother and sister.")).NpcLine(new TextObject("{=ajBBFq1D}Aii... Those devils. They raided our village. Took whoever they could catch. Slavers, I'll bet.[if:convo_nervous][ib:nervous2]")).NpcLine(new TextObject("{=AhthUkMu}People say they're still about. We're sleeping in the woods, not going back until they're gone. You hunt them down and kill every one, you hear! Heaven protect you! Heaven guide your swords![if:convo_nervous2][ib:nervous]")).CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000020).NpcLine(new TextObject("{=pa9LrHln}We're here, I guess. So... We need food, and after that, maybe some men to come with us.[if:convo_thinking]")).Condition((ConversationSentence.OnConditionDelegate) (() => Settlement.CurrentSettlement != null && Settlement.CurrentSettlement == this._questVillage && Hero.OneToOneConversationHero == StoryModeHeroes.ElderBrother)).NpcLine(new TextObject("{=p0fmZY5r}The headman here can probably help us. Let's try to find him...[if:convo_pondering]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.talk_with_brother_consequence)).CloseDialog(), (object) this);
    }

    private bool news_about_raiders_condition()
    {
      return Settlement.CurrentSettlement == null && MobileParty.ConversationParty != null && ((IEnumerable<MobileParty>) this._refugeeParties).Contains<MobileParty>(MobileParty.ConversationParty);
    }

    private void news_about_raiders_consequence() => PlayerEncounter.LeaveEncounter = true;

    private void talk_with_brother_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(((QuestBase) this).CompleteQuestWithSuccess);
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      CampaignEvents.BeforeMissionOpenedEvent.AddNonSerializedListener((object) this, new Action(this.OnBeforeMissionOpened));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      StoryModeEvents.OnTravelToVillageTutorialQuestStartedEvent.AddNonSerializedListener((object) this, new Action(this.OnTravelToVillageTutorialQuestStarted));
    }

    private void OnGameMenuOpened(MenuCallbackArgs args)
    {
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.IsCompleted || Settlement.CurrentSettlement != null || PlayerEncounter.EncounteredParty == null || !(args.MenuContext.GameMenu.StringId != "encounter_meeting") || !(args.MenuContext.GameMenu.StringId != "encounter"))
        return;
      if (((IEnumerable<MobileParty>) this._refugeeParties).Contains<MobileParty>(PlayerEncounter.EncounteredMobileParty))
      {
        GameMenu.SwitchToMenu("encounter_meeting");
      }
      else
      {
        PlayerEncounter.Finish();
        InformationManager.ShowInquiry(new InquiryData(new TextObject("{=EWD4Op6d}Notification").ToString(), new TextObject("{=pVKkclVk}Interactions are limited during tutorial phase. This interaction is disabled.").ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) null, (Action) null));
      }
    }

    private void OnBeforeMissionOpened()
    {
      if (Settlement.CurrentSettlement == null || Settlement.CurrentSettlement != Settlement.Find("village_ES3_2"))
        return;
      int hitPoints = StoryModeHeroes.ElderBrother.HitPoints;
      int num = 50;
      if (hitPoints < num)
        StoryModeHeroes.ElderBrother.Heal(num - hitPoints);
      PlayerEncounter.LocationEncounter.AddAccompanyingCharacter(LocationComplex.Current.GetLocationCharacterOfHero(StoryModeHeroes.ElderBrother), true);
    }

    private void DailyTick()
    {
      for (int index = 0; index < this._refugeeParties.Length; ++index)
      {
        if (this._refugeeParties[index].Party.IsStarving)
          this._refugeeParties[index].Party.ItemRoster.AddToCounts(DefaultItems.Grain, 2);
      }
    }

    private void OnTravelToVillageTutorialQuestStarted()
    {
      if (!(GameStateManager.Current.ActiveState is MapState activeState))
        return;
      activeState.Handler.StartCameraAnimation(this._questVillage.GatePosition, 1f);
    }

    private void CreateRefugeeParties()
    {
      for (int i = 0; i < 4; i++)
        MobileParty.CreateParty("travel_to_village_quest_refuge_party_" + (object) i, (PartyComponent) null, (PartyComponent.OnPartyComponentCreatedDelegate) (party => this.OnRefugeePartyCreated(party, i)));
    }

    private void OnRefugeePartyCreated(MobileParty refugeeParty, int index)
    {
      CharacterObject characterObject1 = MBObjectManager.Instance.GetObject<CharacterObject>("storymode_quest_refugee_female");
      CharacterObject characterObject2 = MBObjectManager.Instance.GetObject<CharacterObject>("storymode_quest_refugee_male");
      TroopRoster memberRoster = new TroopRoster(refugeeParty.Party);
      int num = MBRandom.RandomInt(6, 12);
      for (int index1 = 0; index1 < num; ++index1)
        memberRoster.AddToCounts((double) MBRandom.RandomFloat < 0.5 ? characterObject1 : characterObject2, 1);
      refugeeParty.InitializeMobilePartyAroundPosition(memberRoster, new TroopRoster(refugeeParty.Party), this._questVillage.Position2D, MobileParty.MainParty.SeeingRange);
      refugeeParty.SetCustomName(new TextObject("{=7FWF01bW}Refugees"));
      refugeeParty.InitializePartyTrade(200);
      refugeeParty.Party.SetCustomOwner(this._questVillage.OwnerClan.Leader);
      refugeeParty.SetCustomHomeSettlement(this._questVillage);
      SetPartyAiAction.GetActionForPatrollingAroundSettlement(refugeeParty, this._questVillage);
      refugeeParty.Ai.SetDoNotMakeNewDecisions(true);
      refugeeParty.IgnoreByOtherPartiesTill(CampaignTime.Never);
      refugeeParty.SetPartyUsedByQuest(true);
      refugeeParty.Party.ItemRoster.AddToCounts(DefaultItems.Grain, 2);
      this._refugeeParties[index] = refugeeParty;
    }

    protected override void OnCompleteWithSuccess()
    {
      foreach (MobileParty destroyedParty in ((IEnumerable<MobileParty>) this._refugeeParties).ToList<MobileParty>())
        DestroyPartyAction.Apply((PartyBase) null, destroyedParty);
      this.AddLog(this._endQuestLog);
      StoryMode.StoryModePhases.TutorialPhase.Instance.RemoveTutorialFocusSettlement();
    }

    internal static void AutoGeneratedStaticCollectObjectsTravelToVillageTutorialQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._questVillage);
      collectedObjects.Add((object) this._refugeeParties);
    }

    internal static object AutoGeneratedGetMemberValue_questVillage(object o)
    {
      return (object) ((TravelToVillageTutorialQuest) o)._questVillage;
    }

    internal static object AutoGeneratedGetMemberValue_refugeeParties(object o)
    {
      return (object) ((TravelToVillageTutorialQuest) o)._refugeeParties;
    }
  }
}
