// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Missions.MissionGauntletNameMarkerView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Missions;
using SandBox.ViewModelCollection;
using SandBox.ViewModelCollection.Missions.NameMarker;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Missions
{
  [OverrideView(typeof (MissionNameMarkerUIHandler))]
  public class MissionGauntletNameMarkerView : MissionView
  {
    private GauntletLayer _gauntletLayer;
    private MissionNameMarkerVM _dataSource;
    private readonly Dictionary<Agent, SandBoxUIHelper.IssueQuestFlags> _additionalTargetAgents;
    private Dictionary<string, (Vec3, string, string)> _additionalGenericTargets;

    public MissionGauntletNameMarkerView()
    {
      this._additionalTargetAgents = new Dictionary<Agent, SandBoxUIHelper.IssueQuestFlags>();
      this._additionalGenericTargets = new Dictionary<string, (Vec3, string, string)>();
    }

    public override void OnMissionScreenInitialize()
    {
      base.OnMissionScreenInitialize();
      this._dataSource = new MissionNameMarkerVM(this.Mission, this.MissionScreen.CombatCamera, this._additionalTargetAgents, this._additionalGenericTargets);
      this._gauntletLayer = new GauntletLayer(1);
      this._gauntletLayer.LoadMovie("NameMarker", (ViewModel) this._dataSource);
      this.MissionScreen.AddLayer((ScreenLayer) this._gauntletLayer);
      CampaignEvents.ConversationEnded.AddNonSerializedListener((object) this, new Action<IEnumerable<CharacterObject>>(this.OnConversationEnd));
    }

    public override void OnMissionScreenFinalize()
    {
      base.OnMissionScreenFinalize();
      this.MissionScreen.RemoveLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer = (GauntletLayer) null;
      this._dataSource.OnFinalize();
      this._dataSource = (MissionNameMarkerVM) null;
      this._additionalTargetAgents.Clear();
      CampaignEvents.ConversationEnded.ClearListeners((object) this);
      InformationManager.ClearAllMessages();
    }

    public override void OnMissionScreenTick(float dt)
    {
      base.OnMissionScreenTick(dt);
      this._dataSource.IsEnabled = this.Input.IsGameKeyDown(5);
      this._dataSource.Tick(dt);
    }

    public override void OnAgentBuild(Agent affectedAgent, Banner banner)
    {
      base.OnAgentBuild(affectedAgent, banner);
      this._dataSource?.OnAgentBuild(affectedAgent);
    }

    public override void OnAgentDeleted(Agent affectedAgent)
    {
      this._dataSource.OnAgentDeleted(affectedAgent);
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      this._dataSource.OnAgentRemoved(affectedAgent);
    }

    private void OnConversationEnd(
      IEnumerable<CharacterObject> conversationCharacters)
    {
      this._dataSource.OnConversationEnd();
    }

    public override void OnPhotoModeActivated()
    {
      base.OnPhotoModeActivated();
      this._gauntletLayer.UIContext.ContextAlpha = 0.0f;
    }

    public override void OnPhotoModeDeactivated()
    {
      base.OnPhotoModeDeactivated();
      this._gauntletLayer.UIContext.ContextAlpha = 1f;
    }

    public void UpdateAgentTargetQuestStatus(
      Agent agent,
      SandBoxUIHelper.IssueQuestFlags issueQuestFlags)
    {
      if (agent == null)
        return;
      MissionNameMarkerVM dataSource = this._dataSource;
      if ((dataSource != null ? (dataSource.IsTargetsAdded ? 1 : 0) : 0) != 0)
      {
        this._dataSource.UpdateAdditionalTargetAgentQuestStatus(agent, issueQuestFlags);
      }
      else
      {
        if (!this._additionalTargetAgents.TryGetValue(agent, out SandBoxUIHelper.IssueQuestFlags _))
          return;
        this._additionalTargetAgents[agent] = issueQuestFlags;
      }
    }

    public void AddGenericMarker(
      string markerIdentifier,
      Vec3 globalPosition,
      string name,
      string iconType)
    {
      MissionNameMarkerVM dataSource = this._dataSource;
      if ((dataSource != null ? (dataSource.IsTargetsAdded ? 1 : 0) : 0) != 0)
        this._dataSource.AddGenericMarker(markerIdentifier, globalPosition, name, iconType);
      else
        this._additionalGenericTargets.Add(markerIdentifier, (globalPosition, name, iconType));
    }

    public void RemoveGenericMarker(string markerIdentifier)
    {
      MissionNameMarkerVM dataSource = this._dataSource;
      if ((dataSource != null ? (dataSource.IsTargetsAdded ? 1 : 0) : 0) != 0)
        this._dataSource.RemoveGenericMarker(markerIdentifier);
      else
        this._additionalGenericTargets.Remove(markerIdentifier);
    }

    public void AddAgentTarget(Agent agent, SandBoxUIHelper.IssueQuestFlags issueQuestFlags)
    {
      if (agent == null)
        return;
      MissionNameMarkerVM dataSource = this._dataSource;
      if ((dataSource != null ? (dataSource.IsTargetsAdded ? 1 : 0) : 0) != 0)
      {
        this._dataSource.AddAgentTarget(agent, true);
        this._dataSource.UpdateAdditionalTargetAgentQuestStatus(agent, issueQuestFlags);
      }
      else
      {
        if (this._additionalTargetAgents.TryGetValue(agent, out SandBoxUIHelper.IssueQuestFlags _))
          return;
        this._additionalTargetAgents.Add(agent, issueQuestFlags);
      }
    }

    public void RemoveAgentTarget(Agent agent)
    {
      if (agent == null)
        return;
      MissionNameMarkerVM dataSource = this._dataSource;
      if ((dataSource != null ? (dataSource.IsTargetsAdded ? 1 : 0) : 0) != 0)
      {
        this._dataSource.RemoveAgentTarget(agent);
      }
      else
      {
        if (!this._additionalTargetAgents.TryGetValue(agent, out SandBoxUIHelper.IssueQuestFlags _))
          return;
        this._additionalTargetAgents.Remove(agent);
      }
    }
  }
}
