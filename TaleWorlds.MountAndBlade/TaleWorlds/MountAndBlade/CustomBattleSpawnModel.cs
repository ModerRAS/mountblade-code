// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleSpawnModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleSpawnModel : BattleSpawnModel
  {
    public override void OnMissionStart() => MissionReinforcementsHelper.OnMissionStart();

    public override void OnMissionEnd() => MissionReinforcementsHelper.OnMissionEnd();

    public override List<(IAgentOriginBase origin, int formationIndex)> GetInitialSpawnAssignments(
      BattleSideEnum battleSide,
      List<IAgentOriginBase> troopOrigins)
    {
      List<(IAgentOriginBase, int)> spawnAssignments = new List<(IAgentOriginBase, int)>();
      foreach (IAgentOriginBase troopOrigin in troopOrigins)
      {
        (IAgentOriginBase, int) valueTuple = (troopOrigin, (int) Mission.Current.GetAgentTroopClass(battleSide, troopOrigin.Troop));
        spawnAssignments.Add(valueTuple);
      }
      return spawnAssignments;
    }

    public override List<(IAgentOriginBase origin, int formationIndex)> GetReinforcementAssignments(
      BattleSideEnum battleSide,
      List<IAgentOriginBase> troopOrigins)
    {
      return MissionReinforcementsHelper.GetReinforcementAssignments(battleSide, troopOrigins);
    }
  }
}
