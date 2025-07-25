// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Missions.Handlers.SiegeDeploymentHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.AI;

#nullable disable
namespace TaleWorlds.MountAndBlade.Missions.Handlers
{
  public class SiegeDeploymentHandler : BattleDeploymentHandler
  {
    private IMissionSiegeWeaponsController _defenderSiegeWeaponsController;
    private IMissionSiegeWeaponsController _attackerSiegeWeaponsController;

    public IEnumerable<DeploymentPoint> PlayerDeploymentPoints { get; private set; }

    public IEnumerable<DeploymentPoint> AllDeploymentPoints { get; private set; }

    public SiegeDeploymentHandler(bool isPlayerAttacker)
      : base(isPlayerAttacker)
    {
    }

    public override void OnBehaviorInitialize()
    {
      MissionSiegeEnginesLogic missionBehavior = this.Mission.GetMissionBehavior<MissionSiegeEnginesLogic>();
      this._defenderSiegeWeaponsController = missionBehavior.GetSiegeWeaponsController(BattleSideEnum.Defender);
      this._attackerSiegeWeaponsController = missionBehavior.GetSiegeWeaponsController(BattleSideEnum.Attacker);
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.AllDeploymentPoints = Mission.Current.ActiveMissionObjects.FindAllWithType<DeploymentPoint>();
      this.PlayerDeploymentPoints = this.AllDeploymentPoints.Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.Side == this.team.Side));
      foreach (DeploymentPoint allDeploymentPoint in this.AllDeploymentPoints)
        allDeploymentPoint.OnDeploymentStateChanged += new Action<DeploymentPoint, SynchedMissionObject>(this.OnDeploymentStateChange);
      this.Mission.IsFormationUnitPositionAvailable_AdditionalCondition += new Func<WorldPosition, Team, bool>(this.Mission_IsFormationUnitPositionAvailable_AdditionalCondition);
    }

    public override void OnRemoveBehavior()
    {
      base.OnRemoveBehavior();
      this.Mission.IsFormationUnitPositionAvailable_AdditionalCondition -= new Func<WorldPosition, Team, bool>(this.Mission_IsFormationUnitPositionAvailable_AdditionalCondition);
    }

    public override void FinishDeployment()
    {
      foreach (DeploymentPoint allDeploymentPoint in this.AllDeploymentPoints)
        allDeploymentPoint.OnDeploymentStateChanged -= new Action<DeploymentPoint, SynchedMissionObject>(this.OnDeploymentStateChange);
      base.FinishDeployment();
    }

    public void DeployAllSiegeWeaponsOfPlayer()
    {
      BattleSideEnum side = this.isPlayerAttacker ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
      new SiegeWeaponAutoDeployer(this.Mission.ActiveMissionObjects.FindAllWithType<DeploymentPoint>().Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.Side == side)).ToList<DeploymentPoint>(), this.GetWeaponsControllerOfSide(side)).DeployAll(side);
    }

    public int GetMaxDeployableWeaponCountOfPlayer(System.Type weapon)
    {
      return this.GetWeaponsControllerOfSide(this.isPlayerAttacker ? BattleSideEnum.Attacker : BattleSideEnum.Defender).GetMaxDeployableWeaponCount(weapon);
    }

    public void DeployAllSiegeWeaponsOfAi()
    {
      BattleSideEnum side = this.isPlayerAttacker ? BattleSideEnum.Defender : BattleSideEnum.Attacker;
      new SiegeWeaponAutoDeployer(this.Mission.ActiveMissionObjects.FindAllWithType<DeploymentPoint>().Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.Side == side)).ToList<DeploymentPoint>(), this.GetWeaponsControllerOfSide(side)).DeployAll(side);
      this.RemoveDeploymentPoints(side);
    }

    public void RemoveDeploymentPoints(BattleSideEnum side)
    {
      foreach (DeploymentPoint deploymentPoint in this.Mission.ActiveMissionObjects.FindAllWithType<DeploymentPoint>().Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.Side == side)).ToArray<DeploymentPoint>())
      {
        foreach (SynchedMissionObject synchedMissionObject in deploymentPoint.DeployableWeapons.ToArray<SynchedMissionObject>())
        {
          if ((deploymentPoint.DeployedWeapon == null || !synchedMissionObject.GameEntity.IsVisibleIncludeParents()) && synchedMissionObject is SiegeWeapon siegeWeapon)
            siegeWeapon.SetDisabledSynched();
        }
        deploymentPoint.SetDisabledSynched();
      }
    }

    public void RemoveUnavailableDeploymentPoints(BattleSideEnum side)
    {
      IMissionSiegeWeaponsController weapons = side == BattleSideEnum.Defender ? this._defenderSiegeWeaponsController : this._attackerSiegeWeaponsController;
      foreach (DeploymentPoint deploymentPoint in this.Mission.ActiveMissionObjects.FindAllWithType<DeploymentPoint>().Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.Side == side)).ToArray<DeploymentPoint>())
      {
        if (!deploymentPoint.DeployableWeaponTypes.Any<System.Type>((Func<System.Type, bool>) (wt => weapons.GetMaxDeployableWeaponCount(wt) > 0)))
        {
          foreach (SynchedMissionObject synchedMissionObject in deploymentPoint.DeployableWeapons.Select<SynchedMissionObject, SiegeWeapon>((Func<SynchedMissionObject, SiegeWeapon>) (sw => sw as SiegeWeapon)))
            synchedMissionObject.SetDisabledSynched();
          deploymentPoint.SetDisabledSynched();
        }
      }
    }

    public void UnHideDeploymentPoints(BattleSideEnum side)
    {
      foreach (DeploymentPoint deploymentPoint in this.Mission.ActiveMissionObjects.FindAllWithType<DeploymentPoint>().Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => !dp.IsDisabled && dp.Side == side)))
        deploymentPoint.Show();
    }

    public int GetDeployableWeaponCountOfPlayer(System.Type weapon)
    {
      return this.GetWeaponsControllerOfSide(this.isPlayerAttacker ? BattleSideEnum.Attacker : BattleSideEnum.Defender).GetMaxDeployableWeaponCount(weapon) - this.PlayerDeploymentPoints.Count<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.IsDeployed && MissionSiegeWeaponsController.GetWeaponType((ScriptComponentBehavior) dp.DeployedWeapon) == weapon));
    }

    protected bool Mission_IsFormationUnitPositionAvailable_AdditionalCondition(
      WorldPosition position,
      Team team)
    {
      if (team == null || team.Side != BattleSideEnum.Defender)
        return true;
      Scene scene = this.Mission.Scene;
      Vec3 globalPosition = scene.FindEntityWithTag("defender_infantry").GlobalPosition;
      WorldPosition position1 = new WorldPosition(scene, UIntPtr.Zero, globalPosition, false);
      return scene.DoesPathExistBetweenPositions(position1, position);
    }

    private void OnDeploymentStateChange(
      DeploymentPoint deploymentPoint,
      SynchedMissionObject targetObject)
    {
      if (!deploymentPoint.IsDeployed && this.team.DetachmentManager.ContainsDetachment(deploymentPoint.DisbandedWeapon as IDetachment))
        this.team.DetachmentManager.DestroyDetachment(deploymentPoint.DisbandedWeapon as IDetachment);
      if (!(targetObject is SiegeWeapon missionWeapon))
        return;
      IMissionSiegeWeaponsController controllerOfSide = this.GetWeaponsControllerOfSide(deploymentPoint.Side);
      if (deploymentPoint.IsDeployed)
        controllerOfSide.OnWeaponDeployed(missionWeapon);
      else
        controllerOfSide.OnWeaponUndeployed(missionWeapon);
    }

    private IMissionSiegeWeaponsController GetWeaponsControllerOfSide(BattleSideEnum side)
    {
      return side != BattleSideEnum.Defender ? this._attackerSiegeWeaponsController : this._defenderSiegeWeaponsController;
    }

    [Conditional("DEBUG")]
    private void AssertSiegeWeapons(IEnumerable<DeploymentPoint> allDeploymentPoints)
    {
      HashSet<SynchedMissionObject> synchedMissionObjectSet = new HashSet<SynchedMissionObject>();
      foreach (SynchedMissionObject synchedMissionObject in allDeploymentPoints.SelectMany<DeploymentPoint, SynchedMissionObject>((Func<DeploymentPoint, IEnumerable<SynchedMissionObject>>) (amo => amo.DeployableWeapons)))
      {
        if (!synchedMissionObjectSet.Add(synchedMissionObject))
          break;
      }
    }
  }
}
