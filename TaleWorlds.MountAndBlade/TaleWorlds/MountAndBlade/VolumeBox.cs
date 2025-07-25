// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.VolumeBox
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class VolumeBox : MissionObject
  {
    private VolumeBox.VolumeBoxDelegate _volumeBoxIsOccupiedDelegate;

    protected internal override void OnInit()
    {
    }

    public void AddToCheckList(Agent agent)
    {
    }

    public void RemoveFromCheckList(Agent agent)
    {
    }

    public void SetIsOccupiedDelegate(VolumeBox.VolumeBoxDelegate volumeBoxDelegate)
    {
      this._volumeBoxIsOccupiedDelegate = volumeBoxDelegate;
    }

    public bool HasAgentsInAttackerSide()
    {
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      AgentProximityMap.ProximityMapSearchStruct searchStruct = AgentProximityMap.BeginSearch(Mission.Current, globalFrame.origin.AsVec2, globalFrame.rotation.GetScaleVector().AsVec2.Length);
      while (searchStruct.LastFoundAgent != null)
      {
        Agent lastFoundAgent = searchStruct.LastFoundAgent;
        if (lastFoundAgent.Team != null && lastFoundAgent.Team.Side == BattleSideEnum.Attacker && this.IsPointIn(lastFoundAgent.Position))
          return true;
        AgentProximityMap.FindNext(Mission.Current, ref searchStruct);
      }
      return false;
    }

    public bool IsPointIn(Vec3 point)
    {
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      Vec3 scaleVector = globalFrame.rotation.GetScaleVector();
      globalFrame.rotation.ApplyScaleLocal(new Vec3(1f / scaleVector.x, 1f / scaleVector.y, 1f / scaleVector.z));
      point = globalFrame.TransformToLocal(point);
      return (double) MathF.Abs(point.x) <= (double) scaleVector.x / 2.0 && (double) MathF.Abs(point.y) <= (double) scaleVector.y / 2.0 && (double) MathF.Abs(point.z) <= (double) scaleVector.z / 2.0;
    }

    public delegate void VolumeBoxDelegate(VolumeBox volumeBox, List<Agent> agentsInVolume);
  }
}
