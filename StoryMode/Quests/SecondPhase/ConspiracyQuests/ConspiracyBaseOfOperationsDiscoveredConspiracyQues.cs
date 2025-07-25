// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.SecondPhase.ConspiracyQuests.ConspiracyBaseOfOperationsDiscoveredConspiracyQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using SandBox.Missions.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.SecondPhase.ConspiracyQuests
{
  internal class ConspiracyBaseOfOperationsDiscoveredConspiracyQuest : ConspiracyQuestBase
  {
    private const string AntiImperialHideoutBossStringId = "anti_imperial_conspiracy_boss";
    private const string ImperialHideoutBossStringId = "imperial_conspiracy_boss";
    private const int RaiderPartySize = 6;
    private const int RaiderPartyCount = 2;
    [SaveableField(1)]
    private readonly Settlement _hideout;
    private Settlement _baseLocation;
    private bool _dueledWithHideoutBoss;
    private bool _isSuccess;
    private bool _isDone;
    private float _conspiracyStrengthDecreaseAmount;
    [SaveableField(2)]
    private readonly List<MobileParty> _raiderParties;

    public override TextObject Title
    {
      get => new TextObject("{=3Pq58i2u}Conspiracy base of operations discovered");
    }

    public override TextObject SideNotificationText
    {
      get
      {
        TextObject parent = new TextObject("{=aY4zWYpg}You have have received an important message from {MENTOR.LINK}.");
        StringHelpers.SetCharacterProperties("MENTOR", this.Mentor.CharacterObject, parent);
        return parent;
      }
    }

    public override TextObject StartMessageLogFromMentor
    {
      get
      {
        TextObject parent = new TextObject("{=XQrmVPKL}{PLAYER.LINK} I hope this letter finds you well. I have learned from a spy in {LOCATION_LINK} that our adversaries have set up a camp in its environs. She could not tell me what they plan to do, but if you raided the camp, stole some of their supplies, and brought it back to me, we could get some idea of their wicked intentions. Search around {LOCATION_LINK} to find the hideout.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
        parent.SetTextVariable("LOCATION_LINK", this._baseLocation.EncyclopediaLinkWithName);
        return parent;
      }
    }

    public override TextObject StartLog
    {
      get
      {
        TextObject parent = new TextObject("{=rTYNL1LB}{MENTOR.LINK} told you about a group of conspirators operating in a hideout in the vicinity of {LOCATION_LINK}. You should go there and raid the hideout with a small group of fighters and take the bandits by surprise.");
        StringHelpers.SetCharacterProperties("MENTOR", this.Mentor.CharacterObject, parent);
        parent.SetTextVariable("LOCATION_LINK", this._baseLocation.EncyclopediaLinkWithName);
        return parent;
      }
    }

    public override float ConspiracyStrengthDecreaseAmount
    {
      get => this._conspiracyStrengthDecreaseAmount;
    }

    private TextObject HideoutBossName
    {
      get
      {
        MobileParty mobileParty = this._hideout.Parties.FirstOrDefault<MobileParty>((Func<MobileParty, bool>) (p => p.IsBanditBossParty));
        return mobileParty != null && mobileParty.MemberRoster.TotalManCount > 0 ? mobileParty.MemberRoster.GetCharacterAtIndex(0).Name : new TextObject("{=izCbZEZg}Conspiracy Commander{%Commander is male.}");
      }
    }

    private TextObject HideoutSpottedLog
    {
      get
      {
        return new TextObject("{=nrdl5QaF}My spy spotted some conspirators at the camp, and some local bandits have joined them. My spy does not know if they are expecting an attack, so I implore you to be cautious and to be ready for anything. Needless to say, I'm sure you will send any documents you can find to me so I can study them. Go quickly and return safely.");
      }
    }

    private TextObject HideoutRemovedLog
    {
      get => new TextObject("{=cLZWjrZP}They have moved to another hiding place.");
    }

    private TextObject NotDueledWithHideoutBossAndDefeatLog
    {
      get
      {
        TextObject parent = new TextObject("{=nOLFHL3x}You and your men have defeated {BOSS_NAME} and the rest of the conspirators as {MENTOR.LINK} asked you to do.");
        StringHelpers.SetCharacterProperties("MENTOR", this.Mentor.CharacterObject, parent);
        parent.SetTextVariable("BOSS_NAME", this.HideoutBossName);
        return parent;
      }
    }

    private TextObject NotDueledWithHideoutBossAndDefeatedLog
    {
      get
      {
        TextObject bossAndDefeatedLog = new TextObject("{=EV5ykPuT}You and your men were defeated by {BOSS_NAME} and his conspirators. Rest of your men finds your broken body among the bloodied pile of corpses. Yet you live to fight another day.");
        bossAndDefeatedLog.SetTextVariable("BOSS_NAME", this.HideoutBossName);
        return bossAndDefeatedLog;
      }
    }

    private TextObject DueledWithHideoutBossAndDefeatLog
    {
      get
      {
        TextObject bossAndDefeatLog = new TextObject("{=LKiREaFZ}You have defeated {BOSS_NAME} in a fair duel his men the conspirators scatters and runs away in shame.");
        bossAndDefeatLog.SetTextVariable("BOSS_NAME", this.HideoutBossName);
        return bossAndDefeatLog;
      }
    }

    private TextObject DueledWithHideoutBossAndDefeatedLog
    {
      get
      {
        TextObject bossAndDefeatedLog = new TextObject("{=Uk7F483P}You were defeated by the {BOSS_NAME} in the duel. Your men takes your wounded body to the safety. As agreed, conspirators quickly leave and disappear without a trace.");
        bossAndDefeatedLog.SetTextVariable("BOSS_NAME", this.HideoutBossName);
        return bossAndDefeatedLog;
      }
    }

    public ConspiracyBaseOfOperationsDiscoveredConspiracyQuest(string questId, Hero questGiver)
      : base(questId, questGiver)
    {
      this._raiderParties = new List<MobileParty>();
      this._hideout = this.SelectHideout();
      if (this._hideout.Hideout.IsSpotted)
      {
        this.AddLog(this.HideoutSpottedLog);
        this.AddTrackedObject((ITrackableCampaignObject) this._hideout);
      }
      this._baseLocation = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (p => p.IsFortification), (IMapPoint) this._hideout);
      this._conspiracyStrengthDecreaseAmount = 0.0f;
      this.InitializeHideout();
      this._isDone = false;
    }

    private Settlement SelectHideout()
    {
      Settlement hideout = SettlementHelper.FindRandomHideout((Func<Settlement, bool>) (s =>
      {
        if (!s.Hideout.IsInfested)
          return false;
        return !StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? StoryModeData.IsKingdomImperial(SettlementHelper.FindNearestFortification(toMapPoint: (IMapPoint) s).OwnerClan.Kingdom) : !StoryModeData.IsKingdomImperial(SettlementHelper.FindNearestFortification(toMapPoint: (IMapPoint) s).OwnerClan.Kingdom);
      })) ?? SettlementHelper.FindRandomHideout((Func<Settlement, bool>) (s => !StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? StoryModeData.IsKingdomImperial(SettlementHelper.FindNearestFortification(toMapPoint: (IMapPoint) s).OwnerClan.Kingdom) : !StoryModeData.IsKingdomImperial(SettlementHelper.FindNearestFortification(toMapPoint: (IMapPoint) s).OwnerClan.Kingdom))) ?? SettlementHelper.FindRandomHideout((Func<Settlement, bool>) (s => s.Hideout.IsInfested)) ?? SettlementHelper.FindRandomHideout();
      if (!hideout.Hideout.IsInfested)
      {
        for (int partyIndex = 0; partyIndex < 2; ++partyIndex)
        {
          if (!hideout.Hideout.IsInfested)
            this._raiderParties.Add(this.CreateRaiderParty(hideout, false, partyIndex));
        }
      }
      return hideout;
    }

    private MobileParty CreateRaiderParty(
      Settlement hideout,
      bool isBanditBossParty,
      int partyIndex)
    {
      MobileParty banditParty = BanditPartyComponent.CreateBanditParty("conspiracy_discovered_quest_raider_party_" + (object) partyIndex, hideout.OwnerClan, hideout.Hideout, isBanditBossParty);
      TroopRoster memberRoster = new TroopRoster(banditParty.Party);
      CharacterObject character = Campaign.Current.ObjectManager.GetObject<CharacterObject>(hideout.Culture.StringId + "_bandit");
      memberRoster.AddToCounts(character, 6 - memberRoster.TotalManCount);
      TroopRoster prisonerRoster = new TroopRoster(banditParty.Party);
      banditParty.InitializeMobilePartyAtPosition(memberRoster, prisonerRoster, hideout.Position2D);
      banditParty.SetCustomName(new TextObject("{=u1Pkt4HC}Raiders"));
      banditParty.ActualClan = hideout.OwnerClan;
      banditParty.Position2D = hideout.Position2D;
      banditParty.Party.SetVisualAsDirty();
      EnterSettlementAction.ApplyForParty(banditParty, hideout);
      banditParty.InitializePartyTrade((int) (1.0 * (double) MBRandom.RandomFloat * 20.0 * (double) banditParty.Party.TotalStrength + 50.0));
      banditParty.Ai.SetMoveGoToSettlement(hideout);
      EnterSettlementAction.ApplyForParty(banditParty, hideout);
      banditParty.SetPartyUsedByQuest(true);
      return banditParty;
    }

    protected override void InitializeQuestOnGameLoad()
    {
      this._baseLocation = SettlementHelper.FindNearestFortification(toMapPoint: (IMapPoint) this._hideout);
      this.SetDialogs();
    }

    protected override void HourlyTick()
    {
    }

    private void InitializeHideout()
    {
      this.AddTrackedObject((ITrackableCampaignObject) this._baseLocation);
    }

    private void ChangeHideoutParties()
    {
      PartyTemplateObject raiderTemplate = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("conspiracy_anti_imperial_special_raider_party_template") : Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("conspiracy_imperial_special_raider_party_template");
      foreach (MobileParty party in (List<MobileParty>) this._hideout.Parties)
      {
        if (party.IsBandit)
        {
          party.SetCustomName(new TextObject("{=FRSas4xT}Conspiracy Troops"));
          party.SetPartyUsedByQuest(true);
          if (party.IsBanditBossParty)
          {
            int troopCountLimit = party.MemberRoster.TotalManCount - 1;
            party.MemberRoster.Clear();
            this.DistributeConspiracyRaiderTroopsByLevel(raiderTemplate, party.Party, troopCountLimit);
            CharacterObject character = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? Campaign.Current.ObjectManager.GetObject<CharacterObject>("anti_imperial_conspiracy_boss") : Campaign.Current.ObjectManager.GetObject<CharacterObject>("imperial_conspiracy_boss");
            character.SetTransferableInPartyScreen(false);
            party.MemberRoster.AddToCounts(character, 1, true);
          }
          else
          {
            int totalManCount = party.MemberRoster.TotalManCount;
            party.MemberRoster.Clear();
            this.DistributeConspiracyRaiderTroopsByLevel(raiderTemplate, party.Party, totalManCount);
          }
        }
      }
    }

    protected override void RegisterEvents()
    {
      base.RegisterEvents();
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnded));
      CampaignEvents.OnHideoutSpottedEvent.AddNonSerializedListener((object) this, new Action<PartyBase, PartyBase>(this.OnHideoutSpotted));
    }

    private void OnGameMenuOpened(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement == this._hideout && !this._isDone)
      {
        MobileParty mobileParty = this._hideout.Parties.FirstOrDefault<MobileParty>((Func<MobileParty, bool>) (p => p.IsBanditBossParty));
        if (mobileParty != null && mobileParty.IsActive && (mobileParty.MemberRoster.TotalManCount <= 0 || mobileParty.MemberRoster.GetCharacterAtIndex(0) != null && mobileParty.MemberRoster.GetCharacterAtIndex(0).StringId != (StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? "anti_imperial_conspiracy_boss" : "imperial_conspiracy_boss")))
          this.ChangeHideoutParties();
      }
      if (!this._isDone)
        return;
      if (Hero.MainHero.IsPrisoner)
        EndCaptivityAction.ApplyByPeace(Hero.MainHero);
      foreach (MobileParty destroyedParty in this._hideout.Parties.ToList<MobileParty>())
      {
        if (destroyedParty.IsBandit)
          DestroyPartyAction.Apply((PartyBase) null, destroyedParty);
      }
      if (this._isSuccess)
      {
        this.CompleteQuestWithSuccess();
      }
      else
      {
        this.AddLog(this.HideoutRemovedLog);
        this.CompleteQuestWithFail();
      }
    }

    private void OnMissionEnded(IMission mission)
    {
      if (Settlement.CurrentSettlement != this._hideout || PlayerEncounter.Current == null)
        return;
      MapEvent playerMapEvent = MapEvent.PlayerMapEvent;
      if (playerMapEvent == null)
        return;
      if (playerMapEvent.WinningSide == playerMapEvent.PlayerSide)
      {
        if (this._dueledWithHideoutBoss)
          this.DueledWithHideoutBossAndDefeatedCaravan();
        else
          this.NotDueledWithHideoutBossAndDefeatedCaravan();
        this._isSuccess = true;
      }
      else
      {
        if (playerMapEvent.WinningSide != BattleSideEnum.None)
        {
          if (this._dueledWithHideoutBoss)
            this.DueledWithHideoutBossAndDefeatedByCaravan();
          else
            this.NotDueledWithHideoutBossAndDefeatedByCaravan();
        }
        this._isSuccess = false;
      }
      this._isDone = true;
    }

    private void OnHideoutSpotted(PartyBase party, PartyBase hideoutParty)
    {
      if (party != PartyBase.MainParty || hideoutParty.Settlement != this._hideout)
        return;
      this.AddLog(this.HideoutSpottedLog);
      this.AddTrackedObject((ITrackableCampaignObject) this._hideout);
    }

    private void NotDueledWithHideoutBossAndDefeatedCaravan()
    {
      this.AddLog(this.NotDueledWithHideoutBossAndDefeatLog);
      this._conspiracyStrengthDecreaseAmount = 50f;
    }

    private void NotDueledWithHideoutBossAndDefeatedByCaravan()
    {
      this.AddLog(this.NotDueledWithHideoutBossAndDefeatedLog);
    }

    private void DueledWithHideoutBossAndDefeatedCaravan()
    {
      this.AddLog(this.DueledWithHideoutBossAndDefeatLog);
      this._conspiracyStrengthDecreaseAmount = 75f;
    }

    private void DueledWithHideoutBossAndDefeatedByCaravan()
    {
      this.AddLog(this.DueledWithHideoutBossAndDefeatedLog);
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000015).NpcLine(new TextObject("{=UdHL9YZC}Well well, isn't this the famous {PLAYER.LINK}! You have been a thorn at our side for a while now. It's good that you are here now. It spares us from searching for you.[if:convo_confused_annoyed][ib:hip]")).Condition(new ConversationSentence.OnConditionDelegate(this.bandit_hideout_boss_fight_start_on_condition)).BeginPlayerOptions().PlayerOption(new TextObject("{=bZI82WMt}Let's get this over with! Men Attack!")).NpcLine(new TextObject("{=H2FMIJmw}My wolves! Kill them![ib:aggressive][if:convo_furious]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.bandit_hideout_continue_battle_on_consequence)).CloseDialog().PlayerOption(new TextObject("{=5PGokzW1}Talk is cheap. If you really want me that bad, I challenge you to a duel.")).NpcLine(new TextObject("{=karjORwI}To hell with that! Why would I want to duel with you?")).PlayerLine(new TextObject("{=MU2O1SaZ}There is an army waiting for you outside.")).PlayerLine(new TextObject("{=tF6VeYaA}If you win, I promise my army won't crush you.")).PlayerLine(new TextObject("{=fUcwKbW8}If I win I will just kill you and let these poor excuses you call conspirators run away.")).NpcLine(new TextObject("{=C0xbbPqE}I will duel you for your insolence! Die dog![ib:warrior][if:convo_furious]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.bandit_hideout_start_duel_fight_on_consequence)).CloseDialog().EndPlayerOptions().CloseDialog(), (object) this);
    }

    private bool bandit_hideout_boss_fight_start_on_condition()
    {
      PartyBase encounteredParty = PlayerEncounter.EncounteredParty;
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter);
      return encounteredParty != null && !encounteredParty.IsMobile && encounteredParty.MapFaction != null && encounteredParty.MapFaction.IsBanditFaction && encounteredParty.IsSettlement && encounteredParty.Settlement.IsHideout && encounteredParty.Settlement == this._hideout && Mission.Current != null && Mission.Current.GetMissionBehavior<HideoutMissionController>() != null && CharacterObject.OneToOneConversationCharacter != null && CharacterObject.OneToOneConversationCharacter.StringId == (StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? "anti_imperial_conspiracy_boss" : "imperial_conspiracy_boss");
    }

    private void bandit_hideout_start_duel_fight_on_consequence()
    {
      this._dueledWithHideoutBoss = true;
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(HideoutMissionController.StartBossFightDuelMode);
    }

    private void bandit_hideout_continue_battle_on_consequence()
    {
      this._dueledWithHideoutBoss = false;
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(HideoutMissionController.StartBossFightBattleMode);
    }

    protected override void OnStartQuest()
    {
      base.OnStartQuest();
      this.SetDialogs();
    }

    protected override void OnCompleteWithSuccess()
    {
      base.OnCompleteWithSuccess();
      this.AddLog(new TextObject("{=6Dd3Pa07}You managed to thwart the conspiracy."));
      foreach (MobileParty raiderParty in this._raiderParties)
      {
        if (raiderParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, raiderParty);
      }
      this._raiderParties.Clear();
    }

    protected override void OnTimedOut()
    {
      base.OnTimedOut();
      this.AddLog(new TextObject("{=S5Dn2K3m}You couldn't stop the conspiracy."));
    }

    internal static void AutoGeneratedStaticCollectObjectsConspiracyBaseOfOperationsDiscoveredConspiracyQuest(
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
      return (object) ((ConspiracyBaseOfOperationsDiscoveredConspiracyQuest) o)._hideout;
    }

    internal static object AutoGeneratedGetMemberValue_raiderParties(object o)
    {
      return (object) ((ConspiracyBaseOfOperationsDiscoveredConspiracyQuest) o)._raiderParties;
    }
  }
}
