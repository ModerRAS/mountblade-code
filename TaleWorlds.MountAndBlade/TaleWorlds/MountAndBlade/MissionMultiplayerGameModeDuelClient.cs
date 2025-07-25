// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerGameModeDuelClient
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.MissionRepresentatives;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionMultiplayerGameModeDuelClient : MissionMultiplayerGameModeBaseClient
  {
    public Action OnMyRepresentativeAssigned;

    public override bool IsGameModeUsingGold => false;

    public override bool IsGameModeTactical => false;

    public override bool IsGameModeUsingRoundCountdown => false;

    public override bool IsGameModeUsingAllowCultureChange => true;

    public override bool IsGameModeUsingAllowTroopChange => true;

    public override MultiplayerGameType GameType => MultiplayerGameType.Duel;

    public bool IsInDuel
    {
      get => GameNetwork.MyPeer.GetComponent<MissionPeer>()?.Team?.IsDefender ?? false;
    }

    public DuelMissionRepresentative MyRepresentative { get; private set; }

    private void OnMyClientSynchronized()
    {
      this.MyRepresentative = GameNetwork.MyPeer.GetComponent<DuelMissionRepresentative>();
      Action representativeAssigned = this.OnMyRepresentativeAssigned;
      if (representativeAssigned != null)
        representativeAssigned();
      this.MyRepresentative.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add);
    }

    public override int GetGoldAmount() => 0;

    public override void OnGoldAmountChangedForRepresentative(
      MissionRepresentativeBase representative,
      int goldAmount)
    {
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.MissionNetworkComponent.OnMyClientSynchronized += new Action(this.OnMyClientSynchronized);
    }

    public override void OnRemoveBehavior()
    {
      base.OnRemoveBehavior();
      this.MissionNetworkComponent.OnMyClientSynchronized -= new Action(this.OnMyClientSynchronized);
      if (this.MyRepresentative == null)
        return;
      this.MyRepresentative.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Remove);
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      base.OnAgentRemoved(affectedAgent, affectorAgent, agentState, blow);
      if (this.MyRepresentative == null)
        return;
      this.MyRepresentative.CheckHasRequestFromAndRemoveRequestIfNeeded(affectedAgent.MissionPeer);
    }

    public override bool CanRequestCultureChange()
    {
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      MissionPeer component = myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
      return component?.Team != null && component.Team.IsAttacker;
    }

    public override bool CanRequestTroopChange()
    {
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      MissionPeer component = myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
      return component?.Team != null && component.Team.IsAttacker;
    }
  }
}
