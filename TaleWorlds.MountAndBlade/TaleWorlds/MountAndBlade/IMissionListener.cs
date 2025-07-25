// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMissionListener
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IMissionListener
  {
    void OnEquipItemsFromSpawnEquipmentBegin(Agent agent, Agent.CreationType creationType);

    void OnEquipItemsFromSpawnEquipment(Agent agent, Agent.CreationType creationType);

    void OnEndMission();

    void OnMissionModeChange(MissionMode oldMissionMode, bool atStart);

    void OnConversationCharacterChanged();

    void OnResetMission();

    void OnInitialDeploymentPlanMade(BattleSideEnum battleSide, bool isFirstPlan);
  }
}
