// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.FirstPhaseCampaignBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.Quests.FirstPhase;
using StoryMode.Quests.PlayerClanQuests;
using StoryMode.StoryModeObjects;
using StoryMode.StoryModePhases;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.SceneInformationPopupTypes;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class FirstPhaseCampaignBehavior : CampaignBehaviorBase
  {
    private Location _imperialMentorHouse;
    private Location _antiImperialMentorHouse;
    private bool _popUpShowed;

    public override void RegisterEvents()
    {
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      CampaignEvents.BeforeMissionOpenedEvent.AddNonSerializedListener((object) this, new Action(this.OnBeforeMissionOpened));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      StoryModeEvents.OnBannerPieceCollectedEvent.AddNonSerializedListener((object) this, new Action(this.OnBannerPieceCollected));
      StoryModeEvents.OnStoryModeTutorialEndedEvent.AddNonSerializedListener((object) this, new Action(this.OnStoryModeTutorialEnded));
      StoryModeEvents.OnMainStoryLineSideChosenEvent.AddNonSerializedListener((object) this, new Action<MainStoryLineSide>(this.OnMainStoryLineSideChosen));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Location>("_imperialMentorHouse", ref this._imperialMentorHouse);
      dataStore.SyncData<Location>("_antiImperialMentorHouse", ref this._antiImperialMentorHouse);
      dataStore.SyncData<bool>("_popUpShowed", ref this._popUpShowed);
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      this.SpawnMentorsIfNeeded();
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter campaignGameStarter)
    {
      Settlement first1 = Settlement.FindFirst((Func<Settlement, bool>) (s => s.IsTown && !s.IsUnderSiege && s.Culture.StringId == "empire"));
      this._imperialMentorHouse = this.ReserveHouseForMentor(StoryModeHeroes.ImperialMentor, first1);
      Settlement first2 = Settlement.FindFirst((Func<Settlement, bool>) (s => s.IsTown && !s.IsUnderSiege && s.Culture.StringId == "battania"));
      this._antiImperialMentorHouse = this.ReserveHouseForMentor(StoryModeHeroes.AntiImperialMentor, first2);
      StoryModeManager.Current.MainStoryLine.SetMentorSettlements(first1, first2);
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      if (detail != QuestBase.QuestCompleteDetails.Success)
        return;
      switch (quest)
      {
        case BannerInvestigationQuest _:
          new MeetWithIstianaQuest(StoryModeManager.Current.MainStoryLine.ImperialMentorSettlement).StartQuest();
          new MeetWithArzagosQuest(StoryModeManager.Current.MainStoryLine.AntiImperialMentorSettlement).StartQuest();
          break;
        case MeetWithIstianaQuest _:
          Hero imperialMentor = StoryModeHeroes.ImperialMentor;
          new IstianasBannerPieceQuest(imperialMentor, this.FindSuitableHideout(imperialMentor)).StartQuest();
          break;
        case MeetWithArzagosQuest _:
          Hero antiImperialMentor = StoryModeHeroes.AntiImperialMentor;
          new ArzagosBannerPieceQuest(antiImperialMentor, this.FindSuitableHideout(antiImperialMentor)).StartQuest();
          break;
      }
    }

    private void OnGameMenuOpened(MenuCallbackArgs args) => this.SpawnMentorsIfNeeded();

    private void OnBeforeMissionOpened() => this.SpawnMentorsIfNeeded();

    private void SpawnMentorsIfNeeded()
    {
      if (this._imperialMentorHouse == null || this._antiImperialMentorHouse == null || Settlement.CurrentSettlement == null || StoryModeHeroes.ImperialMentor.CurrentSettlement != Settlement.CurrentSettlement && StoryModeHeroes.AntiImperialMentor.CurrentSettlement != Settlement.CurrentSettlement)
        return;
      this.SpawnMentorInHouse(Settlement.CurrentSettlement);
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (!(settlement.StringId == "tutorial_training_field") || party != MobileParty.MainParty || TutorialPhase.Instance.TutorialQuestPhase != TutorialQuestPhase.Finalized || this._popUpShowed || !TutorialPhase.Instance.IsSkipped)
        return;
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=EWD4Op6d}Notification").ToString(), new TextObject("{=lJiEsNiQ}A few hours after you leave the training ground, you come across a wounded man lying under a tree. You share your water with him and try to dress his wounds as best as you can. He tells you he is a traveling doctor. To thank you for your help, he hands you a small bronze artifact which he says was once given to him in payment by a warrior who said only that it was related to 'Neretzes' Folly.' He suspects it might be of great value. You resolve to find out more.").ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) (() =>
      {
        this._popUpShowed = true;
        CampaignEventDispatcher.Instance.RemoveListeners((object) Campaign.Current.GetCampaignBehavior<TutorialPhaseCampaignBehavior>());
        MBInformationManager.ShowSceneNotification((SceneNotificationData) new FindingFirstBannerPieceSceneNotificationItem(Hero.MainHero, new Action(this.OnPieceFoundAction)));
      }), (Action) null));
    }

    private void OnPieceFoundAction() => this.SelectClanName();

    private void OnStoryModeTutorialEnded()
    {
      new RebuildPlayerClanQuest().StartQuest();
      new BannerInvestigationQuest().StartQuest();
    }

    private void OnBannerPieceCollected()
    {
      TextObject message = new TextObject("{=Pus87ZW2}You've found the {BANNER_PIECE_COUNT} banner piece!");
      if (StoryMode.StoryModePhases.FirstPhase.Instance == null || StoryMode.StoryModePhases.FirstPhase.Instance.CollectedBannerPieceCount == 1)
        message.SetTextVariable("BANNER_PIECE_COUNT", new TextObject("{=oAoTaAWg}first"));
      else if (StoryMode.StoryModePhases.FirstPhase.Instance.CollectedBannerPieceCount == 2)
        message.SetTextVariable("BANNER_PIECE_COUNT", new TextObject("{=9ZyXl25X}second"));
      else if (StoryMode.StoryModePhases.FirstPhase.Instance.CollectedBannerPieceCount == 3)
        message.SetTextVariable("BANNER_PIECE_COUNT", new TextObject("{=4cw169Kb}third and the final"));
      MBInformationManager.AddQuickInformation(message);
    }

    private void OnMainStoryLineSideChosen(MainStoryLineSide side)
    {
      this._imperialMentorHouse.RemoveReservation();
      this._imperialMentorHouse = (Location) null;
      this._antiImperialMentorHouse.RemoveReservation();
      this._antiImperialMentorHouse = (Location) null;
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
      this.OpenBannerSelectionScreen();
    }

    private void OpenBannerSelectionScreen()
    {
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<BannerEditorState>());
    }

    private Settlement FindSuitableHideout(Hero questGiver)
    {
      Settlement suitableHideout = (Settlement) null;
      float num = float.MaxValue;
      foreach (Hideout hideout in (List<Hideout>) Hideout.All)
      {
        if (!Campaign.Current.BusyHideouts.Contains(hideout.Settlement))
        {
          float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(hideout.Settlement, questGiver.CurrentSettlement);
          if ((double) distance < (double) num)
          {
            num = distance;
            suitableHideout = hideout.Settlement;
          }
        }
      }
      return suitableHideout;
    }

    private void SpawnMentorInHouse(Settlement settlement)
    {
      Hero hero = StoryModeHeroes.ImperialMentor.CurrentSettlement == settlement ? StoryModeHeroes.ImperialMentor : StoryModeHeroes.AntiImperialMentor;
      Location location = StoryModeHeroes.ImperialMentor.CurrentSettlement == settlement ? this._imperialMentorHouse : this._antiImperialMentorHouse;
      CharacterObject characterObject = hero.CharacterObject;
      LocationCharacter locationCharacter = new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) characterObject)).Monster(FaceGen.GetMonsterWithSuffix(characterObject.Race, "_settlement")), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common", true, LocationCharacter.CharacterRelations.Neutral, (string) null, true);
      location.AddCharacter(locationCharacter);
    }

    private Location ReserveHouseForMentor(Hero mentor, Settlement settlement)
    {
      if (settlement == null)
        Debug.Print("There is null settlement in ReserveHouseForMentor");
      MBList<Location> mbList = new MBList<Location>();
      mbList.Add(settlement.LocationComplex.GetLocationWithId("house_1"));
      mbList.Add(settlement.LocationComplex.GetLocationWithId("house_2"));
      mbList.Add(settlement.LocationComplex.GetLocationWithId("house_3"));
      Location location = mbList.First<Location>((Func<Location, bool>) (h => !h.IsReserved)) ?? mbList.GetRandomElement<Location>();
      TextObject textObject = new TextObject("{=EZ19JOGj}{MENTOR.NAME}'s House");
      StringHelpers.SetCharacterProperties("MENTOR", mentor.CharacterObject, textObject);
      location.ReserveLocation(textObject, textObject);
      return location;
    }
  }
}
