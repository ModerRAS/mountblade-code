// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.TutorialPhase.FindHideoutTutorialQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using SandBox.Missions.MissionLogics;
using StoryMode.GameComponents.CampaignBehaviors;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.TutorialPhase
{
  public class FindHideoutTutorialQuest : StoryModeQuestBase
  {
    private const string RaiderPartyStringId = "radagos_raider_party_";
    private const int RaiderPartyCount = 2;
    private const int RaiderPartySize = 4;
    private const int MainPartyHealHitPointLimit = 50;
    private const int MaximumHealth = 100;
    private const int PlayerPartySizeMinLimitToAttack = 4;
    [SaveableField(1)]
    private readonly Settlement _hideout;
    [SaveableField(2)]
    private List<MobileParty> _raiderParties;
    private bool _foughtWithRadagos;
    private bool _dueledRadagos;
    [SaveableField(4)]
    private bool _talkedWithRadagos;
    [SaveableField(5)]
    private bool _talkedWithBrother;
    [SaveableField(6)]
    private FindHideoutTutorialQuest.HideoutBattleEndState _hideoutBattleEndState;
    private List<CharacterObject> _mainPartyTroopBackup;
    private static string _activeHideoutStringId;

    private TextObject _startQuestLog
    {
      get
      {
        TextObject parent = new TextObject("{=gSBGpUBm}Find {RADAGOS.LINK}' hideout.");
        StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject, parent);
        return parent;
      }
    }

    public override TextObject Title
    {
      get
      {
        TextObject parent = new TextObject("{=NvkWtb8f}Find the hideout of {RADAGOS.NAME}' gang and defeat them");
        StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject, parent);
        return parent;
      }
    }

    public FindHideoutTutorialQuest(Hero questGiver, Settlement hideout)
      : base("find_hideout_tutorial_quest", questGiver, CampaignTime.Never)
    {
      this._hideout = hideout;
      FindHideoutTutorialQuest._activeHideoutStringId = this._hideout.StringId;
      this._hideout.Name = new TextObject("{=9xaEPyNV}{RADAGOS.NAME}' Hideout");
      StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject, this._hideout.Name);
      this._raiderParties = new List<MobileParty>();
      this._foughtWithRadagos = false;
      this._talkedWithRadagos = false;
      this._talkedWithBrother = false;
      this._hideoutBattleEndState = FindHideoutTutorialQuest.HideoutBattleEndState.None;
      this.InitializeHideout();
      this.AddTrackedObject((ITrackableCampaignObject) this._hideout);
      this.SetDialogs();
      this.AddGameMenus();
      this.InitializeQuestOnCreation();
      this.AddLog(this._startQuestLog);
      StoryMode.StoryModePhases.TutorialPhase.Instance.SetTutorialFocusSettlement(this._hideout);
    }

    protected override void HourlyTick()
    {
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
    }

    public override void OnHeroCanDieInfoIsRequested(
      Hero hero,
      KillCharacterAction.KillCharacterActionDetail causeOfDeath,
      ref bool result)
    {
      if (hero != StoryModeHeroes.Radagos)
        return;
      result = false;
    }

    public override void OnHeroCanBeSelectedInInventoryInfoIsRequested(Hero hero, ref bool result)
    {
      if (hero != StoryModeHeroes.Radagos)
        return;
      result = false;
    }

    public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
    {
      if (hero != StoryModeHeroes.Radagos)
        return;
      result = false;
    }

    protected override void InitializeQuestOnGameLoad()
    {
      FindHideoutTutorialQuest._activeHideoutStringId = this._hideout.StringId;
      this._hideout.Name = new TextObject("{=9xaEPyNV}{RADAGOS.NAME}' Hideout");
      StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject, this._hideout.Name);
      this.SetDialogs();
      this.AddGameMenus();
      if (this._raiderParties.Count <= 2)
        return;
      for (int index = this._raiderParties.Count - 1; index >= 0; --index)
      {
        if (this._raiderParties[index].MapEvent == null && !this._raiderParties[index].IsActive)
          this._raiderParties.Remove(this._raiderParties[index]);
      }
      for (int index = this._raiderParties.Count - 1; index >= 0; --index)
      {
        if (!this._raiderParties[index].IsBanditBossParty && this._raiderParties[index].MapEvent == null)
        {
          if (!this._raiderParties[index].IsActive)
            this._raiderParties.Remove(this._raiderParties[index]);
          else
            DestroyPartyAction.Apply((PartyBase) null, this._raiderParties[index]);
        }
        if (this._raiderParties.Count <= 2)
          break;
      }
    }

    protected override void OnStartQuest()
    {
      if (!(GameStateManager.Current.ActiveState is MapState activeState))
        return;
      activeState.Handler.StartCameraAnimation(this._hideout.GatePosition, 1f);
    }

    private void InitializeHideout()
    {
      this._hideout.Hideout.IsSpotted = true;
      this._hideout.IsVisible = true;
      if (!this._hideout.Hideout.IsInfested)
      {
        for (int index = 0; index < 2 && !this._hideout.Hideout.IsInfested; ++index)
          this._raiderParties.Add(this.CreateRaiderParty(this._raiderParties.Count + 1, false));
      }
      if (!this._hideout.Parties.Any<MobileParty>((Func<MobileParty, bool>) (p => p.IsBanditBossParty)))
        this._raiderParties.Add(this.CreateRaiderParty(this._raiderParties.Count + 1, true));
      foreach (MobileParty party in (List<MobileParty>) this._hideout.Parties)
      {
        if (party.IsBanditBossParty)
        {
          int totalRegulars = party.MemberRoster.TotalRegulars;
          party.MemberRoster.Clear();
          party.MemberRoster.AddToCounts(StoryModeHeroes.Radagos.CharacterObject, 1);
          CharacterObject character = Campaign.Current.ObjectManager.GetObject<CharacterObject>("storymode_quest_raider");
          party.MemberRoster.AddToCounts(character, totalRegulars);
          StoryModeHeroes.Radagos.Heal(100);
          break;
        }
      }
    }

    private MobileParty CreateRaiderParty(int number, bool isBanditBossParty)
    {
      MobileParty banditParty = BanditPartyComponent.CreateBanditParty("radagos_raider_party_" + (object) number, this._hideout.OwnerClan, this._hideout.Hideout, isBanditBossParty);
      TroopRoster memberRoster = new TroopRoster(banditParty.Party);
      CharacterObject character = Campaign.Current.ObjectManager.GetObject<CharacterObject>("storymode_quest_raider");
      int count = 4 - memberRoster.TotalManCount;
      if (count > 0)
        memberRoster.AddToCounts(character, count);
      TroopRoster prisonerRoster = new TroopRoster(banditParty.Party);
      banditParty.InitializeMobilePartyAtPosition(memberRoster, prisonerRoster, this._hideout.Position2D);
      banditParty.SetCustomName(new TextObject("{=u1Pkt4HC}Raiders"));
      banditParty.ActualClan = this._hideout.OwnerClan;
      banditParty.Position2D = this._hideout.Position2D;
      banditParty.Party.SetCustomOwner(StoryModeHeroes.Radagos);
      banditParty.Party.SetVisualAsDirty();
      EnterSettlementAction.ApplyForParty(banditParty, this._hideout);
      banditParty.InitializePartyTrade((int) (1.0 * (double) MBRandom.RandomFloat * 20.0 * (double) banditParty.Party.TotalStrength + 50.0));
      banditParty.Ai.SetMoveGoToSettlement(this._hideout);
      EnterSettlementAction.ApplyForParty(banditParty, this._hideout);
      banditParty.SetPartyUsedByQuest(true);
      return banditParty;
    }

    protected override void SetDialogs()
    {
      StringHelpers.SetCharacterProperties("TACTEOS", StoryModeHeroes.Tacitus.CharacterObject);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000015).NpcLine(new TextObject("{=R3CnF55p}So... Who's this that comes through my place of business, killing my employees?[if:convo_confused_voice][ib:warrior2]")).Condition(new ConversationSentence.OnConditionDelegate(this.bandit_hideout_boss_fight_start_on_condition)).PlayerLine(new TextObject("{=itRoeaJf}We heard you took our little brother and sister. Where are they?")).NpcLine(new TextObject("{=eVgAY7ts}Good Heaven, I'll need a better description than that. My men have harvested dozens of little brats in this region. Quite good hunting grounds! Already sent most of them south to a slave market I know, though.[ib:hip][if:convo_snide_voice]")).NpcLine(new TextObject("{=wWLnZ6G4}Since your hunt for your kin is fruitless, how about you clear off and save your own lives? Either that or I force you to lick up all the blood you've spilled here with your tongues. Or... You and I could settle this, one on one.[if:convo_angry_voice]")).BeginPlayerOptions().PlayerOption(new TextObject("{=ImLQNYWC}Very well - I'll duel you.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.bandit_hideout_start_duel_fight_on_consequence)).CloseDialog().PlayerOption(new TextObject("{=MMv3hsmI}I don't duel slavers. Men, attack!")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.bandit_hideout_continue_battle_on_consequence)).CloseDialog().EndPlayerOptions().CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000010).NpcLine(new TextObject("{=ZhZ7MCeh}Well. I recognize defeat when I see it. If I'm going to be your captive, let me introduce myself. I'm Radagos.[ib:weary2][if:convo_uncomfortable_voice]")).Condition(new ConversationSentence.OnConditionDelegate(this.radagos_meeting_conversation_condition)).NpcLine(new TextObject("{=w0CUaEU7}You haven't cut my throat yet, which was a wise move. I'm sure I can find a way to be worth more to you alive than dead.[if:convo_calm_friendly]")).PlayerLine(new TextObject("{=vDRRsed8}You'd better help us get our brother and sister back, or you'll swing from a tree.")).NpcLine(new TextObject("{=7O8IwMgU}Oh, you'll need my help all right, if you want to get them back - alive, that is. See, my boys have some pretty specific instructions about what to do if there's a rescue attempt...")).NpcLine(new TextObject("{=FWSwngVX}Shall we get on the road? Remember - if I drop dead of exhaustion, or drown in some river, that's it for your little dears. I don't expect a cozy palanquin, now, but you'd best not make it too hard a trip for me.[if:convo_uncomfortable_voice]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.radagos_meeting_conversation_consequence)).CloseDialog(), (object) this);
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000020).NpcLine(new TextObject("{=qp2zYfua}I was hoping to find more treasure here, but I think business wasn't going too well for {RADAGOS.NAME} and his gang.[ib:closed2][if:convo_pondering]")).Condition(new ConversationSentence.OnConditionDelegate(this.brother_farewell_conversation_condition)).NpcLine(new TextObject("{=J4qetbZb}I found this strange looking metal piece though. It doesn't look too valuable, but it could be the artifact {TACTEOS.NAME} was talking about. Maybe we can sell it to one of the noble clans for a hefty price.[if:convo_astonished]")).PlayerLine(new TextObject("{=OffNcRby}All right then. Let's get on the road.")).NpcLine(new TextObject("{=j9f9Ts7i}I have a better idea. We would have a better chance if we split up now. I'll take {RADAGOS.NAME} and go find the slaver market and look for a way to free the children. However we must be careful not to endanger their lives and it could be better to just buy them. We need to have our purses full for that though.[if:convo_normal]")).NpcLine(new TextObject("{=fp6QBO7l}I'll need to take these men with us. {RADAGOS.NAME} is a slippery one. I don't want him getting away.[if:convo_confused_voice]")).PlayerLine(new TextObject("{=RJ9NbuYr}So you want me to raise the money to ransom the little ones?")).NpcLine(new TextObject("{=4OUnPjZc}Indeed. You'll have to find a way to do that. Maybe this bronze thing can help.[if:convo_empathic_voice]")).NpcLine(new TextObject("{=5soUEFEJ}{TACTEOS.NAME} said it could be worth a fortune to the right person, if you manage not to get killed. If he's telling the truth, you must be careful. Never reveal that you have it. Try to understand its value, and how it can be sold.[if:convo_pondering]")).NpcLine(new TextObject("{=jPKIN2r4}One more thing. When you are talking to nobles and other people of importance, make sure you present yourself as someone from a distant but distinguished family.[if:convo_thinking]")).NpcLine(new TextObject("{=GVMGXfxS}You can use our family name if you like or make up a new one. You will have a better chance of obtaining an audience with nobles and it'll be easier for me to find you by asking around.[if:convo_normal]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.SelectClanName)).NpcLine(new TextObject("{=qIltCuBe}Get on the road now. Once I locate the little ones, I'll come find you.[ib:normal][if:convo_calm_friendly]")).Condition(new ConversationSentence.OnConditionDelegate(this.OpenBannerSelectionScreen)).CloseDialog(), (object) this);
    }

    private bool bandit_hideout_boss_fight_start_on_condition()
    {
      PartyBase encounteredParty = PlayerEncounter.EncounteredParty;
      return encounteredParty != null && !encounteredParty.IsMobile && encounteredParty.MapFaction != null && encounteredParty.MapFaction.IsBanditFaction && !this._foughtWithRadagos && encounteredParty.IsSettlement && encounteredParty.Settlement.IsHideout && encounteredParty.Settlement == this._hideout && Mission.Current != null && Mission.Current.GetMissionBehavior<HideoutMissionController>() != null && Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero == StoryModeHeroes.Radagos;
    }

    private void bandit_hideout_start_duel_fight_on_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(HideoutMissionController.StartBossFightDuelMode);
      this._dueledRadagos = true;
      this._foughtWithRadagos = true;
    }

    private void bandit_hideout_continue_battle_on_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(HideoutMissionController.StartBossFightBattleMode);
      this._foughtWithRadagos = true;
    }

    private bool radagos_meeting_conversation_condition()
    {
      return this._foughtWithRadagos && Hero.OneToOneConversationHero == StoryModeHeroes.Radagos;
    }

    private void radagos_meeting_conversation_consequence()
    {
      StoryModeHeroes.Radagos.SetHasMet();
      MobileParty partyBelongedTo = StoryModeHeroes.Radagos.PartyBelongedTo;
      DisableHeroAction.Apply(StoryModeHeroes.Radagos);
      DestroyPartyAction.Apply(PartyBase.MainParty, partyBelongedTo);
      this._talkedWithRadagos = true;
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.OpenBrotherConversationMenu);
    }

    private void OpenBrotherConversationMenu() => GameMenu.ActivateGameMenu("brother_chest_menu");

    private bool brother_farewell_conversation_condition()
    {
      StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject);
      StringHelpers.SetCharacterProperties("TACTEOS", StoryModeHeroes.Tacitus.CharacterObject);
      return Hero.OneToOneConversationHero == StoryModeHeroes.ElderBrother && this._talkedWithRadagos;
    }

    private void SelectClanName()
    {
      InformationManager.ShowTextInquiry(new TextInquiryData(new TextObject("{=JJiKk4ow}Select your family name: ").ToString(), string.Empty, true, false, GameTexts.FindText("str_done").ToString(), (string) null, new Action<string>(this.OnChangeClanNameDone), (Action) null, textCondition: new Func<string, Tuple<bool, string>>(FactionHelper.IsClanNameApplicable), defaultInputText: Clan.PlayerClan.Name.ToString()));
    }

    private void OnChangeClanNameDone(string newClanName)
    {
      TextObject text = GameTexts.FindText("str_generic_clan_name");
      text.SetTextVariable("CLAN_NAME", new TextObject(newClanName));
      Clan.PlayerClan.InitializeClan(text, text, Clan.PlayerClan.Culture, Clan.PlayerClan.Banner);
    }

    private bool OpenBannerSelectionScreen()
    {
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<BannerEditorState>());
      return true;
    }

    private void OnGameMenuOpened(MenuCallbackArgs menuCallbackArgs)
    {
      StoryModeHeroes.Radagos.Heal(StoryModeHeroes.Radagos.MaxHitPoints);
      if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement == this._hideout && this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.None && menuCallbackArgs.MenuContext.GameMenu.StringId != "radagos_hideout" && menuCallbackArgs.MenuContext.GameMenu.StringId != "brother_chest_menu")
        GameMenu.SwitchToMenu("radagos_hideout");
      if (this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.Victory && this._talkedWithRadagos && menuCallbackArgs.MenuContext.GameMenu.StringId != "brother_chest_menu")
      {
        Campaign.Current.GameMenuManager.SetNextMenu("brother_chest_menu");
      }
      else
      {
        if (this._hideoutBattleEndState != FindHideoutTutorialQuest.HideoutBattleEndState.Defeated && this._hideoutBattleEndState != FindHideoutTutorialQuest.HideoutBattleEndState.Retreated)
          return;
        foreach (MobileParty party in (List<MobileParty>) this._hideout.Parties)
        {
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.MemberRoster.GetTroopRoster())
          {
            if (troopRosterElement.Character.IsHero)
            {
              troopRosterElement.Character.HeroObject.Heal(50 - troopRosterElement.Character.HeroObject.HitPoints);
            }
            else
            {
              int elementWoundedNumber = party.MemberRoster.GetElementWoundedNumber(party.MemberRoster.FindIndexOfTroop(troopRosterElement.Character));
              if (elementWoundedNumber > 0)
                party.MemberRoster.AddToCounts(troopRosterElement.Character, 0, woundedCount: -elementWoundedNumber);
            }
          }
          if (!party.IsBanditBossParty && party.MemberRoster.TotalManCount < 4)
          {
            int totalManCount = party.MemberRoster.TotalManCount;
            CharacterObject character = Campaign.Current.ObjectManager.GetObject<CharacterObject>("storymode_quest_raider");
            party.MemberRoster.AddToCounts(character, 4 - totalManCount);
          }
          if (MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.1.1") && party.IsBanditBossParty && party.MemberRoster.GetTroopCount(StoryModeHeroes.Radagos.CharacterObject) <= 0)
            party.MemberRoster.AddToCounts(StoryModeHeroes.Radagos.CharacterObject, 1);
        }
        if (Hero.MainHero.IsPrisoner)
        {
          EndCaptivityAction.ApplyByPeace(Hero.MainHero);
          Hero elderBrother = StoryModeHeroes.ElderBrother;
          if (elderBrother.PartyBelongedToAsPrisoner != null)
            EndCaptivityAction.ApplyByPeace(elderBrother);
          if (!elderBrother.IsActive)
            elderBrother.ChangeState(Hero.CharacterStates.Active);
          if (elderBrother.PartyBelongedTo == null)
            PartyBase.MainParty.MemberRoster.AddToCounts(elderBrother.CharacterObject, 1);
        }
        if (this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.Defeated || this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.Retreated)
        {
          TextObject parent = new TextObject("{=Zq9qXcCk}You are defeated by the {RADAGOS.NAME}' Party, but your brother saved you. It doesn't look like they're going anywhere, though, so you should attack again once you're ready. You must have at least {NUMBER} members in your party. If you don't, go back to {QUEST_VILLAGE} and recruit some more troops.");
          StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject, parent);
          parent.SetTextVariable("NUMBER", 4);
          parent.SetTextVariable("QUEST_VILLAGE", Settlement.Find("village_ES3_2").Name);
          InformationManager.ShowInquiry(new InquiryData((this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.Defeated ? (object) new TextObject("{=FPhWhjq7}Defeated") : (object) new TextObject("{=w6Wa3lSL}Retreated")).ToString(), parent.ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) (() =>
          {
            this._hideout.Hideout.IsSpotted = true;
            this._hideout.IsVisible = true;
          }), (Action) null));
        }
        if (menuCallbackArgs.MenuContext.GameMenu.StringId == "radagos_hideout" && this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.Retreated)
          PlayerEncounter.Finish();
        if (this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.Defeated || this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.Retreated)
        {
          if (Hero.MainHero.HitPoints < 50)
            Hero.MainHero.Heal(50 - Hero.MainHero.HitPoints);
          Hero elderBrother = StoryModeHeroes.ElderBrother;
          if (elderBrother.HitPoints < 50)
            elderBrother.Heal(50 - elderBrother.HitPoints);
          if (elderBrother.PartyBelongedToAsPrisoner != null)
            EndCaptivityAction.ApplyByPeace(elderBrother);
          if (elderBrother.PartyBelongedTo == null)
            PartyBase.MainParty.MemberRoster.AddToCounts(elderBrother.CharacterObject, 1);
        }
        this._hideoutBattleEndState = FindHideoutTutorialQuest.HideoutBattleEndState.None;
        this._foughtWithRadagos = false;
        foreach (MobileParty party in (List<MobileParty>) this._hideout.Parties)
        {
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.PrisonRoster.GetTroopRoster())
          {
            if (this._mainPartyTroopBackup.Contains(troopRosterElement.Character))
            {
              int indexOfTroop = party.PrisonRoster.FindIndexOfTroop(troopRosterElement.Character);
              int elementWoundedNumber = party.PrisonRoster.GetElementWoundedNumber(indexOfTroop);
              int count = party.PrisonRoster.GetTroopCount(troopRosterElement.Character) - elementWoundedNumber;
              if (count > 0)
              {
                party.PrisonRoster.AddToCounts(troopRosterElement.Character, -count);
                PartyBase.MainParty.MemberRoster.AddToCounts(troopRosterElement.Character, count);
              }
            }
          }
        }
        this._mainPartyTroopBackup?.Clear();
      }
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      if (this._hideoutBattleEndState != FindHideoutTutorialQuest.HideoutBattleEndState.Victory || this._talkedWithRadagos)
        return;
      CampaignMission.OpenConversationMission(new ConversationCharacterData(CharacterObject.PlayerCharacter, noHorse: true), new ConversationCharacterData(StoryModeHeroes.Radagos.CharacterObject, noHorse: true, noWeapon: true));
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (!this._raiderParties.Contains(mobileParty))
        return;
      this._raiderParties.Remove(mobileParty);
    }

    private void OnGameLoadFinished()
    {
      for (int index = this._hideout.Parties.Count - 1; index >= 0; --index)
      {
        MobileParty party = this._hideout.Parties[index];
        if (party.IsBandit && party.MapEvent == null)
        {
          while (party.MemberRoster.TotalManCount > 4)
          {
            foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.MemberRoster.GetTroopRoster())
            {
              if (!troopRosterElement.Character.IsHero)
                party.MemberRoster.RemoveTroop(troopRosterElement.Character);
              if (party.MemberRoster.TotalManCount <= 4)
                break;
            }
          }
        }
      }
      while (this._hideout.Party.MemberRoster.TotalManCount > 4 && this._hideout.Party.MapEvent == null)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) this._hideout.Party.MemberRoster.GetTroopRoster())
        {
          if (!troopRosterElement.Character.IsHero)
            this._hideout.Party.MemberRoster.RemoveTroop(troopRosterElement.Character);
          if (this._hideout.Party.MemberRoster.TotalManCount <= 4)
            break;
        }
      }
    }

    private void AddGameMenus()
    {
      StringHelpers.SetCharacterProperties("TACTEOS", StoryModeHeroes.Tacitus.CharacterObject);
      StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject);
      this.AddGameMenu("radagos_hideout", new TextObject("{=z8LQn2Uh}You have arrived at the hideout."), new OnInitDelegate(this.radagos_hideout_menu_on_init));
      this.AddGameMenuOption("radagos_hideout", "enter_hideout", new TextObject("{=zxMOqlhs}Attack"), new GameMenuOption.OnConditionDelegate(this.enter_radagos_hideout_condition), new GameMenuOption.OnConsequenceDelegate(this.enter_radagos_hideout_on_consequence));
      this.AddGameMenuOption("radagos_hideout", "leave_hideout", new TextObject("{=3sRdGQou}Leave"), new GameMenuOption.OnConditionDelegate(this.leave_radagos_hideout_condition), new GameMenuOption.OnConsequenceDelegate(this.leave_radagos_hideout_on_consequence), true);
      this.AddGameMenu("brother_chest_menu", new TextObject("{=bhQ6Jbom}You come across a chest with an old piece of bronze in it. It's so battered and corroded that it could have been anything from a cup to a crown. This must be the chest {TACTEOS.NAME} mentioned to you, that had something to do with 'Neretzes' Folly'."), new OnInitDelegate(this.brother_chest_menu_on_init));
      this.AddGameMenuOption("brother_chest_menu", "brother_chest_menu_continue", new TextObject("{=DM6luo3c}Continue"), new GameMenuOption.OnConditionDelegate(this.brother_chest_menu_on_condition), new GameMenuOption.OnConsequenceDelegate(this.brother_chest_menu_on_consequence));
    }

    private void brother_chest_menu_on_init(MenuCallbackArgs menuCallbackArgs)
    {
      if (!this._talkedWithBrother)
        return;
      this._hideoutBattleEndState = FindHideoutTutorialQuest.HideoutBattleEndState.None;
      PlayerEncounter.Finish();
      this.CompleteQuestWithSuccess();
    }

    private bool brother_chest_menu_on_condition(MenuCallbackArgs menuCallbackArgs)
    {
      menuCallbackArgs.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return this.IsOngoing;
    }

    private void brother_chest_menu_on_consequence(MenuCallbackArgs menuCallbackArgs)
    {
      this._talkedWithBrother = true;
      CampaignMission.OpenConversationMission(new ConversationCharacterData(CharacterObject.PlayerCharacter, noHorse: true), new ConversationCharacterData(StoryModeHeroes.ElderBrother.CharacterObject, noHorse: true, noWeapon: true));
    }

    private void radagos_hideout_menu_on_init(MenuCallbackArgs menuCallbackArgs)
    {
      menuCallbackArgs.MenuTitle = new TextObject("{=8OIwHZF1}Hideout");
      StringHelpers.SetCharacterProperties("RADAGOS", StoryModeHeroes.Radagos.CharacterObject);
      if (PlayerEncounter.Current == null)
        return;
      MapEvent playerMapEvent = MapEvent.PlayerMapEvent;
      if (playerMapEvent != null)
      {
        if (playerMapEvent.WinningSide == playerMapEvent.PlayerSide)
        {
          if (this._dueledRadagos)
            Campaign.Current.CampaignBehaviorManager.GetBehavior<AchievementsCampaignBehavior>()?.OnRadagosDuelWon();
          this._hideoutBattleEndState = FindHideoutTutorialQuest.HideoutBattleEndState.Victory;
        }
        else
          this._hideoutBattleEndState = playerMapEvent.WinningSide != BattleSideEnum.None ? FindHideoutTutorialQuest.HideoutBattleEndState.Defeated : FindHideoutTutorialQuest.HideoutBattleEndState.Retreated;
        this._dueledRadagos = false;
      }
      if (this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.None)
        return;
      PlayerEncounter.Update();
    }

    private bool enter_radagos_hideout_condition(MenuCallbackArgs menuCallbackArgs)
    {
      menuCallbackArgs.optionLeaveType = GameMenuOption.LeaveType.Mission;
      if (MobileParty.MainParty.MemberRoster.TotalManCount < 4)
      {
        menuCallbackArgs.IsEnabled = false;
        menuCallbackArgs.Tooltip = new TextObject("{=kaZ1XtDX}You are not strong enough to attack. Recruit more troops from the village.");
      }
      return this.IsOngoing && this._hideoutBattleEndState == FindHideoutTutorialQuest.HideoutBattleEndState.None;
    }

    private void enter_radagos_hideout_on_consequence(MenuCallbackArgs menuCallbackArgs)
    {
      this._hideoutBattleEndState = FindHideoutTutorialQuest.HideoutBattleEndState.None;
      this._mainPartyTroopBackup = new List<CharacterObject>();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) PartyBase.MainParty.MemberRoster.GetTroopRoster())
      {
        if (!troopRosterElement.Character.IsHero)
          this._mainPartyTroopBackup.Add(troopRosterElement.Character);
      }
      if (!this._hideout.Hideout.IsInfested || this._hideout.Parties.Count < 3)
        this.InitializeHideout();
      foreach (MobileParty party in (List<MobileParty>) this._hideout.Parties)
      {
        if (party.IsBanditBossParty && party.MemberRoster.Contains(party.Party.Culture.BanditBoss))
          party.MemberRoster.RemoveTroop(party.Party.Culture.BanditBoss);
      }
      if (PlayerEncounter.Battle == null)
      {
        PlayerEncounter.StartBattle();
        PlayerEncounter.Update();
      }
      CampaignMission.OpenHideoutBattleMission(Settlement.CurrentSettlement.Hideout.SceneName, (FlattenedTroopRoster) null);
    }

    private bool leave_radagos_hideout_condition(MenuCallbackArgs menuCallbackArgs)
    {
      menuCallbackArgs.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return this.IsOngoing;
    }

    private void leave_radagos_hideout_on_consequence(MenuCallbackArgs menuCallbackArgs)
    {
      this._hideoutBattleEndState = FindHideoutTutorialQuest.HideoutBattleEndState.None;
      PlayerEncounter.Finish();
    }

    [GameMenuInitializationHandler("radagos_hideout")]
    [GameMenuInitializationHandler("brother_chest_menu")]
    private static void quest_game_menus_on_init_background(MenuCallbackArgs args)
    {
      Settlement settlement = Settlement.Find(FindHideoutTutorialQuest._activeHideoutStringId);
      args.MenuContext.SetBackgroundMeshName(settlement.Hideout.WaitMeshName);
    }

    protected override void OnCompleteWithSuccess()
    {
      this._hideout.Name = new TextObject("{=8OIwHZF1}Hideout");
      this._hideout.Party.SetVisualAsDirty();
      StoryModeHeroes.Radagos.Heal(100);
      StoryModeManager.Current.MainStoryLine.CompleteTutorialPhase(false);
    }

    internal static void AutoGeneratedStaticCollectObjectsFindHideoutTutorialQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._hideout);
      collectedObjects.Add((object) this._raiderParties);
    }

    internal static object AutoGeneratedGetMemberValue_hideout(object o)
    {
      return (object) ((FindHideoutTutorialQuest) o)._hideout;
    }

    internal static object AutoGeneratedGetMemberValue_raiderParties(object o)
    {
      return (object) ((FindHideoutTutorialQuest) o)._raiderParties;
    }

    internal static object AutoGeneratedGetMemberValue_talkedWithRadagos(object o)
    {
      return (object) ((FindHideoutTutorialQuest) o)._talkedWithRadagos;
    }

    internal static object AutoGeneratedGetMemberValue_talkedWithBrother(object o)
    {
      return (object) ((FindHideoutTutorialQuest) o)._talkedWithBrother;
    }

    internal static object AutoGeneratedGetMemberValue_hideoutBattleEndState(object o)
    {
      return (object) ((FindHideoutTutorialQuest) o)._hideoutBattleEndState;
    }

    public enum HideoutBattleEndState
    {
      None,
      Retreated,
      Defeated,
      Victory,
    }
  }
}
