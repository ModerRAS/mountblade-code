// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.MapWeatherModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class MapWeatherModel : GameModel
  {
    public abstract CampaignTime WeatherUpdateFrequency { get; }

    public abstract AtmosphereState GetInterpolatedAtmosphereState(
      CampaignTime timeOfYear,
      Vec3 pos);

    public abstract AtmosphereInfo GetAtmosphereModel(Vec3 position);

    public abstract CampaignTime WeatherUpdatePeriod { get; }

    public abstract void GetSeasonTimeFactorOfCampaignTime(
      CampaignTime ct,
      out float timeFactorForSnow,
      out float timeFactorForRain,
      bool snapCampaignTimeToWeatherPeriod = true);

    public abstract int DefaultWeatherNodeDimension { get; }

    public abstract MapWeatherModel.WeatherEvent UpdateWeatherForPosition(
      Vec2 position,
      CampaignTime ct);

    public abstract MapWeatherModel.WeatherEvent GetWeatherEventInPosition(Vec2 pos);

    public abstract MapWeatherModel.WeatherEventEffectOnTerrain GetWeatherEffectOnTerrainForPosition(
      Vec2 pos);

    public abstract void InitializeSnowAndRainAmountData(byte[] bytes);

    public enum WeatherEvent
    {
      Clear,
      LightRain,
      HeavyRain,
      Snowy,
      Blizzard,
    }

    public enum WeatherEventEffectOnTerrain
    {
      Default,
      Wet,
    }
  }
}
