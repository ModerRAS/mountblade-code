// Decompiled with JetBrains decompiler
// Type: StoryMode.View.StoryModeViewCreator
// Assembly: StoryMode.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0D42E731-85DE-4B91-B7A6-53726B566D9F
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.View.dll

using StoryMode.View.Missions;
using System;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace StoryMode.View
{
  public static class StoryModeViewCreator
  {
    public static MissionView CreateTrainingFieldObjectiveView(Mission mission)
    {
      return ViewCreatorManager.CreateMissionView<MissionTrainingFieldObjectiveView>(true, mission, Array.Empty<object>());
    }
  }
}
