// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorMountedSkirmish
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorMountedSkirmish : BehaviorComponent
  {
    private bool _engaging = true;
    private bool _isEnemyReachable = true;

    public BehaviorMountedSkirmish(Formation formation)
      : base(formation)
    {
      this.CalculateCurrentOrder();
      this.BehaviorCoherence = 0.5f;
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition medianPosition1 = this.Formation.QuerySystem.MedianPosition;
      this._isEnemyReachable = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && (!(this.Formation.Team.TeamAI is TeamAISiegeComponent) || !TeamAISiegeComponent.IsFormationInsideCastle(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation, false));
      if (!this._isEnemyReachable)
      {
        medianPosition1.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      else
      {
        int num1 = (double) (this.Formation.QuerySystem.AverageAllyPosition - this.Formation.Team.QuerySystem.AverageEnemyPosition).LengthSquared <= 3600.0 ? 1 : 0;
        bool engaging = this._engaging;
        bool flag1;
        Vec2 vec2_1;
        WorldPosition medianPosition2;
        if (num1 != 0)
          flag1 = true;
        else if (!this._engaging)
        {
          vec2_1 = this.Formation.QuerySystem.AveragePosition - this.Formation.QuerySystem.AverageAllyPosition;
          flag1 = (double) vec2_1.LengthSquared <= 3600.0;
        }
        else if ((double) this.Formation.QuerySystem.UnderRangedAttackRatio > (double) this.Formation.QuerySystem.MakingRangedAttackRatio)
          flag1 = false;
        else if (this.Formation.QuerySystem.FastestSignificantlyLargeEnemyFormation.IsCavalryFormation || this.Formation.QuerySystem.FastestSignificantlyLargeEnemyFormation.IsRangedCavalryFormation)
        {
          Vec2 averagePosition = this.Formation.QuerySystem.AveragePosition;
          medianPosition2 = this.Formation.QuerySystem.FastestSignificantlyLargeEnemyFormation.MedianPosition;
          Vec2 asVec2 = medianPosition2.AsVec2;
          flag1 = (double) (averagePosition - asVec2).LengthSquared / ((double) this.Formation.QuerySystem.FastestSignificantlyLargeEnemyFormation.MovementSpeed * (double) this.Formation.QuerySystem.FastestSignificantlyLargeEnemyFormation.MovementSpeed) >= 16.0;
        }
        else
          flag1 = true;
        this._engaging = flag1;
        if (this._engaging)
        {
          vec2_1 = this.Formation.QuerySystem.AveragePosition - this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.AveragePosition;
          vec2_1 = vec2_1.Normalized();
          Vec2 vec2_2 = vec2_1.LeftVec();
          FormationQuerySystem largeEnemyFormation = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation;
          float num2 = (float) (50.0 + ((double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation.Width + (double) this.Formation.Depth) * 0.5);
          float num3 = 0.0f;
          Formation formation1 = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation;
          foreach (Team team in (List<Team>) Mission.Current.Teams)
          {
            if (team.IsEnemyOf(this.Formation.Team))
            {
              foreach (Formation formation2 in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
              {
                if (formation2.CountOfUnits > 0 && formation2.QuerySystem != largeEnemyFormation)
                {
                  Vec2 v = formation2.QuerySystem.AveragePosition - largeEnemyFormation.AveragePosition;
                  float num4 = v.Normalize();
                  if ((double) vec2_2.DotProduct(v) > 0.800000011920929 && (double) num4 < (double) num2 && (double) num4 > (double) num3)
                  {
                    num3 = num4;
                    formation1 = formation2;
                  }
                }
              }
            }
          }
          if ((this.Formation.Team.TeamAI is TeamAISiegeComponent || (double) this.Formation.QuerySystem.RangedCavalryUnitRatio <= 0.949999988079071 ? 0 : (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation == formation1 ? 1 : 0)) == 0)
          {
            bool flag2 = formation1.QuerySystem.IsCavalryFormation || formation1.QuerySystem.IsRangedCavalryFormation;
            float radius = MathF.Min((flag2 ? 35f : 20f) + (float) (((double) formation1.Depth + (double) this.Formation.Width) * 0.5), this.Formation.QuerySystem.MissileRangeAdjusted - this.Formation.Width * 0.5f);
            BehaviorMountedSkirmish.Ellipse ellipse = new BehaviorMountedSkirmish.Ellipse(formation1.QuerySystem.MedianPosition.AsVec2, radius, (float) ((double) formation1.Width * 0.5 * (flag2 ? 1.5 : 1.0)), formation1.Direction);
            medianPosition1.SetVec2(ellipse.GetTargetPos(this.Formation.QuerySystem.AveragePosition, 20f));
          }
          else
          {
            this.CurrentOrder = MovementOrder.MovementOrderCharge;
            return;
          }
        }
        else
        {
          ref WorldPosition local = ref medianPosition1;
          Scene scene = Mission.Current.Scene;
          Vec2 averageAllyPosition = this.Formation.QuerySystem.AverageAllyPosition;
          medianPosition2 = this.Formation.Team.QuerySystem.MedianPosition;
          double z = (double) medianPosition2.GetNavMeshZ() + 100.0;
          Vec3 position = new Vec3(averageAllyPosition, (float) z);
          local = new WorldPosition(scene, position);
        }
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition1);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override float GetAiWeight() => !this._isEnemyReachable ? 0.1f : 1f;

    private struct Ellipse
    {
      private readonly Vec2 _center;
      private readonly float _radius;
      private readonly float _halfLength;
      private readonly Vec2 _direction;

      public Ellipse(Vec2 center, float radius, float halfLength, Vec2 direction)
      {
        this._center = center;
        this._radius = radius;
        this._halfLength = halfLength;
        this._direction = direction;
      }

      public Vec2 GetTargetPos(Vec2 position, float distance)
      {
        Vec2 v1 = this._direction.LeftVec();
        Vec2 vec2_1 = this._center + v1 * this._halfLength;
        Vec2 vec2_2 = this._center - v1 * this._halfLength;
        Vec2 vec2_3 = position - this._center;
        bool flag1 = (double) vec2_3.Normalized().DotProduct(this._direction) > 0.0;
        Vec2 vec2_4 = vec2_3.DotProduct(v1) * v1;
        bool flag2 = (double) vec2_4.Length < (double) this._halfLength;
        bool flag3 = true;
        Vec2 vec2_5;
        if (flag2)
        {
          position = this._center + vec2_4 + this._direction * (this._radius * (flag1 ? 1f : -1f));
        }
        else
        {
          flag3 = (double) vec2_4.DotProduct(v1) > 0.0;
          vec2_5 = position - (flag3 ? vec2_1 : vec2_2);
          Vec2 vec2_6 = vec2_5.Normalized();
          position = (flag3 ? vec2_1 : vec2_2) + vec2_6 * this._radius;
        }
        Vec2 vec2_7 = this._center + vec2_4;
        float num1 = 6.28318548f * this._radius;
        while ((double) distance > 0.0)
        {
          if (flag2 & flag1)
          {
            vec2_5 = vec2_1 - vec2_7;
            double num2;
            if ((double) vec2_5.Length >= (double) distance)
            {
              num2 = (double) distance;
            }
            else
            {
              vec2_5 = vec2_1 - vec2_7;
              num2 = (double) vec2_5.Length;
            }
            float num3 = (float) num2;
            Vec2 vec2_8 = vec2_7;
            vec2_5 = vec2_1 - vec2_7;
            Vec2 vec2_9 = vec2_5.Normalized() * num3;
            position = vec2_8 + vec2_9;
            position += this._direction * this._radius;
            distance -= num3;
            flag2 = false;
            flag3 = true;
          }
          else if (!flag2 & flag3)
          {
            vec2_5 = position - vec2_1;
            Vec2 v2 = vec2_5.Normalized();
            vec2_5 = this._direction;
            float num4 = MathF.Acos(MBMath.ClampFloat(vec2_5.DotProduct(v2), -1f, 1f));
            float num5 = (float) (6.2831854820251465 * ((double) distance / (double) num1));
            float angleInRadians = (double) num4 + (double) num5 < 3.1415927410125732 ? num4 + num5 : 3.14159274f;
            float num6 = (float) (((double) angleInRadians - (double) num4) / 3.1415927410125732 * ((double) num1 / 2.0));
            Vec2 direction = this._direction;
            direction.RotateCCW(angleInRadians);
            position = vec2_1 + direction * this._radius;
            distance -= num6;
            flag2 = true;
            flag1 = false;
          }
          else if (flag2)
          {
            vec2_5 = vec2_2 - vec2_7;
            double num7;
            if ((double) vec2_5.Length >= (double) distance)
            {
              num7 = (double) distance;
            }
            else
            {
              vec2_5 = vec2_2 - vec2_7;
              num7 = (double) vec2_5.Length;
            }
            float num8 = (float) num7;
            Vec2 vec2_10 = vec2_7;
            vec2_5 = vec2_2 - vec2_7;
            Vec2 vec2_11 = vec2_5.Normalized() * num8;
            position = vec2_10 + vec2_11;
            position -= this._direction * this._radius;
            distance -= num8;
            flag2 = false;
            flag3 = false;
          }
          else
          {
            vec2_5 = position - vec2_2;
            Vec2 v3 = vec2_5.Normalized();
            vec2_5 = this._direction;
            float num9 = MathF.Acos(MBMath.ClampFloat(vec2_5.DotProduct(v3), -1f, 1f));
            float num10 = (float) (6.2831854820251465 * ((double) distance / (double) num1));
            float num11 = (double) num9 - (double) num10 > 0.0 ? num9 - num10 : 0.0f;
            float angleInRadians = num9 - num11;
            float num12 = (float) ((double) angleInRadians / 3.1415927410125732 * ((double) num1 / 2.0));
            Vec2 vec2_12 = v3;
            vec2_12.RotateCCW(angleInRadians);
            position = vec2_2 + vec2_12 * this._radius;
            distance -= num12;
            flag2 = true;
            flag1 = true;
          }
        }
        return position;
      }
    }
  }
}
