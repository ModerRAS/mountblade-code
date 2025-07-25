// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSergeantMPLastFlagLastStand
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorSergeantMPLastFlagLastStand : BehaviorComponent
  {
    private List<FlagCapturePoint> _flagpositions;
    private bool _lastEffort;
    private MissionMultiplayerFlagDomination _flagDominationGameMode;

    public BehaviorSergeantMPLastFlagLastStand(Formation formation)
      : base(formation)
    {
      this._flagpositions = Mission.Current.ActiveMissionObjects.FindAllWithType<FlagCapturePoint>().ToList<FlagCapturePoint>();
      this._flagDominationGameMode = Mission.Current.GetMissionBehavior<MissionMultiplayerFlagDomination>();
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      this.CurrentOrder = this._flagpositions.Count > 0 ? MovementOrder.MovementOrderMove(new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this._flagpositions[0].Position, false)) : MovementOrder.MovementOrderStop;
    }

    public override void TickOccasionally()
    {
      this._flagpositions.RemoveAll((Predicate<FlagCapturePoint>) (fp => fp.IsDeactivated));
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this._flagpositions.RemoveAll((Predicate<FlagCapturePoint>) (fp => fp.IsDeactivated));
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override float GetAiWeight()
    {
      if (this._lastEffort)
        return 10f;
      this._flagpositions.RemoveAll((Predicate<FlagCapturePoint>) (fp => fp.IsDeactivated));
      FlagCapturePoint flag = this._flagpositions.FirstOrDefault<FlagCapturePoint>();
      if (this._flagpositions.Count != 1 || this._flagDominationGameMode.GetFlagOwnerTeam(flag) == null || !this._flagDominationGameMode.GetFlagOwnerTeam(flag).IsEnemyOf(this.Formation.Team))
        return 0.0f;
      float battleSideVictory = this._flagDominationGameMode.GetTimeUntilBattleSideVictory(this._flagDominationGameMode.GetFlagOwnerTeam(flag).Side);
      if ((double) battleSideVictory <= 60.0)
        return 10f;
      if ((double) this.Formation.QuerySystem.AveragePosition.Distance(flag.Position.AsVec2) / (double) this.Formation.QuerySystem.MovementSpeedMaximum * 8.0 <= (double) battleSideVictory)
        return 0.0f;
      this._lastEffort = true;
      return 10f;
    }
  }
}
