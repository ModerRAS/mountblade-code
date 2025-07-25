// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorCavalryScreen
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorCavalryScreen : BehaviorComponent
  {
    private Formation _mainFormation;
    private Formation _flankingEnemyCavalryFormation;
    private float _threatFormationCacheTime;
    private const float _threatFormationCacheExpireTime = 5f;

    public BehaviorCavalryScreen(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this._mainFormation = formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      this.CalculateCurrentOrder();
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
    }

    protected override void CalculateCurrentOrder()
    {
      if (this._mainFormation == null || this.Formation.AI.IsMainFormation || this.Formation.AI.Side != FormationAI.BehaviorSide.Left && this.Formation.AI.Side != FormationAI.BehaviorSide.Right)
      {
        this._flankingEnemyCavalryFormation = (Formation) null;
        WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
      else
      {
        float currentTime = Mission.Current.CurrentTime;
        if ((double) this._threatFormationCacheTime + 5.0 < (double) currentTime)
        {
          this._threatFormationCacheTime = currentTime;
          Vec2 vec2_1;
          Vec2 vec2_2;
          if (this.Formation.AI.Side != FormationAI.BehaviorSide.Left)
          {
            vec2_1 = this._mainFormation.Direction;
            vec2_2 = vec2_1.RightVec();
          }
          else
          {
            vec2_1 = this._mainFormation.Direction;
            vec2_2 = vec2_1.LeftVec();
          }
          vec2_1 = vec2_2;
          Vec2 vec2_3 = vec2_1.Normalized();
          vec2_1 = this._mainFormation.Direction;
          Vec2 vec2_4 = vec2_1.Normalized();
          Vec2 vec2_5 = vec2_3 - vec2_4;
          this._flankingEnemyCavalryFormation = (Formation) null;
          float num = float.MinValue;
          foreach (Team team in (List<Team>) Mission.Current.Teams)
          {
            if (team.IsEnemyOf(this.Formation.Team))
            {
              foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
              {
                if (formation.CountOfUnits > 0)
                {
                  Vec2 vec2_6 = formation.QuerySystem.MedianPosition.AsVec2 - this._mainFormation.QuerySystem.MedianPosition.AsVec2;
                  vec2_1 = vec2_5.Normalized();
                  if ((double) vec2_1.DotProduct(vec2_6.Normalized()) > 0.92387950420379639)
                  {
                    float formationPower = formation.QuerySystem.FormationPower;
                    if ((double) formationPower > (double) num)
                    {
                      num = formationPower;
                      this._flankingEnemyCavalryFormation = formation;
                    }
                  }
                }
              }
            }
          }
        }
        WorldPosition medianPosition;
        if (this._flankingEnemyCavalryFormation == null)
        {
          medianPosition = this.Formation.QuerySystem.MedianPosition;
          medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        }
        else
        {
          Vec2 vec2 = this._flankingEnemyCavalryFormation.QuerySystem.MedianPosition.AsVec2 - this._mainFormation.QuerySystem.MedianPosition.AsVec2;
          float num = vec2.Normalize() * 0.5f;
          medianPosition = this._mainFormation.QuerySystem.MedianPosition;
          medianPosition.SetVec2(medianPosition.AsVec2 + num * vec2);
        }
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
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
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderSkein;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      TextObject text = GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString());
      behaviorString.SetTextVariable("SIDE_STRING", text);
      if (this._mainFormation != null)
      {
        behaviorString.SetTextVariable("AI_SIDE", GameTexts.FindText("str_formation_ai_side_strings", this._mainFormation.AI.Side.ToString()));
        behaviorString.SetTextVariable("CLASS", GameTexts.FindText("str_formation_class_string", this._mainFormation.PhysicalClass.GetName()));
      }
      return behaviorString;
    }

    protected override float GetAiWeight()
    {
      if (this._mainFormation == null || !this._mainFormation.AI.IsMainFormation)
        this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      return this._flankingEnemyCavalryFormation == null ? 0.0f : 1.2f;
    }
  }
}
