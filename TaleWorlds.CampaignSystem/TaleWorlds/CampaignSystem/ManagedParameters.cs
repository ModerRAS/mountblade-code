// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ManagedParameters
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.IO;
using System.Xml;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public sealed class ManagedParameters : IManagedParametersInitializer
  {
    private readonly bool[] _managedParametersArray = new bool[2];

    public static ManagedParameters Instance { get; } = new ManagedParameters();

    public void Initialize(string relativeXmlPath)
    {
      this.LoadFromXml((XmlNode) ManagedParameters.LoadXmlFile(relativeXmlPath));
    }

    private void LoadFromXml(XmlNode doc)
    {
      XmlNode xmlNode = (XmlNode) null;
      if (doc.ChildNodes[1].ChildNodes[0].Name == "managed_campaign_parameters")
        xmlNode = doc.ChildNodes[1].ChildNodes[0].ChildNodes[0];
      for (; xmlNode != null; xmlNode = xmlNode.NextSibling)
      {
        ManagedParametersEnum result;
        if (xmlNode.Name == "managed_campaign_parameter" && xmlNode.NodeType != XmlNodeType.Comment && Enum.TryParse<ManagedParametersEnum>(xmlNode.Attributes["id"].Value, true, out result))
          this._managedParametersArray[(int) result] = bool.Parse(xmlNode.Attributes["value"].Value);
      }
    }

    private static XmlDocument LoadXmlFile(string path)
    {
      Debug.Print("opening " + path);
      XmlDocument xmlDocument = new XmlDocument();
      StreamReader streamReader = new StreamReader(path);
      xmlDocument.LoadXml(streamReader.ReadToEnd());
      streamReader.Close();
      return xmlDocument;
    }

    public bool GetManagedParameter(ManagedParametersEnum _managedParametersEnum)
    {
      return this._managedParametersArray[(int) _managedParametersEnum];
    }

    public bool SetManagedParameter(ManagedParametersEnum _managedParametersEnum, bool value)
    {
      return this._managedParametersArray[(int) _managedParametersEnum] = value;
    }
  }
}
