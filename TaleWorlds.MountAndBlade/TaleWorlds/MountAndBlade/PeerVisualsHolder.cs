// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.PeerVisualsHolder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class PeerVisualsHolder
  {
    public MissionPeer Peer { get; private set; }

    public int VisualsIndex { get; private set; }

    public IAgentVisual AgentVisuals { get; private set; }

    public IAgentVisual MountAgentVisuals { get; private set; }

    public PeerVisualsHolder(
      MissionPeer peer,
      int index,
      IAgentVisual agentVisuals,
      IAgentVisual mountVisuals)
    {
      this.Peer = peer;
      this.VisualsIndex = index;
      this.AgentVisuals = agentVisuals;
      this.MountAgentVisuals = mountVisuals;
    }

    public void SetMountVisuals(IAgentVisual mountAgentVisuals)
    {
      this.MountAgentVisuals = mountAgentVisuals;
    }
  }
}
