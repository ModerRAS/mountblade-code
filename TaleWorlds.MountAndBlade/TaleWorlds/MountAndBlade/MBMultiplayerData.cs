// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBMultiplayerData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.MountAndBlade.Diamond;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MBMultiplayerData
  {
    public static string ServerName;
    public static string GameModule;
    public static string GameType;
    public static string Map;
    public static int PlayerCountLimit;

    public static Guid ServerId { get; set; }

    [MBCallback]
    public static string GetServerId() => MBMultiplayerData.ServerId.ToString();

    [MBCallback]
    public static string GetServerName() => MBMultiplayerData.ServerName;

    [MBCallback]
    public static string GetGameModule() => MBMultiplayerData.GameModule;

    [MBCallback]
    public static string GetGameType() => MBMultiplayerData.GameType;

    [MBCallback]
    public static string GetMap() => MBMultiplayerData.Map;

    [MBCallback]
    public static int GetCurrentPlayerCount() => GameNetwork.NetworkPeerCount;

    [MBCallback]
    public static int GetPlayerCountLimit() => MBMultiplayerData.PlayerCountLimit;

    public static event MBMultiplayerData.GameServerInfoReceivedDelegate GameServerInfoReceived;

    [MBCallback]
    public static void UpdateGameServerInfo(
      string id,
      string gameServer,
      string gameModule,
      string gameType,
      string map,
      int currentPlayerCount,
      int maxPlayerCount,
      string address,
      int port)
    {
      if (MBMultiplayerData.GameServerInfoReceived == null)
        return;
      MBMultiplayerData.GameServerInfoReceived(new CustomBattleId(Guid.Parse(id)), gameServer, gameModule, gameType, map, currentPlayerCount, maxPlayerCount, address, port);
    }

    public delegate void GameServerInfoReceivedDelegate(
      CustomBattleId id,
      string gameServer,
      string gameModule,
      string gameType,
      string map,
      int currentPlayerCount,
      int maxPlayerCount,
      string address,
      int port);
  }
}
