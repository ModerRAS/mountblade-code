// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.UdpNetworkComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class UdpNetworkComponent : IUdpNetworkHandler
  {
    private GameNetwork.NetworkMessageHandlerRegistererContainer _missionNetworkMessageHandlerRegisterer;

    protected UdpNetworkComponent()
    {
      this._missionNetworkMessageHandlerRegisterer = new GameNetwork.NetworkMessageHandlerRegistererContainer();
      this.AddRemoveMessageHandlers(this._missionNetworkMessageHandlerRegisterer);
      this._missionNetworkMessageHandlerRegisterer.RegisterMessages();
    }

    protected virtual void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
    }

    public virtual void OnUdpNetworkHandlerClose()
    {
      this._missionNetworkMessageHandlerRegisterer?.UnregisterMessages();
      GameNetwork.NetworkComponents.Remove(this);
    }

    public virtual void OnUdpNetworkHandlerTick(float dt)
    {
    }

    public virtual void HandleNewClientConnect(PlayerConnectionInfo clientConnectionInfo)
    {
    }

    public virtual void HandleEarlyNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
    }

    public virtual void HandleNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
    }

    public virtual void HandleLateNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
    }

    public virtual void HandleNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
    }

    public virtual void HandleLateNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
    }

    public virtual void OnEveryoneUnSynchronized()
    {
    }

    public void HandleEarlyPlayerDisconnect(NetworkCommunicator networkPeer)
    {
    }

    public virtual void HandlePlayerDisconnect(NetworkCommunicator networkPeer)
    {
    }

    public virtual void OnPlayerDisconnectedFromServer(NetworkCommunicator networkPeer)
    {
    }

    public virtual void OnDisconnectedFromServer()
    {
    }
  }
}
