// Decompiled with JetBrains decompiler
// Type: SandBox.MultiplayerItemTestMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using System.IO;
using System.Xml;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class MultiplayerItemTestMissionController : MissionLogic
  {
    private Agent mainAgent;
    private BasicCultureObject _culture;
    private List<BasicCharacterObject> _troops = new List<BasicCharacterObject>();
    private const float HorizontalGap = 3f;
    private const float VerticalGap = 3f;
    private Vec3 _coordinate = new Vec3(200f, 200f);
    private int _mapHorizontalEndCoordinate = 800;
    private static bool _initializeFlag;

    public MultiplayerItemTestMissionController(BasicCultureObject culture)
    {
      this._culture = culture;
      if (MultiplayerItemTestMissionController._initializeFlag)
        return;
      Game.Current.ObjectManager.LoadXML("MPCharacters");
      MultiplayerItemTestMissionController._initializeFlag = true;
    }

    public override void AfterStart()
    {
      this.GetAllTroops();
      this.SpawnMainAgent();
      this.SpawnMultiplayerTroops();
    }

    private void SpawnMultiplayerTroops()
    {
      foreach (BasicCharacterObject troop in this._troops)
      {
        Vec3 position;
        Vec2 direction;
        this.GetNextSpawnFrame(out position, out direction);
        foreach (Equipment allEquipment in (List<Equipment>) troop.AllEquipments)
        {
          this.Mission.SpawnAgent(new AgentBuildData((IAgentOriginBase) new BasicBattleAgentOrigin(troop)).Equipment(allEquipment).InitialPosition(in position).InitialDirection(in direction));
          position += new Vec3(y: 2f);
        }
      }
    }

    private void GetNextSpawnFrame(out Vec3 position, out Vec2 direction)
    {
      this._coordinate += new Vec3(3f);
      if ((double) this._coordinate.x > (double) this._mapHorizontalEndCoordinate)
      {
        this._coordinate.x = 3f;
        this._coordinate.y += 3f;
      }
      position = this._coordinate;
      direction = new Vec2(0.0f, -1f);
    }

    private XmlDocument LoadXmlFile(string path)
    {
      Debug.Print("opening " + path);
      XmlDocument xmlDocument = new XmlDocument();
      xmlDocument.LoadXml(new StreamReader(path).ReadToEnd());
      return xmlDocument;
    }

    private void SpawnMainAgent()
    {
      if (this.mainAgent != null && this.mainAgent.State == AgentState.Active)
        return;
      this.mainAgent = this.Mission.SpawnAgent(new AgentBuildData((IAgentOriginBase) new BasicBattleAgentOrigin(Game.Current.ObjectManager.GetObject<BasicCharacterObject>("main_hero"))).Team(this.Mission.DefenderTeam).InitialPosition(new Vec3(200f + (float) MBRandom.RandomInt(15), 200f + (float) MBRandom.RandomInt(15), 1f)).InitialDirection(in Vec2.Forward).Controller(Agent.ControllerType.Player));
    }

    private void GetAllTroops()
    {
      foreach (XmlNode selectNode in this.LoadXmlFile(BasePath.Name + "/Modules/Native/ModuleData/mpcharacters.xml").DocumentElement.SelectNodes("NPCCharacter"))
      {
        if (selectNode.Attributes?["occupation"] != null && selectNode.Attributes["occupation"].InnerText == "Soldier")
        {
          BasicCharacterObject basicCharacterObject = Game.Current.ObjectManager.GetObject<BasicCharacterObject>(selectNode.Attributes["id"].InnerText);
          if (basicCharacterObject != null && basicCharacterObject.Culture == this._culture)
            this._troops.Add(basicCharacterObject);
        }
      }
    }
  }
}
