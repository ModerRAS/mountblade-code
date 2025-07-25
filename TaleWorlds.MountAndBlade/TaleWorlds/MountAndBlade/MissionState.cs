// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionState : GameState
  {
    private const int MissionFastForwardSpeedMultiplier = 10;
    private bool _missionInitializing;
    private bool _firstMissionTickAfterLoading = true;
    private int _tickCountBeforeLoad;
    public static bool RecordMission;
    public float MissionFastForwardAmount;
    public float MissionEndTime;
    private bool _isDelayedDisconnecting;
    private int _missionTickCount;

    public IMissionSystemHandler Handler { get; set; }

    public override bool IsMission => true;

    public static MissionState Current { get; private set; }

    public Mission CurrentMission { get; private set; }

    public string MissionName { get; private set; }

    public bool Paused { get; set; }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      MissionState.Current = this;
      LoadingWindow.EnableGlobalLoadingWindow();
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.CurrentMission.OnMissionStateFinalize(this.CurrentMission.NeedsMemoryCleanup);
      this.CurrentMission = (Mission) null;
      MissionState.Current = (MissionState) null;
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this.CurrentMission.OnMissionStateActivate();
    }

    protected override void OnDeactivate()
    {
      base.OnDeactivate();
      this.CurrentMission.OnMissionStateDeactivate();
    }

    protected override void OnIdleTick(float dt)
    {
      base.OnIdleTick(dt);
      if (this.CurrentMission == null || this.CurrentMission.CurrentState != Mission.State.Continuing)
        return;
      this.CurrentMission.IdleTick(dt);
    }

    protected override void OnTick(float realDt)
    {
      base.OnTick(realDt);
      if (this._isDelayedDisconnecting && this.CurrentMission != null && this.CurrentMission.CurrentState == Mission.State.Continuing)
        BannerlordNetwork.EndMultiplayerLobbyMission();
      if (this.CurrentMission == null)
        return;
      if (this.CurrentMission.CurrentState == Mission.State.NewlyCreated || this.CurrentMission.CurrentState == Mission.State.Initializing)
      {
        if (this.CurrentMission.CurrentState == Mission.State.NewlyCreated)
          this.CurrentMission.ClearUnreferencedResources(this.CurrentMission.NeedsMemoryCleanup);
        this.TickLoading(realDt);
      }
      else if (this.CurrentMission.CurrentState == Mission.State.Continuing || this.CurrentMission.MissionEnded)
      {
        if ((double) this.MissionFastForwardAmount != 0.0)
        {
          this.CurrentMission.FastForwardMission(this.MissionFastForwardAmount, 0.033f);
          this.MissionFastForwardAmount = 0.0f;
        }
        bool flag = false;
        if ((double) this.MissionEndTime != 0.0 && (double) this.CurrentMission.CurrentTime > (double) this.MissionEndTime)
        {
          this.CurrentMission.EndMission();
          flag = true;
        }
        if (!flag && (this.Handler == null || this.Handler.RenderIsReady()))
          this.TickMission(realDt);
        if (flag && MBEditor._isEditorMissionOn)
        {
          MBEditor.LeaveEditMissionMode();
          this.TickMission(realDt);
        }
      }
      if (this.CurrentMission.CurrentState != Mission.State.Over)
        return;
      if (MBGameManager.Current.IsEnding)
        Game.Current.GameStateManager.CleanStates();
      else
        Game.Current.GameStateManager.PopState();
    }

    private void TickMission(float realDt)
    {
      if (this._firstMissionTickAfterLoading && this.CurrentMission != null && this.CurrentMission.CurrentState == Mission.State.Continuing)
      {
        if (GameNetwork.IsClient)
        {
          int currentBattleIndex = GameNetwork.GetNetworkComponent<BaseNetworkComponentData>().CurrentBattleIndex;
          MBDebug.Print(string.Format("Client: I finished loading battle with index: {0}. Sending confirmation to server.", (object) currentBattleIndex), debugFilter: 17179869184UL);
          GameNetwork.BeginModuleEventAsClient();
          GameNetwork.WriteMessage((GameNetworkMessage) new FinishedLoading(currentBattleIndex));
          GameNetwork.EndModuleEventAsClient();
          GameNetwork.SyncRelevantGameOptionsToServer();
        }
        this._firstMissionTickAfterLoading = false;
      }
      this.Handler?.BeforeMissionTick(this.CurrentMission, realDt);
      this.CurrentMission.PauseAITick = false;
      if (GameNetwork.IsSessionActive && (double) this.CurrentMission.ClearSceneTimerElapsedTime < 0.0)
        this.CurrentMission.PauseAITick = true;
      float dt = realDt;
      if (this.Paused || MBCommon.IsPaused)
        dt = 0.0f;
      else if (this.CurrentMission.FixedDeltaTimeMode)
        dt = this.CurrentMission.FixedDeltaTime;
      if (!GameNetwork.IsSessionActive)
      {
        this.CurrentMission.UpdateSceneTimeSpeed();
        float timeSpeed = this.CurrentMission.Scene.TimeSpeed;
        dt *= timeSpeed;
      }
      if ((double) this.CurrentMission.ClearSceneTimerElapsedTime < -0.30000001192092896 && !GameNetwork.IsClientOrReplay)
        this.CurrentMission.ClearAgentActions();
      if (this.CurrentMission.CurrentState == Mission.State.Continuing || this.CurrentMission.MissionEnded)
      {
        if (this.CurrentMission.IsFastForward)
        {
          float num = dt * 9f;
          while ((double) num > 9.9999999747524271E-07)
          {
            if ((double) num > 0.10000000149011612)
            {
              this.TickMissionAux(0.1f, 0.1f, false, false);
              if (this.CurrentMission.CurrentState != Mission.State.Over)
                num -= 0.1f;
              else
                break;
            }
            else
            {
              if ((double) num > 1.0 / 300.0)
                this.TickMissionAux(num, num, false, false);
              num = 0.0f;
            }
          }
          if (this.CurrentMission.CurrentState != Mission.State.Over)
            this.TickMissionAux(dt, realDt, true, false);
        }
        else
          this.TickMissionAux(dt, realDt, true, true);
      }
      if (this.Handler != null)
        this.Handler.AfterMissionTick(this.CurrentMission, realDt);
      ++this._missionTickCount;
    }

    private void TickMissionAux(float dt, float realDt, bool updateCamera, bool asyncAITick)
    {
      this.CurrentMission.Tick(dt);
      if (this._missionTickCount <= 2)
        return;
      this.CurrentMission.OnTick(dt, realDt, updateCamera, asyncAITick);
    }

    private void TickLoading(float realDt)
    {
      ++this._tickCountBeforeLoad;
      if (!this._missionInitializing && this._tickCountBeforeLoad > 0)
      {
        this.LoadMission();
        Utilities.SetLoadingScreenPercentage(0.01f);
      }
      else
      {
        if (!this._missionInitializing || !this.CurrentMission.IsLoadingFinished)
          return;
        this.FinishMissionLoading();
      }
    }

    private void LoadMission()
    {
      foreach (MissionBehavior missionBehavior in this.CurrentMission.MissionBehaviors)
        missionBehavior.OnMissionScreenPreLoad();
      Utilities.ClearOldResourcesAndObjects();
      this._missionInitializing = true;
      this.CurrentMission.Initialize();
    }

    private void CreateMission(MissionInitializerRecord rec)
    {
      this.CurrentMission = new Mission(rec, this);
    }

    private Mission HandleOpenNew(
      string missionName,
      MissionInitializerRecord rec,
      InitializeMissionBehaviorsDelegate handler,
      bool addDefaultMissionBehaviors)
    {
      this.MissionName = missionName;
      this.CreateMission(rec);
      IEnumerable<MissionBehavior> behaviors = handler(this.CurrentMission).Where<MissionBehavior>((Func<MissionBehavior, bool>) (behavior => behavior != null));
      if (addDefaultMissionBehaviors)
        behaviors = MissionState.AddDefaultMissionBehaviorsTo(this.CurrentMission, behaviors);
      foreach (MissionBehavior missionBehavior in behaviors)
        missionBehavior.OnAfterMissionCreated();
      this.AddBehaviorsToMission(behaviors);
      if (this.Handler != null)
        this.AddBehaviorsToMission(this.Handler.OnAddBehaviors((IEnumerable<MissionBehavior>) new MissionBehavior[0], this.CurrentMission, missionName, addDefaultMissionBehaviors));
      if (GameNetwork.IsDedicatedServer)
        GameNetwork.SetServerFrameRate((double) Module.CurrentModule.StartupInfo.ServerTickRate);
      return this.CurrentMission;
    }

    private void AddBehaviorsToMission(IEnumerable<MissionBehavior> behaviors)
    {
      this.CurrentMission.InitializeStartingBehaviors(behaviors.OfType<MissionLogic>().Where<MissionLogic>((Func<MissionLogic, bool>) (behavior => !(behavior is MissionNetwork))).ToArray<MissionLogic>(), behaviors.Where<MissionBehavior>((Func<MissionBehavior, bool>) (behavior =>
      {
        switch (behavior)
        {
          case null:
          case MissionNetwork _:
            return false;
          default:
            return !(behavior is MissionLogic);
        }
      })).ToArray<MissionBehavior>(), behaviors.OfType<MissionNetwork>().ToArray<MissionNetwork>());
    }

    private static bool IsRecordingActive()
    {
      if (GameNetwork.IsServer)
        return MultiplayerOptions.OptionType.EnableMissionRecording.GetBoolValue();
      return MissionState.RecordMission && Game.Current.GameType.IsCoreOnlyGameMode;
    }

    public static Mission OpenNew(
      string missionName,
      MissionInitializerRecord rec,
      InitializeMissionBehaviorsDelegate handler,
      bool addDefaultMissionBehaviors = true,
      bool needsMemoryCleanup = true)
    {
      Debug.Print("Opening new mission " + missionName + " " + rec.SceneLevels + ".\n");
      if (!GameNetwork.IsClientOrReplay && !GameNetwork.IsServer)
        MBCommon.CurrentGameType = MissionState.IsRecordingActive() ? MBCommon.GameType.SingleRecord : MBCommon.GameType.Single;
      Game.Current.OnMissionIsStarting(missionName, rec);
      MissionState state = Game.Current.GameStateManager.CreateState<MissionState>();
      Mission mission = state.HandleOpenNew(missionName, rec, handler, addDefaultMissionBehaviors);
      Game.Current.GameStateManager.PushState((GameState) state);
      mission.NeedsMemoryCleanup = needsMemoryCleanup;
      return mission;
    }

    private static IEnumerable<MissionBehavior> AddDefaultMissionBehaviorsTo(
      Mission mission,
      IEnumerable<MissionBehavior> behaviors)
    {
      List<MissionBehavior> first = new List<MissionBehavior>();
      if (GameNetwork.IsSessionActive || GameNetwork.IsReplay)
        first.Add((MissionBehavior) new MissionNetworkComponent());
      if (MissionState.IsRecordingActive() && !GameNetwork.IsReplay)
        first.Add((MissionBehavior) new RecordMissionLogic());
      first.Add((MissionBehavior) new BasicMissionHandler());
      first.Add((MissionBehavior) new CasualtyHandler());
      first.Add((MissionBehavior) new AgentCommonAILogic());
      return first.Concat<MissionBehavior>(behaviors);
    }

    private void FinishMissionLoading()
    {
      this._missionInitializing = false;
      this.CurrentMission.Scene.SetOwnerThread();
      Utilities.SetLoadingScreenPercentage(0.4f);
      for (int index = 0; index < 2; ++index)
        this.CurrentMission.Tick(1f / 1000f);
      Utilities.SetLoadingScreenPercentage(0.42f);
      this.Handler?.OnMissionAfterStarting(this.CurrentMission);
      Utilities.SetLoadingScreenPercentage(0.48f);
      this.CurrentMission.AfterStart();
      Utilities.SetLoadingScreenPercentage(0.56f);
      this.Handler?.OnMissionLoadingFinished(this.CurrentMission);
      Utilities.SetLoadingScreenPercentage(0.62f);
      this.CurrentMission.Scene.ResumeLoadingRenderings();
    }

    public void BeginDelayedDisconnectFromMission() => this._isDelayedDisconnecting = true;
  }
}
