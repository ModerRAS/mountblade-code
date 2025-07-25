// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionCommunityClientComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionCommunityClientComponent : MissionLobbyComponent
  {
    private CommunityClient _communityClient;
    private bool _isServerEndedBeforeClientLoaded;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._communityClient = NetworkMain.CommunityClient;
    }

    public void SetServerEndingBeforeClientLoaded(bool isServerEndingBeforeClientLoaded)
    {
      this._isServerEndedBeforeClientLoaded = isServerEndingBeforeClientLoaded;
    }

    public override void QuitMission()
    {
      base.QuitMission();
      if (this._isServerEndedBeforeClientLoaded || this.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending || !this._communityClient.IsInGame)
        return;
      this._communityClient.QuitFromGame();
    }
  }
}
