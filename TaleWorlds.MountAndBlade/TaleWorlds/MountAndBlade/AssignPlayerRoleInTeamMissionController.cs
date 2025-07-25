// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AssignPlayerRoleInTeamMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class AssignPlayerRoleInTeamMissionController : MissionLogic
  {
    private bool _isPlayerSergeant;
    private FormationClass _preassignedFormationClass;
    private List<string> _charactersInPlayerSideByPriority = new List<string>();
    private Queue<string> _characterNamesInPlayerSideByPriorityQueue;
    private List<Formation> _remainingFormationsToAssignSergeantsTo;
    private Dictionary<int, Agent> _formationsLockedWithSergeants;
    private Dictionary<int, Agent> _formationsWithLooselyChosenSergeants;
    private int _playerChosenIndex = -1;

    public event PlayerTurnToChooseFormationToLeadEvent OnPlayerTurnToChooseFormationToLead;

    public event AllFormationsAssignedSergeantsEvent OnAllFormationsAssignedSergeants;

    public bool IsPlayerInArmy { get; }

    public bool IsPlayerGeneral { get; }

    public AssignPlayerRoleInTeamMissionController(
      bool isPlayerGeneral,
      bool isPlayerSergeant,
      bool isPlayerInArmy,
      List<string> charactersInPlayerSideByPriority = null,
      FormationClass preassignedFormationClass = FormationClass.NumberOfRegularFormations)
    {
      this.IsPlayerGeneral = isPlayerGeneral;
      this._isPlayerSergeant = isPlayerSergeant;
      this.IsPlayerInArmy = isPlayerInArmy;
      this._charactersInPlayerSideByPriority = charactersInPlayerSideByPriority;
      this._preassignedFormationClass = preassignedFormationClass;
    }

    public override void AfterStart()
    {
      Mission.Current.PlayerTeam.SetPlayerRole(this.IsPlayerGeneral, this._isPlayerSergeant);
    }

    private Formation ChooseFormationToLead(
      IEnumerable<Formation> formationsToChooseFrom,
      Agent agent)
    {
      bool hasMount = agent.HasMount;
      bool flag = agent.HasRangedWeapon();
      List<Formation> list = formationsToChooseFrom.ToList<Formation>();
      while (list.Count > 0)
      {
        Formation lead = list.MaxBy<Formation, float>((Func<Formation, float>) (ftcf => ftcf.QuerySystem.FormationPower));
        list.Remove(lead);
        if ((flag || !lead.QuerySystem.IsRangedFormation && !lead.QuerySystem.IsRangedCavalryFormation) && (hasMount || !lead.QuerySystem.IsCavalryFormation && !lead.QuerySystem.IsRangedCavalryFormation))
          return lead;
      }
      return (Formation) null;
    }

    private void AssignSergeant(Formation formationToLead, Agent sergeant)
    {
      sergeant.Formation = formationToLead;
      if (!sergeant.IsAIControlled || sergeant == Agent.Main)
        formationToLead.PlayerOwner = sergeant;
      formationToLead.Captain = sergeant;
    }

    public void OnPlayerChoiceMade(int chosenIndex, bool isFinal)
    {
      if (this._playerChosenIndex != chosenIndex)
      {
        this._playerChosenIndex = chosenIndex;
        this._formationsWithLooselyChosenSergeants.Clear();
        List<Formation> list = this.Mission.PlayerTeam.FormationsIncludingEmpty.WhereQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && !this._formationsLockedWithSergeants.ContainsKey(f.Index))).ToList<Formation>();
        if (chosenIndex != -1)
        {
          Formation formation = list.FirstOrDefault<Formation>((Func<Formation, bool>) (fr => fr.Index == chosenIndex));
          this._formationsWithLooselyChosenSergeants.Add(chosenIndex, this.Mission.PlayerTeam.PlayerOrderController.Owner);
          list.Remove(formation);
        }
        Queue<string> stringQueue = new Queue<string>((IEnumerable<string>) this._characterNamesInPlayerSideByPriorityQueue);
        while (list.Count > 0 && stringQueue.Count > 0)
        {
          string nextAgentNameToProcess = stringQueue.Dequeue();
          Agent agent = this.Mission.PlayerTeam.ActiveAgents.FirstOrDefault<Agent>((Func<Agent, bool>) (aa => aa.Character.StringId.Equals(nextAgentNameToProcess)));
          if (agent != null)
          {
            Formation lead = this.ChooseFormationToLead((IEnumerable<Formation>) list, agent);
            if (lead != null)
            {
              this._formationsWithLooselyChosenSergeants.Add(lead.Index, agent);
              list.Remove(lead);
            }
          }
        }
        if (this.OnAllFormationsAssignedSergeants == null)
          return;
        this.OnAllFormationsAssignedSergeants(this._formationsWithLooselyChosenSergeants);
      }
      else
      {
        if (!isFinal)
          return;
        foreach (KeyValuePair<int, Agent> lockedWithSergeant in this._formationsLockedWithSergeants)
          this.AssignSergeant(lockedWithSergeant.Value.Team.GetFormation((FormationClass) lockedWithSergeant.Key), lockedWithSergeant.Value);
        foreach (KeyValuePair<int, Agent> looselyChosenSergeant in this._formationsWithLooselyChosenSergeants)
          this.AssignSergeant(looselyChosenSergeant.Value.Team.GetFormation((FormationClass) looselyChosenSergeant.Key), looselyChosenSergeant.Value);
      }
    }

    public void OnPlayerTeamDeployed()
    {
      if (!MissionGameModels.Current.BattleInitializationModel.CanPlayerSideDeployWithOrderOfBattle())
        return;
      Team playerTeam = Mission.Current.PlayerTeam;
      this._formationsLockedWithSergeants = new Dictionary<int, Agent>();
      this._formationsWithLooselyChosenSergeants = new Dictionary<int, Agent>();
      if (playerTeam.IsPlayerGeneral)
      {
        this._characterNamesInPlayerSideByPriorityQueue = new Queue<string>();
        this._remainingFormationsToAssignSergeantsTo = new List<Formation>();
      }
      else
      {
        this._characterNamesInPlayerSideByPriorityQueue = this._charactersInPlayerSideByPriority != null ? new Queue<string>((IEnumerable<string>) this._charactersInPlayerSideByPriority) : new Queue<string>();
        this._remainingFormationsToAssignSergeantsTo = playerTeam.FormationsIncludingSpecialAndEmpty.WhereQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0)).ToList<Formation>();
        while (this._remainingFormationsToAssignSergeantsTo.Count > 0 && this._characterNamesInPlayerSideByPriorityQueue.Count > 0)
        {
          string nextAgentNameToProcess = this._characterNamesInPlayerSideByPriorityQueue.Dequeue();
          Agent agent = playerTeam.ActiveAgents.FirstOrDefault<Agent>((Func<Agent, bool>) (aa => aa.Character.StringId.Equals(nextAgentNameToProcess)));
          if (agent != null)
          {
            if (agent != Agent.Main)
            {
              Formation lead = this.ChooseFormationToLead((IEnumerable<Formation>) this._remainingFormationsToAssignSergeantsTo, agent);
              if (lead != null)
              {
                this._formationsLockedWithSergeants.Add(lead.Index, agent);
                this._remainingFormationsToAssignSergeantsTo.Remove(lead);
              }
            }
            else
              break;
          }
        }
      }
      PlayerTurnToChooseFormationToLeadEvent chooseFormationToLead = this.OnPlayerTurnToChooseFormationToLead;
      if (chooseFormationToLead == null)
        return;
      chooseFormationToLead(this._formationsLockedWithSergeants, this._remainingFormationsToAssignSergeantsTo.Select<Formation, int>((Func<Formation, int>) (ftcsf => ftcsf.Index)).ToList<int>());
    }

    public override void OnTeamDeployed(Team team)
    {
      base.OnTeamDeployed(team);
      if (team != this.Mission.PlayerTeam)
        return;
      team.PlayerOrderController.Owner = Agent.Main;
      if (team.IsPlayerGeneral)
      {
        foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
          formation.PlayerOwner = Agent.Main;
      }
      team.PlayerOrderController.SelectAllFormations();
    }

    public void OnPlayerChoiceMade(
      FormationClass chosenFormationClass,
      FormationAI.BehaviorSide formationBehaviorSide = FormationAI.BehaviorSide.Middle)
    {
      Team playerTeam = this.Mission.PlayerTeam;
      Formation formation = playerTeam.FormationsIncludingEmpty.WhereQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.PhysicalClass == chosenFormationClass && f.AI.Side == formationBehaviorSide)).MaxBy<Formation, float>((Func<Formation, float>) (f => f.QuerySystem.FormationPower));
      if (playerTeam.IsPlayerSergeant)
      {
        formation.PlayerOwner = Agent.Main;
        formation.SetControlledByAI(false);
      }
      if (formation != null && formation != Agent.Main.Formation)
      {
        MBTextManager.SetTextVariable("SIDE_STRING", formation.AI.Side.ToString(), false);
        MBTextManager.SetTextVariable("CLASS_NAME", formation.PhysicalClass.GetName(), false);
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_formation_soldier_join_text"));
      }
      Agent.Main.Formation = formation;
      playerTeam.TriggerOnFormationsChanged(formation);
    }
  }
}
