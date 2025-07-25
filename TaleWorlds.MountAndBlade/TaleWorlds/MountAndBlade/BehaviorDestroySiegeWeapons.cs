// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorDestroySiegeWeapons
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorDestroySiegeWeapons : BehaviorComponent
  {
    private readonly List<SiegeWeapon> _allWeapons;
    private List<SiegeWeapon> _targetWeapons;
    public SiegeWeapon LastTargetWeapon;
    private bool _isTargetPrimaryWeapon;

    private void DetermineTargetWeapons()
    {
      this._targetWeapons = this._allWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (w => w is IPrimarySiegeWeapon && (w as IPrimarySiegeWeapon).WeaponSide == this._behaviorSide && w.IsDestructible && !w.IsDestroyed && !w.IsDisabled)).ToList<SiegeWeapon>();
      if (this._targetWeapons.IsEmpty<SiegeWeapon>())
      {
        this._targetWeapons = this._allWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (w => !(w is IPrimarySiegeWeapon) && w.IsDestructible && !w.IsDestroyed && !w.IsDisabled)).ToList<SiegeWeapon>();
        this._isTargetPrimaryWeapon = false;
      }
      else
        this._isTargetPrimaryWeapon = true;
    }

    public BehaviorDestroySiegeWeapons(Formation formation)
      : base(formation)
    {
      this.BehaviorCoherence = 0.2f;
      this._behaviorSide = formation.AI.Side;
      this._allWeapons = Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeWeapon>().Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (sw => sw.Side != formation.Team.Side)).ToList<SiegeWeapon>();
      this.DetermineTargetWeapons();
      this.CurrentOrder = MovementOrder.MovementOrderCharge;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      behaviorString.SetTextVariable("SIDE_STRING", GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString()));
      behaviorString.SetTextVariable("IS_GENERAL_SIDE", "0");
      return behaviorString;
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this.DetermineTargetWeapons();
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      this._targetWeapons.RemoveAll((Predicate<SiegeWeapon>) (tw => tw.IsDestroyed));
      if (this._targetWeapons.Count == 0)
        this.DetermineTargetWeapons();
      if (this.Formation.AI.ActiveBehavior != this)
        return;
      if (this._targetWeapons.Count == 0)
      {
        // ISSUE: explicit reference operation
        if (@this.CurrentOrder != MovementOrder.MovementOrderCharge)
          this.CurrentOrder = MovementOrder.MovementOrderCharge;
        this._isTargetPrimaryWeapon = false;
      }
      else
      {
        SiegeWeapon siegeWeapon = this._targetWeapons.MinBy<SiegeWeapon, float>((Func<SiegeWeapon, float>) (tw => this.Formation.QuerySystem.AveragePosition.DistanceSquared(tw.GameEntity.GlobalPosition.AsVec2)));
        if (this.CurrentOrder.OrderEnum != MovementOrder.MovementOrderEnum.AttackEntity || this.LastTargetWeapon != siegeWeapon)
        {
          this.LastTargetWeapon = siegeWeapon;
          this.CurrentOrder = MovementOrder.MovementOrderAttackEntity(this.LastTargetWeapon.GameEntity, true);
        }
      }
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.DetermineTargetWeapons();
      this.Formation.ArrangementOrder = this.Formation.QuerySystem.IsCavalryFormation || this.Formation.QuerySystem.IsRangedCavalryFormation ? ArrangementOrder.ArrangementOrderSkein : ArrangementOrder.ArrangementOrderLine;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight()
    {
      if (this._targetWeapons.IsEmpty<SiegeWeapon>())
        return 0.0f;
      return !this._isTargetPrimaryWeapon ? 0.7f : 1f;
    }
  }
}
