// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeWeapon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class SiegeWeapon : UsableMachine, ITargetable
  {
    private const string TargetingEntityTag = "targeting_entity";
    [EditableScriptComponentVariable(true)]
    internal string RemoveOnDeployTag = "";
    [EditableScriptComponentVariable(true)]
    internal string AddOnDeployTag = "";
    private List<GameEntity> _addOnDeployEntities;
    protected bool _spawnedFromSpawner;
    private List<GameEntity> _removeOnDeployEntities;
    private List<Formation> _potentialUsingFormations;
    private List<Formation> _forcedUseFormations;
    private bool _needsSingleThreadTickOnce;
    private bool _areMovingAgentsProcessed;
    private bool _isValidated;
    private Vec3? _targetingPositionOffset;

    [EditorVisibleScriptComponentVariable(false)]
    public bool ForcedUse { get; private set; }

    public bool IsUsed
    {
      get
      {
        foreach (Formation userFormation in (List<Formation>) this.UserFormations)
        {
          if (userFormation.Team.Side == this.Side)
            return true;
        }
        return false;
      }
    }

    public void SetForcedUse(bool value) => this.ForcedUse = value;

    public virtual BattleSideEnum Side => BattleSideEnum.Attacker;

    public abstract SiegeEngineType GetSiegeEngineType();

    protected virtual bool CalculateIsSufficientlyManned(BattleSideEnum battleSide)
    {
      if ((double) this.GetDetachmentWeightAux(battleSide) < 1.0)
        return true;
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        if (team.Side == this.Side)
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0 && this.IsUsedByFormation(formation) && (formation.Arrangement.UnitCount > 1 || formation.Arrangement.UnitCount > 0 && !formation.HasPlayerControlledTroop))
              return true;
          }
        }
      }
      return false;
    }

    private bool HasNewMovingAgents()
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.HasAIMovingTo && standingPoint.PreviousUserAgent != standingPoint.MovingAgent)
          return true;
      }
      return false;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.ForcedUse = true;
      this._potentialUsingFormations = new List<Formation>();
      this._forcedUseFormations = new List<Formation>();
      this.GameEntity.SetAnimationSoundActivation(true);
      this._removeOnDeployEntities = Mission.Current.Scene.FindEntitiesWithTag(this.RemoveOnDeployTag).ToList<GameEntity>();
      this._addOnDeployEntities = Mission.Current.Scene.FindEntitiesWithTag(this.AddOnDeployTag).ToList<GameEntity>();
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (!(standingPoint is StandingPointWithWeaponRequirement))
          standingPoint.AutoEquipWeaponsOnUseStopped = true;
      }
      this.SetScriptComponentToTick(this.GetTickRequirement());
      Vec3? globalPosition = this.GameEntity.CollectChildrenEntitiesWithTag("targeting_entity").FirstOrDefault<GameEntity>()?.GlobalPosition;
      Vec3 vec3_1 = (this.GameEntity.PhysicsGlobalBoxMax + this.GameEntity.PhysicsGlobalBoxMin) * 0.5f;
      this._targetingPositionOffset = globalPosition.HasValue ? new Vec3?(globalPosition.GetValueOrDefault() - vec3_1) : new Vec3?();
      globalPosition = this.GameEntity.CollectChildrenEntitiesWithTag("targeting_entity").FirstOrDefault<GameEntity>()?.GlobalPosition;
      Vec3 vec3_2 = (this.GameEntity.PhysicsGlobalBoxMax + this.GameEntity.PhysicsGlobalBoxMin) * 0.5f;
      this._targetingPositionOffset = globalPosition.HasValue ? new Vec3?(globalPosition.GetValueOrDefault() - vec3_2) : new Vec3?();
      this.EnemyRangeToStopUsing = 5f;
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.GameEntity.IsVisibleIncludeParents() && !GameNetwork.IsClientOrReplay ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel : base.GetTickRequirement();
    }

    private void TickAux(bool isParallel)
    {
      if (GameNetwork.IsClientOrReplay || !this.GameEntity.IsVisibleIncludeParents())
        return;
      if (this.IsDisabledForBattleSide(this.Side))
      {
        foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          Agent userAgent = standingPoint.UserAgent;
          if (userAgent != null && !userAgent.IsPlayerControlled && userAgent.Formation != null && userAgent.Formation.Team.Side == this.Side)
          {
            if (isParallel)
            {
              this._needsSingleThreadTickOnce = true;
            }
            else
            {
              userAgent.Formation.StopUsingMachine((UsableMachine) this);
              this._forcedUseFormations.Remove(userAgent.Formation);
              this._isValidated = false;
            }
          }
        }
      }
      else
      {
        if (!this.ForcedUse)
          return;
        bool flag = false;
        foreach (Team team in (List<Team>) Mission.Current.Teams)
        {
          if (team.Side == this.Side)
          {
            if (!this.CalculateIsSufficientlyManned(team.Side))
            {
              foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
              {
                if (formation.CountOfUnits > 0 && formation.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Retreat && (formation.Arrangement.UnitCount > 1 || formation.Arrangement.UnitCount > 0 && !formation.HasPlayerControlledTroop) && !formation.Detachments.Contains((IDetachment) this))
                {
                  if (isParallel)
                    this._needsSingleThreadTickOnce = true;
                  else
                    this._potentialUsingFormations.Add(formation);
                }
              }
              this._areMovingAgentsProcessed = false;
            }
            else if (this.HasNewMovingAgents())
            {
              if (!this._areMovingAgentsProcessed)
              {
                float num1 = float.MaxValue;
                Formation formation1 = (Formation) null;
                foreach (Formation formation2 in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
                {
                  if (formation2.CountOfUnits > 0 && formation2.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Retreat && (formation2.Arrangement.UnitCount > 1 || formation2.Arrangement.UnitCount > 0 && !formation2.HasPlayerControlledTroop))
                  {
                    float num2 = formation2.QuerySystem.MedianPosition.DistanceSquaredWithLimit(this.GameEntity.GlobalPosition, 10000f);
                    if ((double) num2 < (double) num1)
                    {
                      num1 = num2;
                      formation1 = formation2;
                    }
                  }
                }
                if (formation1 != null && !this.IsUsedByFormation(formation1))
                {
                  if (isParallel)
                  {
                    this._needsSingleThreadTickOnce = true;
                  }
                  else
                  {
                    this._potentialUsingFormations.Clear();
                    this._potentialUsingFormations.Add(formation1);
                    flag = true;
                    this._areMovingAgentsProcessed = true;
                  }
                }
                else
                  this._areMovingAgentsProcessed = true;
              }
            }
            else
              this._areMovingAgentsProcessed = false;
            if (flag)
            {
              this._potentialUsingFormations[0].StartUsingMachine((UsableMachine) this, !this._potentialUsingFormations[0].IsAIControlled);
              this._forcedUseFormations.Add(this._potentialUsingFormations[0]);
              this._potentialUsingFormations.Clear();
              this._isValidated = false;
              flag = false;
            }
            else if (this._potentialUsingFormations.Count > 0)
            {
              float num3 = float.MaxValue;
              Formation formation3 = (Formation) null;
              foreach (Formation potentialUsingFormation in this._potentialUsingFormations)
              {
                float num4 = potentialUsingFormation.QuerySystem.AveragePosition.DistanceSquared(this.GameEntity.GlobalPosition.AsVec2);
                if ((double) num4 < (double) num3)
                {
                  num3 = num4;
                  formation3 = potentialUsingFormation;
                }
              }
              int count = this.StandingPoints.Count;
              int num5 = 0;
              Formation formation4 = (Formation) null;
              Vec2 zero = Vec2.Zero;
              for (int index = 0; index < count; ++index)
              {
                Agent previousUserAgent = this.StandingPoints[index].PreviousUserAgent;
                if (previousUserAgent != null)
                {
                  if (!previousUserAgent.IsActive() || previousUserAgent.Formation == null || formation4 != null && previousUserAgent.Formation != formation4)
                  {
                    num5 = -1;
                    break;
                  }
                  ++num5;
                  zero += previousUserAgent.Position.AsVec2;
                  formation4 = previousUserAgent.Formation;
                }
              }
              Formation formation5 = formation3;
              if (num5 > 0 && this._potentialUsingFormations.Contains(formation4) && (double) (zero * (1f / (float) num5)).DistanceSquared(this.GameEntity.GlobalPosition.AsVec2) < (double) num3)
                formation5 = formation4;
              formation5.StartUsingMachine((UsableMachine) this, !formation5.IsAIControlled);
              this._forcedUseFormations.Add(formation5);
              this._potentialUsingFormations.Clear();
              this._isValidated = false;
            }
            else if (!this._isValidated)
            {
              if (!this.HasToBeDefendedByUser(team.Side) && (double) this.GetDetachmentWeightAux(team.Side) == -3.4028234663852886E+38)
              {
                for (int index = this._forcedUseFormations.Count - 1; index >= 0; --index)
                {
                  Formation forcedUseFormation = this._forcedUseFormations[index];
                  if (forcedUseFormation.Team.Side == this.Side && !this.IsAnyUserBelongsToFormation(forcedUseFormation))
                  {
                    if (isParallel)
                    {
                      if (this.IsUsedByFormation(forcedUseFormation))
                      {
                        this._needsSingleThreadTickOnce = true;
                        break;
                      }
                      this._forcedUseFormations.Remove(forcedUseFormation);
                    }
                    else
                    {
                      if (this.IsUsedByFormation(forcedUseFormation))
                        forcedUseFormation.StopUsingMachine((UsableMachine) this, !forcedUseFormation.IsAIControlled);
                      this._forcedUseFormations.Remove(forcedUseFormation);
                    }
                  }
                }
                if (isParallel && this._needsSingleThreadTickOnce)
                  break;
              }
              if (!isParallel)
                this._isValidated = true;
            }
          }
        }
      }
    }

    protected virtual bool IsAnyUserBelongsToFormation(Formation formation)
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.UserAgent != null && standingPoint.UserAgent.Formation == formation)
          return true;
      }
      return false;
    }

    protected internal override void OnTickParallel(float dt) => this.TickAux(true);

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this._needsSingleThreadTickOnce)
        return;
      this._needsSingleThreadTickOnce = false;
      this.TickAux(false);
    }

    public void TickAuxForInit() => this.TickAux(false);

    protected internal virtual void OnDeploymentStateChanged(bool isDeployed)
    {
      foreach (GameEntity removeOnDeployEntity in this._removeOnDeployEntities)
      {
        removeOnDeployEntity.SetVisibilityExcludeParents(!isDeployed);
        StrategicArea firstScriptOfType = removeOnDeployEntity.GetFirstScriptOfType<StrategicArea>();
        if (firstScriptOfType != null)
        {
          firstScriptOfType.OnParentGameEntityVisibilityChanged(!isDeployed);
        }
        else
        {
          foreach (StrategicArea strategicArea in removeOnDeployEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasScriptOfType<StrategicArea>())).Select<GameEntity, StrategicArea>((Func<GameEntity, StrategicArea>) (c => c.GetFirstScriptOfType<StrategicArea>())))
            strategicArea.OnParentGameEntityVisibilityChanged(!isDeployed);
        }
      }
      foreach (GameEntity addOnDeployEntity in this._addOnDeployEntities)
      {
        addOnDeployEntity.SetVisibilityExcludeParents(isDeployed);
        addOnDeployEntity.GetFirstScriptOfType<MissionObject>()?.SetAbilityOfFaces(isDeployed);
        StrategicArea firstScriptOfType = addOnDeployEntity.GetFirstScriptOfType<StrategicArea>();
        if (firstScriptOfType != null)
        {
          firstScriptOfType.OnParentGameEntityVisibilityChanged(isDeployed);
        }
        else
        {
          foreach (StrategicArea strategicArea in addOnDeployEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasScriptOfType<StrategicArea>())).Select<GameEntity, StrategicArea>((Func<GameEntity, StrategicArea>) (c => c.GetFirstScriptOfType<StrategicArea>())))
            strategicArea.OnParentGameEntityVisibilityChanged(isDeployed);
        }
      }
      if (this._addOnDeployEntities.Count <= 0 && this._removeOnDeployEntities.Count <= 0)
        return;
      foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.RefreshGameEntityWithWorldPosition();
    }

    public override bool HasWaitFrame
    {
      get
      {
        if (!base.HasWaitFrame)
          return false;
        return !(this is IPrimarySiegeWeapon) || !(this as IPrimarySiegeWeapon).HasCompletedAction();
      }
    }

    public override bool IsDeactivated
    {
      get
      {
        return this.IsDisabled || (NativeObject) this.GameEntity == (NativeObject) null || !this.GameEntity.IsVisibleIncludeParents() || base.IsDeactivated;
      }
    }

    public override bool ShouldAutoLeaveDetachmentWhenDisabled(BattleSideEnum sideEnum)
    {
      return this.AutoAttachUserToFormation(sideEnum);
    }

    public override bool AutoAttachUserToFormation(BattleSideEnum sideEnum)
    {
      return this.Ai.HasActionCompleted || !this.IsDisabledDueToEnemyInRange(sideEnum);
    }

    public override bool HasToBeDefendedByUser(BattleSideEnum sideEnum)
    {
      return !this.Ai.HasActionCompleted && this.IsDisabledDueToEnemyInRange(sideEnum);
    }

    protected float GetUserMultiplierOfWeapon()
    {
      int includingInStruckAction = this.UserCountIncludingInStruckAction;
      return includingInStruckAction == 0 ? 0.1f : (float) (0.699999988079071 + 0.30000001192092896 * (double) includingInStruckAction / (double) this.MaxUserCount);
    }

    protected virtual float GetDistanceMultiplierOfWeapon(Vec3 weaponPos)
    {
      if ((double) this.GetMinimumDistanceBetweenPositions(weaponPos) > 20.0)
        return 0.4f;
      Debug.FailedAssert("Invalid weapon type", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\SiegeWeapon.cs", nameof (GetDistanceMultiplierOfWeapon), 549);
      return 1f;
    }

    protected virtual float GetMinimumDistanceBetweenPositions(Vec3 position)
    {
      return this.GameEntity.GlobalPosition.DistanceSquared(position);
    }

    protected float GetHitPointMultiplierOfWeapon()
    {
      return this.DestructionComponent != null ? MathF.Max(1f, 2f - MathF.Log10((float) ((double) this.DestructionComponent.HitPoint / (double) this.DestructionComponent.MaxHitPoint * 10.0 + 1.0))) : 1f;
    }

    public GameEntity GetTargetEntity() => this.GameEntity;

    public Vec3 GetTargetingOffset()
    {
      return this._targetingPositionOffset.HasValue ? this._targetingPositionOffset.Value : Vec3.Zero;
    }

    public BattleSideEnum GetSide() => this.Side;

    public GameEntity Entity() => this.GameEntity;

    public abstract TargetFlags GetTargetFlags();

    public abstract float GetTargetValue(List<Vec3> weaponPos);
  }
}
