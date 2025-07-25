// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.TutorialPhase.TalkToTheHeadmanTutorialQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using StoryMode.StoryModePhases;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.TutorialPhase
{
  public class TalkToTheHeadmanTutorialQuest : StoryModeQuestBase
  {
    [SaveableField(1)]
    private readonly Hero _headman;
    [SaveableField(2)]
    private RecruitTroopsTutorialQuest _recruitTroopsQuest;
    [SaveableField(3)]
    private PurchaseGrainTutorialQuest _purchaseGrainQuest;

    private TextObject _startQuestLog
    {
      get
      {
        return new TextObject("{=rinefpgo}You have arrived at the village. You can buy some food and hire some men to help hunt for the raiders. First go into the village and talk to the headman.");
      }
    }

    private TextObject _readyToGoLog
    {
      get
      {
        return new TextObject("{=KhL2ctsi}You're ready to leave now. Talk to the headman again. He had said he has a task for you.");
      }
    }

    private TextObject _goBackToVillageMenuLog
    {
      get
      {
        return new TextObject("{=awgBkdXx}You should go back to the village menu and make your preparations to go after the raiders, then find out about the task that the headman has for you.");
      }
    }

    public override TextObject Title
    {
      get
      {
        TextObject parent = new TextObject("{=HqlXdzcv}Talk with Headman {HEADMAN.FIRSTNAME}");
        StringHelpers.SetCharacterProperties("HEADMAN", this._headman.CharacterObject, parent);
        return parent;
      }
    }

    public TalkToTheHeadmanTutorialQuest(Hero headman)
      : base("talk_to_the_headman_tutorial_quest", (Hero) null, CampaignTime.Never)
    {
      this._headman = headman;
      this.AddTrackedObject((ITrackableCampaignObject) this._headman);
      this.SetDialogs();
      this.InitializeQuestOnCreation();
      this.AddLog(this._startQuestLog);
      StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialFocusSettlement(Settlement.CurrentSettlement);
    }

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void HourlyTick()
    {
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      CampaignEvents.BeforeMissionOpenedEvent.AddNonSerializedListener((object) this, new Action(this.OnBeforeMissionOpened));
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000010).NpcLine(new TextObject("{=YEeb0B1V}I am {HEADMAN.FIRSTNAME}, headman of this village. What brings you here?[ib:normal][if:convo_shocked]")).Condition(new ConversationSentence.OnConditionDelegate(this.headman_quest_conversation_start_on_condition)).PlayerLine(new TextObject("{=StLYbEQZ}We need help. Some raiders have taken our younger brother and sister captive. We think they may have passed this way.")).NpcLine(new TextObject("{=uNgu02FH}They got your people too? Sorry to hear that. Those bastards have done a bit of killing and looting in these parts as well.[ib:normal2][if:convo_dismayed]")).NpcLine(new TextObject("{=bNcGO33Q}We think they've gone north. I reckon there are a few folk around here who'll join you in going after them if you'll pay for their gear.[if:convo_thinking]")).NpcLine(new TextObject("{=5Mw4trfs}Once you've made your preparations, come and talk to me again. I may have a task for you if you are going after the raiders.[if:convo_pondering]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.headman_quest_conversation_end_on_consequence)).CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000009).NpcLine(new TextObject("{=uhYXopnJ}Have you finished your preparations?[if:convo_undecided_open]")).Condition((ConversationSentence.OnConditionDelegate) (() =>
      {
        if (Hero.OneToOneConversationHero != this._headman)
          return false;
        return !this._recruitTroopsQuest.IsFinalized || !this._purchaseGrainQuest.IsFinalized;
      })).PlayerLine(new TextObject("{=elJCacQO}I am working on it.")).CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000010).NpcLine(new TextObject("{=TIaVyqMx}Glad to see you found what you needed. Now, about that matter I mentioned earlier...[if:convo_grave]")).Condition(new ConversationSentence.OnConditionDelegate(this.headman_quest_end_conversation_start_on_condition)).NpcLine(new TextObject("{=lnAhXvbo}There's this wandering doctor who comes through here from time to time. Name of Tacteos. Treats people for free... We're fond of him.[if:convo_thinking]")).NpcLine(new TextObject("{=xGdoz9Pn}Well, we last saw him a few days ago. He was carrying some sort of chest, which he was very mysterious about. He was on some sort of 'quest', he said, though wouldn't tell us more.[if:convo_pondering]")).NpcLine(new TextObject("{=WDylM3dx}He set off on the road just a few hours before the raiders came through here. Well, he's not really a worldly type, just the kind of fellow who'd stumble into a trap and let himself be captured. We're worried about him.[if:convo_dismayed]")).NpcLine(new TextObject("{=MREvo37b}If you can keep an eye out for him, this Tacteos, we'd be very grateful. Maybe, if he's alive and well, he'll tell you a little more about his 'quest.'[if:convo_normal]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.headman_quest_end_conversation_start_on_consequence)).CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000009).NpcLine(new TextObject("{=gX0RzZoT}Let's just go speak to the headman.")).Condition(new ConversationSentence.OnConditionDelegate(this.headman_quest_conversation_talk_with_brother_on_condition)).CloseDialog(), (object) this);
    }

    private bool headman_quest_conversation_start_on_condition()
    {
      StringHelpers.SetCharacterProperties("HEADMAN", this._headman.CharacterObject);
      return Hero.OneToOneConversationHero == this._headman && !this._headman.HasMet;
    }

    private bool headman_quest_conversation_talk_with_brother_on_condition()
    {
      StringHelpers.SetCharacterProperties("BROTHER", StoryModeHeroes.ElderBrother.CharacterObject);
      return Hero.OneToOneConversationHero == StoryModeHeroes.ElderBrother && !this._headman.HasMet;
    }

    private void headman_quest_conversation_end_on_consequence()
    {
      this._headman.SetHasMet();
      this._headman.SetPersonalRelation(Hero.MainHero, 100);
      this._recruitTroopsQuest = new RecruitTroopsTutorialQuest(this._headman);
      this._recruitTroopsQuest.StartQuest();
      this._purchaseGrainQuest = new PurchaseGrainTutorialQuest(this._headman);
      this._purchaseGrainQuest.StartQuest();
      StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialQuestPhase(TutorialQuestPhase.RecruitAndPurchaseStarted);
      this.AddLog(this._goBackToVillageMenuLog);
    }

    private bool headman_quest_end_conversation_start_on_condition()
    {
      return Hero.OneToOneConversationHero == this._headman && this._recruitTroopsQuest.IsFinalized && this._purchaseGrainQuest.IsFinalized;
    }

    private void headman_quest_end_conversation_start_on_consequence()
    {
      StoryMode.StoryModePhases.TutorialPhase.Instance.SetLockTutorialVillageEnter(false);
      this.CompleteQuestWithSuccess();
    }

    protected override void OnCompleteWithSuccess()
    {
      StoryMode.StoryModePhases.TutorialPhase.Instance.RemoveTutorialFocusSettlement();
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      if (!this._recruitTroopsQuest.IsFinalized || !this._purchaseGrainQuest.IsFinalized)
        return;
      StoryMode.StoryModePhases.TutorialPhase.Instance.SetLockTutorialVillageEnter(true);
      TextObject to = new TextObject("{=3YHL3wpM}{BROTHER.NAME}:");
      to.SetCharacterProperties("BROTHER", StoryModeHeroes.ElderBrother.CharacterObject);
      InformationManager.ShowInquiry(new InquiryData(to.ToString(), new TextObject("{=1xqmoDvS}We have finished our preparations. Let's talk to the headman again. He had said he may have a task for us. We could use his friendship.").ToString(), true, false, new TextObject("{=lmG7uRK2}Okay").ToString(), (string) null, (Action) null, (Action) null));
      this.AddLog(this._readyToGoLog);
    }

    private void OnBeforeMissionOpened()
    {
      if (Settlement.CurrentSettlement == null || !(Settlement.CurrentSettlement.StringId == "village_ES3_2"))
        return;
      int hitPoints = StoryModeHeroes.ElderBrother.HitPoints;
      int num = 50;
      if (hitPoints < num)
        StoryModeHeroes.ElderBrother.Heal(num - hitPoints);
      LocationCharacter locationCharacterOfHero = LocationComplex.Current.GetLocationCharacterOfHero(StoryModeHeroes.ElderBrother);
      locationCharacterOfHero.CharacterRelation = LocationCharacter.CharacterRelations.Neutral;
      PlayerEncounter.LocationEncounter.AddAccompanyingCharacter(locationCharacterOfHero, true);
    }

    internal static void AutoGeneratedStaticCollectObjectsTalkToTheHeadmanTutorialQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._headman);
      collectedObjects.Add((object) this._recruitTroopsQuest);
      collectedObjects.Add((object) this._purchaseGrainQuest);
    }

    internal static object AutoGeneratedGetMemberValue_headman(object o)
    {
      return (object) ((TalkToTheHeadmanTutorialQuest) o)._headman;
    }

    internal static object AutoGeneratedGetMemberValue_recruitTroopsQuest(object o)
    {
      return (object) ((TalkToTheHeadmanTutorialQuest) o)._recruitTroopsQuest;
    }

    internal static object AutoGeneratedGetMemberValue_purchaseGrainQuest(object o)
    {
      return (object) ((TalkToTheHeadmanTutorialQuest) o)._purchaseGrainQuest;
    }
  }
}
