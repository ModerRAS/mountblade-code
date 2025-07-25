// Decompiled with JetBrains decompiler
// Type: SandBox.SettlementPositionScript
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using System.IO;
using System.Xml;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class SettlementPositionScript : ScriptComponentBehavior
  {
    public SimpleButton CheckPositions;
    public SimpleButton SavePositions;
    public SimpleButton ComputeAndSaveSettlementDistanceCache;

    private string SettlementsXmlPath
    {
      get => BasePath.Name + this.Scene.GetModulePath().Remove(0, 6) + "ModuleData/settlements.xml";
    }

    private string SettlementsDistanceCacheFilePath
    {
      get
      {
        return BasePath.Name + this.Scene.GetModulePath().Remove(0, 6) + "ModuleData/settlements_distance_cache.bin";
      }
    }

    protected override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      if (variableName == "SavePositions")
        this.SaveSettlementPositions();
      if (variableName == "ComputeAndSaveSettlementDistanceCache")
        this.SaveSettlementDistanceCache();
      if (!(variableName == "CheckPositions"))
        return;
      this.CheckSettlementPositions();
    }

    protected override void OnSceneSave(string saveFolder)
    {
      base.OnSceneSave(saveFolder);
      this.SaveSettlementPositions();
    }

    private void CheckSettlementPositions()
    {
      XmlDocument xmlDocument = this.LoadXmlFile(this.SettlementsXmlPath);
      this.GameEntity.RemoveAllChildren();
      foreach (XmlNode selectNode in xmlDocument.DocumentElement.SelectNodes("Settlement"))
      {
        GameEntity campaignEntityWithName = this.Scene.GetCampaignEntityWithName(selectNode.Attributes["id"].Value);
        Vec3 origin = campaignEntityWithName.GetGlobalFrame().origin;
        Vec3 vec3 = new Vec3();
        List<GameEntity> children = new List<GameEntity>();
        campaignEntityWithName.GetChildrenRecursive(ref children);
        bool flag = false;
        foreach (GameEntity gameEntity in children)
        {
          if (gameEntity.HasTag("main_map_city_gate"))
          {
            vec3 = gameEntity.GetGlobalFrame().origin;
            flag = true;
            break;
          }
        }
        Vec3 pos = origin;
        if (flag)
          pos = vec3;
        PathFaceRecord record = new PathFaceRecord(-1, -1, -1);
        this.GameEntity.Scene.GetNavMeshFaceIndex(ref record, pos.AsVec2, true);
        int num = 0;
        if (record.IsValid())
          num = record.FaceGroupIndex;
        if (num == 0 || num == 7 || num == 8 || num == 10 || num == 11 || num == 13 || num == 14)
        {
          MBEditor.ZoomToPosition(pos);
          break;
        }
      }
    }

    protected override void OnInit()
    {
      try
      {
        Debug.Print("SettlementsDistanceCacheFilePath: " + this.SettlementsDistanceCacheFilePath);
        System.IO.BinaryReader reader = new System.IO.BinaryReader((Stream) File.Open(this.SettlementsDistanceCacheFilePath, FileMode.Open, FileAccess.Read));
        if (Campaign.Current.Models.MapDistanceModel is DefaultMapDistanceModel)
          ((DefaultMapDistanceModel) Campaign.Current.Models.MapDistanceModel).LoadCacheFromFile(reader);
        reader.Close();
      }
      catch
      {
        Debug.FailedAssert("SettlementsDistanceCacheFilePath could not be read!. Cache will be created right now, This may take few minutes!", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\SettlementPositionScript.cs", nameof (OnInit), 165);
        Debug.Print("SettlementsDistanceCacheFilePath could not be read!. Cache will be created right now, This may take few minutes!");
        this.SaveSettlementDistanceCache();
      }
    }

    private List<SettlementPositionScript.SettlementRecord> LoadSettlementData(
      XmlDocument settlementDocument)
    {
      List<SettlementPositionScript.SettlementRecord> settlementRecordList = new List<SettlementPositionScript.SettlementRecord>();
      this.GameEntity.RemoveAllChildren();
      foreach (XmlNode selectNode in settlementDocument.DocumentElement.SelectNodes("Settlement"))
      {
        string settlementName = selectNode.Attributes["name"].Value;
        string str = selectNode.Attributes["id"].Value;
        GameEntity campaignEntityWithName = this.Scene.GetCampaignEntityWithName(str);
        if (!((NativeObject) campaignEntityWithName == (NativeObject) null))
        {
          Vec2 asVec2 = campaignEntityWithName.GetGlobalFrame().origin.AsVec2;
          Vec2 vec2 = new Vec2();
          List<GameEntity> children = new List<GameEntity>();
          campaignEntityWithName.GetChildrenRecursive(ref children);
          bool hasGate = false;
          foreach (GameEntity gameEntity in children)
          {
            if (gameEntity.HasTag("main_map_city_gate"))
            {
              vec2 = gameEntity.GetGlobalFrame().origin.AsVec2;
              hasGate = true;
            }
          }
          settlementRecordList.Add(new SettlementPositionScript.SettlementRecord(settlementName, str, asVec2, hasGate ? vec2 : asVec2, selectNode, hasGate));
        }
      }
      return settlementRecordList;
    }

    private void SaveSettlementPositions()
    {
      XmlDocument settlementDocument = this.LoadXmlFile(this.SettlementsXmlPath);
      foreach (SettlementPositionScript.SettlementRecord settlementRecord in this.LoadSettlementData(settlementDocument))
      {
        if (settlementRecord.Node.Attributes["posX"] == null)
        {
          XmlAttribute attribute = settlementDocument.CreateAttribute("posX");
          settlementRecord.Node.Attributes.Append(attribute);
        }
        settlementRecord.Node.Attributes["posX"].Value = settlementRecord.Position.X.ToString();
        if (settlementRecord.Node.Attributes["posY"] == null)
        {
          XmlAttribute attribute = settlementDocument.CreateAttribute("posY");
          settlementRecord.Node.Attributes.Append(attribute);
        }
        settlementRecord.Node.Attributes["posY"].Value = settlementRecord.Position.Y.ToString();
        if (settlementRecord.HasGate)
        {
          if (settlementRecord.Node.Attributes["gate_posX"] == null)
          {
            XmlAttribute attribute = settlementDocument.CreateAttribute("gate_posX");
            settlementRecord.Node.Attributes.Append(attribute);
          }
          settlementRecord.Node.Attributes["gate_posX"].Value = settlementRecord.GatePosition.X.ToString();
          if (settlementRecord.Node.Attributes["gate_posY"] == null)
          {
            XmlAttribute attribute = settlementDocument.CreateAttribute("gate_posY");
            settlementRecord.Node.Attributes.Append(attribute);
          }
          settlementRecord.Node.Attributes["gate_posY"].Value = settlementRecord.GatePosition.Y.ToString();
        }
      }
      settlementDocument.Save(this.SettlementsXmlPath);
    }

    private void SaveSettlementDistanceCache()
    {
      System.IO.BinaryWriter binaryWriter = (System.IO.BinaryWriter) null;
      try
      {
        List<SettlementPositionScript.SettlementRecord> settlementRecordList = this.LoadSettlementData(this.LoadXmlFile(this.SettlementsXmlPath));
        int indexOfTerrainType1 = MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Mountain);
        int indexOfTerrainType2 = MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Lake);
        int indexOfTerrainType3 = MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Water);
        int indexOfTerrainType4 = MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.River);
        int indexOfTerrainType5 = MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Canyon);
        int indexOfTerrainType6 = MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.RuralArea);
        this.Scene.SetAbilityOfFacesWithId(indexOfTerrainType1, false);
        this.Scene.SetAbilityOfFacesWithId(indexOfTerrainType2, false);
        this.Scene.SetAbilityOfFacesWithId(indexOfTerrainType3, false);
        this.Scene.SetAbilityOfFacesWithId(indexOfTerrainType4, false);
        this.Scene.SetAbilityOfFacesWithId(indexOfTerrainType5, false);
        this.Scene.SetAbilityOfFacesWithId(indexOfTerrainType6, false);
        binaryWriter = new System.IO.BinaryWriter((Stream) File.Open(this.SettlementsDistanceCacheFilePath, FileMode.Create));
        binaryWriter.Write(settlementRecordList.Count);
        for (int index1 = 0; index1 < settlementRecordList.Count; ++index1)
        {
          binaryWriter.Write(settlementRecordList[index1].SettlementId);
          Vec2 gatePosition1 = settlementRecordList[index1].GatePosition;
          PathFaceRecord record1 = new PathFaceRecord(-1, -1, -1);
          this.Scene.GetNavMeshFaceIndex(ref record1, gatePosition1, false);
          for (int index2 = index1 + 1; index2 < settlementRecordList.Count; ++index2)
          {
            binaryWriter.Write(settlementRecordList[index2].SettlementId);
            Vec2 gatePosition2 = settlementRecordList[index2].GatePosition;
            PathFaceRecord record2 = new PathFaceRecord(-1, -1, -1);
            this.Scene.GetNavMeshFaceIndex(ref record2, gatePosition2, false);
            float distance;
            this.Scene.GetPathDistanceBetweenAIFaces(record1.FaceIndex, record2.FaceIndex, gatePosition1, gatePosition2, 0.1f, float.MaxValue, out distance);
            binaryWriter.Write(distance);
          }
        }
        int navMeshFaceCount = this.Scene.GetNavMeshFaceCount();
        for (int index3 = 0; index3 < navMeshFaceCount; ++index3)
        {
          int idOfNavMeshFace = this.Scene.GetIdOfNavMeshFace(index3);
          if (idOfNavMeshFace != indexOfTerrainType1 && idOfNavMeshFace != indexOfTerrainType2 && idOfNavMeshFace != indexOfTerrainType3 && idOfNavMeshFace != indexOfTerrainType4 && idOfNavMeshFace != indexOfTerrainType5 && idOfNavMeshFace != indexOfTerrainType6)
          {
            Vec3 zero = Vec3.Zero;
            this.Scene.GetNavMeshCenterPosition(index3, ref zero);
            Vec2 asVec2 = zero.AsVec2;
            float distanceLimit = float.MaxValue;
            string str = "";
            for (int index4 = 0; index4 < settlementRecordList.Count; ++index4)
            {
              Vec2 gatePosition = settlementRecordList[index4].GatePosition;
              PathFaceRecord record = new PathFaceRecord(-1, -1, -1);
              this.Scene.GetNavMeshFaceIndex(ref record, gatePosition, false);
              float distance;
              if (((double) distanceLimit == 3.4028234663852886E+38 || (double) asVec2.DistanceSquared(gatePosition) < (double) distanceLimit * (double) distanceLimit) && this.Scene.GetPathDistanceBetweenAIFaces(index3, record.FaceIndex, asVec2, gatePosition, 0.1f, distanceLimit, out distance) && (double) distance < (double) distanceLimit)
              {
                distanceLimit = distance;
                str = settlementRecordList[index4].SettlementId;
              }
            }
            if (!string.IsNullOrEmpty(str))
            {
              binaryWriter.Write(index3);
              binaryWriter.Write(str);
            }
          }
        }
        binaryWriter.Write(-1);
      }
      catch
      {
      }
      finally
      {
        this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Mountain), true);
        this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Lake), true);
        this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Water), true);
        this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.River), true);
        this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.Canyon), true);
        this.Scene.SetAbilityOfFacesWithId(MapScene.GetNavigationMeshIndexOfTerrainType(TerrainType.RuralArea), true);
        binaryWriter?.Close();
      }
    }

    private XmlDocument LoadXmlFile(string path)
    {
      Debug.Print("opening " + path);
      XmlDocument xmlDocument = new XmlDocument();
      StreamReader streamReader = new StreamReader(path);
      xmlDocument.LoadXml(streamReader.ReadToEnd());
      streamReader.Close();
      return xmlDocument;
    }

    protected override bool IsOnlyVisual() => true;

    private struct SettlementRecord
    {
      public readonly string SettlementName;
      public readonly string SettlementId;
      public readonly XmlNode Node;
      public readonly Vec2 Position;
      public readonly Vec2 GatePosition;
      public readonly bool HasGate;

      public SettlementRecord(
        string settlementName,
        string settlementId,
        Vec2 position,
        Vec2 gatePosition,
        XmlNode node,
        bool hasGate)
      {
        this.SettlementName = settlementName;
        this.SettlementId = settlementId;
        this.Position = position;
        this.GatePosition = gatePosition;
        this.Node = node;
        this.HasGate = hasGate;
      }
    }
  }
}
