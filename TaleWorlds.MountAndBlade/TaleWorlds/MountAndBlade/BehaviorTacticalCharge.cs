// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorTacticalCharge
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorTacticalCharge : BehaviorComponent
  {
    private BehaviorTacticalCharge.ChargeState _chargeState;
    private FormationQuerySystem _lastTarget;
    private Vec2 _initialChargeDirection;
    private float _desiredChargeStopDistance;
    private WorldPosition _lastReformDestination;
    private Timer _chargingPastTimer;
    private Timer _reformTimer;
    private Vec2 _bracePosition = Vec2.Invalid;

    public BehaviorTacticalCharge(Formation formation)
      : base(formation)
    {
      this._lastTarget = (FormationQuerySystem) null;
      this.CurrentOrder = MovementOrder.MovementOrderCharge;
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this._chargeState = BehaviorTacticalCharge.ChargeState.Undetermined;
      this.BehaviorCoherence = 0.5f;
      this._desiredChargeStopDistance = 20f;
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      if (this.Formation.AI.ActiveBehavior != this)
        return;
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
    }

    private BehaviorTacticalCharge.ChargeState CheckAndChangeState()
    {
      BehaviorTacticalCharge.ChargeState chargeState = this._chargeState;
      if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
      {
        chargeState = BehaviorTacticalCharge.ChargeState.Undetermined;
      }
      else
      {
        switch (this._chargeState)
        {
          case BehaviorTacticalCharge.ChargeState.Undetermined:
            if (this.Formation.QuerySystem.ClosestEnemyFormation != null && (!this.Formation.QuerySystem.IsCavalryFormation && !this.Formation.QuerySystem.IsRangedCavalryFormation || (double) this.Formation.QuerySystem.AveragePosition.Distance(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / (double) this.Formation.QuerySystem.MovementSpeedMaximum <= 5.0))
            {
              chargeState = BehaviorTacticalCharge.ChargeState.Charging;
              break;
            }
            break;
          case BehaviorTacticalCharge.ChargeState.Charging:
            if (this._lastTarget == null || this._lastTarget.Formation.CountOfUnits == 0)
            {
              chargeState = BehaviorTacticalCharge.ChargeState.Undetermined;
              break;
            }
            if (!this.Formation.QuerySystem.IsCavalryFormation && !this.Formation.QuerySystem.IsRangedCavalryFormation)
            {
              if (!this.Formation.QuerySystem.IsInfantryFormation || !this.Formation.QuerySystem.ClosestEnemyFormation.IsCavalryFormation)
              {
                chargeState = BehaviorTacticalCharge.ChargeState.Charging;
                break;
              }
              Vec2 vec2 = this.Formation.QuerySystem.AveragePosition - this.Formation.QuerySystem.ClosestEnemyFormation.AveragePosition;
              double num1 = (double) vec2.Normalize();
              Vec2 currentVelocity = this.Formation.QuerySystem.ClosestEnemyFormation.CurrentVelocity;
              double num2 = (double) currentVelocity.Normalize();
              if (num1 / num2 <= 6.0 && (double) vec2.DotProduct(currentVelocity) > 0.5)
              {
                this._chargeState = BehaviorTacticalCharge.ChargeState.Bracing;
                break;
              }
              break;
            }
            if ((double) this._initialChargeDirection.DotProduct(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition) <= 0.0)
            {
              chargeState = BehaviorTacticalCharge.ChargeState.ChargingPast;
              break;
            }
            break;
          case BehaviorTacticalCharge.ChargeState.ChargingPast:
            if (this._chargingPastTimer.Check(Mission.Current.CurrentTime) || (double) this.Formation.QuerySystem.AveragePosition.Distance(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) >= (double) this._desiredChargeStopDistance)
            {
              chargeState = BehaviorTacticalCharge.ChargeState.Reforming;
              break;
            }
            break;
          case BehaviorTacticalCharge.ChargeState.Reforming:
            if (this._reformTimer.Check(Mission.Current.CurrentTime) || (double) this.Formation.QuerySystem.AveragePosition.Distance(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) <= 30.0)
            {
              chargeState = BehaviorTacticalCharge.ChargeState.Charging;
              break;
            }
            break;
          case BehaviorTacticalCharge.ChargeState.Bracing:
            bool flag = false;
            if (this.Formation.QuerySystem.IsInfantryFormation && this.Formation.QuerySystem.ClosestEnemyFormation.IsCavalryFormation)
            {
              Vec2 vec2 = this.Formation.QuerySystem.AveragePosition - this.Formation.QuerySystem.ClosestEnemyFormation.AveragePosition;
              double num3 = (double) vec2.Normalize();
              Vec2 currentVelocity = this.Formation.QuerySystem.ClosestEnemyFormation.CurrentVelocity;
              double num4 = (double) currentVelocity.Normalize();
              if (num3 / num4 <= 8.0 && (double) vec2.DotProduct(currentVelocity) > 0.33000001311302185)
                flag = true;
            }
            if (!flag)
            {
              this._bracePosition = Vec2.Invalid;
              this._chargeState = BehaviorTacticalCharge.ChargeState.Charging;
              break;
            }
            break;
        }
      }
      return chargeState;
    }

    protected override void CalculateCurrentOrder()
    {
      if (this.Formation.QuerySystem.ClosestEnemyFormation == null || (this.Formation.QuerySystem.IsCavalryFormation || this.Formation.QuerySystem.IsRangedCavalryFormation) && (this.Formation.QuerySystem.ClosestEnemyFormation.IsCavalryFormation || this.Formation.QuerySystem.ClosestEnemyFormation.IsRangedCavalryFormation))
      {
        this.CurrentOrder = MovementOrder.MovementOrderCharge;
      }
      else
      {
        BehaviorTacticalCharge.ChargeState chargeState = this.CheckAndChangeState();
        Vec2 vec2_1;
        if (chargeState != this._chargeState)
        {
          this._chargeState = chargeState;
          switch (this._chargeState)
          {
            case BehaviorTacticalCharge.ChargeState.Undetermined:
              this.CurrentOrder = MovementOrder.MovementOrderCharge;
              break;
            case BehaviorTacticalCharge.ChargeState.Charging:
              this._lastTarget = this.Formation.QuerySystem.ClosestEnemyFormation;
              if (this.Formation.QuerySystem.IsCavalryFormation || this.Formation.QuerySystem.IsRangedCavalryFormation)
              {
                this._initialChargeDirection = this._lastTarget.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition;
                this._desiredChargeStopDistance = MBMath.ClampFloat(this._initialChargeDirection.Normalize(), 20f, 50f);
                break;
              }
              break;
            case BehaviorTacticalCharge.ChargeState.ChargingPast:
              this._chargingPastTimer = new Timer(Mission.Current.CurrentTime, 5f);
              break;
            case BehaviorTacticalCharge.ChargeState.Reforming:
              this._reformTimer = new Timer(Mission.Current.CurrentTime, 2f);
              break;
            case BehaviorTacticalCharge.ChargeState.Bracing:
              vec2_1 = this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition;
              this._bracePosition = this.Formation.QuerySystem.AveragePosition + vec2_1.Normalized() * 5f;
              break;
          }
        }
        switch (this._chargeState)
        {
          case BehaviorTacticalCharge.ChargeState.Undetermined:
            if (this.Formation.QuerySystem.ClosestEnemyFormation != null && (this.Formation.QuerySystem.IsCavalryFormation || this.Formation.QuerySystem.IsRangedCavalryFormation))
              this.CurrentOrder = MovementOrder.MovementOrderMove(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition);
            else
              this.CurrentOrder = MovementOrder.MovementOrderCharge;
            this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
            break;
          case BehaviorTacticalCharge.ChargeState.Charging:
            if (!this.Formation.QuerySystem.IsCavalryFormation && !this.Formation.QuerySystem.IsRangedCavalryFormation)
            {
              if ((double) this.Formation.Width >= (double) this.Formation.QuerySystem.ClosestEnemyFormation.Formation.Width * (1.0 + (this.Formation.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Charge ? 0.10000000149011612 : 0.0)))
              {
                this.CurrentOrder = MovementOrder.MovementOrderCharge;
                this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
                break;
              }
              this.CurrentOrder = MovementOrder.MovementOrderMove(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition);
              this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
              break;
            }
            vec2_1 = this._lastTarget.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition;
            Vec2 direction1 = vec2_1.Normalized();
            WorldPosition medianPosition1 = this._lastTarget.MedianPosition;
            Vec2 vec2_2 = medianPosition1.AsVec2 + direction1 * this._desiredChargeStopDistance;
            medianPosition1.SetVec2(vec2_2);
            this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition1);
            this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction1);
            break;
          case BehaviorTacticalCharge.ChargeState.ChargingPast:
            vec2_1 = this.Formation.QuerySystem.AveragePosition - this._lastTarget.MedianPosition.AsVec2;
            Vec2 direction2 = vec2_1.Normalized();
            this._lastReformDestination = this._lastTarget.MedianPosition;
            this._lastReformDestination.SetVec2(this._lastTarget.MedianPosition.AsVec2 + direction2 * this._desiredChargeStopDistance);
            this.CurrentOrder = MovementOrder.MovementOrderMove(this._lastReformDestination);
            this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction2);
            break;
          case BehaviorTacticalCharge.ChargeState.Reforming:
            this.CurrentOrder = MovementOrder.MovementOrderMove(this._lastReformDestination);
            this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
            break;
          case BehaviorTacticalCharge.ChargeState.Bracing:
            WorldPosition medianPosition2 = this.Formation.QuerySystem.MedianPosition;
            medianPosition2.SetVec2(this._bracePosition);
            this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition2);
            break;
        }
      }
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this.Formation.QuerySystem.IsCavalryFormation || this.Formation.QuerySystem.IsRangedCavalryFormation)
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderSkein;
      else
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      if (this.Formation.QuerySystem.ClosestEnemyFormation != null)
      {
        behaviorString.SetTextVariable("AI_SIDE", GameTexts.FindText("str_formation_ai_side_strings", this.Formation.QuerySystem.ClosestEnemyFormation.Formation.AI.Side.ToString()));
        behaviorString.SetTextVariable("CLASS", GameTexts.FindText("str_formation_class_string", this.Formation.QuerySystem.ClosestEnemyFormation.Formation.PhysicalClass.GetName()));
      }
      return behaviorString;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    private float CalculateAIWeight()
    {
      FormationQuerySystem querySystem = this.Formation.QuerySystem;
      if (querySystem.ClosestEnemyFormation == null)
        return 0.0f;
      Vec2 vec2 = querySystem.AveragePosition;
      ref Vec2 local = ref vec2;
      WorldPosition medianPosition1 = querySystem.ClosestEnemyFormation.MedianPosition;
      Vec2 asVec2_1 = medianPosition1.AsVec2;
      float num1 = local.Distance(asVec2_1) / querySystem.MovementSpeedMaximum;
      float num2 = querySystem.IsCavalryFormation || querySystem.IsRangedCavalryFormation ? ((double) num1 > 4.0 ? MBMath.Lerp(0.8f, 1.2f, (float) (1.0 - ((double) MBMath.ClampFloat(num1, 4f, 10f) - 4.0) / 6.0)) : MBMath.Lerp(0.8f, 1.2f, MBMath.ClampFloat(num1, 0.0f, 4f) / 4f)) : MBMath.Lerp(0.8f, 1f, (float) (1.0 - ((double) MBMath.ClampFloat(num1, 4f, 10f) - 4.0) / 6.0));
      float num3 = 1f;
      if ((double) num1 <= 4.0)
      {
        Vec2 averagePosition = querySystem.AveragePosition;
        medianPosition1 = querySystem.ClosestEnemyFormation.MedianPosition;
        Vec2 asVec2_2 = medianPosition1.AsVec2;
        vec2 = averagePosition - asVec2_2;
        float length = vec2.Length;
        if ((double) length > 1.4012984643248171E-45)
        {
          WorldPosition medianPosition2 = querySystem.MedianPosition;
          medianPosition2.SetVec2(querySystem.AveragePosition);
          float navMeshZ1 = medianPosition2.GetNavMeshZ();
          if (!float.IsNaN(navMeshZ1))
          {
            double num4 = (double) navMeshZ1;
            medianPosition1 = querySystem.ClosestEnemyFormation.MedianPosition;
            double navMeshZ2 = (double) medianPosition1.GetNavMeshZ();
            num3 = MBMath.Lerp(0.9f, 1.1f, (float) (((double) MBMath.ClampFloat((float) (num4 - navMeshZ2) / length, -0.58f, 0.58f) + 0.57999998331069946) / 1.1599999666213989));
          }
        }
      }
      float num5 = 1f;
      if ((double) num1 <= 4.0 && (double) num1 >= 1.5)
        num5 = 1.2f;
      float num6 = 1f;
      if ((double) num1 <= 4.0 && querySystem.ClosestEnemyFormation.ClosestEnemyFormation != querySystem)
        num6 = 1.2f;
      float num7 = querySystem.GetClassWeightedFactor(1f, 1f, 1.5f, 1.5f) * querySystem.ClosestEnemyFormation.GetClassWeightedFactor(1f, 1f, 0.5f, 0.5f);
      return num2 * num3 * num5 * num6 * num7;
    }

    protected override float GetAiWeight()
    {
      float aiWeight = 0.0f;
      if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
        return 0.0f;
      bool flag1;
      if ((this.Formation.Team.TeamAI is TeamAISiegeComponent ? 1 : 0) == 0)
        flag1 = true;
      else if ((this.Formation.Team.TeamAI as TeamAISiegeComponent).CalculateIsChargePastWallsApplicable(this.Formation.AI.Side))
      {
        flag1 = true;
      }
      else
      {
        bool flag2 = TeamAISiegeComponent.IsFormationInsideCastle(this.Formation.QuerySystem.ClosestEnemyFormation.Formation, true, 0.51f);
        flag1 = flag2 == TeamAISiegeComponent.IsFormationInsideCastle(this.Formation, true, flag2 ? 0.9f : 0.1f);
      }
      if (flag1)
        aiWeight = this.CalculateAIWeight();
      return aiWeight;
    }

    private enum ChargeState
    {
      Undetermined,
      Charging,
      ChargingPast,
      Reforming,
      Bracing,
    }
  }
}
