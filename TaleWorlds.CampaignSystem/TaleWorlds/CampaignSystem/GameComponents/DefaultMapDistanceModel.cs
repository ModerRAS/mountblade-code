// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMapDistanceModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMapDistanceModel : MapDistanceModel
  {
    private readonly Dictionary<(Settlement, Settlement), float> _settlementDistanceCache = new Dictionary<(Settlement, Settlement), float>();
    private readonly Dictionary<int, Settlement> _navigationMeshClosestSettlementCache = new Dictionary<int, Settlement>();
    private readonly List<Settlement> _settlementsToConsider = new List<Settlement>();

    public override float MaximumDistanceBetweenTwoSettlements { get; set; }

    public void LoadCacheFromFile(System.IO.BinaryReader reader)
    {
      this._settlementDistanceCache.Clear();
      if (reader == null)
      {
        for (int index1 = 0; index1 < Settlement.All.Count; ++index1)
        {
          Settlement settlement1 = Settlement.All[index1];
          this._settlementsToConsider.Add(settlement1);
          for (int index2 = index1 + 1; index2 < Settlement.All.Count; ++index2)
          {
            Settlement settlement2 = Settlement.All[index2];
            float distance = this.GetDistance(settlement1.GatePosition, settlement2.GatePosition, settlement1.CurrentNavigationFace, settlement2.CurrentNavigationFace);
            if (settlement1.Id.InternalValue <= settlement2.Id.InternalValue)
              this.AddNewPairToDistanceCache((settlement1, settlement2), distance);
            else
              this.AddNewPairToDistanceCache((settlement2, settlement1), distance);
          }
        }
        int navigationMeshFaces = Campaign.Current.MapSceneWrapper.GetNumberOfNavigationMeshFaces();
        for (int index = 0; index < navigationMeshFaces; ++index)
        {
          PathFaceRecord pathFaceRecord = new PathFaceRecord(index, -1, -1);
          Vec2 meshCenterPosition = Campaign.Current.MapSceneWrapper.GetNavigationMeshCenterPosition(pathFaceRecord);
          pathFaceRecord = Campaign.Current.MapSceneWrapper.GetFaceIndex(meshCenterPosition);
          switch (Campaign.Current.MapSceneWrapper.GetFaceTerrainType(pathFaceRecord))
          {
            case TerrainType.Water:
            case TerrainType.Mountain:
            case TerrainType.River:
            case TerrainType.Lake:
            case TerrainType.Canyon:
            case TerrainType.RuralArea:
              continue;
            default:
              float distanceLimit = float.MaxValue;
              Settlement settlement3 = (Settlement) null;
              foreach (Settlement settlement4 in (List<Settlement>) Settlement.All)
              {
                float distance;
                if ((settlement3 == null || (double) meshCenterPosition.DistanceSquared(settlement4.GatePosition) < (double) distanceLimit * (double) distanceLimit) && Campaign.Current.MapSceneWrapper.GetPathDistanceBetweenAIFaces(pathFaceRecord, settlement4.CurrentNavigationFace, meshCenterPosition, settlement4.GatePosition, 0.1f, distanceLimit, out distance) && (double) distance < (double) distanceLimit)
                {
                  distanceLimit = distance;
                  settlement3 = settlement4;
                }
              }
              if (settlement3 != null)
              {
                this._navigationMeshClosestSettlementCache[index] = settlement3;
                continue;
              }
              continue;
          }
        }
      }
      else
      {
        int num = reader.ReadInt32();
        for (int index3 = 0; index3 < num; ++index3)
        {
          Settlement settlement5 = Settlement.Find(reader.ReadString());
          this._settlementsToConsider.Add(settlement5);
          for (int index4 = index3 + 1; index4 < num; ++index4)
          {
            Settlement settlement6 = Settlement.Find(reader.ReadString());
            float distance = reader.ReadSingle();
            MBGUID id = settlement5.Id;
            int internalValue1 = (int) id.InternalValue;
            id = settlement6.Id;
            int internalValue2 = (int) id.InternalValue;
            if ((uint) internalValue1 <= (uint) internalValue2)
              this.AddNewPairToDistanceCache((settlement5, settlement6), distance);
            else
              this.AddNewPairToDistanceCache((settlement6, settlement5), distance);
          }
        }
        for (int key = reader.ReadInt32(); key >= 0; key = reader.ReadInt32())
        {
          Settlement settlement = Settlement.Find(reader.ReadString());
          this._navigationMeshClosestSettlementCache[key] = settlement;
        }
      }
    }

    public override float GetDistance(Settlement fromSettlement, Settlement toSettlement)
    {
      float distance;
      if (fromSettlement == toSettlement)
        distance = 0.0f;
      else if (fromSettlement.Id.InternalValue <= toSettlement.Id.InternalValue)
      {
        (Settlement, Settlement) valueTuple = (fromSettlement, toSettlement);
        if (!this._settlementDistanceCache.TryGetValue(valueTuple, out distance))
        {
          distance = this.GetDistance(fromSettlement.GatePosition, toSettlement.GatePosition, fromSettlement.CurrentNavigationFace, toSettlement.CurrentNavigationFace);
          this.AddNewPairToDistanceCache(valueTuple, distance);
        }
      }
      else
      {
        (Settlement, Settlement) valueTuple = (toSettlement, fromSettlement);
        if (!this._settlementDistanceCache.TryGetValue(valueTuple, out distance))
        {
          distance = this.GetDistance(toSettlement.GatePosition, fromSettlement.GatePosition, toSettlement.CurrentNavigationFace, fromSettlement.CurrentNavigationFace);
          this.AddNewPairToDistanceCache(valueTuple, distance);
        }
      }
      return distance;
    }

    public override float GetDistance(MobileParty fromParty, Settlement toSettlement)
    {
      float distance;
      if (fromParty.CurrentSettlement != null)
        distance = this.GetDistance(fromParty.CurrentSettlement, toSettlement);
      else if (fromParty.CurrentNavigationFace.FaceIndex == toSettlement.CurrentNavigationFace.FaceIndex)
      {
        distance = fromParty.Position2D.Distance(toSettlement.GatePosition);
      }
      else
      {
        Settlement forNavigationMesh = this.GetClosestSettlementForNavigationMesh(fromParty.CurrentNavigationFace);
        Vec2 vec2 = fromParty.Position2D;
        double num1 = (double) vec2.Distance(toSettlement.GatePosition);
        vec2 = forNavigationMesh.GatePosition;
        double num2 = (double) vec2.Distance(toSettlement.GatePosition);
        distance = (float) (num1 - num2) + this.GetDistance(forNavigationMesh, toSettlement);
      }
      return distance;
    }

    public override float GetDistance(MobileParty fromParty, MobileParty toParty)
    {
      float distance;
      if (fromParty.CurrentNavigationFace.FaceIndex == toParty.CurrentNavigationFace.FaceIndex)
      {
        distance = fromParty.Position2D.Distance(toParty.Position2D);
      }
      else
      {
        Settlement fromSettlement = fromParty.CurrentSettlement ?? this.GetClosestSettlementForNavigationMesh(fromParty.CurrentNavigationFace);
        Settlement toSettlement = toParty.CurrentSettlement ?? this.GetClosestSettlementForNavigationMesh(toParty.CurrentNavigationFace);
        distance = fromParty.Position2D.Distance(toParty.Position2D) - fromSettlement.GatePosition.Distance(toSettlement.GatePosition) + this.GetDistance(fromSettlement, toSettlement);
      }
      return distance;
    }

    public override bool GetDistance(
      Settlement fromSettlement,
      Settlement toSettlement,
      float maximumDistance,
      out float distance)
    {
      bool distance1;
      if (fromSettlement == toSettlement)
      {
        distance = 0.0f;
        distance1 = true;
      }
      else if (fromSettlement.CurrentNavigationFace.FaceIndex == toSettlement.CurrentNavigationFace.FaceIndex)
      {
        distance = fromSettlement.GatePosition.Distance(toSettlement.GatePosition);
        distance1 = (double) distance <= (double) maximumDistance;
      }
      else if (fromSettlement.Id.InternalValue <= toSettlement.Id.InternalValue)
      {
        (Settlement, Settlement) valueTuple = (fromSettlement, toSettlement);
        if (this._settlementDistanceCache.TryGetValue(valueTuple, out distance))
        {
          distance1 = (double) distance <= (double) maximumDistance;
        }
        else
        {
          distance1 = this.GetDistanceWithDistanceLimit(fromSettlement.GatePosition, toSettlement.GatePosition, Campaign.Current.MapSceneWrapper.GetFaceIndex(fromSettlement.GatePosition), Campaign.Current.MapSceneWrapper.GetFaceIndex(toSettlement.GatePosition), maximumDistance, out distance);
          if (distance1)
            this.AddNewPairToDistanceCache(valueTuple, distance);
        }
      }
      else
      {
        (Settlement, Settlement) valueTuple = (toSettlement, fromSettlement);
        if (this._settlementDistanceCache.TryGetValue(valueTuple, out distance))
        {
          distance1 = (double) distance <= (double) maximumDistance;
        }
        else
        {
          distance1 = this.GetDistanceWithDistanceLimit(toSettlement.GatePosition, fromSettlement.GatePosition, Campaign.Current.MapSceneWrapper.GetFaceIndex(toSettlement.GatePosition), Campaign.Current.MapSceneWrapper.GetFaceIndex(fromSettlement.GatePosition), maximumDistance, out distance);
          if (distance1)
            this.AddNewPairToDistanceCache(valueTuple, distance);
        }
      }
      return distance1;
    }

    public override bool GetDistance(
      MobileParty fromParty,
      Settlement toSettlement,
      float maximumDistance,
      out float distance)
    {
      bool distance1 = false;
      if (fromParty.CurrentSettlement != null)
        distance1 = this.GetDistance(fromParty.CurrentSettlement, toSettlement, maximumDistance, out distance);
      else if (fromParty.CurrentNavigationFace.FaceIndex == toSettlement.CurrentNavigationFace.FaceIndex)
      {
        distance = fromParty.Position2D.Distance(toSettlement.GatePosition);
        distance1 = (double) distance <= (double) maximumDistance;
      }
      else
      {
        Settlement forNavigationMesh = this.GetClosestSettlementForNavigationMesh(fromParty.CurrentNavigationFace);
        if (this.GetDistance(forNavigationMesh, toSettlement, maximumDistance, out distance))
        {
          distance += fromParty.Position2D.Distance(toSettlement.GatePosition) - forNavigationMesh.GatePosition.Distance(toSettlement.GatePosition);
          distance1 = (double) distance <= (double) maximumDistance;
        }
      }
      return distance1;
    }

    public override bool GetDistance(
      IMapPoint fromMapPoint,
      MobileParty toParty,
      float maximumDistance,
      out float distance)
    {
      bool distance1 = false;
      if (fromMapPoint.CurrentNavigationFace.FaceIndex == toParty.CurrentNavigationFace.FaceIndex)
      {
        distance = fromMapPoint.Position2D.Distance(toParty.Position2D);
        distance1 = (double) distance <= (double) maximumDistance;
      }
      else
      {
        Settlement forNavigationMesh = this.GetClosestSettlementForNavigationMesh(fromMapPoint.CurrentNavigationFace);
        Settlement toSettlement = toParty.CurrentSettlement ?? this.GetClosestSettlementForNavigationMesh(toParty.CurrentNavigationFace);
        if (this.GetDistance(forNavigationMesh, toSettlement, maximumDistance, out distance))
        {
          distance += fromMapPoint.Position2D.Distance(toParty.Position2D) - forNavigationMesh.GatePosition.Distance(toSettlement.GatePosition);
          distance1 = (double) distance <= (double) maximumDistance;
        }
      }
      return distance1;
    }

    public override bool GetDistance(
      IMapPoint fromMapPoint,
      Settlement toSettlement,
      float maximumDistance,
      out float distance)
    {
      bool distance1 = false;
      if (fromMapPoint.CurrentNavigationFace.FaceIndex == toSettlement.CurrentNavigationFace.FaceIndex)
      {
        distance = fromMapPoint.Position2D.Distance(toSettlement.GatePosition);
        distance1 = (double) distance <= (double) maximumDistance;
      }
      else
      {
        distance = 100f;
        Settlement forNavigationMesh = this.GetClosestSettlementForNavigationMesh(fromMapPoint.CurrentNavigationFace);
        if (this.GetDistance(forNavigationMesh, toSettlement, maximumDistance, out distance))
        {
          distance += fromMapPoint.Position2D.Distance(toSettlement.GatePosition) - forNavigationMesh.GatePosition.Distance(toSettlement.GatePosition);
          distance1 = (double) distance <= (double) maximumDistance;
        }
      }
      return distance1;
    }

    public override bool GetDistance(
      IMapPoint fromMapPoint,
      in Vec2 toPoint,
      float maximumDistance,
      out float distance)
    {
      bool distance1 = false;
      PathFaceRecord faceIndex = Campaign.Current.MapSceneWrapper.GetFaceIndex(toPoint);
      if (fromMapPoint.CurrentNavigationFace.FaceIndex == faceIndex.FaceIndex)
      {
        distance = fromMapPoint.Position2D.Distance(toPoint);
        distance1 = (double) distance <= (double) maximumDistance;
      }
      else
      {
        Settlement forNavigationMesh1 = this.GetClosestSettlementForNavigationMesh(fromMapPoint.CurrentNavigationFace);
        Settlement forNavigationMesh2 = this.GetClosestSettlementForNavigationMesh(faceIndex);
        if (this.GetDistance(forNavigationMesh1, forNavigationMesh2, maximumDistance, out distance))
        {
          distance += fromMapPoint.Position2D.Distance(toPoint) - forNavigationMesh1.GatePosition.Distance(forNavigationMesh2.GatePosition);
          distance1 = (double) distance <= (double) maximumDistance;
        }
      }
      return distance1;
    }

    private float GetDistance(
      Vec2 pos1,
      Vec2 pos2,
      PathFaceRecord faceIndex1,
      PathFaceRecord faceIndex2)
    {
      float distance;
      Campaign.Current.MapSceneWrapper.GetPathDistanceBetweenAIFaces(faceIndex1, faceIndex2, pos1, pos2, 0.1f, float.MaxValue, out distance);
      return distance;
    }

    private bool GetDistanceWithDistanceLimit(
      Vec2 pos1,
      Vec2 pos2,
      PathFaceRecord faceIndex1,
      PathFaceRecord faceIndex2,
      float distanceLimit,
      out float distance)
    {
      if ((double) pos1.DistanceSquared(pos2) <= (double) distanceLimit * (double) distanceLimit)
        return Campaign.Current.MapSceneWrapper.GetPathDistanceBetweenAIFaces(faceIndex1, faceIndex2, pos1, pos2, 0.1f, distanceLimit, out distance);
      distance = float.MaxValue;
      return false;
    }

    public override Settlement GetClosestSettlementForNavigationMesh(PathFaceRecord face)
    {
      Settlement forNavigationMesh;
      if (!this._navigationMeshClosestSettlementCache.TryGetValue(face.FaceIndex, out forNavigationMesh))
      {
        Vec2 meshCenterPosition = Campaign.Current.MapSceneWrapper.GetNavigationMeshCenterPosition(face);
        float num1 = float.MaxValue;
        foreach (Settlement settlement in this._settlementsToConsider)
        {
          float num2 = settlement.GatePosition.DistanceSquared(meshCenterPosition);
          if ((double) num1 > (double) num2)
          {
            num1 = num2;
            forNavigationMesh = settlement;
          }
        }
        this._navigationMeshClosestSettlementCache[face.FaceIndex] = forNavigationMesh;
      }
      return forNavigationMesh;
    }

    private void AddNewPairToDistanceCache((Settlement, Settlement) pair, float distance)
    {
      this._settlementDistanceCache.Add(pair, distance);
      if ((double) distance <= (double) this.MaximumDistanceBetweenTwoSettlements)
        return;
      this.MaximumDistanceBetweenTwoSettlements = distance;
      Campaign.Current.UpdateMaximumDistanceBetweenTwoSettlements();
    }
  }
}
