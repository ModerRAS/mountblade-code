// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BannerlordNetwork
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Diamond;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class BannerlordNetwork
  {
    public const int DefaultPort = 9999;

    private static PlayerConnectionInfo CreateServerPeerConnectionInfo()
    {
      LobbyClient gameClient = NetworkMain.GameClient;
      PlayerConnectionInfo peerConnectionInfo = new PlayerConnectionInfo(gameClient.PlayerID);
      peerConnectionInfo.AddParameter("PlayerData", (object) gameClient.PlayerData);
      peerConnectionInfo.AddParameter("UsedCosmetics", (object) gameClient.UsedCosmetics);
      peerConnectionInfo.Name = gameClient.Name;
      return peerConnectionInfo;
    }

    public static void CreateServerPeer()
    {
      if (MBCommon.CurrentGameType != MBCommon.GameType.MultiClientServer)
        return;
      GameNetwork.AddNewPlayerOnServer(BannerlordNetwork.CreateServerPeerConnectionInfo(), true, true);
    }

    public static void StartMultiplayerLobbyMission(LobbyMissionType lobbyMissionType)
    {
      BannerlordNetwork.LobbyMissionType = lobbyMissionType;
    }

    public static void EndMultiplayerLobbyMission()
    {
      if (Game.Current.GameStateManager.ActiveState is MissionState activeState && activeState.CurrentMission != null && !activeState.CurrentMission.MissionEnded)
      {
        if (activeState.CurrentMission.CurrentState != Mission.State.Continuing)
        {
          Debug.Print("Remove From Game: Begin delayed disconnect from server.".ToUpper(), debugFilter: 17179869184UL);
          activeState.BeginDelayedDisconnectFromMission();
        }
        else
        {
          Debug.Print("Remove From Game: Begin instant disconnect from server.".ToUpper(), debugFilter: 17179869184UL);
          activeState.CurrentMission.EndMission();
        }
        MBDebug.Print("Starting to clean up the current mission now.", debugFilter: 17179869184UL);
      }
      Game.Current.GetGameHandler<ChatBox>()?.ResetMuteList();
    }

    public static LobbyMissionType LobbyMissionType { get; private set; }
  }
}
