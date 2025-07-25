// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeWeaponController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeWeaponController
  {
    private readonly Mission _mission;
    private readonly Team _team;
    private List<SiegeWeapon> _availableWeapons;
    private MBList<SiegeWeapon> _selectedWeapons;

    public MBReadOnlyList<SiegeWeapon> SelectedWeapons
    {
      get => (MBReadOnlyList<SiegeWeapon>) this._selectedWeapons;
    }

    public event Action<SiegeWeaponOrderType, IEnumerable<SiegeWeapon>> OnOrderIssued;

    public event Action OnSelectedSiegeWeaponsChanged;

    public SiegeWeaponController(Mission mission, Team team)
    {
      this._mission = mission;
      this._team = team;
      this._selectedWeapons = new MBList<SiegeWeapon>();
      this.InitializeWeaponsForDeployment();
    }

    private void InitializeWeaponsForDeployment()
    {
      this._availableWeapons = this._mission.ActiveMissionObjects.FindAllWithType<DeploymentPoint>().Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.Side == this._team.Side)).SelectMany<DeploymentPoint, SynchedMissionObject>((Func<DeploymentPoint, IEnumerable<SynchedMissionObject>>) (dp => dp.DeployableWeapons)).Select<SynchedMissionObject, SiegeWeapon>((Func<SynchedMissionObject, SiegeWeapon>) (w => w as SiegeWeapon)).ToList<SiegeWeapon>();
    }

    private void InitializeWeapons()
    {
      this._availableWeapons = new List<SiegeWeapon>();
      this._availableWeapons.AddRange((IEnumerable<SiegeWeapon>) this._mission.ActiveMissionObjects.FindAllWithType<RangedSiegeWeapon>().Where<RangedSiegeWeapon>((Func<RangedSiegeWeapon, bool>) (w => w.Side == this._team.Side)));
      if (this._team.Side == BattleSideEnum.Attacker)
        this._availableWeapons.AddRange(this._mission.ActiveMissionObjects.FindAllWithType<SiegeWeapon>().Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (w => w is IPrimarySiegeWeapon && !(w is RangedSiegeWeapon))));
      this._availableWeapons.Sort((Comparison<SiegeWeapon>) ((w1, w2) => this.GetShortcutIndexOf(w1).CompareTo(this.GetShortcutIndexOf(w2))));
    }

    public void Select(SiegeWeapon weapon)
    {
      if (!this.SelectedWeapons.Contains(weapon) && SiegeWeaponController.IsWeaponSelectable(weapon))
      {
        if (GameNetwork.IsClient)
        {
          GameNetwork.BeginModuleEventAsClient();
          GameNetwork.WriteMessage((GameNetworkMessage) new SelectSiegeWeapon(weapon.Id));
          GameNetwork.EndModuleEventAsClient();
        }
        this._selectedWeapons.Add(weapon);
        Action siegeWeaponsChanged = this.OnSelectedSiegeWeaponsChanged;
        if (siegeWeaponsChanged == null)
          return;
        siegeWeaponsChanged();
      }
      else
        Debug.FailedAssert("Weapon already selected or is not selectable", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\SiegeWeaponController.cs", nameof (Select), 82);
    }

    public void ClearSelectedWeapons()
    {
      int num = GameNetwork.IsClient ? 1 : 0;
      this._selectedWeapons.Clear();
      Action siegeWeaponsChanged = this.OnSelectedSiegeWeaponsChanged;
      if (siegeWeaponsChanged == null)
        return;
      siegeWeaponsChanged();
    }

    public void Deselect(SiegeWeapon weapon)
    {
      if (this.SelectedWeapons.Contains(weapon))
      {
        if (GameNetwork.IsClient)
        {
          GameNetwork.BeginModuleEventAsClient();
          GameNetwork.WriteMessage((GameNetworkMessage) new UnselectSiegeWeapon(weapon.Id));
          GameNetwork.EndModuleEventAsClient();
        }
        this._selectedWeapons.Remove(weapon);
        Action siegeWeaponsChanged = this.OnSelectedSiegeWeaponsChanged;
        if (siegeWeaponsChanged == null)
          return;
        siegeWeaponsChanged();
      }
      else
        Debug.FailedAssert("Trying to deselect an unselected weapon", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\SiegeWeaponController.cs", nameof (Deselect), 113);
    }

    public void SelectAll()
    {
      if (GameNetwork.IsClient)
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new SelectAllSiegeWeapons());
        GameNetwork.EndModuleEventAsClient();
      }
      this._selectedWeapons.Clear();
      foreach (SiegeWeapon availableWeapon in this._availableWeapons)
        this._selectedWeapons.Add(availableWeapon);
      Action siegeWeaponsChanged = this.OnSelectedSiegeWeaponsChanged;
      if (siegeWeaponsChanged == null)
        return;
      siegeWeaponsChanged();
    }

    public static bool IsWeaponSelectable(SiegeWeapon weapon) => !weapon.IsDeactivated;

    public static SiegeWeaponOrderType GetActiveOrderOf(SiegeWeapon weapon)
    {
      if (!weapon.ForcedUse)
        return SiegeWeaponOrderType.Stop;
      if (!(weapon is RangedSiegeWeapon))
        return SiegeWeaponOrderType.Attack;
      switch (((RangedSiegeWeapon) weapon).Focus)
      {
        case RangedSiegeWeapon.FiringFocus.Troops:
          return SiegeWeaponOrderType.FireAtTroops;
        case RangedSiegeWeapon.FiringFocus.Walls:
          return SiegeWeaponOrderType.FireAtWalls;
        case RangedSiegeWeapon.FiringFocus.RangedSiegeWeapons:
          return SiegeWeaponOrderType.FireAtRangedSiegeWeapons;
        case RangedSiegeWeapon.FiringFocus.PrimarySiegeWeapons:
          return SiegeWeaponOrderType.FireAtPrimarySiegeWeapons;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\SiegeWeaponController.cs", nameof (GetActiveOrderOf), 166);
          return SiegeWeaponOrderType.FireAtTroops;
      }
    }

    public static SiegeWeaponOrderType GetActiveMovementOrderOf(SiegeWeapon weapon)
    {
      return !weapon.ForcedUse ? SiegeWeaponOrderType.Stop : SiegeWeaponOrderType.Attack;
    }

    public static SiegeWeaponOrderType GetActiveFacingOrderOf(SiegeWeapon weapon)
    {
      if (!(weapon is RangedSiegeWeapon))
        return SiegeWeaponOrderType.FireAtWalls;
      switch (((RangedSiegeWeapon) weapon).Focus)
      {
        case RangedSiegeWeapon.FiringFocus.Troops:
          return SiegeWeaponOrderType.FireAtTroops;
        case RangedSiegeWeapon.FiringFocus.Walls:
          return SiegeWeaponOrderType.FireAtWalls;
        case RangedSiegeWeapon.FiringFocus.RangedSiegeWeapons:
          return SiegeWeaponOrderType.FireAtRangedSiegeWeapons;
        case RangedSiegeWeapon.FiringFocus.PrimarySiegeWeapons:
          return SiegeWeaponOrderType.FireAtPrimarySiegeWeapons;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\SiegeWeaponController.cs", nameof (GetActiveFacingOrderOf), 204);
          return SiegeWeaponOrderType.FireAtTroops;
      }
    }

    public static SiegeWeaponOrderType GetActiveFiringOrderOf(SiegeWeapon weapon)
    {
      return !weapon.ForcedUse ? SiegeWeaponOrderType.Stop : SiegeWeaponOrderType.Attack;
    }

    public static SiegeWeaponOrderType GetActiveAIControlOrderOf(SiegeWeapon weapon)
    {
      return weapon.ForcedUse ? SiegeWeaponOrderType.AIControlOn : SiegeWeaponOrderType.AIControlOff;
    }

    private void SetOrderAux(SiegeWeaponOrderType order, SiegeWeapon weapon)
    {
      switch (order)
      {
        case SiegeWeaponOrderType.Stop:
        case SiegeWeaponOrderType.AIControlOff:
          weapon.SetForcedUse(false);
          break;
        case SiegeWeaponOrderType.Attack:
        case SiegeWeaponOrderType.AIControlOn:
          weapon.SetForcedUse(true);
          break;
        case SiegeWeaponOrderType.FireAtWalls:
          weapon.SetForcedUse(true);
          if (!(weapon is RangedSiegeWeapon rangedSiegeWeapon1))
            break;
          rangedSiegeWeapon1.Focus = RangedSiegeWeapon.FiringFocus.Walls;
          break;
        case SiegeWeaponOrderType.FireAtTroops:
          weapon.SetForcedUse(true);
          if (!(weapon is RangedSiegeWeapon rangedSiegeWeapon2))
            break;
          rangedSiegeWeapon2.Focus = RangedSiegeWeapon.FiringFocus.Troops;
          break;
        case SiegeWeaponOrderType.FireAtRangedSiegeWeapons:
          weapon.SetForcedUse(true);
          if (!(weapon is RangedSiegeWeapon rangedSiegeWeapon3))
            break;
          rangedSiegeWeapon3.Focus = RangedSiegeWeapon.FiringFocus.RangedSiegeWeapons;
          break;
        case SiegeWeaponOrderType.FireAtPrimarySiegeWeapons:
          weapon.SetForcedUse(true);
          if (!(weapon is RangedSiegeWeapon rangedSiegeWeapon4))
            break;
          rangedSiegeWeapon4.Focus = RangedSiegeWeapon.FiringFocus.PrimarySiegeWeapons;
          break;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\SiegeWeaponController.cs", nameof (SetOrderAux), 294);
          break;
      }
    }

    public void SetOrder(SiegeWeaponOrderType order)
    {
      if (GameNetwork.IsClient)
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new ApplySiegeWeaponOrder(order));
        GameNetwork.EndModuleEventAsClient();
      }
      foreach (SiegeWeapon selectedWeapon in (List<SiegeWeapon>) this.SelectedWeapons)
        this.SetOrderAux(order, selectedWeapon);
      Action<SiegeWeaponOrderType, IEnumerable<SiegeWeapon>> onOrderIssued = this.OnOrderIssued;
      if (onOrderIssued == null)
        return;
      onOrderIssued(order, (IEnumerable<SiegeWeapon>) this.SelectedWeapons);
    }

    public int GetShortcutIndexOf(SiegeWeapon weapon)
    {
      int num;
      switch (SiegeWeaponController.GetSideOf(weapon))
      {
        case FormationAI.BehaviorSide.Left:
          num = 1;
          break;
        case FormationAI.BehaviorSide.Right:
          num = 2;
          break;
        default:
          num = 0;
          break;
      }
      int shortcutIndexOf = num;
      if (!(weapon is IPrimarySiegeWeapon))
        shortcutIndexOf += 3;
      return shortcutIndexOf;
    }

    private static FormationAI.BehaviorSide GetSideOf(SiegeWeapon weapon)
    {
      switch (weapon)
      {
        case IPrimarySiegeWeapon primarySiegeWeapon:
          return primarySiegeWeapon.WeaponSide;
        case RangedSiegeWeapon _:
          return FormationAI.BehaviorSide.Middle;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\SiegeWeaponController.cs", nameof (GetSideOf), 346);
          return FormationAI.BehaviorSide.Middle;
      }
    }
  }
}
