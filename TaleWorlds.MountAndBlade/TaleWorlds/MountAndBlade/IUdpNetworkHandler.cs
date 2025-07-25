// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IUdpNetworkHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IUdpNetworkHandler
  {
    void OnUdpNetworkHandlerClose();

    void OnUdpNetworkHandlerTick(float dt);

    void HandleNewClientConnect(PlayerConnectionInfo clientConnectionInfo);

    void HandleEarlyNewClientAfterLoadingFinished(NetworkCommunicator networkPeer);

    void HandleNewClientAfterLoadingFinished(NetworkCommunicator networkPeer);

    void HandleLateNewClientAfterLoadingFinished(NetworkCommunicator networkPeer);

    void HandleNewClientAfterSynchronized(NetworkCommunicator networkPeer);

    void HandleLateNewClientAfterSynchronized(NetworkCommunicator networkPeer);

    void HandleEarlyPlayerDisconnect(NetworkCommunicator networkPeer);

    void HandlePlayerDisconnect(NetworkCommunicator networkPeer);

    void OnPlayerDisconnectedFromServer(NetworkCommunicator networkPeer);

    void OnDisconnectedFromServer();

    void OnEveryoneUnSynchronized();
  }
}
