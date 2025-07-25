// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.VisualTrackerMissionBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects.AreaMarkers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class VisualTrackerMissionBehavior : MissionLogic
  {
    private List<TrackedObject> _currentTrackedObjects = new List<TrackedObject>();
    private int _trackedObjectsVersion = -1;
    private readonly VisualTrackerManager _visualTrackerManager = Campaign.Current.VisualTrackerManager;

    public override void OnAgentCreated(Agent agent) => this.CheckAgent(agent);

    private void CheckAgent(Agent agent)
    {
      if (agent.Character == null || !this._visualTrackerManager.CheckTracked(agent.Character))
        return;
      this.RegisterLocalOnlyObject((ITrackableBase) agent);
    }

    public override void AfterStart() => this.Refresh();

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (this._visualTrackerManager.TrackedObjectsVersion == this._trackedObjectsVersion)
        return;
      this.Refresh();
    }

    private void Refresh()
    {
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        this.CheckAgent(agent);
      this.RefreshCommonAreas();
      this._trackedObjectsVersion = this._visualTrackerManager.TrackedObjectsVersion;
    }

    public void RegisterLocalOnlyObject(ITrackableBase obj)
    {
      foreach (TrackedObject currentTrackedObject in this._currentTrackedObjects)
      {
        if (currentTrackedObject.Object == obj)
          return;
      }
      this._currentTrackedObjects.Add(new TrackedObject(obj));
    }

    private void RefreshCommonAreas()
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      foreach (CommonAreaMarker commonAreaMarker in this.Mission.ActiveMissionObjects.FindAllWithType<CommonAreaMarker>().ToList<CommonAreaMarker>())
      {
        if (settlement.Alleys.Count >= commonAreaMarker.AreaIndex)
          this.RegisterLocalOnlyObject((ITrackableBase) commonAreaMarker);
      }
    }

    public override List<CompassItemUpdateParams> GetCompassTargets()
    {
      List<CompassItemUpdateParams> compassTargets = new List<CompassItemUpdateParams>();
      foreach (TrackedObject currentTrackedObject in this._currentTrackedObjects)
        compassTargets.Add(new CompassItemUpdateParams((object) currentTrackedObject.Object, TargetIconType.Flag_A, currentTrackedObject.Position, 4288256409U, uint.MaxValue));
      return compassTargets;
    }

    private void RemoveLocalObject(ITrackableBase obj)
    {
      this._currentTrackedObjects.RemoveAll((Predicate<TrackedObject>) (x => x.Object == obj));
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      this.RemoveLocalObject((ITrackableBase) affectedAgent);
    }

    public override void OnAgentDeleted(Agent affectedAgent)
    {
      this.RemoveLocalObject((ITrackableBase) affectedAgent);
    }
  }
}
