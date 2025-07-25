// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.MapWeatherCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class MapWeatherCampaignBehavior : CampaignBehaviorBase
  {
    private WeatherNode[] _weatherNodes;
    private MBCampaignEvent _weatherTickEvent;
    private int[] _weatherNodeDataShuffledIndices;
    private int _lastUpdatedNodeIndex;

    public WeatherNode[] AllWeatherNodes => this._weatherNodes;

    private int DimensionSquared
    {
      get
      {
        return Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension * Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunchedEvent));
    }

    private void OnSessionLaunchedEvent(CampaignGameStarter obj)
    {
      this.InitializeTheBehavior();
      for (int index = 0; index < this.DimensionSquared; ++index)
        this.UpdateWeatherNodeWithIndex(index);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<int>("_lastUpdatedNodeIndex", ref this._lastUpdatedNodeIndex);
    }

    private void CreateAndShuffleDataIndicesDeterministic()
    {
      this._weatherNodeDataShuffledIndices = new int[this.DimensionSquared];
      for (int index = 0; index < this.DimensionSquared; ++index)
        this._weatherNodeDataShuffledIndices[index] = index;
      MBFastRandom mbFastRandom = new MBFastRandom((uint) Campaign.Current.UniqueGameId.GetDeterministicHashCode());
      for (int index1 = 0; index1 < 20; ++index1)
      {
        for (int index2 = 0; index2 < this.DimensionSquared; ++index2)
        {
          int index3 = mbFastRandom.Next(this.DimensionSquared);
          int dataShuffledIndex = this._weatherNodeDataShuffledIndices[index2];
          this._weatherNodeDataShuffledIndices[index2] = this._weatherNodeDataShuffledIndices[index3];
          this._weatherNodeDataShuffledIndices[index3] = dataShuffledIndex;
        }
      }
    }

    private void InitializeTheBehavior()
    {
      this.CreateAndShuffleDataIndicesDeterministic();
      this._weatherNodes = new WeatherNode[this.DimensionSquared];
      Vec2 terrainSize = Campaign.Current.MapSceneWrapper.GetTerrainSize();
      int weatherNodeDimension = Campaign.Current.Models.MapWeatherModel.DefaultWeatherNodeDimension;
      int num1 = weatherNodeDimension;
      int num2 = weatherNodeDimension;
      for (int index1 = 0; index1 < num2; ++index1)
      {
        for (int index2 = 0; index2 < num1; ++index2)
        {
          float a = (float) index1 / (float) weatherNodeDimension * terrainSize.X;
          float b = (float) index2 / (float) weatherNodeDimension * terrainSize.Y;
          this._weatherNodes[index1 * weatherNodeDimension + index2] = new WeatherNode(new Vec2(a, b));
        }
      }
      this.AddEventHandler();
    }

    private void AddEventHandler()
    {
      CampaignTime campaignTime = Campaign.Current.Models.MapWeatherModel.WeatherUpdateFrequency;
      long numTicks1 = campaignTime.NumTicks;
      campaignTime = CampaignTime.Now;
      long numTicks2 = campaignTime.NumTicks;
      campaignTime = Campaign.Current.Models.MapWeatherModel.WeatherUpdateFrequency;
      long numTicks3 = campaignTime.NumTicks;
      long num = numTicks2 % numTicks3;
      this._weatherTickEvent = CampaignPeriodicEventManager.CreatePeriodicEvent(Campaign.Current.Models.MapWeatherModel.WeatherUpdateFrequency, new CampaignTime(numTicks1 - num));
      this._weatherTickEvent.AddHandler(new MBCampaignEvent.CampaignEventDelegate(this.WeatherUpdateTick));
    }

    private void WeatherUpdateTick(MBCampaignEvent campaignEvent, params object[] delegateParams)
    {
      this.UpdateWeatherNodeWithIndex(this._weatherNodeDataShuffledIndices[this._lastUpdatedNodeIndex]);
      ++this._lastUpdatedNodeIndex;
      if (this._lastUpdatedNodeIndex != this._weatherNodes.Length)
        return;
      this._lastUpdatedNodeIndex = 0;
    }

    private void UpdateWeatherNodeWithIndex(int index)
    {
      WeatherNode weatherNode = this._weatherNodes[index];
      MapWeatherModel.WeatherEvent currentWeatherEvent = weatherNode.CurrentWeatherEvent;
      MapWeatherModel.WeatherEvent weatherEvent = Campaign.Current.Models.MapWeatherModel.UpdateWeatherForPosition(weatherNode.Position, CampaignTime.Now);
      if (currentWeatherEvent != weatherEvent)
      {
        weatherNode.SetVisualDirty();
      }
      else
      {
        if (currentWeatherEvent != MapWeatherModel.WeatherEvent.Clear || (double) MBRandom.NondeterministicRandomFloat >= 0.10000000149011612)
          return;
        weatherNode.SetVisualDirty();
      }
    }
  }
}
