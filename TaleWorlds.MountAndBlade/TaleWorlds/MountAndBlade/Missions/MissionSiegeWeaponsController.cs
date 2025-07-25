// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Missions.MissionSiegeWeaponsController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade.Missions
{
  public class MissionSiegeWeaponsController : IMissionSiegeWeaponsController
  {
    private readonly List<MissionSiegeWeapon> _weapons;
    private readonly List<MissionSiegeWeapon> _undeployedWeapons;
    private readonly Dictionary<DestructableComponent, MissionSiegeWeapon> _deployedWeapons;
    private BattleSideEnum _side;

    public MissionSiegeWeaponsController(BattleSideEnum side, List<MissionSiegeWeapon> weapons)
    {
      this._side = side;
      this._weapons = weapons;
      this._undeployedWeapons = new List<MissionSiegeWeapon>((IEnumerable<MissionSiegeWeapon>) this._weapons);
      this._deployedWeapons = new Dictionary<DestructableComponent, MissionSiegeWeapon>();
    }

    public int GetMaxDeployableWeaponCount(System.Type t)
    {
      int deployableWeaponCount = 0;
      foreach (MissionSiegeWeapon weapon in this._weapons)
      {
        if (MissionSiegeWeaponsController.GetSiegeWeaponBaseType(weapon.Type) == t)
          ++deployableWeaponCount;
      }
      return deployableWeaponCount;
    }

    public IEnumerable<IMissionSiegeWeapon> GetSiegeWeapons()
    {
      return this._weapons.Cast<IMissionSiegeWeapon>();
    }

    public void OnWeaponDeployed(SiegeWeapon missionWeapon)
    {
      SiegeEngineType missionWeaponType = missionWeapon.GetSiegeEngineType();
      int index = this._undeployedWeapons.FindIndex((Predicate<MissionSiegeWeapon>) (uw => uw.Type == missionWeaponType));
      MissionSiegeWeapon undeployedWeapon = this._undeployedWeapons[index];
      DestructableComponent destructionComponent = missionWeapon.DestructionComponent;
      destructionComponent.MaxHitPoint = undeployedWeapon.MaxHealth;
      destructionComponent.HitPoint = undeployedWeapon.InitialHealth;
      destructionComponent.OnHitTaken += new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnWeaponHit);
      destructionComponent.OnDestroyed += new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnWeaponDestroyed);
      this._undeployedWeapons.RemoveAt(index);
      this._deployedWeapons.Add(destructionComponent, undeployedWeapon);
    }

    public void OnWeaponUndeployed(SiegeWeapon missionWeapon)
    {
      DestructableComponent destructionComponent = missionWeapon.DestructionComponent;
      MissionSiegeWeapon missionSiegeWeapon;
      this._deployedWeapons.TryGetValue(destructionComponent, out missionSiegeWeapon);
      SiegeEngineType siegeEngineType = missionWeapon.GetSiegeEngineType();
      destructionComponent.MaxHitPoint = (float) siegeEngineType.BaseHitPoints;
      destructionComponent.HitPoint = destructionComponent.MaxHitPoint;
      destructionComponent.OnHitTaken -= new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnWeaponHit);
      destructionComponent.OnDestroyed -= new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnWeaponDestroyed);
      this._deployedWeapons.Remove(destructionComponent);
      this._undeployedWeapons.Add(missionSiegeWeapon);
    }

    private void OnWeaponHit(
      DestructableComponent target,
      Agent attackerAgent,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      int inflictedDamage)
    {
      MissionSiegeWeapon missionSiegeWeapon;
      if (target.BattleSide != this._side || !this._deployedWeapons.TryGetValue(target, out missionSiegeWeapon))
        return;
      float health = Math.Max(0.0f, missionSiegeWeapon.Health - (float) inflictedDamage);
      missionSiegeWeapon.SetHealth(health);
    }

    private void OnWeaponDestroyed(
      DestructableComponent target,
      Agent attackerAgent,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      int inflictedDamage)
    {
      MissionSiegeWeapon missionSiegeWeapon;
      if (target.BattleSide != this._side || !this._deployedWeapons.TryGetValue(target, out missionSiegeWeapon))
        return;
      missionSiegeWeapon.SetHealth(0.0f);
      target.OnHitTaken -= new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnWeaponHit);
      target.OnDestroyed -= new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnWeaponDestroyed);
      this._deployedWeapons.Remove(target);
    }

    public static System.Type GetWeaponType(ScriptComponentBehavior weapon)
    {
      return weapon is UsableGameObjectGroup ? weapon.GameEntity.GetChildren().SelectMany<GameEntity, ScriptComponentBehavior>((Func<GameEntity, IEnumerable<ScriptComponentBehavior>>) (c => c.GetScriptComponents())).First<ScriptComponentBehavior>((Func<ScriptComponentBehavior, bool>) (s => s is IFocusable)).GetType() : weapon.GetType();
    }

    private static System.Type GetSiegeWeaponBaseType(SiegeEngineType siegeWeaponType)
    {
      if (siegeWeaponType == DefaultSiegeEngineTypes.Ladder)
        return typeof (SiegeLadder);
      if (siegeWeaponType == DefaultSiegeEngineTypes.Ballista)
        return typeof (Ballista);
      if (siegeWeaponType == DefaultSiegeEngineTypes.FireBallista)
        return typeof (FireBallista);
      if (siegeWeaponType == DefaultSiegeEngineTypes.Ram)
        return typeof (BatteringRam);
      if (siegeWeaponType == DefaultSiegeEngineTypes.SiegeTower)
        return typeof (SiegeTower);
      if (siegeWeaponType == DefaultSiegeEngineTypes.Onager || siegeWeaponType == DefaultSiegeEngineTypes.Catapult)
        return typeof (Mangonel);
      if (siegeWeaponType == DefaultSiegeEngineTypes.FireOnager || siegeWeaponType == DefaultSiegeEngineTypes.FireCatapult)
        return typeof (FireMangonel);
      return siegeWeaponType == DefaultSiegeEngineTypes.Trebuchet ? typeof (Trebuchet) : (System.Type) null;
    }
  }
}
