// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSergeantMPMounted
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorSergeantMPMounted : BehaviorComponent
  {
    private List<FlagCapturePoint> _flagpositions;
    private MissionMultiplayerFlagDomination _flagDominationGameMode;

    public BehaviorSergeantMPMounted(Formation formation)
      : base(formation)
    {
      this._flagpositions = this.Formation.Team.Mission.ActiveMissionObjects.FindAllWithType<FlagCapturePoint>().ToList<FlagCapturePoint>();
      this._flagDominationGameMode = this.Formation.Team.Mission.GetMissionBehavior<MissionMultiplayerFlagDomination>();
      this.CalculateCurrentOrder();
    }

    private MovementOrder UncapturedFlagMoveOrder()
    {
      if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)))
      {
        FlagCapturePoint flagCapturePoint = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => this.Formation.Team.QuerySystem.GetLocalEnemyPower(fp.Position.AsVec2)));
        return MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, flagCapturePoint.Position, false));
      }
      if (!this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)))
        return MovementOrder.MovementOrderStop;
      Vec3 position = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => fp.Position.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition))).Position;
      return MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, position, false));
    }

    protected override void CalculateCurrentOrder()
    {
      if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation == null || (double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition) > 2500.0)
      {
        this.CurrentOrder = this.UncapturedFlagMoveOrder();
      }
      else
      {
        FlagCapturePoint flagCapturePoint = (FlagCapturePoint) null;
        if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team && !fp.IsContested)))
          flagCapturePoint = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team && !fp.IsContested)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => this.Formation.QuerySystem.AveragePosition.DistanceSquared(fp.Position.AsVec2)));
        if ((!this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsRangedFormation ? 0 : ((double) this.Formation.QuerySystem.FormationPower / (double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.FormationPower / (double) this.Formation.Team.QuerySystem.RemainingPowerRatio > 0.699999988079071 ? 1 : 0)) == 0 && flagCapturePoint != null)
          this.CurrentOrder = MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, flagCapturePoint.Position, false));
        else
          this.CurrentOrder = MovementOrder.MovementOrderChargeToTarget(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation);
      }
    }

    public override void TickOccasionally()
    {
      this._flagpositions.RemoveAll((Predicate<FlagCapturePoint>) (fp => fp.IsDeactivated));
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

    protected override float GetAiWeight()
    {
      return this.Formation.QuerySystem.IsCavalryFormation ? 1.2f : 0.0f;
    }
  }
}
