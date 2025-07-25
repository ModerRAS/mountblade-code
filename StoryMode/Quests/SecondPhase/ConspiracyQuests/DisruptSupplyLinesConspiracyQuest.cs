// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.SecondPhase.ConspiracyQuests.DisruptSupplyLinesConspiracyQuest
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
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
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
  internal class DisruptSupplyLinesConspiracyQuest : ConspiracyQuestBase
  {
    private const int NumberOfSettlementsToVisit = 6;
    private const int SpawnCaravanWaitDaysAfterQuestStarted = 5;
    [SaveableField(1)]
    private readonly Settlement[] _caravanTargetSettlements;
    [SaveableField(2)]
    private MobileParty _questCaravanMobileParty;
    [SaveableField(3)]
    private readonly CampaignTime _questStartTime;

    public override TextObject Title => new TextObject("{=y150haHv}Disrupt Supply Lines");

    public override TextObject SideNotificationText
    {
      get
      {
        TextObject parent = new TextObject("{=IPP6MKfy}{MENTOR.LINK} notified you about a weapons caravan that will supply conspirators with weapons and armour.");
        StringHelpers.SetCharacterProperties("MENTOR", this.Mentor.CharacterObject, parent);
        return parent;
      }
    }

    public override TextObject StartMessageLogFromMentor
    {
      get
      {
        TextObject parent = new TextObject("{=01Y1DAqA}{MENTOR.LINK} has sent you a message: As you may know, I receive reports from my spies in marketplaces around here. There is a merchant who I have been following - I know he is connected with {OTHER_MENTOR.LINK}. Now, I hear he has bought up a large supply of weapons and armor in {QUEST_FROM_SETTLEMENT_NAME}, and plans to travel to {QUEST_TO_SETTLEMENT_NAME}. From there it will move onward. I expect that {OTHER_MENTOR.LINK} is arming {?OTHER_MENTOR.GENDER}her{?}his{\\?} allies in the gangs in that area. If the caravan delivers its load, then I expect we will soon find some of our friends stabbed to death in the streets by hired thugs, and the rest of our friends too frightened to acknowledge us. I need you to track it down and destroy it. Try to intercept it on the first leg of its journey, before it gets to {QUEST_TO_SETTLEMENT_NAME}. If you fail, find out the next town to which it is going. It may take some time to find it, and when you do, it will be well guarded. But I trust in your perseverance, your skill and your understanding of how important this is. Good hunting.");
        StringHelpers.SetCharacterProperties("OTHER_MENTOR", StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? StoryModeHeroes.AntiImperialMentor.CharacterObject : StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        StringHelpers.SetCharacterProperties("MENTOR", this.Mentor.CharacterObject, parent);
        parent.SetTextVariable("QUEST_FROM_SETTLEMENT_NAME", this.QuestFromSettlement.EncyclopediaLinkWithName);
        parent.SetTextVariable("QUEST_TO_SETTLEMENT_NAME", this.QuestToSettlement.EncyclopediaLinkWithName);
        return parent;
      }
    }

    public override TextObject StartLog
    {
      get
      {
        TextObject parent = new TextObject("{=ZKdBlAmp}An arms caravan to resupply the conspirators will be soon on its way.{newline}{MENTOR.LINK}'s message:{newline}\"Our spies have learned about an arms caravan that is attempting to bring the conspirators high quality weapons and armor. We know that it will set out on its route from {QUEST_FROM_SETTLEMENT_NAME} to {QUEST_TO_SETTLEMENT_NAME} after {SPAWN_DAYS} days. We will find out and notify you about the new routes that it takes as it progresses.\"");
        StringHelpers.SetCharacterProperties("MENTOR", this.Mentor.CharacterObject, parent);
        parent.SetTextVariable("QUEST_FROM_SETTLEMENT_NAME", this.QuestFromSettlement.EncyclopediaLinkWithName);
        parent.SetTextVariable("QUEST_TO_SETTLEMENT_NAME", this.QuestToSettlement.EncyclopediaLinkWithName);
        parent.SetTextVariable("SPAWN_DAYS", 5);
        return parent;
      }
    }

    public override float ConspiracyStrengthDecreaseAmount => 75f;

    private TextObject PlayerDefeatedCaravanLog
    {
      get
      {
        TextObject parent = new TextObject("{=Db63Pe03}You have defeated the caravan and acquired its supplies. {OTHER_MENTOR.LINK}'s allies will not have their weapons. This will give us time and resources to prepare.");
        StringHelpers.SetCharacterProperties("MENTOR", this.Mentor.CharacterObject, parent);
        StringHelpers.SetCharacterProperties("OTHER_MENTOR", StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? StoryModeHeroes.AntiImperialMentor.CharacterObject : StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject MainHeroFailedToDisrupt
    {
      get
      {
        return new TextObject("{=9aRqqx3U}The caravan has delivered its supplies to the conspirators. A stronger adversary awaits us...");
      }
    }

    private TextObject MainHeroLostCombat
    {
      get
      {
        return new TextObject("{=bT9yspaQ}You have lost the battle against the conspiracy's caravan. A stronger adversary awaits us...");
      }
    }

    private Settlement QuestFromSettlement => this._caravanTargetSettlements[0];

    private Settlement QuestToSettlement
    {
      get => this._caravanTargetSettlements[this._caravanTargetSettlements.Length - 1];
    }

    public MobileParty ConspiracyCaravan => this._questCaravanMobileParty;

    public int CaravanPartySize => 70 + 70 * (int) this.GetQuestDifficultyMultiplier();

    public DisruptSupplyLinesConspiracyQuest(string questId, Hero questGiver)
      : base(questId, questGiver)
    {
      this._questStartTime = CampaignTime.Now;
      this._caravanTargetSettlements = new Settlement[7];
      this._caravanTargetSettlements[0] = this.GetQuestFromSettlement();
      for (int index = 1; index <= 6; ++index)
        this._caravanTargetSettlements[index] = this.GetNextSettlement(this._caravanTargetSettlements[index - 1]);
      this.AddTrackedObject((ITrackableCampaignObject) this.QuestFromSettlement);
    }

    private Settlement GetQuestFromSettlement()
    {
      return (SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (s =>
      {
        if (!s.IsTown || s.MapFaction == Clan.PlayerClan.MapFaction)
          return false;
        return !StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? !StoryModeData.IsKingdomImperial(s.OwnerClan.Kingdom) : StoryModeData.IsKingdomImperial(s.OwnerClan.Kingdom);
      })) ?? SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (s =>
      {
        if (!s.IsTown)
          return false;
        return !StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? !StoryModeData.IsKingdomImperial(s.OwnerClan.Kingdom) : StoryModeData.IsKingdomImperial(s.OwnerClan.Kingdom);
      }))) ?? SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (s => s.IsTown));
    }

    private Settlement GetNextSettlement(Settlement settlement)
    {
      return (SettlementHelper.FindNearestTown((Func<Settlement, bool>) (s => !((IEnumerable<Settlement>) this._caravanTargetSettlements).Contains<Settlement>(s) && s.MapFaction != Clan.PlayerClan.MapFaction && (StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? (StoryModeData.IsKingdomImperial(s.OwnerClan.Kingdom) ? 1 : 0) : (!StoryModeData.IsKingdomImperial(s.OwnerClan.Kingdom) ? 1 : 0)) != 0 && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, s) > 100.0 && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, s) < 500.0), (IMapPoint) settlement) ?? SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (s => !((IEnumerable<Settlement>) this._caravanTargetSettlements).Contains<Settlement>(s) && s.IsTown && s.MapFaction != Clan.PlayerClan.MapFaction && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, s) > 100.0 && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, s) < 500.0))) ?? SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (s => !((IEnumerable<Settlement>) this._caravanTargetSettlements).Contains<Settlement>(s) && s.IsTown && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, s) > 100.0 && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, s) < 500.0));
    }

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void HourlyTick()
    {
    }

    protected override void OnTimedOut()
    {
      MobileParty caravanMobileParty = this._questCaravanMobileParty;
      if ((caravanMobileParty != null ? (caravanMobileParty.IsActive ? 1 : 0) : 0) == 0)
        return;
      DestroyPartyAction.Apply((PartyBase) null, this._questCaravanMobileParty);
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
    }

    private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      if (this._questCaravanMobileParty == null || this._questCaravanMobileParty != party)
        return;
      if (settlement == this.QuestToSettlement)
      {
        DestroyPartyAction.Apply((PartyBase) null, this._questCaravanMobileParty);
        this.FailedToDisrupt();
      }
      else
      {
        int index = Array.IndexOf<Settlement>(this._caravanTargetSettlements, settlement) + 1;
        SetPartyAiAction.GetActionForVisitingSettlement(this._questCaravanMobileParty, this._caravanTargetSettlements[index]);
        if (this.IsTracked((ITrackableCampaignObject) settlement))
          this.RemoveTrackedObject((ITrackableCampaignObject) settlement);
        this.AddTrackedObject((ITrackableCampaignObject) this._caravanTargetSettlements[index]);
      }
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (this._questCaravanMobileParty == null || this._questCaravanMobileParty != party)
        return;
      this.AddLogForSettlementVisit(settlement);
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent || this._questCaravanMobileParty == null || !mapEvent.InvolvedParties.Contains<PartyBase>(this._questCaravanMobileParty.Party))
        return;
      if (mapEvent.WinningSide == mapEvent.PlayerSide)
      {
        if (this._questCaravanMobileParty.Party.NumberOfHealthyMembers > 0)
          DestroyPartyAction.Apply((PartyBase) null, this._questCaravanMobileParty);
        this.BattleWon();
      }
      else
      {
        if (mapEvent.WinningSide == BattleSideEnum.None)
          return;
        DestroyPartyAction.Apply((PartyBase) null, this._questCaravanMobileParty);
        this.BattleLost();
      }
    }

    private void DailyTick()
    {
      if (this._questCaravanMobileParty != null || (double) this._questStartTime.ElapsedDaysUntilNow < 5.0)
        return;
      this.CreateQuestCaravanParty();
      this.SetDialogs();
    }

    private void AddLogForSettlementVisit(Settlement settlement)
    {
      TextObject textObject = new TextObject("{=SVcr0EJM}Caravan is moving on to {TO_SETTLEMENT_LINK} from {FROM_SETTLEMENT_LINK}.");
      int index = Array.IndexOf<Settlement>(this._caravanTargetSettlements, settlement) + 1;
      textObject.SetTextVariable("FROM_SETTLEMENT_LINK", settlement.EncyclopediaLinkWithName);
      textObject.SetTextVariable("TO_SETTLEMENT_LINK", this._caravanTargetSettlements[index].EncyclopediaLinkWithName);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new ConspiracyQuestMapNotification((QuestBase) this, textObject));
      this.AddLog(textObject);
    }

    private void CreateQuestCaravanParty()
    {
      PartyTemplateObject partyTemplateObject = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("conspiracy_anti_imperial_special_raider_party_template") : Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("conspiracy_imperial_special_raider_party_template");
      Hero owner = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? StoryModeHeroes.AntiImperialMentor : StoryModeHeroes.ImperialMentor;
      string mountStringId;
      string harnessStringId;
      this.GetAdditionalVisualsForParty(this.QuestFromSettlement.Culture, out mountStringId, out harnessStringId);
      string[] source = new string[5]
      {
        "aserai",
        "battania",
        "khuzait",
        "sturgia",
        "vlandia"
      };
      Clan clan1 = (Clan) null;
      foreach (Clan clan2 in (List<Clan>) Clan.All)
      {
        if (!clan2.IsEliminated && !clan2.IsBanditFaction && !clan2.IsMinorFaction && (StoryModeManager.Current.MainStoryLine.IsOnAntiImperialQuestLine && clan2.Culture.StringId == "empire" || StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine && ((IEnumerable<string>) source).Contains<string>(clan2.Culture.StringId)))
        {
          clan1 = clan2;
          break;
        }
      }
      this._questCaravanMobileParty = CustomPartyComponent.CreateQuestParty(this.QuestFromSettlement.GatePosition, 0.0f, this.QuestFromSettlement, new TextObject("{=eVzg5Mtl}Conspiracy Caravan"), clan1, partyTemplateObject, owner, partyMountStringId: mountStringId, partyHarnessStringId: harnessStringId, customPartyBaseSpeed: 4f, avoidHostileActions: true);
      this._questCaravanMobileParty.Aggressiveness = 0.0f;
      this._questCaravanMobileParty.MemberRoster.Clear();
      this._questCaravanMobileParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("fish"), 20);
      this._questCaravanMobileParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("grain"), 40);
      this._questCaravanMobileParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("butter"), 20);
      this.DistributeConspiracyRaiderTroopsByLevel(partyTemplateObject, this._questCaravanMobileParty.Party, this.CaravanPartySize);
      this._questCaravanMobileParty.IgnoreByOtherPartiesTill(this.QuestDueTime);
      this._questCaravanMobileParty.SetPartyUsedByQuest(true);
      SetPartyAiAction.GetActionForVisitingSettlement(this._questCaravanMobileParty, this._caravanTargetSettlements[1]);
      this._questCaravanMobileParty.Ai.SetDoNotMakeNewDecisions(true);
      this.AddTrackedObject((ITrackableCampaignObject) this._questCaravanMobileParty);
      this._questCaravanMobileParty.IgnoreByOtherPartiesTill(CampaignTime.WeeksFromNow(3f));
      this.AddLogForSettlementVisit(this.QuestFromSettlement);
    }

    private void GetAdditionalVisualsForParty(
      CultureObject culture,
      out string mountStringId,
      out string harnessStringId)
    {
      if (culture.StringId == "aserai" || culture.StringId == "khuzait")
      {
        mountStringId = "camel";
        harnessStringId = (double) MBRandom.RandomFloat > 0.5 ? "camel_saddle_a" : "camel_saddle_b";
      }
      else
      {
        mountStringId = "mule";
        harnessStringId = (double) MBRandom.RandomFloat > 0.5 ? "mule_load_a" : ((double) MBRandom.RandomFloat > 0.5 ? "mule_load_b" : "mule_load_c");
      }
    }

    private float GetQuestDifficultyMultiplier()
    {
      return MBMath.ClampFloat((float) ((0.0 + (double) Clan.PlayerClan.Fiefs.Count * 0.10000000149011612 + (double) Clan.PlayerClan.TotalStrength * 0.00079999997979030013 + (double) Clan.PlayerClan.Renown * 1.4999999621068127E-05 + (double) Clan.PlayerClan.Lords.Count * (1.0 / 500.0) + (double) Clan.PlayerClan.Companions.Count * 0.0099999997764825821 + (double) Clan.PlayerClan.SupporterNotables.Count * (1.0 / 1000.0) + (double) Hero.MainHero.OwnedCaravans.Count * 0.0099999997764825821 + (double) PartyBase.MainParty.NumberOfAllMembers * (1.0 / 500.0) + (double) CharacterObject.PlayerCharacter.Level * (1.0 / 500.0)) * 0.97500002384185791 + (double) MBRandom.RandomFloat * 0.02500000037252903), 0.1f, 1f);
    }

    private void BattleWon()
    {
      this.AddLog(this.PlayerDefeatedCaravanLog);
      this.CompleteQuestWithSuccess();
    }

    private void BattleLost()
    {
      this.AddLog(this.MainHeroLostCombat);
      this.CompleteQuestWithFail();
    }

    private void FailedToDisrupt()
    {
      this.AddLog(this.MainHeroFailedToDisrupt);
      this.CompleteQuestWithFail();
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 1000015).NpcLine(new TextObject("{=ch9f3A1e}Greetings, {?PLAYER.GENDER}madam{?}sir{\\?}. Why did you stop our caravan? I trust you are not robbing us.")).Condition(new ConversationSentence.OnConditionDelegate(this.conversation_with_caravan_master_condition)).BeginPlayerOptions().PlayerOption(new TextObject("{=Xx94UrYe}I might be. What are you carrying? Honest goods, or weapons? How about you let us have a look.")).NpcLine(new TextObject("{=LXGXxKqw}Ah... Well, I suppose we can drop the charade. [ib:hip2][if:convo_nonchalant]I know who sent you, and I suppose you know who sent me. Certainly, you can see my wares, and then you can feel their sharp end in your belly.")).CloseDialog().PlayerOption(new TextObject("{=cEaXehHy}I was just checking on something. You can move along.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.cancel_encounter_consequence)).CloseDialog().EndPlayerOptions().CloseDialog(), (object) this);
    }

    private bool conversation_with_caravan_master_condition()
    {
      return this._questCaravanMobileParty != null && ConversationHelper.GetConversationCharacterPartyLeader(this._questCaravanMobileParty.Party) == CharacterObject.OneToOneConversationCharacter;
    }

    private void cancel_encounter_consequence()
    {
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    internal static void AutoGeneratedStaticCollectObjectsDisruptSupplyLinesConspiracyQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._caravanTargetSettlements);
      collectedObjects.Add((object) this._questCaravanMobileParty);
      CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this._questStartTime, collectedObjects);
    }

    internal static object AutoGeneratedGetMemberValue_caravanTargetSettlements(object o)
    {
      return (object) ((DisruptSupplyLinesConspiracyQuest) o)._caravanTargetSettlements;
    }

    internal static object AutoGeneratedGetMemberValue_questCaravanMobileParty(object o)
    {
      return (object) ((DisruptSupplyLinesConspiracyQuest) o)._questCaravanMobileParty;
    }

    internal static object AutoGeneratedGetMemberValue_questStartTime(object o)
    {
      return (object) ((DisruptSupplyLinesConspiracyQuest) o)._questStartTime;
    }
  }
}
