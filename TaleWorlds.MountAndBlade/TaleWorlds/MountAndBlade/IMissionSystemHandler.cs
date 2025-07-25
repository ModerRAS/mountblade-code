// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMissionSystemHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IMissionSystemHandler
  {
    void OnMissionAfterStarting(Mission mission);

    void OnMissionLoadingFinished(Mission mission);

    void BeforeMissionTick(Mission mission, float realDt);

    void AfterMissionTick(Mission mission, float realDt);

    void UpdateCamera(Mission mission, float realDt);

    bool RenderIsReady();

    IEnumerable<MissionBehavior> OnAddBehaviors(
      IEnumerable<MissionBehavior> behaviors,
      Mission mission,
      string missionName,
      bool addDefaultMissionBehaviors);
  }
}
