// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.SecondPhase.ConspiracyQuests.DestroyRaidersConspiracyQuest
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
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.SecondPhase.ConspiracyQuests
{
  internal class DestroyRaidersConspiracyQuest : ConspiracyQuestBase
  {
    private const int QuestSuccededRelationBonus = 5;
    private const int QuestSucceededSecurityBonus = 5;
    private const int QuestSuceededProsperityBonus = 5;
    private const int QuestSuceededRenownBonus = 5;
    private const int QuestFailedRelationPenalty = -5;
    private const int NumberOfRegularRaidersToSpawn = 3;
    private const float RaiderPartyPlayerEncounterRadius = 9f;
    [SaveableField(1)]
    private readonly Settlement _targetSettlement;
    [SaveableField(2)]
    private readonly List<MobileParty> _regularRaiderParties;
    [SaveableField(3)]
    private MobileParty _specialRaiderParty;
    [SaveableField(4)]
    private JournalLog _regularPartiesProgressTracker;
    [SaveableField(5)]
    private JournalLog _specialPartyProgressTracker;
    [SaveableField(6)]
    private Clan _banditFaction;
    [SaveableField(7)]
    private CharacterObject _conspiracyCaptainCharacter;
    [SaveableField(8)]
    private Settlement _closestHideout;
    [SaveableField(9)]
    private List<MobileParty> _directedRaidersToEngagePlayer;

    public override TextObject Title => new TextObject("{=DfiACGay}Destroy Raiders");

    public override float ConspiracyStrengthDecreaseAmount => 50f;

    private int RegularRaiderPartyTroopCount
    {
      get
      {
        return 17 + MathF.Ceiling(23f * Campaign.Current.Models.IssueModel.GetIssueDifficultyMultiplier());
      }
    }

    private int SpecialRaiderPartyTroopCount
    {
      get
      {
        return 33 + MathF.Ceiling(37f * Campaign.Current.Models.IssueModel.GetIssueDifficultyMultiplier());
      }
    }

    public override TextObject StartLog
    {
      get
      {
        TextObject parent = new TextObject("{=Dr63pCHt}{MENTOR.LINK} has sent you a message about bandit attacks near {TARGET_SETTLEMENT}, and advises you to go there and eliminate them all before their actions turn the locals against your movement. ");
        StringHelpers.SetCharacterProperties("MENTOR", this.QuestGiver.CharacterObject, parent);
        parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
        return parent;
      }
    }

    public override TextObject StartMessageLogFromMentor
    {
      get
      {
        TextObject parent = new TextObject("{=V5K8RpAa}{MENTOR.LINK}'s message: “Greetings, {PLAYER.NAME}. We have a new problem. I've had reports from my agents of unusual bandit activity near {TARGET_SETTLEMENT}. They appear to be raiding and killing travellers {?IS_EMPIRE}under the protection of the Empire{?}who aren't under the protection of the Empire{\\?}, and leaving the others alone. This seems very much like the work of {NEMESIS_MENTOR.LINK}, to terrorize local merchants so that no one will stand up for our cause. I advise you to wipe these bandits out as quickly as possible. That would send a good message, both to our allies and our enemies.”");
        StringHelpers.SetCharacterProperties("MENTOR", this.QuestGiver.CharacterObject, parent);
        StringHelpers.SetCharacterProperties("PLAYER", Hero.MainHero.CharacterObject, parent);
        bool imperialQuestLine = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine;
        StringHelpers.SetCharacterProperties("NEMESIS_MENTOR", imperialQuestLine ? StoryModeHeroes.AntiImperialMentor.CharacterObject : StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        parent.SetTextVariable("IS_IMPERIAL", imperialQuestLine ? 1 : 0);
        parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
        return parent;
      }
    }

    public override TextObject SideNotificationText
    {
      get
      {
        TextObject parent = new TextObject("{=T7OTmJUp}{MENTOR.LINK} has a message for you");
        StringHelpers.SetCharacterProperties("MENTOR", this.QuestGiver.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _destroyRaidersQuestSucceededLogText
    {
      get
      {
        TextObject succeededLogText = new TextObject("{=qg05CSZb}You have defeated all the raiders near {TARGET_SETTLEMENT}. Many people now hope you can bring peace and prosperity back to the region.");
        succeededLogText.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
        return succeededLogText;
      }
    }

    private TextObject _destroyRaidersQuestFailedOnTimedOutLogText
    {
      get
      {
        return new TextObject("{=DaBN0O7N}You have failed to defeat all raider parties in time. Many of the locals feel that you've brought misfortune upon them, and want nothing to do with you.");
      }
    }

    private TextObject _destroyRaidersQuestFailedOnPlayerDefeatedByRaidersLogText
    {
      get
      {
        return new TextObject("{=mN60B07k}You have lost the battle against raiders and failed to defeat conspiracy forces. Many of the locals feel that you've brought misfortune upon them, and want nothing to do with you.");
      }
    }

    private TextObject _destroyRaidersRegularPartiesProgress
    {
      get
      {
        TextObject regularPartiesProgress = new TextObject("{=dbLb3krw}Hunt the gangs of {RAIDER_NAME}");
        regularPartiesProgress.SetTextVariable("RAIDER_NAME", this._banditFaction.Name);
        return regularPartiesProgress;
      }
    }

    private TextObject _destroyRaidersSpecialPartyProgress
    {
      get => new TextObject("{=QVkuaezc}Hunt the conspiracy war party");
    }

    private TextObject _destroyRaidersRegularProgressNotification
    {
      get
      {
        TextObject progressNotification = new TextObject("{=US0VAHiE}You have eliminated a {RAIDER_NAME} party.");
        progressNotification.SetTextVariable("RAIDER_NAME", this._banditFaction.Name);
        return progressNotification;
      }
    }

    private TextObject _destroyRaidersRegularProgressCompletedNotification
    {
      get
      {
        TextObject completedNotification = new TextObject("{=LfH7VXDH}You have eliminated all {RAIDER_NAME} gangs in the vicinity.");
        completedNotification.SetTextVariable("RAIDER_NAME", this._banditFaction.Name);
        return completedNotification;
      }
    }

    private TextObject _destroyRaidersSpecialPartyInformationQuestLog
    {
      get
      {
        TextObject informationQuestLog = new TextObject("{=agrsO3qQ}Due to your successful skirmishes against {RAIDER_NAME}, a conspiracy war party is now patrolling around {SETTLEMENT}.");
        informationQuestLog.SetTextVariable("RAIDER_NAME", this._banditFaction.Name);
        informationQuestLog.SetTextVariable("SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
        return informationQuestLog;
      }
    }

    private TextObject _destroyRaidersSpecialPartySpawnNotification
    {
      get
      {
        TextObject spawnNotification = new TextObject("{=QOVLkdTp}A conspiracy war party is now patrolling around {SETTLEMENT}.");
        spawnNotification.SetTextVariable("SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
        return spawnNotification;
      }
    }

    public DestroyRaidersConspiracyQuest(string questId, Hero questGiver)
      : base(questId, questGiver)
    {
      this._regularRaiderParties = new List<MobileParty>(3);
      this._directedRaidersToEngagePlayer = new List<MobileParty>(3);
      this._targetSettlement = this.DetermineTargetSettlement();
      this._banditFaction = this.GetBanditTypeForSettlement(this._targetSettlement);
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(this.GetConspiracyCaptainDialogue(), (object) this);
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroTakenPrisoner));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.MobilePartyDestroyed));
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.MapEventEnded));
    }

    private void OnGameMenuOpened(MenuCallbackArgs menuCallbackArgs)
    {
      if (!(menuCallbackArgs.MenuContext.GameMenu.StringId == "prisoner_wait"))
        return;
      PartyBase captorParty = PlayerCaptivity.CaptorParty;
      if ((captorParty != null ? (captorParty.IsMobile ? 1 : 0) : 0) == 0 || !this._regularRaiderParties.Contains(PlayerCaptivity.CaptorParty.MobileParty) && this._specialRaiderParty != PlayerCaptivity.CaptorParty.MobileParty)
        return;
      this.OnQuestFailedByDefeat();
    }

    protected override void InitializeQuestOnGameLoad()
    {
      this.SetDialogs();
      this.DetermineClosestHideouts();
      if (this._directedRaidersToEngagePlayer == null)
        this._directedRaidersToEngagePlayer = new List<MobileParty>(3);
      else if (this._directedRaidersToEngagePlayer.Count > this._regularRaiderParties.Count)
      {
        this._directedRaidersToEngagePlayer = new List<MobileParty>(3);
        foreach (MobileParty regularRaiderParty in this._regularRaiderParties)
          this.SetDefaultRaiderAi(regularRaiderParty);
      }
      else
      {
        foreach (MobileParty regularRaiderParty in this._regularRaiderParties)
          this.CheckRaiderPartyPlayerEncounter(regularRaiderParty);
      }
    }

    protected override void OnStartQuest()
    {
      base.OnStartQuest();
      this._conspiracyCaptainCharacter = Game.Current.ObjectManager.GetObject<CharacterObject>(StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? "conspiracy_commander_antiempire" : "conspiracy_commander_empire");
      this.InitializeRaiders();
      this._regularPartiesProgressTracker = this.AddDiscreteLog(this._destroyRaidersRegularPartiesProgress, TextObject.Empty, 0, 3);
      this.SetDialogs();
      this.InitializeQuestOnCreation();
    }

    private Settlement DetermineTargetSettlement()
    {
      Settlement targetSettlement = (Settlement) null;
      if (!Clan.PlayerClan.Settlements.IsEmpty<Settlement>())
      {
        targetSettlement = Clan.PlayerClan.Settlements.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (t => t.IsTown || t.IsCastle));
      }
      else
      {
        MBList<Settlement> mbList = StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom.Settlements.Where<Settlement>((Func<Settlement, bool>) (t => t.IsTown || t.IsCastle)).ToMBList<Settlement>();
        if (!mbList.IsEmpty<Settlement>())
          targetSettlement = mbList.GetRandomElement<Settlement>();
      }
      if (targetSettlement == null)
      {
        Debug.FailedAssert("Destroy raiders conspiracy quest settlement is null", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Quests\\SecondPhase\\ConspiracyQuests\\DestroyRaidersConspiracyQuest.cs", nameof (DetermineTargetSettlement), 304);
        targetSettlement = Settlement.All.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (t => t.IsTown || t.IsCastle));
      }
      return targetSettlement;
    }

    private void InitializeRaiders()
    {
      List<Settlement> closestHideouts = this.DetermineClosestHideouts();
      for (int index = 0; index < 3; ++index)
        this.SpawnRaiderPartyAtHideout(closestHideouts.ElementAt<Settlement>(index));
    }

    private List<Settlement> DetermineClosestHideouts()
    {
      MapDistanceModel model = Campaign.Current.Models.MapDistanceModel;
      List<Settlement> list = Hideout.All.Select<Hideout, Settlement>((Func<Hideout, Settlement>) (x => x.Settlement)).OrderBy<Settlement, float>((Func<Settlement, float>) (t => model.GetDistance(this._targetSettlement, t))).Take<Settlement>(3).ToList<Settlement>();
      this._closestHideout = list[0];
      return list;
    }

    private void SpawnRaiderPartyAtHideout(Settlement hideout, bool isSpecialParty = false)
    {
      MobileParty banditParty = BanditPartyComponent.CreateBanditParty("destroy_raiders_conspiracy_quest_" + (object) this._banditFaction.Name + "_" + (object) CampaignTime.Now.ElapsedSecondsUntilNow, this._banditFaction, hideout.Hideout, false);
      PartyTemplateObject partyTemplateObject;
      int raiderPartyTroopCount;
      TextObject name;
      if (isSpecialParty)
      {
        this._specialRaiderParty = banditParty;
        partyTemplateObject = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("conspiracy_anti_imperial_special_raider_party_template") : Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("conspiracy_imperial_special_raider_party_template");
        raiderPartyTroopCount = this.SpecialRaiderPartyTroopCount;
        name = new TextObject("{=GW7Zg3IP}Conspiracy War Party");
      }
      else
      {
        this._regularRaiderParties.Add(banditParty);
        partyTemplateObject = this._banditFaction.DefaultPartyTemplate;
        raiderPartyTroopCount = this.RegularRaiderPartyTroopCount;
        name = this._banditFaction.Name;
      }
      banditParty.InitializeMobilePartyAroundPosition(partyTemplateObject, hideout.GatePosition, 0.2f, 0.1f, raiderPartyTroopCount);
      banditParty.SetCustomName(name);
      banditParty.MemberRoster.Clear();
      banditParty.SetPartyUsedByQuest(true);
      this.SetDefaultRaiderAi(banditParty);
      if (isSpecialParty)
      {
        banditParty.MemberRoster.AddToCounts(this._conspiracyCaptainCharacter, 1, true);
        banditParty.ItemRoster.Clear();
        banditParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("vlandia_horse"), raiderPartyTroopCount / 2);
        MBInformationManager.AddQuickInformation(this._destroyRaidersSpecialPartySpawnNotification);
      }
      this.DistributeConspiracyRaiderTroopsByLevel(partyTemplateObject, banditParty.Party, raiderPartyTroopCount);
      this.AddTrackedObject((ITrackableCampaignObject) banditParty);
    }

    private void SetDefaultRaiderAi(MobileParty raiderParty)
    {
      SetPartyAiAction.GetActionForPatrollingAroundSettlement(raiderParty, this._targetSettlement);
      raiderParty.Ai.CheckPartyNeedsUpdate();
      raiderParty.Ai.SetDoNotMakeNewDecisions(true);
      raiderParty.IgnoreByOtherPartiesTill(CampaignTime.Never);
    }

    private Clan GetBanditTypeForSettlement(Settlement settlement)
    {
      Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive), (IMapPoint) settlement);
      return Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
    }

    private void MobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (destroyerParty == null || destroyerParty.MobileParty != MobileParty.MainParty)
        return;
      if (this._regularRaiderParties.Contains(mobileParty))
      {
        this.OnBanditPartyClearedByPlayer(mobileParty);
      }
      else
      {
        if (this._specialRaiderParty != mobileParty)
          return;
        this.OnSpecialBanditPartyClearedByPlayer();
      }
    }

    private void MapEventEnded(MapEvent mapEvent)
    {
      if (mapEvent.WinningSide == BattleSideEnum.None || mapEvent.DefeatedSide == BattleSideEnum.None || !mapEvent.IsPlayerMapEvent || !mapEvent.InvolvedParties.Any<PartyBase>((Func<PartyBase, bool>) (t =>
      {
        if (!t.IsMobile)
          return false;
        return this._regularRaiderParties.Contains(t.MobileParty) || t.MobileParty == this._specialRaiderParty;
      })))
        return;
      if (PlayerEncounter.Battle.WinningSide == PlayerEncounter.Battle.PlayerSide)
      {
        foreach (MapEventParty party in (List<MapEventParty>) mapEvent.GetMapEventSide(mapEvent.DefeatedSide).Parties)
        {
          MobileParty mobileParty = party.Party.MobileParty;
          if (mobileParty != null && mobileParty.Party.NumberOfHealthyMembers > 0 && (this._regularRaiderParties.Contains(mobileParty) || this._specialRaiderParty == mobileParty))
            DestroyPartyAction.Apply(PartyBase.MainParty, mobileParty);
        }
      }
      else
      {
        PartyBase captorParty = PlayerCaptivity.CaptorParty;
        if (((captorParty != null ? (captorParty.IsMobile ? 1 : 0) : 0) == 0 ? 0 : (this._regularRaiderParties.Contains(PlayerCaptivity.CaptorParty.MobileParty) ? 1 : (this._specialRaiderParty == PlayerCaptivity.CaptorParty.MobileParty ? 1 : 0))) != 0)
          return;
        this.OnQuestFailedByDefeat();
      }
    }

    private void OnSpecialBanditPartyClearedByPlayer()
    {
      if (this.IsTracked((ITrackableCampaignObject) this._specialRaiderParty))
        this.RemoveTrackedObject((ITrackableCampaignObject) this._specialRaiderParty);
      this._specialPartyProgressTracker.UpdateCurrentProgress(1);
      this._specialRaiderParty = (MobileParty) null;
      this.OnQuestSucceeded();
    }

    private void OnBanditPartyClearedByPlayer(MobileParty defeatedParty)
    {
      this._regularRaiderParties.Remove(defeatedParty);
      this._regularPartiesProgressTracker.UpdateCurrentProgress(3 - this._regularRaiderParties.Count);
      if (this._regularPartiesProgressTracker.HasBeenCompleted())
      {
        MBInformationManager.AddQuickInformation(this._destroyRaidersRegularProgressCompletedNotification);
        this.AddLog(this._destroyRaidersSpecialPartyInformationQuestLog);
        this._specialPartyProgressTracker = this.AddDiscreteLog(this._destroyRaidersSpecialPartyProgress, TextObject.Empty, 0, 1);
        this.SpawnRaiderPartyAtHideout(this._closestHideout, true);
      }
      else
      {
        if (this.IsTracked((ITrackableCampaignObject) defeatedParty))
          this.RemoveTrackedObject((ITrackableCampaignObject) defeatedParty);
        MBInformationManager.AddQuickInformation(this._destroyRaidersRegularProgressNotification);
      }
    }

    private void OnHeroTakenPrisoner(PartyBase capturer, Hero prisoner)
    {
      if (prisoner.Clan == Clan.PlayerClan || !capturer.IsMobile || !this._regularRaiderParties.Contains(capturer.MobileParty) && this._specialRaiderParty != capturer.MobileParty)
        return;
      Debug.FailedAssert("Hero has been taken prisoner by conspiracy raider party", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Quests\\SecondPhase\\ConspiracyQuests\\DestroyRaidersConspiracyQuest.cs", nameof (OnHeroTakenPrisoner), 524);
      EndCaptivityAction.ApplyByEscape(prisoner);
    }

    protected override void HourlyTick()
    {
      foreach (MobileParty regularRaiderParty in this._regularRaiderParties)
        this.CheckRaiderPartyPlayerEncounter(regularRaiderParty);
    }

    private void CheckRaiderPartyPlayerEncounter(MobileParty raiderParty)
    {
      if ((double) raiderParty.Position2D.DistanceSquared(MobileParty.MainParty.Position2D) <= 9.0 && raiderParty.Ai.DoNotAttackMainPartyUntil.IsPast && (double) raiderParty.Party.TotalStrength > (double) PartyBase.MainParty.TotalStrength * 1.2000000476837158 && MobileParty.MainParty.CurrentSettlement == null)
      {
        if (this._directedRaidersToEngagePlayer.Contains(raiderParty))
          return;
        SetPartyAiAction.GetActionForEngagingParty(raiderParty, MobileParty.MainParty);
        raiderParty.Ai.CheckPartyNeedsUpdate();
        this._directedRaidersToEngagePlayer.Add(raiderParty);
      }
      else
      {
        if (!this._directedRaidersToEngagePlayer.Contains(raiderParty))
          return;
        this._directedRaidersToEngagePlayer.Remove(raiderParty);
        this.SetDefaultRaiderAi(raiderParty);
      }
    }

    private DialogFlow GetConspiracyCaptainDialogue()
    {
      return DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=bzmcPtZ6}We know you. We were told to look out for you. We know what you're planning with {MENTOR.NAME}. You will fail, and you will die.[ib:closed][if:convo_predatory]").Condition((ConversationSentence.OnConditionDelegate) (() =>
      {
        StringHelpers.SetCharacterProperties("MENTOR", this.QuestGiver.CharacterObject);
        return CharacterObject.OneToOneConversationCharacter == this._conspiracyCaptainCharacter && this._specialRaiderParty != null && !this._specialPartyProgressTracker.HasBeenCompleted();
      })).BeginPlayerOptions().PlayerOption("{=BrHU0NuE}Maybe. But if we do, you won't live to see it.").Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.OnConspiracyCaptainDialogueEnd))).NpcLine("{=EoLcoaHM}We'll see...").CloseDialog().PlayerOption("{=TLaxmQDF}You'll without a doubt perish by my sword, but today is not the day.").Consequence((ConversationSentence.OnConsequenceDelegate) (() => PlayerEncounter.LeaveEncounter = true)).NpcLine("{=9aY0ifwi}We shall meet again...[if:convo_insulted]").CloseDialog().EndPlayerOptions().CloseDialog();
    }

    private void OnConspiracyCaptainDialogueEnd()
    {
      PlayerEncounter.RestartPlayerEncounter(this._specialRaiderParty.Party, PartyBase.MainParty);
      PlayerEncounter.StartBattle();
    }

    private void OnQuestSucceeded()
    {
      if (this._targetSettlement.OwnerClan != Clan.PlayerClan && !this._targetSettlement.OwnerClan.MapFaction.IsAtWarWith(Clan.PlayerClan.MapFaction))
        ChangeRelationAction.ApplyPlayerRelation(this._targetSettlement.OwnerClan.Leader, 5);
      Clan.PlayerClan.AddRenown(5f);
      this._targetSettlement.Town.Security += 5f;
      this._targetSettlement.Town.Prosperity += 5f;
      this.AddLog(this._destroyRaidersQuestSucceededLogText);
      this.CompleteQuestWithSuccess();
    }

    private void OnQuestFailedByDefeat()
    {
      this.OnQuestFailed();
      this.AddLog(this._destroyRaidersQuestFailedOnPlayerDefeatedByRaidersLogText);
      this.CompleteQuestWithFail();
    }

    private void OnQuestFailed()
    {
      foreach (MobileParty regularRaiderParty in this._regularRaiderParties)
      {
        if (regularRaiderParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, regularRaiderParty);
      }
      if (this._specialRaiderParty != null && this._specialRaiderParty.IsActive)
        DestroyPartyAction.Apply((PartyBase) null, this._specialRaiderParty);
      if (this._targetSettlement.OwnerClan == Clan.PlayerClan)
        return;
      ChangeRelationAction.ApplyPlayerRelation(this._targetSettlement.OwnerClan.Leader, -5);
    }

    protected override void OnTimedOut()
    {
      this.OnQuestFailed();
      this.AddLog(this._destroyRaidersQuestFailedOnTimedOutLogText);
    }

    internal static void AutoGeneratedStaticCollectObjectsDestroyRaidersConspiracyQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._targetSettlement);
      collectedObjects.Add((object) this._regularRaiderParties);
      collectedObjects.Add((object) this._specialRaiderParty);
      collectedObjects.Add((object) this._regularPartiesProgressTracker);
      collectedObjects.Add((object) this._specialPartyProgressTracker);
      collectedObjects.Add((object) this._banditFaction);
      collectedObjects.Add((object) this._conspiracyCaptainCharacter);
      collectedObjects.Add((object) this._closestHideout);
      collectedObjects.Add((object) this._directedRaidersToEngagePlayer);
    }

    internal static object AutoGeneratedGetMemberValue_targetSettlement(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._targetSettlement;
    }

    internal static object AutoGeneratedGetMemberValue_regularRaiderParties(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._regularRaiderParties;
    }

    internal static object AutoGeneratedGetMemberValue_specialRaiderParty(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._specialRaiderParty;
    }

    internal static object AutoGeneratedGetMemberValue_regularPartiesProgressTracker(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._regularPartiesProgressTracker;
    }

    internal static object AutoGeneratedGetMemberValue_specialPartyProgressTracker(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._specialPartyProgressTracker;
    }

    internal static object AutoGeneratedGetMemberValue_banditFaction(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._banditFaction;
    }

    internal static object AutoGeneratedGetMemberValue_conspiracyCaptainCharacter(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._conspiracyCaptainCharacter;
    }

    internal static object AutoGeneratedGetMemberValue_closestHideout(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._closestHideout;
    }

    internal static object AutoGeneratedGetMemberValue_directedRaidersToEngagePlayer(object o)
    {
      return (object) ((DestroyRaidersConspiracyQuest) o)._directedRaidersToEngagePlayer;
    }
  }
}
