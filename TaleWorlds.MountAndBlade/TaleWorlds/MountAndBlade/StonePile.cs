// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StonePile
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StonePile : UsableMachine, IDetachment
  {
    private static readonly ActionIndexCache act_pickup_boulder_begin = ActionIndexCache.Create(nameof (act_pickup_boulder_begin));
    private static readonly ActionIndexCache act_pickup_boulder_end = ActionIndexCache.Create(nameof (act_pickup_boulder_end));
    private const string ThrowingTargetTag = "throwing_target";
    private const string ThrowingPointTag = "throwing";
    private const string WaitingPointTag = "wait_to_throw";
    private const float EnemyInRangeTimerDuration = 0.5f;
    private const float EnemyWaitTimeLimit = 3f;
    private const float ThrowingTargetRadius = 1.31f;
    public int StartingAmmoCount = 12;
    public string GivenItemID;
    [EditableScriptComponentVariable(true)]
    private float _givenItemRange = 15f;
    private ItemObject _givenItem;
    private List<GameEntity> _throwingTargets;
    private List<StonePile.ThrowingPoint> _throwingPoints;
    private List<StonePile.VolumeBoxTimerPair> _volumeBoxTimerPairs;
    private Timer _tickOccasionallyTimer;

    public int AmmoCount { get; protected set; }

    public bool HasThrowingPointUsed
    {
      get
      {
        foreach (StonePile.ThrowingPoint throwingPoint in this._throwingPoints)
        {
          if (throwingPoint.StandingPoint.HasUser || throwingPoint.StandingPoint.HasAIMovingTo || throwingPoint.WaitingPoint != null && (throwingPoint.WaitingPoint.HasUser || throwingPoint.WaitingPoint.HasAIMovingTo))
            return true;
        }
        return false;
      }
    }

    public virtual BattleSideEnum Side => BattleSideEnum.Defender;

    public override int MaxUserCount => this._throwingPoints.Count;

    protected StonePile()
    {
    }

    protected void ConsumeAmmo()
    {
      --this.AmmoCount;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetStonePileAmmo(this.Id, this.AmmoCount));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.UpdateAmmoMesh();
      this.CheckAmmo();
    }

    public void SetAmmo(int ammoLeft)
    {
      if (this.AmmoCount == ammoLeft)
        return;
      this.AmmoCount = ammoLeft;
      this.UpdateAmmoMesh();
      this.CheckAmmo();
    }

    protected virtual void CheckAmmo()
    {
      if (this.AmmoCount > 0)
        return;
      foreach (UsableMissionObject ammoPickUpPoint in this.AmmoPickUpPoints)
        ammoPickUpPoint.IsDeactivated = true;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._tickOccasionallyTimer = new Timer(Mission.Current.CurrentTime, (float) (0.5 + (double) MBRandom.RandomFloat * 0.5));
      this._givenItem = Game.Current.ObjectManager.GetObject<ItemObject>(this.GivenItemID);
      MBList<VolumeBox> source = this.GameEntity.CollectObjects<VolumeBox>();
      this._throwingPoints = new List<StonePile.ThrowingPoint>();
      this._volumeBoxTimerPairs = new List<StonePile.VolumeBoxTimerPair>();
      foreach (StandingPointWithWeaponRequirement weaponRequirement in this.StandingPoints.OfType<StandingPointWithWeaponRequirement>())
      {
        if (weaponRequirement.GameEntity.HasTag(this.AmmoPickUpTag))
        {
          weaponRequirement.InitGivenWeapon(this._givenItem);
          weaponRequirement.SetHasAlternative(true);
          weaponRequirement.AddComponent((UsableMissionObjectComponent) new ResetAnimationOnStopUsageComponent(ActionIndexCache.act_none));
        }
        else if (weaponRequirement.GameEntity.HasTag("throwing"))
        {
          weaponRequirement.InitRequiredWeapon(this._givenItem);
          StonePile.ThrowingPoint throwingPoint = new StonePile.ThrowingPoint();
          throwingPoint.StandingPoint = weaponRequirement as StandingPointWithVolumeBox;
          throwingPoint.AmmoPickUpPoint = (StandingPointWithWeaponRequirement) null;
          throwingPoint.AttackEntity = (GameEntity) null;
          throwingPoint.AttackEntityNearbyAgentsCheckRadius = 0.0f;
          List<StandingPointWithWeaponRequirement> weaponRequirementList = weaponRequirement.GameEntity.CollectObjectsWithTag<StandingPointWithWeaponRequirement>("wait_to_throw");
          if (weaponRequirementList != null && weaponRequirementList.Count > 0)
          {
            throwingPoint.WaitingPoint = weaponRequirementList[0];
            throwingPoint.WaitingPoint.InitRequiredWeapon(this._givenItem);
          }
          else
            throwingPoint.WaitingPoint = (StandingPointWithWeaponRequirement) null;
          bool flag = false;
          for (int index = 0; index < this._volumeBoxTimerPairs.Count && !flag; ++index)
          {
            if (this._volumeBoxTimerPairs[index].VolumeBox.GameEntity.HasTag(throwingPoint.StandingPoint.VolumeBoxTag))
            {
              throwingPoint.EnemyInRangeTimer = this._volumeBoxTimerPairs[index].Timer;
              flag = true;
            }
          }
          if (!flag)
          {
            VolumeBox volumeBox = source.FirstOrDefault<VolumeBox>((Func<VolumeBox, bool>) (vb => vb.GameEntity.HasTag(throwingPoint.StandingPoint.VolumeBoxTag)));
            StonePile.VolumeBoxTimerPair volumeBoxTimerPair = new StonePile.VolumeBoxTimerPair();
            volumeBoxTimerPair.VolumeBox = volumeBox;
            volumeBoxTimerPair.Timer = new Timer(-3.5f, 0.5f, false);
            throwingPoint.EnemyInRangeTimer = volumeBoxTimerPair.Timer;
            this._volumeBoxTimerPairs.Add(volumeBoxTimerPair);
          }
          this._throwingPoints.Add(throwingPoint);
        }
      }
      this.EnemyRangeToStopUsing = 5f;
      this.AmmoCount = this.StartingAmmoCount;
      this.UpdateAmmoMesh();
      this.SetScriptComponentToTick(this.GetTickRequirement());
      this._throwingTargets = this.Scene.FindEntitiesWithTag("throwing_target").ToList<GameEntity>();
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      this.AmmoCount = this.StartingAmmoCount;
      this.UpdateAmmoMesh();
      foreach (UsableMissionObject ammoPickUpPoint in this.AmmoPickUpPoints)
        ammoPickUpPoint.IsDeactivated = false;
      foreach (StonePile.VolumeBoxTimerPair volumeBoxTimerPair in this._volumeBoxTimerPairs)
        volumeBoxTimerPair.Timer.Reset(-3.5f);
      foreach (StonePile.ThrowingPoint throwingPoint in this._throwingPoints)
        throwingPoint.AmmoPickUpPoint = (StandingPointWithWeaponRequirement) null;
    }

    public override void AfterMissionStart()
    {
      if (this.AmmoPickUpPoints != null)
      {
        foreach (UsableMissionObject ammoPickUpPoint in this.AmmoPickUpPoints)
          ammoPickUpPoint.LockUserFrames = true;
      }
      if (this._throwingPoints == null)
        return;
      foreach (StonePile.ThrowingPoint throwingPoint in this._throwingPoints)
      {
        throwingPoint.StandingPoint.IsDisabledForPlayers = true;
        throwingPoint.StandingPoint.LockUserFrames = false;
        throwingPoint.StandingPoint.LockUserPositions = true;
      }
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      if (!usableGameObject.GameEntity.HasTag(this.AmmoPickUpTag))
        return TextObject.Empty;
      TextObject forStandingPoint = new TextObject("{=jfcceEoE}{PILE_TYPE} Pile");
      forStandingPoint.SetTextVariable("PILE_TYPE", new TextObject("{=1CPdu9K0}Stone"));
      return forStandingPoint;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      if (!gameEntity.HasTag(this.AmmoPickUpTag))
        return string.Empty;
      TextObject textObject = new TextObject("{=bNYm3K6b}{KEY} Pick Up");
      textObject.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return textObject.ToString();
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new StonePileAI(this);
    }

    public override bool IsInRangeToCheckAlternativePoints(Agent agent)
    {
      float num = this.StandingPoints.Count > 0 ? agent.GetInteractionDistanceToUsable((IUsable) this.StandingPoints[0]) + 2f : 2f;
      return (double) this.GameEntity.GlobalPosition.DistanceSquared(agent.Position) < (double) num * (double) num;
    }

    public override StandingPoint GetBestPointAlternativeTo(
      StandingPoint standingPoint,
      Agent agent)
    {
      if (!this.AmmoPickUpPoints.Contains(standingPoint))
        return standingPoint;
      Vec3 globalPosition = standingPoint.GameEntity.GlobalPosition;
      float num1 = globalPosition.DistanceSquared(agent.Position);
      StandingPoint pointAlternativeTo = standingPoint;
      foreach (StandingPoint ammoPickUpPoint in this.AmmoPickUpPoints)
      {
        globalPosition = ammoPickUpPoint.GameEntity.GlobalPosition;
        float num2 = globalPosition.DistanceSquared(agent.Position);
        if ((double) num2 < (double) num1 && (!ammoPickUpPoint.HasUser && !ammoPickUpPoint.HasAIMovingTo || ammoPickUpPoint.IsInstantUse) && !ammoPickUpPoint.IsDeactivated && !ammoPickUpPoint.IsDisabledForAgent(agent))
        {
          num1 = num2;
          pointAlternativeTo = ammoPickUpPoint;
        }
      }
      return pointAlternativeTo;
    }

    private void TickOccasionally()
    {
      if (GameNetwork.IsClientOrReplay)
        return;
      if (this.AmmoCount <= 0 && !this.HasThrowingPointUsed)
        this.ReleaseAllUserAgentsAndFormations(BattleSideEnum.None, true);
      else if (this.IsDisabledForBattleSideAI(this.Side))
      {
        this.ReleaseAllUserAgentsAndFormations(this.Side, false);
      }
      else
      {
        bool flag = this._volumeBoxTimerPairs.Count == 0;
        foreach (StonePile.VolumeBoxTimerPair volumeBoxTimerPair in this._volumeBoxTimerPairs)
        {
          if (volumeBoxTimerPair.VolumeBox.HasAgentsInAttackerSide())
          {
            flag = true;
            if ((double) volumeBoxTimerPair.Timer.ElapsedTime() > 3.5)
              volumeBoxTimerPair.Timer.Reset(Mission.Current.CurrentTime);
            else
              volumeBoxTimerPair.Timer.Reset(Mission.Current.CurrentTime - 0.5f);
          }
        }
        MBReadOnlyList<Formation> userFormations = this.UserFormations;
        if (flag && userFormations.CountQ<Formation>((Func<Formation, bool>) (f => f.Team.Side == this.Side)) == 0)
        {
          float minDistanceSquared = float.MaxValue;
          Formation bestFormation = (Formation) null;
          foreach (Team team in (List<Team>) Mission.Current.Teams)
          {
            if (team.Side == this.Side)
            {
              foreach (Formation formation1 in (List<Formation>) team.FormationsIncludingEmpty)
              {
                Formation formation = formation1;
                if (formation.CountOfUnits > 0 && formation.CountOfUnitsWithoutLooseDetachedOnes >= this.MaxUserCount && formation.CountOfUnitsWithoutLooseDetachedOnes > 0)
                  formation.ApplyActionOnEachUnit((Action<Agent>) (agent =>
                  {
                    float num = agent.Position.DistanceSquared(this.GameEntity.GlobalPosition);
                    if ((double) minDistanceSquared <= (double) num)
                      return;
                    minDistanceSquared = num;
                    bestFormation = formation;
                  }));
              }
            }
          }
          Formation formation2 = bestFormation;
          if (formation2 == null)
            return;
          formation2.StartUsingMachine((UsableMachine) this);
        }
        else if (!flag)
        {
          if (userFormations.Count <= 0)
            return;
          this.ReleaseAllUserAgentsAndFormations(BattleSideEnum.None, true);
        }
        else if (userFormations.All<Formation>((Func<Formation, bool>) (f => f.Team.Side == this.Side && f.UnitsWithoutLooseDetachedOnes.Count == 0)) && this.StandingPoints.Count<StandingPoint>((Func<StandingPoint, bool>) (sp => sp.HasUser || sp.HasAIMovingTo)) == 0)
          this.ReleaseAllUserAgentsAndFormations(BattleSideEnum.None, true);
        else
          this.UpdateThrowingPointAttackEntities();
      }
    }

    private void ReleaseAllUserAgentsAndFormations(
      BattleSideEnum sideFilterForAIControlledAgents,
      bool disableForNonAIControlledAgents)
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        Agent agent = standingPoint.HasUser ? standingPoint.UserAgent : (standingPoint.HasAIMovingTo ? standingPoint.MovingAgent : (Agent) null);
        if (agent != null)
        {
          if (agent.IsAIControlled)
          {
            if (sideFilterForAIControlledAgents != BattleSideEnum.None)
            {
              Team team = agent.Team;
              // ISSUE: explicit non-virtual call
              if ((team != null ? (__nonvirtual (team.Side) == sideFilterForAIControlledAgents ? 1 : 0) : 0) != 0)
                goto label_7;
            }
            else
              goto label_7;
          }
          if (!(!agent.IsAIControlled & disableForNonAIControlledAgents))
            continue;
label_7:
          if (agent.GetWieldedItemIndex(Agent.HandIndex.MainHand) == EquipmentIndex.ExtraWeaponSlot && agent.Equipment[EquipmentIndex.ExtraWeaponSlot].Item == this._givenItem)
            agent.DropItem(EquipmentIndex.ExtraWeaponSlot);
          this.Ai.StopUsingStandingPoint(standingPoint);
        }
      }
      MBReadOnlyList<Formation> userFormations = this.UserFormations;
      for (int index = userFormations.Count - 1; index >= 0; --index)
      {
        Formation formation = userFormations[index];
        if (formation.Team.Side == this.Side)
          formation.StopUsingMachine((UsableMachine) this);
      }
    }

    private void UpdateThrowingPointAttackEntities()
    {
      bool flag1 = false;
      List<GameEntity> gameEntityList = (List<GameEntity>) null;
      foreach (StonePile.ThrowingPoint throwingPoint1 in this._throwingPoints)
      {
        if (throwingPoint1.StandingPoint.HasAIUser)
        {
          if (!flag1)
          {
            gameEntityList = this.GetEnemySiegeWeapons();
            flag1 = true;
            if (gameEntityList == null)
            {
              foreach (StonePile.ThrowingPoint throwingPoint2 in this._throwingPoints)
              {
                throwingPoint2.AttackEntity = (GameEntity) null;
                throwingPoint2.AttackEntityNearbyAgentsCheckRadius = 0.0f;
              }
              if (this._throwingTargets.Count == 0)
                break;
            }
          }
          Agent userAgent = throwingPoint1.StandingPoint.UserAgent;
          GameEntity attackEntity = throwingPoint1.AttackEntity;
          if ((NativeObject) attackEntity != (NativeObject) null)
          {
            bool flag2 = false;
            if (!this.CanShootAtEntity(userAgent, attackEntity))
              flag2 = true;
            else if (this._throwingTargets.Contains(attackEntity))
              flag2 = !throwingPoint1.CanUseAttackEntity();
            else if (!gameEntityList.Contains(attackEntity))
              flag2 = true;
            if (flag2)
            {
              throwingPoint1.AttackEntity = (GameEntity) null;
              throwingPoint1.AttackEntityNearbyAgentsCheckRadius = 0.0f;
            }
          }
          if ((NativeObject) throwingPoint1.AttackEntity == (NativeObject) null)
          {
            bool flag3 = false;
            if (this._throwingTargets.Count > 0)
            {
              foreach (GameEntity throwingTarget in this._throwingTargets)
              {
                if ((NativeObject) attackEntity != (NativeObject) throwingTarget && this.CanShootAtEntity(userAgent, throwingTarget, true))
                {
                  throwingPoint1.AttackEntity = throwingTarget;
                  throwingPoint1.AttackEntityNearbyAgentsCheckRadius = 1.31f;
                  flag3 = true;
                  break;
                }
              }
            }
            if (!flag3 && gameEntityList != null)
            {
              foreach (GameEntity entity in gameEntityList)
              {
                if ((NativeObject) attackEntity != (NativeObject) entity && this.CanShootAtEntity(userAgent, entity))
                {
                  throwingPoint1.AttackEntity = entity;
                  throwingPoint1.AttackEntityNearbyAgentsCheckRadius = 0.0f;
                  break;
                }
              }
            }
          }
        }
        else
          throwingPoint1.AttackEntity = (GameEntity) null;
      }
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!GameNetwork.IsClientOrReplay && this._tickOccasionallyTimer.Check(Mission.Current.CurrentTime))
        this.TickOccasionally();
      if (GameNetwork.IsClientOrReplay)
        return;
      StandingPoint.StackArray8StandingPoint array8StandingPoint = new StandingPoint.StackArray8StandingPoint();
      int num1 = 0;
      Agent.StackArray8Agent stackArray8Agent = new Agent.StackArray8Agent();
      int num2 = 0;
      foreach (StandingPoint ammoPickUpPoint in this.AmmoPickUpPoints)
      {
        if (ammoPickUpPoint.HasUser)
        {
          ActionIndexValueCache currentActionValue = ammoPickUpPoint.UserAgent.GetCurrentActionValue(1);
          if (!(currentActionValue == StonePile.act_pickup_boulder_begin))
          {
            if (currentActionValue == StonePile.act_pickup_boulder_end)
            {
              MissionWeapon weapon = new MissionWeapon(this._givenItem, (ItemModifier) null, (Banner) null, (short) 1);
              Agent userAgent = ammoPickUpPoint.UserAgent;
              userAgent.EquipWeaponToExtraSlotAndWield(ref weapon);
              this.Ai.StopUsingStandingPoint(ammoPickUpPoint);
              this.ConsumeAmmo();
              if (userAgent.IsAIControlled)
                stackArray8Agent[num2++] = userAgent;
            }
            else if (!ammoPickUpPoint.UserAgent.SetActionChannel(1, StonePile.act_pickup_boulder_begin))
              this.Ai.StopUsingStandingPoint(ammoPickUpPoint);
          }
        }
        if (ammoPickUpPoint.HasAIUser || ammoPickUpPoint.HasAIMovingTo)
          array8StandingPoint[num1++] = ammoPickUpPoint;
      }
      StonePile.ThrowingPoint.StackArray8ThrowingPoint array8ThrowingPoint = new StonePile.ThrowingPoint.StackArray8ThrowingPoint();
      int num3 = 0;
      foreach (StonePile.ThrowingPoint throwingPoint in this._throwingPoints)
      {
        throwingPoint.AmmoPickUpPoint = (StandingPointWithWeaponRequirement) null;
        if ((NativeObject) throwingPoint.AttackEntity != (NativeObject) null || throwingPoint.EnemyInRangeTimer.Check(Mission.Current.CurrentTime) && (double) throwingPoint.EnemyInRangeTimer.ElapsedTime() < 3.5)
        {
          if (!this.UpdateThrowingPointIfHasAnyInteractingAgent(throwingPoint))
            array8ThrowingPoint[num3++] = throwingPoint;
        }
        else
        {
          throwingPoint.StandingPoint.IsDeactivated = true;
          if (throwingPoint.WaitingPoint != null)
            throwingPoint.WaitingPoint.IsDeactivated = true;
        }
      }
      for (int index = 0; index < num1; ++index)
      {
        if (num3 > index)
        {
          StandingPointWithWeaponRequirement weaponRequirement = array8StandingPoint[index] as StandingPointWithWeaponRequirement;
          array8ThrowingPoint[index].AmmoPickUpPoint = weaponRequirement;
        }
        else if (array8StandingPoint[index].HasUser || array8StandingPoint[index].HasAIMovingTo)
          this.Ai.StopUsingStandingPoint(array8StandingPoint[index]);
      }
      for (int index = 0; index < num2; ++index)
      {
        Agent agent = stackArray8Agent[index];
        this.AssignAgentToStandingPoint(this.GetSuitableStandingPointFor(this.Side, agent, (List<Agent>) null, (List<(Agent, float)>) null), agent);
      }
    }

    private bool ShouldStandAtWaitingPoint(StonePile.ThrowingPoint throwingPoint)
    {
      bool flag = false;
      if (throwingPoint.WaitingPoint != null)
      {
        flag = true;
        Vec2 asVec2 = throwingPoint.StandingPoint.GameEntity.GlobalPosition.AsVec2;
        if (AgentProximityMap.CanSearchRadius(this._givenItemRange))
        {
          AgentProximityMap.ProximityMapSearchStruct searchStruct = AgentProximityMap.BeginSearch(Mission.Current, asVec2, this._givenItemRange);
          while (searchStruct.LastFoundAgent != null)
          {
            if (searchStruct.LastFoundAgent.State == AgentState.Active && searchStruct.LastFoundAgent.Team != null && searchStruct.LastFoundAgent.Team.Side == BattleSideEnum.Attacker)
            {
              flag = false;
              break;
            }
            AgentProximityMap.FindNext(Mission.Current, ref searchStruct);
          }
        }
        else
        {
          float num = this._givenItemRange * this._givenItemRange;
          if (Mission.Current.AttackerTeam != null)
          {
            MBReadOnlyList<Agent> activeAgents = Mission.Current.AttackerTeam.ActiveAgents;
            int count = activeAgents.Count;
            for (int index = 0; index < count; ++index)
            {
              if ((double) activeAgents[index].Position.AsVec2.DistanceSquared(asVec2) <= (double) num)
              {
                flag = false;
                break;
              }
            }
          }
          if (Mission.Current.AttackerAllyTeam != null)
          {
            MBReadOnlyList<Agent> activeAgents = Mission.Current.AttackerAllyTeam.ActiveAgents;
            int count = activeAgents.Count;
            for (int index = 0; index < count; ++index)
            {
              if ((double) activeAgents[index].Position.AsVec2.DistanceSquared(asVec2) <= (double) num)
              {
                flag = true;
                break;
              }
            }
          }
        }
      }
      return flag;
    }

    private bool UpdateThrowingPointIfHasAnyInteractingAgent(StonePile.ThrowingPoint throwingPoint)
    {
      Agent agent = (Agent) null;
      StandingPoint standingPoint = (StandingPoint) null;
      throwingPoint.StandingPoint.IsDeactivated = false;
      if (throwingPoint.StandingPoint.HasAIMovingTo)
      {
        agent = throwingPoint.StandingPoint.MovingAgent;
        standingPoint = (StandingPoint) throwingPoint.StandingPoint;
      }
      else if (throwingPoint.StandingPoint.HasUser)
      {
        agent = throwingPoint.StandingPoint.UserAgent;
        standingPoint = (StandingPoint) throwingPoint.StandingPoint;
      }
      if (throwingPoint.WaitingPoint != null)
      {
        throwingPoint.WaitingPoint.IsDeactivated = false;
        if (throwingPoint.WaitingPoint.HasAIMovingTo)
        {
          agent = throwingPoint.WaitingPoint.MovingAgent;
          standingPoint = (StandingPoint) throwingPoint.WaitingPoint;
        }
        else if (throwingPoint.WaitingPoint.HasUser)
        {
          agent = throwingPoint.WaitingPoint.UserAgent;
          standingPoint = (StandingPoint) throwingPoint.WaitingPoint;
        }
      }
      int num = agent != null ? 1 : 0;
      if (num == 0)
        return num != 0;
      if (agent.Controller != Agent.ControllerType.AI)
        return num != 0;
      EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      if (wieldedItemIndex == EquipmentIndex.None || agent.Equipment[wieldedItemIndex].Item != this._givenItem)
      {
        this.Ai.StopUsingStandingPoint(standingPoint);
        throwingPoint.AttackEntity = (GameEntity) null;
        return num != 0;
      }
      if (standingPoint == throwingPoint.WaitingPoint)
      {
        if (this.ShouldStandAtWaitingPoint(throwingPoint))
          return num != 0;
        this.Ai.StopUsingStandingPoint(standingPoint);
        this.AssignAgentToStandingPoint((StandingPoint) throwingPoint.StandingPoint, agent);
        return num != 0;
      }
      if (agent.IsUsingGameObject && (NativeObject) throwingPoint.AttackEntity != (NativeObject) null)
      {
        if (throwingPoint.CanUseAttackEntity())
        {
          agent.SetScriptedTargetEntityAndPosition(throwingPoint.AttackEntity, new WorldPosition(throwingPoint.AttackEntity.Scene, UIntPtr.Zero, throwingPoint.AttackEntity.GlobalPosition, false), ignoreIfAlreadyAttacking: true);
          return num != 0;
        }
        agent.DisableScriptedCombatMovement();
        throwingPoint.AttackEntity = (GameEntity) null;
        return num != 0;
      }
      if (!this.ShouldStandAtWaitingPoint(throwingPoint))
        return num != 0;
      this.Ai.StopUsingStandingPoint(standingPoint);
      this.AssignAgentToStandingPoint((StandingPoint) throwingPoint.WaitingPoint, agent);
      return num != 0;
    }

    public override void WriteToNetwork()
    {
      base.WriteToNetwork();
      GameNetworkMessage.WriteIntToPacket(this.AmmoCount, CompressionMission.RangedSiegeWeaponAmmoCompressionInfo);
    }

    float? IDetachment.GetWeightOfAgentAtNextSlot(List<(Agent, float)> candidates, out Agent match)
    {
      BattleSideEnum side = candidates[0].Item1.Team.Side;
      StandingPoint standingPointFor = this.GetSuitableStandingPointFor(side, (Agent) null, (List<Agent>) null, candidates);
      if (standingPointFor != null)
      {
        float? weightOfNextSlot = ((IDetachment) this).GetWeightOfNextSlot(side);
        match = StonePileAI.GetSuitableAgentForStandingPoint(this, standingPointFor, candidates, new List<Agent>(), weightOfNextSlot.Value);
        if (match == null)
          return new float?();
        float? nullable = weightOfNextSlot;
        float num = 1f;
        return !nullable.HasValue ? new float?() : new float?(nullable.GetValueOrDefault() * num);
      }
      match = (Agent) null;
      return new float?();
    }

    float? IDetachment.GetWeightOfAgentAtNextSlot(List<Agent> candidates, out Agent match)
    {
      BattleSideEnum side = candidates[0].Team.Side;
      StandingPoint standingPointFor = this.GetSuitableStandingPointFor(side, (Agent) null, candidates, (List<(Agent, float)>) null);
      if (standingPointFor != null)
      {
        match = StonePileAI.GetSuitableAgentForStandingPoint(this, standingPointFor, candidates, new List<Agent>());
        if (match == null)
          return new float?();
        float? weightOfNextSlot = ((IDetachment) this).GetWeightOfNextSlot(side);
        float num = 1f;
        return !weightOfNextSlot.HasValue ? new float?() : new float?(weightOfNextSlot.GetValueOrDefault() * num);
      }
      match = (Agent) null;
      return new float?();
    }

    protected override StandingPoint GetSuitableStandingPointFor(
      BattleSideEnum side,
      Agent agent = null,
      List<Agent> agents = null,
      List<(Agent, float)> agentValuePairs = null)
    {
      List<Agent> agentList = new List<Agent>();
      if (agents == null)
      {
        if (agent != null)
          agentList.Add(agent);
        else if (agentValuePairs != null)
        {
          foreach ((Agent, float) agentValuePair in agentValuePairs)
            agentList.Add(agentValuePair.Item1);
        }
      }
      else
        agentList.AddRange((IEnumerable<Agent>) agents);
      bool flag1 = false;
      bool flag2 = false;
      StandingPoint standingPointFor = (StandingPoint) null;
      for (int index1 = 0; index1 < this._throwingPoints.Count && standingPointFor == null | flag2; ++index1)
      {
        StonePile.ThrowingPoint throwingPoint = this._throwingPoints[index1];
        if (this.IsThrowingPointAssignable(throwingPoint))
        {
          StandingPoint standingPoint = (StandingPoint) throwingPoint.StandingPoint;
          bool flag3 = this.ShouldStandAtWaitingPoint(throwingPoint);
          if (flag3)
            standingPoint = (StandingPoint) throwingPoint.WaitingPoint;
          bool flag4 = false;
          for (int index2 = 0; !flag4 && index2 < agentList.Count; ++index2)
            flag4 = !standingPoint.IsDisabledForAgent(agentList[index2]);
          if (flag4)
          {
            flag2 = flag3;
            standingPointFor = standingPoint;
          }
          else
            flag1 = true;
        }
      }
      for (int index3 = 0; index3 < this.StandingPoints.Count && standingPointFor == null; ++index3)
      {
        StandingPoint standingPoint = this.StandingPoints[index3];
        if (!standingPoint.IsDeactivated && (standingPoint.IsInstantUse || !standingPoint.HasUser && !standingPoint.HasAIMovingTo) && !standingPoint.GameEntity.HasTag("throwing") && !standingPoint.GameEntity.HasTag("wait_to_throw") && (flag1 || !standingPoint.GameEntity.HasTag(this.AmmoPickUpTag)))
        {
          for (int index4 = 0; index4 < agentList.Count && standingPointFor == null; ++index4)
          {
            if (!standingPoint.IsDisabledForAgent(agentList[index4]))
              standingPointFor = standingPoint;
          }
          if (agentList.Count == 0)
            standingPointFor = standingPoint;
        }
      }
      return standingPointFor;
    }

    protected override float GetDetachmentWeightAux(BattleSideEnum side)
    {
      if (this.IsDisabledForBattleSideAI(side))
        return float.MinValue;
      this._usableStandingPoints.Clear();
      int num = 0;
      foreach (StonePile.ThrowingPoint throwingPoint in this._throwingPoints)
      {
        if (this.IsThrowingPointAssignable(throwingPoint))
          ++num;
      }
      bool flag1 = false;
      bool flag2 = false;
      for (int index = 0; index < this.StandingPoints.Count; ++index)
      {
        StandingPoint standingPoint = this.StandingPoints[index];
        if (standingPoint.GameEntity.HasTag(this.AmmoPickUpTag) && num > 0)
        {
          --num;
          if (standingPoint.IsUsableBySide(side))
          {
            if (!standingPoint.HasAIMovingTo)
            {
              if (!flag2)
                this._usableStandingPoints.Clear();
              flag2 = true;
            }
            else if (flag2 || standingPoint.MovingAgent.Formation.Team.Side != side)
              continue;
            flag1 = true;
            this._usableStandingPoints.Add((index, standingPoint));
          }
        }
      }
      this._areUsableStandingPointsVacant = flag2;
      if (!flag1)
        return float.MinValue;
      if (flag2)
        return 1f;
      return !this._isDetachmentRecentlyEvaluated ? 0.1f : 0.01f;
    }

    protected virtual void UpdateAmmoMesh()
    {
      int vectorArgument1 = 20 - this.AmmoCount;
      if (!((NativeObject) this.GameEntity != (NativeObject) null))
        return;
      for (int metaMeshIndex = 0; metaMeshIndex < this.GameEntity.MultiMeshComponentCount; ++metaMeshIndex)
      {
        MetaMesh metaMesh = this.GameEntity.GetMetaMesh(metaMeshIndex);
        for (int meshIndex = 0; meshIndex < metaMesh.MeshCount; ++meshIndex)
          metaMesh.GetMeshAtIndex(meshIndex).SetVectorArgument(0.0f, (float) vectorArgument1, 0.0f, 0.0f);
      }
    }

    private bool CanShootAtEntity(
      Agent agent,
      GameEntity entity,
      bool canShootEvenIfRayCastHitsNothing = false)
    {
      bool flag = false;
      if ((double) agent.GetEyeGlobalPosition().DistanceSquared(entity.GlobalPosition) < (double) this._givenItemRange * (double) this._givenItemRange)
      {
        GameEntity collidedEntity;
        if (this.Scene.RayCastForClosestEntityOrTerrain(agent.GetEyeGlobalPosition(), entity.GlobalPosition, out float _, out collidedEntity))
        {
          for (; (NativeObject) collidedEntity != (NativeObject) null; collidedEntity = collidedEntity.Parent)
          {
            if ((NativeObject) collidedEntity == (NativeObject) entity)
            {
              flag = true;
              break;
            }
          }
        }
        else
          flag = canShootEvenIfRayCastHitsNothing;
      }
      return flag;
    }

    private List<GameEntity> GetEnemySiegeWeapons()
    {
      List<GameEntity> enemySiegeWeapons = (List<GameEntity>) null;
      if (Mission.Current.Teams.Attacker.TeamAI is TeamAISiegeComponent)
      {
        foreach (IPrimarySiegeWeapon primarySiegeWeapon in ((TeamAISiegeComponent) Mission.Current.Teams.Attacker.TeamAI).PrimarySiegeWeapons)
        {
          if (primarySiegeWeapon is SiegeWeapon siegeWeapon && siegeWeapon.GameEntity.GetFirstScriptOfType<DestructableComponent>() != null && siegeWeapon.IsUsed)
          {
            if (enemySiegeWeapons == null)
              enemySiegeWeapons = new List<GameEntity>();
            enemySiegeWeapons.Add(siegeWeapon.GameEntity);
          }
        }
      }
      return enemySiegeWeapons;
    }

    private bool IsThrowingPointAssignable(StonePile.ThrowingPoint throwingPoint)
    {
      if (throwingPoint.AmmoPickUpPoint != null || throwingPoint.StandingPoint.IsDeactivated || throwingPoint.StandingPoint.HasUser || throwingPoint.StandingPoint.HasAIMovingTo)
        return false;
      if (throwingPoint.WaitingPoint == null)
        return true;
      return !throwingPoint.WaitingPoint.IsDeactivated && !throwingPoint.WaitingPoint.HasUser && !throwingPoint.WaitingPoint.HasAIMovingTo;
    }

    private bool AssignAgentToStandingPoint(StandingPoint standingPoint, Agent agent)
    {
      if (standingPoint == null || agent == null || !StonePileAI.IsAgentAssignable(agent))
        return false;
      int slotIndex = this.StandingPoints.IndexOf(standingPoint);
      if (slotIndex >= 0)
      {
        ((IDetachment) this).AddAgent(agent, slotIndex);
        if (agent.Formation != null)
        {
          agent.Formation.DetachUnit(agent, this.IsLoose);
          agent.Detachment = (IDetachment) this;
          agent.DetachmentWeight = this.GetWeightOfStandingPoint(standingPoint);
          return true;
        }
      }
      return false;
    }

    [DefineSynchedMissionObjectType(typeof (StonePile))]
    public struct StonePileRecord : ISynchedMissionObjectReadableRecord
    {
      public int ReadAmmoCount { get; private set; }

      public StonePileRecord(int readAmmoCount) => this.ReadAmmoCount = readAmmoCount;

      public bool ReadFromNetwork(ref bool bufferReadValid)
      {
        this.ReadAmmoCount = GameNetworkMessage.ReadIntFromPacket(CompressionMission.RangedSiegeWeaponAmmoCompressionInfo, ref bufferReadValid);
        return bufferReadValid;
      }
    }

    private class ThrowingPoint
    {
      private const float CachedCanUseAttackEntityUpdateInterval = 1f;
      public StandingPointWithVolumeBox StandingPoint;
      public StandingPointWithWeaponRequirement AmmoPickUpPoint;
      public StandingPointWithWeaponRequirement WaitingPoint;
      public Timer EnemyInRangeTimer;
      public GameEntity AttackEntity;
      public float AttackEntityNearbyAgentsCheckRadius;
      private float _cachedCanUseAttackEntityExpireTime;
      private bool _cachedCanUseAttackEntity;

      public bool CanUseAttackEntity()
      {
        bool flag = true;
        if ((double) this.AttackEntityNearbyAgentsCheckRadius > 0.0)
        {
          float currentTime = Mission.Current.CurrentTime;
          if ((double) currentTime >= (double) this._cachedCanUseAttackEntityExpireTime)
          {
            this._cachedCanUseAttackEntity = Mission.Current.HasAnyAgentsOfSideInRange(this.AttackEntity.GlobalPosition, this.AttackEntityNearbyAgentsCheckRadius, BattleSideEnum.Attacker);
            this._cachedCanUseAttackEntityExpireTime = currentTime + 1f;
          }
          flag = this._cachedCanUseAttackEntity;
        }
        return flag;
      }

      public struct StackArray8ThrowingPoint
      {
        private StonePile.ThrowingPoint _element0;
        private StonePile.ThrowingPoint _element1;
        private StonePile.ThrowingPoint _element2;
        private StonePile.ThrowingPoint _element3;
        private StonePile.ThrowingPoint _element4;
        private StonePile.ThrowingPoint _element5;
        private StonePile.ThrowingPoint _element6;
        private StonePile.ThrowingPoint _element7;
        public const int Length = 8;

        public StonePile.ThrowingPoint this[int index]
        {
          get
          {
            switch (index)
            {
              case 0:
                return this._element0;
              case 1:
                return this._element1;
              case 2:
                return this._element2;
              case 3:
                return this._element3;
              case 4:
                return this._element4;
              case 5:
                return this._element5;
              case 6:
                return this._element6;
              case 7:
                return this._element7;
              default:
                return (StonePile.ThrowingPoint) null;
            }
          }
          set
          {
            switch (index)
            {
              case 0:
                this._element0 = value;
                break;
              case 1:
                this._element1 = value;
                break;
              case 2:
                this._element2 = value;
                break;
              case 3:
                this._element3 = value;
                break;
              case 4:
                this._element4 = value;
                break;
              case 5:
                this._element5 = value;
                break;
              case 6:
                this._element6 = value;
                break;
              case 7:
                this._element7 = value;
                break;
            }
          }
        }
      }
    }

    private struct VolumeBoxTimerPair
    {
      public VolumeBox VolumeBox;
      public Timer Timer;
    }
  }
}
