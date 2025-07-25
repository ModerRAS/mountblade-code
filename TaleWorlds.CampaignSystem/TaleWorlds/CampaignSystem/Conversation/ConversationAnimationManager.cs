// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.ConversationAnimationManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using System.IO;
using System.Xml;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation
{
  public class ConversationAnimationManager
  {
    public Dictionary<string, ConversationAnimData> ConversationAnims { get; private set; }

    public ConversationAnimationManager()
    {
      this.ConversationAnims = new Dictionary<string, ConversationAnimData>();
      this.LoadConversationAnimData(ModuleHelper.GetModuleFullPath("Sandbox") + "ModuleData/conversation_animations.xml");
    }

    private void LoadConversationAnimData(string xmlPath)
    {
      this.LoadFromXml(this.LoadXmlFile(xmlPath));
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

    private void LoadFromXml(XmlDocument doc)
    {
      if (doc.ChildNodes.Count <= 1)
        throw new TWXmlLoadException("Incorrect XML document format.");
      if (doc.ChildNodes[1].Name != "ConversationAnimations")
        throw new TWXmlLoadException("Incorrect XML document format.");
      foreach (XmlNode selectNode in doc.DocumentElement.SelectNodes("IdleAnim"))
      {
        if (selectNode.Attributes != null)
        {
          KeyValuePair<string, ConversationAnimData> keyValuePair = new KeyValuePair<string, ConversationAnimData>(selectNode.Attributes["id"].Value, new ConversationAnimData());
          keyValuePair.Value.IdleAnimStart = selectNode.Attributes["action_id_1"].Value;
          keyValuePair.Value.IdleAnimLoop = selectNode.Attributes["action_id_2"].Value;
          keyValuePair.Value.FamilyType = 0;
          XmlAttribute attribute1 = selectNode.Attributes["family_type"];
          int result1;
          if (attribute1 != null && !string.IsNullOrEmpty(attribute1.Value) && int.TryParse(attribute1.Value, out result1))
            keyValuePair.Value.FamilyType = result1;
          keyValuePair.Value.MountFamilyType = 0;
          XmlAttribute attribute2 = selectNode.Attributes["mount_family_type"];
          int result2;
          if (attribute2 != null && !string.IsNullOrEmpty(attribute2.Value) && int.TryParse(attribute2.Value, out result2))
            keyValuePair.Value.MountFamilyType = result2;
          foreach (XmlNode childNode1 in selectNode.ChildNodes)
          {
            if (childNode1.Name == "Reactions")
            {
              foreach (XmlNode childNode2 in childNode1.ChildNodes)
              {
                if (childNode2.Name == "Reaction" && childNode2.Attributes["id"] != null && childNode2.Attributes["action_id"] != null)
                  keyValuePair.Value.Reactions.Add(childNode2.Attributes["id"].Value, childNode2.Attributes["action_id"].Value);
              }
            }
          }
          this.ConversationAnims.Add(keyValuePair.Key, keyValuePair.Value);
        }
      }
    }
  }
}
