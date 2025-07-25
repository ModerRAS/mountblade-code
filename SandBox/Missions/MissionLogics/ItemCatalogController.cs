// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.ItemCatalogController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.IO;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class ItemCatalogController : MissionLogic
  {
    private Campaign _campaign;
    private Game _game;
    private Agent _playerAgent;
    private int curItemIndex = 1;
    private Timer timer;

    public MBReadOnlyList<ItemObject> AllItems { get; private set; }

    public ItemCatalogController()
    {
      this._campaign = Campaign.Current;
      this._game = Game.Current;
      this.timer = new Timer(this.Mission.CurrentTime, 1f);
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.Mission.SetMissionMode(MissionMode.Battle, true);
      this.AllItems = Game.Current.ObjectManager.GetObjectTypeList<ItemObject>();
      if (!this._campaign.IsInitializedSinglePlayerReferences)
        this._campaign.InitializeSinglePlayerReferences();
      CharacterObject playerCharacter = CharacterObject.PlayerCharacter;
      MobileParty.MainParty.MemberRoster.AddToCounts(playerCharacter, 1);
      if (!this.Mission.Teams.IsEmpty<Team>())
        throw new MBIllegalValueException("Number of teams is not 0.");
      this.Mission.Teams.Add(BattleSideEnum.Defender, 4284776512U);
      this.Mission.Teams.Add(BattleSideEnum.Attacker, 4281877080U);
      this.Mission.PlayerTeam = this.Mission.AttackerTeam;
      EquipmentElement equipmentElement1 = playerCharacter.Equipment[0];
      EquipmentElement equipmentElement2 = playerCharacter.Equipment[1];
      EquipmentElement equipmentElement3 = playerCharacter.Equipment[2];
      EquipmentElement equipmentElement4 = playerCharacter.Equipment[3];
      EquipmentElement equipmentElement5 = playerCharacter.Equipment[4];
      playerCharacter.Equipment[0] = equipmentElement1;
      playerCharacter.Equipment[1] = equipmentElement2;
      playerCharacter.Equipment[2] = equipmentElement3;
      playerCharacter.Equipment[3] = equipmentElement4;
      playerCharacter.Equipment[4] = equipmentElement5;
      ItemObject allItem = this.AllItems[0];
      Equipment equipment = new Equipment();
      equipment.AddEquipmentToSlotWithoutAgent(this.GetEquipmentIndexOfItem(allItem), new EquipmentElement(this.AllItems[0]));
      AgentBuildData agentBuildData = new AgentBuildData((BasicCharacterObject) playerCharacter);
      agentBuildData.Equipment(equipment);
      this._playerAgent = this.Mission.SpawnAgent(agentBuildData.Team(this.Mission.AttackerTeam).InitialPosition(new Vec3(15f, 12f, 1f)).InitialDirection(in Vec2.Forward).Controller(Agent.ControllerType.Player));
      this._playerAgent.WieldInitialWeapons();
      this._playerAgent.Health = 10000f;
    }

    private EquipmentIndex GetEquipmentIndexOfItem(ItemObject item)
    {
      if (item.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.DropOnWeaponChange | ItemFlags.DropOnAnyAction))
        return EquipmentIndex.ExtraWeaponSlot;
      switch (item.ItemType)
      {
        case ItemObject.ItemTypeEnum.Horse:
          return EquipmentIndex.ArmorItemEndSlot;
        case ItemObject.ItemTypeEnum.OneHandedWeapon:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.TwoHandedWeapon:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Polearm:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Arrows:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Bolts:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Shield:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Bow:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Crossbow:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Thrown:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.HeadArmor:
          return EquipmentIndex.NumAllWeaponSlots;
        case ItemObject.ItemTypeEnum.BodyArmor:
          return EquipmentIndex.Body;
        case ItemObject.ItemTypeEnum.LegArmor:
          return EquipmentIndex.Leg;
        case ItemObject.ItemTypeEnum.HandArmor:
          return EquipmentIndex.Gloves;
        case ItemObject.ItemTypeEnum.Pistol:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Musket:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Bullets:
          return EquipmentIndex.WeaponItemBeginSlot;
        case ItemObject.ItemTypeEnum.Animal:
          return EquipmentIndex.ArmorItemEndSlot;
        case ItemObject.ItemTypeEnum.Cape:
          return EquipmentIndex.Cape;
        case ItemObject.ItemTypeEnum.HorseHarness:
          return EquipmentIndex.HorseHarness;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\ItemCatalogController.cs", nameof (GetEquipmentIndexOfItem), 147);
          return EquipmentIndex.None;
      }
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (!this.timer.Check(this.Mission.CurrentTime))
        return;
      if (!Directory.Exists("ItemCatalog"))
        Directory.CreateDirectory("ItemCatalog");
      ItemCatalogController.BeforeCatalogTickDelegate beforeCatalogTick = this.BeforeCatalogTick;
      if (beforeCatalogTick != null)
        beforeCatalogTick(this.curItemIndex);
      this.timer.Reset(this.Mission.CurrentTime);
      MatrixFrame frame = new MatrixFrame();
      frame.origin = new Vec3(10000f, 10000f, 10000f);
      this._playerAgent.AgentVisuals.SetFrame(ref frame);
      this._playerAgent.TeleportToPosition(frame.origin);
      this._playerAgent.Die(new Blow(this._playerAgent.Index)
      {
        DamageType = DamageTypes.Blunt,
        BaseMagnitude = 1E+09f,
        GlobalPosition = this._playerAgent.Position
      }, Agent.KillInfo.Backstabbed);
      this._playerAgent = (Agent) null;
      for (int index = this.Mission.Agents.Count - 1; index >= 0; --index)
      {
        Agent agent = this.Mission.Agents[index];
        Blow b = new Blow(agent.Index)
        {
          DamageType = DamageTypes.Blunt,
          BaseMagnitude = 1E+09f,
          GlobalPosition = agent.Position
        };
        agent.TeleportToPosition(frame.origin);
        agent.Die(b, Agent.KillInfo.Backstabbed);
      }
      ItemObject allItem = this.AllItems[this.curItemIndex];
      Equipment equipment = new Equipment();
      equipment.AddEquipmentToSlotWithoutAgent(this.GetEquipmentIndexOfItem(allItem), new EquipmentElement(allItem));
      AgentBuildData agentBuildData = new AgentBuildData(this._game.PlayerTroop);
      agentBuildData.Equipment(equipment);
      this._playerAgent = this.Mission.SpawnAgent(agentBuildData.Team(this.Mission.AttackerTeam).InitialPosition(new Vec3(15f, 12f, 1f)).InitialDirection(in Vec2.Forward).Controller(Agent.ControllerType.Player));
      this._playerAgent.WieldInitialWeapons();
      this._playerAgent.Health = 10000f;
      Action afterCatalogTick = this.AfterCatalogTick;
      if (afterCatalogTick != null)
        afterCatalogTick();
      ++this.curItemIndex;
    }

    public event ItemCatalogController.BeforeCatalogTickDelegate BeforeCatalogTick;

    public event Action AfterCatalogTick;

    public delegate void BeforeCatalogTickDelegate(int currentItemIndex);
  }
}
