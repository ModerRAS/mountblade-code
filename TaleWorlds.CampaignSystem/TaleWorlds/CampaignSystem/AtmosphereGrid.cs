// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.AtmosphereGrid
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class AtmosphereGrid
  {
    private List<AtmosphereState> states = new List<AtmosphereState>();

    public void Initialize()
    {
      this.states = Campaign.Current.MapSceneWrapper.GetAtmosphereStates().ToList<AtmosphereState>();
    }

    public AtmosphereState GetInterpolatedStateInfo(Vec3 pos)
    {
      List<AtmosphereGrid.AtmosphereStateSortData> atmosphereStateSortDataList = new List<AtmosphereGrid.AtmosphereStateSortData>();
      int num1 = 0;
      foreach (AtmosphereState state in this.states)
        atmosphereStateSortDataList.Add(new AtmosphereGrid.AtmosphereStateSortData()
        {
          Position = state.Position,
          InitialIndex = num1++
        });
      pos.z *= 0.3f;
      atmosphereStateSortDataList.Sort((Comparison<AtmosphereGrid.AtmosphereStateSortData>) ((x, y) => x.Position.Distance(pos).CompareTo(y.Position.Distance(pos))));
      AtmosphereState interpolatedStateInfo = new AtmosphereState();
      float num2 = 0.0f;
      bool flag = true;
      string str = "color_grade_empire_harsh";
      interpolatedStateInfo.ColorGradeTexture = str;
      foreach (AtmosphereGrid.AtmosphereStateSortData atmosphereStateSortData in atmosphereStateSortDataList)
      {
        AtmosphereState state = this.states[atmosphereStateSortData.InitialIndex];
        float num3 = state.Position.Distance(pos);
        float num4 = 1f - MBMath.SmoothStep(state.distanceForMaxWeight, state.distanceForMinWeight, num3);
        if ((double) num4 >= 0.001)
        {
          if (flag)
            str = state.ColorGradeTexture;
          interpolatedStateInfo.HumidityAverage += state.HumidityAverage * num4;
          interpolatedStateInfo.HumidityVariance += state.HumidityVariance * num4;
          interpolatedStateInfo.TemperatureAverage += state.TemperatureAverage * num4;
          interpolatedStateInfo.TemperatureVariance += state.TemperatureVariance * num4;
          num2 += num4;
          flag = false;
        }
      }
      if ((double) num2 > 0.0)
      {
        interpolatedStateInfo.ColorGradeTexture = str;
        interpolatedStateInfo.HumidityAverage /= num2;
        interpolatedStateInfo.HumidityVariance /= num2;
        interpolatedStateInfo.TemperatureAverage /= num2;
        interpolatedStateInfo.TemperatureVariance /= num2;
      }
      return interpolatedStateInfo;
    }

    private struct AtmosphereStateSortData
    {
      public Vec3 Position;
      public int InitialIndex;
    }
  }
}
