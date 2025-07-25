// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.InstrumentData
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Xml;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Objects
{
  public class InstrumentData : MBObjectBase
  {
    private MBList<(HumanBone, string)> _instrumentEntities;

    public MBReadOnlyList<(HumanBone, string)> InstrumentEntities
    {
      get => (MBReadOnlyList<(HumanBone, string)>) this._instrumentEntities;
    }

    public string SittingAction { get; private set; }

    public string StandingAction { get; private set; }

    public string Tag { get; private set; }

    public bool IsDataWithoutInstrument { get; private set; }

    public InstrumentData()
    {
    }

    public InstrumentData(string stringId)
      : base(stringId)
    {
    }

    public void InitializeInstrumentData(
      string sittingAction,
      string standingAction,
      bool isDataWithoutInstrument)
    {
      this.SittingAction = sittingAction;
      this.StandingAction = standingAction;
      this._instrumentEntities = new MBList<(HumanBone, string)>(0);
      this.IsDataWithoutInstrument = isDataWithoutInstrument;
      this.Tag = string.Empty;
    }

    public override void Deserialize(MBObjectManager objectManager, XmlNode node)
    {
      base.Deserialize(objectManager, node);
      this.SittingAction = Convert.ToString(node.Attributes["sittingAction"].Value);
      this.StandingAction = Convert.ToString(node.Attributes["standingAction"].Value);
      this.Tag = Convert.ToString(node.Attributes["tag"]?.Value);
      this._instrumentEntities = new MBList<(HumanBone, string)>();
      if (node.HasChildNodes)
      {
        foreach (XmlNode childNode1 in node.ChildNodes)
        {
          if (childNode1.Name == "Entities")
          {
            foreach (XmlNode childNode2 in childNode1.ChildNodes)
            {
              if (childNode2.Name == "Entity")
              {
                if (childNode2.Attributes?["name"] != null && childNode2.Attributes["bone"] != null)
                {
                  string str = Convert.ToString(childNode2.Attributes["name"].Value);
                  HumanBone result;
                  if (Enum.TryParse<HumanBone>(childNode2.Attributes["bone"].Value, out result))
                    this._instrumentEntities.Add((result, str));
                  else
                    Debug.FailedAssert("Couldn't parse bone xml node for instrument.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Objects\\InstrumentData.cs", nameof (Deserialize), 62);
                }
                else
                  Debug.FailedAssert("Couldn't find required attributes of entity xml node in Instrument", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Objects\\InstrumentData.cs", nameof (Deserialize), 67);
              }
            }
          }
        }
      }
      this._instrumentEntities.Capacity = this._instrumentEntities.Count;
    }
  }
}
