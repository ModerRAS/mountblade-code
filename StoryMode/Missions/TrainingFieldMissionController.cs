// Decompiled with JetBrains decompiler
// Type: StoryMode.Missions.TrainingFieldMissionController
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using SandBox.Conversation.MissionLogics;
using SandBox.Missions.MissionLogics;
using StoryMode.StoryModeObjects;
using StoryMode.StoryModePhases;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Objects;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace StoryMode.Missions
{
  public class TrainingFieldMissionController : MissionLogic
  {
    private const string SoundBasicMeleeGreet = "event:/mission/tutorial/vo/parrying/greet";
    private const string SoundBasicMeleeBlockLeft = "event:/mission/tutorial/vo/parrying/block_left";
    private const string SoundBasicMeleeBlockRight = "event:/mission/tutorial/vo/parrying/block_right";
    private const string SoundBasicMeleeBlockUp = "event:/mission/tutorial/vo/parrying/block_up";
    private const string SoundBasicMeleeBlockDown = "event:/mission/tutorial/vo/parrying/block_down";
    private const string SoundBasicMeleeAttackLeft = "event:/mission/tutorial/vo/parrying/attack_left";
    private const string SoundBasicMeleeAttackRight = "event:/mission/tutorial/vo/parrying/attack_right";
    private const string SoundBasicMeleeAttackUp = "event:/mission/tutorial/vo/parrying/attack_up";
    private const string SoundBasicMeleeAttackDown = "event:/mission/tutorial/vo/parrying/attack_down";
    private const string SoundBasicMeleeRemark = "event:/mission/tutorial/vo/parrying/remark";
    private const string SoundBasicMeleePraise = "event:/mission/tutorial/vo/parrying/praise";
    private const string SoundAdvancedMeleeGreet = "event:/mission/tutorial/vo/fighting/greet";
    private const string SoundAdvancedMeleeWarning = "event:/mission/tutorial/vo/fighting/warning";
    private const string SoundAdvancedMeleePlayerLose = "event:/mission/tutorial/vo/fighting/player_lose";
    private const string SoundAdvancedMeleePlayerWin = "event:/mission/tutorial/vo/fighting/player_win";
    private const string SoundRangedPickPrefix = "event:/mission/tutorial/vo/archery/pick_";
    private const string SoundRangedStartTraining = "event:/mission/tutorial/vo/archery/start_training";
    private const string SoundRangedHitTarget = "event:/mission/tutorial/vo/archery/hit_target";
    private const string SoundRangedMissTarget = "event:/mission/tutorial/vo/archery/miss_target";
    private const string SoundRangedFinish = "event:/mission/tutorial/vo/archery/finish";
    private const string SoundMountedPickPrefix = "event:/mission/tutorial/vo/riding/pick_";
    private const string SoundMountedMountHorse = "event:/mission/tutorial/vo/riding/mount_horse";
    private const string SoundMountedStartCourse = "event:/mission/tutorial/vo/riding/start_course";
    private const string SoundMountedCourseFinish = "event:/mission/tutorial/vo/riding/course_finish";
    private const string SoundMountedCoursePerfect = "event:/mission/tutorial/vo/riding/course_perfect";
    private const string FinishCourseSound = "event:/mission/tutorial/finish_course";
    private const string FinishTaskSound = "event:/mission/tutorial/finish_task";
    private const string HitTargetSound = "event:/mission/tutorial/hit_target";
    private TextObject _trainingFinishedText = new TextObject("{=cRvSuYC8}Choose another weapon or go to another training area.");
    private List<TrainingFieldMissionController.DelayedAction> _delayedActions = new List<TrainingFieldMissionController.DelayedAction>();
    private MissionConversationLogic _missionConversationHandler;
    private const string RangedNpcCharacter = "tutorial_npc_ranged";
    private const string BowTrainingShootingPositionTag = "bow_training_shooting_position";
    private const string SpawnerRangedNpcTag = "spawner_ranged_npc_tag";
    private const string RangedNpcSecondPosTag = "_ranged_npc_second_pos_tag";
    private const string RangedNpcTargetTag = "_ranged_npc_target";
    private const float ShootingPositionActivationDistance = 2f;
    private const string NameOfTheMeleeTraining = "Melee Training";
    private const string BasicMeleeNpcSpawnPointTag = "spawner_melee_npc";
    private const string BasicMeleeNpcCharacter = "tutorial_npc_basic_melee";
    private const string AdvancedMeleeNpcSpawnPointTagEasy = "spawner_adv_melee_npc_easy";
    private const string AdvancedMeleeNpcSpawnPointTagNormal = "spawner_adv_melee_npc_normal";
    private const string AdvancedMeleeNpcEasySecondPositionTag = "adv_melee_npc_easy_second_pos";
    private const string AdvancedMeleeNpcNormalSecondPositionTag = "adv_melee_npc_normal_second_pos";
    private const string AdvancedMeleeEasyNpcCharacter = "tutorial_npc_advanced_melee_easy";
    private const string AdvancedMeleeNormalNpcCharacter = "tutorial_npc_advanced_melee_normal";
    private const string AdvancedMeleeBattleAreaTag = "battle_area";
    private const string MountedAISpawnPositionTag = "_mounted_ai_spawn_position";
    private const string MountedAICharacter = "tutorial_npc_mounted_ai";
    private const string MountedAITargetTag = "_mounted_ai_target";
    private const string MountedAIWaitingPositionTag = "_mounted_ai_waiting_position";
    private const string CheckpointTag = "mounted_checkpoint";
    private const string HorseSpawnPositionTag = "spawner_horse";
    private const string FinishGateClosedTag = "finish_gate_closed";
    private const string FinishGateOpenTag = "finish_gate_open";
    private const string NameOfTheHorse = "old_horse";
    private List<TutorialArea> _trainingAreas = new List<TutorialArea>();
    private TutorialArea _activeTutorialArea;
    private List<Agent> _agents = new List<Agent>();
    private bool _courseFinished;
    private int _trainingProgress;
    private int _trainingSubTypeIndex = -1;
    private string _activeTrainingSubTypeTag = "";
    private float _beginningTime;
    private float _timeScore;
    private bool _showTutorialObjectivesAnyway;
    private Dictionary<string, float> _tutorialScores;
    private GameEntity _shootingPosition;
    private Agent _bowNpc;
    private WorldPosition _rangedNpcSpawnPosition;
    private WorldPosition _rangedTargetPosition;
    private Vec3 _rangedTargetRotation;
    private GameEntity _rangedNpcSpawnPoint;
    private int _rangedLastBrokenTargetCount;
    private List<DestructableComponent> _targetsForRangedNpc = new List<DestructableComponent>();
    private DestructableComponent _lastTargetGiven;
    private bool _atShootingPosition;
    private bool _targetPositionSet;
    private List<TrainingFieldMissionController.TutorialObjective> _rangedObjectives = new List<TrainingFieldMissionController.TutorialObjective>()
    {
      new TrainingFieldMissionController.TutorialObjective("ranged_go_to_shooting_position"),
      new TrainingFieldMissionController.TutorialObjective("ranged_shoot_targets")
    };
    private TextObject _remainingTargetText = new TextObject("{=gBbm9beO}Hit all of the targets. {REMAINING_TARGET} {?REMAINING_TARGET>1}targets{?}target{\\?} left.");
    private Agent _meleeTrainer;
    private WorldPosition _meleeTrainerDefaultPosition;
    private float _timer;
    private List<TrainingFieldMissionController.TutorialObjective> _meleeObjectives = new List<TrainingFieldMissionController.TutorialObjective>()
    {
      new TrainingFieldMissionController.TutorialObjective("melee_go_to_trainer"),
      new TrainingFieldMissionController.TutorialObjective("melee_defense"),
      new TrainingFieldMissionController.TutorialObjective("melee_attack")
    };
    private Agent _advancedMeleeTrainerEasy;
    private Agent _advancedMeleeTrainerNormal;
    private WorldPosition _advancedEasyMeleeTrainerDefaultPosition;
    private WorldPosition _advancedNormalMeleeTrainerDefaultPosition;
    private float _playerCampaignHealth;
    private float _playerHealth = 100f;
    private float _advancedMeleeTrainerEasyHealth = 100f;
    private float _advancedMeleeTrainerNormalHealth = 100f;
    private MatrixFrame _advancedMeleeTrainerEasyInitialPosition;
    private MatrixFrame _advancedMeleeTrainerEasySecondPosition;
    private MatrixFrame _advancedMeleeTrainerNormalInitialPosition;
    private MatrixFrame _advancedMeleeTrainerNormalSecondPosition;
    private TextObject _fightStartsIn = new TextObject("{=TNxWBS07}Fight will start in {REMAINING_TIME} {?REMAINING_TIME>1}seconds{?}second{\\?}...");
    private List<TrainingFieldMissionController.TutorialObjective> _advMeleeObjectives = new List<TrainingFieldMissionController.TutorialObjective>()
    {
      new TrainingFieldMissionController.TutorialObjective("adv_melee_go_to_trainer"),
      new TrainingFieldMissionController.TutorialObjective("adv_melee_beat_easy_trainer"),
      new TrainingFieldMissionController.TutorialObjective("adv_melee_beat_normal_trainer")
    };
    private ActionIndexCache FallBackRiseAnimation = ActionIndexCache.Create("act_strike_fall_back_back_rise");
    private ActionIndexCache FallBackRiseAnimationContinue = ActionIndexCache.Create("act_strike_fall_back_back_rise_continue");
    private bool _playerLeftBattleArea;
    private GameEntity _finishGateClosed;
    private GameEntity _finishGateOpen;
    private int _finishGateStatus;
    private List<(VolumeBox, bool)> _checkpoints = new List<(VolumeBox, bool)>();
    private int _currentCheckpointIndex = -1;
    private int _mountedLastBrokenTargetCount;
    private float _enteringDotProduct;
    private Agent _horse;
    private WorldPosition _horseBeginningPosition;
    private TrainingFieldMissionController.HorseReturningSituation _horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.ReturnCompleted;
    private List<TrainingFieldMissionController.TutorialObjective> _mountedObjectives = new List<TrainingFieldMissionController.TutorialObjective>()
    {
      new TrainingFieldMissionController.TutorialObjective("mounted_mount_the_horse"),
      new TrainingFieldMissionController.TutorialObjective("mounted_hit_targets")
    };
    private Agent _mountedAI;
    private MatrixFrame _mountedAISpawnPosition;
    private MatrixFrame _mountedAIWaitingPosition;
    private int _mountedAICurrentCheckpointTarget = -1;
    private int _mountedAICurrentHitTarget;
    private bool _enteredRadiusOfTarget;
    private bool _allTargetsDestroyed;
    private List<DestructableComponent> _mountedAITargets = new List<DestructableComponent>();
    private bool _continueLoop = true;
    private List<Vec3> _mountedAICheckpointList = new List<Vec3>();
    private List<TrainingFieldMissionController.TutorialObjective> _detailedObjectives = new List<TrainingFieldMissionController.TutorialObjective>();
    private List<TrainingFieldMissionController.TutorialObjective> _tutorialObjectives = new List<TrainingFieldMissionController.TutorialObjective>();
    public Action UIStartTimer;
    public Func<float> UIEndTimer;
    public Action<string> TimerTick;
    public Action<TextObject> CurrentObjectiveTick;
    public Action<TrainingFieldMissionController.MouseObjectives> CurrentMouseObjectiveTick;
    public Action<List<TrainingFieldMissionController.TutorialObjective>> AllObjectivesTick;
    private static bool _updateObjectivesWillBeCalled;
    private Agent _brotherConversationAgent;

    public TextObject InitialCurrentObjective { get; private set; }

    public override void OnCreated()
    {
      base.OnCreated();
      this.Mission.DoesMissionRequireCivilianEquipment = false;
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.Mission.IsInventoryAccessible = false;
      this.Mission.IsQuestScreenAccessible = false;
      this.Mission.IsCharacterWindowAccessible = false;
      this.Mission.IsPartyWindowAccessible = false;
      this.Mission.IsKingdomWindowAccessible = false;
      this.Mission.IsClanWindowAccessible = false;
      this.Mission.IsEncyclopediaWindowAccessible = false;
      this.Mission.IsBannerWindowAccessible = false;
      this._missionConversationHandler = this.Mission.GetMissionBehavior<MissionConversationLogic>();
      this.Mission.GetMissionBehavior<MissionAgentHandler>().SpawnPlayer(this.Mission.DoesMissionRequireCivilianEquipment, true);
      this.LoadTutorialScores();
      this.SpawnConversationBrother();
      this.CollectWeaponsAndObjectives();
      this.InitializeMeleeTraining();
      this.InitializeMountedTraining();
      this.InitializeAdvancedMeleeTraining();
      this.InitializeBowTraining();
      this.MakeAllAgentsImmortal();
      this.SetHorseMountable(false);
      this.InitialCurrentObjective = new TextObject("{=BTY2aZCt}Enter a training area.");
      this._playerCampaignHealth = Agent.Main.Health;
    }

    private void LoadTutorialScores()
    {
      this._tutorialScores = StoryModeManager.Current.MainStoryLine.GetTutorialScores();
    }

    protected override void OnEndMission()
    {
      base.OnEndMission();
      Agent.Main.Health = this._playerCampaignHealth;
      StoryModeManager.Current.MainStoryLine.SetTutorialScores(this._tutorialScores);
    }

    public override void OnRenderingStarted()
    {
      base.OnRenderingStarted();
      if (this._brotherConversationAgent == null)
        return;
      this.Mission.GetMissionBehavior<MissionConversationLogic>().StartConversation(this._brotherConversationAgent, false, true);
    }

    public override void OnMissionTick(float dt)
    {
      this.TrainingAreaUpdate();
      this.UpdateHorseBehavior();
      this.UpdateBowTraining();
      this.UpdateMountedAIBehavior();
      if (TrainingFieldMissionController._updateObjectivesWillBeCalled)
        this.UpdateObjectives();
      for (int index = this._delayedActions.Count - 1; index >= 0; --index)
      {
        if (this._delayedActions[index].Update())
          this._delayedActions.RemoveAt(index);
      }
    }

    private void UpdateObjectives()
    {
      if (this._trainingSubTypeIndex == -1 || this._showTutorialObjectivesAnyway)
      {
        Action<List<TrainingFieldMissionController.TutorialObjective>> allObjectivesTick = this.AllObjectivesTick;
        if (allObjectivesTick != null)
          allObjectivesTick(this._tutorialObjectives);
      }
      else
      {
        Action<List<TrainingFieldMissionController.TutorialObjective>> allObjectivesTick = this.AllObjectivesTick;
        if (allObjectivesTick != null)
          allObjectivesTick(this._detailedObjectives);
      }
      TrainingFieldMissionController._updateObjectivesWillBeCalled = false;
    }

    private int GetSelectedTrainingSubTypeIndex()
    {
      TrainingIcon activeTrainingIcon = this._activeTutorialArea.GetActiveTrainingIcon();
      if (activeTrainingIcon == null)
        return -1;
      this.EnableAllTrainingIcons();
      activeTrainingIcon.DisableIcon();
      this._activeTrainingSubTypeTag = activeTrainingIcon.GetTrainingSubTypeTag();
      return this._activeTutorialArea.GetIndexFromTag(activeTrainingIcon.GetTrainingSubTypeTag());
    }

    private string GetHighlightedWeaponRack()
    {
      foreach (TrainingIcon trainingIcon in (List<TrainingIcon>) this._activeTutorialArea.TrainingIconsReadOnly)
      {
        if (trainingIcon.Focused)
          return trainingIcon.GetTrainingSubTypeTag();
      }
      return "";
    }

    private void EnableAllTrainingIcons()
    {
      foreach (TrainingIcon trainingIcon in (List<TrainingIcon>) this._activeTutorialArea.TrainingIconsReadOnly)
        trainingIcon.EnableIcon();
    }

    private void TrainingAreaUpdate()
    {
      this.CheckMainAgentEquipment();
      string[] volumeBoxTags;
      if (this._activeTutorialArea != null)
      {
        if (this._activeTutorialArea.IsPositionInsideTutorialArea(Agent.Main.Position, out volumeBoxTags))
        {
          this.InTrainingArea();
          if (this._trainingSubTypeIndex != -1)
            this._activeTutorialArea.CheckWeapons(this._trainingSubTypeIndex);
        }
        else
        {
          this.OnTrainingAreaExit(true);
          this._activeTutorialArea = (TutorialArea) null;
        }
      }
      else
      {
        foreach (TutorialArea trainingArea in this._trainingAreas)
        {
          if (trainingArea.IsPositionInsideTutorialArea(Agent.Main.Position, out volumeBoxTags))
          {
            this._activeTutorialArea = trainingArea;
            this.OnTrainingAreaEnter();
            break;
          }
        }
      }
      this.UpdateConversationPermission();
    }

    private void UpdateConversationPermission()
    {
      if (this._brotherConversationAgent == null || Mission.Current.MainAgent == null || (double) (this._brotherConversationAgent.Position - Mission.Current.MainAgent.Position).LengthSquared > 4.0)
        this._missionConversationHandler.DisableStartConversation(true);
      else
        this._missionConversationHandler.DisableStartConversation(false);
    }

    private void ResetTrainingArea()
    {
      this.OnTrainingAreaExit(true);
      this.OnTrainingAreaEnter();
    }

    private void OnTrainingAreaExit(bool enableTrainingIcons)
    {
      this._activeTutorialArea.MarkTrainingIcons(false);
      TrainingFieldMissionController.TutorialObjective tutorialObjective = this._tutorialObjectives.Find((Predicate<TrainingFieldMissionController.TutorialObjective>) (x => x.Id == this._activeTutorialArea.TypeOfTraining.ToString()));
      tutorialObjective.SetActive(false);
      tutorialObjective.SetAllSubTasksInactive();
      this.DropAllWeaponsOfMainAgent();
      this.SpecialTrainingAreaExit(this._activeTutorialArea.TypeOfTraining);
      this._activeTutorialArea.DeactivateAllWeapons(true);
      this._trainingProgress = 0;
      this._trainingSubTypeIndex = -1;
      this.EnableAllTrainingIcons();
      if (this.CheckAllObjectivesFinished())
      {
        this.CurrentObjectiveTick(new TextObject("{=77TavbOY}You have completed all tutorials. You can always come back to improve your score."));
        if (!this._courseFinished)
        {
          this._courseFinished = true;
          Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/finish_course"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
        }
      }
      else
        this.CurrentObjectiveTick(new TextObject("{=BTY2aZCt}Enter a training area."));
      this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.None);
      double num = (double) this.UIEndTimer();
    }

    private bool CheckAllObjectivesFinished()
    {
      foreach (TrainingFieldMissionController.TutorialObjective tutorialObjective in this._tutorialObjectives)
      {
        if (!tutorialObjective.IsFinished)
          return false;
      }
      return true;
    }

    private void OnTrainingAreaEnter()
    {
      this._tutorialObjectives.Find((Predicate<TrainingFieldMissionController.TutorialObjective>) (x => x.Id == this._activeTutorialArea.TypeOfTraining.ToString())).SetActive(true);
      this.DropAllWeaponsOfMainAgent();
      this._trainingProgress = 0;
      this._trainingSubTypeIndex = -1;
      this.SpecialTrainingAreaEnter(this._activeTutorialArea.TypeOfTraining);
      this.CurrentObjectiveTick(new TextObject("{=WIUbM9Hc}Choose a weapon to begin training."));
      this._activeTutorialArea.MarkTrainingIcons(true);
    }

    private void InTrainingArea()
    {
      int trainingSubTypeIndex = this.GetSelectedTrainingSubTypeIndex();
      if (trainingSubTypeIndex >= 0)
      {
        this.OnStartTraining(trainingSubTypeIndex);
      }
      else
      {
        string highlightedWeaponRack = this.GetHighlightedWeaponRack();
        if (highlightedWeaponRack != "")
        {
          foreach (TrainingFieldMissionController.TutorialObjective tutorialObjective in this._tutorialObjectives)
          {
            if (tutorialObjective.Id == this._activeTutorialArea.TypeOfTraining.ToString())
            {
              using (List<TrainingFieldMissionController.TutorialObjective>.Enumerator enumerator = tutorialObjective.SubTasks.GetEnumerator())
              {
                while (enumerator.MoveNext())
                {
                  TrainingFieldMissionController.TutorialObjective current = enumerator.Current;
                  if (current.Id == highlightedWeaponRack)
                    current.SetActive(true);
                  else
                    current.SetActive(false);
                }
                break;
              }
            }
          }
        }
        else
          this._tutorialObjectives.Find((Predicate<TrainingFieldMissionController.TutorialObjective>) (x => x.Id == this._activeTutorialArea.TypeOfTraining.ToString())).SetAllSubTasksInactive();
      }
      this.SpecialInTrainingAreaUpdate(this._activeTutorialArea.TypeOfTraining);
    }

    private void OnStartTraining(int index)
    {
      this._showTutorialObjectivesAnyway = false;
      this._activeTutorialArea.MarkTrainingIcons(false);
      this.SpecialTrainingStart(this._activeTutorialArea.TypeOfTraining);
      this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.None);
      double num = (double) this.UIEndTimer();
      this.DropAllWeaponsOfMainAgent();
      this._activeTutorialArea.DeactivateAllWeapons(true);
      this._activeTutorialArea.ActivateTaggedWeapons(index);
      this._activeTutorialArea.EquipWeaponsToPlayer(index);
      this._trainingProgress = 1;
      this._trainingSubTypeIndex = index;
      this.UpdateObjectives();
    }

    private void EndTraining()
    {
      this._trainingProgress = 0;
      this._trainingSubTypeIndex = -1;
      this._activeTutorialArea = (TutorialArea) null;
    }

    private void SuccessfullyFinishTraining(float score)
    {
      this._tutorialObjectives.Find((Predicate<TrainingFieldMissionController.TutorialObjective>) (x => x.Id == this._activeTutorialArea.TypeOfTraining.ToString())).FinishSubTask(this._activeTrainingSubTypeTag, score);
      if (this._tutorialScores.ContainsKey(this._activeTrainingSubTypeTag))
        this._tutorialScores[this._activeTrainingSubTypeTag] = score;
      else
        this._tutorialScores.Add(this._activeTrainingSubTypeTag, score);
      this._activeTutorialArea.MarkTrainingIcons(true);
      Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/finish_task"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
      this._showTutorialObjectivesAnyway = true;
      this.UpdateObjectives();
    }

    private void RefillAmmoOfAgent(Agent agent)
    {
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
      {
        MissionWeapon missionWeapon = agent.Equipment[index];
        if (missionWeapon.IsAnyConsumable())
        {
          missionWeapon = agent.Equipment[index];
          if (missionWeapon.Amount <= (short) 1)
          {
            Agent agent1 = agent;
            int equipmentSlot = (int) index;
            missionWeapon = agent.Equipment[index];
            int modifiedMaxAmount = (int) missionWeapon.ModifiedMaxAmount;
            agent1.SetWeaponAmountInSlot((EquipmentIndex) equipmentSlot, (short) modifiedMaxAmount, true);
          }
        }
      }
    }

    private void SpecialTrainingAreaExit(TutorialArea.TrainingType trainingType)
    {
      if (this._trainingSubTypeIndex != -1)
        this._activeTutorialArea.ResetBreakables(this._trainingSubTypeIndex);
      switch (trainingType)
      {
        case TutorialArea.TrainingType.Bow:
          this.OnBowTrainingExit();
          break;
        case TutorialArea.TrainingType.Mounted:
          this.OnMountedTrainingExit();
          break;
        case TutorialArea.TrainingType.AdvancedMelee:
          this.OnAdvancedTrainingExit();
          break;
      }
    }

    private void SpecialTrainingAreaEnter(TutorialArea.TrainingType trainingType)
    {
      switch (trainingType)
      {
        case TutorialArea.TrainingType.Bow:
          this.OnBowTrainingEnter();
          break;
        case TutorialArea.TrainingType.AdvancedMelee:
          this.OnAdvancedTrainingAreaEnter();
          break;
      }
    }

    private void SpecialTrainingStart(TutorialArea.TrainingType trainingType)
    {
      if (this._trainingSubTypeIndex != -1)
        this._activeTutorialArea.ResetBreakables(this._trainingSubTypeIndex);
      switch (trainingType)
      {
        case TutorialArea.TrainingType.Bow:
          this.OnBowTrainingStart();
          break;
        case TutorialArea.TrainingType.Mounted:
          this.OnMountedTrainingStart();
          break;
        case TutorialArea.TrainingType.AdvancedMelee:
          this.OnAdvancedTrainingStart();
          break;
      }
    }

    private void SpecialInTrainingAreaUpdate(TutorialArea.TrainingType trainingType)
    {
      switch (trainingType)
      {
        case TutorialArea.TrainingType.Bow:
          this.BowInTrainingAreaUpdate();
          break;
        case TutorialArea.TrainingType.Melee:
          this.MeleeTrainingUpdate();
          break;
        case TutorialArea.TrainingType.Mounted:
          this.MountedTrainingUpdate();
          break;
        case TutorialArea.TrainingType.AdvancedMelee:
          this.AdvancedMeleeTrainingUpdate();
          break;
      }
    }

    private void DropAllWeaponsOfMainAgent()
    {
      Mission.Current.MainAgent.SetActionChannel(1, ActionIndexCache.act_none, true);
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex <= EquipmentIndex.Weapon3; ++equipmentIndex)
      {
        if (!Mission.Current.MainAgent.Equipment[equipmentIndex].IsEmpty)
          Mission.Current.MainAgent.DropItem(equipmentIndex);
      }
    }

    private void RemoveAllWeaponsFromMainAgent()
    {
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex <= EquipmentIndex.Weapon3; ++equipmentIndex)
      {
        if (!Mission.Current.MainAgent.Equipment[equipmentIndex].IsEmpty)
          Mission.Current.MainAgent.RemoveEquippedWeapon(equipmentIndex);
      }
    }

    private void CollectWeaponsAndObjectives()
    {
      List<GameEntity> entities = new List<GameEntity>();
      Mission.Current.Scene.GetEntities(ref entities);
      foreach (GameEntity gameEntity in entities)
      {
        if (gameEntity.HasTag("bow_training_shooting_position"))
          this._shootingPosition = gameEntity;
        if (gameEntity.GetFirstScriptOfType<TutorialArea>() != null)
        {
          this._trainingAreas.Add(gameEntity.GetFirstScriptOfType<TutorialArea>());
          this._tutorialObjectives.Add(new TrainingFieldMissionController.TutorialObjective(this._trainingAreas[this._trainingAreas.Count - 1].TypeOfTraining.ToString()));
          foreach (string subTrainingTag in this._trainingAreas[this._trainingAreas.Count - 1].GetSubTrainingTags())
          {
            this._tutorialObjectives[this._tutorialObjectives.Count - 1].AddSubTask(new TrainingFieldMissionController.TutorialObjective(subTrainingTag));
            if (this._tutorialScores.ContainsKey(subTrainingTag))
              this._tutorialObjectives[this._tutorialObjectives.Count - 1].SubTasks.Last<TrainingFieldMissionController.TutorialObjective>().RestoreScoreFromSave(this._tutorialScores[subTrainingTag]);
          }
        }
        if (gameEntity.HasTag("mounted_checkpoint") && gameEntity.GetFirstScriptOfType<VolumeBox>() != null)
        {
          bool flag = false;
          for (int index = 0; index < this._checkpoints.Count; ++index)
          {
            if (int.Parse(gameEntity.Tags[1]) < int.Parse(this._checkpoints[index].Item1.GameEntity.Tags[1]))
            {
              this._checkpoints.Insert(index, ValueTuple.Create<VolumeBox, bool>(gameEntity.GetFirstScriptOfType<VolumeBox>(), false));
              flag = true;
              break;
            }
          }
          if (!flag)
            this._checkpoints.Add(ValueTuple.Create<VolumeBox, bool>(gameEntity.GetFirstScriptOfType<VolumeBox>(), false));
        }
        if (gameEntity.HasScriptOfType<DestructableComponent>())
        {
          if (gameEntity.HasTag("_ranged_npc_target"))
            this._targetsForRangedNpc.Add(gameEntity.GetFirstScriptOfType<DestructableComponent>());
          else if (gameEntity.HasTag("_mounted_ai_target"))
          {
            int index = int.Parse(gameEntity.Tags[1]);
            while (index > this._mountedAITargets.Count - 1)
              this._mountedAITargets.Add((DestructableComponent) null);
            this._mountedAITargets[index] = gameEntity.GetFirstScriptOfType<DestructableComponent>();
          }
        }
      }
    }

    private void MakeAllAgentsImmortal()
    {
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        agent.SetMortalityState(Agent.MortalityState.Immortal);
        if (!agent.IsMount)
          agent.WieldInitialWeapons();
        this._agents.Add(agent);
      }
    }

    private bool HasAllWeaponsPicked()
    {
      return this._activeTutorialArea.HasMainAgentPickedAll(this._trainingSubTypeIndex);
    }

    private void CheckMainAgentEquipment()
    {
      if (this._trainingSubTypeIndex == -1)
        this.RemoveAllWeaponsFromMainAgent();
      else
        this._activeTutorialArea.CheckMainAgentEquipment(this._trainingSubTypeIndex);
    }

    private void StartTimer() => this._beginningTime = this.Mission.CurrentTime;

    private void EndTimer() => this._timeScore = this.Mission.CurrentTime - this._beginningTime;

    private void SpawnConversationBrother()
    {
      if (TutorialPhase.Instance.TalkedWithBrotherForTheFirstTime)
        return;
      WorldFrame worldFrame = new WorldFrame(Agent.Main.Frame.rotation, new WorldPosition(this.Mission.Scene, Agent.Main.Position));
      worldFrame.Origin.SetVec2(Agent.Main.GetWorldFrame().Origin.AsVec2 + Vec2.Forward * 3f);
      worldFrame.Rotation.RotateAboutUp(3.14159274f);
      MatrixFrame groundMatrixFrame = worldFrame.ToGroundMatrixFrame();
      CharacterObject characterObject = StoryModeHeroes.ElderBrother.CharacterObject;
      AgentBuildData agentBuildData = new AgentBuildData((BasicCharacterObject) characterObject).Team(this.Mission.SpectatorTeam).InitialPosition(in groundMatrixFrame.origin);
      Vec2 vec2 = groundMatrixFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      this._brotherConversationAgent = this.Mission.SpawnAgent(agentBuildData.InitialDirection(in local).CivilianEquipment(false).NoHorses(true).NoWeapons(true).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2).TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, characterObject)).MountKey(MountCreationKey.GetRandomMountKeyString(characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, characterObject.GetMountKeySeed())));
    }

    private void InitializeBowTraining()
    {
      this._shootingPosition.SetVisibilityExcludeParents(false);
      this._bowNpc = this.SpawnBowNPC();
      this._rangedNpcSpawnPosition = this._bowNpc.GetWorldPosition();
      this._bowNpc.SetAIBehaviorValues(HumanAIComponent.AISimpleBehaviorKind.Ranged, 0.0f, 6f, 0.0f, 66f, 0.0f);
      this._bowNpc.SetAIBehaviorValues(HumanAIComponent.AISimpleBehaviorKind.GoToPos, 0.0f, 6f, 0.0f, 66f, 0.0f);
      this._bowNpc.SetAIBehaviorValues(HumanAIComponent.AISimpleBehaviorKind.AttackEntityRanged, 66f, 6f, 666f, 120f, 6f);
      this.GiveMoveOrderToRangedAgent(this._shootingPosition.GlobalPosition.ToWorldPosition(), this._shootingPosition.GetGlobalFrame().rotation.f.NormalizedCopy());
    }

    private void GiveMoveOrderToRangedAgent(WorldPosition worldPosition, Vec3 rotation)
    {
      if (worldPosition.AsVec2.NearlyEquals(this._rangedTargetPosition.AsVec2, 1f / 1000f) && worldPosition.GetGroundVec3().NearlyEquals(this._rangedTargetPosition.GetGroundVec3(), 1f / 1000f) && rotation.NearlyEquals(this._rangedTargetRotation))
        return;
      this._rangedTargetPosition = worldPosition;
      this._rangedTargetRotation = rotation;
      this._bowNpc.SetWatchState(Agent.WatchState.Patrolling);
      this._targetPositionSet = false;
      this._delayedActions.Add(new TrainingFieldMissionController.DelayedAction((Action) (() =>
      {
        this._bowNpc.ClearTargetFrame();
        this._bowNpc.SetScriptedPositionAndDirection(ref worldPosition, this._rangedTargetRotation.AsVec2.RotationInRadians, true);
      }), 2f, "move order for ranged npc."));
    }

    private GameEntity GetValidTarget()
    {
      foreach (DestructableComponent destructableComponent in this._targetsForRangedNpc)
      {
        if (!destructableComponent.IsDestroyed)
        {
          this._lastTargetGiven = destructableComponent;
          return this._lastTargetGiven.GameEntity;
        }
      }
      foreach (DestructableComponent destructableComponent in this._targetsForRangedNpc)
        destructableComponent.Reset();
      this._lastTargetGiven = this._targetsForRangedNpc[0];
      return this._lastTargetGiven.GameEntity;
    }

    private void UpdateBowTraining()
    {
      if ((this._bowNpc.MovementFlags & Agent.MovementControlFlag.MoveMask) != (Agent.MovementControlFlag) 0)
        return;
      Vec3 vec3 = this._rangedTargetPosition.GetGroundVec3() - this._bowNpc.Position;
      if ((double) vec3.LengthSquared >= 0.16000001132488251)
        return;
      if (!this._targetPositionSet)
      {
        this._bowNpc.DisableScriptedMovement();
        Agent bowNpc = this._bowNpc;
        vec3 = this._bowNpc.Position;
        Vec2 asVec2 = vec3.AsVec2;
        Vec3 rangedTargetRotation = this._rangedTargetRotation;
        bowNpc.SetTargetPositionAndDirection(asVec2, rangedTargetRotation);
        this._targetPositionSet = true;
        vec3 = this._bowNpc.Position - this._shootingPosition.GlobalPosition;
        double lengthSquared1 = (double) vec3.LengthSquared;
        vec3 = this._bowNpc.Position - this._rangedNpcSpawnPosition.GetGroundVec3();
        double lengthSquared2 = (double) vec3.LengthSquared;
        if (lengthSquared1 > lengthSquared2)
        {
          this._atShootingPosition = false;
        }
        else
        {
          this._bowNpc.SetWatchState(Agent.WatchState.Alarmed);
          this._bowNpc.SetScriptedTargetEntityAndPosition(this.GetValidTarget(), this._bowNpc.GetWorldPosition());
          this._atShootingPosition = true;
        }
      }
      else
      {
        if (!this._atShootingPosition || !this._lastTargetGiven.IsDestroyed)
          return;
        this._bowNpc.SetScriptedTargetEntityAndPosition(this.GetValidTarget(), this._bowNpc.GetWorldPosition());
      }
    }

    private void OnBowTrainingEnter()
    {
    }

    private Agent SpawnBowNPC()
    {
      MatrixFrame matrixFrame = MatrixFrame.Identity;
      this._rangedNpcSpawnPoint = this.Mission.Scene.FindEntityWithTag("spawner_ranged_npc_tag");
      if ((NativeObject) this._rangedNpcSpawnPoint != (NativeObject) null)
      {
        matrixFrame = this._rangedNpcSpawnPoint.GetGlobalFrame();
        matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      }
      else
        Debug.FailedAssert("There are no spawn points for bow npc.", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Missions\\TrainingFieldMissionController.cs", nameof (SpawnBowNPC), 1129);
      Location locationWithId = LocationComplex.Current.GetLocationWithId("training_field");
      CharacterObject characterObject = Game.Current.ObjectManager.GetObject<CharacterObject>("tutorial_npc_ranged");
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(characterObject.Race);
      LocationCharacter locationCharacter = new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, characterObject)).Monster(baseMonsterFromRace).NoHorses(true), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), (string) null, true, LocationCharacter.CharacterRelations.Friendly, (string) null, true, isVisualTracked: true);
      locationWithId.AddCharacter(locationCharacter);
      Agent agent = this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterObject).Team(this.Mission.PlayerTeam).InitialPosition(in matrixFrame.origin).InitialDirection(matrixFrame.rotation.f.AsVec2).CivilianEquipment(false).NoHorses(true).NoWeapons(false).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2).TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, characterObject)).MountKey(MountCreationKey.GetRandomMountKeyString(characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, characterObject.GetMountKeySeed())).Controller(Agent.ControllerType.AI));
      agent.SetTeam(Mission.Current.PlayerAllyTeam, false);
      return agent;
    }

    private void BowInTrainingAreaUpdate()
    {
      if (this._trainingProgress == 1)
      {
        if (!this.HasAllWeaponsPicked())
          return;
        this._rangedLastBrokenTargetCount = 0;
        this.LoadCrossbowForStarting();
        ++this._trainingProgress;
        this.CurrentObjectiveTick(new TextObject("{=kwW6v202}Go to shooting position"));
        this._shootingPosition.SetVisibilityExcludeParents(true);
        this._detailedObjectives = this._rangedObjectives.ConvertAll<TrainingFieldMissionController.TutorialObjective>((Converter<TrainingFieldMissionController.TutorialObjective, TrainingFieldMissionController.TutorialObjective>) (x => new TrainingFieldMissionController.TutorialObjective(x.Id)));
        this._detailedObjectives[1].SetTextVariableOfName("HIT", this._activeTutorialArea.GetBrokenBreakableCount(this._trainingSubTypeIndex));
        this._detailedObjectives[1].SetTextVariableOfName("ALL", this._activeTutorialArea.GetBreakablesCount(this._trainingSubTypeIndex));
        this._detailedObjectives[0].SetActive(true);
        Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/archery/pick_" + (object) this._trainingSubTypeIndex), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
      }
      else if (this._trainingProgress == 2)
      {
        if ((double) (this._shootingPosition.GetGlobalFrame().origin - Agent.Main.Position).LengthSquared >= 4.0)
          return;
        ++this._trainingProgress;
        this._shootingPosition.SetVisibilityExcludeParents(false);
        this._activeTutorialArea.MarkAllTargets(this._trainingSubTypeIndex, true);
        this._remainingTargetText.SetTextVariable("REMAINING_TARGET", this._activeTutorialArea.GetUnbrokenBreakableCount(this._trainingSubTypeIndex));
        this.CurrentObjectiveTick(this._remainingTargetText);
        this._detailedObjectives[0].FinishTask();
        this._detailedObjectives[1].SetActive(true);
      }
      else
      {
        if (this._trainingProgress != 4)
          return;
        int brokenBreakableCount = this._activeTutorialArea.GetBrokenBreakableCount(this._trainingSubTypeIndex);
        this._remainingTargetText.SetTextVariable("REMAINING_TARGET", this._activeTutorialArea.GetUnbrokenBreakableCount(this._trainingSubTypeIndex));
        this.CurrentObjectiveTick(this._remainingTargetText);
        this._detailedObjectives[1].SetTextVariableOfName("HIT", brokenBreakableCount);
        if (brokenBreakableCount != this._rangedLastBrokenTargetCount)
        {
          this._rangedLastBrokenTargetCount = brokenBreakableCount;
          this._activeTutorialArea.ResetMarkingTargetTimers(this._trainingSubTypeIndex);
        }
        if (MBRandom.NondeterministicRandomInt % 4 == 3)
          Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/archery/hit_target"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
        if (!this._activeTutorialArea.AllBreakablesAreBroken(this._trainingSubTypeIndex))
          return;
        this._detailedObjectives[1].FinishTask();
        ++this._trainingProgress;
        this.BowTrainingEndedSuccessfully();
      }
    }

    public void LoadCrossbowForStarting()
    {
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
      {
        MissionWeapon missionWeapon = Agent.Main.Equipment[equipmentIndex];
        if (!missionWeapon.IsEmpty && missionWeapon.Item.PrimaryWeapon.WeaponClass == WeaponClass.Crossbow && missionWeapon.Ammo == (short) 0)
        {
          EquipmentIndex eIndex;
          Agent.Main.Equipment.GetAmmoCountAndIndexOfType(missionWeapon.Item.Type, out int _, out eIndex);
          Agent.Main.SetReloadAmmoInSlot(equipmentIndex, eIndex, (short) 1);
          Agent.Main.SetWeaponReloadPhaseAsClient(equipmentIndex, missionWeapon.ReloadPhaseCount);
        }
      }
    }

    public override void OnAgentShootMissile(
      Agent shooterAgent,
      EquipmentIndex weaponIndex,
      Vec3 position,
      Vec3 velocity,
      Mat3 orientation,
      bool hasRigidBody,
      int forcedMissileIndex = -1)
    {
      base.OnAgentShootMissile(shooterAgent, weaponIndex, position, velocity, orientation, hasRigidBody, forcedMissileIndex);
      TutorialArea activeTutorialArea = this._activeTutorialArea;
      if ((activeTutorialArea != null ? (activeTutorialArea.TypeOfTraining == TutorialArea.TrainingType.Bow ? 1 : 0) : 0) != 0 && this._trainingProgress == 3)
      {
        ++this._trainingProgress;
        this._activeTutorialArea.MakeDestructible(this._trainingSubTypeIndex);
        this.UIStartTimer();
        this.CurrentObjectiveTick(new TextObject("{=9kGnzjrU}Timer Started."));
        this.StartTimer();
        Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/archery/start_training"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
      }
      this.RefillAmmoOfAgent(shooterAgent);
    }

    private void BowTrainingEndedSuccessfully()
    {
      this.EndTimer();
      this._activeTutorialArea.HideBoundaries();
      this.CurrentObjectiveTick(this._trainingFinishedText);
      TextObject message = new TextObject("{=xVFupnFu}You've successfully hit all of the targets in ({TIME_SCORE}) seconds.");
      float score = this.UIEndTimer();
      message.SetTextVariable("TIME_SCORE", new TextObject(score.ToString("0.0")));
      MBInformationManager.AddQuickInformation(message);
      this.SuccessfullyFinishTraining(score);
      this._shootingPosition.SetVisibilityExcludeParents(false);
      Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/archery/finish"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
    }

    private void OnBowTrainingStart()
    {
      this._shootingPosition.SetVisibilityExcludeParents(false);
      this.GiveMoveOrderToRangedAgent(this._rangedNpcSpawnPoint.GlobalPosition.ToWorldPosition(), this._rangedNpcSpawnPoint.GetGlobalFrame().rotation.f.NormalizedCopy());
      foreach (DestructableComponent destructableComponent in this._targetsForRangedNpc)
      {
        destructableComponent.Reset();
        destructableComponent.GameEntity.SetVisibilityExcludeParents(false);
      }
    }

    private void OnBowTrainingExit()
    {
      this._shootingPosition.SetVisibilityExcludeParents(false);
      this.GiveMoveOrderToRangedAgent(this._shootingPosition.GlobalPosition.ToWorldPosition(), this._shootingPosition.GetGlobalFrame().rotation.f.NormalizedCopy());
      foreach (DestructableComponent destructableComponent in this._targetsForRangedNpc)
      {
        destructableComponent.Reset();
        destructableComponent.GameEntity.SetVisibilityExcludeParents(true);
      }
    }

    private void InitializeAdvancedMeleeTraining()
    {
      this._advancedMeleeTrainerEasy = this.SpawnAdvancedMeleeTrainerEasy();
      this._advancedEasyMeleeTrainerDefaultPosition = this._advancedMeleeTrainerEasy.GetWorldPosition();
      this._advancedMeleeTrainerEasy.SetAgentFlags(this._advancedMeleeTrainerEasy.GetAgentFlags() & ~AgentFlag.CanGetAlarmed);
      this._advancedMeleeTrainerEasyInitialPosition = this.Mission.Scene.FindEntityWithTag("spawner_adv_melee_npc_easy").GetGlobalFrame();
      this._advancedMeleeTrainerEasySecondPosition = this.Mission.Scene.FindEntityWithTag("adv_melee_npc_easy_second_pos").GetGlobalFrame();
      this._advancedMeleeTrainerNormal = this.SpawnAdvancedMeleeTrainerNormal();
      this._advancedNormalMeleeTrainerDefaultPosition = this._advancedMeleeTrainerNormal.GetWorldPosition();
      this._advancedMeleeTrainerNormal.SetAgentFlags(this._advancedMeleeTrainerNormal.GetAgentFlags() & ~AgentFlag.CanGetAlarmed);
      this._advancedMeleeTrainerNormalInitialPosition = this.Mission.Scene.FindEntityWithTag("spawner_adv_melee_npc_normal").GetGlobalFrame();
      this._advancedMeleeTrainerNormalSecondPosition = this.Mission.Scene.FindEntityWithTag("adv_melee_npc_normal_second_pos").GetGlobalFrame();
      this.BeginNPCFight();
    }

    private Agent SpawnAdvancedMeleeTrainerEasy()
    {
      this._advancedMeleeTrainerEasyInitialPosition = MatrixFrame.Identity;
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("spawner_adv_melee_npc_easy");
      if ((NativeObject) entityWithTag != (NativeObject) null)
      {
        this._advancedMeleeTrainerEasyInitialPosition = entityWithTag.GetGlobalFrame();
        this._advancedMeleeTrainerEasyInitialPosition.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      }
      else
        Debug.FailedAssert("There are no spawn points for advanced melee trainer.", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Missions\\TrainingFieldMissionController.cs", nameof (SpawnAdvancedMeleeTrainerEasy), 1349);
      CharacterObject characterObject = Game.Current.ObjectManager.GetObject<CharacterObject>("tutorial_npc_advanced_melee_easy");
      Agent agent = this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterObject).Team(this.Mission.PlayerTeam).InitialPosition(in this._advancedMeleeTrainerEasyInitialPosition.origin).InitialDirection(this._advancedMeleeTrainerEasyInitialPosition.rotation.f.AsVec2).CivilianEquipment(false).NoHorses(true).NoWeapons(false).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2).TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, characterObject)).MountKey(MountCreationKey.GetRandomMountKeyString(characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, characterObject.GetMountKeySeed())).Controller(Agent.ControllerType.AI));
      agent.SetTeam(Mission.Current.DefenderTeam, false);
      return agent;
    }

    private Agent SpawnAdvancedMeleeTrainerNormal()
    {
      this._advancedMeleeTrainerNormalInitialPosition = MatrixFrame.Identity;
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("spawner_adv_melee_npc_normal");
      if ((NativeObject) entityWithTag != (NativeObject) null)
      {
        this._advancedMeleeTrainerNormalInitialPosition = entityWithTag.GetGlobalFrame();
        this._advancedMeleeTrainerNormalInitialPosition.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      }
      else
        Debug.FailedAssert("There are no spawn points for advanced melee trainer.", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Missions\\TrainingFieldMissionController.cs", nameof (SpawnAdvancedMeleeTrainerNormal), 1381);
      CharacterObject characterObject = Game.Current.ObjectManager.GetObject<CharacterObject>("tutorial_npc_advanced_melee_normal");
      Agent agent = this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterObject).Team(this.Mission.PlayerTeam).InitialPosition(in this._advancedMeleeTrainerNormalInitialPosition.origin).InitialDirection(this._advancedMeleeTrainerNormalInitialPosition.rotation.f.AsVec2).CivilianEquipment(false).NoHorses(true).NoWeapons(false).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2).TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, characterObject)).MountKey(MountCreationKey.GetRandomMountKeyString(characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, characterObject.GetMountKeySeed())).Controller(Agent.ControllerType.AI));
      agent.SetTeam(Mission.Current.DefenderTeam, false);
      return agent;
    }

    private void AdvancedMeleeTrainingUpdate()
    {
      if (this._trainingSubTypeIndex == -1)
        return;
      if (this._trainingProgress == 1)
      {
        if (!this.HasAllWeaponsPicked())
          return;
        this._playerLeftBattleArea = false;
        this._detailedObjectives = this._advMeleeObjectives.ConvertAll<TrainingFieldMissionController.TutorialObjective>((Converter<TrainingFieldMissionController.TutorialObjective, TrainingFieldMissionController.TutorialObjective>) (x => new TrainingFieldMissionController.TutorialObjective(x.Id)));
        this._detailedObjectives[0].SetActive(true);
        ++this._trainingProgress;
        this.CurrentObjectiveTick(new TextObject("{=HhuBPfJn}Go to the trainer."));
        WorldPosition worldPosition = this._advancedMeleeTrainerNormalSecondPosition.origin.ToWorldPosition();
        this._advancedMeleeTrainerNormal.SetScriptedPositionAndDirection(ref worldPosition, this._advancedMeleeTrainerNormalSecondPosition.rotation.f.AsVec2.RotationInRadians, true);
        this._advancedMeleeTrainerNormal.SetTeam(Mission.Current.PlayerAllyTeam, false);
        this._advancedMeleeTrainerEasy.SetTeam(Mission.Current.PlayerAllyTeam, false);
      }
      else if (this._trainingProgress == 2)
      {
        if ((double) (this._advancedMeleeTrainerEasy.Position - Agent.Main.Position).LengthSquared >= 6.0)
          return;
        this._detailedObjectives[0].FinishTask();
        this._detailedObjectives[1].SetActive(true);
        this._timer = this.Mission.CurrentTime;
        ++this._trainingProgress;
        this._fightStartsIn.SetTextVariable("REMAINING_TIME", 3);
        this.CurrentObjectiveTick(this._fightStartsIn);
      }
      else if (this._trainingProgress == 3)
      {
        if ((double) this.Mission.CurrentTime - (double) this._timer > 3.0)
        {
          this._playerHealth = Agent.Main.HealthLimit;
          this._advancedMeleeTrainerEasyHealth = this._advancedMeleeTrainerEasy.HealthLimit;
          this._advancedMeleeTrainerNormal.SetTeam(Mission.Current.PlayerEnemyTeam, false);
          this._advancedMeleeTrainerEasy.SetTeam(Mission.Current.PlayerEnemyTeam, false);
          this._advancedMeleeTrainerEasy.SetWatchState(Agent.WatchState.Alarmed);
          this._advancedMeleeTrainerEasy.DisableScriptedMovement();
          ++this._trainingProgress;
          this.CurrentObjectiveTick(new TextObject("{=4hdp6SK0}Defeat the trainer!"));
        }
        else if ((double) this.Mission.CurrentTime - (double) this._timer > 2.0)
        {
          this._fightStartsIn.SetTextVariable("REMAINING_TIME", 1);
          this.CurrentObjectiveTick(this._fightStartsIn);
        }
        else
        {
          if ((double) this.Mission.CurrentTime - (double) this._timer <= 1.0)
            return;
          this._fightStartsIn.SetTextVariable("REMAINING_TIME", 2);
          this.CurrentObjectiveTick(this._fightStartsIn);
        }
      }
      else if (this._trainingProgress == 4)
      {
        if ((double) this._playerHealth <= 1.0)
        {
          this._trainingProgress = 9;
          this.CurrentObjectiveTick(new TextObject("{=SvYCz6z6}You've lost. You can restart the training by interacting weapon rack."));
          this._timer = this.Mission.CurrentTime;
          Agent.Main.SetActionChannel(0, this.FallBackRiseAnimation);
          Agent.Main.Health = 1.1f;
          Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/fighting/player_lose"), this._advancedMeleeTrainerNormal.GetEyeGlobalPosition(), true, false, -1, -1);
          this.OnLost();
        }
        else if ((double) this._advancedMeleeTrainerEasyHealth <= 1.0)
        {
          this._detailedObjectives[1].FinishTask();
          this._detailedObjectives[2].SetActive(true);
          this.CurrentObjectiveTick(new TextObject("{=ikhWkw7T}You've successfully defeated rookie trainer. Go to veteran trainer."));
          this._timer = this.Mission.CurrentTime;
          ++this._trainingProgress;
          this.OnEasyTrainerBeaten();
          this._advancedMeleeTrainerNormal.SetTeam(Mission.Current.PlayerAllyTeam, false);
          this._advancedMeleeTrainerEasy.SetTeam(Mission.Current.PlayerAllyTeam, false);
          this._advancedMeleeTrainerEasy.SetActionChannel(0, this.FallBackRiseAnimation);
        }
        else
        {
          Agent.Main.Health = this._playerHealth;
          this.CheckAndHandlePlayerInsideBattleArea();
        }
      }
      else if (this._trainingProgress == 5)
      {
        Vec3 vec3 = this._advancedMeleeTrainerNormal.Position - Agent.Main.Position;
        if ((double) vec3.LengthSquared >= 6.0)
          return;
        vec3 = this._advancedMeleeTrainerNormal.Position - this._advancedMeleeTrainerNormalInitialPosition.origin;
        if ((double) vec3.LengthSquared >= 6.0)
          return;
        this._timer = this.Mission.CurrentTime;
        ++this._trainingProgress;
        this._fightStartsIn.SetTextVariable("REMAINING_TIME", 3);
        this.CurrentObjectiveTick(this._fightStartsIn);
      }
      else if (this._trainingProgress == 6)
      {
        if ((double) this.Mission.CurrentTime - (double) this._timer > 3.0)
        {
          this._playerHealth = Agent.Main.HealthLimit;
          this._advancedMeleeTrainerNormalHealth = this._advancedMeleeTrainerNormal.HealthLimit;
          this._advancedMeleeTrainerNormal.SetTeam(Mission.Current.PlayerEnemyTeam, false);
          this._advancedMeleeTrainerEasy.SetTeam(Mission.Current.PlayerEnemyTeam, false);
          this._advancedMeleeTrainerNormal.SetWatchState(Agent.WatchState.Alarmed);
          this._advancedMeleeTrainerNormal.DisableScriptedMovement();
          ++this._trainingProgress;
          this.CurrentObjectiveTick(new TextObject("{=4hdp6SK0}Defeat the trainer!"));
        }
        else if ((double) this.Mission.CurrentTime - (double) this._timer > 2.0)
        {
          this._fightStartsIn.SetTextVariable("REMAINING_TIME", 1);
          this.CurrentObjectiveTick(this._fightStartsIn);
        }
        else
        {
          if ((double) this.Mission.CurrentTime - (double) this._timer <= 1.0)
            return;
          this._fightStartsIn.SetTextVariable("REMAINING_TIME", 2);
          this.CurrentObjectiveTick(this._fightStartsIn);
        }
      }
      else
      {
        if (this._trainingProgress != 7)
          return;
        if ((double) this._playerHealth <= 1.0)
        {
          this.ResetTrainingArea();
          this.CurrentObjectiveTick(new TextObject("{=SvYCz6z6}You've lost. You can restart the training by interacting weapon rack."));
          this._timer = this.Mission.CurrentTime;
          ++this._trainingProgress;
          Agent.Main.SetActionChannel(0, this.FallBackRiseAnimation);
          Agent.Main.Health = 1.1f;
          this.OnLost();
        }
        else if ((double) this._advancedMeleeTrainerNormalHealth <= 1.0)
        {
          this._detailedObjectives[2].FinishTask();
          this.SuccessfullyFinishTraining(0.0f);
          this.CurrentObjectiveTick(new TextObject("{=1RaUauBS}You've successfully finished the training."));
          this._timer = this.Mission.CurrentTime;
          ++this._trainingProgress;
          this.MakeTrainersPatrolling();
          this._advancedMeleeTrainerNormal.SetActionChannel(0, this.FallBackRiseAnimation);
          Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/fighting/player_win"), this._advancedMeleeTrainerNormal.GetEyeGlobalPosition(), true, false, -1, -1);
        }
        else
        {
          Agent.Main.Health = this._playerHealth;
          this.CheckAndHandlePlayerInsideBattleArea();
        }
      }
    }

    private void CheckAndHandlePlayerInsideBattleArea()
    {
      string[] volumeBoxTags;
      if (!this._activeTutorialArea.IsPositionInsideTutorialArea(Agent.Main.Position, out volumeBoxTags))
        return;
      if (string.IsNullOrEmpty(((IEnumerable<string>) volumeBoxTags).FirstOrDefault<string>((Func<string, bool>) (x => x == "battle_area"))))
      {
        if (this._playerLeftBattleArea)
          return;
        this._playerLeftBattleArea = true;
        this.OnPlayerLeftBattleArea();
      }
      else
      {
        if (!this._playerLeftBattleArea)
          return;
        this._playerLeftBattleArea = false;
        this.OnPlayerReEnteredBattleArea();
      }
    }

    private void OnPlayerLeftBattleArea()
    {
      if (this._trainingProgress == 4)
      {
        this._advancedMeleeTrainerEasy.SetWatchState(Agent.WatchState.Patrolling);
        WorldPosition worldPosition = this._advancedMeleeTrainerEasyInitialPosition.origin.ToWorldPosition();
        this._advancedMeleeTrainerEasy.SetScriptedPositionAndDirection(ref worldPosition, this._advancedMeleeTrainerEasySecondPosition.rotation.f.AsVec2.RotationInRadians, true);
      }
      else
      {
        if (this._trainingProgress != 7)
          return;
        this._advancedMeleeTrainerNormal.SetWatchState(Agent.WatchState.Patrolling);
        WorldPosition worldPosition = this._advancedMeleeTrainerNormalInitialPosition.origin.ToWorldPosition();
        this._advancedMeleeTrainerNormal.SetScriptedPositionAndDirection(ref worldPosition, this._advancedMeleeTrainerNormalInitialPosition.rotation.f.AsVec2.RotationInRadians, true);
      }
    }

    private void OnPlayerReEnteredBattleArea()
    {
      if (this._trainingProgress == 4)
      {
        this._advancedMeleeTrainerEasy.DisableScriptedMovement();
        this._advancedMeleeTrainerEasy.SetWatchState(Agent.WatchState.Alarmed);
      }
      else
      {
        if (this._trainingProgress != 7)
          return;
        this._advancedMeleeTrainerNormal.DisableScriptedMovement();
        this._advancedMeleeTrainerNormal.SetWatchState(Agent.WatchState.Alarmed);
      }
    }

    private void OnEasyTrainerBeaten()
    {
      this._advancedMeleeTrainerEasy.SetWatchState(Agent.WatchState.Patrolling);
      WorldPosition worldPosition1 = this._advancedMeleeTrainerEasySecondPosition.origin.ToWorldPosition();
      this._advancedMeleeTrainerEasy.SetScriptedPositionAndDirection(ref worldPosition1, this._advancedMeleeTrainerEasySecondPosition.rotation.f.AsVec2.RotationInRadians, true);
      this._advancedMeleeTrainerNormal.SetWatchState(Agent.WatchState.Patrolling);
      WorldPosition worldPosition2 = this._advancedMeleeTrainerNormalInitialPosition.origin.ToWorldPosition();
      this._advancedMeleeTrainerNormal.SetScriptedPositionAndDirection(ref worldPosition2, this._advancedMeleeTrainerNormalInitialPosition.rotation.f.AsVec2.RotationInRadians, true);
      Agent.Main.Health = Agent.Main.HealthLimit;
    }

    private void MakeTrainersPatrolling()
    {
      WorldPosition worldPosition1 = this._advancedMeleeTrainerEasyInitialPosition.origin.ToWorldPosition();
      this._advancedMeleeTrainerEasy.SetWatchState(Agent.WatchState.Patrolling);
      this._advancedMeleeTrainerEasy.SetTeam(Mission.Current.PlayerAllyTeam, false);
      this._advancedMeleeTrainerEasy.SetScriptedPositionAndDirection(ref worldPosition1, this._advancedMeleeTrainerEasyInitialPosition.rotation.f.AsVec2.RotationInRadians, true);
      this.SetAgentDefensiveness(this._advancedMeleeTrainerNormal, 0.0f);
      WorldPosition worldPosition2 = this._advancedMeleeTrainerNormalInitialPosition.origin.ToWorldPosition();
      this._advancedMeleeTrainerNormal.SetWatchState(Agent.WatchState.Patrolling);
      this._advancedMeleeTrainerNormal.SetTeam(Mission.Current.PlayerAllyTeam, false);
      this._advancedMeleeTrainerNormal.SetScriptedPositionAndDirection(ref worldPosition2, this._advancedMeleeTrainerNormalInitialPosition.rotation.f.AsVec2.RotationInRadians, true);
      this.SetAgentDefensiveness(this._advancedMeleeTrainerNormal, 0.0f);
      this._delayedActions.Add(new TrainingFieldMissionController.DelayedAction((Action) (() => Agent.Main.Health = Agent.Main.HealthLimit), 1.5f, "Agent health recover after advanced melee fight"));
    }

    private void OnLost() => this.MakeTrainersPatrolling();

    private void BeginNPCFight()
    {
      this._advancedMeleeTrainerEasy.DisableScriptedMovement();
      this._advancedMeleeTrainerEasy.SetWatchState(Agent.WatchState.Alarmed);
      this._advancedMeleeTrainerEasy.SetTeam(Mission.Current.DefenderTeam, false);
      this.SetAgentDefensiveness(this._advancedMeleeTrainerEasy, 4f);
      this._advancedMeleeTrainerNormal.DisableScriptedMovement();
      this._advancedMeleeTrainerNormal.SetWatchState(Agent.WatchState.Alarmed);
      this._advancedMeleeTrainerNormal.SetTeam(Mission.Current.AttackerTeam, false);
      this.SetAgentDefensiveness(this._advancedMeleeTrainerNormal, 4f);
    }

    private void OnAdvancedTrainingStart()
    {
      this.MakeTrainersPatrolling();
      Agent.Main.Health = Agent.Main.HealthLimit;
    }

    private void OnAdvancedTrainingExit()
    {
      Agent.Main.Health = Agent.Main.HealthLimit;
      this.BeginNPCFight();
    }

    private void OnAdvancedTrainingAreaEnter()
    {
      this.MakeTrainersPatrolling();
      Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/fighting/greet"), this._advancedMeleeTrainerNormal.GetEyeGlobalPosition(), true, false, -1, -1);
    }

    private void SetAgentDefensiveness(Agent agent, float formationOrderDefensivenessFactor)
    {
      agent.Defensiveness = formationOrderDefensivenessFactor;
    }

    private void InitializeMeleeTraining()
    {
      MatrixFrame matrixFrame = MatrixFrame.Identity;
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("spawner_melee_npc");
      if ((NativeObject) entityWithTag != (NativeObject) null)
      {
        matrixFrame = entityWithTag.GetGlobalFrame();
        matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      }
      else
        Debug.FailedAssert("There are no spawn points for basic melee trainer.", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Missions\\TrainingFieldMissionController.cs", nameof (InitializeMeleeTraining), 1739);
      CharacterObject characterObject = Game.Current.ObjectManager.GetObject<CharacterObject>("tutorial_npc_basic_melee");
      Agent agent = this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterObject).Team(this.Mission.PlayerTeam).InitialPosition(in matrixFrame.origin).InitialDirection(matrixFrame.rotation.f.AsVec2).CivilianEquipment(false).NoHorses(true).NoWeapons(false).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2).TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, characterObject)).MountKey(MountCreationKey.GetRandomMountKeyString(characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, characterObject.GetMountKeySeed())).Controller(Agent.ControllerType.None));
      agent.SetTeam(Mission.Current.DefenderTeam, false);
      this._meleeTrainer = agent;
      this._meleeTrainerDefaultPosition = this._meleeTrainer.GetWorldPosition();
    }

    private void MeleeTrainingUpdate()
    {
      float lengthSquared = (this._meleeTrainer.Position - this._meleeTrainerDefaultPosition.GetGroundVec3()).LengthSquared;
      if ((double) lengthSquared > 1.0)
      {
        if (this._meleeTrainer.MovementFlags == Agent.MovementControlFlag.DefendDown)
          this._meleeTrainer.MovementFlags &= ~Agent.MovementControlFlag.DefendDown;
        else if ((this._meleeTrainer.MovementFlags & Agent.MovementControlFlag.AttackMask) > (Agent.MovementControlFlag) 0)
        {
          this._meleeTrainer.MovementFlags &= ~Agent.MovementControlFlag.AttackMask;
          this._meleeTrainer.MovementFlags |= Agent.MovementControlFlag.DefendDown;
        }
        else
          this._meleeTrainer.SetTargetPosition(this._meleeTrainerDefaultPosition.AsVec2);
        this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.None);
      }
      else
      {
        if ((double) lengthSquared >= 0.10000000149011612)
          return;
        this.SwordTraining();
      }
    }

    private void SwordTraining()
    {
      if (this._trainingProgress == 1)
      {
        if (this.HasAllWeaponsPicked())
        {
          this._detailedObjectives = this._meleeObjectives.ConvertAll<TrainingFieldMissionController.TutorialObjective>((Converter<TrainingFieldMissionController.TutorialObjective, TrainingFieldMissionController.TutorialObjective>) (x => new TrainingFieldMissionController.TutorialObjective(x.Id)));
          this._detailedObjectives[1].SetTextVariableOfName("HIT", 0);
          this._detailedObjectives[1].SetTextVariableOfName("ALL", 4);
          this._detailedObjectives[2].SetTextVariableOfName("HIT", 0);
          this._detailedObjectives[2].SetTextVariableOfName("ALL", 4);
          this._detailedObjectives[0].SetActive(true);
          ++this._trainingProgress;
          this.CurrentObjectiveTick(new TextObject("{=Zb1uFhsY}Go to trainer."));
        }
        this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.None);
      }
      else
      {
        Vec3 vec3 = this._meleeTrainer.Position - Agent.Main.Position;
        if ((double) vec3.LengthSquared < 4.0)
        {
          Agent meleeTrainer = this._meleeTrainer;
          vec3 = this._meleeTrainer.Position;
          Vec2 asVec2 = vec3.AsVec2;
          Vec3 targetDirection = Agent.Main.GetEyeGlobalPosition() - this._meleeTrainer.GetWorldFrame().Rotation.s * 0.1f - this._meleeTrainer.GetEyeGlobalPosition();
          meleeTrainer.SetTargetPositionAndDirection(asVec2, targetDirection);
          if (this._trainingProgress == 2)
          {
            this._detailedObjectives[0].FinishTask();
            this._detailedObjectives[1].SetActive(true);
            Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/block_left"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
            this.CurrentObjectiveTick(new TextObject("{=Db98U6fF}Defend from left."));
            ++this._trainingProgress;
          }
          else if (this._trainingProgress == 3)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 2.0 && Agent.Main.GetCurrentActionDirection(1) == Agent.UsageDirection.DefendLeft && (double) Agent.Main.GetCurrentActionProgress(1) > 0.10000000149011612 && Agent.Main.GetCurrentActionType(1) != Agent.ActionCodeType.Guard)
            {
              this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
              this._timer = this.Mission.CurrentTime;
            }
            else
              this._meleeTrainer.MovementFlags = Agent.MovementControlFlag.AttackRight;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.DefendLeft);
          }
          else if (this._trainingProgress == 4)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 1.5 && Agent.Main.GetCurrentActionDirection(1) == Agent.UsageDirection.DefendRight && (double) Agent.Main.GetCurrentActionProgress(1) > 0.10000000149011612 && Agent.Main.GetCurrentActionType(1) != Agent.ActionCodeType.Guard)
            {
              this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
              this._timer = this.Mission.CurrentTime;
            }
            else
              this._meleeTrainer.MovementFlags = Agent.MovementControlFlag.AttackLeft;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.DefendRight);
          }
          else if (this._trainingProgress == 5)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 1.5 && Agent.Main.GetCurrentActionDirection(1) == Agent.UsageDirection.AttackEnd && (double) Agent.Main.GetCurrentActionProgress(1) > 0.10000000149011612 && Agent.Main.GetCurrentActionType(1) != Agent.ActionCodeType.Guard)
            {
              this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
              this._timer = this.Mission.CurrentTime;
            }
            else
              this._meleeTrainer.MovementFlags = Agent.MovementControlFlag.AttackUp;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.DefendUp);
          }
          else if (this._trainingProgress == 6)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 1.5 && Agent.Main.GetCurrentActionDirection(1) == Agent.UsageDirection.DefendDown && (double) Agent.Main.GetCurrentActionProgress(1) > 0.10000000149011612 && Agent.Main.GetCurrentActionType(1) != Agent.ActionCodeType.Guard)
            {
              this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
              this._timer = this.Mission.CurrentTime;
            }
            else
              this._meleeTrainer.MovementFlags = Agent.MovementControlFlag.AttackDown;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.DefendDown);
          }
          else if (this._trainingProgress == 7)
          {
            this._meleeTrainer.MovementFlags |= Agent.MovementControlFlag.DefendRight;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.AttackLeft);
          }
          else if (this._trainingProgress == 8)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 1.0)
              this._meleeTrainer.MovementFlags |= Agent.MovementControlFlag.DefendLeft;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.AttackRight);
          }
          else if (this._trainingProgress == 9)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 1.0)
              this._meleeTrainer.MovementFlags |= Agent.MovementControlFlag.DefendUp;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.AttackUp);
          }
          else if (this._trainingProgress == 10)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 1.0)
              this._meleeTrainer.MovementFlags |= Agent.MovementControlFlag.DefendDown;
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.AttackDown);
          }
          else
          {
            if (this._trainingProgress != 11)
              return;
            this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
            ++this._trainingProgress;
            Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/praise"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
            this.SuccessfullyFinishTraining(0.0f);
          }
        }
        else
        {
          this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.None);
          if (this._meleeTrainer.MovementFlags == Agent.MovementControlFlag.DefendDown)
          {
            this._meleeTrainer.MovementFlags &= ~Agent.MovementControlFlag.DefendDown;
          }
          else
          {
            if ((this._meleeTrainer.MovementFlags & Agent.MovementControlFlag.AttackMask) <= (Agent.MovementControlFlag) 0)
              return;
            this._meleeTrainer.MovementFlags &= ~Agent.MovementControlFlag.AttackMask;
            this._meleeTrainer.MovementFlags |= Agent.MovementControlFlag.DefendDown;
          }
        }
      }
    }

    private void ShieldTraining()
    {
      if (this._trainingProgress == 1)
      {
        if (!this.HasAllWeaponsPicked())
          return;
        ++this._trainingProgress;
        MBInformationManager.AddQuickInformation(new TextObject("{=Zb1uFhsY}Go to trainer."));
      }
      else
      {
        Vec3 vec3 = this._meleeTrainer.Position - Agent.Main.Position;
        if ((double) vec3.LengthSquared < 3.0)
        {
          if (this._trainingProgress == 2)
          {
            this._meleeTrainer.SetLookAgent(Agent.Main);
            vec3 = this._meleeTrainer.Position - Agent.Main.Position;
            if ((double) vec3.LengthSquared >= 1.5)
              return;
            MBInformationManager.AddQuickInformation(new TextObject("{=WysXGbM6}Right click to defend"));
            ++this._trainingProgress;
          }
          else if (this._trainingProgress == 3)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 2.0 && (Agent.Main.MovementFlags & Agent.MovementControlFlag.DefendMask) > (Agent.MovementControlFlag) 0)
            {
              this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
              this._timer = this.Mission.CurrentTime;
            }
            else
              this._meleeTrainer.MovementFlags = Agent.MovementControlFlag.AttackLeft;
          }
          else if (this._trainingProgress == 4)
          {
            if ((double) this.Mission.CurrentTime - (double) this._timer > 2.0 && (Agent.Main.MovementFlags & Agent.MovementControlFlag.DefendMask) > (Agent.MovementControlFlag) 0)
            {
              this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
              this._timer = this.Mission.CurrentTime;
            }
            else
              this._meleeTrainer.MovementFlags = Agent.MovementControlFlag.AttackRight;
          }
          else
          {
            if (this._trainingProgress != 5)
              return;
            this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
          }
        }
        else if (this._meleeTrainer.MovementFlags == Agent.MovementControlFlag.DefendDown)
        {
          this._meleeTrainer.MovementFlags &= ~Agent.MovementControlFlag.DefendDown;
        }
        else
        {
          if ((this._meleeTrainer.MovementFlags & Agent.MovementControlFlag.AttackMask) <= (Agent.MovementControlFlag) 0)
            return;
          this._meleeTrainer.MovementFlags &= ~Agent.MovementControlFlag.AttackMask;
          this._meleeTrainer.MovementFlags |= Agent.MovementControlFlag.DefendDown;
        }
      }
    }

    public override void OnScoreHit(
      Agent affectedAgent,
      Agent affectorAgent,
      WeaponComponentData attackerWeapon,
      bool isBlocked,
      bool isSiegeEngineHit,
      in Blow blow,
      in AttackCollisionData collisionData,
      float damagedHp,
      float hitDistance,
      float shotDifficulty)
    {
      base.OnScoreHit(affectedAgent, affectorAgent, attackerWeapon, isBlocked, isSiegeEngineHit, in blow, in collisionData, damagedHp, hitDistance, shotDifficulty);
      if (isBlocked)
      {
        for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index <= EquipmentIndex.Weapon3; ++index)
        {
          MissionWeapon missionWeapon = affectedAgent.Equipment[index];
          if (!missionWeapon.IsEmpty)
          {
            missionWeapon = affectedAgent.Equipment[index];
            if (missionWeapon.IsShield())
            {
              Agent agent = affectedAgent;
              int slotIndex = (int) index;
              missionWeapon = affectedAgent.Equipment[index];
              int modifiedMaxHitPoints = (int) missionWeapon.ModifiedMaxHitPoints;
              agent.ChangeWeaponHitPoints((EquipmentIndex) slotIndex, (short) modifiedMaxHitPoints);
            }
          }
        }
      }
      TutorialArea activeTutorialArea = this._activeTutorialArea;
      if ((activeTutorialArea != null ? (activeTutorialArea.TypeOfTraining == TutorialArea.TrainingType.Melee ? 1 : 0) : 0) != 0)
      {
        if (affectedAgent.Controller == Agent.ControllerType.Player)
        {
          if (((this._trainingProgress < 3 ? 0 : (this._trainingProgress <= 6 ? 1 : 0)) & (isBlocked ? 1 : 0)) != 0)
          {
            this._timer = this.Mission.CurrentTime;
            if (this._trainingProgress == 3 && affectedAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.DefendLeft)
            {
              this._detailedObjectives[1].SetTextVariableOfName("HIT", 1);
              Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/block_right"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
              this.CurrentObjectiveTick(new TextObject("{=7wmkPNbI}Defend from right."));
              ++this._trainingProgress;
            }
            else if (this._trainingProgress == 4 && affectedAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.DefendRight)
            {
              this._detailedObjectives[1].SetTextVariableOfName("HIT", 2);
              Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/block_up"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
              this.CurrentObjectiveTick(new TextObject("{=CEqKkY3m}Defend from up."));
              ++this._trainingProgress;
            }
            else if (this._trainingProgress == 5 && affectedAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.AttackEnd)
            {
              this._detailedObjectives[1].SetTextVariableOfName("HIT", 3);
              Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/block_down"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
              this.CurrentObjectiveTick(new TextObject("{=Qdz5Hely}Defend from down."));
              ++this._trainingProgress;
            }
            else if (this._trainingProgress == 6 && affectedAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.DefendDown)
            {
              this._detailedObjectives[1].SetTextVariableOfName("HIT", 4);
              this._detailedObjectives[1].FinishTask();
              this._detailedObjectives[2].SetActive(true);
              Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/attack_left"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
              this.CurrentObjectiveTick(new TextObject("{=8QX1QHAJ}Attack from left."));
              ++this._trainingProgress;
            }
          }
        }
        else if (affectedAgent == this._meleeTrainer && affectorAgent != null && affectorAgent.Controller == Agent.ControllerType.Player && ((this._trainingProgress < 7 ? 0 : (this._trainingProgress <= 10 ? 1 : 0)) & (isBlocked ? 1 : 0)) != 0)
        {
          this._meleeTrainer.MovementFlags = (Agent.MovementControlFlag) 0;
          this._timer = this.Mission.CurrentTime;
          if (this._trainingProgress == 7 && affectorAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.AttackLeft)
          {
            this._detailedObjectives[2].SetTextVariableOfName("HIT", 1);
            Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/attack_right"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
            this.CurrentObjectiveTick(new TextObject("{=fC60rYwy}Attack from right."));
            ++this._trainingProgress;
          }
          else if (this._trainingProgress == 8 && affectorAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.AttackRight)
          {
            this._detailedObjectives[2].SetTextVariableOfName("HIT", 2);
            Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/attack_up"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
            this.CurrentObjectiveTick(new TextObject("{=j2dW9fZt}Attack from up."));
            ++this._trainingProgress;
          }
          else if (this._trainingProgress == 9 && affectorAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.AttackUp)
          {
            this._detailedObjectives[2].SetTextVariableOfName("HIT", 3);
            Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/attack_down"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
            this.CurrentObjectiveTick(new TextObject("{=X9Vmjipn}Attack from down."));
            ++this._trainingProgress;
          }
          else if (this._trainingProgress == 10 && affectorAgent.GetCurrentActionDirection(1) == Agent.UsageDirection.AttackDown)
          {
            this._detailedObjectives[2].SetTextVariableOfName("HIT", 4);
            this._detailedObjectives[2].FinishTask();
            this.CurrentObjectiveTick(this._trainingFinishedText);
            this.TickMouseObjective(TrainingFieldMissionController.MouseObjectives.None);
            if (Agent.Main.Equipment.HasShield())
              MBInformationManager.AddQuickInformation(new TextObject("{=PiOiQ3u5}You've successfully finished the sword and shield tutorial."));
            else
              MBInformationManager.AddQuickInformation(new TextObject("{=GZaYmg95}You've successfully finished the sword tutorial."));
            ++this._trainingProgress;
          }
          else
          {
            MBInformationManager.AddQuickInformation(new TextObject("{=fBJRdxh2}Try again."));
            Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/parrying/remark"), this._meleeTrainer.GetEyeGlobalPosition(), true, false, -1, -1);
          }
        }
      }
      if (isBlocked)
        return;
      if (affectedAgent.Controller == Agent.ControllerType.Player)
      {
        this._playerHealth -= (float) blow.InflictedDamage;
        Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/fighting/warning"), this._advancedMeleeTrainerNormal.GetEyeGlobalPosition(), true, false, -1, -1);
      }
      else if (affectedAgent == this._advancedMeleeTrainerEasy)
      {
        this._advancedMeleeTrainerEasyHealth -= (float) blow.InflictedDamage;
      }
      else
      {
        if (affectedAgent != this._advancedMeleeTrainerNormal)
          return;
        this._advancedMeleeTrainerNormalHealth -= (float) blow.InflictedDamage;
      }
    }

    private void TickMouseObjective(
      TrainingFieldMissionController.MouseObjectives objective)
    {
      Action<TrainingFieldMissionController.MouseObjectives> mouseObjectiveTick = this.CurrentMouseObjectiveTick;
      if (mouseObjectiveTick == null)
        return;
      mouseObjectiveTick(this.GetAdjustedMouseObjective(objective));
    }

    private bool IsAttackDirection(
      TrainingFieldMissionController.MouseObjectives objective)
    {
      switch (objective)
      {
        case TrainingFieldMissionController.MouseObjectives.AttackLeft:
        case TrainingFieldMissionController.MouseObjectives.AttackRight:
        case TrainingFieldMissionController.MouseObjectives.AttackUp:
        case TrainingFieldMissionController.MouseObjectives.AttackDown:
          return true;
        case TrainingFieldMissionController.MouseObjectives.DefendLeft:
        case TrainingFieldMissionController.MouseObjectives.DefendRight:
        case TrainingFieldMissionController.MouseObjectives.DefendUp:
        case TrainingFieldMissionController.MouseObjectives.DefendDown:
          return false;
        default:
          return false;
      }
    }

    private TrainingFieldMissionController.MouseObjectives GetAdjustedMouseObjective(
      TrainingFieldMissionController.MouseObjectives baseObjective)
    {
      if (this.IsAttackDirection(baseObjective))
      {
        switch (BannerlordConfig.AttackDirectionControl)
        {
          case 0:
            return this.GetInverseDirection(baseObjective);
          case 1:
            return baseObjective;
          default:
            return TrainingFieldMissionController.MouseObjectives.None;
        }
      }
      else
        return BannerlordConfig.DefendDirectionControl == 0 ? baseObjective : TrainingFieldMissionController.MouseObjectives.None;
    }

    private TrainingFieldMissionController.MouseObjectives GetInverseDirection(
      TrainingFieldMissionController.MouseObjectives objective)
    {
      switch (objective)
      {
        case TrainingFieldMissionController.MouseObjectives.None:
          return TrainingFieldMissionController.MouseObjectives.None;
        case TrainingFieldMissionController.MouseObjectives.AttackLeft:
          return TrainingFieldMissionController.MouseObjectives.AttackRight;
        case TrainingFieldMissionController.MouseObjectives.AttackRight:
          return TrainingFieldMissionController.MouseObjectives.AttackLeft;
        case TrainingFieldMissionController.MouseObjectives.AttackUp:
          return TrainingFieldMissionController.MouseObjectives.AttackDown;
        case TrainingFieldMissionController.MouseObjectives.AttackDown:
          return TrainingFieldMissionController.MouseObjectives.AttackUp;
        case TrainingFieldMissionController.MouseObjectives.DefendLeft:
          return TrainingFieldMissionController.MouseObjectives.DefendRight;
        case TrainingFieldMissionController.MouseObjectives.DefendRight:
          return TrainingFieldMissionController.MouseObjectives.DefendLeft;
        case TrainingFieldMissionController.MouseObjectives.DefendUp:
          return TrainingFieldMissionController.MouseObjectives.DefendDown;
        case TrainingFieldMissionController.MouseObjectives.DefendDown:
          return TrainingFieldMissionController.MouseObjectives.DefendUp;
        default:
          Debug.FailedAssert(string.Format("Inverse direction is not defined for: {0}", (object) objective), "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Missions\\TrainingFieldMissionController.cs", nameof (GetInverseDirection), 2267);
          return TrainingFieldMissionController.MouseObjectives.None;
      }
    }

    private void InitializeMountedTraining()
    {
      this._horse = this.SpawnHorse();
      this._horse.Controller = Agent.ControllerType.None;
      this._horseBeginningPosition = this._horse.GetWorldPosition();
      this._finishGateClosed = this.Mission.Scene.FindEntityWithTag("finish_gate_closed");
      this._finishGateOpen = this.Mission.Scene.FindEntityWithTag("finish_gate_open");
      this._mountedAIWaitingPosition = this.Mission.Scene.FindEntityWithTag("_mounted_ai_waiting_position").GetGlobalFrame();
      this._mountedAI = this.SpawnMountedAI();
      this._mountedAI.SetWatchState(Agent.WatchState.Alarmed);
      for (int index = 0; index < this._checkpoints.Count; ++index)
      {
        this._mountedAICheckpointList.Add(this._checkpoints[index].Item1.GameEntity.GlobalPosition);
        if (index < this._checkpoints.Count - 1)
          this._mountedAICheckpointList.Add((this._checkpoints[index].Item1.GameEntity.GlobalPosition + this._checkpoints[index + 1].Item1.GameEntity.GlobalPosition) / 2f);
      }
    }

    private Agent SpawnMountedAI()
    {
      this._mountedAISpawnPosition = MatrixFrame.Identity;
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("_mounted_ai_spawn_position");
      if ((NativeObject) entityWithTag != (NativeObject) null)
      {
        this._mountedAISpawnPosition = entityWithTag.GetGlobalFrame();
        this._mountedAISpawnPosition.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      }
      else
        Debug.FailedAssert("There are no spawn points for mounted ai.", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Missions\\TrainingFieldMissionController.cs", nameof (SpawnMountedAI), 2311);
      CharacterObject characterObject = Game.Current.ObjectManager.GetObject<CharacterObject>("tutorial_npc_mounted_ai");
      Agent agent = this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterObject).Team(this.Mission.PlayerTeam).InitialPosition(in this._mountedAISpawnPosition.origin).InitialDirection(this._mountedAISpawnPosition.rotation.f.AsVec2).CivilianEquipment(false).NoHorses(false).NoWeapons(false).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2).TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, characterObject)).MountKey(MountCreationKey.GetRandomMountKeyString(characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, characterObject.GetMountKeySeed())).Controller(Agent.ControllerType.AI));
      agent.SetTeam(Mission.Current.PlayerTeam, false);
      return agent;
    }

    private void UpdateMountedAIBehavior()
    {
      if (this._mountedAICurrentCheckpointTarget == -1)
      {
        if (!this._continueLoop || (double) (this._mountedAISpawnPosition.origin - this._mountedAI.Position).LengthSquared >= 6.25)
          return;
        ++this._mountedAICurrentCheckpointTarget;
        MatrixFrame globalFrame = this._checkpoints[this._mountedAICurrentCheckpointTarget].Item1.GameEntity.GetGlobalFrame();
        WorldPosition worldPosition = globalFrame.origin.ToWorldPosition();
        this._mountedAI.SetScriptedPositionAndDirection(ref worldPosition, globalFrame.rotation.f.AsVec2.RotationInRadians, true);
        this.SetFinishGateStatus(false);
        this._mountedAI.SetWatchState(Agent.WatchState.Alarmed);
      }
      else
      {
        bool flag = false;
        Vec2 vec2 = this._checkpoints[this._mountedAICurrentCheckpointTarget].Item1.GameEntity.GetGlobalFrame().origin.ToWorldPosition().AsVec2 - this._mountedAI.Position.ToWorldPosition().AsVec2;
        if ((double) vec2.LengthSquared < 25.0)
        {
          flag = true;
          ++this._mountedAICurrentCheckpointTarget;
          if (this._mountedAICurrentCheckpointTarget > this._checkpoints.Count - 1)
          {
            this._mountedAICurrentCheckpointTarget = -1;
            if (this._continueLoop)
            {
              this.GoToStartingPosition();
            }
            else
            {
              WorldPosition worldPosition = this._mountedAIWaitingPosition.origin.ToWorldPosition();
              Agent mountedAi = this._mountedAI;
              ref WorldPosition local = ref worldPosition;
              vec2 = this._mountedAISpawnPosition.rotation.f.AsVec2;
              double rotationInRadians = (double) vec2.RotationInRadians;
              mountedAi.SetScriptedPositionAndDirection(ref local, (float) rotationInRadians, true);
            }
          }
          else if (this._mountedAICurrentCheckpointTarget == this._checkpoints.Count - 1)
          {
            this.SetFinishGateStatus(true);
            this._mountedAI.SetWatchState(Agent.WatchState.Patrolling);
          }
        }
        else
        {
          vec2 = this._mountedAITargets[this._mountedAICurrentHitTarget].GameEntity.GetGlobalFrame().origin.ToWorldPosition().AsVec2 - this._mountedAI.Position.ToWorldPosition().AsVec2;
          if ((double) vec2.LengthSquared < 169.0)
          {
            this._enteredRadiusOfTarget = true;
          }
          else
          {
            if (this._allTargetsDestroyed || !this._mountedAITargets[this._mountedAICurrentHitTarget].IsDestroyed)
            {
              if (this._enteredRadiusOfTarget)
              {
                vec2 = this._mountedAITargets[this._mountedAICurrentHitTarget].GameEntity.GetGlobalFrame().origin.ToWorldPosition().AsVec2 - this._mountedAI.Position.ToWorldPosition().AsVec2;
                if ((double) vec2.LengthSquared <= 169.0)
                  goto label_17;
              }
              else
                goto label_17;
            }
            this._enteredRadiusOfTarget = false;
            flag = true;
            ++this._mountedAICurrentHitTarget;
            if (this._mountedAICurrentHitTarget > this._mountedAITargets.Count - 1)
            {
              this._mountedAICurrentHitTarget = 0;
              this._allTargetsDestroyed = true;
            }
          }
        }
label_17:
        if (!flag || this._mountedAICurrentCheckpointTarget == -1)
          return;
        MatrixFrame globalFrame = this._checkpoints[this._mountedAICurrentCheckpointTarget].Item1.GameEntity.GetGlobalFrame();
        WorldPosition worldPosition1 = globalFrame.origin.ToWorldPosition();
        Agent mountedAi1 = this._mountedAI;
        ref WorldPosition local1 = ref worldPosition1;
        vec2 = globalFrame.rotation.f.AsVec2;
        double rotationInRadians1 = (double) vec2.RotationInRadians;
        mountedAi1.SetScriptedPositionAndDirection(ref local1, (float) rotationInRadians1, true);
        if (this._allTargetsDestroyed)
          return;
        this._mountedAI.SetScriptedTargetEntityAndPosition(this._mountedAITargets[this._mountedAICurrentHitTarget].GameEntity, new WorldPosition());
      }
    }

    private void GoToStartingPosition()
    {
      WorldPosition worldPosition = this._mountedAISpawnPosition.origin.ToWorldPosition();
      this._mountedAI.SetScriptedPositionAndDirection(ref worldPosition, this._mountedAISpawnPosition.rotation.f.AsVec2.RotationInRadians, true);
      this.RestoreAndShowAllMountedAITargets();
    }

    private void RestoreAndShowAllMountedAITargets()
    {
      this._allTargetsDestroyed = false;
      foreach (DestructableComponent mountedAiTarget in this._mountedAITargets)
      {
        mountedAiTarget.Reset();
        mountedAiTarget.GameEntity.SetVisibilityExcludeParents(true);
      }
    }

    private void HideAllMountedAITargets()
    {
      this._allTargetsDestroyed = true;
      foreach (DestructableComponent mountedAiTarget in this._mountedAITargets)
      {
        mountedAiTarget.Reset();
        mountedAiTarget.GameEntity.SetVisibilityExcludeParents(false);
      }
    }

    private void UpdateHorseBehavior()
    {
      if (this._horse != null && this._horse.RiderAgent == null)
      {
        if (this._horse.IsAIControlled && this._horse.CommonAIComponent.IsPanicked)
          this._horse.CommonAIComponent.StopRetreating();
        if (this._horseBehaviorMode != TrainingFieldMissionController.HorseReturningSituation.BeginReturn && !this._trainingAreas.Find((Predicate<TutorialArea>) (x => x.TypeOfTraining == TutorialArea.TrainingType.Mounted)).IsPositionInsideTutorialArea(this._horse.Position, out string[] _))
        {
          this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.BeginReturn;
          TutorialArea activeTutorialArea = this._activeTutorialArea;
          if ((activeTutorialArea != null ? (activeTutorialArea.TypeOfTraining == TutorialArea.TrainingType.Mounted ? 1 : 0) : 0) != 0 && this._trainingProgress > 1)
            this.ResetTrainingArea();
        }
        else
        {
          TutorialArea activeTutorialArea1 = this._activeTutorialArea;
          if ((activeTutorialArea1 != null ? (activeTutorialArea1.TypeOfTraining != TutorialArea.TrainingType.Mounted ? 1 : 0) : 1) != 0 && (this._horseBehaviorMode == TrainingFieldMissionController.HorseReturningSituation.NotInPosition || this._horseBehaviorMode == TrainingFieldMissionController.HorseReturningSituation.Following))
          {
            this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.BeginReturn;
          }
          else
          {
            TutorialArea activeTutorialArea2 = this._activeTutorialArea;
            if ((activeTutorialArea2 != null ? (activeTutorialArea2.TypeOfTraining == TutorialArea.TrainingType.Mounted ? 1 : 0) : 0) != 0 && !Agent.Main.HasMount && this._trainingProgress > 2)
              this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.Following;
          }
        }
        switch (this._horseBehaviorMode)
        {
          case TrainingFieldMissionController.HorseReturningSituation.BeginReturn:
            if ((double) (this._horse.Position - this._horseBeginningPosition.GetGroundVec3()).Length > 1.0)
            {
              this._horse.Controller = Agent.ControllerType.AI;
              this._horse.SetScriptedPosition(ref this._horseBeginningPosition, false);
              this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.Returning;
              break;
            }
            this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.ReturnCompleted;
            break;
          case TrainingFieldMissionController.HorseReturningSituation.Returning:
            if ((double) (this._horse.Position - this._horseBeginningPosition.GetGroundVec3()).Length < 0.5)
            {
              if ((double) this._horse.GetCurrentVelocity().LengthSquared <= 0.0)
              {
                this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.ReturnCompleted;
                break;
              }
              if (this._horse.Controller != Agent.ControllerType.AI)
                break;
              this._horse.Controller = Agent.ControllerType.None;
              this._horse.MovementFlags &= ~Agent.MovementControlFlag.MoveMask;
              break;
            }
            if (this._horse.Controller != Agent.ControllerType.None)
              break;
            this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.BeginReturn;
            break;
          case TrainingFieldMissionController.HorseReturningSituation.ReturnCompleted:
            if ((double) (this._horse.Position - this._horseBeginningPosition.GetGroundVec3()).Length <= 1.0)
              break;
            TutorialArea activeTutorialArea3 = this._activeTutorialArea;
            if ((activeTutorialArea3 != null ? (activeTutorialArea3.TypeOfTraining == TutorialArea.TrainingType.Mounted ? 1 : 0) : 0) == 0)
              break;
            this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.NotInPosition;
            this._horse.Controller = Agent.ControllerType.None;
            this._horse.MovementFlags &= ~Agent.MovementControlFlag.MoveMask;
            break;
          case TrainingFieldMissionController.HorseReturningSituation.Following:
            if ((double) (this._horse.Position - Agent.Main.Position).Length <= 3.0)
              break;
            this._horse.Controller = Agent.ControllerType.AI;
            WorldPosition position = new WorldPosition(Agent.Main.Mission.Scene, Agent.Main.Position + (this._horse.Position - Agent.Main.Position).NormalizedCopy() * 3f);
            this._horse.SetScriptedPosition(ref position, false);
            break;
        }
      }
      else
      {
        if (this._horse.RiderAgent == null || this._horseBehaviorMode == TrainingFieldMissionController.HorseReturningSituation.NotInPosition)
          return;
        this._horseBehaviorMode = TrainingFieldMissionController.HorseReturningSituation.NotInPosition;
        this._horse.Controller = Agent.ControllerType.None;
        this._horse.MovementFlags &= ~Agent.MovementControlFlag.MoveMask;
      }
    }

    private Agent SpawnHorse()
    {
      MatrixFrame globalFrame = this.Mission.Scene.FindEntityWithTag("spawner_horse").GetGlobalFrame();
      ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>("old_horse");
      ItemRosterElement itemRosterElement1 = new ItemRosterElement(itemObject, 1);
      ItemRosterElement itemRosterElement2 = new ItemRosterElement(MBObjectManager.Instance.GetObject<ItemObject>("light_harness"));
      Agent animalAgent = (Agent) null;
      if (itemObject.HasHorseComponent)
      {
        Mission current = Mission.Current;
        ItemRosterElement rosterElement = itemRosterElement1;
        ItemRosterElement harnessRosterElement = itemRosterElement2;
        ref Vec3 local1 = ref globalFrame.origin;
        Vec2 vec2 = globalFrame.rotation.f.AsVec2;
        vec2 = vec2.Normalized();
        ref Vec2 local2 = ref vec2;
        animalAgent = current.SpawnMonster(rosterElement, harnessRosterElement, in local1, in local2);
        AnimalSpawnSettings.CheckAndSetAnimalAgentFlags(this.Mission.Scene.FindEntityWithTag("spawner_melee_npc"), animalAgent);
      }
      return animalAgent;
    }

    private void MountedTrainingUpdate()
    {
      bool flag = false;
      if (this._trainingProgress > 2 && this._trainingProgress < 5)
        flag = this.CheckpointUpdate();
      if (Agent.Main.HasMount)
        this._activeTutorialArea.ActivateBoundaries();
      else
        this._activeTutorialArea.HideBoundaries();
      if (this._trainingProgress == 1)
      {
        if (!this.HasAllWeaponsPicked())
          return;
        this._activeTutorialArea.MakeDestructible(this._trainingSubTypeIndex);
        this._detailedObjectives = this._mountedObjectives.ConvertAll<TrainingFieldMissionController.TutorialObjective>((Converter<TrainingFieldMissionController.TutorialObjective, TrainingFieldMissionController.TutorialObjective>) (x => new TrainingFieldMissionController.TutorialObjective(x.Id)));
        this._detailedObjectives[1].SetTextVariableOfName("HIT", this._activeTutorialArea.GetBrokenBreakableCount(this._trainingSubTypeIndex));
        this._detailedObjectives[1].SetTextVariableOfName("ALL", this._activeTutorialArea.GetBreakablesCount(this._trainingSubTypeIndex));
        this._detailedObjectives[0].SetActive(true);
        Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/riding/pick_" + (object) this._trainingSubTypeIndex), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
        this.SetHorseMountable(true);
        this._mountedLastBrokenTargetCount = 0;
        ++this._trainingProgress;
        this.CurrentObjectiveTick(new TextObject("{=h31YaM4b}Mount the horse."));
      }
      else if (this._trainingProgress == 2)
      {
        if (!Agent.Main.HasMount)
          return;
        this._activeTutorialArea.ResetBreakables(this._trainingSubTypeIndex, false);
        this._detailedObjectives[0].FinishTask();
        this._detailedObjectives[1].SetActive(true);
        this._activeTutorialArea.ActivateBoundaries();
        ++this._trainingProgress;
        this.CurrentObjectiveTick(new TextObject("{=gJBNUAJd}Finish the track and hit as many targets as you can."));
      }
      else if (this._trainingProgress == 3)
      {
        if (this._checkpoints[0].Item2)
        {
          this._activeTutorialArea.ResetBreakables(this._trainingSubTypeIndex, false);
          this.ResetCheckpoints();
          this._checkpoints[0] = this._checkpoints[0] with
          {
            Item2 = true
          };
          this.StartTimer();
          this.UIStartTimer();
          MBInformationManager.AddQuickInformation(new TextObject("{=HvGW2DvS}Track started."));
          Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/riding/start_course"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
          ++this._trainingProgress;
        }
        else
        {
          if (Agent.Main.HasMount)
            return;
          this._trainingProgress = 1;
        }
      }
      else if (this._trainingProgress == 4)
      {
        int brokenBreakableCount = this._activeTutorialArea.GetBrokenBreakableCount(this._trainingSubTypeIndex);
        this._detailedObjectives[1].SetTextVariableOfName("HIT", brokenBreakableCount);
        if (brokenBreakableCount != this._mountedLastBrokenTargetCount)
        {
          Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/hit_target"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
          this._mountedLastBrokenTargetCount = brokenBreakableCount;
        }
        if (!flag)
          return;
        this._detailedObjectives[1].FinishTask();
        ++this._trainingProgress;
        this.MountedTrainingEndedSuccessfully();
      }
      else
      {
        if (this._trainingProgress != 5 || Agent.Main.HasMount)
          return;
        ++this._trainingProgress;
        this.SetHorseMountable(false);
        this.CurrentObjectiveTick(this._trainingFinishedText);
      }
    }

    private void ResetCheckpoints()
    {
      for (int index = 0; index < this._checkpoints.Count; ++index)
        this._checkpoints[index] = ValueTuple.Create<VolumeBox, bool>(this._checkpoints[index].Item1, false);
      this._currentCheckpointIndex = -1;
    }

    private bool CheckpointUpdate()
    {
      for (int index = 0; index < this._checkpoints.Count; ++index)
      {
        if (this._checkpoints[index].Item1.IsPointIn(Agent.Main.Position))
        {
          if (this._currentCheckpointIndex == -1)
          {
            this._enteringDotProduct = Vec3.DotProduct(Agent.Main.Velocity, this._checkpoints[index].Item1.GameEntity.GetFrame().rotation.f);
            this._currentCheckpointIndex = index;
          }
          return false;
        }
      }
      bool flag = false;
      if (this._currentCheckpointIndex != -1)
      {
        float num1 = Vec3.DotProduct(this._checkpoints[this._currentCheckpointIndex].Item1.GameEntity.GetFrame().rotation.f, Agent.Main.Velocity);
        if ((double) num1 > 0.0 == (double) this._enteringDotProduct > 0.0)
        {
          if ((this._currentCheckpointIndex == 0 || this._checkpoints[this._currentCheckpointIndex - 1].Item2) && (double) num1 > 0.0)
          {
            this._checkpoints[this._currentCheckpointIndex] = ValueTuple.Create<VolumeBox, bool>(this._checkpoints[this._currentCheckpointIndex].Item1, true);
            int num2 = 0;
            for (int index = 0; index < this._checkpoints.Count; ++index)
            {
              if (this._checkpoints[index].Item2)
                ++num2;
            }
            if (this._currentCheckpointIndex == this._checkpoints.Count - 1)
              flag = true;
            if (this._currentCheckpointIndex == this._checkpoints.Count - 2)
              this.SetFinishGateStatus(true);
          }
          else if ((double) num1 < 0.0)
            MBInformationManager.AddQuickInformation(new TextObject("{=kvTEeUWO}Wrong way!"));
        }
      }
      this._currentCheckpointIndex = -1;
      return flag;
    }

    private void SetHorseMountable(bool mountable)
    {
      if (mountable)
        Agent.Main.SetAgentFlags(Agent.Main.GetAgentFlags() | AgentFlag.CanRide);
      else
        Agent.Main.SetAgentFlags(Agent.Main.GetAgentFlags() & ~AgentFlag.CanRide);
    }

    private void OnMountedTrainingStart()
    {
      this.ResetCheckpoints();
      this._continueLoop = false;
      this.HideAllMountedAITargets();
    }

    private void OnMountedTrainingExit()
    {
      this.SetHorseMountable(false);
      this.ResetCheckpoints();
      this._continueLoop = true;
      this.GoToStartingPosition();
    }

    private void SetFinishGateStatus(bool open)
    {
      if (open)
      {
        ++this._finishGateStatus;
        if (this._finishGateStatus != 1)
          return;
        this._finishGateClosed.SetVisibilityExcludeParents(false);
        this._finishGateOpen.SetVisibilityExcludeParents(true);
      }
      else
      {
        this._finishGateStatus = MathF.Max(0, this._finishGateStatus - 1);
        if (this._finishGateStatus != 0)
          return;
        this._finishGateClosed.SetVisibilityExcludeParents(true);
        this._finishGateOpen.SetVisibilityExcludeParents(false);
      }
    }

    private void MountedTrainingEndedSuccessfully()
    {
      double num = (double) this.UIEndTimer();
      this.EndTimer();
      int brokenBreakableCount = this._activeTutorialArea.GetBrokenBreakableCount(this._trainingSubTypeIndex);
      int breakablesCount = this._activeTutorialArea.GetBreakablesCount(this._trainingSubTypeIndex);
      float score = this._timeScore + (float) (this._activeTutorialArea.GetBreakablesCount(this._trainingSubTypeIndex) - this._activeTutorialArea.GetBrokenBreakableCount(this._trainingSubTypeIndex));
      TextObject textObject = new TextObject("{=W49eUmpT}You can dismount from horse with {CROUCH_KEY}, or {ACTION_KEY} while looking at the horse.");
      textObject.SetTextVariable("CROUCH_KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 15)));
      textObject.SetTextVariable("ACTION_KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      this.CurrentObjectiveTick(textObject);
      if (breakablesCount - brokenBreakableCount == 0)
      {
        Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/riding/course_perfect"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
        TextObject message = new TextObject("{=veHe94Ec}You've successfully finished the track in ({TIME_SCORE}) seconds without missing any targets!");
        message.SetTextVariable("TIME_SCORE", new TextObject(score.ToString("0.0")));
        MBInformationManager.AddQuickInformation(message);
      }
      else
      {
        Mission.Current.MakeSound(SoundEvent.GetEventIdFromString("event:/mission/tutorial/vo/riding/course_finish"), Agent.Main.GetEyeGlobalPosition(), true, false, -1, -1);
        TextObject message = new TextObject("{=QLgkR3qN}You've successfully finished the track in ({TIME_SCORE}) seconds. You've received ({PENALTY_SECONDS}) seconds penalty from ({MISSED_TARGETS}) missed targets.");
        message.SetTextVariable("TIME_SCORE", new TextObject(score.ToString("0.0")));
        message.SetTextVariable("PENALTY_SECONDS", new TextObject((score - this._timeScore).ToString("0.0")));
        message.SetTextVariable("MISSED_TARGETS", breakablesCount - brokenBreakableCount);
        MBInformationManager.AddQuickInformation(message);
      }
      this.SetFinishGateStatus(false);
      this.SuccessfullyFinishTraining(score);
    }

    public class TutorialObjective
    {
      private TextObject _name;

      public string Id { get; private set; }

      public bool IsFinished { get; private set; }

      public bool IsActive { get; private set; }

      public List<TrainingFieldMissionController.TutorialObjective> SubTasks { get; private set; }

      public float Score { get; private set; }

      public TutorialObjective(string id, bool isFinished = false, bool isActive = false)
      {
        this._name = GameTexts.FindText("str_tutorial_" + id);
        this.Id = id;
        this.IsFinished = isFinished;
        this.IsActive = isActive;
        this.SubTasks = new List<TrainingFieldMissionController.TutorialObjective>();
        this.Score = 0.0f;
      }

      public void SetTextVariableOfName(string tag, int variable)
      {
        string str1 = this._name.ToString();
        this._name.SetTextVariable(tag, variable);
        string str2 = this._name.ToString();
        if (!(str1 != str2))
          return;
        TrainingFieldMissionController._updateObjectivesWillBeCalled = true;
      }

      public string GetNameString() => this._name == null ? "" : this._name.ToString();

      public bool SetActive(bool isActive)
      {
        if (this.IsActive == isActive)
          return false;
        this.IsActive = isActive;
        TrainingFieldMissionController._updateObjectivesWillBeCalled = true;
        return true;
      }

      public bool FinishTask()
      {
        if (this.IsFinished)
          return false;
        this.IsFinished = true;
        TrainingFieldMissionController._updateObjectivesWillBeCalled = true;
        return true;
      }

      public void FinishSubTask(string subTaskName, float score)
      {
        TrainingFieldMissionController.TutorialObjective tutorialObjective = this.SubTasks.Find((Predicate<TrainingFieldMissionController.TutorialObjective>) (x => x.Id == subTaskName));
        tutorialObjective.FinishTask();
        if ((double) score != 0.0 && ((double) tutorialObjective.Score > (double) score || (double) tutorialObjective.Score == 0.0))
          tutorialObjective.Score = score;
        if (!this.SubTasks.Exists((Predicate<TrainingFieldMissionController.TutorialObjective>) (x => !x.IsFinished)))
          this.FinishTask();
        TrainingFieldMissionController._updateObjectivesWillBeCalled = true;
      }

      public bool SetAllSubTasksInactive()
      {
        bool flag1 = false;
        foreach (TrainingFieldMissionController.TutorialObjective subTask in this.SubTasks)
        {
          bool flag2 = subTask.SetActive(false);
          flag1 |= flag2;
          if (subTask.SubTasks.Count > 0)
          {
            bool flag3 = subTask.SetAllSubTasksInactive();
            flag1 |= flag3;
          }
        }
        if (flag1)
          TrainingFieldMissionController._updateObjectivesWillBeCalled = true;
        return flag1;
      }

      public void AddSubTask(
        TrainingFieldMissionController.TutorialObjective newSubTask)
      {
        this.SubTasks.Add(newSubTask);
        TrainingFieldMissionController._updateObjectivesWillBeCalled = true;
      }

      public void RestoreScoreFromSave(float score)
      {
        this.Score = score;
        TrainingFieldMissionController._updateObjectivesWillBeCalled = true;
      }
    }

    public struct DelayedAction
    {
      private float _orderGivenTime;
      private float _delayTime;
      private Action _order;
      private string _explanation;

      public DelayedAction(Action order, float delayTime, string explanation)
      {
        this._orderGivenTime = Mission.Current.CurrentTime;
        this._delayTime = delayTime;
        this._order = order;
        this._explanation = explanation;
      }

      public bool Update()
      {
        if ((double) Mission.Current.CurrentTime - (double) this._orderGivenTime <= (double) this._delayTime)
          return false;
        this._order();
        return true;
      }
    }

    public enum MouseObjectives
    {
      None,
      AttackLeft,
      AttackRight,
      AttackUp,
      AttackDown,
      DefendLeft,
      DefendRight,
      DefendUp,
      DefendDown,
    }

    private enum HorseReturningSituation
    {
      NotInPosition,
      BeginReturn,
      Returning,
      ReturnCompleted,
      Following,
    }
  }
}
