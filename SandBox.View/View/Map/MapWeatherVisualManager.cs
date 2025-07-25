// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapWeatherVisualManager
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.View.Map
{
  public class MapWeatherVisualManager : CampaignEntityVisualComponent
  {
    public const int DefaultCloudHeight = 26;
    private MapWeatherVisual[] _allWeatherNodeVisuals;
    private const string RainPrefabName = "campaign_rain_prefab";
    private const string BlizzardPrefabName = "campaign_snow_prefab";
    private const string RainSoundPath = "event:/map/ambient/bed/rain";
    private const string SnowSoundPath = "event:/map/ambient/bed/snow";
    private const string WeatherEventParameterName = "Rainfall";
    private const string CameraRainPrefabName = "map_camera_rain_prefab";
    private const int DefaultRainObjectPoolCount = 5;
    private const int DefaultBlizzardObjectPoolCount = 5;
    private const int WeatherCheckOriginZDelta = 25;
    private readonly List<GameEntity> _unusedRainPrefabEntityPool;
    private readonly List<GameEntity> _unusedBlizzardPrefabEntityPool;
    private readonly Scene _mapScene;
    private readonly byte[] _rainData = new byte[Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * 2];
    private readonly byte[] _rainDataTemporal = new byte[Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * 2];
    private SoundEvent _currentRainSound;
    private SoundEvent _currentBlizzardSound;
    private GameEntity _cameraRainEffect;

    public static MapWeatherVisualManager Current
    {
      get => Campaign.Current.GetEntityComponent<MapWeatherVisualManager>();
    }

    private int DimensionSquared
    {
      get
      {
        return Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension;
      }
    }

    public MapWeatherVisualManager()
    {
      this._unusedRainPrefabEntityPool = new List<GameEntity>();
      this._unusedBlizzardPrefabEntityPool = new List<GameEntity>();
      for (int index = 0; index < this.DimensionSquared * 2; ++index)
      {
        this._rainData[index] = (byte) 0;
        this._rainDataTemporal[index] = (byte) 0;
      }
      this._allWeatherNodeVisuals = new MapWeatherVisual[this.DimensionSquared];
      this._mapScene = ((MapScene) Campaign.Current.MapSceneWrapper).Scene;
      WeatherNode[] allWeatherNodes = Campaign.Current.GetCampaignBehavior<MapWeatherCampaignBehavior>().AllWeatherNodes;
      for (int index = 0; index < allWeatherNodes.Length; ++index)
        this._allWeatherNodeVisuals[index] = new MapWeatherVisual(allWeatherNodes[index]);
    }

    public override void OnVisualTick(MapScreen screen, float realDt, float dt)
    {
      for (int index = 0; index < this._allWeatherNodeVisuals.Length; ++index)
        this._allWeatherNodeVisuals[index].Tick();
      TWParallel.For(0, this.DimensionSquared, (TWParallel.ParallelForAuxPredicate) ((startInclusive, endExclusive) =>
      {
        for (int index1 = startInclusive; index1 < endExclusive; ++index1)
        {
          int index2 = index1 * 2;
          this._rainDataTemporal[index2] = (byte) MBMath.Lerp((float) this._rainDataTemporal[index2], (float) this._rainData[index2], 1f - (float) Math.Exp(-1.7999999523162842 * ((double) realDt + (double) dt)));
          this._rainDataTemporal[index2 + 1] = (byte) MBMath.Lerp((float) this._rainDataTemporal[index2 + 1], (float) this._rainData[index2 + 1], 1f - (float) Math.Exp(-1.7999999523162842 * ((double) realDt + (double) dt)));
        }
      }));
      this._mapScene.SetLandscapeRainMaskData(this._rainDataTemporal);
      this.WeatherAudioTick();
    }

    public void SetRainData(int dataIndex, byte value) => this._rainData[dataIndex * 2] = value;

    public void SetCloudData(int dataIndex, byte value)
    {
      this._rainData[dataIndex * 2 + 1] = value;
    }

    private void WeatherAudioTick()
    {
      SoundManager.SetGlobalParameter("Rainfall", 0.5f);
      float num1 = 1f;
      float height = 0.0f;
      Campaign.Current.MapSceneWrapper.GetHeightAtPoint(this._mapScene.LastFinalRenderCameraFrame.origin.AsVec2, ref height);
      float num2 = this._mapScene.LastFinalRenderCameraFrame.origin.Z - height;
      if (26.0 > (double) num2)
        num1 = num2 / 26f;
      MatrixFrame renderCameraFrame = this._mapScene.LastFinalRenderCameraFrame;
      switch (Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(renderCameraFrame.Elevate(-25f * num1).origin.AsVec2))
      {
        case MapWeatherModel.WeatherEvent.Clear:
          this.DestroyBlizzardSound();
          this.DestroyRainSound();
          this._cameraRainEffect.SetVisibilityExcludeParents(false);
          MBMapScene.ApplyRainColorGrade = false;
          break;
        case MapWeatherModel.WeatherEvent.HeavyRain:
          if ((double) this._mapScene.LastFinalRenderCameraPosition.z < 65.0)
          {
            this._cameraRainEffect.SetVisibilityExcludeParents(true);
            renderCameraFrame = this._mapScene.LastFinalRenderCameraFrame;
            MatrixFrame frame = renderCameraFrame.Elevate(-5f);
            this._cameraRainEffect.SetFrame(ref frame);
          }
          else
            this._cameraRainEffect.SetVisibilityExcludeParents(false);
          this.DestroyBlizzardSound();
          this.StartRainSoundIfNeeded();
          MBMapScene.ApplyRainColorGrade = true;
          break;
        case MapWeatherModel.WeatherEvent.Blizzard:
          this.DestroyRainSound();
          this.StartBlizzardSoundIfNeeded();
          this._cameraRainEffect.SetVisibilityExcludeParents(false);
          MBMapScene.ApplyRainColorGrade = false;
          break;
      }
    }

    private void DestroyRainSound()
    {
      if (this._currentRainSound == null)
        return;
      this._currentRainSound.Stop();
      this._currentRainSound = (SoundEvent) null;
    }

    private void DestroyBlizzardSound()
    {
      if (this._currentBlizzardSound == null)
        return;
      this._currentBlizzardSound.Stop();
      this._currentBlizzardSound = (SoundEvent) null;
    }

    private void StartRainSoundIfNeeded()
    {
      if (this._currentRainSound != null)
        return;
      this._currentRainSound = SoundManager.CreateEvent("event:/map/ambient/bed/rain", this._mapScene);
      this._currentRainSound.Play();
    }

    private void StartBlizzardSoundIfNeeded()
    {
      if (this._currentBlizzardSound != null)
        return;
      this._currentBlizzardSound = SoundManager.CreateEvent("event:/map/ambient/bed/snow", this._mapScene);
      this._currentBlizzardSound.Play();
    }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this.InitializeObjectPoolWithDefaultCount();
      this._cameraRainEffect = GameEntity.Instantiate(this._mapScene, "map_camera_rain_prefab", MatrixFrame.Identity);
    }

    public GameEntity GetRainPrefabFromPool()
    {
      if (this._unusedRainPrefabEntityPool.IsEmpty<GameEntity>())
        this._unusedRainPrefabEntityPool.AddRange((IEnumerable<GameEntity>) this.CreateNewWeatherPrefabPoolElements("campaign_rain_prefab", 5));
      GameEntity rainPrefabFromPool = this._unusedRainPrefabEntityPool[0];
      this._unusedRainPrefabEntityPool.Remove(rainPrefabFromPool);
      return rainPrefabFromPool;
    }

    public GameEntity GetBlizzardPrefabFromPool()
    {
      if (this._unusedBlizzardPrefabEntityPool.IsEmpty<GameEntity>())
        this._unusedBlizzardPrefabEntityPool.AddRange((IEnumerable<GameEntity>) this.CreateNewWeatherPrefabPoolElements("campaign_snow_prefab", 5));
      GameEntity blizzardPrefabFromPool = this._unusedBlizzardPrefabEntityPool[0];
      this._unusedBlizzardPrefabEntityPool.Remove(blizzardPrefabFromPool);
      return blizzardPrefabFromPool;
    }

    public void ReleaseRainPrefab(GameEntity prefab)
    {
      this._unusedRainPrefabEntityPool.Add(prefab);
      prefab.SetVisibilityExcludeParents(false);
    }

    public void ReleaseBlizzardPrefab(GameEntity prefab)
    {
      this._unusedBlizzardPrefabEntityPool.Add(prefab);
      prefab.SetVisibilityExcludeParents(false);
    }

    private void InitializeObjectPoolWithDefaultCount()
    {
      this._unusedRainPrefabEntityPool.AddRange((IEnumerable<GameEntity>) this.CreateNewWeatherPrefabPoolElements("campaign_rain_prefab", 5));
      this._unusedBlizzardPrefabEntityPool.AddRange((IEnumerable<GameEntity>) this.CreateNewWeatherPrefabPoolElements("campaign_snow_prefab", 5));
    }

    private List<GameEntity> CreateNewWeatherPrefabPoolElements(string prefabName, int delta)
    {
      List<GameEntity> prefabPoolElements = new List<GameEntity>();
      for (int index = 0; index < delta; ++index)
      {
        GameEntity gameEntity = GameEntity.Instantiate(this._mapScene, prefabName, MatrixFrame.Identity);
        gameEntity.SetVisibilityExcludeParents(false);
        prefabPoolElements.Add(gameEntity);
      }
      return prefabPoolElements;
    }
  }
}
