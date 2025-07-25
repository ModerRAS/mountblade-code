// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GameEntityExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class GameEntityExtensions
  {
    public static GameEntity Instantiate(
      Scene scene,
      MissionWeapon weapon,
      bool showHolsterWithWeapon,
      bool needBatchedVersion)
    {
      WeaponData weaponData = weapon.GetWeaponData(needBatchedVersion);
      WeaponStatsData[] weaponStatsData = weapon.GetWeaponStatsData();
      WeaponData ammoWeaponData = weapon.GetAmmoWeaponData(needBatchedVersion);
      WeaponStatsData[] ammoWeaponStatsData = weapon.GetAmmoWeaponStatsData();
      GameEntity fromWeapon = MBAPI.IMBGameEntityExtensions.CreateFromWeapon(scene.Pointer, in weaponData, weaponStatsData, weaponStatsData.Length, in ammoWeaponData, ammoWeaponStatsData, ammoWeaponStatsData.Length, showHolsterWithWeapon);
      weaponData.DeinitializeManagedPointers();
      return fromWeapon;
    }

    public static void CreateSimpleSkeleton(this GameEntity gameEntity, string skeletonName)
    {
      gameEntity.Skeleton = MBAPI.IMBSkeletonExtensions.CreateSimpleSkeleton(skeletonName);
    }

    public static void CreateAgentSkeleton(
      this GameEntity gameEntity,
      string skeletonName,
      bool isHumanoid,
      MBActionSet actionSet,
      string monsterUsageSetName,
      Monster monster)
    {
      AnimationSystemData animationSystemData = monster.FillAnimationSystemData(actionSet, 1f, false);
      gameEntity.Skeleton = MBAPI.IMBSkeletonExtensions.CreateAgentSkeleton(skeletonName, isHumanoid, actionSet.Index, monsterUsageSetName, ref animationSystemData);
    }

    public static void CreateSkeletonWithActionSet(
      this GameEntity gameEntity,
      ref AnimationSystemData animationSystemData)
    {
      gameEntity.Skeleton = MBSkeletonExtensions.CreateWithActionSet(ref animationSystemData);
    }

    public static void FadeOut(
      this GameEntity gameEntity,
      float interval,
      bool isRemovingFromScene)
    {
      MBAPI.IMBGameEntityExtensions.FadeOut(gameEntity.Pointer, interval, isRemovingFromScene);
    }

    public static void FadeIn(this GameEntity gameEntity, bool resetAlpha = true)
    {
      MBAPI.IMBGameEntityExtensions.FadeIn(gameEntity.Pointer, resetAlpha);
    }

    public static void HideIfNotFadingOut(this GameEntity gameEntity)
    {
      MBAPI.IMBGameEntityExtensions.HideIfNotFadingOut(gameEntity.Pointer);
    }
  }
}
