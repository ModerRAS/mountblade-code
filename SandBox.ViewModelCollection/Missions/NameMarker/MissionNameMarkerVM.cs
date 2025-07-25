// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Missions.NameMarker.MissionNameMarkerVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.Missions.MissionLogics.Towns;
using SandBox.Objects;
using SandBox.Objects.AreaMarkers;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Missions.NameMarker
{
  public class MissionNameMarkerVM : ViewModel
  {
    private readonly Camera _missionCamera;
    private readonly Mission _mission;
    private Vec3 _agentHeightOffset = new Vec3(z: 0.35f);
    private Vec3 _defaultHeightOffset = new Vec3(z: 2f);
    private bool _prevEnabledState;
    private bool _fadeOutTimerStarted;
    private float _fadeOutTimer;
    private Dictionary<Agent, SandBoxUIHelper.IssueQuestFlags> _additionalTargetAgents;
    private Dictionary<string, (Vec3, string, string)> _additionalGenericTargets;
    private Dictionary<string, MissionNameMarkerTargetVM> _genericTargets;
    private readonly MissionNameMarkerVM.MarkerDistanceComparer _distanceComparer;
    private readonly List<string> PassagePointFilter = new List<string>()
    {
      "Empty Shop"
    };
    private MBBindingList<MissionNameMarkerTargetVM> _targets;
    private bool _isEnabled;

    public bool IsTargetsAdded { get; private set; }

    public MissionNameMarkerVM(
      Mission mission,
      Camera missionCamera,
      Dictionary<Agent, SandBoxUIHelper.IssueQuestFlags> additionalTargetAgents,
      Dictionary<string, (Vec3, string, string)> additionalGenericTargets)
    {
      this.Targets = new MBBindingList<MissionNameMarkerTargetVM>();
      this._distanceComparer = new MissionNameMarkerVM.MarkerDistanceComparer();
      this._missionCamera = missionCamera;
      this._additionalTargetAgents = additionalTargetAgents;
      this._additionalGenericTargets = additionalGenericTargets;
      this._genericTargets = new Dictionary<string, MissionNameMarkerTargetVM>();
      this._mission = mission;
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Targets.ApplyActionOnAllItems((Action<MissionNameMarkerTargetVM>) (x => x.RefreshValues()));
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.Targets.ApplyActionOnAllItems((Action<MissionNameMarkerTargetVM>) (x => x.OnFinalize()));
    }

    public void Tick(float dt)
    {
      if (!this.IsTargetsAdded)
      {
        if (this._mission.MainAgent != null)
        {
          if (this._additionalTargetAgents != null)
          {
            foreach (KeyValuePair<Agent, SandBoxUIHelper.IssueQuestFlags> additionalTargetAgent in this._additionalTargetAgents)
            {
              this.AddAgentTarget(additionalTargetAgent.Key, true);
              this.UpdateAdditionalTargetAgentQuestStatus(additionalTargetAgent.Key, additionalTargetAgent.Value);
            }
          }
          if (this._additionalGenericTargets != null)
          {
            foreach (KeyValuePair<string, (Vec3, string, string)> additionalGenericTarget in this._additionalGenericTargets)
              this.AddGenericMarker(additionalGenericTarget.Key, additionalGenericTarget.Value.Item1, additionalGenericTarget.Value.Item2, additionalGenericTarget.Value.Item3);
          }
          foreach (Agent agent in (List<Agent>) this._mission.Agents)
            this.AddAgentTarget(agent);
          if (Hero.MainHero.CurrentSettlement != null)
          {
            List<CommonAreaMarker> list = this._mission.ActiveMissionObjects.FindAllWithType<CommonAreaMarker>().Where<CommonAreaMarker>((Func<CommonAreaMarker, bool>) (x => x.GameEntity.HasTag("alley_marker"))).ToList<CommonAreaMarker>();
            if (Hero.MainHero.CurrentSettlement.Alleys.Count > 0)
            {
              foreach (CommonAreaMarker commonAreaMarker in list)
              {
                Alley alley = commonAreaMarker.GetAlley();
                if (alley != null && alley.Owner != null)
                  this.Targets.Add(new MissionNameMarkerTargetVM(commonAreaMarker));
              }
            }
            foreach (PassageUsePoint passageUsePoint in this._mission.ActiveMissionObjects.FindAllWithType<PassageUsePoint>().ToList<PassageUsePoint>().Where<PassageUsePoint>((Func<PassageUsePoint, bool>) (passage => passage.ToLocation != null && !this.PassagePointFilter.Exists((Predicate<string>) (s => passage.ToLocation.Name.Contains(s))))))
            {
              if (!passageUsePoint.ToLocation.CanBeReserved || passageUsePoint.ToLocation.IsReserved)
                this.Targets.Add(new MissionNameMarkerTargetVM(passageUsePoint));
            }
            if (this._mission.HasMissionBehavior<WorkshopMissionHandler>())
            {
              foreach (Tuple<Workshop, GameEntity> tuple in this._mission.GetMissionBehavior<WorkshopMissionHandler>().WorkshopSignEntities.ToList<Tuple<Workshop, GameEntity>>().Where<Tuple<Workshop, GameEntity>>((Func<Tuple<Workshop, GameEntity>, bool>) (s => s.Item1.WorkshopType != null)))
                this.Targets.Add(new MissionNameMarkerTargetVM(tuple.Item1.WorkshopType, tuple.Item2.GlobalPosition - this._defaultHeightOffset));
            }
          }
        }
        this.IsTargetsAdded = true;
      }
      if (this.IsEnabled)
      {
        this.UpdateTargetScreenPositions();
        this._fadeOutTimerStarted = false;
        this._fadeOutTimer = 0.0f;
        this._prevEnabledState = this.IsEnabled;
      }
      else
      {
        if (this._prevEnabledState)
          this._fadeOutTimerStarted = true;
        if (this._fadeOutTimerStarted)
          this._fadeOutTimer += dt;
        if ((double) this._fadeOutTimer < 2.0)
          this.UpdateTargetScreenPositions();
        else
          this._fadeOutTimerStarted = false;
      }
      this._prevEnabledState = this.IsEnabled;
    }

    private void UpdateTargetScreenPositions()
    {
      foreach (MissionNameMarkerTargetVM target in (Collection<MissionNameMarkerTargetVM>) this.Targets)
      {
        float screenX = -100f;
        float screenY = -100f;
        float w = 0.0f;
        Vec3 vec3 = target.TargetAgent != null ? this._agentHeightOffset : this._defaultHeightOffset;
        double insideUsableArea = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._missionCamera, target.WorldPosition + vec3, ref screenX, ref screenY, ref w);
        if ((double) w > 0.0)
        {
          target.ScreenPosition = new Vec2(screenX, screenY);
          target.Distance = (int) (target.WorldPosition - this._missionCamera.Position).Length;
        }
        else
        {
          target.Distance = -1;
          target.ScreenPosition = new Vec2(-100f, -100f);
        }
      }
      this.Targets.Sort((IComparer<MissionNameMarkerTargetVM>) this._distanceComparer);
    }

    public void OnConversationEnd()
    {
      foreach (Agent agent in (List<Agent>) this._mission.Agents)
        this.AddAgentTarget(agent);
      foreach (MissionNameMarkerTargetVM target in (Collection<MissionNameMarkerTargetVM>) this.Targets)
      {
        if (!target.IsAdditionalTargetAgent)
          target.UpdateQuestStatus();
      }
    }

    public void OnAgentBuild(Agent agent) => this.AddAgentTarget(agent);

    public void OnAgentRemoved(Agent agent) => this.RemoveAgentTarget(agent);

    public void OnAgentDeleted(Agent agent) => this.RemoveAgentTarget(agent);

    public void UpdateAdditionalTargetAgentQuestStatus(
      Agent agent,
      SandBoxUIHelper.IssueQuestFlags issueQuestFlags)
    {
      this.Targets.FirstOrDefault<MissionNameMarkerTargetVM>((Func<MissionNameMarkerTargetVM, bool>) (t => t.TargetAgent == agent))?.UpdateQuestStatus(issueQuestFlags);
    }

    public void AddGenericMarker(
      string markerIdentifier,
      Vec3 markerPosition,
      string name,
      string iconType)
    {
      if (this._genericTargets.TryGetValue(markerIdentifier, out MissionNameMarkerTargetVM _))
      {
        Debug.FailedAssert("Marker with identifier: " + markerIdentifier + " already exists", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\Missions\\NameMarker\\MissionNameMarkerVM.cs", nameof (AddGenericMarker), 229);
      }
      else
      {
        MissionNameMarkerTargetVM nameMarkerTargetVm = new MissionNameMarkerTargetVM(markerPosition, name, iconType);
        this._genericTargets.Add(markerIdentifier, nameMarkerTargetVm);
        this.Targets.Add(nameMarkerTargetVm);
      }
    }

    public void RemoveGenericMarker(string markerIdentifier)
    {
      MissionNameMarkerTargetVM nameMarkerTargetVm;
      if (this._genericTargets.TryGetValue(markerIdentifier, out nameMarkerTargetVm))
      {
        this._genericTargets.Remove(markerIdentifier);
        this.Targets.Remove(nameMarkerTargetVm);
      }
      else
        Debug.FailedAssert("Marker with identifier: " + markerIdentifier + " does not exist", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\Missions\\NameMarker\\MissionNameMarkerVM.cs", nameof (RemoveGenericMarker), 248);
    }

    public void AddAgentTarget(Agent agent, bool isAdditional = false)
    {
      if (agent?.Character == null || agent == Agent.Main || !agent.IsActive() || this.Targets.Any<MissionNameMarkerTargetVM>((Func<MissionNameMarkerTargetVM, bool>) (t => t.TargetAgent == agent)))
        return;
      int num1;
      if (!isAdditional && !agent.Character.IsHero)
      {
        Settlement currentSettlement = Settlement.CurrentSettlement;
        int num2;
        if (currentSettlement == null)
        {
          num2 = 0;
        }
        else
        {
          bool? isVisualTracked = currentSettlement.LocationComplex?.FindCharacter((IAgent) agent)?.IsVisualTracked;
          bool flag = true;
          num2 = isVisualTracked.GetValueOrDefault() == flag & isVisualTracked.HasValue ? 1 : 0;
        }
        if (num2 == 0 && (!(agent.Character is CharacterObject character) || character.Occupation != Occupation.RansomBroker && character.Occupation != Occupation.Tavernkeeper) && agent.Character != Settlement.CurrentSettlement?.Culture?.Blacksmith && agent.Character != Settlement.CurrentSettlement?.Culture?.Barber && agent.Character != Settlement.CurrentSettlement?.Culture?.TavernGamehost)
        {
          num1 = agent.Character.StringId == "sp_hermit" ? 1 : 0;
          goto label_8;
        }
      }
      num1 = 1;
label_8:
      if (num1 == 0)
        return;
      this.Targets.Add(new MissionNameMarkerTargetVM(agent, isAdditional));
    }

    public void RemoveAgentTarget(Agent agent)
    {
      if (this.Targets.SingleOrDefault<MissionNameMarkerTargetVM>((Func<MissionNameMarkerTargetVM, bool>) (t => t.TargetAgent == agent)) == null)
        return;
      this.Targets.Remove(this.Targets.Single<MissionNameMarkerTargetVM>((Func<MissionNameMarkerTargetVM, bool>) (t => t.TargetAgent == agent)));
    }

    private void UpdateTargetStates(bool state)
    {
      foreach (MissionNameMarkerTargetVM target in (Collection<MissionNameMarkerTargetVM>) this.Targets)
        target.IsEnabled = state;
    }

    [DataSourceProperty]
    public MBBindingList<MissionNameMarkerTargetVM> Targets
    {
      get => this._targets;
      set
      {
        if (value == this._targets)
          return;
        this._targets = value;
        this.OnPropertyChangedWithValue<MBBindingList<MissionNameMarkerTargetVM>>(value, nameof (Targets));
      }
    }

    [DataSourceProperty]
    public bool IsEnabled
    {
      get => this._isEnabled;
      set
      {
        if (value == this._isEnabled)
          return;
        this._isEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsEnabled));
        this.UpdateTargetStates(value);
        Game.Current.EventManager.TriggerEvent<MissionNameMarkerToggleEvent>(new MissionNameMarkerToggleEvent(value));
      }
    }

    private class MarkerDistanceComparer : IComparer<MissionNameMarkerTargetVM>
    {
      public int Compare(MissionNameMarkerTargetVM x, MissionNameMarkerTargetVM y)
      {
        return y.Distance.CompareTo(x.Distance);
      }
    }
  }
}
