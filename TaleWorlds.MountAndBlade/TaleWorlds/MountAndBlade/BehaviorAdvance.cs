// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorAdvance
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class BehaviorAdvance : BehaviorComponent
  {
    private bool _isInShieldWallDistance;
    private bool _switchedToShieldWallRecently;
    private Timer _switchedToShieldWallTimer;
    private Vec2 _reformPosition = Vec2.Invalid;

    public BehaviorAdvance(Formation formation)
      : base(formation)
    {
      this.BehaviorCoherence = 0.8f;
      this._switchedToShieldWallTimer = new Timer(0.0f, 0.0f);
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      FormationQuerySystem.FormationIntegrityDataGroup formationIntegrityData = this.Formation.QuerySystem.FormationIntegrityData;
      if (this._switchedToShieldWallRecently && !this._switchedToShieldWallTimer.Check(Mission.Current.CurrentTime) && (double) formationIntegrityData.DeviationOfPositionsExcludeFarAgents > (double) formationIntegrityData.AverageMaxUnlimitedSpeedExcludeFarAgents * 0.5)
      {
        WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
        if (this._reformPosition.IsValid)
        {
          medianPosition.SetVec2(this._reformPosition);
        }
        else
        {
          this._reformPosition = this.Formation.QuerySystem.AveragePosition + (this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized() * 5f;
          medianPosition.SetVec2(this._reformPosition);
        }
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
      else
      {
        this._switchedToShieldWallRecently = false;
        bool flag1 = false;
        if (this.Formation.QuerySystem.ClosestEnemyFormation != null && this.Formation.QuerySystem.ClosestEnemyFormation.IsCavalryFormation)
        {
          Vec2 vec2 = this.Formation.QuerySystem.AveragePosition - this.Formation.QuerySystem.ClosestEnemyFormation.AveragePosition;
          double num1 = (double) vec2.Normalize();
          Vec2 currentVelocity = this.Formation.QuerySystem.ClosestEnemyFormation.CurrentVelocity;
          float num2 = currentVelocity.Normalize();
          if (num1 < 30.0 && (double) num2 > 2.0 && (double) vec2.DotProduct(currentVelocity) > 0.5)
          {
            flag1 = true;
            WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
            if (this._reformPosition.IsValid)
            {
              medianPosition.SetVec2(this._reformPosition);
            }
            else
            {
              this._reformPosition = this.Formation.QuerySystem.AveragePosition + (this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized() * 5f;
              medianPosition.SetVec2(this._reformPosition);
            }
            this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
          }
        }
        if (flag1)
          return;
        this._reformPosition = Vec2.Invalid;
        int num = 0;
        bool flag2 = false;
        foreach (Team team in (List<Team>) Mission.Current.Teams)
        {
          if (team.IsEnemyOf(this.Formation.Team))
          {
            foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
            {
              if (formation.CountOfUnits > 0)
              {
                ++num;
                flag2 = num == 1;
                if (num > 1)
                  break;
              }
            }
          }
        }
        FormationQuerySystem formationQuerySystem = flag2 ? this.Formation.QuerySystem.ClosestEnemyFormation : this.Formation.QuerySystem.Team.MedianTargetFormation;
        if (formationQuerySystem != null)
        {
          WorldPosition medianPosition = formationQuerySystem.MedianPosition;
          medianPosition.SetVec2(medianPosition.AsVec2 + formationQuerySystem.Formation.Direction * formationQuerySystem.Formation.Depth * 0.5f);
          Vec2 direction = -formationQuerySystem.Formation.Direction;
          this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
        }
        else
        {
          WorldPosition position = flag2 ? this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition : this.Formation.QuerySystem.Team.MedianTargetFormationPosition;
          Vec2 direction = (this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized();
          this.CurrentOrder = MovementOrder.MovementOrderMove(position);
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
        }
      }
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this._isInShieldWallDistance = false;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this.Formation.PhysicalClass.IsMeleeInfantry())
      {
        bool flag = false;
        if (this.Formation.QuerySystem.ClosestEnemyFormation != null && this.Formation.QuerySystem.IsUnderRangedAttack)
        {
          float num = this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2);
          if ((double) num < 6400.0 + (this._isInShieldWallDistance ? 3600.0 : 0.0) && (double) num > 100.0 - (this._isInShieldWallDistance ? 75.0 : 0.0))
            flag = true;
        }
        if (flag != this._isInShieldWallDistance)
        {
          this._isInShieldWallDistance = flag;
          if (this._isInShieldWallDistance)
          {
            if (this.Formation.QuerySystem.HasShield)
              this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderShieldWall;
            else
              this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
            this._switchedToShieldWallRecently = true;
            this._switchedToShieldWallTimer.Reset(Mission.Current.CurrentTime, 5f);
          }
          else
            this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
        }
      }
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }

    protected override float GetAiWeight() => 1f;
  }
}
