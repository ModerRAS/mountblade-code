// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomGameMutedPlayerManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.PlayerServices;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class CustomGameMutedPlayerManager
  {
    private static List<PlayerId> _mutedPlayers = new List<PlayerId>();

    public static List<PlayerId> MutedPlayers => CustomGameMutedPlayerManager._mutedPlayers;

    public static void MutePlayer(PlayerId playerId)
    {
      CustomGameMutedPlayerManager._mutedPlayers.Add(playerId);
    }

    public static void UnmutePlayer(PlayerId playerId)
    {
      CustomGameMutedPlayerManager._mutedPlayers.Remove(playerId);
    }

    public static bool IsUserMuted(PlayerId playerId)
    {
      return CustomGameMutedPlayerManager._mutedPlayers.Contains(playerId);
    }

    public static void ClearMutedPlayers() => CustomGameMutedPlayerManager._mutedPlayers.Clear();
  }
}
