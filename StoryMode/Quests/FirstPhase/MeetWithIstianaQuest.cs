// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.FirstPhase.MeetWithIstianaQuest
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
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.FirstPhase
{
  public class MeetWithIstianaQuest : StoryModeQuestBase
  {
    [SaveableField(1)]
    private bool _metImperialMentor;

    private TextObject _startQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=h9VP4ypW}Find and meet {HERO.LINK} to learn more about Neretzes' Banner. She is currently in {SETTLEMENT}.");
        StringHelpers.SetCharacterProperties("HERO", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        parent.SetTextVariable("SETTLEMENT", StoryModeHeroes.ImperialMentor.CurrentSettlement.EncyclopediaLinkWithName);
        return parent;
      }
    }

    private TextObject _endQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=kTaYz2mo}You talked with {HERO.NAME}.");
        StringHelpers.SetCharacterProperties("HERO", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    public override TextObject Title
    {
      get
      {
        TextObject parent = new TextObject("{=Y6SqyQwn}Meet with {HERO.NAME}");
        StringHelpers.SetCharacterProperties("HERO", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    public override bool IsRemainingTimeHidden => false;

    public MeetWithIstianaQuest(Settlement settlement)
      : base("meet_with_istiana_story_mode_quest", (Hero) null, StoryModeManager.Current.MainStoryLine.FirstPhase.FirstPhaseEndTime)
    {
      this._metImperialMentor = false;
      this.SetDialogs();
      HeroHelper.SpawnHeroForTheFirstTime(StoryModeHeroes.ImperialMentor, settlement);
      this.AddTrackedObject((ITrackableCampaignObject) settlement);
      this.AddTrackedObject((ITrackableCampaignObject) StoryModeHeroes.ImperialMentor);
      this.AddLog(this._startQuestLog);
    }

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void HourlyTick()
    {
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("lord_start", 110).NpcLine(new TextObject("{=5UHbg6D0}So. What brings you to me?")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero == StoryModeHeroes.ImperialMentor && !this._metImperialMentor)).PlayerLine(new TextObject("{=UDL0v1bR}I believe I have a piece of the Dragon Banner of Calradios.")).NpcLine(new TextObject("{=0P4HqZiB}Is that true?[ib:normal][if:convo_shocked]")).NpcLine(new TextObject("{=ZDEcFXIm}You may have one piece of the banner, but it's of little use in itself. You'll have to find the other parts. But once you can bring together the pieces, you'll have something of tremendous value.[if:convo_undecided_open]")).PlayerLine(new TextObject("{=t71lPdyb}How so?")).NpcLine(new TextObject("{=40oa2Nav}The banner of Calradios is part of a legend. They say it was carried by Calradios the Great as he led his small band of exiles into this land to make a new home for themselves. They say that, so long as it is carried by a true son of Calradios, he shall never be defeated in battle. Or a daughter, I imagine, although that has never come up.[ib:confident][if:convo_undecided_closed]")).NpcLine(new TextObject("{=xjduipCO}Of course our glorious armies have been defeated many times, but I guess those commanders and emperors were not 'true sons.' Clever little legend. A child could see through it, if she tried, but of course people never try to see through the noble lies that bind us together. Thank Heaven for that.[ib:closed][if:convo_pondering]")).PlayerLine(new TextObject("{=Jn4r0GjD}So, can you help me find a buyer for it?")).NpcLine(new TextObject("{=WWcG7kPr}A 'buyer'? Think bigger than that. Let me just say that, if you can find the missing pieces, I am sure I can help you put it to good use.[ib:confident2][if:convo_calm_friendly]")).PlayerLine(new TextObject("{=MnmblprY}So, where can I find the other pieces?")).NpcLine(new TextObject("{=jnOa3cbK}Before I reveal that information to you, I need to know more about your intentions. One could use the banner to restore the empire, but one could also use the banner to destroy it.[ib:closed][if:convo_angry_voice]")).NpcLine(new TextObject("{=DuUhVWaV}Let me tell you about myself... I was a confidant of the old emperor Neretzes. Officially I was not his spymaster, as I am a woman, but that was the role I played nonetheless. I liked Neretzes, and was very grateful for his trust, but he was not a good emperor. Too stubborn and principled. I probably should have poisoned him.[ib:demure2][if:convo_empathic_voice]")).NpcLine(new TextObject("{=bWdsH2Ls}This is what I learned from a lifetime in politics: There is nothing worse than disorder. Suffice to say that I know better than anyone about the lies and cruelty that kept the Empire alive. But all the murders I ever committed in 10 years of serving Neretzes do not amount to the death toll in a single hour when an army storms a town.[if:convo_snide_voice]")).NpcLine(new TextObject("{=GDNXavAl}There's nothing special about our Empire. [if:convo_calm_friendly]Any one of these petty kings and khans and sultans could probably get lucky and conquer Calradia and do as good a job ruling it as we did. But the point is - we already did it. Our greatest crimes are in the past. Let us not undo what has already been done.")).NpcLine(new TextObject("{=KXj8bsao}So... If you intend to use the banner to save the Empire, I'll tell you what I know. But if you want to go backward, not forward, then I will not help you.[ib:closed][if:convo_undecided_closed]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.ActivateAssembleTheBannerQuest)).BeginPlayerOptions().PlayerOption(new TextObject("{=IavuL9KI}Of course. I intend to use the banner to help save the Empire.")).NpcLine(new TextObject("{=FHM5GcHW}Good. Then I will tell you what I know. I heard about one other piece.[ib:normal2][if:convo_calm_friendly]")).NpcLine(new TextObject("{=4WZ9zJbF}I do not know where the other pieces are, you may need to keep searching for them.[if:convo_confused_normal]")).NpcLine(new TextObject("{=5D5lOHSL}When you have recovered all pieces, return to me and I'll help you put them to use.[if:convo_calm_friendly]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(((QuestBase) this).CompleteQuestWithSuccess))).CloseDialog().PlayerOption(new TextObject("{=EitTbGvB}I am not sure. I haven't made up my mind about this.")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._metImperialMentor = true)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Hero.OneToOneConversationHero.SetHasMet())).NpcLine(new TextObject("{=TH6L7OXu}Then you can come back when you have made up your mind.[ib:demure][if:convo_snide_voice]")).CloseDialog().EndPlayerOptions().CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("lord_start", 110).NpcLine(new TextObject("{=oaSTbNwz}So have you made up your mind now?")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero == StoryModeHeroes.ImperialMentor && this._metImperialMentor)).BeginPlayerOptions().PlayerOption(new TextObject("{=Lwdkj0hG}Yes, I intend to use the banner to help save the Empire.")).NpcLine(new TextObject("{=1CLNFbzR}Good. Then I will tell you what I know. I heard about one other piece.[ib:normal2][if:convo_calm_friendly]")).NpcLine(new TextObject("{=ijyROgb4}I do not know where the other pieces are, you may need to keep searching for them.[if:convo_thinking]")).NpcLine(new TextObject("{=TcRH7abK}When you have recovered all pieces, return to me and I'll help you put them to use.[if:convo_calm_friendly]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(((QuestBase) this).CompleteQuestWithSuccess))).CloseDialog().PlayerOption(new TextObject("{=ibm9EEPa}No, I need more time to decide.")).NpcLine(new TextObject("{=PknruSY5}Then you can come back when you have made up your mind.[ib:demure][if:convo_nonchalant]")).CloseDialog().EndPlayerOptions().CloseDialog(), (object) this);
    }

    private void ActivateAssembleTheBannerQuest()
    {
      if (Campaign.Current.QuestManager.Quests.Any<QuestBase>((Func<QuestBase, bool>) (q => q is AssembleTheBannerQuest)))
        return;
      new AssembleTheBannerQuest().StartQuest();
    }

    protected override void OnCompleteWithSuccess()
    {
      base.OnCompleteWithSuccess();
      this.AddLog(this._endQuestLog);
    }

    internal static void AutoGeneratedStaticCollectObjectsMeetWithIstianaQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    internal static object AutoGeneratedGetMemberValue_metImperialMentor(object o)
    {
      return (object) ((MeetWithIstianaQuest) o)._metImperialMentor;
    }
  }
}
