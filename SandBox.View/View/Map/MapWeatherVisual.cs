// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapWeatherVisual
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.View.Map
{
  public class MapWeatherVisual
  {
    private readonly WeatherNode _weatherNode;
    public GameEntity Prefab;
    private MapWeatherModel.WeatherEvent _previousWeatherEvent;
    private int _maskPixelIndex = -1;

    public Vec2 Position => this._weatherNode.Position;

    public Vec2 PrefabSpawnOffset
    {
      get
      {
        Vec2 terrainSize = Campaign.Current.MapSceneWrapper.GetTerrainSize();
        return new Vec2((float) ((double) terrainSize.X / (double) Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * 0.5), terrainSize.Y / (float) Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * 0.5f);
      }
    }

    public int MaskPixelIndex
    {
      get
      {
        if (this._maskPixelIndex == -1)
        {
          Vec2 terrainSize = Campaign.Current.MapSceneWrapper.GetTerrainSize();
          float num = terrainSize.X / (float) Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension;
          this._maskPixelIndex = (int) ((double) this.Position.y / (double) (terrainSize.Y / (float) Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension)) * Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension + (int) ((double) this.Position.x / (double) num);
        }
        return this._maskPixelIndex;
      }
    }

    public override string ToString() => this.Position.ToString();

    public MapWeatherVisual(WeatherNode weatherNode)
    {
      this._weatherNode = weatherNode;
      this._previousWeatherEvent = MapWeatherModel.WeatherEvent.Clear;
    }

    public void Tick()
    {
      if (!this._weatherNode.IsVisuallyDirty)
        return;
      bool flag1 = this._previousWeatherEvent == MapWeatherModel.WeatherEvent.HeavyRain;
      bool flag2 = this._previousWeatherEvent == MapWeatherModel.WeatherEvent.Blizzard;
      MapWeatherModel.WeatherEvent weatherEventInPosition = Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(this.Position);
      bool flag3 = weatherEventInPosition == MapWeatherModel.WeatherEvent.HeavyRain;
      int num1 = weatherEventInPosition == MapWeatherModel.WeatherEvent.LightRain ? 1 : 0;
      bool flag4 = weatherEventInPosition == MapWeatherModel.WeatherEvent.Blizzard;
      byte val1 = num1 != 0 ? (byte) 125 : (flag3 ? (byte) 200 : (byte) 0);
      byte num2 = (byte) Math.Max((int) val1, flag4 ? 200 : 0);
      MapWeatherVisualManager.Current.SetRainData(this.MaskPixelIndex, val1);
      MapWeatherVisualManager.Current.SetCloudData(this.MaskPixelIndex, num2);
      if ((NativeObject) this.Prefab == (NativeObject) null)
      {
        if (flag3)
          this.AttachNewRainPrefabToVisual();
        else if (flag4)
          this.AttachNewBlizzardPrefabToVisual();
        else if ((double) MBRandom.RandomFloat < 0.10000000149011612)
          MapWeatherVisualManager.Current.SetCloudData(this.MaskPixelIndex, (byte) 200);
      }
      else
      {
        if (((!flag1 ? 0 : (!flag3 ? 1 : 0)) & (flag4 ? 1 : 0)) != 0)
        {
          MapWeatherVisualManager.Current.ReleaseRainPrefab(this.Prefab);
          this.AttachNewBlizzardPrefabToVisual();
        }
        else if (((!flag2 ? 0 : (!flag4 ? 1 : 0)) & (flag3 ? 1 : 0)) != 0)
        {
          MapWeatherVisualManager.Current.ReleaseBlizzardPrefab(this.Prefab);
          this.AttachNewRainPrefabToVisual();
        }
        if (!flag3 && !flag4)
        {
          if (flag1)
            MapWeatherVisualManager.Current.ReleaseRainPrefab(this.Prefab);
          else if (flag2)
            MapWeatherVisualManager.Current.ReleaseBlizzardPrefab(this.Prefab);
          this.Prefab = (GameEntity) null;
        }
      }
      this._previousWeatherEvent = weatherEventInPosition;
      this._weatherNode.OnVisualUpdated();
    }

    private void AttachNewRainPrefabToVisual()
    {
      MatrixFrame frame = MatrixFrame.Identity with
      {
        origin = new Vec3(this.Position + this.PrefabSpawnOffset, 26f)
      };
      GameEntity rainPrefabFromPool = MapWeatherVisualManager.Current.GetRainPrefabFromPool();
      rainPrefabFromPool.SetVisibilityExcludeParents(true);
      rainPrefabFromPool.SetGlobalFrame(in frame);
      this.Prefab = rainPrefabFromPool;
    }

    private void AttachNewBlizzardPrefabToVisual()
    {
      MatrixFrame frame = MatrixFrame.Identity with
      {
        origin = new Vec3(this.Position + this.PrefabSpawnOffset, 26f)
      };
      GameEntity blizzardPrefabFromPool = MapWeatherVisualManager.Current.GetBlizzardPrefabFromPool();
      blizzardPrefabFromPool.SetVisibilityExcludeParents(true);
      blizzardPrefabFromPool.SetGlobalFrame(in frame);
      this.Prefab = blizzardPrefabFromPool;
    }
  }
}
