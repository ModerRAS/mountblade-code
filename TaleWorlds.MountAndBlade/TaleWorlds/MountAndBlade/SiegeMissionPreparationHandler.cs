// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeMissionPreparationHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeMissionPreparationHandler : MissionLogic
  {
    private const string SallyOutTag = "sally_out";
    private const string AssaultTag = "siege_assault";
    private const string DamageDecalTag = "damage_decal";
    private float[] _wallHitPointPercentages;
    private bool _hasAnySiegeTower;
    private SiegeMissionPreparationHandler.SiegeMissionType _siegeMissionType;

    private Scene MissionScene => Mission.Current.Scene;

    public SiegeMissionPreparationHandler(
      bool isSallyOut,
      bool isReliefForceAttack,
      float[] wallHitPointPercentages,
      bool hasAnySiegeTower)
    {
      this._siegeMissionType = !isSallyOut ? (!isReliefForceAttack ? SiegeMissionPreparationHandler.SiegeMissionType.Assault : SiegeMissionPreparationHandler.SiegeMissionType.ReliefForce) : SiegeMissionPreparationHandler.SiegeMissionType.SallyOut;
      this._wallHitPointPercentages = wallHitPointPercentages;
      this._hasAnySiegeTower = hasAnySiegeTower;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.SetUpScene();
    }

    private void SetUpScene()
    {
      this.ArrangeBesiegerDeploymentPointsAndMachines();
      this.ArrangeEntitiesForMissionType();
      this.ArrangeDestructedMeshes();
      if (this._siegeMissionType == SiegeMissionPreparationHandler.SiegeMissionType.Assault)
        return;
      this.ArrangeSiegeMachinesForNonAssaultMission();
    }

    private void ArrangeBesiegerDeploymentPointsAndMachines()
    {
      int num = this._siegeMissionType == SiegeMissionPreparationHandler.SiegeMissionType.Assault ? 1 : 0;
      Debug.Print("{SIEGE} ArrangeBesiegerDeploymentPointsAndMachines", color: Debug.DebugColor.DarkCyan, debugFilter: 64UL);
      Debug.Print("{SIEGE} MissionType: " + (object) this._siegeMissionType, color: Debug.DebugColor.DarkCyan, debugFilter: 64UL);
      if (num != 0)
        return;
      foreach (SynchedMissionObject synchedMissionObject in this.Mission.ActiveMissionObjects.FindAllWithType<SiegeLadder>().ToArray<SiegeLadder>())
        synchedMissionObject.SetDisabledSynched();
    }

    private void ArrangeEntitiesForMissionType()
    {
      string tag = this._siegeMissionType == SiegeMissionPreparationHandler.SiegeMissionType.Assault ? "sally_out" : "siege_assault";
      Debug.Print("{SIEGE} ArrangeEntitiesForMissionType", color: Debug.DebugColor.DarkCyan, debugFilter: 64UL);
      Debug.Print("{SIEGE} MissionType: " + (object) this._siegeMissionType, color: Debug.DebugColor.DarkCyan, debugFilter: 64UL);
      Debug.Print("{SIEGE} TagToBeRemoved: " + tag, color: Debug.DebugColor.DarkCyan, debugFilter: 64UL);
      foreach (GameEntity gameEntity in this.MissionScene.FindEntitiesWithTag(tag).ToList<GameEntity>())
        gameEntity.Remove(77);
    }

    private void ArrangeDestructedMeshes()
    {
      float num1 = 0.0f;
      foreach (float hitPointPercentage in this._wallHitPointPercentages)
        num1 += hitPointPercentage;
      if (!((IEnumerable<float>) this._wallHitPointPercentages).IsEmpty<float>())
        num1 /= (float) this._wallHitPointPercentages.Length;
      float num2 = MBMath.Lerp(0.0f, 0.7f, 1f - num1);
      IEnumerable<SynchedMissionObject> source1 = this.Mission.MissionObjects.OfType<SynchedMissionObject>();
      IEnumerable<DestructableComponent> destructibleComponents = source1.OfType<DestructableComponent>();
      foreach (StrategicArea strategicArea in this.Mission.ActiveMissionObjects.OfType<StrategicArea>().ToList<StrategicArea>())
        strategicArea.DetermineAssociatedDestructibleComponents(destructibleComponents);
      foreach (SynchedMissionObject synchedMissionObject in source1)
      {
        if (this._hasAnySiegeTower && synchedMissionObject.GameEntity.HasTag("tower_merlon"))
        {
          synchedMissionObject.SetVisibleSynched(false, true);
        }
        else
        {
          DestructableComponent firstScriptOfType = synchedMissionObject.GameEntity.GetFirstScriptOfType<DestructableComponent>();
          if (firstScriptOfType != null && firstScriptOfType.CanBeDestroyedInitially && (double) num2 > 0.0 && (double) MBRandom.RandomFloat <= (double) num2)
            firstScriptOfType.PreDestroy();
        }
      }
      if ((double) num2 >= 0.10000000149011612)
      {
        List<GameEntity> list = this.Mission.Scene.FindEntitiesWithTag("damage_decal").ToList<GameEntity>();
        foreach (GameEntity gameEntity in list)
          gameEntity.GetFirstScriptOfType<SynchedMissionObject>().SetVisibleSynched(false);
        for (int index = MathF.Floor((float) list.Count * num2); index > 0; --index)
        {
          GameEntity gameEntity = list[MBRandom.RandomInt(list.Count)];
          list.Remove(gameEntity);
          gameEntity.GetFirstScriptOfType<SynchedMissionObject>().SetVisibleSynched(true);
        }
      }
      List<WallSegment> source2 = new List<WallSegment>();
      List<WallSegment> list1 = this.Mission.ActiveMissionObjects.FindAllWithType<WallSegment>().Where<WallSegment>((Func<WallSegment, bool>) (ws => ws.DefenseSide != FormationAI.BehaviorSide.BehaviorSideNotSet && ws.GameEntity.GetChildren().Any<GameEntity>((Func<GameEntity, bool>) (ge => ge.HasTag("broken_child"))))).ToList<WallSegment>();
      foreach (double hitPointPercentage in this._wallHitPointPercentages)
      {
        WallSegment rightMostWall = this.FindRightMostWall(list1);
        if ((double) MathF.Abs((float) hitPointPercentage) < 9.9999997473787516E-06)
        {
          rightMostWall.OnChooseUsedWallSegment(true);
          source2.Add(rightMostWall);
        }
        else
          rightMostWall.OnChooseUsedWallSegment(false);
        list1.Remove(rightMostWall);
      }
      foreach (WallSegment wallSegment in list1)
        wallSegment.OnChooseUsedWallSegment(false);
      if ((double) num2 < 0.10000000149011612)
        return;
      List<SiegeWeapon> siegeWeaponList = new List<SiegeWeapon>();
      foreach (SiegeWeapon siegeWeapon in this.Mission.ActiveMissionObjects.FindAllWithType<SiegeWeapon>().Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (sw => sw is IPrimarySiegeWeapon)))
      {
        SiegeWeapon primarySiegeWeapon = siegeWeapon;
        if (source2.Any<WallSegment>((Func<WallSegment, bool>) (b => b.DefenseSide == ((IPrimarySiegeWeapon) primarySiegeWeapon).WeaponSide)))
          siegeWeaponList.Add(primarySiegeWeapon);
      }
      siegeWeaponList.ForEach((Action<SiegeWeapon>) (siegeWeaponToRemove => siegeWeaponToRemove.SetDisabledSynched()));
    }

    private WallSegment FindRightMostWall(List<WallSegment> wallList)
    {
      int count = wallList.Count;
      if (count == 1)
        return wallList[0];
      BatteringRam batteringRam = this.Mission.ActiveMissionObjects.FindAllWithType<BatteringRam>().First<BatteringRam>();
      if (count != 2)
        return (WallSegment) null;
      return (double) Vec3.CrossProduct(wallList[0].GameEntity.GlobalPosition - batteringRam.GameEntity.GlobalPosition, wallList[1].GameEntity.GlobalPosition - batteringRam.GameEntity.GlobalPosition).z < 0.0 ? wallList[1] : wallList[0];
    }

    private void ArrangeSiegeMachinesForNonAssaultMission()
    {
      foreach (GameEntity gameEntity in Mission.Current.GetActiveEntitiesWithScriptComponentOfType<SiegeWeapon>())
      {
        SiegeWeapon firstScriptOfType = gameEntity.GetFirstScriptOfType<SiegeWeapon>();
        if (!(firstScriptOfType is RangedSiegeWeapon))
          firstScriptOfType.Deactivate();
      }
    }

    private enum SiegeMissionType
    {
      Assault,
      SallyOut,
      ReliefForce,
    }
  }
}
