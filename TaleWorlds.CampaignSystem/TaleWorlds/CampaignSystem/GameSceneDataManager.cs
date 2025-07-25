// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameSceneDataManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class GameSceneDataManager
  {
    private MBList<SingleplayerBattleSceneData> _singleplayerBattleScenes;
    private MBList<ConversationSceneData> _conversationScenes;
    private MBList<MeetingSceneData> _meetingScenes;
    private const TerrainType DefaultTerrain = TerrainType.Plain;
    private const ForestDensity DefaultForestDensity = ForestDensity.None;

    public static GameSceneDataManager Instance { get; private set; }

    public MBReadOnlyList<SingleplayerBattleSceneData> SingleplayerBattleScenes
    {
      get => (MBReadOnlyList<SingleplayerBattleSceneData>) this._singleplayerBattleScenes;
    }

    public MBReadOnlyList<ConversationSceneData> ConversationScenes
    {
      get => (MBReadOnlyList<ConversationSceneData>) this._conversationScenes;
    }

    public MBReadOnlyList<MeetingSceneData> MeetingScenes
    {
      get => (MBReadOnlyList<MeetingSceneData>) this._meetingScenes;
    }

    public GameSceneDataManager()
    {
      this._singleplayerBattleScenes = new MBList<SingleplayerBattleSceneData>();
      this._conversationScenes = new MBList<ConversationSceneData>();
      this._meetingScenes = new MBList<MeetingSceneData>();
    }

    internal static void Initialize() => GameSceneDataManager.Instance = new GameSceneDataManager();

    internal static void Destroy() => GameSceneDataManager.Instance = (GameSceneDataManager) null;

    public void LoadSPBattleScenes(string path) => this.LoadSPBattleScenes(this.LoadXmlFile(path));

    public void LoadConversationScenes(string path)
    {
      this.LoadConversationScenes(this.LoadXmlFile(path));
    }

    public void LoadMeetingScenes(string path) => this.LoadMeetingScenes(this.LoadXmlFile(path));

    private XmlDocument LoadXmlFile(string path)
    {
      Debug.Print("opening " + path);
      XmlDocument xmlDocument = new XmlDocument();
      StreamReader streamReader = new StreamReader(path);
      xmlDocument.LoadXml(streamReader.ReadToEnd());
      streamReader.Close();
      return xmlDocument;
    }

    private void LoadSPBattleScenes(XmlDocument doc)
    {
      this._singleplayerBattleScenes.Clear();
      Debug.Print("loading sp_battles.xml");
      if (doc.ChildNodes.Count <= 1)
        throw new TWXmlLoadException("Incorrect XML document format. XML document must have at least 2 child nodes.");
      XmlNode childNode1 = doc.ChildNodes[1];
      if (childNode1.Name != "SPBattleScenes")
        throw new TWXmlLoadException("Incorrect XML document format. Root node's name must be SPBattleScenes.");
      if (!(childNode1.Name == "SPBattleScenes"))
        return;
      foreach (XmlNode childNode2 in childNode1.ChildNodes)
      {
        if (childNode2.NodeType != XmlNodeType.Comment)
        {
          string sceneID = (string) null;
          List<int> mapIndices = new List<int>();
          TerrainType result1 = TerrainType.Plain;
          ForestDensity result2 = ForestDensity.None;
          for (int i = 0; i < childNode2.Attributes.Count; ++i)
          {
            if (childNode2.Attributes[i].Name == "id")
              sceneID = childNode2.Attributes[i].InnerText;
            else if (childNode2.Attributes[i].Name == "map_indices")
            {
              string str = childNode2.Attributes[i].InnerText.Replace(" ", "");
              char[] chArray = new char[1]{ ',' };
              foreach (string s in str.Split(chArray))
                mapIndices.Add(int.Parse(s));
            }
            else if (childNode2.Attributes[i].Name == "terrain")
            {
              if (!Enum.TryParse<TerrainType>(childNode2.Attributes[i].InnerText, out result1))
                result1 = TerrainType.Plain;
            }
            else if (childNode2.Attributes[i].Name == "forest_density")
            {
              char[] charArray = childNode2.Attributes[i].InnerText.ToLower().ToCharArray();
              charArray[0] = char.ToUpper(charArray[0]);
              if (!Enum.TryParse<ForestDensity>(new string(charArray), out result2))
                result2 = ForestDensity.None;
            }
          }
          XmlNodeList childNodes = childNode2.ChildNodes;
          List<TerrainType> terrainTypes = new List<TerrainType>();
          foreach (XmlNode xmlNode in childNodes)
          {
            if (xmlNode.NodeType != XmlNodeType.Comment && xmlNode.Name == "TerrainTypes")
            {
              foreach (XmlNode childNode3 in xmlNode.ChildNodes)
              {
                TerrainType result3;
                if (childNode3.Name == "TerrainType" && Enum.TryParse<TerrainType>(childNode3.Attributes["name"].InnerText, out result3) && !terrainTypes.Contains(result3))
                  terrainTypes.Add(result3);
              }
            }
          }
          this._singleplayerBattleScenes.Add(new SingleplayerBattleSceneData(sceneID, result1, terrainTypes, result2, mapIndices));
        }
      }
    }

    private void LoadConversationScenes(XmlDocument doc)
    {
      Debug.Print("loading conversation_scenes.xml");
      if (doc.ChildNodes.Count <= 1)
        throw new TWXmlLoadException("Incorrect XML document format. XML document must have at least 2 child nodes.");
      XmlNode childNode1 = doc.ChildNodes[1];
      if (childNode1.Name != "ConversationScenes")
        throw new TWXmlLoadException("Incorrect XML document format. Root node's name must be ConversationScenes.");
      if (!(childNode1.Name == "ConversationScenes"))
        return;
      foreach (XmlNode childNode2 in childNode1.ChildNodes)
      {
        if (childNode2.NodeType != XmlNodeType.Comment)
        {
          string sceneID = (string) null;
          TerrainType result1 = TerrainType.Plain;
          ForestDensity result2 = ForestDensity.None;
          for (int i = 0; i < childNode2.Attributes.Count; ++i)
          {
            if (childNode2.Attributes[i].Name == "id")
              sceneID = childNode2.Attributes[i].InnerText;
            else if (childNode2.Attributes[i].Name == "terrain")
            {
              if (!Enum.TryParse<TerrainType>(childNode2.Attributes[i].InnerText, out result1))
                result1 = TerrainType.Plain;
            }
            else if (childNode2.Attributes[i].Name == "forest_density")
            {
              char[] charArray = childNode2.Attributes[i].InnerText.ToLower().ToCharArray();
              charArray[0] = char.ToUpper(charArray[0]);
              if (!Enum.TryParse<ForestDensity>(new string(charArray), out result2))
                result2 = ForestDensity.None;
            }
          }
          XmlNodeList childNodes = childNode2.ChildNodes;
          List<TerrainType> terrainTypes = new List<TerrainType>();
          foreach (XmlNode xmlNode in childNodes)
          {
            if (xmlNode.NodeType != XmlNodeType.Comment && xmlNode.Name == "flags")
            {
              foreach (XmlNode childNode3 in xmlNode.ChildNodes)
              {
                TerrainType result3;
                if (childNode3.NodeType != XmlNodeType.Comment && childNode3.Attributes["name"].InnerText == "TerrainType" && Enum.TryParse<TerrainType>(childNode3.Attributes["value"].InnerText, out result3) && !terrainTypes.Contains(result3))
                  terrainTypes.Add(result3);
              }
            }
          }
          this._conversationScenes.Add(new ConversationSceneData(sceneID, result1, terrainTypes, result2));
        }
      }
    }

    private void LoadMeetingScenes(XmlDocument doc)
    {
      Debug.Print("loading meeting_scenes.xml");
      if (doc.ChildNodes.Count <= 1)
        throw new TWXmlLoadException("Incorrect XML document format. XML document must have at least 2 child nodes.");
      XmlNode childNode1 = doc.ChildNodes[1];
      if (childNode1.Name != "MeetingScenes")
        throw new TWXmlLoadException("Incorrect XML document format. Root node's name must be MeetingScenes.");
      if (!(childNode1.Name == "MeetingScenes"))
        return;
      foreach (XmlNode childNode2 in childNode1.ChildNodes)
      {
        if (childNode2.NodeType != XmlNodeType.Comment)
        {
          string sceneID = (string) null;
          string cultureString = (string) null;
          for (int i = 0; i < childNode2.Attributes.Count; ++i)
          {
            if (childNode2.Attributes[i].Name == "id")
              sceneID = childNode2.Attributes[i].InnerText;
            if (childNode2.Attributes[i].Name == "culture")
              cultureString = childNode2.Attributes[i].InnerText.Split('.')[1];
          }
          this._meetingScenes.Add(new MeetingSceneData(sceneID, cultureString));
        }
      }
    }
  }
}
