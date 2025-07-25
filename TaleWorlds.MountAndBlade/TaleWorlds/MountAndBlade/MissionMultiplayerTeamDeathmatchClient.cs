// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerTeamDeathmatchClient
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.MissionRepresentatives;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionMultiplayerTeamDeathmatchClient : MissionMultiplayerGameModeBaseClient
  {
    private const string BattleWinningSoundEventString = "event:/alerts/report/battle_winning";
    private const string BattleLosingSoundEventString = "event:/alerts/report/battle_losing";
    private const float BattleWinLoseAlertThreshold = 0.1f;
    private TeamDeathmatchMissionRepresentative _myRepresentative;
    private bool _battleEndingNotificationGiven;

    public event Action<GoldGain> OnGoldGainEvent;

    public override bool IsGameModeUsingGold => true;

    public override bool IsGameModeTactical => false;

    public override bool IsGameModeUsingRoundCountdown => true;

    public override MultiplayerGameType GameType => MultiplayerGameType.TeamDeathmatch;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.MissionNetworkComponent.OnMyClientSynchronized += new Action(this.OnMyClientSynchronized);
      this.ScoreboardComponent.OnRoundPropertiesChanged += new Action(this.OnTeamScoresChanged);
    }

    public override void OnGoldAmountChangedForRepresentative(
      MissionRepresentativeBase representative,
      int goldAmount)
    {
      if (representative == null || this.MissionLobbyComponent.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending)
        return;
      representative.UpdateGold(goldAmount);
      this.ScoreboardComponent.PlayerPropertiesChanged(representative.MissionPeer);
    }

    public override void AfterStart() => this.Mission.SetMissionMode(MissionMode.Battle, true);

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (!GameNetwork.IsClient)
        return;
      registerer.RegisterBaseHandler<SyncGoldsForSkirmish>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventUpdateGold));
      registerer.RegisterBaseHandler<GoldGain>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventTDMGoldGain));
    }

    private void OnMyClientSynchronized()
    {
      this._myRepresentative = GameNetwork.MyPeer.GetComponent<TeamDeathmatchMissionRepresentative>();
    }

    private void HandleServerEventUpdateGold(GameNetworkMessage baseMessage)
    {
      SyncGoldsForSkirmish goldsForSkirmish = (SyncGoldsForSkirmish) baseMessage;
      this.OnGoldAmountChangedForRepresentative(goldsForSkirmish.VirtualPlayer.GetComponent<MissionRepresentativeBase>(), goldsForSkirmish.GoldAmount);
    }

    private void HandleServerEventTDMGoldGain(GameNetworkMessage baseMessage)
    {
      GoldGain goldGain = (GoldGain) baseMessage;
      Action<GoldGain> onGoldGainEvent = this.OnGoldGainEvent;
      if (onGoldGainEvent == null)
        return;
      onGoldGainEvent(goldGain);
    }

    public override int GetGoldAmount() => this._myRepresentative.Gold;

    public override void OnRemoveBehavior()
    {
      this.MissionNetworkComponent.OnMyClientSynchronized -= new Action(this.OnMyClientSynchronized);
      this.ScoreboardComponent.OnRoundPropertiesChanged -= new Action(this.OnTeamScoresChanged);
      base.OnRemoveBehavior();
    }

    private void OnTeamScoresChanged()
    {
      if (GameNetwork.IsDedicatedServer || this._battleEndingNotificationGiven || this._myRepresentative.MissionPeer.Team == null || this._myRepresentative.MissionPeer.Team.Side == BattleSideEnum.None)
        return;
      int intValue = MultiplayerOptions.OptionType.MinScoreToWinMatch.GetIntValue();
      float num1 = (float) (intValue - this.ScoreboardComponent.GetRoundScore(this._myRepresentative.MissionPeer.Team.Side)) / (float) intValue;
      float num2 = (float) (intValue - this.ScoreboardComponent.GetRoundScore(this._myRepresentative.MissionPeer.Team.Side.GetOppositeSide())) / (float) intValue;
      MatrixFrame cameraFrame = Mission.Current.GetCameraFrame();
      Vec3 position = cameraFrame.origin + cameraFrame.rotation.u;
      if ((double) num1 <= 0.10000000149011612 && (double) num2 > 0.10000000149011612)
      {
        MBSoundEvent.PlaySound(SoundEvent.GetEventIdFromString("event:/alerts/report/battle_winning"), position);
        this._battleEndingNotificationGiven = true;
      }
      if ((double) num2 > 0.10000000149011612 || (double) num1 <= 0.10000000149011612)
        return;
      MBSoundEvent.PlaySound(SoundEvent.GetEventIdFromString("event:/alerts/report/battle_losing"), position);
      this._battleEndingNotificationGiven = true;
    }
  }
}
