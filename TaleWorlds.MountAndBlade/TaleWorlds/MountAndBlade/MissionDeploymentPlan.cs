// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionDeploymentPlan
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionDeploymentPlan : IMissionDeploymentPlan
  {
    public const int NumFormationsWithUnset = 11;
    private readonly Mission _mission;
    private readonly BattleSideDeploymentPlan[] _battleSideDeploymentPlans = new BattleSideDeploymentPlan[2];
    private readonly WorldFrame?[] _playerSpawnFrames = new WorldFrame?[2];
    private FormationSceneSpawnEntry[,] _formationSceneSpawnEntries;

    public MissionDeploymentPlan(Mission mission)
    {
      this._mission = mission;
      for (int index = 0; index < 2; ++index)
      {
        BattleSideEnum side = (BattleSideEnum) index;
        this._battleSideDeploymentPlans[index] = new BattleSideDeploymentPlan(mission, side);
        this._playerSpawnFrames[index] = new WorldFrame?();
      }
    }

    public void CreateReinforcementPlans()
    {
      for (int index = 0; index < 2; ++index)
        this._battleSideDeploymentPlans[index].CreateReinforcementPlans();
    }

    public void ClearDeploymentPlanForSide(BattleSideEnum battleSide, DeploymentPlanType planType)
    {
      this._battleSideDeploymentPlans[(int) battleSide].ClearPlans(planType);
    }

    public bool HasPlayerSpawnFrame(BattleSideEnum battleSide)
    {
      return this._playerSpawnFrames[(int) battleSide].HasValue;
    }

    public bool GetPlayerSpawnFrame(
      BattleSideEnum battleSide,
      out WorldPosition position,
      out Vec2 direction)
    {
      WorldFrame? playerSpawnFrame = this._playerSpawnFrames[(int) battleSide];
      if (playerSpawnFrame.HasValue)
      {
        ref WorldPosition local1 = ref position;
        Scene scene = Mission.Current.Scene;
        UIntPtr zero = UIntPtr.Zero;
        WorldFrame worldFrame = playerSpawnFrame.Value;
        Vec3 groundVec3 = worldFrame.Origin.GetGroundVec3();
        WorldPosition worldPosition = new WorldPosition(scene, zero, groundVec3, false);
        local1 = worldPosition;
        ref Vec2 local2 = ref direction;
        worldFrame = playerSpawnFrame.Value;
        Vec2 vec2 = worldFrame.Rotation.f.AsVec2.Normalized();
        local2 = vec2;
        return true;
      }
      position = WorldPosition.Invalid;
      direction = Vec2.Invalid;
      return false;
    }

    public static bool HasSignificantMountedTroops(int footTroopCount, int mountedTroopCount)
    {
      return (double) mountedTroopCount / (double) Math.Max((float) (mountedTroopCount + footTroopCount), 1f) >= 0.10000000149011612;
    }

    public void ClearAddedTroopsForBattleSide(
      BattleSideEnum battleSide,
      DeploymentPlanType planType)
    {
      this._battleSideDeploymentPlans[(int) battleSide].ClearAddedTroops(planType);
    }

    public void ClearAll()
    {
      for (int index = 0; index < 2; ++index)
      {
        this._battleSideDeploymentPlans[index].ClearAddedTroops(DeploymentPlanType.Initial);
        this._battleSideDeploymentPlans[index].ClearPlans(DeploymentPlanType.Initial);
        this._battleSideDeploymentPlans[index].ClearAddedTroops(DeploymentPlanType.Reinforcement);
        this._battleSideDeploymentPlans[index].ClearPlans(DeploymentPlanType.Reinforcement);
      }
    }

    public void AddTroopsForBattleSide(
      BattleSideEnum battleSide,
      DeploymentPlanType planType,
      FormationClass formationClass,
      int footTroopCount,
      int mountedTroopCount)
    {
      this._battleSideDeploymentPlans[(int) battleSide].AddTroops(formationClass, footTroopCount, mountedTroopCount, planType);
    }

    public void SetSpawnWithHorsesForSide(BattleSideEnum battleSide, bool spawnWithHorses)
    {
      this._battleSideDeploymentPlans[(int) battleSide].SetSpawnWithHorses(spawnWithHorses);
    }

    public void PlanBattleDeployment(
      BattleSideEnum battleSide,
      DeploymentPlanType planType,
      float spawnPathOffset = 0.0f)
    {
      if (!battleSide.IsValid())
      {
        Debug.FailedAssert("Cannot make deployment plan. Battle side is not valid", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\MissionDeploymentPlan.cs", nameof (PlanBattleDeployment), 126);
      }
      else
      {
        int index = (int) battleSide;
        BattleSideDeploymentPlan sideDeploymentPlan = this._battleSideDeploymentPlans[index];
        if (this._battleSideDeploymentPlans[index].IsPlanMade(planType))
          sideDeploymentPlan.ClearPlans(planType);
        if (!this._mission.HasSpawnPath && this._formationSceneSpawnEntries == null)
          this.ReadSpawnEntitiesFromScene(this._mission.IsFieldBattle);
        sideDeploymentPlan.PlanBattleDeployment(this._formationSceneSpawnEntries, planType, spawnPathOffset);
      }
    }

    public bool IsPositionInsideDeploymentBoundaries(BattleSideEnum battleSide, in Vec2 position)
    {
      BattleSideDeploymentPlan sideDeploymentPlan = this._battleSideDeploymentPlans[(int) battleSide];
      if (sideDeploymentPlan.HasDeploymentBoundaries())
        return sideDeploymentPlan.IsPositionInsideDeploymentBoundaries(in position);
      Debug.FailedAssert("Cannot check if position is within deployment boundaries as requested battle side does not have deployment boundaries.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\MissionDeploymentPlan.cs", nameof (IsPositionInsideDeploymentBoundaries), 155);
      return false;
    }

    public bool IsPositionInsideSiegeDeploymentBoundaries(in Vec2 position)
    {
      bool flag = false;
      foreach (ICollection<Vec2> source in (IEnumerable<ICollection<Vec2>>) this._mission.Boundaries.Values)
      {
        if (MBSceneUtilities.IsPointInsideBoundaries(in position, source.ToList<Vec2>()))
        {
          flag = true;
          break;
        }
      }
      return flag;
    }

    public Vec2 GetClosestDeploymentBoundaryPosition(
      BattleSideEnum battleSide,
      in Vec2 position,
      bool withNavMesh = false,
      float positionZ = 0.0f)
    {
      BattleSideDeploymentPlan sideDeploymentPlan = this._battleSideDeploymentPlans[(int) battleSide];
      if (sideDeploymentPlan.HasDeploymentBoundaries())
        return sideDeploymentPlan.GetClosestDeploymentBoundaryPosition(in position, withNavMesh, positionZ);
      Debug.FailedAssert("Cannot retrieve closest deployment boundary position as requested battle side does not have deployment boundaries.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\MissionDeploymentPlan.cs", nameof (GetClosestDeploymentBoundaryPosition), 183);
      return position;
    }

    public int GetTroopCountForSide(BattleSideEnum side, DeploymentPlanType planType)
    {
      return this._battleSideDeploymentPlans[(int) side].GetTroopCount(planType);
    }

    public float GetSpawnPathOffsetForSide(BattleSideEnum side, DeploymentPlanType planType)
    {
      return this._battleSideDeploymentPlans[(int) side].GetSpawnPathOffset(planType);
    }

    public IFormationDeploymentPlan GetFormationPlan(
      BattleSideEnum side,
      FormationClass fClass,
      DeploymentPlanType planType)
    {
      return this._battleSideDeploymentPlans[(int) side].GetFormationPlan(fClass, planType);
    }

    public bool IsPlanMadeForBattleSide(BattleSideEnum side, DeploymentPlanType planType)
    {
      return this._battleSideDeploymentPlans[(int) side].IsPlanMade(planType);
    }

    public bool IsPlanMadeForBattleSide(
      BattleSideEnum side,
      out bool isFirstPlan,
      DeploymentPlanType planType)
    {
      isFirstPlan = false;
      if (!this._battleSideDeploymentPlans[(int) side].IsPlanMade(planType))
        return false;
      isFirstPlan = this._battleSideDeploymentPlans[(int) side].IsFirstPlan(planType);
      return true;
    }

    public bool IsInitialPlanSuitableForFormations(
      BattleSideEnum side,
      (int, int)[] troopDataPerFormationClass)
    {
      return this._battleSideDeploymentPlans[(int) side].IsInitialPlanSuitableForFormations(troopDataPerFormationClass);
    }

    public bool HasDeploymentBoundaries(BattleSideEnum side)
    {
      return this._battleSideDeploymentPlans[(int) side].HasDeploymentBoundaries();
    }

    public MatrixFrame GetBattleSideDeploymentFrame(BattleSideEnum side)
    {
      if (this.IsPlanMadeForBattleSide(side, DeploymentPlanType.Initial))
        return this._battleSideDeploymentPlans[(int) side].GetDeploymentFrame();
      Debug.FailedAssert("Cannot retrieve formation deployment frame as deployment plan is not made for this battle side.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\MissionDeploymentPlan.cs", nameof (GetBattleSideDeploymentFrame), 237);
      return MatrixFrame.Identity;
    }

    public Vec3 GetMeanPositionOfPlan(BattleSideEnum side, DeploymentPlanType planType)
    {
      if (this.IsPlanMadeForBattleSide(side, planType))
        return this._battleSideDeploymentPlans[(int) side].GetMeanPositionOfPlan(planType);
      Debug.FailedAssert("Cannot retrieve formation deployment frame as deployment plan is not made for this battle side.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\MissionDeploymentPlan.cs", nameof (GetMeanPositionOfPlan), 250);
      return Vec3.Invalid;
    }

    public MBReadOnlyList<(string id, List<Vec2> points)> GetDeploymentBoundaries(
      BattleSideEnum side)
    {
      if (this.HasDeploymentBoundaries(side))
        return this._battleSideDeploymentPlans[(int) side].DeploymentBoundaries;
      Debug.FailedAssert("Cannot retrieve battle side deployment boundaries as they are not available for this battle side.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\MissionDeploymentPlan.cs", nameof (GetDeploymentBoundaries), 263);
      return (MBReadOnlyList<(string, List<Vec2>)>) null;
    }

    public void UpdateReinforcementPlan(BattleSideEnum side)
    {
      this._battleSideDeploymentPlans[(int) side].UpdateReinforcementPlans();
    }

    private void ReadSpawnEntitiesFromScene(bool isFieldBattle)
    {
      for (int index = 0; index < 2; ++index)
        this._playerSpawnFrames[index] = new WorldFrame?();
      this._formationSceneSpawnEntries = new FormationSceneSpawnEntry[2, 11];
      Scene scene = this._mission.Scene;
      if (isFieldBattle)
      {
        for (int index1 = 0; index1 < 2; ++index1)
        {
          string str = index1 == 1 ? "attacker_" : "defender_";
          for (int index2 = 0; index2 < 11; ++index2)
          {
            FormationClass formationClass1 = (FormationClass) index2;
            GameEntity gameEntity = scene.FindEntityWithTag(str + formationClass1.GetName().ToLower());
            if ((NativeObject) gameEntity == (NativeObject) null)
            {
              FormationClass formationClass2 = formationClass1.FallbackClass();
              int index3 = (int) formationClass2;
              GameEntity spawnEntity = this._formationSceneSpawnEntries[index1, index3].SpawnEntity;
              gameEntity = (NativeObject) spawnEntity != (NativeObject) null ? spawnEntity : scene.FindEntityWithTag(str + formationClass2.GetName().ToLower());
              formationClass1 = (NativeObject) gameEntity != (NativeObject) null ? formationClass2 : FormationClass.NumberOfAllFormations;
            }
            this._formationSceneSpawnEntries[index1, index2] = new FormationSceneSpawnEntry(formationClass1, gameEntity, gameEntity);
          }
        }
      }
      else
      {
        GameEntity sallyOutSetEntity = (GameEntity) null;
        if (this._mission.IsSallyOutBattle)
          sallyOutSetEntity = scene.FindEntityWithTag("sally_out_ambush_battle_set");
        if ((NativeObject) sallyOutSetEntity != (NativeObject) null)
          this.ReadSallyOutEntitiesFromScene(scene, sallyOutSetEntity);
        else
          this.ReadSiegeBattleEntitiesFromScene(scene, BattleSideEnum.Defender);
        this.ReadSiegeBattleEntitiesFromScene(scene, BattleSideEnum.Attacker);
      }
    }

    private void ReadSallyOutEntitiesFromScene(Scene missionScene, GameEntity sallyOutSetEntity)
    {
      int index1 = 0;
      MatrixFrame globalFrame = sallyOutSetEntity.GetFirstChildEntityWithTag("sally_out_ambush_player").GetGlobalFrame();
      WorldPosition origin = new WorldPosition(this._mission.Scene, UIntPtr.Zero, globalFrame.origin, false);
      this._playerSpawnFrames[index1] = new WorldFrame?(new WorldFrame(globalFrame.rotation, origin));
      GameEntity childEntityWithTag1 = sallyOutSetEntity.GetFirstChildEntityWithTag("sally_out_ambush_infantry");
      GameEntity childEntityWithTag2 = sallyOutSetEntity.GetFirstChildEntityWithTag("sally_out_ambush_archer");
      GameEntity childEntityWithTag3 = sallyOutSetEntity.GetFirstChildEntityWithTag("sally_out_ambush_cavalry");
      for (int index2 = 0; index2 < 11; ++index2)
      {
        FormationClass formationClass1 = (FormationClass) index2;
        FormationClass formationClass2 = formationClass1.FallbackClass();
        GameEntity gameEntity = (GameEntity) null;
        switch (formationClass2)
        {
          case FormationClass.Infantry:
            gameEntity = childEntityWithTag1;
            break;
          case FormationClass.Ranged:
            gameEntity = childEntityWithTag2;
            break;
          case FormationClass.Cavalry:
          case FormationClass.HorseArcher:
            gameEntity = childEntityWithTag3;
            break;
        }
        this._formationSceneSpawnEntries[index1, index2] = new FormationSceneSpawnEntry(formationClass1, gameEntity, gameEntity);
      }
    }

    private void ReadSiegeBattleEntitiesFromScene(Scene missionScene, BattleSideEnum battleSide)
    {
      int index1 = (int) battleSide;
      string str = battleSide.ToString().ToLower() + "_";
      for (int index2 = 0; index2 < 11; ++index2)
      {
        FormationClass formationClass1 = (FormationClass) index2;
        string tag1 = str + formationClass1.GetName().ToLower();
        string tag2 = tag1 + "_reinforcement";
        GameEntity spawnEntity = missionScene.FindEntityWithTag(tag1);
        GameEntity reinforcementSpawnEntity;
        if ((NativeObject) spawnEntity == (NativeObject) null)
        {
          FormationClass formationClass2 = formationClass1.FallbackClass();
          int index3 = (int) formationClass2;
          FormationSceneSpawnEntry formationSceneSpawnEntry = this._formationSceneSpawnEntries[index1, index3];
          if ((NativeObject) formationSceneSpawnEntry.SpawnEntity != (NativeObject) null)
          {
            spawnEntity = formationSceneSpawnEntry.SpawnEntity;
            reinforcementSpawnEntity = formationSceneSpawnEntry.ReinforcementSpawnEntity;
          }
          else
          {
            string tag3 = str + formationClass2.GetName().ToLower();
            string tag4 = tag3 + "_reinforcement";
            spawnEntity = missionScene.FindEntityWithTag(tag3);
            reinforcementSpawnEntity = missionScene.FindEntityWithTag(tag4);
          }
          formationClass1 = (NativeObject) spawnEntity != (NativeObject) null ? formationClass2 : FormationClass.NumberOfAllFormations;
        }
        else
          reinforcementSpawnEntity = missionScene.FindEntityWithTag(tag2);
        if ((NativeObject) reinforcementSpawnEntity == (NativeObject) null)
          reinforcementSpawnEntity = spawnEntity;
        this._formationSceneSpawnEntries[index1, index2] = new FormationSceneSpawnEntry(formationClass1, spawnEntity, reinforcementSpawnEntity);
      }
    }

    bool IMissionDeploymentPlan.IsPositionInsideDeploymentBoundaries(
      BattleSideEnum battleSide,
      in Vec2 position)
    {
      return this.IsPositionInsideDeploymentBoundaries(battleSide, in position);
    }

    Vec2 IMissionDeploymentPlan.GetClosestDeploymentBoundaryPosition(
      BattleSideEnum battleSide,
      in Vec2 position,
      bool withNavMesh,
      float positionZ)
    {
      return this.GetClosestDeploymentBoundaryPosition(battleSide, in position, withNavMesh, positionZ);
    }
  }
}
