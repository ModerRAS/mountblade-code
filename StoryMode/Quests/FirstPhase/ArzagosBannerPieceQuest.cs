// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.FirstPhase.ArzagosBannerPieceQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.FirstPhase
{
  public class ArzagosBannerPieceQuest : StoryModeQuestBase
  {
    private const int MainPartyHealHitPointLimit = 50;
    private const int RaiderPartySize = 10;
    private const int RaiderPartyCount = 2;
    private const string ArzagosRaiderPartyStringId = "arzagos_banner_piece_quest_raider_party_";
    [SaveableField(1)]
    private readonly Settlement _hideout;
    [SaveableField(2)]
    private readonly List<MobileParty> _raiderParties;
    [SaveableField(3)]
    private ArzagosBannerPieceQuest.HideoutBattleEndState _hideoutBattleEndState;

    private TextObject _startQuestLog
    {
      get
      {
        return new TextObject("{=wvHvnEog}Find the hideout that Arzagos told you about and get the next banner piece.");
      }
    }

    public override TextObject Title
    {
      get => new TextObject("{=ay1gPPsP}Find another piece of the banner for Arzagos");
    }

    public override bool IsRemainingTimeHidden => false;

    public ArzagosBannerPieceQuest(Hero questGiver, Settlement hideout)
      : base("arzagos_banner_piece_quest", questGiver, StoryModeManager.Current.MainStoryLine.FirstPhase.FirstPhaseEndTime)
    {
      this._hideout = hideout;
      Campaign.Current.BusyHideouts.Add(this._hideout);
      this._raiderParties = new List<MobileParty>();
      this.InitializeHideout();
      this.AddTrackedObject((ITrackableCampaignObject) this._hideout);
      this.SetDialogs();
      this.InitializeQuestOnCreation();
      this.AddLog(this._startQuestLog);
      this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.None;
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      Campaign.Current.BusyHideouts.Remove(this._hideout);
    }

    protected override void HourlyTick()
    {
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
    }

    protected override void SetDialogs()
    {
      Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("hero_main_options").PlayerLine(new TextObject("{=dlBFVkDj}About the task you gave me...")).Condition(new ConversationSentence.OnConditionDelegate(this.conversation_lord_task_given_on_condition)).NpcLine(new TextObject("{=a0JxUMgo}What happened? Did you find the piece of the banner?")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).PlayerLine(new TextObject("{=rY0fdQSb}No, I am still working on it...")).CloseDialog(), (object) this);
    }

    private bool conversation_lord_task_given_on_condition()
    {
      return Hero.OneToOneConversationHero == this.QuestGiver && this.IsOngoing;
    }

    protected override void InitializeQuestOnGameLoad()
    {
      this.SetDialogs();
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.9")) || Campaign.Current.BusyHideouts.Contains(this._hideout))
        return;
      Campaign.Current.BusyHideouts.Add(this._hideout);
    }

    private void InitializeHideout()
    {
      this._hideout.Hideout.IsSpotted = true;
      this._hideout.IsVisible = true;
      this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.None;
      if (this._hideout.Hideout.IsInfested)
        return;
      for (int number = 0; number < 2; ++number)
      {
        if (!this._hideout.Hideout.IsInfested)
          this._raiderParties.Add(this.CreateRaiderParty(number));
      }
    }

    private MobileParty CreateRaiderParty(int number)
    {
      MobileParty banditParty = BanditPartyComponent.CreateBanditParty("arzagos_banner_piece_quest_raider_party_" + (object) number, this._hideout.OwnerClan, this._hideout.Hideout, false);
      TroopRoster memberRoster = new TroopRoster(banditParty.Party);
      CharacterObject character = Campaign.Current.ObjectManager.GetObject<CharacterObject>(this._hideout.Culture.StringId + "_bandit");
      memberRoster.AddToCounts(character, 5);
      TroopRoster prisonerRoster = new TroopRoster(banditParty.Party);
      banditParty.InitializeMobilePartyAtPosition(memberRoster, prisonerRoster, this._hideout.Position2D);
      banditParty.SetCustomName(new TextObject("{=u1Pkt4HC}Raiders"));
      banditParty.ActualClan = this._hideout.OwnerClan;
      banditParty.Position2D = this._hideout.Position2D;
      banditParty.Party.SetVisualAsDirty();
      banditParty.InitializePartyTrade((int) (1.0 * (double) MBRandom.RandomFloat * 20.0 * (double) banditParty.Party.TotalStrength + 50.0));
      banditParty.Ai.SetMoveGoToSettlement(this._hideout);
      banditParty.Ai.SetDoNotMakeNewDecisions(true);
      banditParty.SetPartyUsedByQuest(true);
      EnterSettlementAction.ApplyForParty(banditParty, this._hideout);
      return banditParty;
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      if (PlayerEncounter.Current == null || !mapEvent.IsPlayerMapEvent || Settlement.CurrentSettlement != this._hideout)
        return;
      if (mapEvent.WinningSide == mapEvent.PlayerSide)
        this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.Victory;
      else if (mapEvent.WinningSide == BattleSideEnum.None)
      {
        this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.Retreated;
        if (Hero.MainHero.IsPrisoner && this._raiderParties.Contains(Hero.MainHero.PartyBelongedToAsPrisoner.MobileParty))
        {
          EndCaptivityAction.ApplyByPeace(Hero.MainHero);
          if (Hero.MainHero.HitPoints < 50)
            Hero.MainHero.Heal(50 - Hero.MainHero.HitPoints);
          InformationManager.ShowInquiry(new InquiryData(new TextObject("{=FPhWhjq7}Defeated").ToString(), new TextObject("{=6iytd81P}You are defeated by the bandits in the hideout but you managed to escape. You need to wait a while before attacking again.").ToString(), true, false, new TextObject("{=yQtzabbe}Close").ToString(), (string) null, (Action) null, (Action) null));
        }
        if (this._hideout.Parties.Count == 0)
          this.InitializeHideout();
        this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.None;
      }
      else
        this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.Defeated;
    }

    private void OnGameMenuOpened(MenuCallbackArgs args)
    {
      if (this._hideoutBattleEndState != ArzagosBannerPieceQuest.HideoutBattleEndState.Victory && Settlement.CurrentSettlement == this._hideout && !this._hideout.Hideout.IsInfested)
        this.InitializeHideout();
      if (this._hideoutBattleEndState == ArzagosBannerPieceQuest.HideoutBattleEndState.Victory)
      {
        StoryMode.StoryModePhases.FirstPhase.Instance.CollectBannerPiece();
        this.CompleteQuestWithSuccess();
        this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.None;
      }
      else
      {
        if (this._hideoutBattleEndState != ArzagosBannerPieceQuest.HideoutBattleEndState.Retreated && this._hideoutBattleEndState != ArzagosBannerPieceQuest.HideoutBattleEndState.Defeated)
          return;
        if (Hero.MainHero.IsPrisoner)
        {
          EndCaptivityAction.ApplyByPeace(Hero.MainHero);
          if (Hero.MainHero.HitPoints < 50)
            Hero.MainHero.Heal(50 - Hero.MainHero.HitPoints);
          InformationManager.ShowInquiry(new InquiryData(new TextObject("{=FPhWhjq7}Defeated").ToString(), new TextObject("{=btAV7mmq}You are defeated by the raiders in the hideout but you managed to escape. You need to wait a while before attacking again.").ToString(), true, false, new TextObject("{=yQtzabbe}Close").ToString(), (string) null, (Action) null, (Action) null));
          if (this._hideout.Parties.Count == 0)
            this.InitializeHideout();
        }
        this._hideoutBattleEndState = ArzagosBannerPieceQuest.HideoutBattleEndState.None;
      }
    }

    internal static void AutoGeneratedStaticCollectObjectsArzagosBannerPieceQuest(
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
      return (object) ((ArzagosBannerPieceQuest) o)._hideout;
    }

    internal static object AutoGeneratedGetMemberValue_raiderParties(object o)
    {
      return (object) ((ArzagosBannerPieceQuest) o)._raiderParties;
    }

    internal static object AutoGeneratedGetMemberValue_hideoutBattleEndState(object o)
    {
      return (object) ((ArzagosBannerPieceQuest) o)._hideoutBattleEndState;
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
