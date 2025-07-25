// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.Towns.PrisonBreakMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.CampaignBehaviors;
using SandBox.Missions.AgentBehaviors;
using SandBox.Objects.AnimationPoints;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace SandBox.Missions.MissionLogics.Towns
{
  public class PrisonBreakMissionController : MissionLogic
  {
    private const int PrisonerSwitchToAlarmedDistance = 3;
    private readonly CharacterObject _prisonerCharacter;
    private readonly CharacterObject _companionCharacter;
    private List<Agent> _guardAgents;
    private List<Agent> _agentsToRemove;
    private Agent _prisonerAgent;
    private List<AreaMarker> _areaMarkers;
    private bool _isPrisonerFollowing;

    public PrisonBreakMissionController(
      CharacterObject prisonerCharacter,
      CharacterObject companionCharacter)
    {
      this._prisonerCharacter = prisonerCharacter;
      this._companionCharacter = companionCharacter;
    }

    public override void OnCreated()
    {
      base.OnCreated();
      this.Mission.DoesMissionRequireCivilianEquipment = true;
    }

    public override void OnBehaviorInitialize()
    {
      this.Mission.IsAgentInteractionAllowed_AdditionalCondition += new Func<bool>(this.IsAgentInteractionAllowed_AdditionalCondition);
    }

    public override void AfterStart()
    {
      this._isPrisonerFollowing = true;
      MBTextManager.SetTextVariable("IS_PRISONER_FOLLOWING", this._isPrisonerFollowing ? 1 : 0);
      this.Mission.SetMissionMode(MissionMode.Stealth, true);
      this.Mission.IsInventoryAccessible = false;
      this.Mission.IsQuestScreenAccessible = true;
      PlayerEncounter.LocationEncounter.AddAccompanyingCharacter(LocationComplex.Current.GetFirstLocationCharacterOfCharacter(this._prisonerCharacter), true);
      this._areaMarkers = this.Mission.ActiveMissionObjects.FindAllWithType<AreaMarker>().OrderBy<AreaMarker, int>((Func<AreaMarker, int>) (area => area.AreaIndex)).ToList<AreaMarker>();
      MissionAgentHandler missionBehavior = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      foreach (UsableMachine townPassageProp in missionBehavior.TownPassageProps)
        townPassageProp.Deactivate();
      missionBehavior.SpawnPlayer(this.Mission.DoesMissionRequireCivilianEquipment, true);
      missionBehavior.SpawnLocationCharacters();
      this.ArrangeGuardCount();
      this._prisonerAgent = this.Mission.Agents.First<Agent>((Func<Agent, bool>) (x => x.Character == this._prisonerCharacter));
      this.PreparePrisonAgent();
      missionBehavior.SimulateAgent(this._prisonerAgent);
      for (int index = 0; index < this._guardAgents.Count; ++index)
      {
        Agent guardAgent = this._guardAgents[index];
        guardAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SpecialTargetTag = this._areaMarkers[index % this._areaMarkers.Count].Tag;
        missionBehavior.SimulateAgent(guardAgent);
      }
      this.SetTeams();
    }

    public override void OnMissionTick(float dt)
    {
      SandBoxHelpers.MissionHelper.FadeOutAgents((IEnumerable<Agent>) this._agentsToRemove, true, true);
      this._agentsToRemove.Clear();
      if (this._prisonerAgent == null)
        return;
      this.CheckPrisonerSwitchToAlarmState();
    }

    public override void OnObjectUsed(Agent userAgent, UsableMissionObject usedObject)
    {
      if (this._guardAgents == null || !(usedObject is AnimationPoint) || !this._guardAgents.Contains(userAgent))
        return;
      userAgent.StopUsingGameObject();
    }

    public override void OnAgentInteraction(Agent userAgent, Agent agent)
    {
      if (userAgent != Agent.Main || agent != this._prisonerAgent)
        return;
      this.SwitchPrisonerFollowingState();
    }

    public override bool IsThereAgentAction(Agent userAgent, Agent otherAgent)
    {
      return userAgent == Agent.Main && otherAgent == this._prisonerAgent;
    }

    private void PreparePrisonAgent()
    {
      this._prisonerAgent.Health = this._prisonerAgent.HealthLimit;
      this._prisonerAgent.Defensiveness = 2f;
      AgentNavigator agentNavigator = this._prisonerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator;
      agentNavigator.RemoveBehaviorGroup<AlarmedBehaviorGroup>();
      agentNavigator.SpecialTargetTag = "sp_prison_break_prisoner";
      MissionWeapon weapon = new MissionWeapon(Items.All.Where<ItemObject>((Func<ItemObject, bool>) (x => x.IsCraftedWeapon && x.Type == ItemObject.ItemTypeEnum.OneHandedWeapon && x.WeaponComponent.GetItemType() == ItemObject.ItemTypeEnum.OneHandedWeapon && x.IsCivilian)).MinBy<ItemObject, int>((Func<ItemObject, int>) (x => x.Value)), (ItemModifier) null, this._prisonerCharacter.HeroObject.ClanBanner);
      this._prisonerAgent.EquipWeaponWithNewEntity(EquipmentIndex.WeaponItemBeginSlot, ref weapon);
    }

    public override void OnAgentAlarmedStateChanged(Agent agent, Agent.AIStateFlag flag)
    {
      if (agent == this._prisonerAgent && flag != Agent.AIStateFlag.Cautious)
        this.SwitchPrisonerFollowingState(true);
      this.UpdateDoorPermission();
    }

    private void ArrangeGuardCount()
    {
      int num1 = 2 + Settlement.CurrentSettlement.Town.GetWallLevel();
      float security = Settlement.CurrentSettlement.Town.Security;
      if ((double) security < 40.0)
        --num1;
      else if ((double) security > 70.0)
        ++num1;
      this._guardAgents = this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (x => x.Character is CharacterObject character && character.IsSoldier)).ToList<Agent>();
      this._agentsToRemove = new List<Agent>();
      int count1 = this._guardAgents.Count;
      if (count1 > num1)
      {
        int num2 = count1 - num1;
        for (int index = 0; index < count1 && num2 > 0; ++index)
        {
          Agent guardAgent = this._guardAgents[index];
          if (!guardAgent.Character.IsHero)
          {
            this._agentsToRemove.Add(guardAgent);
            --num2;
          }
        }
      }
      else if (count1 < num1)
      {
        List<LocationCharacter> list = LocationComplex.Current.GetListOfCharactersInLocation("prison").Where<LocationCharacter>((Func<LocationCharacter, bool>) (x => !x.Character.IsHero && x.Character.IsSoldier)).ToList<LocationCharacter>();
        if (list.IsEmpty<LocationCharacter>())
        {
          AgentData agentData = GuardsCampaignBehavior.PrepareGuardAgentDataFromGarrison(PlayerEncounter.LocationEncounter.Settlement.Culture.Guard, true);
          LocationCharacter locationCharacter = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddStandGuardBehaviors), "sp_guard", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_guard"), false);
          list.Add(locationCharacter);
        }
        int count2 = list.Count;
        Location locationWithId = LocationComplex.Current.GetLocationWithId("prison");
        int num3 = num1 - count1;
        for (int index = 0; index < num3; ++index)
        {
          LocationCharacter locationCharacter = list[index % count2];
          LocationComplex.Current.ChangeLocation(new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) locationCharacter.Character, banner: locationCharacter.AgentData.AgentOrigin.Banner)).Equipment(locationCharacter.AgentData.AgentOverridenEquipment).Monster(locationCharacter.AgentData.AgentMonster).NoHorses(true), locationCharacter.AddBehaviors, this._areaMarkers[index % this._areaMarkers.Count].Tag, true, LocationCharacter.CharacterRelations.Enemy, locationCharacter.ActionSetCode, locationCharacter.UseCivilianEquipment), (Location) null, locationWithId);
        }
      }
      this._guardAgents = this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (x => x.Character is CharacterObject && x.Character.IsSoldier && !this._agentsToRemove.Contains(x))).ToList<Agent>();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      if (this._guardAgents.Contains(affectedAgent))
      {
        this._guardAgents.Remove(affectedAgent);
        this.UpdateDoorPermission();
        if (this._prisonerAgent == null)
          return;
        this._prisonerAgent.SetAgentFlags(this._prisonerAgent.GetAgentFlags() & ~AgentFlag.CanGetAlarmed);
      }
      else
      {
        if (this._prisonerAgent != affectedAgent)
          return;
        this._prisonerAgent = (Agent) null;
      }
    }

    private void CheckPrisonerSwitchToAlarmState()
    {
      foreach (Agent guardAgent in this._guardAgents)
      {
        if ((double) this._prisonerAgent.Position.DistanceSquared(guardAgent.Position) < 3.0)
          this._prisonerAgent.SetAgentFlags(this._prisonerAgent.GetAgentFlags() | AgentFlag.CanGetAlarmed);
      }
    }

    private void SwitchPrisonerFollowingState(bool forceFollow = false)
    {
      this._isPrisonerFollowing = forceFollow || !this._isPrisonerFollowing;
      MBTextManager.SetTextVariable("IS_PRISONER_FOLLOWING", this._isPrisonerFollowing ? 1 : 0);
      FollowAgentBehavior behavior = this._prisonerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>().GetBehavior<FollowAgentBehavior>();
      if (this._isPrisonerFollowing)
      {
        this._prisonerAgent.SetCrouchMode(false);
        behavior.SetTargetAgent(Agent.Main);
        this._prisonerAgent.SetAgentFlags(this._prisonerAgent.GetAgentFlags() & ~AgentFlag.CanGetAlarmed);
      }
      else
      {
        behavior.SetTargetAgent((Agent) null);
        this._prisonerAgent.SetCrouchMode(true);
      }
      this._prisonerAgent.AIStateFlags = Agent.AIStateFlag.None;
    }

    public override InquiryData OnEndMissionRequest(out bool canLeave)
    {
      canLeave = Agent.Main == null || !Agent.Main.IsActive() || this._guardAgents.IsEmpty<Agent>() || this._guardAgents.All<Agent>((Func<Agent, bool>) (x => !x.IsActive()));
      if (!canLeave)
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_can_not_retreat"));
      return (InquiryData) null;
    }

    private void SetTeams()
    {
      this.Mission.PlayerTeam.SetIsEnemyOf(this.Mission.PlayerEnemyTeam, true);
      this._prisonerAgent.SetTeam(this.Mission.PlayerTeam, true);
      if (this._companionCharacter != null)
        this.Mission.Agents.First<Agent>((Func<Agent, bool>) (x => x.Character == this._companionCharacter)).SetTeam(this.Mission.PlayerTeam, true);
      foreach (Agent guardAgent in this._guardAgents)
      {
        guardAgent.SetTeam(this.Mission.PlayerEnemyTeam, true);
        guardAgent.SetAgentFlags((guardAgent.GetAgentFlags() | AgentFlag.CanGetAlarmed) & ~AgentFlag.CanRetreat);
      }
    }

    protected override void OnEndMission()
    {
      if (PlayerEncounter.LocationEncounter.CharactersAccompanyingPlayer.Any<AccompanyingCharacter>((Func<AccompanyingCharacter, bool>) (x => x.LocationCharacter.Character == this._prisonerCharacter)))
        PlayerEncounter.LocationEncounter.RemoveAccompanyingCharacter(this._prisonerCharacter.HeroObject);
      if (Agent.Main == null || !Agent.Main.IsActive())
        GameMenu.SwitchToMenu("settlement_prison_break_fail_player_unconscious");
      else if (this._prisonerAgent == null || !this._prisonerAgent.IsActive())
        GameMenu.SwitchToMenu("settlement_prison_break_fail_prisoner_unconscious");
      else
        GameMenu.SwitchToMenu("settlement_prison_break_success");
      Campaign.Current.GameMenuManager.NextLocation = (Location) null;
      Campaign.Current.GameMenuManager.PreviousLocation = (Location) null;
      this.Mission.IsAgentInteractionAllowed_AdditionalCondition -= new Func<bool>(this.IsAgentInteractionAllowed_AdditionalCondition);
    }

    private void UpdateDoorPermission()
    {
      bool flag = this._guardAgents.IsEmpty<Agent>() || this._guardAgents.All<Agent>((Func<Agent, bool>) (x => x.CurrentWatchState != Agent.WatchState.Alarmed));
      foreach (UsableMachine townPassageProp in this.Mission.GetMissionBehavior<MissionAgentHandler>().TownPassageProps)
      {
        if (flag)
          townPassageProp.Activate();
        else
          townPassageProp.Deactivate();
      }
    }

    private bool IsAgentInteractionAllowed_AdditionalCondition() => true;
  }
}
