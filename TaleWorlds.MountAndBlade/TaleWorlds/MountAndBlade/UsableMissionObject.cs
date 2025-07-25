// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.UsableMissionObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class UsableMissionObject : SynchedMissionObject, IFocusable, IUsable, IVisible
  {
    private Agent _userAgent;
    private readonly List<UsableMissionObjectComponent> _components;
    [EditableScriptComponentVariable(false)]
    public TextObject DescriptionMessage = TextObject.Empty;
    [EditableScriptComponentVariable(false)]
    public TextObject ActionMessage = TextObject.Empty;
    private bool _needsSingleThreadTickOnce;
    private bool _isDeactivated;
    private bool _isDisabledForPlayers;

    public virtual FocusableObjectType FocusableObjectType => FocusableObjectType.Item;

    public virtual void OnUserConversationStart()
    {
    }

    public virtual void OnUserConversationEnd()
    {
    }

    public Agent UserAgent
    {
      get => this._userAgent;
      private set
      {
        if (this._userAgent == value)
          return;
        this.PreviousUserAgent = this._userAgent;
        this._userAgent = value;
        this.SetScriptComponentToTickMT(this.GetTickRequirement());
      }
    }

    public Agent PreviousUserAgent { get; private set; }

    public GameEntityWithWorldPosition GameEntityWithWorldPosition { get; private set; }

    public virtual Agent MovingAgent { get; private set; }

    public List<Agent> DefendingAgents { get; private set; }

    public bool HasDefendingAgent
    {
      get => this.DefendingAgents != null && this.GetDefendingAgentCount() > 0;
    }

    public bool IsInstantUse { get; protected set; }

    public bool IsDeactivated
    {
      get => this._isDeactivated;
      set
      {
        if (value == this._isDeactivated)
          return;
        this._isDeactivated = value;
        if (!this._isDeactivated || GameNetwork.IsClientOrReplay)
          return;
        this.UserAgent?.StopUsingGameObject();
        bool flag = false;
        while (this.HasAIMovingTo)
        {
          this.MovingAgent.StopUsingGameObject();
          flag = true;
        }
        while (this.HasDefendingAgent)
        {
          this.DefendingAgents[0].StopUsingGameObject();
          flag = true;
        }
        if (!flag)
          return;
        this.SetScriptComponentToTick(this.GetTickRequirement());
      }
    }

    public bool IsDisabledForPlayers
    {
      get => this._isDisabledForPlayers;
      set
      {
        if (value == this._isDisabledForPlayers)
          return;
        this._isDisabledForPlayers = value;
        if (!this._isDisabledForPlayers || GameNetwork.IsClientOrReplay || this.UserAgent == null || this.UserAgent.IsAIControlled)
          return;
        this.UserAgent.StopUsingGameObject();
      }
    }

    public void SetIsDeactivatedSynched(bool value)
    {
      if (this.IsDeactivated == value)
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetUsableMissionObjectIsDeactivated(this.Id, value));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      this.IsDeactivated = value;
    }

    public void SetIsDisabledForPlayersSynched(bool value)
    {
      if (this.IsDisabledForPlayers == value)
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetUsableMissionObjectIsDisabledForPlayers(this.Id, value));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      this.IsDisabledForPlayers = value;
    }

    public virtual bool IsDisabledForAgent(Agent agent)
    {
      return this.IsDeactivated || agent.MountAgent != null || this.IsDisabledForPlayers && !agent.IsAIControlled || !agent.IsOnLand();
    }

    protected UsableMissionObject(bool isInstantUse = false)
    {
      this._components = new List<UsableMissionObjectComponent>();
      this.IsInstantUse = isInstantUse;
      this.GameEntityWithWorldPosition = (GameEntityWithWorldPosition) null;
      this._needsSingleThreadTickOnce = false;
    }

    public void AddComponent(UsableMissionObjectComponent component)
    {
      this._components.Add(component);
      component.OnAdded(this.Scene);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void RemoveComponent(UsableMissionObjectComponent component)
    {
      component.OnRemoved();
      this._components.Remove(component);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public T GetComponent<T>() where T : UsableMissionObjectComponent
    {
      return this._components.Find((Predicate<UsableMissionObjectComponent>) (c => c is T)) as T;
    }

    private void CollectChildEntities() => this.CollectChildEntitiesAux(this.GameEntity);

    private void CollectChildEntitiesAux(GameEntity entity)
    {
      foreach (GameEntity child in entity.GetChildren())
      {
        this.CollectChildEntity(child);
        if (child.GetScriptComponents().IsEmpty<ScriptComponentBehavior>())
          this.CollectChildEntitiesAux(child);
      }
    }

    public void RefreshGameEntityWithWorldPosition()
    {
      this.GameEntityWithWorldPosition = new GameEntityWithWorldPosition(this.GameEntity);
    }

    protected virtual void CollectChildEntity(GameEntity childEntity)
    {
    }

    protected virtual bool VerifyChildEntities(ref string errorMessage) => true;

    protected internal override void OnInit()
    {
      base.OnInit();
      this.CollectChildEntities();
      this.LockUserFrames = !this.IsInstantUse;
      this.RefreshGameEntityWithWorldPosition();
    }

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this.CollectChildEntities();
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnMissionReset();
    }

    public virtual void OnFocusGain(Agent userAgent)
    {
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnFocusGain(userAgent);
    }

    public virtual void OnFocusLose(Agent userAgent)
    {
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnFocusLose(userAgent);
    }

    public virtual TextObject GetInfoTextForBeingNotInteractable(Agent userAgent)
    {
      return TextObject.Empty;
    }

    public virtual void SetUserForClient(Agent userAgent)
    {
      this.UserAgent?.SetUsedGameObjectForClient((UsableMissionObject) null);
      this.UserAgent = userAgent;
      userAgent?.SetUsedGameObjectForClient(this);
    }

    public virtual void OnUse(Agent userAgent)
    {
      if (!GameNetwork.IsClientOrReplay)
      {
        if (!userAgent.IsAIControlled && this.HasAIUser)
          this.UserAgent.StopUsingGameObject(false);
        if (this.IsAIMovingTo(userAgent))
        {
          userAgent.Formation?.Team.DetachmentManager.RemoveAgentAsMovingToDetachment(userAgent);
          this.RemoveMovingAgent(userAgent);
          this.SetScriptComponentToTick(this.GetTickRequirement());
        }
        while (this.HasAIMovingTo && !this.IsInstantUse)
          this.MovingAgent.StopUsingGameObject(false);
        foreach (UsableMissionObjectComponent component in this._components)
          component.OnUse(userAgent);
        this.UserAgent = userAgent;
        if (!GameNetwork.IsServerOrRecorder)
          return;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new UseObject(userAgent.Index, this.Id));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      else if (this.LockUserFrames)
      {
        WorldFrame userFrameForAgent = this.GetUserFrameForAgent(userAgent);
        userAgent.SetTargetPositionAndDirection(userFrameForAgent.Origin.AsVec2, userFrameForAgent.Rotation.f);
      }
      else
      {
        if (!this.LockUserPositions)
          return;
        userAgent.SetTargetPosition(this.GetUserFrameForAgent(userAgent).Origin.AsVec2);
      }
    }

    public virtual void OnAIMoveToUse(Agent userAgent, IDetachment detachment)
    {
      this.AddMovingAgent(userAgent);
      userAgent.Formation?.Team.DetachmentManager.AddAgentAsMovingToDetachment(userAgent, detachment);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public virtual void OnUseStopped(Agent userAgent, bool isSuccessful, int preferenceIndex)
    {
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnUseStopped(userAgent, isSuccessful);
      this.UserAgent = (Agent) null;
    }

    public virtual void OnMoveToStopped(Agent movingAgent)
    {
      movingAgent.Formation?.Team.DetachmentManager.RemoveAgentAsMovingToDetachment(movingAgent);
      this.RemoveMovingAgent(movingAgent);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public virtual int GetMovingAgentCount() => this.MovingAgent == null ? 0 : 1;

    public virtual Agent GetMovingAgentWithIndex(int index) => this.MovingAgent;

    public virtual void RemoveMovingAgent(Agent movingAgent) => this.MovingAgent = (Agent) null;

    public virtual void AddMovingAgent(Agent movingAgent) => this.MovingAgent = movingAgent;

    public void OnAIDefendBegin(Agent agent, IDetachment detachment)
    {
      this.AddDefendingAgent(agent);
      agent.Formation?.Team.DetachmentManager.AddAgentAsDefendingToDetachment(agent, detachment);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void OnAIDefendEnd(Agent agent)
    {
      agent.Formation?.Team.DetachmentManager.RemoveAgentAsDefendingToDetachment(agent);
      this.RemoveDefendingAgent(agent);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void InitializeDefendingAgents()
    {
      if (this.DefendingAgents != null)
        return;
      this.DefendingAgents = new List<Agent>();
    }

    public int GetDefendingAgentCount() => this.DefendingAgents.Count;

    public void AddDefendingAgent(Agent agent) => this.DefendingAgents.Add(agent);

    public void RemoveDefendingAgent(Agent agent) => this.DefendingAgents.Remove(agent);

    public bool IsAgentDefending(Agent agent) => this.DefendingAgents.Contains(agent);

    public virtual void SimulateTick(float dt)
    {
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      if (this.HasUser || this.HasAIMovingTo)
        return base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel2;
      if (this.HasDefendingAgent)
        return base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick;
      foreach (UsableMissionObjectComponent component in this._components)
      {
        if (component.IsOnTickRequired())
          return base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick;
      }
      return base.GetTickRequirement();
    }

    protected internal override void OnTickParallel2(float dt)
    {
      for (int index = this.GetMovingAgentCount() - 1; index >= 0; --index)
      {
        if (!this.GetMovingAgentWithIndex(index).IsActive())
          this._needsSingleThreadTickOnce = true;
      }
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnTick(dt);
      if (this.HasUser && this.HasUserPositionsChanged(this.UserAgent))
      {
        if (this.LockUserFrames)
        {
          WorldFrame userFrameForAgent = this.GetUserFrameForAgent(this.UserAgent);
          this.UserAgent.SetTargetPositionAndDirection(userFrameForAgent.Origin.AsVec2, userFrameForAgent.Rotation.f);
        }
        else if (this.LockUserPositions)
          this.UserAgent.SetTargetPosition(this.GetUserFrameForAgent(this.UserAgent).Origin.AsVec2);
      }
      if (!this._needsSingleThreadTickOnce)
        return;
      this._needsSingleThreadTickOnce = false;
      for (int index = this.GetMovingAgentCount() - 1; index >= 0; --index)
      {
        Agent movingAgentWithIndex = this.GetMovingAgentWithIndex(index);
        if (!movingAgentWithIndex.IsActive())
        {
          movingAgentWithIndex.Formation?.Team.DetachmentManager.RemoveAgentAsMovingToDetachment(movingAgentWithIndex);
          this.RemoveMovingAgent(movingAgentWithIndex);
          this.SetScriptComponentToTick(this.GetTickRequirement());
        }
      }
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnEditorTick(dt);
    }

    protected internal override void OnEditorValidate()
    {
      base.OnEditorValidate();
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnEditorValidate();
      string errorMessage = (string) null;
      if (this.VerifyChildEntities(ref errorMessage))
        return;
      MBDebug.ShowWarning(errorMessage);
    }

    protected override void OnRemoved(int removeReason)
    {
      base.OnRemoved(removeReason);
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnRemoved();
    }

    public virtual GameEntity InteractionEntity => this.GameEntity;

    public virtual WorldFrame GetUserFrameForAgent(Agent agent)
    {
      return this.GameEntityWithWorldPosition.WorldFrame;
    }

    public override string ToString()
    {
      string str = this.GetType().ToString() + " with Components:";
      foreach (UsableMissionObjectComponent component in this._components)
        str = str + "[" + (object) component + "]";
      return str;
    }

    public bool HasAIUser => this.HasUser && this.UserAgent.IsAIControlled;

    public bool HasUser => this.UserAgent != null;

    public virtual bool HasAIMovingTo => this.MovingAgent != null;

    public virtual bool IsAIMovingTo(Agent agent) => this.MovingAgent == agent;

    public virtual bool HasUserPositionsChanged(Agent agent)
    {
      return (this.LockUserFrames || this.LockUserPositions) && this.GameEntity.GetHasFrameChanged();
    }

    public virtual bool DisableCombatActionsOnUse => !this.IsInstantUse;

    protected internal virtual bool LockUserFrames { get; set; }

    protected internal virtual bool LockUserPositions { get; set; }

    public override void WriteToNetwork()
    {
      base.WriteToNetwork();
      GameNetworkMessage.WriteBoolToPacket(this.IsDeactivated);
      GameNetworkMessage.WriteBoolToPacket(this.IsDisabledForPlayers);
      GameNetworkMessage.WriteBoolToPacket(this.UserAgent != null);
      if (this.UserAgent == null)
        return;
      GameNetworkMessage.WriteAgentIndexToPacket(this.UserAgent.Index);
    }

    public virtual bool IsUsableByAgent(Agent userAgent) => true;

    public bool IsVisible
    {
      get => this.GameEntity.IsVisibleIncludeParents();
      set
      {
        this.GameEntity.SetVisibilityExcludeParents(value);
        foreach (UsableMissionObjectComponent component in this._components)
        {
          if (component is IVisible)
          {
            Debug.FailedAssert("Unexpected component in UsableMissionObject", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Usables\\UsableMissionObject.cs", nameof (IsVisible), 746);
            ((IVisible) component).IsVisible = value;
          }
        }
      }
    }

    public override void OnEndMission()
    {
      this.UserAgent = (Agent) null;
      for (int index = this.GetMovingAgentCount() - 1; index >= 0; --index)
        this.RemoveMovingAgent(this.GetMovingAgentWithIndex(index));
      if (this.HasDefendingAgent)
      {
        for (int index = this.GetDefendingAgentCount() - 1; index >= 0; --index)
          this.DefendingAgents.RemoveAt(index);
      }
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override void OnAfterReadFromNetwork(
      (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) synchedMissionObjectReadableRecord)
    {
      base.OnAfterReadFromNetwork(synchedMissionObjectReadableRecord);
      UsableMissionObject.UsableMissionObjectRecord missionObjectRecord = (UsableMissionObject.UsableMissionObjectRecord) synchedMissionObjectReadableRecord.Item2;
      this.IsDeactivated = missionObjectRecord.IsDeactivated;
      this.IsDisabledForPlayers = missionObjectRecord.IsDisabledForPlayers;
      if (!missionObjectRecord.IsUserAgentExists)
        return;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(missionObjectRecord.AgentIndex);
      if (agentFromIndex == null)
        return;
      this.SetUserForClient(agentFromIndex);
    }

    public abstract string GetDescriptionText(GameEntity gameEntity = null);

    [DefineSynchedMissionObjectType(typeof (UsableMissionObject))]
    public struct UsableMissionObjectRecord : ISynchedMissionObjectReadableRecord
    {
      public bool IsDeactivated { get; private set; }

      public bool IsDisabledForPlayers { get; private set; }

      public bool IsUserAgentExists { get; private set; }

      public int AgentIndex { get; private set; }

      public UsableMissionObjectRecord(
        bool isDeactivated,
        bool isDisabledForPlayers,
        bool isUserAgentExists,
        int agentIndex)
      {
        this.IsDeactivated = isDeactivated;
        this.IsDisabledForPlayers = isDisabledForPlayers;
        this.IsUserAgentExists = isUserAgentExists;
        this.AgentIndex = agentIndex;
      }

      public bool ReadFromNetwork(ref bool bufferReadValid)
      {
        this.IsDeactivated = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        this.IsDisabledForPlayers = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        this.IsUserAgentExists = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        if (this.IsUserAgentExists)
          this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
        return bufferReadValid;
      }
    }
  }
}
