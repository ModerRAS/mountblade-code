// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeDeploymentMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade.Missions.Handlers;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeDeploymentMissionController : DeploymentMissionController
  {
    private SiegeDeploymentHandler _siegeDeploymentHandler;

    public SiegeDeploymentMissionController(bool isPlayerAttacker)
      : base(isPlayerAttacker)
    {
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._siegeDeploymentHandler = this.Mission.GetMissionBehavior<SiegeDeploymentHandler>();
    }

    public override void AfterStart()
    {
      this.Mission.GetMissionBehavior<DeploymentHandler>().InitializeDeploymentPoints();
      base.AfterStart();
    }

    protected override void SetupTeamsOfSide(BattleSideEnum side)
    {
      Team team = side == BattleSideEnum.Attacker ? this.Mission.AttackerTeam : this.Mission.DefenderTeam;
      if (team == this.Mission.PlayerTeam)
      {
        this._siegeDeploymentHandler.RemoveUnavailableDeploymentPoints(side);
        this._siegeDeploymentHandler.UnHideDeploymentPoints(side);
        this._siegeDeploymentHandler.DeployAllSiegeWeaponsOfPlayer();
      }
      else
        this._siegeDeploymentHandler.DeployAllSiegeWeaponsOfAi();
      this.MissionAgentSpawnLogic.SetSpawnTroops(side, true, true);
      foreach (GameEntity gameEntity in this.Mission.GetActiveEntitiesWithScriptComponentOfType<SiegeWeapon>())
      {
        SiegeWeapon siegeWeapon = gameEntity.GetScriptComponents<SiegeWeapon>().FirstOrDefault<SiegeWeapon>();
        if (siegeWeapon != null && siegeWeapon.GetSide() == side)
          siegeWeapon.TickAuxForInit();
      }
      this.SetupTeamsOfSideAux(side);
      if (team != this.Mission.PlayerTeam)
        return;
      foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits > 0)
          formation.SetControlledByAI(true);
      }
    }

    public override void OnBeforeDeploymentFinished()
    {
      BattleSideEnum side = this.Mission.PlayerTeam.Side;
      this._siegeDeploymentHandler.RemoveDeploymentPoints(side);
      foreach (SynchedMissionObject synchedMissionObject in Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeLadder>().Where<SiegeLadder>((Func<SiegeLadder, bool>) (sl => !sl.GameEntity.IsVisibleIncludeParents())).ToList<SiegeLadder>())
        synchedMissionObject.SetDisabledSynched();
      this.OnSideDeploymentFinished(side);
    }

    public override void OnAfterDeploymentFinished()
    {
      this.Mission.RemoveMissionBehavior((MissionBehavior) this._siegeDeploymentHandler);
    }

    public List<ItemObject> GetSiegeMissiles()
    {
      List<ItemObject> siegeMissiles = new List<ItemObject>();
      siegeMissiles.Add(MBObjectManager.Instance.GetObject<ItemObject>("grapeshot_fire_projectile"));
      foreach (GameEntity gameEntity in Mission.Current.GetActiveEntitiesWithScriptComponentOfType<RangedSiegeWeapon>())
      {
        RangedSiegeWeapon firstScriptOfType = gameEntity.GetFirstScriptOfType<RangedSiegeWeapon>();
        if (!string.IsNullOrEmpty(firstScriptOfType.MissileItemID))
        {
          ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>(firstScriptOfType.MissileItemID);
          if (!siegeMissiles.Contains(itemObject))
            siegeMissiles.Add(itemObject);
        }
      }
      foreach (GameEntity gameEntity in Mission.Current.GetActiveEntitiesWithScriptComponentOfType<StonePile>())
      {
        StonePile firstScriptOfType = gameEntity.GetFirstScriptOfType<StonePile>();
        if (!string.IsNullOrEmpty(firstScriptOfType.GivenItemID))
        {
          ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>(firstScriptOfType.GivenItemID);
          if (!siegeMissiles.Contains(itemObject))
            siegeMissiles.Add(itemObject);
        }
      }
      return siegeMissiles;
    }
  }
}
