// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.ChangeLocationBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using SandBox.Objects.Usables;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class ChangeLocationBehavior : AgentBehavior
  {
    private readonly MissionAgentHandler _missionAgentHandler;
    private readonly float _initializeTime;
    private Passage _selectedDoor;

    public ChangeLocationBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      this._initializeTime = this.Mission.CurrentTime;
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this._selectedDoor == null)
      {
        Passage passage = this.SelectADoor();
        if (passage == null)
          return;
        this._selectedDoor = passage;
        this.Navigator.SetTarget((UsableMachine) this._selectedDoor);
      }
      else
      {
        if (this._selectedDoor.ToLocation.CharacterCount < this._selectedDoor.ToLocation.ProsperityMax)
          return;
        this.Navigator.SetTarget((UsableMachine) null);
        this.Navigator.ForceThink(0.0f);
        this._selectedDoor = (Passage) null;
      }
    }

    private Passage SelectADoor()
    {
      Passage passage = (Passage) null;
      List<Passage> passageList = new List<Passage>();
      foreach (Passage townPassageProp in this._missionAgentHandler.TownPassageProps)
      {
        if (townPassageProp.GetVacantStandingPointForAI(this.OwnerAgent) != null && townPassageProp.ToLocation.CharacterCount < townPassageProp.ToLocation.ProsperityMax)
          passageList.Add(townPassageProp);
      }
      if (passageList.Count > 0)
        passage = passageList[MBRandom.RandomInt(passageList.Count)];
      return passage;
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this._selectedDoor = (Passage) null;
    }

    protected override void OnDeactivate()
    {
      base.OnDeactivate();
      this._selectedDoor = (Passage) null;
    }

    public override string GetDebugInfo()
    {
      return this._selectedDoor != null ? "Go to " + this._selectedDoor.ToLocation.StringId : "Change Location no target";
    }

    public override float GetAvailability(bool isSimulation)
    {
      float availability = 0.0f;
      bool flag1 = false;
      bool flag2 = false;
      LocationCharacter locationCharacter = CampaignMission.Current.Location.GetLocationCharacter(this.OwnerAgent.Origin);
      if ((double) this.Mission.CurrentTime < 5.0 || locationCharacter.FixedLocation || !this._missionAgentHandler.HasPassages())
        return 0.0f;
      foreach (UsableMachine townPassageProp in this._missionAgentHandler.TownPassageProps)
      {
        Passage passage = townPassageProp as Passage;
        if (passage.ToLocation.CanAIEnter(locationCharacter) && passage.ToLocation.CharacterCount < passage.ToLocation.ProsperityMax)
        {
          flag1 = true;
          if ((double) passage.PilotStandingPoint.GameEntity.GetGlobalFrame().origin.Distance(this.OwnerAgent.Position) < 1.0)
          {
            flag2 = true;
            break;
          }
        }
      }
      if (flag1)
      {
        if (!flag2)
          availability = CampaignMission.Current.Location.IsIndoor ? 0.1f : 0.05f;
        else if ((double) this.Mission.CurrentTime - (double) this._initializeTime > 10.0)
          availability = 0.01f;
      }
      return availability;
    }
  }
}
