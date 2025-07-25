// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.StoryModeTutorialBoxCampaignBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.Quests.TutorialPhase;
using StoryMode.StoryModePhases;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class StoryModeTutorialBoxCampaignBehavior : CampaignBehaviorBase
  {
    private List<string> _shownTutorials;
    private readonly MBList<CampaignTutorial> _availableTutorials;
    private Dictionary<string, int> _tutorialBackup;

    public MBReadOnlyList<CampaignTutorial> AvailableTutorials
    {
      get => (MBReadOnlyList<CampaignTutorial>) this._availableTutorials;
    }

    public StoryModeTutorialBoxCampaignBehavior()
    {
      this._shownTutorials = new List<string>();
      this._availableTutorials = new MBList<CampaignTutorial>();
      this._tutorialBackup = new Dictionary<string, int>();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnTutorialCompletedEvent.AddNonSerializedListener((object) this, new Action<string>(this.OnTutorialCompleted));
      CampaignEvents.CollectAvailableTutorialsEvent.AddNonSerializedListener((object) this, new Action<List<CampaignTutorial>>(this.OnTutorialListRequested));
      CampaignEvents.OnQuestStartedEvent.AddNonSerializedListener((object) this, new Action<QuestBase>(this.OnQuestStarted));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      StoryModeEvents.OnTravelToVillageTutorialQuestStartedEvent.AddNonSerializedListener((object) this, new Action(this.OnTravelToVillageTutorialQuestStarted));
      Game.Current.EventManager.RegisterEvent<ResetAllTutorialsEvent>(new Action<ResetAllTutorialsEvent>(this.OnResetAllTutorials));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<string>>("_shownTutorials", ref this._shownTutorials);
      dataStore.SyncData<Dictionary<string, int>>("_tutorialBackup", ref this._tutorialBackup);
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.BackupTutorial("MovementInMissionTutorial", 5);
      int priority1 = 100;
      int num1 = priority1 + 1;
      this.BackupTutorial("EncyclopediaHomeTutorial", priority1);
      int priority2 = num1;
      int num2 = priority2 + 1;
      this.BackupTutorial("EncyclopediaSettlementsTutorial", priority2);
      int priority3 = num2;
      int num3 = priority3 + 1;
      this.BackupTutorial("EncyclopediaTroopsTutorial", priority3);
      int priority4 = num3;
      int num4 = priority4 + 1;
      this.BackupTutorial("EncyclopediaKingdomsTutorial", priority4);
      int priority5 = num4;
      int num5 = priority5 + 1;
      this.BackupTutorial("EncyclopediaClansTutorial", priority5);
      int priority6 = num5;
      int num6 = priority6 + 1;
      this.BackupTutorial("EncyclopediaConceptsTutorial", priority6);
      int priority7 = num6;
      int num7 = priority7 + 1;
      this.BackupTutorial("EncyclopediaTrackTutorial", priority7);
      int priority8 = num7;
      int num8 = priority8 + 1;
      this.BackupTutorial("EncyclopediaSearchTutorial", priority8);
      int priority9 = num8;
      int num9 = priority9 + 1;
      this.BackupTutorial("EncyclopediaFiltersTutorial", priority9);
      int priority10 = num9;
      int num10 = priority10 + 1;
      this.BackupTutorial("EncyclopediaSortTutorial", priority10);
      int priority11 = num10;
      int num11 = priority11 + 1;
      this.BackupTutorial("EncyclopediaFogOfWarTutorial", priority11);
      int priority12 = num11;
      int num12 = priority12 + 1;
      this.BackupTutorial("RaidVillageStep1", priority12);
      int priority13 = num12;
      int num13 = priority13 + 1;
      this.BackupTutorial("UpgradingTroopsStep1", priority13);
      int priority14 = num13;
      int num14 = priority14 + 1;
      this.BackupTutorial("UpgradingTroopsStep2", priority14);
      int priority15 = num14;
      int num15 = priority15 + 1;
      this.BackupTutorial("UpgradingTroopsStep3", priority15);
      int priority16 = num15;
      int num16 = priority16 + 1;
      this.BackupTutorial("ChoosingPerkUpgradesStep1", priority16);
      int priority17 = num16;
      int num17 = priority17 + 1;
      this.BackupTutorial("ChoosingPerkUpgradesStep2", priority17);
      int priority18 = num17;
      int num18 = priority18 + 1;
      this.BackupTutorial("ChoosingPerkUpgradesStep3", priority18);
      int priority19 = num18;
      int num19 = priority19 + 1;
      this.BackupTutorial("ChoosingSkillFocusStep1", priority19);
      int priority20 = num19;
      int num20 = priority20 + 1;
      this.BackupTutorial("ChoosingSkillFocusStep2", priority20);
      int priority21 = num20;
      int num21 = priority21 + 1;
      this.BackupTutorial("GettingCompanionsStep1", priority21);
      int priority22 = num21;
      int num22 = priority22 + 1;
      this.BackupTutorial("GettingCompanionsStep2", priority22);
      int priority23 = num22;
      int num23 = priority23 + 1;
      this.BackupTutorial("GettingCompanionsStep3", priority23);
      int priority24 = num23;
      int num24 = priority24 + 1;
      this.BackupTutorial("RansomingPrisonersStep1", priority24);
      int priority25 = num24;
      int num25 = priority25 + 1;
      this.BackupTutorial("RansomingPrisonersStep2", priority25);
      int priority26 = num25;
      int num26 = priority26 + 1;
      this.BackupTutorial("CivilianEquipment", priority26);
      int priority27 = num26;
      int num27 = priority27 + 1;
      this.BackupTutorial("PartySpeed", priority27);
      int priority28 = num27;
      int num28 = priority28 + 1;
      this.BackupTutorial("ArmyCohesionStep1", priority28);
      int priority29 = num28;
      int num29 = priority29 + 1;
      this.BackupTutorial("ArmyCohesionStep2", priority29);
      int priority30 = num29;
      int num30 = priority30 + 1;
      this.BackupTutorial("CreateArmyStep2", priority30);
      int priority31 = num30;
      int num31 = priority31 + 1;
      this.BackupTutorial("CreateArmyStep3", priority31);
      int priority32 = num31;
      int num32 = priority32 + 1;
      this.BackupTutorial("OrderOfBattleTutorialStep1", priority32);
      int priority33 = num32;
      int num33 = priority33 + 1;
      this.BackupTutorial("OrderOfBattleTutorialStep2", priority33);
      int priority34 = num33;
      int num34 = priority34 + 1;
      this.BackupTutorial("OrderOfBattleTutorialStep3", priority34);
      int priority35 = num34;
      int num35 = priority35 + 1;
      this.BackupTutorial("CraftingStep1Tutorial", priority35);
      int priority36 = num35;
      int num36 = priority36 + 1;
      this.BackupTutorial("CraftingOrdersTutorial", priority36);
      int priority37 = num36;
      int num37 = priority37 + 1;
      this.BackupTutorial("InventoryBannerItemTutorial", priority37);
      int priority38 = num37;
      int num38 = priority38 + 1;
      this.BackupTutorial("CrimeTutorial", priority38);
      int priority39 = num38;
      int num39 = priority39 + 1;
      this.BackupTutorial("AssignRolesTutorial", priority39);
      int priority40 = num39;
      int num40 = priority40 + 1;
      this.BackupTutorial("BombardmentStep1", priority40);
      int priority41 = num40;
      int num41 = priority41 + 1;
      this.BackupTutorial("KingdomDecisionVotingTutorial", priority41);
      foreach (KeyValuePair<string, int> keyValuePair in this._tutorialBackup)
        this.AddTutorial(keyValuePair.Key, keyValuePair.Value);
    }

    private void OnTravelToVillageTutorialQuestStarted()
    {
      this.AddTutorial("SeeMarkersInMissionTutorial", 1);
      this.AddTutorial("NavigateOnMapTutorialStep1", 2);
      this.AddTutorial("NavigateOnMapTutorialStep2", 3);
      this.AddTutorial("EnterVillageTutorial", 4);
    }

    private void OnQuestStarted(QuestBase quest)
    {
      switch (quest)
      {
        case PurchaseGrainTutorialQuest _:
          this.AddTutorial("PressLeaveToReturnFromMissionType1", 10);
          this.AddTutorial("GetSuppliesTutorialStep1", 20);
          this.AddTutorial("GetSuppliesTutorialStep3", 22);
          break;
        case RecruitTroopsTutorialQuest _:
          this.AddTutorial("RecruitmentTutorialStep1", 11);
          this.AddTutorial("RecruitmentTutorialStep2", 12);
          break;
        case LocateAndRescueTravellerTutorialQuest _:
          this.AddTutorial("PressLeaveToReturnFromMissionType2", 30);
          this.AddTutorial("OrderTutorial1TutorialStep2", 33);
          this.AddTutorial("TakeAndRescuePrisonerTutorial", 34);
          this.AddTutorial("OrderTutorial2Tutorial", 35);
          break;
      }
      this._availableTutorials.Sort((Comparison<CampaignTutorial>) ((x, y) => x.Priority.CompareTo(y.Priority)));
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      if (StoryMode.StoryModePhases.TutorialPhase.Instance.TutorialQuestPhase == TutorialQuestPhase.RecruitAndPurchaseStarted && (quest is RecruitTroopsTutorialQuest && !Campaign.Current.QuestManager.IsThereActiveQuestWithType(typeof (PurchaseGrainTutorialQuest)) || quest is PurchaseGrainTutorialQuest && !Campaign.Current.QuestManager.IsThereActiveQuestWithType(typeof (RecruitTroopsTutorialQuest))))
      {
        this.AddTutorial("TalkToNotableTutorialStep1", 40);
        this.AddTutorial("TalkToNotableTutorialStep2", 41);
      }
      this._availableTutorials.Sort((Comparison<CampaignTutorial>) ((x, y) => x.Priority.CompareTo(y.Priority)));
    }

    private void OnTutorialCompleted(string completedTutorialType)
    {
      CampaignTutorial campaignTutorial = this._availableTutorials.Find((Predicate<CampaignTutorial>) (t => t.TutorialTypeId == completedTutorialType));
      if (campaignTutorial == null)
        return;
      this._availableTutorials.Remove(campaignTutorial);
      this._shownTutorials.Add(completedTutorialType);
      this._tutorialBackup.Remove(completedTutorialType);
    }

    private void OnTutorialListRequested(List<CampaignTutorial> campaignTutorials)
    {
      MBTextManager.SetTextVariable("TUTORIAL_SETTLEMENT_NAME", MBObjectManager.Instance.GetObject<Settlement>("village_ES3_2").Name, false);
      foreach (CampaignTutorial availableTutorial in (List<CampaignTutorial>) this.AvailableTutorials)
        campaignTutorials.Add(availableTutorial);
    }

    private void BackupTutorial(string tutorialTypeId, int priority)
    {
      if (this._shownTutorials.Contains(tutorialTypeId) || this._tutorialBackup.ContainsKey(tutorialTypeId))
        return;
      this._tutorialBackup.Add(tutorialTypeId, priority);
    }

    private void AddTutorial(string tutorialTypeId, int priority)
    {
      if (this._shownTutorials.Contains(tutorialTypeId))
        return;
      this._availableTutorials.Add(new CampaignTutorial(tutorialTypeId, priority));
      if (this._tutorialBackup.ContainsKey(tutorialTypeId))
        return;
      this._tutorialBackup.Add(tutorialTypeId, priority);
    }

    public void OnResetAllTutorials(ResetAllTutorialsEvent obj) => this._shownTutorials.Clear();
  }
}
