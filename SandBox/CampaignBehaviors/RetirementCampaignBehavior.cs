﻿// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.RetirementCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

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
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class RetirementCampaignBehavior : CampaignBehaviorBase
  {
    private Hero _selectedHeir;
    private bool _hasTalkedWithHermitBefore;
    private bool _playerEndedGame;
    private Settlement _retirementSettlement;

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<bool>("_hasTalkedWithHermitBefore", ref this._hasTalkedWithHermitBefore);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.GameMenuOpened));
    }

    private void GameMenuOpened(MenuCallbackArgs args)
    {
      if (!(args.MenuContext.GameMenu.StringId == "retirement_place"))
        return;
      if (this._selectedHeir != null)
      {
        PlayerEncounter.Finish();
        ApplyHeirSelectionAction.ApplyByRetirement(this._selectedHeir);
        this._selectedHeir = (Hero) null;
      }
      else
      {
        if (!this._playerEndedGame)
          return;
        GameMenu.ExitToLast();
        this.ShowGameStatistics();
      }
    }

    private void HourlyTick() => this.CheckRetirementSettlementVisibility();

    private void OnSessionLaunched(CampaignGameStarter starter)
    {
      this._retirementSettlement = Settlement.Find("retirement_retreat");
      this.SetupGameMenus(starter);
      this.SetupConversationDialogues(starter);
    }

    private void SetupGameMenus(CampaignGameStarter starter)
    {
      starter.AddGameMenu("retirement_place", "{=ruHt0Ub5}You are at the base of Mount Erithrys, an ancient volcano that has long been a refuge for oracles, seers and mystics. High up a steep valley, you can make out a number of caves carved into the soft volcanic rock. Coming closer, you see that some show signs of habitation. An old man in worn and tattered robes sits at the mouth of one of these caves, meditating in the cool mountain air.", new OnInitDelegate(this.retirement_menu_on_init));
      starter.AddGameMenuOption("retirement_place", "retirement_place_enter", "{=H3fobmyO}Approach", new GameMenuOption.OnConditionDelegate(this.enter_on_condition), new GameMenuOption.OnConsequenceDelegate(this.retirement_menu_on_enter));
      starter.AddGameMenuOption("retirement_place", "retirement_place_leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.retirement_menu_on_leave), true);
      starter.AddGameMenu("retirement_after_player_knockedout", "{=DK3QwC68}Your men on the slopes below saw you collapse, and rushed up to your aid. They tended to your wounds as well as they could, and you will survive. They are now awaiting your next decision.", (OnInitDelegate) null);
      starter.AddGameMenuOption("retirement_after_player_knockedout", "enter", "{=H3fobmyO}Approach", new GameMenuOption.OnConditionDelegate(this.enter_on_condition), new GameMenuOption.OnConsequenceDelegate(this.retirement_menu_on_enter));
      starter.AddGameMenuOption("retirement_after_player_knockedout", "leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.retirement_menu_on_leave), true);
    }

    private void SetupConversationDialogues(CampaignGameStarter starter)
    {
      starter.AddDialogLine("hermit_start_1", "start", "player_answer", "{=09PJ02x6}Hello there. You must be one of those lordly types who ride their horses about this land, scrabbling for wealth and power. I wonder what you hope to gain from such things...", new ConversationSentence.OnConditionDelegate(this.hermit_start_talk_first_time_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hermit_start_2", "start", "player_accept_or_decline", "{=YmNT7HJ3}Have you made up your mind? Are you ready to let go of your earthly burdens and relish a simpler life?", new ConversationSentence.OnConditionDelegate(this.hermit_start_talk_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_answer_hermit_start_1", "player_answer", "hermit_answer_1", "{=1FbydhBb}I rather enjoy wealth and power.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_answer_hermit_start_2", "player_answer", "hermit_answer_2", "{=TOpysYqG}Power can mean the power to do good, you know.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hermit_answer_1", "hermit_answer_1", "hermit_answer_continue", "{=v7pJerga}Ah, but the thing about wealth and power is that someone is always trying to take it from you. Perhaps even one's own children. There is no rest for the powerful.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hermit_answer_2", "hermit_answer_2", "hermit_answer_continue", "{=1MaECke2}Many people tell themselves that they only want power to do good, but still seek it for its own sake. The only way to know for sure that you do not lust after power is to give it up.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hermit_answer_continue_1", "hermit_answer_continue", "player_accept_or_decline", "{=Q2RKkISe}There are a number of us up here in our caves. We dine well on locusts and wild honey. Some of us once knew wealth and power, but what we relish now is freedom. Freedom from the worry that what we hoard will be lost. Freedom from the fear that our actions offend Heaven. The only true freedom. We welcome newcomers, like your good self.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() => this._hasTalkedWithHermitBefore = true));
      starter.AddPlayerLine("player_accept_or_decline_2", "player_accept_or_decline", "player_accept", "{=z2duf82b}Well, perhaps I would like to know peace for a while. But I would need to think about the future of my clan...", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.hermit_player_select_heir_on_consequence));
      starter.AddPlayerLine("player_accept_or_decline_1", "player_accept_or_decline", "player_decline", "{=x4wnaovC}I am not sure I share your idea of freedom.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hermit_answer_player_decline", "player_decline", "close_window", "{=uXXH5GIU}Please, then, return to your wars and worry. I cannot help someone attain what they do not want. But I am not going anywhere, so if you desire my help at any time, do come again.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hermit_answer_player_accept", "player_accept", "hermit_player_select_heir", "{=6nIC6i2V}I have acolytes who seek me out from time to time. I can have one of them take a message to your kinfolk. Perhaps you would like to name an heir?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddRepeatablePlayerLine("hermit_player_select_heir_1", "hermit_player_select_heir", "close_window", "{=!}{HEIR.NAME}", "{=epepvysB}I have someone else in mind.", "player_accept", new ConversationSentence.OnConditionDelegate(this.hermit_select_heir_multiple_on_condition), new ConversationSentence.OnConsequenceDelegate(this.hermit_select_heir_multiple_on_consequence));
      starter.AddPlayerLine("hermit_player_select_heir_2", "hermit_player_select_heir", "close_window", "{=Qbp2AiRZ}I choose not to name anyone. I shall think no more of worldly things. (END GAME)", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.hermit_player_retire_on_consequence));
      starter.AddPlayerLine("hermit_player_select_heir_3", "hermit_player_select_heir", "close_window", "{=CH7b5LaX}I have changed my mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() => this._selectedHeir = (Hero) null));
    }

    private bool hermit_start_talk_first_time_on_condition()
    {
      return !this._hasTalkedWithHermitBefore && CharacterObject.OneToOneConversationCharacter.StringId == "sp_hermit";
    }

    private void hermit_player_retire_on_consequence()
    {
      TextObject textObject1 = new TextObject("{=LmoyzsTE}{PLAYER.NAME} will retire. {HEIR_PART} Would you like to continue?");
      if (this._selectedHeir == null)
      {
        TextObject variable = new TextObject("{=RPgzaZeR}Your game will end.");
        textObject1.SetTextVariable("HEIR_PART", variable);
      }
      else
      {
        TextObject textObject2 = new TextObject("{=GEvP9i5f}You will play on as {HEIR.NAME}.");
        textObject2.SetCharacterProperties("HEIR", this._selectedHeir.CharacterObject);
        textObject1.SetTextVariable("HEIR_PART", textObject2);
      }
      InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_decision").ToString(), textObject1.ToString(), true, true, GameTexts.FindText("str_yes").ToString(), GameTexts.FindText("str_no").ToString(), new Action(this.DecideRetirementPositively), new Action(this.DecideRetirementNegatively)));
    }

    private void DecideRetirementPositively()
    {
      if (this._selectedHeir != null)
        this._hasTalkedWithHermitBefore = false;
      else
        this._playerEndedGame = true;
      Mission.Current.EndMission();
    }

    private void DecideRetirementNegatively() => this._selectedHeir = (Hero) null;

    private void hermit_player_select_heir_on_consequence()
    {
      List<Hero> objectsToRepeatOver = new List<Hero>();
      foreach (KeyValuePair<Hero, int> keyValuePair in (IEnumerable<KeyValuePair<Hero, int>>) Clan.PlayerClan.GetHeirApparents().OrderBy<KeyValuePair<Hero, int>, int>((Func<KeyValuePair<Hero, int>, int>) (x => x.Value)))
        objectsToRepeatOver.Add(keyValuePair.Key);
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) objectsToRepeatOver);
    }

    private void hermit_select_heir_multiple_on_consequence()
    {
      this._selectedHeir = ConversationSentence.SelectedRepeatObject as Hero;
      this.hermit_player_retire_on_consequence();
    }

    private bool hermit_select_heir_multiple_on_condition()
    {
      if (!Clan.PlayerClan.GetHeirApparents().Any<KeyValuePair<Hero, int>>() || !(ConversationSentence.CurrentProcessedRepeatObject is Hero processedRepeatObject))
        return false;
      ConversationSentence.SelectedRepeatLine.SetCharacterProperties("HEIR", processedRepeatObject.CharacterObject);
      return true;
    }

    private bool hermit_start_talk_on_condition()
    {
      return this._hasTalkedWithHermitBefore && CharacterObject.OneToOneConversationCharacter.StringId == "sp_hermit";
    }

    private void ShowGameStatistics()
    {
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<GameOverState>((object) GameOverState.GameOverReason.Retirement));
    }

    private void retirement_menu_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = MobileParty.MainParty.CurrentSettlement;
      if (currentSettlement == null)
        return;
      Campaign.Current.GameMenuManager.MenuLocations.Clear();
      Campaign.Current.GameMenuManager.MenuLocations.Add(currentSettlement.LocationComplex.GetLocationWithId("retirement_retreat"));
      args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.SettlementComponent.WaitMeshName);
      PlayerEncounter.EnterSettlement();
      PlayerEncounter.LocationEncounter = (LocationEncounter) new RetirementEncounter(currentSettlement);
    }

    private bool enter_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Mission;
      return true;
    }

    private bool leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void retirement_menu_on_enter(MenuCallbackArgs args)
    {
      PlayerEncounter.LocationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("retirement_retreat"));
    }

    private void retirement_menu_on_leave(MenuCallbackArgs args)
    {
      PlayerEncounter.LeaveSettlement();
      PlayerEncounter.Finish();
    }

    private void CheckRetirementSettlementVisibility()
    {
      float spottingDistance = Campaign.Current.Models.MapVisibilityModel.GetHideoutSpottingDistance();
      if (1.0 - (double) MobileParty.MainParty.Position2D.DistanceSquared(this._retirementSettlement.Position2D) / ((double) spottingDistance * (double) spottingDistance) <= 0.0)
        return;
      this._retirementSettlement.IsVisible = true;
      RetirementSettlementComponent settlementComponent = this._retirementSettlement.SettlementComponent as RetirementSettlementComponent;
      if (settlementComponent.IsSpotted)
        return;
      settlementComponent.IsSpotted = true;
    }
  }
}
