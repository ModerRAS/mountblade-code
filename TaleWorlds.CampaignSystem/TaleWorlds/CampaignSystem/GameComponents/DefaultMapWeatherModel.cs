// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMapWeatherModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMapWeatherModel : MapWeatherModel
  {
    private const float SunRiseNorm = 0.0833333358f;
    private const float SunSetNorm = 0.9166667f;
    private const float DayTime = 20f;
    private const float MinSunAngle = 0.0f;
    private const float MaxSunAngle = 50f;
    private const float MinEnvironmentMultiplier = 0.001f;
    private const float DayEnvironmentMultiplier = 1f;
    private const float NightEnvironmentMultiplier = 0.001f;
    private const float SnowStartThreshold = 0.55f;
    private const float DenseSnowStartThreshold = 0.85f;
    private const float NoSnowDelta = 0.1f;
    private const float WetThreshold = 0.6f;
    private const float WetThresholdForTexture = 0.3f;
    private const float LightRainStartThreshold = 0.7f;
    private const float DenseRainStartThreshold = 0.85f;
    private const float SnowFrequencyModifier = 0.1f;
    private const float RainFrequencyModifier = 0.45f;
    private const float MaxSnowCoverage = 0.75f;
    private const int SnowAndRainDataTextureDimension = 1024;
    private const int WeatherNodeDimension = 32;
    private MapWeatherModel.WeatherEvent[] _weatherDataCache = new MapWeatherModel.WeatherEvent[1024];
    private AtmosphereGrid _atmosphereGrid;
    private byte[] _snowAndRainAmountData = new byte[2097152];
    private bool _sunIsMoon;

    public override CampaignTime WeatherUpdatePeriod => CampaignTime.Hours(4f);

    public override CampaignTime WeatherUpdateFrequency
    {
      get
      {
        return new CampaignTime(this.WeatherUpdatePeriod.NumTicks / (long) (this.DefaultWeatherNodeDimension * this.DefaultWeatherNodeDimension));
      }
    }

    public override int DefaultWeatherNodeDimension => 32;

    private CampaignTime PreviousRainDataCheckForWetness => CampaignTime.Hours(24f);

    private uint GetSeed(CampaignTime campaignTime, Vec2 position)
    {
      campaignTime += new CampaignTime((long) Campaign.Current.UniqueGameId.GetHashCode());
      int xIndex;
      int yIndex;
      this.GetNodePositionForWeather(position, out xIndex, out yIndex);
      uint seed = (uint) (campaignTime.ToHours / this.WeatherUpdatePeriod.ToHours);
      if (campaignTime.ToSeconds % this.WeatherUpdatePeriod.ToSeconds < this.WeatherUpdateFrequency.ToSeconds * (double) (xIndex * this.DefaultWeatherNodeDimension + yIndex))
        --seed;
      return seed;
    }

    public override AtmosphereState GetInterpolatedAtmosphereState(
      CampaignTime timeOfYear,
      Vec3 pos)
    {
      if (this._atmosphereGrid == null)
      {
        this._atmosphereGrid = new AtmosphereGrid();
        this._atmosphereGrid.Initialize();
      }
      return this._atmosphereGrid.GetInterpolatedStateInfo(pos);
    }

    private Vec2 GetNodePositionForWeather(Vec2 pos, out int xIndex, out int yIndex)
    {
      if (Campaign.Current.MapSceneWrapper != null)
      {
        Vec2 terrainSize = Campaign.Current.MapSceneWrapper.GetTerrainSize();
        float num1 = terrainSize.X / (float) this.DefaultWeatherNodeDimension;
        float num2 = terrainSize.Y / (float) this.DefaultWeatherNodeDimension;
        xIndex = (int) ((double) pos.x / (double) num1);
        yIndex = (int) ((double) pos.y / (double) num2);
        return new Vec2((float) xIndex * num1, (float) yIndex * num2);
      }
      xIndex = 0;
      yIndex = 0;
      return Vec2.Zero;
    }

    public override AtmosphereInfo GetAtmosphereModel(Vec3 position)
    {
      float hourOfDayNormalized = this.GetHourOfDayNormalized();
      float timeFactorForSnow;
      this.GetSeasonTimeFactorOfCampaignTime(CampaignTime.Now, out timeFactorForSnow, out float _, true);
      DefaultMapWeatherModel.SunPosition sunPosition = this.GetSunPosition(hourOfDayNormalized, timeFactorForSnow);
      float environmentMultiplier = this.GetEnvironmentMultiplier(sunPosition);
      float num1 = MathF.Max(MathF.Pow(this.GetModifiedEnvironmentMultiplier(environmentMultiplier), 1.5f), 1f / 1000f);
      Vec3 sunColor = this.GetSunColor(environmentMultiplier);
      AtmosphereState interpolatedAtmosphereState = this.GetInterpolatedAtmosphereState(CampaignTime.Now, position);
      float temperature = this.GetTemperature(ref interpolatedAtmosphereState, timeFactorForSnow);
      float humidity = this.GetHumidity(ref interpolatedAtmosphereState, timeFactorForSnow);
      int num2 = (int) Campaign.Current.Models.MapWeatherModel.UpdateWeatherForPosition(position.AsVec2, CampaignTime.Now);
      (CampaignTime.Seasons selectedSeason, bool isRaining, float rainValue, float snowValue) = this.GetSeasonRainAndSnowDataForOpeningMission(position.AsVec2);
      string selectedAtmosphereId = this.GetSelectedAtmosphereId(selectedSeason, isRaining, snowValue, rainValue);
      return new AtmosphereInfo()
      {
        SunInfo = {
          Altitude = sunPosition.Altitude,
          Angle = sunPosition.Angle,
          Color = sunColor,
          Brightness = this.GetSunBrightness(environmentMultiplier),
          Size = this.GetSunSize(environmentMultiplier),
          RayStrength = this.GetSunRayStrength(environmentMultiplier),
          MaxBrightness = this.GetSunBrightness(1f, true)
        },
        RainInfo = {
          Density = rainValue
        },
        SnowInfo = {
          Density = snowValue
        },
        AmbientInfo = {
          EnvironmentMultiplier = MathF.Max(num1 * 0.5f, 1f / 1000f),
          AmbientColor = this.GetAmbientFogColor(num1),
          MieScatterStrength = this.GetMieScatterStrength(environmentMultiplier),
          RayleighConstant = this.GetRayleighConstant(environmentMultiplier)
        },
        SkyInfo = {
          Brightness = this.GetSkyBrightness(hourOfDayNormalized, environmentMultiplier)
        },
        FogInfo = {
          Density = this.GetFogDensity(environmentMultiplier, position),
          Color = this.GetFogColor(num1),
          Falloff = 1.48f
        },
        TimeInfo = {
          TimeOfDay = this.GetHourOfDay(),
          WinterTimeFactor = this.GetWinterTimeFactor(CampaignTime.Now),
          DrynessFactor = this.GetDrynessFactor(CampaignTime.Now),
          NightTimeFactor = this.GetNightTimeFactor(),
          Season = (int) selectedSeason
        },
        AreaInfo = {
          Temperature = temperature,
          Humidity = humidity
        },
        PostProInfo = {
          MinExposure = MBMath.Lerp(-3f, -2f, this.GetExposureCoefficientBetweenDayNight()),
          MaxExposure = MBMath.Lerp(2f, 0.0f, num1),
          BrightpassThreshold = MBMath.Lerp(0.7f, 0.9f, num1),
          MiddleGray = 0.1f
        },
        InterpolatedAtmosphereName = selectedAtmosphereId
      };
    }

    public override void InitializeSnowAndRainAmountData(byte[] snowAndRainAmountData)
    {
      this._snowAndRainAmountData = snowAndRainAmountData;
    }

    public override MapWeatherModel.WeatherEvent UpdateWeatherForPosition(
      Vec2 position,
      CampaignTime ct)
    {
      (float snowValue, float rainValue) = this.GetSnowAndRainDataFromTexture(position, ct);
      return (double) snowValue > 0.550000011920929 ? this.SetIsBlizzardOrSnowFromFunction(snowValue, ct, in position) : this.SetIsRainingOrWetFromFunction(rainValue, ct, in position);
    }

    private MapWeatherModel.WeatherEvent SetIsBlizzardOrSnowFromFunction(
      float snowValue,
      CampaignTime campaignTime,
      in Vec2 position)
    {
      int xIndex;
      int yIndex;
      Vec2 adjustedPosition1 = this.GetNodePositionForWeather(position, out xIndex, out yIndex);
      if ((double) snowValue >= 0.65000003576278687)
      {
        float frequency = (float) (((double) snowValue - 0.550000011920929) / 0.44999998807907104);
        bool adjustedPosition2 = this.GetCurrentWeatherInAdjustedPosition(this.GetSeed(campaignTime, position), frequency, 0.1f, in adjustedPosition1);
        this._weatherDataCache[yIndex * 32 + xIndex] = adjustedPosition2 ? MapWeatherModel.WeatherEvent.Blizzard : MapWeatherModel.WeatherEvent.Snowy;
      }
      else
        this._weatherDataCache[yIndex * 32 + xIndex] = (double) snowValue > 0.550000011920929 ? MapWeatherModel.WeatherEvent.Snowy : MapWeatherModel.WeatherEvent.Clear;
      return this._weatherDataCache[yIndex * 32 + xIndex];
    }

    private MapWeatherModel.WeatherEvent SetIsRainingOrWetFromFunction(
      float rainValue,
      CampaignTime campaignTime,
      in Vec2 position)
    {
      int xIndex;
      int yIndex;
      Vec2 adjustedPosition = this.GetNodePositionForWeather(position, out xIndex, out yIndex);
      if ((double) rainValue >= 0.60000002384185791)
      {
        float frequency1 = (float) (((double) rainValue - 0.60000002384185791) / 0.39999997615814209);
        uint seed1 = this.GetSeed(campaignTime, position);
        this._weatherDataCache[yIndex * 32 + xIndex] = MapWeatherModel.WeatherEvent.Clear;
        if (this.GetCurrentWeatherInAdjustedPosition(seed1, frequency1, 0.45f, in adjustedPosition))
        {
          this._weatherDataCache[yIndex * 32 + xIndex] = MapWeatherModel.WeatherEvent.HeavyRain;
        }
        else
        {
          CampaignTime campaignTime1;
          ref CampaignTime local1 = ref campaignTime1;
          long numTicks1 = campaignTime.NumTicks;
          CampaignTime campaignTime2 = this.WeatherUpdatePeriod;
          long numTicks2 = campaignTime2.NumTicks;
          long numTicks3 = numTicks1 - numTicks2;
          local1 = new CampaignTime(numTicks3);
          uint seed2 = this.GetSeed(campaignTime1, position);
          float frequency2 = (float) (((double) this.GetSnowAndRainDataFromTexture(position, campaignTime1).Item2 - 0.60000002384185791) / 0.39999997615814209);
          while (true)
          {
            long num = campaignTime.NumTicks - campaignTime1.NumTicks;
            campaignTime2 = this.PreviousRainDataCheckForWetness;
            long numTicks4 = campaignTime2.NumTicks;
            if (num < numTicks4)
            {
              if (!this.GetCurrentWeatherInAdjustedPosition(seed2, frequency2, 0.45f, in adjustedPosition))
              {
                ref CampaignTime local2 = ref campaignTime1;
                long numTicks5 = campaignTime1.NumTicks;
                campaignTime2 = this.WeatherUpdatePeriod;
                long numTicks6 = campaignTime2.NumTicks;
                long numTicks7 = numTicks5 - numTicks6;
                local2 = new CampaignTime(numTicks7);
                seed2 = this.GetSeed(campaignTime1, position);
                frequency2 = (float) (((double) this.GetSnowAndRainDataFromTexture(position, campaignTime1).Item2 - 0.60000002384185791) / 0.39999997615814209);
              }
              else
                break;
            }
            else
              goto label_9;
          }
          this._weatherDataCache[yIndex * 32 + xIndex] = MapWeatherModel.WeatherEvent.LightRain;
        }
      }
      else
        this._weatherDataCache[yIndex * 32 + xIndex] = MapWeatherModel.WeatherEvent.Clear;
label_9:
      return this._weatherDataCache[yIndex * 32 + xIndex];
    }

    private bool GetCurrentWeatherInAdjustedPosition(
      uint seed,
      float frequency,
      float chanceModifier,
      in Vec2 adjustedPosition)
    {
      return (double) frequency * (double) chanceModifier > (double) MBRandom.RandomFloatWithSeed(seed, (uint) ((double) Campaign.MapDiagonal * (double) adjustedPosition.X + (double) adjustedPosition.Y));
    }

    private string GetSelectedAtmosphereId(
      CampaignTime.Seasons selectedSeason,
      bool isRaining,
      float snowValue,
      float rainValue)
    {
      string selectedAtmosphereId = "semicloudy_field_battle";
      if (Settlement.CurrentSettlement != null && (Settlement.CurrentSettlement.IsFortification || Settlement.CurrentSettlement.IsVillage))
        selectedAtmosphereId = "semicloudy_" + Settlement.CurrentSettlement.Culture.StringId;
      if (selectedSeason == CampaignTime.Seasons.Winter)
      {
        selectedAtmosphereId = (double) snowValue < 0.85000002384185791 ? "semi_snowy" : "dense_snowy";
      }
      else
      {
        if ((double) rainValue > 0.60000002384185791)
          selectedAtmosphereId = "wet";
        if (isRaining)
          selectedAtmosphereId = (double) rainValue < 0.85000002384185791 ? "semi_rainy" : "dense_rainy";
      }
      return selectedAtmosphereId;
    }

    private (CampaignTime.Seasons, bool, float, float) GetSeasonRainAndSnowDataForOpeningMission(
      Vec2 position)
    {
      CampaignTime.Seasons seasons = CampaignTime.Now.GetSeasonOfYear;
      MapWeatherModel.WeatherEvent weatherEventInPosition = this.GetWeatherEventInPosition(position);
      float num1 = 0.0f;
      float num2 = 0.85f;
      bool flag = false;
      switch (weatherEventInPosition)
      {
        case MapWeatherModel.WeatherEvent.Clear:
          if (seasons == CampaignTime.Seasons.Winter)
          {
            seasons = CampaignTime.Now.GetDayOfSeason > 10 ? CampaignTime.Seasons.Spring : CampaignTime.Seasons.Autumn;
            break;
          }
          break;
        case MapWeatherModel.WeatherEvent.LightRain:
          if (seasons == CampaignTime.Seasons.Winter)
            seasons = CampaignTime.Now.GetDayOfSeason > 10 ? CampaignTime.Seasons.Spring : CampaignTime.Seasons.Autumn;
          num1 = 0.7f;
          break;
        case MapWeatherModel.WeatherEvent.HeavyRain:
          if (seasons == CampaignTime.Seasons.Winter)
            seasons = CampaignTime.Now.GetDayOfSeason > 10 ? CampaignTime.Seasons.Spring : CampaignTime.Seasons.Autumn;
          flag = true;
          num1 = 0.85f + MBRandom.RandomFloatRanged(0.0f, 0.149999976f);
          break;
        case MapWeatherModel.WeatherEvent.Snowy:
          seasons = CampaignTime.Seasons.Winter;
          num1 = 0.55f;
          num2 = 0.55f + MBRandom.RandomFloatRanged(0.0f, 0.3f);
          break;
        case MapWeatherModel.WeatherEvent.Blizzard:
          seasons = CampaignTime.Seasons.Winter;
          num1 = 0.85f;
          num2 = 0.85f;
          break;
      }
      return (seasons, flag, num1, num2);
    }

    private DefaultMapWeatherModel.SunPosition GetSunPosition(float hourNorm, float seasonFactor)
    {
      float altitude;
      float angle;
      if ((double) hourNorm >= 0.0833333358168602 && (double) hourNorm < 0.91666668653488159)
      {
        this._sunIsMoon = false;
        altitude = MBMath.Lerp(0.0f, 180f, (float) (((double) hourNorm - 0.0833333358168602) / 0.83333337306976318));
        angle = 50f * seasonFactor;
      }
      else
      {
        this._sunIsMoon = true;
        if ((double) hourNorm >= 0.91666668653488159)
          --hourNorm;
        float num = (float) (((double) hourNorm - -0.083333313465118408) / 0.1666666567325592);
        altitude = MBMath.Lerp(180f, 0.0f, (double) num < 0.0 ? 0.0f : ((double) num > 1.0 ? 1f : num));
        angle = 50f * seasonFactor;
      }
      return new DefaultMapWeatherModel.SunPosition(angle, altitude);
    }

    private Vec3 GetSunColor(float environmentMultiplier)
    {
      return this._sunIsMoon ? Vec3.Vec3Max(new Vec3(0.85f - MathF.Pow(environmentMultiplier, 0.4f), 0.8f - MathF.Pow(environmentMultiplier, 0.5f), 0.8f - MathF.Pow(environmentMultiplier, 0.8f)), new Vec3(0.05f, 0.05f, 0.1f)) : new Vec3(1f, (float) (1.0 - (1.0 - (double) MathF.Pow(environmentMultiplier, 0.3f)) / 2.0), (float) (0.89999997615814209 - (1.0 - (double) MathF.Pow(environmentMultiplier, 0.3f)) / 2.5));
    }

    private float GetSunBrightness(float environmentMultiplier, bool forceDay = false)
    {
      return !(!this._sunIsMoon | forceDay) ? 0.2f : MathF.Min(MathF.Max(MathF.Sin(MathF.Pow((float) (((double) environmentMultiplier - 1.0 / 1000.0) / 0.99900001287460327), 1.2f) * 1.57079637f) * 85f, 0.2f), 35f);
    }

    private float GetSunSize(float envMultiplier)
    {
      return (float) (0.10000000149011612 + (1.0 - (double) envMultiplier) / 8.0);
    }

    private float GetSunRayStrength(float envMultiplier)
    {
      return MathF.Min(MathF.Max(MathF.Sin((float) ((double) MathF.Pow((float) (((double) envMultiplier - 1.0 / 1000.0) / 0.99900001287460327), 0.4f) * 3.1415927410125732 / 2.0)) - 0.15f, 0.01f), 0.5f);
    }

    private float GetEnvironmentMultiplier(DefaultMapWeatherModel.SunPosition sunPos)
    {
      float num1 = !this._sunIsMoon ? (float) ((double) sunPos.Altitude / 180.0 * 2.0) : (float) ((double) sunPos.Altitude / 180.0 * 2.0);
      double num2 = (double) MBMath.ClampFloat(MathF.Pow((double) num1 > 1.0 ? 2f - num1 : num1, 0.5f) * (float) (1.0 - 0.011111111380159855 * (double) sunPos.Angle), 0.0f, 1f);
      return (float) ((double) MBMath.ClampFloat(MathF.Min(MathF.Sin((float) (num2 * num2)) * 2f, 1f), 0.0f, 1f) * 0.99900001287460327 + 1.0 / 1000.0);
    }

    private float GetModifiedEnvironmentMultiplier(float envMultiplier)
    {
      return this._sunIsMoon ? (float) (((double) envMultiplier - 1.0 / 1000.0) / 0.99900001287460327 * 0.0 + 1.0 / 1000.0) : (float) (((double) envMultiplier - 1.0 / 1000.0) / 0.99900001287460327 * 0.99900001287460327 + 1.0 / 1000.0);
    }

    private float GetSkyBrightness(float hourNorm, float envMultiplier)
    {
      float x = (float) (((double) envMultiplier - 1.0 / 1000.0) / 0.99900001287460327);
      return this._sunIsMoon ? 0.055f : MathF.Min(MathF.Max(MathF.Sin(MathF.Pow(x, 1.3f) * 1.57079637f) * 80f - 1f, 0.055f), 25f);
    }

    private float GetFogDensity(float environmentMultiplier, Vec3 pos)
    {
      return MathF.Min((float) (0.0 + (this._sunIsMoon ? 0.5 : 0.40000000596046448) * (double) (1f - environmentMultiplier)) * (1f - MBMath.ClampFloat((float) (((double) pos.z - 30.0) / 200.0), 0.0f, 0.9f)), 10f);
    }

    private Vec3 GetFogColor(float environmentMultiplier)
    {
      return this._sunIsMoon ? Vec3.Vec3Max(new Vec3((float) (1.0 - (double) environmentMultiplier * 10.0), (float) (0.75 + (double) environmentMultiplier * 1.5), (float) (0.64999997615814209 + (double) environmentMultiplier * 2.0)), new Vec3(0.55f, 0.59f, 0.6f)) : new Vec3((float) (1.0 - (1.0 - (double) environmentMultiplier) / 7.0), (float) (0.75 - (double) environmentMultiplier / 4.0), (float) (0.550000011920929 - (double) environmentMultiplier / 5.0));
    }

    private Vec3 GetAmbientFogColor(float moddedEnvMul)
    {
      return Vec3.Vec3Min(new Vec3(0.15f, 0.3f, 0.5f) + new Vec3(moddedEnvMul / 3f, moddedEnvMul / 2f, moddedEnvMul / 1.5f), new Vec3(1f, 1f, 1f));
    }

    private float GetMieScatterStrength(float envMultiplier)
    {
      return (float) ((1.0 + (1.0 - (double) envMultiplier)) * 10.0);
    }

    private float GetRayleighConstant(float envMultiplier)
    {
      float x = (float) (((double) envMultiplier - 1.0 / 1000.0) / 0.99900001287460327);
      return MathF.Min(MathF.Max((float) (1.0 - (double) MathF.Sin((float) ((double) MathF.Pow(x, 0.45f) * 3.1415927410125732 / 2.0)) + (0.14000000059604645 + (double) x * 2.0)), 0.65f), 0.99f);
    }

    private float GetHourOfDay() => (float) (CampaignTime.Now.ToHours % 24.0);

    private float GetHourOfDayNormalized() => this.GetHourOfDay() / 24f;

    private float GetNightTimeFactor()
    {
      float num = (this.GetHourOfDay() - 2f) % 24f;
      while ((double) num < 0.0)
        num += 24f;
      return MathF.Min(MathF.Max(num - 20f, 0.0f) / 0.1f, 1f);
    }

    private float GetExposureCoefficientBetweenDayNight()
    {
      float hourOfDay = this.GetHourOfDay();
      float coefficientBetweenDayNight = 0.0f;
      if ((double) hourOfDay > 2.0 && (double) hourOfDay < 4.0)
        coefficientBetweenDayNight = (float) (1.0 - ((double) hourOfDay - 2.0) / 2.0);
      if ((double) hourOfDay < 22.0 && (double) hourOfDay > 20.0)
        coefficientBetweenDayNight = (float) (((double) hourOfDay - 20.0) / 2.0);
      if ((double) hourOfDay > 22.0 || (double) hourOfDay < 2.0)
        coefficientBetweenDayNight = 1f;
      return coefficientBetweenDayNight;
    }

    private int GetTextureDataIndexForPosition(Vec2 position)
    {
      Vec2 terrainSize = Campaign.Current.MapSceneWrapper.GetTerrainSize();
      int num1 = MathF.Floor((float) ((double) position.x / (double) terrainSize.X * 1024.0));
      int num2 = MathF.Floor((float) ((double) position.y / (double) terrainSize.Y * 1024.0));
      int num3 = MBMath.ClampIndex(num1, 0, 1024);
      return MBMath.ClampIndex(num2, 0, 1024) * 1024 + num3;
    }

    public (float, float) GetSnowAndRainDataFromTexture(Vec2 position, CampaignTime ct)
    {
      Vec2 positionForWeather = this.GetNodePositionForWeather(position, out int _, out int _);
      int indexForPosition1 = this.GetTextureDataIndexForPosition(position);
      int indexForPosition2 = this.GetTextureDataIndexForPosition(positionForWeather);
      byte num1 = this._snowAndRainAmountData[indexForPosition1 * 2];
      int num2 = (int) this._snowAndRainAmountData[indexForPosition2 * 2 + 1];
      float num3 = (float) num1 / (float) byte.MaxValue;
      float num4 = (float) num2 / (float) byte.MaxValue;
      float timeFactorForSnow;
      float timeFactorForRain;
      Campaign.Current.Models.MapWeatherModel.GetSeasonTimeFactorOfCampaignTime(ct, out timeFactorForSnow, out timeFactorForRain);
      float num5 = MBMath.Lerp(0.55f, -0.1f, timeFactorForSnow);
      float num6 = MBMath.Lerp(0.7f, 0.3f, timeFactorForRain);
      float num7 = MBMath.SmoothStep(num5 - 0.65f, num5 + 0.65f, num3);
      float num8 = MBMath.SmoothStep(num6 - 0.45f, num6 + 0.45f, num4);
      return (MBMath.Lerp(0.0f, num7, num7), num8);
    }

    public override MapWeatherModel.WeatherEvent GetWeatherEventInPosition(Vec2 pos)
    {
      int xIndex;
      int yIndex;
      this.GetNodePositionForWeather(pos, out xIndex, out yIndex);
      return this._weatherDataCache[yIndex * 32 + xIndex];
    }

    public override MapWeatherModel.WeatherEventEffectOnTerrain GetWeatherEffectOnTerrainForPosition(
      Vec2 pos)
    {
      switch (this.GetWeatherEventInPosition(pos))
      {
        case MapWeatherModel.WeatherEvent.Clear:
          return MapWeatherModel.WeatherEventEffectOnTerrain.Default;
        case MapWeatherModel.WeatherEvent.LightRain:
          return MapWeatherModel.WeatherEventEffectOnTerrain.Wet;
        case MapWeatherModel.WeatherEvent.HeavyRain:
          return MapWeatherModel.WeatherEventEffectOnTerrain.Wet;
        case MapWeatherModel.WeatherEvent.Snowy:
          return MapWeatherModel.WeatherEventEffectOnTerrain.Wet;
        case MapWeatherModel.WeatherEvent.Blizzard:
          return MapWeatherModel.WeatherEventEffectOnTerrain.Wet;
        default:
          return MapWeatherModel.WeatherEventEffectOnTerrain.Default;
      }
    }

    private float GetWinterTimeFactor(CampaignTime timeOfYear)
    {
      float winterTimeFactor = 0.0f;
      if (timeOfYear.GetSeasonOfYear == CampaignTime.Seasons.Winter)
        winterTimeFactor = MBMath.SplitLerp(0.0f, 0.75f, 0.0f, 0.5f, MathF.Abs((float) Math.IEEERemainder(CampaignTime.Now.ToSeasons, 1.0)), 1E-05f);
      return winterTimeFactor;
    }

    private float GetDrynessFactor(CampaignTime timeOfYear)
    {
      float drynessFactor = 0.0f;
      float amount = MathF.Abs((float) Math.IEEERemainder(CampaignTime.Now.ToSeasons, 1.0));
      switch (timeOfYear.GetSeasonOfYear)
      {
        case CampaignTime.Seasons.Summer:
          drynessFactor = MBMath.Lerp(0.0f, 1f, MBMath.ClampFloat(amount * 2f, 0.0f, 1f));
          break;
        case CampaignTime.Seasons.Autumn:
          drynessFactor = 1f;
          break;
        case CampaignTime.Seasons.Winter:
          drynessFactor = MBMath.Lerp(1f, 0.0f, amount);
          break;
      }
      return drynessFactor;
    }

    public override void GetSeasonTimeFactorOfCampaignTime(
      CampaignTime ct,
      out float timeFactorForSnow,
      out float timeFactorForRain,
      bool snapCampaignTimeToWeatherPeriod = true)
    {
      if (snapCampaignTimeToWeatherPeriod)
        ct = CampaignTime.Hours((float) ((int) (ct.ToHours / this.WeatherUpdatePeriod.ToHours / 2.0) * (int) this.WeatherUpdatePeriod.ToHours * 2));
      float yearProgress = (float) ct.ToSeasons % 4f;
      timeFactorForSnow = this.CalculateTimeFactorForSnow(yearProgress);
      timeFactorForRain = this.CalculateTimeFactorForRain(yearProgress);
    }

    private float CalculateTimeFactorForSnow(float yearProgress)
    {
      float timeFactorForSnow = 0.0f;
      if ((double) yearProgress > 1.5 && (double) yearProgress <= 3.5)
        timeFactorForSnow = MBMath.Map(yearProgress, 1.5f, 3.5f, 0.0f, 1f);
      else if ((double) yearProgress <= 1.5)
        timeFactorForSnow = MBMath.Map(yearProgress, 0.0f, 1.5f, 0.75f, 0.0f);
      else if ((double) yearProgress > 3.5)
        timeFactorForSnow = MBMath.Map(yearProgress, 3.5f, 4f, 1f, 0.75f);
      return timeFactorForSnow;
    }

    private float CalculateTimeFactorForRain(float yearProgress)
    {
      float timeFactorForRain = 0.0f;
      if ((double) yearProgress > 1.0 && (double) yearProgress <= 2.5)
        timeFactorForRain = MBMath.Map(yearProgress, 1f, 2.5f, 0.0f, 1f);
      else if ((double) yearProgress <= 1.0)
        timeFactorForRain = MBMath.Map(yearProgress, 0.0f, 1f, 1f, 0.0f);
      else if ((double) yearProgress > 2.5)
        timeFactorForRain = 1f;
      return timeFactorForRain;
    }

    private float GetTemperature(ref AtmosphereState gridInfo, float seasonFactor)
    {
      if (gridInfo == null)
        return 0.0f;
      double temperatureAverage = (double) gridInfo.TemperatureAverage;
      float num1 = (float) (((double) seasonFactor - 0.5) * -2.0);
      double num2 = (double) (gridInfo.TemperatureVariance * num1);
      return (float) (temperatureAverage + num2);
    }

    private float GetHumidity(ref AtmosphereState gridInfo, float seasonFactor)
    {
      if (gridInfo == null)
        return 0.0f;
      double humidityAverage = (double) gridInfo.HumidityAverage;
      float num1 = (float) (((double) seasonFactor - 0.5) * 2.0);
      double num2 = (double) (gridInfo.HumidityVariance * num1);
      return MBMath.ClampFloat((float) (humidityAverage + num2), 0.0f, 100f);
    }

    private struct SunPosition
    {
      public float Angle { get; private set; }

      public float Altitude { get; private set; }

      public SunPosition(float angle, float altitude)
        : this()
      {
        this.Angle = angle;
        this.Altitude = altitude;
      }
    }
  }
}
