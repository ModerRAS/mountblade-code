// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.PeerExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class PeerExtensions
  {
    public static void SendExistingObjects(this NetworkCommunicator peer, Mission mission)
    {
      MBAPI.IMBPeer.SendExistingObjects(peer.Index, mission.Pointer);
    }

    public static VirtualPlayer GetPeer(this PeerComponent peerComponent) => peerComponent.Peer;

    public static NetworkCommunicator GetNetworkPeer(this PeerComponent peerComponent)
    {
      return peerComponent.Peer.Communicator as NetworkCommunicator;
    }

    public static T GetComponent<T>(this NetworkCommunicator networkPeer) where T : PeerComponent
    {
      return networkPeer.VirtualPlayer.GetComponent<T>();
    }

    public static void RemoveComponent<T>(this NetworkCommunicator networkPeer, bool synched = true) where T : PeerComponent
    {
      networkPeer.VirtualPlayer.RemoveComponent<T>();
    }

    public static void RemoveComponent(
      this NetworkCommunicator networkPeer,
      PeerComponent component)
    {
      networkPeer.VirtualPlayer.RemoveComponent(component);
    }

    public static PeerComponent GetComponent(this NetworkCommunicator networkPeer, uint componentId)
    {
      return networkPeer.VirtualPlayer.GetComponent(componentId);
    }

    public static void AddComponent(this NetworkCommunicator networkPeer, System.Type peerComponentType)
    {
      networkPeer.VirtualPlayer.AddComponent(peerComponentType);
    }

    public static void AddComponent(this NetworkCommunicator networkPeer, uint componentId)
    {
      networkPeer.VirtualPlayer.AddComponent(componentId);
    }

    public static T AddComponent<T>(this NetworkCommunicator networkPeer) where T : PeerComponent, new()
    {
      return (object) networkPeer.GetComponent<T>() != null ? networkPeer.TellClientToAddComponent<T>() : networkPeer.VirtualPlayer.AddComponent<T>();
    }

    public static T TellClientToAddComponent<T>(this NetworkCommunicator networkPeer) where T : PeerComponent, new()
    {
      T component = networkPeer.GetComponent<T>();
      GameNetwork.BeginModuleEventAsServer(networkPeer);
      GameNetwork.WriteMessage((GameNetworkMessage) new AddPeerComponent(networkPeer, component.TypeId));
      GameNetwork.EndModuleEventAsServer();
      return component;
    }
  }
}
