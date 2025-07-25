// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Settlements.Locations.LocationComplexTemplate
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using System.Xml;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Settlements.Locations
{
  public sealed class LocationComplexTemplate : MBObjectBase
  {
    public List<Location> Locations = new List<Location>();
    public List<KeyValuePair<string, string>> Passages = new List<KeyValuePair<string, string>>();

    public override void Deserialize(MBObjectManager objectManager, XmlNode node)
    {
      List<string> stringList = new List<string>();
      base.Deserialize(objectManager, node);
      foreach (XmlNode childNode1 in node.ChildNodes)
      {
        if (childNode1.Name == "Location")
        {
          if (childNode1.Attributes == null)
            throw new TWXmlLoadException("node.Attributes != null");
          string stringId = childNode1.Attributes["id"].Value;
          TextObject textObject = new TextObject(childNode1.Attributes["name"].Value);
          string[] sceneNames = new string[4]
          {
            childNode1.Attributes["scene_name"] != null ? childNode1.Attributes["scene_name"].Value : "",
            childNode1.Attributes["scene_name_1"] != null ? childNode1.Attributes["scene_name_1"].Value : "",
            childNode1.Attributes["scene_name_2"] != null ? childNode1.Attributes["scene_name_2"].Value : "",
            childNode1.Attributes["scene_name_3"] != null ? childNode1.Attributes["scene_name_3"].Value : ""
          };
          int prosperityMax = int.Parse(childNode1.Attributes["max_prosperity"].Value);
          bool isIndoor = bool.Parse(childNode1.Attributes["indoor"].Value);
          bool canBeReserved = childNode1.Attributes["can_be_reserved"] != null && bool.Parse(childNode1.Attributes["can_be_reserved"].Value);
          string innerText1 = childNode1.Attributes["player_can_enter"].InnerText;
          string innerText2 = childNode1.Attributes["player_can_see"].InnerText;
          string innerText3 = childNode1.Attributes["ai_can_exit"].InnerText;
          string innerText4 = childNode1.Attributes["ai_can_enter"].InnerText;
          stringList.Add(stringId);
          this.Locations.Add(new Location(stringId, textObject, textObject, prosperityMax, isIndoor, canBeReserved, innerText1, innerText2, innerText3, innerText4, sceneNames, (LocationComplex) null));
        }
        if (childNode1.Name == "Passages")
        {
          foreach (XmlNode childNode2 in childNode1.ChildNodes)
          {
            if (childNode2.Name == "Passage")
            {
              if (childNode2.Attributes == null)
                throw new TWXmlLoadException("node.Attributes != null");
              string key = childNode2.Attributes["location_1"].Value;
              if (!stringList.Contains(key))
                throw new TWXmlLoadException("Passage location does not exist with id :" + key);
              string str = childNode2.Attributes["location_2"].Value;
              if (!stringList.Contains(str))
                throw new TWXmlLoadException("Passage location does not exist with id :" + key);
              this.Passages.Add(new KeyValuePair<string, string>(key, str));
            }
          }
        }
      }
    }
  }
}
