// Decompiled with JetBrains decompiler
// Type: SandBox.SettlementVisualizer
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

#nullable disable
namespace SandBox
{
  public class SettlementVisualizer : ScriptComponentBehavior
  {
    public SimpleButton ReloadXML;
    public SimpleButton SaveXML;
    public SimpleButton SnapToTerrain;
    public SimpleButton CheckNavMesh;
    public bool renderSettlementName;
    public float translateScale = 1f;
    private XmlDocument _doc;
    private List<SettlementVisualizer.SettlementInstance> _settlementDatas;
    private const string settlemensXmlPath = "/Modules/SandBox/ModuleData/settlements.xml";

    private void CheckNavMeshAux()
    {
      if (this._settlementDatas == null)
        return;
      foreach (SettlementVisualizer.SettlementInstance settlementData in this._settlementDatas)
      {
        MatrixFrame globalFrame = settlementData.ChildEntity.GetGlobalFrame();
        PathFaceRecord nullFaceRecord = PathFaceRecord.NullFaceRecord;
        this.GameEntity.Scene.GetNavMeshFaceIndex(ref nullFaceRecord, globalFrame.origin.AsVec2, false);
        if (nullFaceRecord.FaceIndex == -1)
          Debug.Print("Settlement(" + settlementData.SettlementName + ") has no nav mesh under");
      }
    }

    private void SnapToTerrainAux()
    {
      foreach (SettlementVisualizer.SettlementInstance settlementData in this._settlementDatas)
      {
        MatrixFrame frame = settlementData.ChildEntity.GetGlobalFrame();
        float height = 0.0f;
        settlementData.ChildEntity.Scene.GetHeightAtPoint(frame.origin.AsVec2, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
        frame.origin.z = height;
        settlementData.ChildEntity.SetGlobalFrame(in frame);
        settlementData.ChildEntity.UpdateTriadFrameForEditor();
      }
    }

    protected override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      switch (variableName)
      {
        case "ReloadXML":
          this.LoadFromXml();
          break;
        case "SnapToTerrain":
          this.SnapToTerrainAux();
          break;
        case "translateScale":
          this.RepositionAfterScale();
          break;
        case "CheckNavMesh":
          this.CheckNavMeshAux();
          break;
      }
    }

    private void RepositionAfterScale()
    {
      foreach (SettlementVisualizer.SettlementInstance settlementData in this._settlementDatas)
      {
        MatrixFrame frame = settlementData.ChildEntity.GetGlobalFrame();
        Vec2 vec2 = settlementData.OriginalPosition * this.translateScale;
        frame.origin.x = vec2.x;
        frame.origin.y = vec2.y;
        float height = 0.0f;
        settlementData.ChildEntity.Scene.GetHeightAtPoint(frame.origin.AsVec2, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
        frame.origin.z = height;
        settlementData.ChildEntity.SetGlobalFrame(in frame);
        settlementData.ChildEntity.UpdateTriadFrameForEditor();
      }
    }

    private void LoadFromXml()
    {
      this._settlementDatas = new List<SettlementVisualizer.SettlementInstance>();
      this._doc = this.LoadXmlFile(BasePath.Name + "/Modules/SandBox/ModuleData/settlements.xml");
      this.GameEntity.RemoveAllChildren();
      foreach (XmlNode selectNode in this._doc.DocumentElement.SelectNodes("Settlement"))
      {
        if (selectNode.Attributes["posX"] != null && selectNode.Attributes["posY"] != null)
        {
          GameEntity empty = GameEntity.CreateEmpty(this.GameEntity.Scene);
          MatrixFrame frame = empty.GetGlobalFrame();
          Vec2 vec2 = new Vec2((float) Convert.ToDouble(selectNode.Attributes["posX"].Value), (float) Convert.ToDouble(selectNode.Attributes["posY"].Value));
          string settlementName = selectNode.Attributes["name"].Value;
          empty.Name = settlementName;
          float height = 0.0f;
          this.GameEntity.Scene.GetHeightAtPoint(vec2, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
          frame.origin = new Vec3(vec2, height);
          if (selectNode.Attributes["culture"] != null)
          {
            string str = selectNode.Attributes["culture"].Value;
            str.Substring(str.IndexOf('.') + 1);
            MetaMesh metaMesh = (MetaMesh) null;
            empty.SetGlobalFrame(in frame);
            empty.EntityFlags |= EntityFlags.DontSaveToScene;
            this.GameEntity.AddChild(empty, true);
            empty.GetGlobalFrame();
            empty.UpdateTriadFrameForEditor();
            this._settlementDatas.Add(new SettlementVisualizer.SettlementInstance(empty, selectNode, settlementName, vec2));
            if ((NativeObject) metaMesh != (NativeObject) null)
              empty.AddMultiMesh(metaMesh);
            else
              empty.AddMultiMesh(MetaMesh.GetCopy("map_icon_bandit_hideout_a"));
          }
          else
            empty.AddMultiMesh(MetaMesh.GetCopy("map_icon_bandit_hideout_a"));
        }
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

    protected override void OnEditorTick(float dt)
    {
      if (Input.IsKeyDown(InputKey.LeftAlt) && Input.IsKeyDown(InputKey.LeftControl) && Input.IsKeyPressed(InputKey.A))
        this.SnapToTerrainAux();
      if (!this.renderSettlementName || this._settlementDatas == null)
        return;
      foreach (SettlementVisualizer.SettlementInstance settlementData in this._settlementDatas)
        settlementData.ChildEntity.GetGlobalFrame().origin.z += 1.5f;
    }

    protected override bool IsOnlyVisual() => true;

    private class SettlementInstance
    {
      public GameEntity ChildEntity;
      public string SettlementName;
      public XmlNode Node;
      public Vec2 OriginalPosition;

      public SettlementInstance(
        GameEntity childEntity,
        XmlNode node,
        string settlementName,
        Vec2 originalPosition)
      {
        this.ChildEntity = childEntity;
        this.Node = node;
        this.SettlementName = settlementName;
        this.OriginalPosition = originalPosition;
      }
    }
  }
}
