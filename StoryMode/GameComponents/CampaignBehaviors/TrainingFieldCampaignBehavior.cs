// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.TrainingFieldCampaignBehavior
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
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class TrainingFieldCampaignBehavior : CampaignBehaviorBase
  {
    public bool SkipTutorialMission;
    private const string TrainingFieldLocationId = "training_field";
    private bool _completeTutorial;
    private bool _askedAboutRaiders1;
    private bool _askedAboutRaiders2;
    private bool _talkedWithBrotherForTheFirstTime;

    public override void SyncData(IDataStore dataStore)
    {
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnded));
      CampaignEvents.OnCharacterCreationIsOverEvent.AddNonSerializedListener((object) this, new Action(this.OnCharacterCreationIsOver));
    }

    private void OnCharacterCreationIsOver()
    {
      if (!this.SkipTutorialMission)
      {
        Settlement settlement = Settlement.Find("tutorial_training_field");
        MobileParty.MainParty.Position2D = settlement.Position2D;
        EncounterManager.StartSettlementEncounter(MobileParty.MainParty, settlement);
        PlayerEncounter.LocationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("training_field"));
      }
      this.SkipTutorialMission = false;
      foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
        mobileParty.Party.UpdateVisibilityAndInspected();
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        settlement.Party.UpdateVisibilityAndInspected();
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddGameMenu("training_field_menu", "{=5g9ZFGrN}You are at a training field. You can learn the basics of combat here.", new OnInitDelegate(this.game_menu_training_field_on_init));
      campaignGameStarter.AddGameMenuOption("training_field_menu", "training_field_enter", "{=F0ldgio8}Go back to training.", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Mission;
        return true;
      }), new GameMenuOption.OnConsequenceDelegate(TrainingFieldCampaignBehavior.game_menu_enter_training_field_on_consequence));
      campaignGameStarter.AddGameMenuOption("training_field_menu", "training_field_leave", "{=3sRdGQou}Leave", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Leave;
        return true;
      }), new GameMenuOption.OnConsequenceDelegate(TrainingFieldCampaignBehavior.game_menu_settlement_leave_on_consequence), true);
      campaignGameStarter.AddDialogLine("brother_training_field_start_coversation", "start", "training_field_line_2", "{=4vsPD3ec}{?PLAYER.GENDER}Sister{?}Brother{\\?}... It's been three days now we've been tracking those bastards. I think we're getting close. We need to think about what happens when we catch them. How are we going to rescue {PLAYER_LITTLE_BROTHER.LINK} and {PLAYER_LITTLE_SISTER.LINK}? Are we up for a fight?[if:convo_grave]", new ConversationSentence.OnConditionDelegate(this.storymode_training_field_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 1000001);
      campaignGameStarter.AddDialogLine("brother_training_field_start_coversation_2", "training_field_line_2", "player_answer_training_field", "{=MfczTFxp}This looks like an old training field for the legions. Perhaps we can spare some time and brush up on our skills. The practice could come in handy when we catch up with the raiders.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, 1000001);
      campaignGameStarter.AddPlayerLine("player_answer_play_training_field", "player_answer_training_field", "play_tutorial", "{=FaQDaRri}I'm going to run the course. I need to know I can fight if I have to. (Continue tutorial)", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() => this._talkedWithBrotherForTheFirstTime = true));
      campaignGameStarter.AddPlayerLine("player_answer_skip_tutorial", "player_answer_training_field", "skip_tutorial", "{=gYYGGflb}We have no time to lose. We can do more if we split up. (Skip tutorial)", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_answer_ask_about_raiders_1", "player_answer_training_field", "ask_about_raiders_1", "{=b7Z1OBas}So, do you think we'll catch up with the raiders soon?", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.storymode_asked_about_raiders_1_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.storymode_asked_about_raiders_1_clickable_condition));
      campaignGameStarter.AddPlayerLine("player_answer_ask_about_raiders_2", "player_answer_training_field", "ask_about_raiders_2", "{=tzkclhXs}How should we prepare for the fight?", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.storymode_asked_about_raiders_2_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.storymode_asked_about_raiders_2_clickable_condition));
      campaignGameStarter.AddDialogLine("end_prolouge_conversation", "play_tutorial", "close_window", "{=IYnFgEgy}Let's go on then. (Play the combat tutorial)", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.storymode_go_to_end_tutorial_village_consequence));
      campaignGameStarter.AddDialogLine("ask_about_tutorial_end_confirmation", "skip_tutorial", "skip_tutorial_confirmation", "{=FUwIgcZO}Are you sure about that? (This option will finish the tutorial, which has story elements, and start the full single player campaign. It is recommended that you pick this option only if you have already played the tutorial once.)", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("explanation_about_raiders_1", "ask_about_raiders_1", "training_field_line_2", "{=YAWCkOYa}The tracks look fresh, and I've seen some smoke on the horizon. They can't move too quickly if they're still looting and raiding. No, I'm pretty sure we'll be able to rescue the little ones... or die trying.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("explanation_about_raiders_2", "ask_about_raiders_2", "training_field_line_2", "{=NItH4oL6}Well, if they're still pillaging they may have split up into smaller groups. Hopefully we won't need to take them all on at once. But it would help if we could hire or persuade some people to join us.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("end_tutorial_yes", "skip_tutorial_confirmation", "end_tutorial", "{=a4W7Gzka}Yes. Time is of the essence. (Skip tutorial)", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.storymode_skip_tutorial_from_conversation_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.storymode_skip_tutorial_from_conversation_clickable_condition));
      campaignGameStarter.AddPlayerLine("end_tutorial_no", "skip_tutorial_confirmation", "training_field_line_2", "{=5qhaDtef}No. Let me rethink this.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("end_tutorial_goodbye_start", "end_tutorial", "end_tutorial_goodbye", "{=QF8B6XFS}All right then. Let us split up and look for the little ones separately. I'll send you a word if I find them before you do...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("end_tutorial_select_family_name", "end_tutorial_goodbye", "close_window", "{=LbSvq3be}One other thing, {?PLAYER.GENDER}sister{?}brother{\\?}. We want people to take us seriously. We may be leading men into battle soon. Let's give our family a name and a banner, like the nobles do.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.storymode_go_to_end_tutorial_village_consequence));
      campaignGameStarter.AddDialogLine("brother_training_field_default_coversation", "start", "player_answer_training_field_default", "{=kIklPYto}Are you ready to leave here?", new ConversationSentence.OnConditionDelegate(this.story_mode_training_field_default_conversation_with_brother_condition), (ConversationSentence.OnConsequenceDelegate) null, 1000001);
      campaignGameStarter.AddPlayerLine("player_answer_play_training_field_2", "player_answer_training_field_default", "close_window", "{=k07wzat8}I am not ready yet.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_answer_skip_tutorial_2", "player_answer_training_field_default", "close_window", "{=bSDt8FN5}I am ready, let's go!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.EndMission())));
    }

    private void OnMissionEnded(IMission mission)
    {
      if (!this._completeTutorial)
        return;
      StoryModeManager.Current.MainStoryLine.CompleteTutorialPhase(true);
      this._completeTutorial = false;
    }

    private void game_menu_training_field_on_init(MenuCallbackArgs args)
    {
      Settlement settlement = Settlement.CurrentSettlement == null ? MobileParty.MainParty.CurrentSettlement : Settlement.CurrentSettlement;
      Campaign.Current.GameMenuManager.MenuLocations.Clear();
      Campaign.Current.GameMenuManager.MenuLocations.Add(settlement.LocationComplex.GetLocationWithId("training_field"));
      PlayerEncounter.EnterSettlement();
      PlayerEncounter.LocationEncounter = (LocationEncounter) new TrainingFieldEncounter(settlement);
      if (!(GameStateManager.Current.ActiveState is MapState activeState))
        return;
      activeState.Handler.TeleportCameraToMainParty();
    }

    private static void game_menu_enter_training_field_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.LocationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("training_field"));
    }

    [GameMenuInitializationHandler("training_field_menu")]
    private static void storymode_tutorial_training_field_game_menu_on_init_background(
      MenuCallbackArgs args)
    {
      TrainingField trainingField = Settlement.Find("tutorial_training_field").TrainingField();
      args.MenuContext.SetBackgroundMeshName(trainingField.WaitMeshName);
    }

    private static void game_menu_settlement_leave_on_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.LeaveSettlement();
      PlayerEncounter.Finish();
    }

    private bool storymode_training_field_start_on_condition()
    {
      StringHelpers.SetCharacterProperties("PLAYER_LITTLE_BROTHER", StoryModeHeroes.LittleBrother.CharacterObject);
      StringHelpers.SetCharacterProperties("PLAYER_LITTLE_SISTER", StoryModeHeroes.LittleSister.CharacterObject);
      return StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted && Settlement.CurrentSettlement?.StringId == "tutorial_training_field" && Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero == StoryModeHeroes.ElderBrother && !this._talkedWithBrotherForTheFirstTime;
    }

    private void storymode_go_to_end_tutorial_village_consequence()
    {
      TutorialPhase.Instance.PlayerTalkedWithBrotherForTheFirstTime();
      if (!this._completeTutorial)
        return;
      Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.EndMission());
    }

    private bool storymode_skip_tutorial_from_conversation_clickable_condition(
      out TextObject explanation)
    {
      explanation = new TextObject("{=XlSHcfsP}This option will end the tutorial!");
      return true;
    }

    private void storymode_skip_tutorial_from_conversation_consequence()
    {
      this._completeTutorial = true;
    }

    private bool storymode_asked_about_raiders_1_clickable_condition(out TextObject explanation)
    {
      explanation = TextObject.Empty;
      return !this._askedAboutRaiders1;
    }

    private bool storymode_asked_about_raiders_2_clickable_condition(out TextObject explanation)
    {
      explanation = TextObject.Empty;
      return !this._askedAboutRaiders2;
    }

    private void storymode_asked_about_raiders_1_consequence() => this._askedAboutRaiders1 = true;

    private void storymode_asked_about_raiders_2_consequence() => this._askedAboutRaiders2 = true;

    private bool story_mode_training_field_default_conversation_with_brother_condition()
    {
      return StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted && (Settlement.CurrentSettlement == null || Settlement.CurrentSettlement.StringId != "village_ES3_2") && CharacterObject.OneToOneConversationCharacter == StoryModeHeroes.ElderBrother.CharacterObject && this._talkedWithBrotherForTheFirstTime;
    }
  }
}
