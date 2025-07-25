// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleInitializationModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleInitializationModel : BattleInitializationModel
  {
    public override List<FormationClass> GetAllAvailableTroopTypes()
    {
      List<FormationClass> availableTroopTypes = new List<FormationClass>();
      foreach (Agent activeAgent in (List<Agent>) Mission.Current.PlayerTeam.ActiveAgents)
      {
        BasicCharacterObject character = activeAgent.Character;
        if (character.IsInfantry && !character.IsMounted && !availableTroopTypes.Contains(FormationClass.Infantry))
          availableTroopTypes.Add(FormationClass.Infantry);
        if (character.IsRanged && !character.IsMounted && !availableTroopTypes.Contains(FormationClass.Ranged))
          availableTroopTypes.Add(FormationClass.Ranged);
        if (character.IsMounted && !character.IsRanged && !availableTroopTypes.Contains(FormationClass.Cavalry))
          availableTroopTypes.Add(FormationClass.Cavalry);
        if (character.IsMounted && character.IsRanged && !availableTroopTypes.Contains(FormationClass.HorseArcher))
          availableTroopTypes.Add(FormationClass.HorseArcher);
      }
      return availableTroopTypes;
    }

    protected override bool CanPlayerSideDeployWithOrderOfBattleAux()
    {
      if (Mission.Current.IsSallyOutBattle)
        return false;
      Team playerTeam = Mission.Current.PlayerTeam;
      return Mission.Current.GetMissionBehavior<MissionAgentSpawnLogic>().GetNumberOfPlayerControllableTroops() >= 20;
    }
  }
}
