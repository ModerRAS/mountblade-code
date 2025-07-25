// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.FirstPhase.AssembleTheBannerQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.FirstPhase
{
  public class AssembleTheBannerQuest : StoryModeQuestBase
  {
    [SaveableField(1)]
    private JournalLog _startLog;
    [SaveableField(2)]
    private bool _talkedWithImperialMentor;
    [SaveableField(3)]
    private bool _talkedWithAntiImperialMentor;

    private TextObject _startQuestLog
    {
      get
      {
        return new TextObject("{=OS8YjyE5}You should collect all of the pieces of the Dragon Banner before deciding your path.");
      }
    }

    private TextObject _allPiecesCollectedQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=eV8R0SKp}Now you can decide what to do with the {DRAGON_BANNER}.");
        parent.SetTextVariable("DRAGON_BANNER", StoryModeManager.Current.MainStoryLine.DragonBanner.Name);
        StringHelpers.SetCharacterProperties("IMPERIAL_MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        StringHelpers.SetCharacterProperties("ANTI_IMPERIAL_MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _talkedWithImperialMentorButNotWithAntiImperialMentorQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=yNcBDr9j}You talked with {IMPERIAL_MENTOR.LINK}. Now, you may want to talk with {ANTI_IMPERIAL_MENTOR.LINK} and take {?ANTI_IMPERIAL_MENTOR.GENDER}her{?}his{\\?} opinions too. {?ANTI_IMPERIAL_MENTOR.GENDER}She{?}He{\\?} is currently in {SETTLEMENT_LINK}.");
        StringHelpers.SetCharacterProperties("IMPERIAL_MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        StringHelpers.SetCharacterProperties("ANTI_IMPERIAL_MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        parent.SetTextVariable("SETTLEMENT_LINK", StoryModeHeroes.AntiImperialMentor.CurrentSettlement.EncyclopediaLinkWithName);
        return parent;
      }
    }

    private TextObject _talkedWithImperialMentorQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=RwlDeE9t}You talked with {IMPERIAL_MENTOR.LINK} too. Now you should make a decision.");
        StringHelpers.SetCharacterProperties("IMPERIAL_MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _talkedWithAntiImperialMentorButNotWithImperialMentorQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=yub8ZSFP}You talked with {ANTI_IMPERIAL_MENTOR.LINK}. Now, you may want to talk with {IMPERIAL_MENTOR.LINK} and take {?IMPERIAL_MENTOR.GENDER}her{?}his{\\?} opinions too. {?IMPERIAL_MENTOR.GENDER}She{?}He{\\?} is currently in {SETTLEMENT_LINK}.");
        StringHelpers.SetCharacterProperties("ANTI_IMPERIAL_MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        StringHelpers.SetCharacterProperties("IMPERIAL_MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        parent.SetTextVariable("SETTLEMENT_LINK", StoryModeHeroes.ImperialMentor.CurrentSettlement.EncyclopediaLinkWithName);
        return parent;
      }
    }

    private TextObject _talkedWithAntiImperialMentorQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=rfkKxdxp}You talked with {ANTI_IMPERIAL_MENTOR.LINK} too. Now you should make a decision.");
        StringHelpers.SetCharacterProperties("ANTI_IMPERIAL_MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _endQuestLog
    {
      get
      {
        return new TextObject("{=eNJBjYG8}You successfully assembled the Dragon Banner of Calradios.");
      }
    }

    public override TextObject Title => new TextObject("{=y84UnOQX}Assemble the Dragon Banner");

    public override bool IsRemainingTimeHidden => false;

    public AssembleTheBannerQuest()
      : base("assemble_the_banner_story_mode_quest", (Hero) null, StoryModeManager.Current.MainStoryLine.FirstPhase.FirstPhaseEndTime)
    {
      this._talkedWithImperialMentor = false;
      this._talkedWithAntiImperialMentor = false;
    }

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void HourlyTick()
    {
    }

    protected override void RegisterEvents()
    {
      StoryModeEvents.OnBannerPieceCollectedEvent.AddNonSerializedListener((object) this, new Action(this.OnBannerPieceCollected));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
    }

    protected override void OnStartQuest()
    {
      this.SetDialogs();
      this._startLog = this.AddDiscreteLog(this._startQuestLog, new TextObject("{=xL3WGYsw}Collected Pieces"), StoryMode.StoryModePhases.FirstPhase.Instance.CollectedBannerPieceCount, 3);
    }

    protected override void OnCompleteWithSuccess() => this.AddLog(this._endQuestLog);

    private void OnBannerPieceCollected()
    {
      this._startLog.UpdateCurrentProgress(StoryMode.StoryModePhases.FirstPhase.Instance.CollectedBannerPieceCount);
      if (!StoryMode.StoryModePhases.FirstPhase.Instance.AllPiecesCollected)
        return;
      this.AddLog(this._allPiecesCollectedQuestLog);
      this.AddTrackedObject((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor.CurrentSettlement);
      this.AddTrackedObject((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor.CurrentSettlement);
      this.AddTrackedObject((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor);
      this.AddTrackedObject((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor);
      StoryModeManager.Current.MainStoryLine.FirstPhase?.MergeDragonBanner();
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      switch (quest)
      {
        case CreateKingdomQuest _:
        case SupportKingdomQuest _:
          if (this.IsTracked((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor.CurrentSettlement))
            this.RemoveTrackedObject((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor.CurrentSettlement);
          if (this.IsTracked((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor.CurrentSettlement))
            this.RemoveTrackedObject((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor.CurrentSettlement);
          if (this.IsTracked((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor))
            this.RemoveTrackedObject((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor);
          if (this.IsTracked((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor))
            this.RemoveTrackedObject((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor);
          this.CompleteQuestWithSuccess();
          break;
      }
    }

    public override void OnFailed()
    {
      base.OnFailed();
      this.RemoveRemainingBannerPieces();
    }

    public override void OnCanceled()
    {
      base.OnCanceled();
      this.RemoveRemainingBannerPieces();
    }

    private void RemoveRemainingBannerPieces()
    {
      ItemObject itemObject1 = Campaign.Current.ObjectManager.GetObject<ItemObject>("dragon_banner_center");
      ItemObject itemObject2 = Campaign.Current.ObjectManager.GetObject<ItemObject>("dragon_banner_dragonhead");
      ItemObject itemObject3 = Campaign.Current.ObjectManager.GetObject<ItemObject>("dragon_banner_handle");
      foreach (ItemRosterElement itemRosterElement in MobileParty.MainParty.ItemRoster)
      {
        if (itemRosterElement.EquipmentElement.Item == itemObject1 || itemRosterElement.EquipmentElement.Item == itemObject2 || itemRosterElement.EquipmentElement.Item == itemObject3)
          MobileParty.MainParty.ItemRoster.Remove(itemRosterElement);
      }
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(this.GetImperialMentorEndQuestDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(this.GetAntiImperialMentorEndQuestDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("lord_start", 150).NpcLine(new TextObject("{=AHDQffXv}Have you assembled the banner?")).Condition(new ConversationSentence.OnConditionDelegate(this.AssembleBannerConditionDialogCondition)).PlayerLine(new TextObject("{=2h7IlBmv}Not yet, I'm working on it...")).Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
      {
        if (PlayerEncounter.Current == null)
          return;
        PlayerEncounter.LeaveEncounter = true;
      })).CloseDialog(), (object) this);
    }

    private bool AssembleBannerConditionDialogCondition()
    {
      return (Hero.OneToOneConversationHero == StoryModeHeroes.ImperialMentor || Hero.OneToOneConversationHero == StoryModeHeroes.AntiImperialMentor) && !StoryMode.StoryModePhases.FirstPhase.Instance.AllPiecesCollected && (Hero.OneToOneConversationHero != StoryModeHeroes.ImperialMentor || !Campaign.Current.QuestManager.Quests.Any<QuestBase>((Func<QuestBase, bool>) (q => !q.IsFinalized && q is MeetWithIstianaQuest))) && (Hero.OneToOneConversationHero != StoryModeHeroes.AntiImperialMentor || !Campaign.Current.QuestManager.Quests.Any<QuestBase>((Func<QuestBase, bool>) (q => !q.IsFinalized && q is MeetWithArzagosQuest)));
    }

    private DialogFlow GetAntiImperialMentorEndQuestDialog()
    {
      string oState;
      return DialogFlow.CreateDialogFlow("hero_main_options", 150).BeginPlayerOptions().PlayerSpecialOption(new TextObject("{=r8ZLabb0}I have gathered all pieces of the Dragon Banner. What now?")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == StoryModeHeroes.AntiImperialMentor && StoryMode.StoryModePhases.FirstPhase.Instance.AllPiecesCollected && !this._talkedWithAntiImperialMentor)).NpcLine(new TextObject("{=5j6qvGAF}Excellent work! When you unfurl this banner, and men see what they thought was lost, it will make a powerful impression.[ib:normal2][if:convo_astonished]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.GetAntiImperialQuests)).NpcLine(new TextObject("{=MOVWOyeh}Clearly you have been chosen by Heaven for a great purpose. I see the makings of a new legend here... Allow me to call you 'Bannerlord.'[ib:normal][if:convo_relaxed_happy]")).NpcLine(new TextObject("{=o791xRtb}Right then, to the business of bringing down this cursed Empire. As I see it, you have two options...[ib:confident2][if:convo_pondering]")).GetOutputToken(out oState).NpcLine(new TextObject("{=c6pDNXbb}You can create your own kingdom or support an existing one...[if:convo_normal]")).BeginPlayerOptions().PlayerOption(new TextObject("{=0pilmavQ}How can I create my own kingdom?")).NpcLine(new TextObject("{=frk7T3ue}It will not be easy, but I can explain in detail...")).NpcLine(new TextObject("{=rmyXSgy7}Firstly, your clan must be independent. You cannot be pledged to an existing realm.")).NpcLine(new TextObject("{=tJQ5oajd}Next, your clan must have won for itself considerable renown, or no one will follow you.")).NpcLine(new TextObject("{=MJd5agS2}I would recommend that you gather a fairly large army, as you may soon be at war with more powerful and established realms.")).NpcLine(new TextObject("{=6YhGGJ7a}Finally, you need a capital for your realm. It can be any settlement you own, so long as they do not speak the imperial tongue. I will not help you create another Empire.")).NpcLine(new TextObject("{=fprOWs1E}Now, when you are ready to declare your new kingdom, instruct the governor of your capital to have a proclamation read out throughout your lands.")).NpcLine(new TextObject("{=Q2obAF4E}So! You have much to do. I will await news of your success. Return to me when you wish to declare your ownership of the banner to the world.")).GotoDialogState(oState).PlayerOption(new TextObject("{=mtiaY2Pa}How can I support an existing kingdom?")).NpcLine(new TextObject("{=oKknZdXn}You should join the kingdom that you wish to support by talking to the leader. None will bring back the Palaic people, but the final victory of any one of those would be suitable vengeance.")).NpcLine(new TextObject("{=dPb2Vph3}My informants will tell me once you pledged your support...[ib:normal2][if:convo_nonchalant]")).GotoDialogState(oState).PlayerOption(new TextObject("{=6LQUuQhV}Thank you for your precious help.")).CloseDialog().EndPlayerOptions().CloseDialog();
    }

    private void GetAntiImperialQuests()
    {
      this._talkedWithAntiImperialMentor = true;
      if (!this._talkedWithImperialMentor)
        this.AddLog(this._talkedWithAntiImperialMentorButNotWithImperialMentorQuestLog);
      else
        this.AddLog(this._talkedWithAntiImperialMentorQuestLog);
      if (this.IsTracked((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor.CurrentSettlement))
        this.RemoveTrackedObject((ITrackableCampaignObject) StoryModeHeroes.AntiImperialMentor.CurrentSettlement);
      new CreateKingdomQuest(StoryModeHeroes.AntiImperialMentor).StartQuest();
      new SupportKingdomQuest(StoryModeHeroes.AntiImperialMentor).StartQuest();
    }

    private DialogFlow GetImperialMentorEndQuestDialog()
    {
      string oState;
      return DialogFlow.CreateDialogFlow("hero_main_options", 150).BeginPlayerOptions().PlayerSpecialOption(new TextObject("{=r8ZLabb0}I have gathered all pieces of the Dragon Banner. What now?")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == StoryModeHeroes.ImperialMentor && StoryMode.StoryModePhases.FirstPhase.Instance.AllPiecesCollected && !this._talkedWithImperialMentor)).NpcLine(new TextObject("{=UjyZ7GFk}Impressive, most impressive. Well, things will get interesting now.[ib:normal2][if:convo_astonished]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.GetImperialQuests)).NpcLine(new TextObject("{=9E6faNBg}I will need to embroider a proper legend about you. Divine omens at your birth, that kind of thing. For now, we can call you 'Bannerlord,' who brings down the wrath of Heaven on the impudent barbarians.[ib:confident2][if:convo_relaxed_happy]")).NpcLine(new TextObject("{=CnXA7oyE}Now, there are two paths that lie ahead of you, my child!")).GetOutputToken(out oState).NpcLine(new TextObject("{=1GgTNRNl}You can make your own claim to the rulership of the Empire and try to win the civil war, or support an existing claimant...[if:convo_normal]")).BeginPlayerOptions().PlayerOption(new TextObject("{=Dgdopl1b}How can I create my own imperial kingdom?")).NpcLine(new TextObject("{=NdkqUnXb}To have a chance as an imperial contender, you must fullfil some conditions.[if:convo_empathic_voice]")).NpcLine(new TextObject("{=yCzcfKNM}Firstly, your clan must be independent. You cannot be pledged to an existing realm.")).NpcLine(new TextObject("{=LLJ0oB8i}Next, your clan's renown must have spread far and wide, or no one will take you seriously.")).NpcLine(new TextObject("{=3XbTo6O7}Also, of course, I recommend that you have as large an army as you can gather.")).NpcLine(new TextObject("{=Cl4xi6Be}Finally, you need a capital. Any settlement will do, so long as the inhabitants speak the imperial language.[if:convo_focused_voice]")).NpcLine(new TextObject("{=fprOWs1E}Now, when you are ready to declare your new kingdom, instruct the governor of your capital to have a proclamation read out throughout your lands.")).NpcLine(new TextObject("{=tkJD40hE}Well, that should keep you busy for a while. Come back when you are ready.")).GotoDialogState(oState).PlayerOption(new TextObject("{=tRzjuX0E}How can I support an existing imperial claimant?")).NpcLine(new TextObject("{=oL9BdThD}Choose one and pledge allegiance. When this civil war began, I was a bit torn... Rhagaea was the cleverest ruler, Garios probably the best fighter, and Lucon seemed to have the best grasp of our laws and traditions. But you can make up your own mind.")).NpcLine(new TextObject("{=eaxOH9mb}My little birds will tell me once you pledge your support...[if:convo_nonchalant]")).GotoDialogState(oState).PlayerOption(new TextObject("{=6LQUuQhV}Thank you for your precious help.")).CloseDialog().EndPlayerOptions().CloseDialog();
    }

    private void GetImperialQuests()
    {
      this._talkedWithImperialMentor = true;
      if (!this._talkedWithAntiImperialMentor)
        this.AddLog(this._talkedWithImperialMentorButNotWithAntiImperialMentorQuestLog);
      else
        this.AddLog(this._talkedWithImperialMentorQuestLog);
      if (this.IsTracked((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor.CurrentSettlement))
        this.RemoveTrackedObject((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor.CurrentSettlement);
      new CreateKingdomQuest(StoryModeHeroes.ImperialMentor).StartQuest();
      new SupportKingdomQuest(StoryModeHeroes.ImperialMentor).StartQuest();
    }

    internal static void AutoGeneratedStaticCollectObjectsAssembleTheBannerQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._startLog);
    }

    internal static object AutoGeneratedGetMemberValue_startLog(object o)
    {
      return (object) ((AssembleTheBannerQuest) o)._startLog;
    }

    internal static object AutoGeneratedGetMemberValue_talkedWithImperialMentor(object o)
    {
      return (object) ((AssembleTheBannerQuest) o)._talkedWithImperialMentor;
    }

    internal static object AutoGeneratedGetMemberValue_talkedWithAntiImperialMentor(object o)
    {
      return (object) ((AssembleTheBannerQuest) o)._talkedWithAntiImperialMentor;
    }
  }
}
