// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.FirstPhase.SupportKingdomQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.SceneInformationPopupTypes;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.FirstPhase
{
  public class SupportKingdomQuest : StoryModeQuestBase
  {
    [SaveableField(1)]
    private bool _isImperial;
    [SaveableField(2)]
    private Kingdom _playerRuledKingdom;

    public SupportKingdomQuest(Hero questGiver)
      : base("main_storyline_support_kingdom_quest_" + (StoryModeHeroes.ImperialMentor == questGiver ? "1" : "0"), questGiver, StoryModeManager.Current.MainStoryLine.FirstPhase.FirstPhaseEndTime)
    {
      this._isImperial = StoryModeHeroes.ImperialMentor == questGiver;
      this.SetDialogs();
      if (this._isImperial)
      {
        this.AddLog(this._onQuestStartedImperialLogText);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetImperialKingDialogueFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetImperialMentorDialogueFlow(), (object) this);
      }
      else
      {
        this.AddLog(this._onQuestStartedAntiImperialLogText);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetAntiImperialKingDialogueFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetAntiImperialMentorDialogueFlow(), (object) this);
      }
      this.InitializeQuestOnCreation();
    }

    public override TextObject Title
    {
      get
      {
        TextObject title = new TextObject("{=XtC0hXhr}Support {?IS_IMPERIAL}an imperial faction{?}a non-imperial kingdom{\\?}");
        title.SetTextVariable("IS_IMPERIAL", this._isImperial ? 1 : 0);
        return title;
      }
    }

    private TextObject _onQuestStartedImperialLogText
    {
      get
      {
        TextObject parent = new TextObject("{=TZZX9kWf}{MENTOR.LINK} suggested that you should support an imperial faction by offering them the Dragon Banner.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _onQuestStartedAntiImperialLogText
    {
      get
      {
        TextObject parent = new TextObject("{=4d5SP6B6}{MENTOR.LINK} suggested that you should support an anti-imperial kingdom by offering them the Dragon Banner.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _onImperialKingdomSupportedLogText
    {
      get
      {
        TextObject parent = new TextObject("{=atUTLABh}You have chosen to support the {KINGDOM} by presenting them the Dragon Banner, taking the advice of {MENTOR.LINK}.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        parent.SetTextVariable("KINGDOM", Clan.PlayerClan.Kingdom.EncyclopediaLinkWithName);
        return parent;
      }
    }

    private TextObject _onAntiImperialKingdomSupportedLogText
    {
      get
      {
        TextObject parent = new TextObject("{=atUTLABh}You have chosen to support the {KINGDOM} by presenting them the Dragon Banner, taking the advice of {MENTOR.LINK}.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        parent.SetTextVariable("KINGDOM", Clan.PlayerClan.Kingdom.EncyclopediaLinkWithName);
        return parent;
      }
    }

    private TextObject _onPlayerRuledKingdomSupportedLogText
    {
      get
      {
        return new TextObject("{=kqj1Wp0f}You have decided to keep the Dragon Banner within the kingdom you are ruling.");
      }
    }

    private TextObject _questFailedLogText
    {
      get => new TextObject("{=tVlZTOst}You have chosen a different path.");
    }

    public override bool IsRemainingTimeHidden => false;

    protected override void SetDialogs()
    {
      this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=9tpTkKdY}Tell me which path you choose when you've made progress.")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).CloseDialog();
    }

    private DialogFlow GetImperialKingDialogueFlow()
    {
      return DialogFlow.CreateDialogFlow("hero_main_options", 300).BeginPlayerOptions().PlayerSpecialOption(new TextObject("{=Ke7f4XSC}I present you with the Dragon Banner of Calradios.")).ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.CheckConditionToSupportKingdom)).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero.Clan != null && Hero.OneToOneConversationHero.Clan.Kingdom != null && Hero.OneToOneConversationHero.Clan.Kingdom.Leader == Hero.OneToOneConversationHero && StoryModeData.IsKingdomImperial(Hero.OneToOneConversationHero.Clan.Kingdom))).NpcLine("{=PQgzfHLk}Well now. I had heard rumors that you had obtained this great artifact.[if:convo_nonchalant]").NpcLine("{=ULn7iWlz}It will be a powerful tool in our hands. People will believe that the Heavens intend us to restore the Empire of Calradia.[if:convo_pondering]").NpcLine("{=S1yCTPrL}This is one of the most valuable services anyone has ever done for me. I am very grateful.[if:convo_grateful]").Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
      {
        this.OnKingdomSupported(Hero.OneToOneConversationHero.Clan.Kingdom, true);
        if (PlayerEncounter.Current != null)
          PlayerEncounter.LeaveEncounter = true;
        TextObject message = new TextObject("{=IL4FcHXv}You've pledged your allegiance to the {KINGDOM_NAME}!");
        message.SetTextVariable("KINGDOM_NAME", Hero.OneToOneConversationHero.Clan.Kingdom.Name);
        MBInformationManager.AddQuickInformation(message);
      })).CloseDialog().EndPlayerOptions().CloseDialog();
    }

    private DialogFlow GetAntiImperialKingDialogueFlow()
    {
      return DialogFlow.CreateDialogFlow("hero_main_options", 300).BeginPlayerOptions().PlayerSpecialOption(new TextObject("{=Ke7f4XSC}I present you with the Dragon Banner of Calradios.")).ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.CheckConditionToSupportKingdom)).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero.Clan != null && Hero.OneToOneConversationHero.Clan.Kingdom != null && Hero.OneToOneConversationHero.Clan.Kingdom.Leader == Hero.OneToOneConversationHero && !StoryModeData.IsKingdomImperial(Hero.OneToOneConversationHero.Clan.Kingdom))).NpcLine("{=PQgzfHLk}Well now. I had heard rumors that you had obtained this great artifact.[if:convo_nonchalant]").NpcLine("{=4olAbDTq}It will be a powerful tool in our hands. People will believe that the Heavens have transferred dominion over Calradia from the Empire to us.[if:convo_pondering]").NpcLine("{=S1yCTPrL}This is one of the most valuable services anyone has ever done for me. I am very grateful.[if:convo_grateful]").Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
      {
        this.OnKingdomSupported(Hero.OneToOneConversationHero.Clan.Kingdom, false);
        if (PlayerEncounter.Current != null)
          PlayerEncounter.LeaveEncounter = true;
        TextObject message = new TextObject("{=IL4FcHXv}You've pledged your allegiance to the {KINGDOM_NAME}!");
        message.SetTextVariable("KINGDOM_NAME", Hero.OneToOneConversationHero.Clan.Kingdom.Name);
        MBInformationManager.AddQuickInformation(message);
      })).CloseDialog().EndPlayerOptions().CloseDialog();
    }

    private DialogFlow GetImperialMentorDialogueFlow()
    {
      return DialogFlow.CreateDialogFlow("hero_main_options", 300).BeginPlayerOptions().PlayerSpecialOption(new TextObject("{=O2BAcMNO}As the legitimate {?PLAYER.GENDER}Empress{?}Emperor{\\?} of Calradia, I am ready to declare my ownership of the Dragon Banner.")).Condition((ConversationSentence.OnConditionDelegate) (() => this.IsOngoing && Hero.OneToOneConversationHero == StoryModeHeroes.ImperialMentor)).NpcLine("{=ATduKfHu}This will make a great impression. It will attract allies, but also probably make you new enemies. Are you sure you're ready?[if:convo_undecided_closed]").BeginPlayerOptions().PlayerOption("{=n8pmVHNn}Yes, I am ready.").ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.CheckPlayerCanDeclareBannerOwnershipClickableCondition)).NpcLine("{=gL241Hoz}Very nice. Superstitious twaddle, of course, but people will believe you. Very well, oh heir to Calradios, go forth![if:convo_nonchalant]").Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.OnKingdomSupported(Clan.PlayerClan.Kingdom, true))).CloseDialog().PlayerOption("{=fRMIoPUK}Give me more time.").NpcLine("{=KH07mJ5k}Very well, come back when you are ready.").EndPlayerOptions().CloseDialog().PlayerOption("{=eYXLYgsC}I still am not sure what I will do with it.").Condition((ConversationSentence.OnConditionDelegate) (() => this.IsOngoing && Hero.OneToOneConversationHero == StoryModeHeroes.ImperialMentor)).NpcLine("{=UCoOMWaj}As I said before, there's a case for all of the claimants. When this war began, I thought Rhagaea understood best how to rule, Garios was the strongest warrior, and Lucon had the firmest grasp of our traditions.[if:convo_empathic_voice]").NpcLine("{=uFsMzAuR}Speak to whichever one you choose, or come back to me if you wish to claim the banner for yourself.[if:convo_normal]").CloseDialog().EndPlayerOptions().NpcLine("{=Z54ZrDG9}Until next time, then.").CloseDialog();
    }

    private DialogFlow GetAntiImperialMentorDialogueFlow()
    {
      return DialogFlow.CreateDialogFlow("hero_main_options", 300).BeginPlayerOptions().PlayerSpecialOption(new TextObject("{=N5jJtZyr}As the Empire's nemesis, I am ready to declare my ownership of the Dragon Banner.")).Condition((ConversationSentence.OnConditionDelegate) (() => this.IsOngoing && Hero.OneToOneConversationHero == StoryModeHeroes.AntiImperialMentor)).NpcLine("{=BXMKgTXl}This will make a great impression. It will attract allies, but also probably make you new enemies. Are you sure you're ready?[if:convo_astonished]").BeginPlayerOptions().PlayerOption("{=ALWqXMiP}Yes, I am sure.").ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.CheckPlayerCanDeclareBannerOwnershipClickableCondition)).NpcLine("{=exoZygYL}Very well. The Dragon Banner in your hands proclaims you the avenger of the Empire's crimes and its successor. Now go forth and claim your destiny![if:convo_calm_friendly]").Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.OnKingdomSupported(Clan.PlayerClan.Kingdom, false))).CloseDialog().PlayerOption("{=fRMIoPUK}Give me more time.").NpcLine("{=YgoxFJSz}Very well, come back when you are ready.[if:convo_nonchalant]").EndPlayerOptions().CloseDialog().PlayerOption("{=tzsZTcWd}I wonder which kingdom should I support..").Condition((ConversationSentence.OnConditionDelegate) (() => this.IsOngoing && Hero.OneToOneConversationHero == StoryModeHeroes.AntiImperialMentor)).NpcLine("{=1v6aYpDx}You must choose, but choose wisely. Or you can claim it yourself. I have no preference.").GotoDialogState("hero_main_options").EndPlayerOptions().NpcLine("{=Z54ZrDG9}Until next time, then.").CloseDialog();
    }

    private bool IsPlayerTheRulerOfAKingdom()
    {
      int num = Clan.PlayerClan.Kingdom == null || Clan.PlayerClan.Kingdom.Leader != Hero.MainHero ? 0 : (StoryModeData.IsKingdomImperial(Clan.PlayerClan.Kingdom) == this._isImperial ? 1 : 0);
      if (num == 0)
        return num != 0;
      MBTextManager.SetTextVariable("FACTION", Clan.PlayerClan.Kingdom.Name, false);
      return num != 0;
    }

    private bool CheckPlayerCanDeclareBannerOwnershipClickableCondition(out TextObject explanation)
    {
      if (this.IsPlayerTheRulerOfAKingdom())
      {
        explanation = TextObject.Empty;
        return true;
      }
      explanation = this._isImperial ? new TextObject("{=mziMNKm2}You should be ruling a kingdom of the imperial culture.") : new TextObject("{=HCA9xOOo}You should be ruling a kingdom of non-imperial culture.");
      return false;
    }

    private bool CheckConditionToSupportKingdom(out TextObject explanation)
    {
      explanation = new TextObject("{=qNR8WKcX}You should join a kingdom before supporting it with the Dragon Banner.");
      return Clan.PlayerClan.Kingdom != null && Clan.PlayerClan.Kingdom == Hero.OneToOneConversationHero.Clan.Kingdom;
    }

    public void OnRulingClanChanged(Kingdom kingdom, Clan newRulingClan)
    {
      if (newRulingClan == Clan.PlayerClan)
      {
        this._playerRuledKingdom = kingdom;
      }
      else
      {
        if (this._playerRuledKingdom != kingdom)
          return;
        this._playerRuledKingdom = (Kingdom) null;
      }
    }

    private void OnKingdomSupported(Kingdom kingdom, bool isImperial)
    {
      if (isImperial)
      {
        if (this._playerRuledKingdom != null && this._playerRuledKingdom == kingdom)
        {
          this.AddLog(this._onPlayerRuledKingdomSupportedLogText);
          StoryModeManager.Current.MainStoryLine.SetStoryLineSide(MainStoryLineSide.CreateImperialKingdom);
          MBInformationManager.ShowSceneNotification((SceneNotificationData) new DeclareDragonBannerSceneNotificationItem(true));
        }
        else
        {
          this.AddLog(this._onImperialKingdomSupportedLogText);
          StoryModeManager.Current.MainStoryLine.SetStoryLineSide(MainStoryLineSide.SupportImperialKingdom);
          MBInformationManager.ShowSceneNotification((SceneNotificationData) new PledgeAllegianceSceneNotificationItem(Hero.MainHero, true));
        }
      }
      else if (this._playerRuledKingdom != null && this._playerRuledKingdom == kingdom)
      {
        this.AddLog(this._onPlayerRuledKingdomSupportedLogText);
        StoryModeManager.Current.MainStoryLine.SetStoryLineSide(MainStoryLineSide.CreateAntiImperialKingdom);
        MBInformationManager.ShowSceneNotification((SceneNotificationData) new DeclareDragonBannerSceneNotificationItem(false));
      }
      else
      {
        this.AddLog(this._onAntiImperialKingdomSupportedLogText);
        StoryModeManager.Current.MainStoryLine.SetStoryLineSide(MainStoryLineSide.SupportAntiImperialKingdom);
        MBInformationManager.ShowSceneNotification((SceneNotificationData) new PledgeAllegianceSceneNotificationItem(Hero.MainHero, false));
      }
      this.CompleteQuestWithSuccess();
    }

    private void MainStoryLineChosen(MainStoryLineSide chosenSide)
    {
      if ((!this._isImperial || chosenSide == MainStoryLineSide.SupportImperialKingdom || chosenSide == MainStoryLineSide.CreateImperialKingdom) && (this._isImperial || chosenSide == MainStoryLineSide.SupportAntiImperialKingdom || chosenSide == MainStoryLineSide.CreateAntiImperialKingdom))
        return;
      this.CompleteQuestWithCancel(this._questFailedLogText);
    }

    protected override void HourlyTick()
    {
    }

    protected override void RegisterEvents()
    {
      StoryModeEvents.OnMainStoryLineSideChosenEvent.AddNonSerializedListener((object) this, new Action<MainStoryLineSide>(this.MainStoryLineChosen));
      CampaignEvents.RulingClanChanged.AddNonSerializedListener((object) this, new Action<Kingdom, Clan>(this.OnRulingClanChanged));
    }

    protected override void InitializeQuestOnGameLoad()
    {
      this.SetDialogs();
      if (this._isImperial)
      {
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetImperialKingDialogueFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetImperialMentorDialogueFlow(), (object) this);
      }
      else
      {
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetAntiImperialKingDialogueFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetAntiImperialMentorDialogueFlow(), (object) this);
      }
    }

    internal static void AutoGeneratedStaticCollectObjectsSupportKingdomQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._playerRuledKingdom);
    }

    internal static object AutoGeneratedGetMemberValue_isImperial(object o)
    {
      return (object) ((SupportKingdomQuest) o)._isImperial;
    }

    internal static object AutoGeneratedGetMemberValue_playerRuledKingdom(object o)
    {
      return (object) ((SupportKingdomQuest) o)._playerRuledKingdom;
    }
  }
}
