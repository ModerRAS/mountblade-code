// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MPPerkCondition`1
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MPPerkCondition<T> : MPPerkCondition where T : MissionMultiplayerGameModeBase
  {
    protected T GameModeInstance
    {
      get
      {
        Mission current = Mission.Current;
        return current == null ? default (T) : current.GetMissionBehavior<T>();
      }
    }

    protected override bool IsGameModesValid(List<string> gameModes)
    {
      if (typeof (MissionMultiplayerFlagDomination).IsAssignableFrom(typeof (T)))
      {
        string str1 = MultiplayerGameType.Skirmish.ToString();
        string str2 = MultiplayerGameType.Captain.ToString();
        foreach (string gameMode in gameModes)
        {
          if (!gameMode.Equals(str1, StringComparison.InvariantCultureIgnoreCase) && !gameMode.Equals(str2, StringComparison.InvariantCultureIgnoreCase))
            return false;
        }
        return true;
      }
      if (typeof (MissionMultiplayerTeamDeathmatch).IsAssignableFrom(typeof (T)))
      {
        string str = MultiplayerGameType.TeamDeathmatch.ToString();
        foreach (string gameMode in gameModes)
        {
          if (!gameMode.Equals(str, StringComparison.InvariantCultureIgnoreCase))
            return false;
        }
        return true;
      }
      if (typeof (MissionMultiplayerSiege).IsAssignableFrom(typeof (T)))
      {
        string str = MultiplayerGameType.Siege.ToString();
        foreach (string gameMode in gameModes)
        {
          if (!gameMode.Equals(str, StringComparison.InvariantCultureIgnoreCase))
            return false;
        }
        return true;
      }
      Debug.FailedAssert("Not implemented game mode check", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Network\\Gameplay\\Perks\\MPPerkCondition.cs", nameof (IsGameModesValid), 134);
      return false;
    }
  }
}
