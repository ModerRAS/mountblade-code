// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AI.SiegeWeaponAutoDeployer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Missions;

#nullable disable
namespace TaleWorlds.MountAndBlade.AI
{
  public class SiegeWeaponAutoDeployer
  {
    private IMissionSiegeWeaponsController siegeWeaponsController;
    private List<DeploymentPoint> deploymentPoints;

    public SiegeWeaponAutoDeployer(
      List<DeploymentPoint> deploymentPoints,
      IMissionSiegeWeaponsController weaponsController)
    {
      this.deploymentPoints = deploymentPoints;
      this.siegeWeaponsController = weaponsController;
    }

    public void DeployAll(BattleSideEnum side)
    {
      if (side == BattleSideEnum.Attacker)
        this.DeployAllForAttackers();
      else if (side == BattleSideEnum.Defender)
        this.DeployAllForDefenders();
      else
        Debug.FailedAssert("Invalid side", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\SiegeWeaponAutoDeployer.cs", nameof (DeployAll), 32);
    }

    private bool DeployWeaponFrom(DeploymentPoint dp)
    {
      IEnumerable<System.Type> source = dp.DeployableWeaponTypes.Where<System.Type>((Func<System.Type, bool>) (t => this.deploymentPoints.Count<DeploymentPoint>((Func<DeploymentPoint, bool>) (dep => dep.IsDeployed && MissionSiegeWeaponsController.GetWeaponType((ScriptComponentBehavior) dep.DeployedWeapon) == t)) < this.siegeWeaponsController.GetMaxDeployableWeaponCount(t)));
      if (source.IsEmpty<System.Type>())
        return false;
      System.Type t1 = source.MaxBy<System.Type, float>((Func<System.Type, float>) (t => this.GetWeaponValue(t)));
      dp.Deploy(t1);
      return true;
    }

    private void DeployAllForAttackers()
    {
      List<DeploymentPoint> list = this.deploymentPoints.Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => !dp.IsDisabled && !dp.IsDeployed)).ToList<DeploymentPoint>();
      list.Shuffle<DeploymentPoint>();
      int num = this.deploymentPoints.Count<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => dp.GetDeploymentPointType() == DeploymentPoint.DeploymentPointType.Breach));
      bool flag = Mission.Current.AttackerTeam != Mission.Current.PlayerTeam && num >= 2;
      foreach (DeploymentPoint dp in list)
      {
        if (!flag || dp.GetDeploymentPointType() == DeploymentPoint.DeploymentPointType.Ranged)
          this.DeployWeaponFrom(dp);
      }
    }

    private void DeployAllForDefenders()
    {
      Mission current = Mission.Current;
      Scene scene = current.Scene;
      List<ICastleKeyPosition> list1 = current.ActiveMissionObjects.Select<MissionObject, GameEntity>((Func<MissionObject, GameEntity>) (amo => amo.GameEntity)).Select<GameEntity, UsableMachine>((Func<GameEntity, UsableMachine>) (e => e.GetFirstScriptOfType<UsableMachine>())).Where<UsableMachine>((Func<UsableMachine, bool>) (um => um is ICastleKeyPosition)).Cast<ICastleKeyPosition>().Where<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (x =>
      {
        IPrimarySiegeWeapon attackerSiegeWeapon = x.AttackerSiegeWeapon;
        return attackerSiegeWeapon == null || attackerSiegeWeapon.WeaponSide != FormationAI.BehaviorSide.BehaviorSideNotSet;
      })).ToList<ICastleKeyPosition>();
      List<DeploymentPoint> list2 = this.deploymentPoints.Where<DeploymentPoint>((Func<DeploymentPoint, bool>) (dp => !dp.IsDeployed)).ToList<DeploymentPoint>();
      while (!list2.IsEmpty<DeploymentPoint>())
      {
        Threat maxThreat = RangedSiegeWeaponAi.ThreatSeeker.GetMaxThreat(list1);
        Vec3 mostDangerousThreatPosition = maxThreat.Position;
        DeploymentPoint dp1 = list2.MinBy<DeploymentPoint, float>((Func<DeploymentPoint, float>) (dp => dp.GameEntity.GlobalPosition.DistanceSquared(mostDangerousThreatPosition)));
        if (this.DeployWeaponFrom(dp1))
          maxThreat.ThreatValue *= 0.5f;
        list2.Remove(dp1);
      }
    }

    protected virtual float GetWeaponValue(System.Type weaponType)
    {
      if (weaponType == typeof (BatteringRam) || weaponType == typeof (SiegeTower) || weaponType == typeof (SiegeLadder))
        return (float) (0.89999997615814209 + (double) MBRandom.RandomFloat * 0.20000000298023224);
      return typeof (RangedSiegeWeapon).IsAssignableFrom(weaponType) ? (float) (0.699999988079071 + (double) MBRandom.RandomFloat * 0.20000000298023224) : 1f;
    }
  }
}
