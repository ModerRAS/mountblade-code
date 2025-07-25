// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.SettlementMusicData
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Xml;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Objects
{
  public class SettlementMusicData : MBObjectBase
  {
    private MBList<InstrumentData> _instruments;

    public string MusicPath { get; private set; }

    public CultureObject Culture { get; private set; }

    public MBReadOnlyList<InstrumentData> Instruments
    {
      get => (MBReadOnlyList<InstrumentData>) this._instruments;
    }

    public string LocationId { get; private set; }

    public int Tempo { get; private set; }

    public override void Deserialize(MBObjectManager objectManager, XmlNode node)
    {
      base.Deserialize(objectManager, node);
      this.MusicPath = Convert.ToString(node.Attributes["event_id"].Value);
      this.Culture = Game.Current.ObjectManager.ReadObjectReferenceFromXml<CultureObject>("culture", node);
      this.LocationId = Convert.ToString(node.Attributes["location"].Value);
      this.Tempo = Convert.ToInt32(node.Attributes["tempo"].Value);
      this._instruments = new MBList<InstrumentData>();
      if (node.HasChildNodes)
      {
        foreach (XmlNode childNode1 in node.ChildNodes)
        {
          if (childNode1.Name == "Instruments")
          {
            foreach (XmlNode childNode2 in childNode1.ChildNodes)
            {
              if (childNode2.Name == "Instrument")
              {
                if (childNode2.Attributes?["id"] != null)
                {
                  InstrumentData instrumentData = MBObjectManager.Instance.GetObject<InstrumentData>(Convert.ToString(childNode2.Attributes["id"].Value));
                  if (instrumentData != null)
                    this._instruments.Add(instrumentData);
                }
                else
                  Debug.FailedAssert("Couldn't find required attributes of instrument xml node in Track", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Objects\\SettlementMusicData.cs", nameof (Deserialize), 57);
              }
            }
          }
        }
      }
      this._instruments.Capacity = this._instruments.Count;
    }
  }
}
