// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorUseSiegeMachines
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorUseSiegeMachines : BehaviorComponent
  {
    private List<SiegeWeapon> _primarySiegeWeapons;
    private TeamAISiegeComponent _teamAISiegeComponent;
    private MovementOrder _followEntityOrder;
    private GameEntity _followedEntity;
    private MovementOrder _stopOrder;
    private BehaviorUseSiegeMachines.BehaviorState _behaviorState;

    public BehaviorUseSiegeMachines(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this._primarySiegeWeapons = new List<SiegeWeapon>();
      foreach (MissionObject activeMissionObject in (List<MissionObject>) Mission.Current.ActiveMissionObjects)
      {
        if (activeMissionObject is IPrimarySiegeWeapon primarySiegeWeapon && primarySiegeWeapon.WeaponSide == this._behaviorSide)
          this._primarySiegeWeapons.Add(activeMissionObject as SiegeWeapon);
      }
      this._teamAISiegeComponent = (TeamAISiegeComponent) formation.Team.TeamAI;
      this.BehaviorCoherence = 0.0f;
      this._stopOrder = MovementOrder.MovementOrderStop;
      this.RecreateFollowEntityOrder();
      if (this._followEntityOrder.OrderEnum != MovementOrder.MovementOrderEnum.Invalid)
      {
        this._behaviorState = BehaviorUseSiegeMachines.BehaviorState.Follow;
        this.CurrentOrder = this._followEntityOrder;
      }
      else
      {
        this._behaviorState = BehaviorUseSiegeMachines.BehaviorState.Stop;
        this.CurrentOrder = this._stopOrder;
      }
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      behaviorString.SetTextVariable("SIDE_STRING", GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString()));
      behaviorString.SetTextVariable("IS_GENERAL_SIDE", "0");
      return behaviorString;
    }

    private void RecreateFollowEntityOrder()
    {
      this._followEntityOrder = MovementOrder.MovementOrderStop;
      this._followedEntity = this._primarySiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (psw => !psw.IsDeactivated && psw is IPrimarySiegeWeapon primarySiegeWeapon && !primarySiegeWeapon.HasCompletedAction()))?.WaitEntity;
      if (!((NativeObject) this._followedEntity != (NativeObject) null))
        return;
      this._followEntityOrder = MovementOrder.MovementOrderFollowEntity(this._followedEntity);
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this._primarySiegeWeapons.Clear();
      foreach (MissionObject activeMissionObject in (List<MissionObject>) Mission.Current.ActiveMissionObjects)
      {
        if (activeMissionObject is IPrimarySiegeWeapon primarySiegeWeapon && primarySiegeWeapon.WeaponSide == this._behaviorSide && !((UsableMachine) activeMissionObject).IsDeactivated)
          this._primarySiegeWeapons.Add(activeMissionObject as SiegeWeapon);
      }
      this.RecreateFollowEntityOrder();
      this._behaviorState = BehaviorUseSiegeMachines.BehaviorState.Unset;
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      bool flag1 = false;
      for (int index = this._primarySiegeWeapons.Count - 1; index >= 0; --index)
      {
        SiegeWeapon primarySiegeWeapon = this._primarySiegeWeapons[index];
        if (primarySiegeWeapon.IsDestroyed || primarySiegeWeapon.IsDeactivated)
        {
          this._primarySiegeWeapons.RemoveAt(index);
          flag1 = true;
        }
      }
      if (flag1)
        this.RecreateFollowEntityOrder();
      int num = 0;
      SiegeTower siegeTower1 = (SiegeTower) null;
      foreach (SiegeWeapon primarySiegeWeapon in this._primarySiegeWeapons)
      {
        if (!((IPrimarySiegeWeapon) primarySiegeWeapon).HasCompletedAction())
        {
          ++num;
          if (primarySiegeWeapon is SiegeTower siegeTower2)
            siegeTower1 = siegeTower2;
        }
      }
      if (num == 0)
      {
        this.CurrentOrder = this._stopOrder;
      }
      else
      {
        if (this._behaviorState == BehaviorUseSiegeMachines.BehaviorState.Follow)
        {
          if (this._followEntityOrder.OrderEnum == MovementOrder.MovementOrderEnum.Stop)
            this.RecreateFollowEntityOrder();
          this.CurrentOrder = this._followEntityOrder;
        }
        BehaviorUseSiegeMachines.BehaviorState behaviorState = siegeTower1 == null || !siegeTower1.HasArrivedAtTarget ? (this._followEntityOrder.OrderEnum != MovementOrder.MovementOrderEnum.Invalid ? BehaviorUseSiegeMachines.BehaviorState.Follow : BehaviorUseSiegeMachines.BehaviorState.Stop) : BehaviorUseSiegeMachines.BehaviorState.ClimbSiegeTower;
        if (behaviorState != this._behaviorState)
        {
          switch (behaviorState)
          {
            case BehaviorUseSiegeMachines.BehaviorState.Follow:
              this.CurrentOrder = this._followEntityOrder;
              break;
            case BehaviorUseSiegeMachines.BehaviorState.ClimbSiegeTower:
              this.RecreateFollowEntityOrder();
              this.CurrentOrder = this._followEntityOrder;
              break;
            default:
              this.CurrentOrder = this._stopOrder;
              break;
          }
          this._behaviorState = behaviorState;
          bool flag2 = this._behaviorState == BehaviorUseSiegeMachines.BehaviorState.ClimbSiegeTower;
          if (!flag2)
          {
            foreach (SiegeWeapon primarySiegeWeapon in this._primarySiegeWeapons)
            {
              if (primarySiegeWeapon is SiegeLadder siegeLadder && !siegeLadder.IsDisabled)
              {
                flag2 = true;
                break;
              }
            }
          }
          if (flag2)
            this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
          else if (this.Formation.QuerySystem.IsRangedFormation)
            this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderScatter;
          else
            this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderShieldWall;
        }
        if ((NativeObject) this._followedEntity != (NativeObject) null && (this._behaviorState == BehaviorUseSiegeMachines.BehaviorState.Follow || this._behaviorState == BehaviorUseSiegeMachines.BehaviorState.ClimbSiegeTower))
          this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtDirection(this._followedEntity.GetGlobalFrame().rotation.f.AsVec2.Normalized());
        else
          this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
        if (this.Formation.AI.ActiveBehavior == this)
        {
          foreach (SiegeWeapon primarySiegeWeapon in this._primarySiegeWeapons)
          {
            if (!((IPrimarySiegeWeapon) primarySiegeWeapon).HasCompletedAction())
            {
              if (!primarySiegeWeapon.IsUsedByFormation(this.Formation))
                this.Formation.StartUsingMachine((UsableMachine) primarySiegeWeapon);
              for (int index = primarySiegeWeapon.UserFormations.Count - 1; index >= 0; --index)
              {
                Formation userFormation = primarySiegeWeapon.UserFormations[index];
                if (userFormation != this.Formation && userFormation.IsAIControlled && (userFormation.AI.Side != this._behaviorSide || !(userFormation.AI.ActiveBehavior is BehaviorUseSiegeMachines)) && userFormation.Team == this.Formation.Team)
                  userFormation.StopUsingMachine((UsableMachine) primarySiegeWeapon);
              }
            }
          }
        }
        this.Formation.SetMovementOrder(this.CurrentOrder);
      }
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.Formation.ArrangementOrder = this.Formation.QuerySystem.IsRangedFormation ? ArrangementOrder.ArrangementOrderScatter : ArrangementOrder.ArrangementOrderShieldWall;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight()
    {
      float aiWeight = 0.0f;
      if (this._teamAISiegeComponent != null && this._primarySiegeWeapons.Count > 0 && this._primarySiegeWeapons.All<SiegeWeapon>((Func<SiegeWeapon, bool>) (psw => !(psw as IPrimarySiegeWeapon).HasCompletedAction())))
        aiWeight = !this._teamAISiegeComponent.IsCastleBreached() ? 0.75f : 0.25f;
      return aiWeight;
    }

    private enum BehaviorState
    {
      Unset,
      Follow,
      ClimbSiegeTower,
      Stop,
    }
  }
}
