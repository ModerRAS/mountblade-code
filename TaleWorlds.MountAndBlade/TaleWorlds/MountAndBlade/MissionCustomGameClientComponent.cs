// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionCustomGameClientComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade.Diamond;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionCustomGameClientComponent : MissionLobbyComponent
  {
    private LobbyClient _lobbyClient;
    private bool _isServerEndedBeforeClientLoaded;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._lobbyClient = NetworkMain.GameClient;
    }

    public void SetServerEndingBeforeClientLoaded(bool isServerEndingBeforeClientLoaded)
    {
      this._isServerEndedBeforeClientLoaded = isServerEndingBeforeClientLoaded;
    }

    public override void QuitMission()
    {
      base.QuitMission();
      if (GameNetwork.IsServer)
      {
        if (this.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending || !this._lobbyClient.LoggedIn || this._lobbyClient.CurrentState != LobbyClient.State.HostingCustomGame)
          return;
        this._lobbyClient.EndCustomGame();
      }
      else
      {
        if (this._isServerEndedBeforeClientLoaded || this.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending || !this._lobbyClient.LoggedIn || this._lobbyClient.CurrentState != LobbyClient.State.InCustomGame)
          return;
        this._lobbyClient.QuitFromCustomGame();
      }
    }
  }
}
