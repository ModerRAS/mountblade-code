// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionRepresentativeBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MissionRepresentativeBase : PeerComponent
  {
    private int _gold;
    private MissionPeer _missionPeer;

    protected MissionRepresentativeBase.PlayerTypes PlayerType
    {
      get
      {
        if (!this.Peer.Communicator.IsNetworkActive)
          return MissionRepresentativeBase.PlayerTypes.Bot;
        return !this.Peer.Communicator.IsServerPeer ? MissionRepresentativeBase.PlayerTypes.Client : MissionRepresentativeBase.PlayerTypes.Server;
      }
    }

    public Agent ControlledAgent { get; private set; }

    public int Gold
    {
      get
      {
        if (this._gold < 0)
          return this._gold;
        bool flag;
        MultiplayerOptions.Instance.GetOptionFromOptionType(MultiplayerOptions.OptionType.UnlimitedGold).GetValue(out flag);
        return !flag ? this._gold : 2000;
      }
      private set
      {
        if (value < 0)
        {
          this._gold = value;
        }
        else
        {
          bool flag;
          MultiplayerOptions.Instance.GetOptionFromOptionType(MultiplayerOptions.OptionType.UnlimitedGold).GetValue(out flag);
          this._gold = !flag ? value : 2000;
        }
      }
    }

    public MissionPeer MissionPeer
    {
      get
      {
        if (this._missionPeer == null)
          this._missionPeer = this.GetComponent<MissionPeer>();
        return this._missionPeer;
      }
    }

    public event Action OnGoldUpdated;

    public void SetAgent(Agent agent)
    {
      this.ControlledAgent = agent;
      if (this.ControlledAgent == null)
        return;
      this.ControlledAgent.MissionRepresentative = this;
      this.OnAgentSpawned();
    }

    public virtual void OnAgentSpawned()
    {
    }

    public virtual void Tick(float dt)
    {
    }

    public void UpdateGold(int gold)
    {
      this.Gold = gold;
      Action onGoldUpdated = this.OnGoldUpdated;
      if (onGoldUpdated == null)
        return;
      onGoldUpdated();
    }

    protected enum PlayerTypes
    {
      Bot,
      Client,
      Server,
    }
  }
}
