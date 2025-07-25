﻿// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FormationQuerySystem
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class FormationQuerySystem
  {
    public readonly Formation Formation;
    private readonly QueryData<float> _formationPower;
    private readonly QueryData<float> _formationMeleeFightingPower;
    private readonly QueryData<Vec2> _averagePosition;
    private readonly QueryData<Vec2> _currentVelocity;
    private float _lastAveragePositionCalculateTime;
    private readonly QueryData<Vec2> _estimatedDirection;
    private readonly QueryData<float> _estimatedInterval;
    private readonly QueryData<WorldPosition> _medianPosition;
    private readonly QueryData<Vec2> _averageAllyPosition;
    private readonly QueryData<float> _idealAverageDisplacement;
    private readonly QueryData<FormationQuerySystem.FormationIntegrityDataGroup> _formationIntegrityData;
    private readonly QueryData<MBList<Agent>> _localAllyUnits;
    private readonly QueryData<MBList<Agent>> _localEnemyUnits;
    private readonly QueryData<FormationClass> _mainClass;
    private readonly QueryData<float> _infantryUnitRatio;
    private readonly QueryData<float> _hasShieldUnitRatio;
    private readonly QueryData<float> _hasThrowingUnitRatio;
    private readonly QueryData<float> _rangedUnitRatio;
    private readonly QueryData<int> _insideCastleUnitCountIncludingUnpositioned;
    private readonly QueryData<int> _insideCastleUnitCountPositioned;
    private readonly QueryData<float> _cavalryUnitRatio;
    private readonly QueryData<float> _rangedCavalryUnitRatio;
    private readonly QueryData<bool> _isMeleeFormation;
    private readonly QueryData<bool> _isInfantryFormation;
    private readonly QueryData<bool> _hasShield;
    private readonly QueryData<bool> _hasThrowing;
    private readonly QueryData<bool> _isRangedFormation;
    private readonly QueryData<bool> _isCavalryFormation;
    private readonly QueryData<bool> _isRangedCavalryFormation;
    private readonly QueryData<float> _movementSpeedMaximum;
    private readonly QueryData<float> _movementSpeed;
    private readonly QueryData<float> _maximumMissileRange;
    private readonly QueryData<float> _missileRangeAdjusted;
    private readonly QueryData<float> _localInfantryUnitRatio;
    private readonly QueryData<float> _localRangedUnitRatio;
    private readonly QueryData<float> _localCavalryUnitRatio;
    private readonly QueryData<float> _localRangedCavalryUnitRatio;
    private readonly QueryData<float> _localAllyPower;
    private readonly QueryData<float> _localEnemyPower;
    private readonly QueryData<float> _localPowerRatio;
    private readonly QueryData<float> _casualtyRatio;
    private readonly QueryData<bool> _isUnderRangedAttack;
    private readonly QueryData<float> _underRangedAttackRatio;
    private readonly QueryData<float> _makingRangedAttackRatio;
    private readonly QueryData<Formation> _mainFormation;
    private readonly QueryData<float> _mainFormationReliabilityFactor;
    private readonly QueryData<Vec2> _weightedAverageEnemyPosition;
    private readonly QueryData<Agent> _closestEnemyAgent;
    private readonly QueryData<Formation> _closestEnemyFormation;
    private readonly QueryData<Formation> _closestSignificantlyLargeEnemyFormation;
    private readonly QueryData<Formation> _fastestSignificantlyLargeEnemyFormation;
    private readonly QueryData<Vec2> _highGroundCloseToForeseenBattleGround;

    public TeamQuerySystem Team => this.Formation.Team.QuerySystem;

    public float FormationPower => this._formationPower.Value;

    public float FormationMeleeFightingPower => this._formationMeleeFightingPower.Value;

    public Vec2 AveragePosition => this._averagePosition.Value;

    public Vec2 CurrentVelocity => this._currentVelocity.Value;

    public Vec2 EstimatedDirection => this._estimatedDirection.Value;

    public float EstimatedInterval => this._estimatedInterval.Value;

    public WorldPosition MedianPosition => this._medianPosition.Value;

    public Vec2 AverageAllyPosition => this._averageAllyPosition.Value;

    public float IdealAverageDisplacement => this._idealAverageDisplacement.Value;

    public FormationQuerySystem.FormationIntegrityDataGroup FormationIntegrityData
    {
      get => this._formationIntegrityData.Value;
    }

    public MBList<Agent> LocalAllyUnits => this._localAllyUnits.Value;

    public MBList<Agent> LocalEnemyUnits => this._localEnemyUnits.Value;

    public FormationClass MainClass => this._mainClass.Value;

    public float InfantryUnitRatio => this._infantryUnitRatio.Value;

    public float HasShieldUnitRatio => this._hasShieldUnitRatio.Value;

    public float HasThrowingUnitRatio => this._hasThrowingUnitRatio.Value;

    public float RangedUnitRatio => this._rangedUnitRatio.Value;

    public int InsideCastleUnitCountIncludingUnpositioned
    {
      get => this._insideCastleUnitCountIncludingUnpositioned.Value;
    }

    public int InsideCastleUnitCountPositioned => this._insideCastleUnitCountPositioned.Value;

    public float CavalryUnitRatio => this._cavalryUnitRatio.Value;

    public float GetCavalryUnitRatioWithoutExpiration => this._cavalryUnitRatio.GetCachedValue();

    public float RangedCavalryUnitRatio => this._rangedCavalryUnitRatio.Value;

    public float GetRangedCavalryUnitRatioWithoutExpiration
    {
      get => this._rangedCavalryUnitRatio.GetCachedValue();
    }

    public bool IsMeleeFormation => this._isMeleeFormation.Value;

    public bool IsInfantryFormation => this._isInfantryFormation.Value;

    public bool HasShield => this._hasShield.Value;

    public bool HasThrowing => this._hasThrowing.Value;

    public bool IsRangedFormation => this._isRangedFormation.Value;

    public bool IsCavalryFormation => this._isCavalryFormation.Value;

    public bool IsRangedCavalryFormation => this._isRangedCavalryFormation.Value;

    public float MovementSpeedMaximum => this._movementSpeedMaximum.Value;

    public float MovementSpeed => this._movementSpeed.Value;

    public float MaximumMissileRange => this._maximumMissileRange.Value;

    public float MissileRangeAdjusted => this._missileRangeAdjusted.Value;

    public float LocalInfantryUnitRatio => this._localInfantryUnitRatio.Value;

    public float LocalRangedUnitRatio => this._localRangedUnitRatio.Value;

    public float LocalCavalryUnitRatio => this._localCavalryUnitRatio.Value;

    public float LocalRangedCavalryUnitRatio => this._localRangedCavalryUnitRatio.Value;

    public float LocalAllyPower => this._localAllyPower.Value;

    public float LocalEnemyPower => this._localEnemyPower.Value;

    public float LocalPowerRatio => this._localPowerRatio.Value;

    public float CasualtyRatio => this._casualtyRatio.Value;

    public bool IsUnderRangedAttack => this._isUnderRangedAttack.Value;

    public float UnderRangedAttackRatio => this._underRangedAttackRatio.Value;

    public float MakingRangedAttackRatio => this._makingRangedAttackRatio.Value;

    public Formation MainFormation => this._mainFormation.Value;

    public float MainFormationReliabilityFactor => this._mainFormationReliabilityFactor.Value;

    public Vec2 WeightedAverageEnemyPosition => this._weightedAverageEnemyPosition.Value;

    public Agent ClosestEnemyAgent => this._closestEnemyAgent.Value;

    public FormationQuerySystem ClosestEnemyFormation
    {
      get
      {
        if (this._closestEnemyFormation.Value == null || this._closestEnemyFormation.Value.CountOfUnits == 0)
          this._closestEnemyFormation.Expire();
        return this._closestEnemyFormation.Value?.QuerySystem;
      }
    }

    public FormationQuerySystem ClosestSignificantlyLargeEnemyFormation
    {
      get
      {
        if (this._closestSignificantlyLargeEnemyFormation.Value == null || this._closestSignificantlyLargeEnemyFormation.Value.CountOfUnits == 0)
          this._closestSignificantlyLargeEnemyFormation.Expire();
        return this._closestSignificantlyLargeEnemyFormation.Value?.QuerySystem;
      }
    }

    public FormationQuerySystem FastestSignificantlyLargeEnemyFormation
    {
      get
      {
        if (this._fastestSignificantlyLargeEnemyFormation.Value == null || this._fastestSignificantlyLargeEnemyFormation.Value.CountOfUnits == 0)
          this._fastestSignificantlyLargeEnemyFormation.Expire();
        return this._fastestSignificantlyLargeEnemyFormation.Value?.QuerySystem;
      }
    }

    public Vec2 HighGroundCloseToForeseenBattleGround
    {
      get => this._highGroundCloseToForeseenBattleGround.Value;
    }

    public FormationQuerySystem(Formation formation)
    {
      FormationQuerySystem formationQuerySystem = this;
      this.Formation = formation;
      Mission mission = Mission.Current;
      this._formationPower = new QueryData<float>(new Func<float>(formation.GetFormationPower), 2.5f);
      this._formationMeleeFightingPower = new QueryData<float>(new Func<float>(formation.GetFormationMeleeFightingPower), 2.5f);
      this._averagePosition = new QueryData<Vec2>((Func<Vec2>) (() =>
      {
        Vec2 vec2 = formation.CountOfUnitsWithoutDetachedOnes > 1 ? formation.GetAveragePositionOfUnits(true, true) : (formation.CountOfUnitsWithoutDetachedOnes > 0 ? formation.GetAveragePositionOfUnits(true, false) : formation.OrderPosition);
        float currentTime = Mission.Current.CurrentTime;
        float num = currentTime - formationQuerySystem._lastAveragePositionCalculateTime;
        if ((double) num > 0.0)
          formationQuerySystem._currentVelocity.SetValue((vec2 - formationQuerySystem._averagePosition.GetCachedValue()) * (1f / num), currentTime);
        formationQuerySystem._lastAveragePositionCalculateTime = currentTime;
        return vec2;
      }), 0.05f);
      this._currentVelocity = new QueryData<Vec2>((Func<Vec2>) (() =>
      {
        formationQuerySystem._averagePosition.Evaluate(Mission.Current.CurrentTime);
        return formationQuerySystem._currentVelocity.GetCachedValue();
      }), 1f);
      this._estimatedDirection = new QueryData<Vec2>((Func<Vec2>) (() =>
      {
        if (formation.CountOfUnitsWithoutDetachedOnes > 0)
        {
          Vec2 averagePositionOfUnits = formation.GetAveragePositionOfUnits(true, true);
          float num1 = 0.0f;
          float num2 = 0.0f;
          Vec2 localAveragePosition = formation.OrderLocalAveragePosition;
          int num3 = 0;
          foreach (Agent looseDetachedOne in (List<IFormationUnit>) formation.UnitsWithoutLooseDetachedOnes)
          {
            Vec2? positionOfUnitOrDefault = formation.Arrangement.GetLocalPositionOfUnitOrDefault((IFormationUnit) looseDetachedOne);
            if (positionOfUnitOrDefault.HasValue)
            {
              Vec2 vec2 = positionOfUnitOrDefault.Value;
              Vec2 asVec2 = looseDetachedOne.Position.AsVec2;
              num1 += (float) (((double) vec2.x - (double) localAveragePosition.x) * ((double) asVec2.x - (double) averagePositionOfUnits.x) + ((double) vec2.y - (double) localAveragePosition.y) * ((double) asVec2.y - (double) averagePositionOfUnits.y));
              num2 += (float) (((double) vec2.x - (double) localAveragePosition.x) * ((double) asVec2.y - (double) averagePositionOfUnits.y) - ((double) vec2.y - (double) localAveragePosition.y) * ((double) asVec2.x - (double) averagePositionOfUnits.x));
              ++num3;
            }
          }
          if (num3 > 0)
          {
            float num4 = 1f / (float) num3;
            float num5 = num1 * num4;
            float num6 = num2 * num4;
            float num7 = MathF.Sqrt((float) ((double) num5 * (double) num5 + (double) num6 * (double) num6));
            if ((double) num7 > 0.0)
            {
              double rotation = (double) MathF.Acos(MBMath.ClampFloat(num5 / num7, -1f, 1f));
              Vec2 vec2_1 = Vec2.FromRotation((float) rotation);
              Vec2 vec2_2 = Vec2.FromRotation((float) -rotation);
              float num8 = 0.0f;
              float num9 = 0.0f;
              foreach (Agent looseDetachedOne in (List<IFormationUnit>) formation.UnitsWithoutLooseDetachedOnes)
              {
                Vec2? positionOfUnitOrDefault = formation.Arrangement.GetLocalPositionOfUnitOrDefault((IFormationUnit) looseDetachedOne);
                if (positionOfUnitOrDefault.HasValue)
                {
                  Vec2 parentUnitF1 = vec2_1.TransformToParentUnitF(positionOfUnitOrDefault.Value - localAveragePosition);
                  Vec2 parentUnitF2 = vec2_2.TransformToParentUnitF(positionOfUnitOrDefault.Value - localAveragePosition);
                  Vec2 asVec2 = looseDetachedOne.Position.AsVec2;
                  num8 += (parentUnitF1 - asVec2 + averagePositionOfUnits).LengthSquared;
                  num9 += (parentUnitF2 - asVec2 + averagePositionOfUnits).LengthSquared;
                }
              }
              return (double) num8 >= (double) num9 ? vec2_2 : vec2_1;
            }
          }
        }
        return new Vec2(0.0f, 1f);
      }), 0.2f);
      this._estimatedInterval = new QueryData<float>((Func<float>) (() =>
      {
        if (formation.CountOfUnitsWithoutDetachedOnes > 0)
        {
          Vec2 estimatedDirection = formation.QuerySystem.EstimatedDirection;
          Vec2 currentPosition = formation.CurrentPosition;
          float num10 = 0.0f;
          float num11 = 0.0f;
          foreach (Agent looseDetachedOne in (List<IFormationUnit>) formation.UnitsWithoutLooseDetachedOnes)
          {
            Vec2? positionOfUnitOrDefault = formation.Arrangement.GetLocalPositionOfUnitOrDefault((IFormationUnit) looseDetachedOne);
            if (positionOfUnitOrDefault.HasValue)
            {
              Vec2 localUnitF = estimatedDirection.TransformToLocalUnitF(looseDetachedOne.Position.AsVec2 - currentPosition);
              Vec2 va = positionOfUnitOrDefault.Value - localUnitF;
              Vec2 vb = formation.Arrangement.GetLocalPositionOfUnitOrDefaultWithAdjustment((IFormationUnit) looseDetachedOne, 1f).Value - positionOfUnitOrDefault.Value;
              if (vb.IsNonZero())
              {
                float num12 = vb.Normalize();
                float num13 = Vec2.DotProduct(va, vb);
                num10 += num13 * num12;
                num11 += num12 * num12;
              }
            }
          }
          if ((double) num11 != 0.0)
            return Math.Max(0.0f, -num10 / num11 + formation.Interval);
        }
        return formation.Interval;
      }), 0.2f);
      this._medianPosition = new QueryData<WorldPosition>((Func<WorldPosition>) (() =>
      {
        if (formation.CountOfUnitsWithoutDetachedOnes != 0)
          return formation.CountOfUnitsWithoutDetachedOnes != 1 ? formation.GetMedianAgent(true, true, formationQuerySystem.AveragePosition).GetWorldPosition() : formation.GetMedianAgent(true, false, formationQuerySystem.AveragePosition).GetWorldPosition();
        if (formation.CountOfUnits == 0)
          return formation.CreateNewOrderWorldPosition(WorldPosition.WorldPositionEnforcedCache.None);
        return formation.CountOfUnits != 1 ? formation.GetMedianAgent(false, true, formationQuerySystem.AveragePosition).GetWorldPosition() : formation.GetFirstUnit().GetWorldPosition();
      }), 0.05f);
      this._averageAllyPosition = new QueryData<Vec2>((Func<Vec2>) (() =>
      {
        int num = 0;
        Vec2 zero = Vec2.Zero;
        foreach (TaleWorlds.MountAndBlade.Team team in (List<TaleWorlds.MountAndBlade.Team>) mission.Teams)
        {
          if (team.IsFriendOf(formation.Team))
          {
            foreach (Formation formation1 in (List<Formation>) closure_0.Formation.Team.FormationsIncludingSpecialAndEmpty)
            {
              if (formation1.CountOfUnits > 0 && formation1 != formation)
              {
                num += formation1.CountOfUnits;
                zero += formation1.GetAveragePositionOfUnits(false, false) * (float) formation1.CountOfUnits;
              }
            }
          }
        }
        return num > 0 ? zero * (1f / (float) num) : closure_0.AveragePosition;
      }), 5f);
      this._idealAverageDisplacement = new QueryData<float>((Func<float>) (() => MathF.Sqrt((float) ((double) formation.Width * (double) formation.Width * 0.5 * 0.5 + (double) formation.Depth * (double) formation.Depth * 0.5 * 0.5)) / 2f), 5f);
      this._formationIntegrityData = new QueryData<FormationQuerySystem.FormationIntegrityDataGroup>((Func<FormationQuerySystem.FormationIntegrityDataGroup>) (() =>
      {
        if (formation.CountOfUnitsWithoutDetachedOnes > 0)
        {
          float num14 = 0.0f;
          MBReadOnlyList<IFormationUnit> allUnits = formation.Arrangement.GetAllUnits();
          int num15 = 0;
          float distanceBetweenAgentsAdjustment = formation.QuerySystem.EstimatedInterval - formation.Interval;
          foreach (Agent unit in (List<IFormationUnit>) allUnits)
          {
            Vec2? defaultWithAdjustment = formation.Arrangement.GetLocalPositionOfUnitOrDefaultWithAdjustment((IFormationUnit) unit, distanceBetweenAgentsAdjustment);
            if (defaultWithAdjustment.HasValue)
            {
              Vec2 vec2 = formation.QuerySystem.EstimatedDirection.TransformToParentUnitF(defaultWithAdjustment.Value) + formation.CurrentPosition;
              ++num15;
              num14 += (vec2 - unit.Position.AsVec2).LengthSquared;
            }
          }
          if (num15 > 0)
          {
            float num16 = (float) ((double) num14 / (double) num15 * 4.0);
            float num17 = 0.0f;
            Vec2 zero = Vec2.Zero;
            float num18 = 0.0f;
            int num19 = 0;
            foreach (Agent unit in (List<IFormationUnit>) allUnits)
            {
              Vec2? defaultWithAdjustment = formation.Arrangement.GetLocalPositionOfUnitOrDefaultWithAdjustment((IFormationUnit) unit, distanceBetweenAgentsAdjustment);
              if (defaultWithAdjustment.HasValue)
              {
                float lengthSquared = (formation.QuerySystem.EstimatedDirection.TransformToParentUnitF(defaultWithAdjustment.Value) + formation.CurrentPosition - unit.Position.AsVec2).LengthSquared;
                if ((double) lengthSquared < (double) num16)
                {
                  num17 += lengthSquared;
                  zero += unit.AverageVelocity.AsVec2;
                  num18 += unit.MaximumForwardUnlimitedSpeed;
                  ++num19;
                }
              }
            }
            if (num19 > 0)
            {
              Vec2 vec2 = zero * (1f / (float) num19);
              float x = num17 / (float) num19;
              float num20 = num18 / (float) num19;
              FormationQuerySystem.FormationIntegrityDataGroup integrityDataGroup;
              integrityDataGroup.AverageVelocityExcludeFarAgents = vec2;
              integrityDataGroup.DeviationOfPositionsExcludeFarAgents = MathF.Sqrt(x);
              integrityDataGroup.AverageMaxUnlimitedSpeedExcludeFarAgents = num20;
              return integrityDataGroup;
            }
          }
        }
        FormationQuerySystem.FormationIntegrityDataGroup integrityDataGroup1;
        integrityDataGroup1.AverageVelocityExcludeFarAgents = Vec2.Zero;
        integrityDataGroup1.DeviationOfPositionsExcludeFarAgents = 0.0f;
        integrityDataGroup1.AverageMaxUnlimitedSpeedExcludeFarAgents = 0.0f;
        return integrityDataGroup1;
      }), 1f);
      this._localAllyUnits = new QueryData<MBList<Agent>>((Func<MBList<Agent>>) (() => mission.GetNearbyAllyAgents(closure_0.AveragePosition, 30f, formation.Team, closure_0._localAllyUnits.GetCachedValue())), 5f, new MBList<Agent>());
      this._localEnemyUnits = new QueryData<MBList<Agent>>((Func<MBList<Agent>>) (() => mission.GetNearbyEnemyAgents(closure_0.AveragePosition, 30f, formation.Team, closure_0._localEnemyUnits.GetCachedValue())), 5f, new MBList<Agent>());
      this._infantryUnitRatio = new QueryData<float>((Func<float>) (() => formation.CountOfUnits > 0 ? (float) formation.GetCountOfUnitsBelongingToPhysicalClass(FormationClass.Infantry, false) / (float) formation.CountOfUnits : 0.0f), 2.5f);
      this._hasShieldUnitRatio = new QueryData<float>((Func<float>) (() => formation.CountOfUnits > 0 ? (float) formation.GetCountOfUnitsWithCondition(new Func<Agent, bool>(QueryLibrary.HasShield)) / (float) formation.CountOfUnits : 0.0f), 2.5f);
      this._hasThrowingUnitRatio = new QueryData<float>((Func<float>) (() => formation.CountOfUnits > 0 ? (float) formation.GetCountOfUnitsWithCondition(new Func<Agent, bool>(QueryLibrary.HasThrown)) / (float) formation.CountOfUnits : 0.0f), 2.5f);
      this._rangedUnitRatio = new QueryData<float>((Func<float>) (() => formation.CountOfUnits > 0 ? (float) formation.GetCountOfUnitsBelongingToPhysicalClass(FormationClass.Ranged, false) / (float) formation.CountOfUnits : 0.0f), 2.5f);
      this._cavalryUnitRatio = new QueryData<float>((Func<float>) (() => formation.CountOfUnits > 0 ? (float) formation.GetCountOfUnitsBelongingToPhysicalClass(FormationClass.Cavalry, false) / (float) formation.CountOfUnits : 0.0f), 2.5f);
      this._rangedCavalryUnitRatio = new QueryData<float>((Func<float>) (() => formation.CountOfUnits > 0 ? (float) formation.GetCountOfUnitsBelongingToPhysicalClass(FormationClass.HorseArcher, false) / (float) formation.CountOfUnits : 0.0f), 2.5f);
      this._isMeleeFormation = new QueryData<bool>((Func<bool>) (() => (double) formationQuerySystem.InfantryUnitRatio + (double) formationQuerySystem.CavalryUnitRatio > (double) formationQuerySystem.RangedUnitRatio + (double) formationQuerySystem.RangedCavalryUnitRatio), 5f);
      this._isInfantryFormation = new QueryData<bool>((Func<bool>) (() => (double) formationQuerySystem.InfantryUnitRatio >= (double) formationQuerySystem.RangedUnitRatio && (double) formationQuerySystem.InfantryUnitRatio >= (double) formationQuerySystem.CavalryUnitRatio && (double) formationQuerySystem.InfantryUnitRatio >= (double) formationQuerySystem.RangedCavalryUnitRatio), 5f);
      this._hasShield = new QueryData<bool>((Func<bool>) (() => (double) formationQuerySystem.HasShieldUnitRatio >= 0.40000000596046448), 5f);
      this._hasThrowing = new QueryData<bool>((Func<bool>) (() => (double) formationQuerySystem.HasThrowingUnitRatio >= 0.5), 5f);
      this._isRangedFormation = new QueryData<bool>((Func<bool>) (() => (double) formationQuerySystem.RangedUnitRatio > (double) formationQuerySystem.InfantryUnitRatio && (double) formationQuerySystem.RangedUnitRatio >= (double) formationQuerySystem.CavalryUnitRatio && (double) formationQuerySystem.RangedUnitRatio >= (double) formationQuerySystem.RangedCavalryUnitRatio), 5f);
      this._isCavalryFormation = new QueryData<bool>((Func<bool>) (() => (double) formationQuerySystem.CavalryUnitRatio > (double) formationQuerySystem.InfantryUnitRatio && (double) formationQuerySystem.CavalryUnitRatio > (double) formationQuerySystem.RangedUnitRatio && (double) formationQuerySystem.CavalryUnitRatio >= (double) formationQuerySystem.RangedCavalryUnitRatio), 5f);
      this._isRangedCavalryFormation = new QueryData<bool>((Func<bool>) (() => (double) formationQuerySystem.RangedCavalryUnitRatio > (double) formationQuerySystem.InfantryUnitRatio && (double) formationQuerySystem.RangedCavalryUnitRatio > (double) formationQuerySystem.RangedUnitRatio && (double) formationQuerySystem.RangedCavalryUnitRatio > (double) formationQuerySystem.CavalryUnitRatio), 5f);
      QueryData<float>.SetupSyncGroup((IQueryData) this._infantryUnitRatio, (IQueryData) this._hasShieldUnitRatio, (IQueryData) this._rangedUnitRatio, (IQueryData) this._cavalryUnitRatio, (IQueryData) this._rangedCavalryUnitRatio, (IQueryData) this._isMeleeFormation, (IQueryData) this._isInfantryFormation, (IQueryData) this._hasShield, (IQueryData) this._isRangedFormation, (IQueryData) this._isCavalryFormation, (IQueryData) this._isRangedCavalryFormation);
      this._movementSpeedMaximum = new QueryData<float>(new Func<float>(formation.GetAverageMaximumMovementSpeedOfUnits), 10f);
      this._movementSpeed = new QueryData<float>(new Func<float>(formation.GetMovementSpeedOfUnits), 2f);
      this._maximumMissileRange = new QueryData<float>((Func<float>) (() =>
      {
        if (formation.CountOfUnits == 0)
          return 0.0f;
        float maximumRange = 0.0f;
        formation.ApplyActionOnEachUnit((Action<Agent>) (agent =>
        {
          if ((double) agent.MaximumMissileRange <= (double) maximumRange)
            return;
          maximumRange = agent.MaximumMissileRange;
        }));
        return maximumRange;
      }), 10f);
      this._missileRangeAdjusted = new QueryData<float>((Func<float>) (() =>
      {
        if (formation.CountOfUnits == 0)
          return 0.0f;
        float sum = 0.0f;
        formation.ApplyActionOnEachUnit((Action<Agent>) (agent => sum += agent.MissileRangeAdjusted));
        return sum / (float) formation.CountOfUnits;
      }), 10f);
      this._localInfantryUnitRatio = new QueryData<float>((Func<float>) (() => formationQuerySystem.LocalAllyUnits.Count != 0 ? 1f * (float) formationQuerySystem.LocalAllyUnits.Count<Agent>(new Func<Agent, bool>(QueryLibrary.IsInfantry)) / (float) formationQuerySystem.LocalAllyUnits.Count : 0.0f), 15f);
      this._localRangedUnitRatio = new QueryData<float>((Func<float>) (() => formationQuerySystem.LocalAllyUnits.Count != 0 ? 1f * (float) formationQuerySystem.LocalAllyUnits.Count<Agent>(new Func<Agent, bool>(QueryLibrary.IsRanged)) / (float) formationQuerySystem.LocalAllyUnits.Count : 0.0f), 15f);
      this._localCavalryUnitRatio = new QueryData<float>((Func<float>) (() => formationQuerySystem.LocalAllyUnits.Count != 0 ? 1f * (float) formationQuerySystem.LocalAllyUnits.Count<Agent>(new Func<Agent, bool>(QueryLibrary.IsCavalry)) / (float) formationQuerySystem.LocalAllyUnits.Count : 0.0f), 15f);
      this._localRangedCavalryUnitRatio = new QueryData<float>((Func<float>) (() => formationQuerySystem.LocalAllyUnits.Count != 0 ? 1f * (float) formationQuerySystem.LocalAllyUnits.Count<Agent>(new Func<Agent, bool>(QueryLibrary.IsRangedCavalry)) / (float) formationQuerySystem.LocalAllyUnits.Count : 0.0f), 15f);
      QueryData<float>.SetupSyncGroup((IQueryData) this._localInfantryUnitRatio, (IQueryData) this._localRangedUnitRatio, (IQueryData) this._localCavalryUnitRatio, (IQueryData) this._localRangedCavalryUnitRatio);
      this._localAllyPower = new QueryData<float>((Func<float>) (() => formationQuerySystem.LocalAllyUnits.Sum<Agent>((Func<Agent, float>) (lau => lau.CharacterPowerCached))), 5f);
      this._localEnemyPower = new QueryData<float>((Func<float>) (() => formationQuerySystem.LocalEnemyUnits.Sum<Agent>((Func<Agent, float>) (leu => leu.CharacterPowerCached))), 5f);
      this._localPowerRatio = new QueryData<float>((Func<float>) (() => MBMath.ClampFloat(MathF.Sqrt((float) (((double) formationQuerySystem.LocalAllyUnits.Sum<Agent>((Func<Agent, float>) (lau => lau.CharacterPowerCached)) + 1.0) * 1.0 / ((double) formationQuerySystem.LocalEnemyUnits.Sum<Agent>((Func<Agent, float>) (leu => leu.CharacterPowerCached)) + 1.0))), 0.5f, 1.75f)), 5f);
      this._casualtyRatio = new QueryData<float>((Func<float>) (() =>
      {
        if (formation.CountOfUnits == 0)
          return 0.0f;
        CasualtyHandler missionBehavior = mission.GetMissionBehavior<CasualtyHandler>();
        int countOfFormation = missionBehavior != null ? missionBehavior.GetCasualtyCountOfFormation(formation) : 0;
        return (float) (1.0 - (double) countOfFormation * 1.0 / (double) (countOfFormation + formation.CountOfUnits));
      }), 10f);
      this._isUnderRangedAttack = new QueryData<bool>((Func<bool>) (() => formation.GetUnderAttackTypeOfUnits(10f) == Agent.UnderAttackType.UnderRangedAttack), 3f);
      this._underRangedAttackRatio = new QueryData<float>((Func<float>) (() =>
      {
        float currentTime = MBCommon.GetTotalMissionTime();
        int unitsWithCondition = formation.GetCountOfUnitsWithCondition((Func<Agent, bool>) (agent => (double) currentTime - (double) agent.LastRangedHitTime < 10.0));
        return formation.CountOfUnits <= 0 ? 0.0f : (float) unitsWithCondition / (float) formation.CountOfUnits;
      }), 3f);
      this._makingRangedAttackRatio = new QueryData<float>((Func<float>) (() =>
      {
        float currentTime = MBCommon.GetTotalMissionTime();
        int unitsWithCondition = formation.GetCountOfUnitsWithCondition((Func<Agent, bool>) (agent => (double) currentTime - (double) agent.LastRangedAttackTime < 10.0));
        return formation.CountOfUnits <= 0 ? 0.0f : (float) unitsWithCondition / (float) formation.CountOfUnits;
      }), 3f);
      this._closestEnemyAgent = new QueryData<Agent>((Func<Agent>) (() =>
      {
        float num21 = float.MaxValue;
        Agent agent = (Agent) null;
        foreach (TaleWorlds.MountAndBlade.Team team in (List<TaleWorlds.MountAndBlade.Team>) mission.Teams)
        {
          if (team.IsEnemyOf(formation.Team))
          {
            foreach (Agent activeAgent in (List<Agent>) team.ActiveAgents)
            {
              float num22 = activeAgent.Position.DistanceSquared(new Vec3(closure_0.AveragePosition, closure_0.MedianPosition.GetNavMeshZ()));
              if ((double) num22 < (double) num21)
              {
                num21 = num22;
                agent = activeAgent;
              }
            }
          }
        }
        return agent;
      }), 1.5f);
      this._closestEnemyFormation = new QueryData<Formation>((Func<Formation>) (() =>
      {
        float num23 = float.MaxValue;
        Formation formation2 = (Formation) null;
        foreach (TaleWorlds.MountAndBlade.Team team in (List<TaleWorlds.MountAndBlade.Team>) mission.Teams)
        {
          if (team.IsEnemyOf(formation.Team))
          {
            foreach (Formation formation3 in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
            {
              if (formation3.CountOfUnits > 0)
              {
                float num24 = formation3.QuerySystem.MedianPosition.GetNavMeshVec3().DistanceSquared(new Vec3(closure_0.AveragePosition, closure_0.MedianPosition.GetNavMeshZ()));
                if ((double) num24 < (double) num23)
                {
                  num23 = num24;
                  formation2 = formation3;
                }
              }
            }
          }
        }
        return formation2;
      }), 1.5f);
      this._closestSignificantlyLargeEnemyFormation = new QueryData<Formation>((Func<Formation>) (() =>
      {
        float num25 = float.MaxValue;
        Formation formation4 = (Formation) null;
        float num26 = float.MaxValue;
        Formation formation5 = (Formation) null;
        foreach (TaleWorlds.MountAndBlade.Team team in (List<TaleWorlds.MountAndBlade.Team>) mission.Teams)
        {
          if (team.IsEnemyOf(formation.Team))
          {
            foreach (Formation formation6 in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
            {
              if (formation6.CountOfUnits > 0)
              {
                if ((double) formation6.QuerySystem.FormationPower / (double) closure_0.FormationPower > 0.20000000298023224 || (double) formation6.QuerySystem.FormationPower * (double) closure_0.Team.TeamPower / ((double) formation6.Team.QuerySystem.TeamPower * (double) closure_0.FormationPower) > 0.20000000298023224)
                {
                  float num27 = formation6.QuerySystem.MedianPosition.GetNavMeshVec3().DistanceSquared(new Vec3(closure_0.AveragePosition, closure_0.MedianPosition.GetNavMeshZ()));
                  if ((double) num27 < (double) num25)
                  {
                    num25 = num27;
                    formation4 = formation6;
                  }
                }
                else if (formation4 == null)
                {
                  float num28 = formation6.QuerySystem.MedianPosition.GetNavMeshVec3().DistanceSquared(new Vec3(closure_0.AveragePosition, closure_0.MedianPosition.GetNavMeshZ()));
                  if ((double) num28 < (double) num26)
                  {
                    num26 = num28;
                    formation5 = formation6;
                  }
                }
              }
            }
          }
        }
        return formation4 ?? formation5;
      }), 1.5f);
      this._fastestSignificantlyLargeEnemyFormation = new QueryData<Formation>((Func<Formation>) (() =>
      {
        float num29 = float.MaxValue;
        Formation formation7 = (Formation) null;
        float num30 = float.MaxValue;
        Formation formation8 = (Formation) null;
        foreach (TaleWorlds.MountAndBlade.Team team in (List<TaleWorlds.MountAndBlade.Team>) mission.Teams)
        {
          if (team.IsEnemyOf(formation.Team))
          {
            foreach (Formation formation9 in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
            {
              if (formation9.CountOfUnits > 0)
              {
                if ((double) formation9.QuerySystem.FormationPower / (double) closure_0.FormationPower > 0.20000000298023224 || (double) formation9.QuerySystem.FormationPower * (double) closure_0.Team.TeamPower / ((double) formation9.Team.QuerySystem.TeamPower * (double) closure_0.FormationPower) > 0.20000000298023224)
                {
                  float num31 = formation9.QuerySystem.MedianPosition.GetNavMeshVec3().DistanceSquared(new Vec3(closure_0.AveragePosition, closure_0.MedianPosition.GetNavMeshZ())) / (formation9.QuerySystem.MovementSpeed * formation9.QuerySystem.MovementSpeed);
                  if ((double) num31 < (double) num29)
                  {
                    num29 = num31;
                    formation7 = formation9;
                  }
                }
                else if (formation7 == null)
                {
                  float num32 = formation9.QuerySystem.MedianPosition.GetNavMeshVec3().DistanceSquared(new Vec3(closure_0.AveragePosition, closure_0.MedianPosition.GetNavMeshZ())) / (formation9.QuerySystem.MovementSpeed * formation9.QuerySystem.MovementSpeed);
                  if ((double) num32 < (double) num30)
                  {
                    num30 = num32;
                    formation8 = formation9;
                  }
                }
              }
            }
          }
        }
        return formation7 ?? formation8;
      }), 1.5f);
      this._mainClass = new QueryData<FormationClass>((Func<FormationClass>) (() =>
      {
        FormationClass formationClass = FormationClass.Infantry;
        float num = formationQuerySystem.InfantryUnitRatio;
        if ((double) formationQuerySystem.RangedUnitRatio > (double) num)
        {
          formationClass = FormationClass.Ranged;
          num = formationQuerySystem.RangedUnitRatio;
        }
        if ((double) formationQuerySystem.CavalryUnitRatio > (double) num)
        {
          formationClass = FormationClass.Cavalry;
          num = formationQuerySystem.CavalryUnitRatio;
        }
        if ((double) formationQuerySystem.RangedCavalryUnitRatio > (double) num)
          formationClass = FormationClass.HorseArcher;
        return formationClass;
      }), 15f);
      this._mainFormation = new QueryData<Formation>((Func<Formation>) (() => formation.Team.FormationsIncludingSpecialAndEmpty.FirstOrDefault<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation && f != formation))), 15f);
      this._mainFormationReliabilityFactor = new QueryData<float>((Func<float>) (() => formationQuerySystem.MainFormation == null ? 0.0f : (float) ((formationQuerySystem.MainFormation.GetReadonlyMovementOrderReference().OrderEnum == MovementOrder.MovementOrderEnum.Charge || formationQuerySystem.MainFormation.GetReadonlyMovementOrderReference().OrderEnum == MovementOrder.MovementOrderEnum.ChargeToTarget || ref formationQuerySystem.MainFormation.GetReadonlyMovementOrderReference() == MovementOrder.MovementOrderRetreat ? 0.5 : 1.0) * (formationQuerySystem.MainFormation.GetUnderAttackTypeOfUnits(10f) == Agent.UnderAttackType.UnderMeleeAttack ? 0.800000011920929 : 1.0))), 5f);
      this._weightedAverageEnemyPosition = new QueryData<Vec2>((Func<Vec2>) (() => formationQuerySystem.Formation.Team.GetWeightedAverageOfEnemies(formationQuerySystem.Formation.CurrentPosition)), 0.5f);
      this._highGroundCloseToForeseenBattleGround = new QueryData<Vec2>((Func<Vec2>) (() =>
      {
        WorldPosition medianPosition = closure_0.MedianPosition;
        medianPosition.SetVec2(closure_0.AveragePosition);
        WorldPosition formationPosition = closure_0.Team.MedianTargetFormationPosition;
        return mission.FindPositionWithBiggestSlopeTowardsDirectionInSquare(ref medianPosition, closure_0.AveragePosition.Distance(closure_0.Team.MedianTargetFormationPosition.AsVec2) * 0.5f, ref formationPosition).AsVec2;
      }), 10f);
      this._insideCastleUnitCountIncludingUnpositioned = new QueryData<int>((Func<int>) (() => formationQuerySystem.Formation.CountUnitsOnNavMeshIDMod10(1, false)), 3f);
      this._insideCastleUnitCountPositioned = new QueryData<int>((Func<int>) (() => formationQuerySystem.Formation.CountUnitsOnNavMeshIDMod10(1, true)), 3f);
      this.InitializeTelemetryScopeNames();
    }

    public void EvaluateAllPreliminaryQueryData()
    {
      float currentTime = Mission.Current.CurrentTime;
      this._infantryUnitRatio.Evaluate(currentTime);
      this._hasShieldUnitRatio.Evaluate(currentTime);
      this._rangedUnitRatio.Evaluate(currentTime);
      this._cavalryUnitRatio.Evaluate(currentTime);
      this._rangedCavalryUnitRatio.Evaluate(currentTime);
      this._isInfantryFormation.Evaluate(currentTime);
      this._hasShield.Evaluate(currentTime);
      this._isRangedFormation.Evaluate(currentTime);
      this._isCavalryFormation.Evaluate(currentTime);
      this._isRangedCavalryFormation.Evaluate(currentTime);
      this._isMeleeFormation.Evaluate(currentTime);
    }

    public void ForceExpireCavalryUnitRatio() => this._cavalryUnitRatio.Expire();

    public void Expire()
    {
      this._formationPower.Expire();
      this._formationMeleeFightingPower.Expire();
      this._averagePosition.Expire();
      this._currentVelocity.Expire();
      this._estimatedDirection.Expire();
      this._medianPosition.Expire();
      this._averageAllyPosition.Expire();
      this._idealAverageDisplacement.Expire();
      this._formationIntegrityData.Expire();
      this._localAllyUnits.Expire();
      this._localEnemyUnits.Expire();
      this._mainClass.Expire();
      this._infantryUnitRatio.Expire();
      this._hasShieldUnitRatio.Expire();
      this._rangedUnitRatio.Expire();
      this._cavalryUnitRatio.Expire();
      this._rangedCavalryUnitRatio.Expire();
      this._isMeleeFormation.Expire();
      this._isInfantryFormation.Expire();
      this._hasShield.Expire();
      this._isRangedFormation.Expire();
      this._isCavalryFormation.Expire();
      this._isRangedCavalryFormation.Expire();
      this._movementSpeedMaximum.Expire();
      this._movementSpeed.Expire();
      this._maximumMissileRange.Expire();
      this._missileRangeAdjusted.Expire();
      this._localInfantryUnitRatio.Expire();
      this._localRangedUnitRatio.Expire();
      this._localCavalryUnitRatio.Expire();
      this._localRangedCavalryUnitRatio.Expire();
      this._localAllyPower.Expire();
      this._localEnemyPower.Expire();
      this._localPowerRatio.Expire();
      this._casualtyRatio.Expire();
      this._isUnderRangedAttack.Expire();
      this._underRangedAttackRatio.Expire();
      this._makingRangedAttackRatio.Expire();
      this._mainFormation.Expire();
      this._mainFormationReliabilityFactor.Expire();
      this._weightedAverageEnemyPosition.Expire();
      this._closestEnemyFormation.Expire();
      this._closestSignificantlyLargeEnemyFormation.Expire();
      this._fastestSignificantlyLargeEnemyFormation.Expire();
      this._highGroundCloseToForeseenBattleGround.Expire();
    }

    public void ExpireAfterUnitAddRemove()
    {
      this._formationPower.Expire();
      float currentTime = Mission.Current.CurrentTime;
      this._infantryUnitRatio.Evaluate(currentTime);
      this._hasShieldUnitRatio.Evaluate(currentTime);
      this._rangedUnitRatio.Evaluate(currentTime);
      this._cavalryUnitRatio.Evaluate(currentTime);
      this._rangedCavalryUnitRatio.Evaluate(currentTime);
      this._isMeleeFormation.Evaluate(currentTime);
      this._isInfantryFormation.Evaluate(currentTime);
      this._hasShield.Evaluate(currentTime);
      this._isRangedFormation.Evaluate(currentTime);
      this._isCavalryFormation.Evaluate(currentTime);
      this._isRangedCavalryFormation.Evaluate(currentTime);
      this._mainClass.Evaluate(currentTime);
      if (this.Formation.CountOfUnits != 0)
        return;
      this._infantryUnitRatio.SetValue(0.0f, currentTime);
      this._hasShieldUnitRatio.SetValue(0.0f, currentTime);
      this._rangedUnitRatio.SetValue(0.0f, currentTime);
      this._cavalryUnitRatio.SetValue(0.0f, currentTime);
      this._rangedCavalryUnitRatio.SetValue(0.0f, currentTime);
      this._isMeleeFormation.SetValue(false, currentTime);
      this._isInfantryFormation.SetValue(true, currentTime);
      this._hasShield.SetValue(false, currentTime);
      this._isRangedFormation.SetValue(false, currentTime);
      this._isCavalryFormation.SetValue(false, currentTime);
      this._isRangedCavalryFormation.SetValue(false, currentTime);
    }

    private void InitializeTelemetryScopeNames()
    {
    }

    public Vec2 GetAveragePositionWithMaxAge(float age)
    {
      return this._averagePosition.GetCachedValueWithMaxAge(age);
    }

    public float GetClassWeightedFactor(
      float infantryWeight,
      float rangedWeight,
      float cavalryWeight,
      float rangedCavalryWeight)
    {
      return (float) ((double) this.InfantryUnitRatio * (double) infantryWeight + (double) this.RangedUnitRatio * (double) rangedWeight + (double) this.CavalryUnitRatio * (double) cavalryWeight + (double) this.RangedCavalryUnitRatio * (double) rangedCavalryWeight);
    }

    public struct FormationIntegrityDataGroup
    {
      public Vec2 AverageVelocityExcludeFarAgents;
      public float DeviationOfPositionsExcludeFarAgents;
      public float AverageMaxUnlimitedSpeedExcludeFarAgents;
    }
  }
}
