// Decompiled with JetBrains decompiler
// Type: SandBox.MapScene
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using System.Threading;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class MapScene : IMapScene
  {
    private Scene _scene;
    private MBAgentRendererSceneController _agentRendererSceneController;
    private Dictionary<string, uint> _sceneLevels;
    private int _battleTerrainIndexMapWidth;
    private int _battleTerrainIndexMapHeight;
    private byte[] _battleTerrainIndexMap;
    private Vec2 _terrainSize;
    private ReaderWriterLockSlim _sharedLock;

    public Scene Scene => this._scene;

    public MapScene()
    {
      this._sharedLock = new ReaderWriterLockSlim();
      this._sceneLevels = new Dictionary<string, uint>();
    }

    public Vec2 GetTerrainSize() => this._terrainSize;

    public uint GetSceneLevel(string name)
    {
      this._sharedLock.EnterReadLock();
      uint sceneLevel;
      int num = !this._sceneLevels.TryGetValue(name, out sceneLevel) ? 0 : (sceneLevel != (uint) int.MaxValue ? 1 : 0);
      this._sharedLock.ExitReadLock();
      if (num != 0)
        return sceneLevel;
      uint levelMaskOfLevelName = this._scene.GetUpgradeLevelMaskOfLevelName(name);
      this._sharedLock.EnterWriteLock();
      this._sceneLevels[name] = levelMaskOfLevelName;
      this._sharedLock.ExitWriteLock();
      return levelMaskOfLevelName;
    }

    public void SetSceneLevels(List<string> levels)
    {
      foreach (string level in levels)
        this._sceneLevels.Add(level, (uint) int.MaxValue);
    }

    public List<AtmosphereState> GetAtmosphereStates()
    {
      List<AtmosphereState> atmosphereStates = new List<AtmosphereState>();
      foreach (GameEntity gameEntity in this.Scene.FindEntitiesWithTag("atmosphere_probe"))
      {
        MapAtmosphereProbe firstScriptOfType = gameEntity.GetFirstScriptOfType<MapAtmosphereProbe>();
        Vec3 globalPosition = gameEntity.GlobalPosition;
        AtmosphereState atmosphereState = new AtmosphereState()
        {
          Position = globalPosition,
          HumidityAverage = firstScriptOfType.rainDensity,
          HumidityVariance = 5f,
          TemperatureAverage = firstScriptOfType.temperature,
          TemperatureVariance = 5f,
          distanceForMaxWeight = firstScriptOfType.minRadius,
          distanceForMinWeight = firstScriptOfType.maxRadius,
          ColorGradeTexture = firstScriptOfType.colorGrade
        };
        atmosphereStates.Add(atmosphereState);
      }
      return atmosphereStates;
    }

    public void ValidateAgentVisualsReseted()
    {
      if (!((NativeObject) this._scene != (NativeObject) null) || this._agentRendererSceneController == null)
        return;
      MBAgentRendererSceneController.ValidateAgentVisualsReseted(this._scene, this._agentRendererSceneController);
    }

    public void SetAtmosphereColorgrade(TerrainType terrainType)
    {
    }

    public void AddNewEntityToMapScene(string entityId, Vec2 position)
    {
      GameEntity gameEntity = GameEntity.Instantiate(this._scene, entityId, true);
      if (!((NativeObject) gameEntity != (NativeObject) null))
        return;
      gameEntity.SetLocalPosition(new Vec3(position.x, position.y)
      {
        z = this._scene.GetGroundHeightAtPosition(position.ToVec3())
      });
    }

    public void GetFaceIndexForMultiplePositions(
      int movedPartyCount,
      float[] positionArray,
      PathFaceRecord[] resultArray)
    {
      MBMapScene.GetFaceIndexForMultiplePositions(this._scene, movedPartyCount, positionArray, resultArray, false, true);
    }

    public void GetMapBorders(
      out Vec2 minimumPosition,
      out Vec2 maximumPosition,
      out float maximumHeight)
    {
      GameEntity firstEntityWithName1 = this._scene.GetFirstEntityWithName("border_min");
      GameEntity firstEntityWithName2 = this._scene.GetFirstEntityWithName("border_max");
      minimumPosition = (NativeObject) firstEntityWithName1 != (NativeObject) null ? firstEntityWithName1.GetGlobalFrame().origin.AsVec2 : Vec2.Zero;
      maximumPosition = (NativeObject) firstEntityWithName2 != (NativeObject) null ? firstEntityWithName2.GetGlobalFrame().origin.AsVec2 : new Vec2(900f, 900f);
      maximumHeight = (NativeObject) firstEntityWithName2 != (NativeObject) null ? firstEntityWithName2.GetGlobalFrame().origin.z : 670f;
    }

    public void Load()
    {
      Debug.Print("Creating map scene");
      this._scene = Scene.CreateNewScene(false, atlasGroup: DecalAtlasGroup.Worldmap, sceneName: nameof (MapScene));
      this._scene.SetClothSimulationState(true);
      this._agentRendererSceneController = MBAgentRendererSceneController.CreateNewAgentRendererSceneController(this._scene, 4096);
      this._agentRendererSceneController.SetDoTimerBasedForcedSkeletonUpdates(false);
      this._scene.SetOcclusionMode(true);
      SceneInitializationData initData = new SceneInitializationData(true);
      initData.UsePhysicsMaterials = false;
      initData.EnableFloraPhysics = false;
      initData.UseTerrainMeshBlending = false;
      initData.CreateOros = false;
      Debug.Print("Reading map scene");
      this._scene.Read("Main_map", ref initData);
      Utilities.SetAllocationAlwaysValidScene(this._scene);
      this._scene.DisableStaticShadows(true);
      this._scene.InvalidateTerrainPhysicsMaterials();
      this.LoadAtmosphereData(this._scene);
      this.DisableUnwalkableNavigationMeshes();
      MBMapScene.ValidateTerrainSoundIds();
      this._scene.OptimizeScene();
      Vec2i nodeDimension;
      float nodeSize;
      this._scene.GetTerrainData(out nodeDimension, out nodeSize, out int _, out int _);
      this._terrainSize.x = (float) nodeDimension.X * nodeSize;
      this._terrainSize.y = (float) nodeDimension.Y * nodeSize;
      MBMapScene.GetBattleSceneIndexMap(this._scene, ref this._battleTerrainIndexMap, ref this._battleTerrainIndexMapWidth, ref this._battleTerrainIndexMapHeight);
      Debug.Print("Ticking map scene for first initialization");
      this._scene.Tick(0.1f);
      Campaign.Current.CampaignLateAITickTask = (ITask) AsyncTask.CreateWithDelegate(new ManagedDelegate()
      {
        Instance = new ManagedDelegate.DelegateDefinition(Campaign.LateAITick)
      }, false);
    }

    public void Destroy()
    {
      MBAgentRendererSceneController.DestructAgentRendererSceneController(this._scene, this._agentRendererSceneController, false);
      this._agentRendererSceneController = (MBAgentRendererSceneController) null;
    }

    public void DisableUnwalkableNavigationMeshes()
    {
      this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Mountain), false);
      this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Lake), false);
      this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Water), false);
      this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.River), false);
      this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Canyon), false);
      this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.RuralArea), false);
    }

    public PathFaceRecord GetFaceIndex(Vec2 position)
    {
      PathFaceRecord record = new PathFaceRecord(-1, -1, -1);
      this._scene.GetNavMeshFaceIndex(ref record, position, false, true);
      return record;
    }

    public bool AreFacesOnSameIsland(
      PathFaceRecord startingFace,
      PathFaceRecord endFace,
      bool ignoreDisabled)
    {
      return this._scene.DoesPathExistBetweenFaces(startingFace.FaceIndex, endFace.FaceIndex, ignoreDisabled);
    }

    private void LoadAtmosphereData(Scene mapScene) => MBMapScene.LoadAtmosphereData(mapScene);

    public TerrainType GetTerrainTypeAtPosition(Vec2 position)
    {
      return this.GetFaceTerrainType(this.GetFaceIndex(position));
    }

    public TerrainType GetFaceTerrainType(PathFaceRecord navMeshFace)
    {
      if (!navMeshFace.IsValid())
      {
        Debug.FailedAssert("Null nav mesh face tried to get terrain type.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\MapScene.cs", nameof (GetFaceTerrainType), (int) byte.MaxValue);
        return TerrainType.Plain;
      }
      switch (navMeshFace.FaceGroupIndex)
      {
        case 1:
          return TerrainType.Plain;
        case 2:
          return TerrainType.Desert;
        case 3:
          return TerrainType.Snow;
        case 4:
          return TerrainType.Forest;
        case 5:
          return TerrainType.Steppe;
        case 6:
          return TerrainType.Fording;
        case 7:
          return TerrainType.Mountain;
        case 8:
          return TerrainType.Lake;
        case 10:
          return TerrainType.Water;
        case 11:
          return TerrainType.River;
        case 13:
          return TerrainType.Canyon;
        case 14:
          return TerrainType.RuralArea;
        default:
          return TerrainType.Plain;
      }
    }

    public static int GetNavigationMeshIndexOfTerrainType(TerrainType terrainType)
    {
      switch (terrainType)
      {
        case TerrainType.Water:
          return 10;
        case TerrainType.Mountain:
          return 7;
        case TerrainType.Snow:
          return 3;
        case TerrainType.Steppe:
          return 5;
        case TerrainType.Plain:
          return 1;
        case TerrainType.Desert:
          return 2;
        case TerrainType.River:
          return 11;
        case TerrainType.Forest:
          return 4;
        case TerrainType.Fording:
          return 6;
        case TerrainType.Lake:
          return 8;
        case TerrainType.Canyon:
          return 13;
        case TerrainType.RuralArea:
          return 14;
        default:
          return -1;
      }
    }

    public List<TerrainType> GetEnvironmentTerrainTypes(Vec2 position)
    {
      List<TerrainType> environmentTerrainTypes = new List<TerrainType>();
      Vec2 vec2 = new Vec2(1f, 0.0f);
      environmentTerrainTypes.Add(this.GetTerrainTypeAtPosition(position));
      for (int index1 = 0; index1 < 8; ++index1)
      {
        vec2.RotateCCW(0.7853982f * (float) index1);
        for (int index2 = 1; index2 < 7; ++index2)
        {
          TerrainType terrainTypeAtPosition = this.GetTerrainTypeAtPosition(position + (float) index2 * vec2);
          this.GetFaceIndex(position + (float) index2 * vec2);
          if (!environmentTerrainTypes.Contains(terrainTypeAtPosition))
            environmentTerrainTypes.Add(terrainTypeAtPosition);
        }
      }
      return environmentTerrainTypes;
    }

    public List<TerrainType> GetEnvironmentTerrainTypesCount(
      Vec2 position,
      out TerrainType currentPositionTerrainType)
    {
      List<TerrainType> terrainTypesCount = new List<TerrainType>();
      Vec2 vec2 = new Vec2(1f, 0.0f);
      currentPositionTerrainType = this.GetTerrainTypeAtPosition(position);
      terrainTypesCount.Add(currentPositionTerrainType);
      for (int index1 = 0; index1 < 8; ++index1)
      {
        vec2.RotateCCW(0.7853982f * (float) index1);
        for (int index2 = 1; index2 < 7; ++index2)
        {
          PathFaceRecord faceIndex = Campaign.Current.MapSceneWrapper.GetFaceIndex(position + (float) index2 * vec2);
          if (faceIndex.IsValid())
          {
            TerrainType faceTerrainType = this.GetFaceTerrainType(faceIndex);
            terrainTypesCount.Add(faceTerrainType);
          }
        }
      }
      return terrainTypesCount;
    }

    public MapPatchData GetMapPatchAtPosition(Vec2 position)
    {
      if (this._battleTerrainIndexMap == null)
        return new MapPatchData();
      int num1 = MathF.Floor(position.x / this._terrainSize.X * (float) this._battleTerrainIndexMapWidth);
      int num2 = MathF.Floor(position.y / this._terrainSize.Y * (float) this._battleTerrainIndexMapHeight);
      int num3 = MBMath.ClampIndex(num1, 0, this._battleTerrainIndexMapWidth);
      int terrainIndexMapHeight = this._battleTerrainIndexMapHeight;
      int index = (MBMath.ClampIndex(num2, 0, terrainIndexMapHeight) * this._battleTerrainIndexMapWidth + num3) * 2;
      byte battleTerrainIndex1 = this._battleTerrainIndexMap[index];
      byte battleTerrainIndex2 = this._battleTerrainIndexMap[index + 1];
      Vec2 vec2 = new Vec2((float) ((int) battleTerrainIndex2 & 15) / 15f, (float) ((int) battleTerrainIndex2 >> 4 & 15) / 15f);
      return new MapPatchData()
      {
        sceneIndex = (int) battleTerrainIndex1,
        normalizedCoordinates = vec2
      };
    }

    public Vec2 GetAccessiblePointNearPosition(Vec2 position, float radius)
    {
      return MBMapScene.GetAccessiblePointNearPosition(this._scene, position, radius);
    }

    public bool GetPathBetweenAIFaces(
      PathFaceRecord startingFace,
      PathFaceRecord endingFace,
      Vec2 startingPosition,
      Vec2 endingPosition,
      float agentRadius,
      NavigationPath path,
      int[] excludedFaceIds = null)
    {
      return this._scene.GetPathBetweenAIFaces(startingFace.FaceIndex, endingFace.FaceIndex, startingPosition, endingPosition, agentRadius, path, excludedFaceIds);
    }

    public bool GetPathDistanceBetweenAIFaces(
      PathFaceRecord startingAiFace,
      PathFaceRecord endingAiFace,
      Vec2 startingPosition,
      Vec2 endingPosition,
      float agentRadius,
      float distanceLimit,
      out float distance)
    {
      return this._scene.GetPathDistanceBetweenAIFaces(startingAiFace.FaceIndex, endingAiFace.FaceIndex, startingPosition, endingPosition, agentRadius, distanceLimit, out distance);
    }

    public bool IsLineToPointClear(
      PathFaceRecord startingFace,
      Vec2 position,
      Vec2 destination,
      float agentRadius)
    {
      return this._scene.IsLineToPointClear(startingFace.FaceIndex, position, destination, agentRadius);
    }

    public Vec2 GetLastPointOnNavigationMeshFromPositionToDestination(
      PathFaceRecord startingFace,
      Vec2 position,
      Vec2 destination)
    {
      return this._scene.GetLastPointOnNavigationMeshFromPositionToDestination(startingFace.FaceIndex, position, destination);
    }

    public Vec2 GetNavigationMeshCenterPosition(PathFaceRecord face)
    {
      Vec3 zero = Vec3.Zero;
      this._scene.GetNavMeshCenterPosition(face.FaceIndex, ref zero);
      return zero.AsVec2;
    }

    public int GetNumberOfNavigationMeshFaces() => this._scene.GetNavMeshFaceCount();

    public bool GetHeightAtPoint(Vec2 point, ref float height)
    {
      return this._scene.GetHeightAtPoint(point, BodyFlags.CommonCollisionExcludeFlags, ref height);
    }

    public float GetWinterTimeFactor() => this._scene.GetWinterTimeFactor();

    public float GetFaceVertexZ(PathFaceRecord navMeshFace)
    {
      return this._scene.GetNavMeshFaceFirstVertexZ(navMeshFace.FaceIndex);
    }

    public Vec3 GetGroundNormal(Vec2 position) => this._scene.GetNormalAt(position);

    public void GetTerrainHeightAndNormal(Vec2 position, out float height, out Vec3 normal)
    {
      this._scene.GetTerrainHeightAndNormal(position, out height, out normal);
    }

    public string GetTerrainTypeName(TerrainType type)
    {
      string terrainTypeName = "Invalid";
      switch (type)
      {
        case TerrainType.Water:
          terrainTypeName = "Water";
          break;
        case TerrainType.Mountain:
          terrainTypeName = "Mountain";
          break;
        case TerrainType.Snow:
          terrainTypeName = "Snow";
          break;
        case TerrainType.Steppe:
          terrainTypeName = "Steppe";
          break;
        case TerrainType.Plain:
          terrainTypeName = "Plain";
          break;
        case TerrainType.Desert:
          terrainTypeName = "Desert";
          break;
        case TerrainType.Swamp:
          terrainTypeName = "Swamp";
          break;
        case TerrainType.Dune:
          terrainTypeName = "Dune";
          break;
        case TerrainType.Bridge:
          terrainTypeName = "Bridge";
          break;
        case TerrainType.River:
          terrainTypeName = "River";
          break;
        case TerrainType.Forest:
          terrainTypeName = "Forest";
          break;
        case TerrainType.Fording:
          terrainTypeName = "Fording";
          break;
        case TerrainType.Lake:
          terrainTypeName = "Lake";
          break;
        case TerrainType.Canyon:
          terrainTypeName = "Canyon";
          break;
      }
      return terrainTypeName;
    }

    public void GetSnowAmountData(byte[] snowData) => this._scene.GetSnowAmountData(snowData);
  }
}
