// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeSubModule
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.GameComponents;
using StoryMode.GameComponents.CampaignBehaviors;
using StoryMode.Quests.PlayerClanQuests;
using StoryMode.Quests.SecondPhase;
using StoryMode.Quests.ThirdPhase;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace StoryMode
{
  public class StoryModeSubModule : MBSubModuleBase
  {
    protected override void InitializeGameStarter(Game game, IGameStarter gameStarterObject)
    {
      if (!(game.GameType is CampaignStoryMode gameType))
        return;
      CampaignGameStarter campaignGameStarter = (CampaignGameStarter) gameStarterObject;
      gameType.AddCampaignEventReceiver((CampaignEventReceiver) StoryModeEvents.Instance);
      this.AddGameMenus(campaignGameStarter);
      this.AddModels(campaignGameStarter);
      this.AddBehaviors(campaignGameStarter);
    }

    public override void OnGameEnd(Game game)
    {
      base.OnGameEnd(game);
      if (!(game.GameType is CampaignStoryMode) || StoryModeManager.Current == null)
        return;
      StoryModeManager.Current.Destroy();
    }

    private void AddGameMenus(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddGameMenu("menu_story_mode_welcome", "{=GGfM1HKn}Welcome to MBII Bannerlord", (OnInitDelegate) null);
      campaignGameStarter.AddGameMenuOption("menu_story_mode_welcome", "mno_continue", "{=str_continue}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) null);
    }

    private void AddBehaviors(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new LordConversationsStoryModeBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new MainStorylineCampaignBehavior());
      if (!StoryModeManager.Current.MainStoryLine.IsCompleted)
      {
        if (!StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted)
          campaignGameStarter.AddBehavior((CampaignBehaviorBase) new TutorialPhaseCampaignBehavior());
        if (!StoryModeManager.Current.MainStoryLine.IsFirstPhaseCompleted)
          campaignGameStarter.AddBehavior((CampaignBehaviorBase) new FirstPhaseCampaignBehavior());
        if (!StoryModeManager.Current.MainStoryLine.IsSecondPhaseCompleted)
          campaignGameStarter.AddBehavior((CampaignBehaviorBase) new SecondPhaseCampaignBehavior());
        campaignGameStarter.AddBehavior((CampaignBehaviorBase) new ThirdPhaseCampaignBehavior());
      }
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new TrainingFieldCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new StoryModeTutorialBoxCampaignBehavior());
      Debug.Print("campaignGameStarter.AddBehavior(AchievementsCampaignBehavior)");
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new AchievementsCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new WeakenEmpireQuestBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new AssembleEmpireQuestBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new DefeatTheConspiracyQuestBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new RescueFamilyQuestBehavior());
    }

    private void AddModels(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddModel((GameModel) new StoryModeBanditDensityModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeEncounterGameMenuModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeBattleRewardModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeTargetScoreCalculatingModel());
      campaignGameStarter.AddModel((GameModel) new StoryModePartyWageModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeKingdomDecisionPermissionModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeCombatXpModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeGenericXpModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeNotableSpawnModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeHeroDeathProbabilityCalculationModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeAgentDecideKilledOrUnconsciousModel());
      campaignGameStarter.AddModel((GameModel) new StoryModePartySizeLimitModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeBannerItemModel());
      campaignGameStarter.AddModel((GameModel) new StoryModePrisonerRecruitmentCalculationModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeTroopSupplierProbabilityModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeCutsceneSelectionModel());
      campaignGameStarter.AddModel((GameModel) new StoryModeVoiceOverModel());
    }

    public override void RegisterSubModuleObjects(bool isSavedCampaign)
    {
      if (StoryModeManager.Current == null)
        return;
      MBObjectManager.Instance.LoadOneXmlFromFile(ModuleHelper.GetModuleFullPath("StoryMode") + "ModuleData/story_mode_settlements.xml", (string) null, true);
    }

    protected override void OnApplicationTick(float dt)
    {
      base.OnApplicationTick(dt);
      if (StoryModeManager.Current == null)
        return;
      StoryModeManager.Current.TickRealTime(dt);
    }
  }
}
