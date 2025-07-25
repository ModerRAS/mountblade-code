// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticCharge
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticCharge : TacticComponent
  {
    public TacticCharge(Team team)
      : base(team)
    {
    }

    protected internal override void TickOccasionally()
    {
      foreach (Formation f in (List<Formation>) this.FormationsIncludingEmpty)
      {
        if (f.CountOfUnits > 0)
        {
          f.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(f);
          f.AI.SetBehaviorWeight<BehaviorCharge>(10000f);
        }
      }
      base.TickOccasionally();
    }

    protected internal override void OnApply()
    {
      base.OnApply();
      if (!this.Team.IsPlayerTeam || this.Team.IsPlayerGeneral || !this.Team.IsPlayerSergeant)
        return;
      foreach (Formation formation1 in (List<Formation>) this.Team.FormationsIncludingSpecialAndEmpty)
      {
        if (formation1.CountOfUnits > 0)
        {
          foreach (Team team in (List<Team>) this.Team.Mission.Teams)
          {
            if (team.IsEnemyOf(this.Team))
            {
              foreach (Formation formation2 in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
              {
                if (formation2.CountOfUnits > 0)
                {
                  this.SoundTacticalHorn(TacticComponent.AttackHornSoundIndex);
                  return;
                }
              }
            }
          }
        }
      }
    }

    protected internal override float GetTacticWeight()
    {
      float num1 = this.Team.QuerySystem.RemainingPowerRatio / this.Team.QuerySystem.TotalPowerRatio;
      float num2 = MathF.Max(this.Team.QuerySystem.InfantryRatio, MathF.Max(this.Team.QuerySystem.RangedRatio, this.Team.QuerySystem.CavalryRatio)) + (this.Team.Side == BattleSideEnum.Defender ? 0.33f : 0.0f);
      float num3 = this.Team.Side == BattleSideEnum.Defender ? 0.33f : 0.5f;
      float num4 = 0.0f;
      float num5 = 0.0f;
      CasualtyHandler missionBehavior = Mission.Current.GetMissionBehavior<CasualtyHandler>();
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team == this.Team || team.IsEnemyOf(this.Team))
        {
          for (int index = 0; index < Math.Min(team.FormationsIncludingSpecialAndEmpty.Count, 8); ++index)
          {
            Formation formation = team.FormationsIncludingSpecialAndEmpty[index];
            if (formation.CountOfUnits > 0)
            {
              num4 += formation.QuerySystem.FormationPower;
              num5 += missionBehavior.GetCasualtyPowerLossOfFormation(formation);
            }
          }
        }
      }
      float num6 = num4 + num5;
      float num7 = num4 / num6;
      return MathF.Max(this.Team.Side != BattleSideEnum.Attacker || (double) num1 >= 0.5 ? MBMath.LinearExtrapolation(0.0f, 1.6f * num2, (float) ((1.0 - (double) num7) / (1.0 - (double) num3))) : 0.0f, MBMath.LinearExtrapolation(0.0f, 1.6f * num2, (float) ((double) this.Team.QuerySystem.RemainingPowerRatio * (double) num3 * 0.5)));
    }
  }
}
