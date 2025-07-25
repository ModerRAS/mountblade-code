// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionEquipItemToolView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionEquipItemToolView : MissionView
  {
    private string str = "";
    private int _itemCulture;
    private bool[] _filters = new bool[17];
    private bool _genderSet;
    private Agent _mainAgent;
    private List<ItemObject> _allItemObjects = new List<ItemObject>();
    private List<MissionEquipItemToolView.ItemData> _allItems = new List<MissionEquipItemToolView.ItemData>();
    private List<MissionEquipItemToolView.ItemData> _currentItems = new List<MissionEquipItemToolView.ItemData>();
    private List<Tuple<int, int, int, int>> _currentArmorValues = new List<Tuple<int, int, int, int>>();
    private List<CultureObject> _allFactions = new List<CultureObject>();
    private List<CharacterObject> _allCharacters = new List<CharacterObject>();
    private List<FormationClass> _groups = new List<FormationClass>();
    private int _activeIndex = -1;
    private int _factionIndex;
    private int _groupIndex;
    private XmlDocument _charactersXml;
    private List<XmlDocument> _itemsXmls;
    private string[] _attributes = new string[6]
    {
      "id",
      "name",
      "level",
      "occupation",
      "culture",
      "group"
    };
    private string[] _spawnAttributes = new string[6]
    {
      "id",
      "name",
      "level",
      "occupation",
      "culture",
      "group"
    };
    private bool underscoreGuard;
    private bool yGuard;
    private bool zGuard;
    private bool xGuard;
    private bool _capsLock;
    private List<ItemObject> _activeItems = new List<ItemObject>();
    private int _setIndex;
    private int _spawnSetIndex;
    private Camera _cam;
    private bool _init = true;
    private int _index;
    private float _diff = 0.75f;
    private int _activeFilter;
    private int _activeWeaponSlot;
    private Vec3 _textStart;
    private List<BoundingBox> _bounds = new List<BoundingBox>();
    private float _pivotDiff;
    private Agent _mountAgent;
    private ItemObject _horse;
    private ItemObject _harness;

    public override void AfterStart()
    {
      this._itemsXmls = new List<XmlDocument>();
      string path = ModuleHelper.GetModuleFullPath("SandBoxCore") + "ModuleData/items/";
      foreach (FileInfo file in new DirectoryInfo(path).GetFiles("*.xml"))
        this._itemsXmls.Add(this.LoadXmlFile(path + file.Name));
      this._cam = Camera.CreateCamera();
      this.GetItems("Item");
      this.GetItems("CraftedItem");
      foreach (Kingdom kingdom in Game.Current.ObjectManager.GetObjectTypeList<Kingdom>().ToList<Kingdom>())
      {
        if (((IFaction) kingdom).IsKingdomFaction || kingdom.Name.ToString() == "Looters")
          this._allFactions.Add(kingdom.Culture);
      }
      foreach (Clan clan in Game.Current.ObjectManager.GetObjectTypeList<Clan>().ToList<Clan>())
      {
        if (clan.Name.ToString() == "Looters")
          this._allFactions.Add(clan.Culture);
      }
      this._groups.Add(FormationClass.Infantry);
      this._groups.Add(FormationClass.Ranged);
      this._groups.Add(FormationClass.Cavalry);
      this._groups.Add(FormationClass.HorseArcher);
      this._groups.Add(FormationClass.NumberOfDefaultFormations);
      this._groups.Add(FormationClass.HeavyInfantry);
      this._groups.Add(FormationClass.LightCavalry);
      this._groups.Add(FormationClass.HeavyCavalry);
      this._allCharacters = Game.Current.ObjectManager.GetObjectTypeList<CharacterObject>().ToList<CharacterObject>();
      this.SpawnAgent("guard");
      this.SpawnItems();
    }

    private void GetItems(string str)
    {
      List<ItemObject> list = Game.Current.ObjectManager.GetObjectTypeList<ItemObject>().ToList<ItemObject>();
      foreach (XmlDocument itemsXml in this._itemsXmls)
      {
        foreach (XmlNode selectNode in itemsXml.DocumentElement.SelectNodes(str))
        {
          if (selectNode.Attributes != null && selectNode.Attributes["id"] != null)
          {
            string innerText = selectNode.Attributes["id"].InnerText;
            foreach (ItemObject itemObject in list)
            {
              if (itemObject.StringId == innerText)
                this._allItemObjects.Add(itemObject);
            }
          }
        }
      }
    }

    public override void OnMissionTick(float dt)
    {
      this.OnEquipToolDebugTick(dt);
      if (this._init)
      {
        this._init = false;
        this.UpdateCamera();
      }
      if (this._activeIndex == -1)
      {
        if (!this.DebugInput.IsKeyDown(InputKey.LeftControl) && !this.DebugInput.IsKeyDown(InputKey.RightControl) && !this.DebugInput.IsKeyDown(InputKey.LeftShift) && !this.DebugInput.IsKeyDown(InputKey.RightShift) && !this.DebugInput.IsKeyDown(InputKey.LeftAlt) && !this.DebugInput.IsKeyDown(InputKey.RightAlt))
        {
          if (this.DebugInput.IsKeyPressed(InputKey.D1))
            this._activeIndex = 0;
          else if (this.DebugInput.IsKeyPressed(InputKey.D2))
            this._activeIndex = 1;
          else if (this.DebugInput.IsKeyPressed(InputKey.D3))
            this._activeIndex = 2;
          else if (this.DebugInput.IsKeyPressed(InputKey.D4))
            this._activeIndex = 3;
          else if (this.DebugInput.IsKeyPressed(InputKey.D7))
            this._activeWeaponSlot = 0;
          else if (this.DebugInput.IsKeyPressed(InputKey.D8))
            this._activeWeaponSlot = 1;
          else if (this.DebugInput.IsKeyPressed(InputKey.D9))
            this._activeWeaponSlot = 2;
          else if (this.DebugInput.IsKeyPressed(InputKey.D0))
            this._activeWeaponSlot = 3;
          else if (this.DebugInput.IsKeyPressed(InputKey.Numpad2))
          {
            ++this._factionIndex;
            if (this._factionIndex >= this._allFactions.Count)
              this._factionIndex = 0;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.Numpad1))
          {
            --this._factionIndex;
            if (this._factionIndex < 0)
              this._factionIndex = this._allFactions.Count - 1;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.Numpad5))
          {
            ++this._groupIndex;
            if (this._groupIndex >= this._groups.Count)
              this._groupIndex = 0;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.Numpad4))
          {
            --this._groupIndex;
            if (this._groupIndex < 0)
              this._groupIndex = this._groups.Count - 1;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.Numpad8))
          {
            ++this._setIndex;
            if (this._setIndex >= this._mainAgent.Character.AllEquipments.Count + 1)
              this._setIndex = 0;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.Numpad7))
          {
            --this._setIndex;
            if (this._setIndex < 0)
              this._setIndex = this._mainAgent.Character.AllEquipments.Count - 1;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.MouseScrollUp) && this._index > 0)
          {
            foreach (MissionEquipItemToolView.ItemData currentItem in this._currentItems)
            {
              MatrixFrame frame = currentItem.Entity.GetFrame();
              frame.origin += Vec3.Up * this._diff;
              currentItem.Entity.SetFrame(ref frame);
            }
            --this._index;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.MouseScrollDown) && this._index < this._currentItems.Count - 1)
          {
            foreach (MissionEquipItemToolView.ItemData currentItem in this._currentItems)
            {
              MatrixFrame frame = currentItem.Entity.GetFrame();
              frame.origin -= Vec3.Up * this._diff;
              currentItem.Entity.SetFrame(ref frame);
            }
            ++this._index;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.F1))
          {
            if (!this._genderSet)
            {
              this._mainAgent.Character.IsFemale = false;
              this._genderSet = true;
              this.SpawnAgent(this._attributes[0]);
              this.SpawnItems();
            }
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.F2) && !this._genderSet)
          {
            this._mainAgent.Character.IsFemale = true;
            this._genderSet = true;
            this.SpawnAgent(this._attributes[0]);
            this.SpawnItems();
          }
          if (this.DebugInput.IsKeyPressed(InputKey.F))
          {
            if (this._currentItems.Count > 0)
            {
              foreach (ItemObject allItemObject in this._allItemObjects)
              {
                if (allItemObject.StringId == this._currentItems[this._index].Id)
                {
                  EquipmentIndex equipmentIndex = this._activeFilter == 5 || this._activeFilter == 9 || this._activeFilter == 6 || this._activeFilter == 7 || this._activeFilter == 8 || this._activeFilter == 10 || this._activeFilter == 11 ? (EquipmentIndex) this._activeFilter : (EquipmentIndex) this._activeWeaponSlot;
                  switch (equipmentIndex)
                  {
                    case EquipmentIndex.WeaponItemBeginSlot:
                    case EquipmentIndex.Weapon1:
                    case EquipmentIndex.Weapon2:
                    case EquipmentIndex.Weapon3:
                    case EquipmentIndex.ExtraWeaponSlot:
                      if (!this._mainAgent.Equipment[equipmentIndex].IsEmpty)
                      {
                        this._mainAgent.DropItem(equipmentIndex);
                        this.Mission.RemoveSpawnedItemsAndMissiles();
                        break;
                      }
                      break;
                  }
                  if (allItemObject.Type == ItemObject.ItemTypeEnum.Horse)
                    this._horse = allItemObject;
                  if (allItemObject.Type == ItemObject.ItemTypeEnum.HorseHarness)
                    this._harness = allItemObject;
                  if (equipmentIndex == EquipmentIndex.WeaponItemBeginSlot || equipmentIndex == EquipmentIndex.Weapon1 || equipmentIndex == EquipmentIndex.Weapon2 || equipmentIndex == EquipmentIndex.Weapon3 || equipmentIndex == EquipmentIndex.ExtraWeaponSlot)
                  {
                    MissionWeapon weapon = new MissionWeapon(allItemObject, (ItemModifier) null, this._mainAgent.Origin?.Banner);
                    this._mainAgent.EquipWeaponWithNewEntity(equipmentIndex, ref weapon);
                  }
                  Equipment equipment = this._mainAgent.SpawnEquipment.Clone();
                  equipment[equipmentIndex] = new EquipmentElement(allItemObject);
                  BasicCharacterObject character = this._mainAgent.Character;
                  this.SpawnHorse(this._horse, this._harness);
                  Mat3 rotation = this._mainAgent.Frame.rotation;
                  this._mainAgent.FadeOut(true, false);
                  this._mainAgent = this.Mission.SpawnAgent(new AgentBuildData((IAgentOriginBase) new SimpleAgentOrigin(character)).Equipment(equipment).NoHorses(true).Team(this.Mission.DefenderTeam).InitialPosition(new Vec3(500f, 200f, 1f)).InitialDirection(rotation.f.AsVec2));
                  foreach (Agent agent in (List<Agent>) this.Mission.Agents)
                  {
                    if (agent != this._mainAgent)
                      this._mountAgent = agent;
                  }
                  this.UpdateCamera();
                  this.UpdateActiveItems();
                  break;
                }
              }
            }
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.BackSpace))
          {
            int num = this._activeFilter;
            if (this._activeFilter < 5 || this._activeFilter > 11)
              num = this._activeWeaponSlot;
            EquipmentIndex equipmentIndex = (EquipmentIndex) num;
            if ((equipmentIndex == EquipmentIndex.WeaponItemBeginSlot || equipmentIndex == EquipmentIndex.Weapon1 || equipmentIndex == EquipmentIndex.Weapon2 || equipmentIndex == EquipmentIndex.Weapon3 || equipmentIndex == EquipmentIndex.ExtraWeaponSlot) && !this._mainAgent.Equipment[equipmentIndex].IsEmpty)
            {
              this._mainAgent.DropItem(equipmentIndex);
              this.Mission.RemoveSpawnedItemsAndMissiles();
            }
            else
            {
              switch (equipmentIndex)
              {
                case EquipmentIndex.ArmorItemEndSlot:
                  this._mountAgent.FadeOut(true, false);
                  this._horse = (ItemObject) null;
                  this.SpawnHorse(this._horse, this._harness);
                  break;
                case EquipmentIndex.HorseHarness:
                  this._mountAgent.FadeOut(true, false);
                  this._harness = (ItemObject) null;
                  this.SpawnHorse(this._horse, this._harness);
                  break;
                default:
                  Equipment spawnEquipment = this._mainAgent.SpawnEquipment;
                  spawnEquipment[equipmentIndex] = new EquipmentElement((ItemObject) null);
                  BasicCharacterObject character = this._mainAgent.Character;
                  Mat3 rotation = this._mainAgent.Frame.rotation;
                  this._mainAgent.FadeOut(true, false);
                  this._mainAgent = this.Mission.SpawnAgent(new AgentBuildData((IAgentOriginBase) new SimpleAgentOrigin(character)).Equipment(spawnEquipment).NoHorses(true).Team(this.Mission.DefenderTeam).InitialPosition(new Vec3(500f, 200f, 1f)).InitialDirection(rotation.f.AsVec2));
                  break;
              }
            }
            this.UpdateActiveItems();
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.Q))
          {
            this._activeFilter = 5;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.HeadArmor);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.W))
          {
            this._activeFilter = 9;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Cape);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.E))
          {
            this._activeFilter = 6;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.BodyArmor);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.R))
          {
            this._activeFilter = 8;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.HandArmor);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.T))
          {
            this._activeFilter = 7;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.LegArmor);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.X))
          {
            this._activeFilter = 12;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Shield);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.B))
          {
            this._activeFilter = 13;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Bow);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.C))
          {
            this._activeFilter = 15;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Crossbow);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.G))
          {
            this._activeFilter = 10;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Horse);
          }
        }
        else if (this.DebugInput.IsKeyDown(InputKey.LeftControl) || this.DebugInput.IsKeyDown(InputKey.RightControl))
        {
          if (this.DebugInput.IsKeyPressed(InputKey.S))
            this.SaveToXml();
          if (this.DebugInput.IsKeyPressed(InputKey.O))
            this.CheckForLoad();
          if (this.DebugInput.IsKeyPressed(InputKey.E))
            this.EditNode();
          if (this.DebugInput.IsKeyPressed(InputKey.R))
            this.SpawnAgent(this._attributes[0]);
          if (this.DebugInput.IsKeyPressed(InputKey.Numpad1))
          {
            --this._itemCulture;
            if (this._itemCulture < -1)
              this._itemCulture = this._allFactions.Count - 1;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.Numpad2))
          {
            ++this._itemCulture;
            if (this._itemCulture >= this._allFactions.Count)
              this._itemCulture = -1;
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.MouseScrollUp) || this.DebugInput.IsKeyPressed(InputKey.MouseScrollDown))
          {
            float num = 30f;
            bool flag = this.DebugInput.IsKeyDown(InputKey.LeftAlt);
            if (this.DebugInput.IsKeyPressed(InputKey.MouseScrollDown))
              num *= -1f;
            foreach (MissionEquipItemToolView.ItemData currentItem in this._currentItems)
            {
              MatrixFrame frame = new MatrixFrame(currentItem.Entity.GetFrame().rotation, currentItem.Entity.GetFrame().origin);
              if (!flag)
                frame.rotation.RotateAboutUp((float) Math.PI / 180f * num);
              currentItem.Entity.SetFrame(ref frame);
            }
          }
        }
        else if (this.DebugInput.IsKeyDown(InputKey.LeftShift) || this.DebugInput.IsKeyDown(InputKey.RightShift))
        {
          if (this.DebugInput.IsKeyPressed(InputKey.Q))
          {
            this._activeFilter = 1;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.OneHandedWeapon);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.W))
          {
            this._activeFilter = 2;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.TwoHandedWeapon);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.E))
          {
            this._activeFilter = 3;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Polearm);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.R))
          {
            this._activeFilter = 4;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Thrown);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.B))
          {
            this._activeFilter = 14;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Arrows);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.C))
          {
            this._activeFilter = 16;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.Bolts);
          }
          else if (this.DebugInput.IsKeyPressed(InputKey.G))
          {
            this._activeFilter = 11;
            this.Clear(this._filters);
            this._filters[this._activeFilter] = true;
            this.SortFilter(ItemObject.ItemTypeEnum.HorseHarness);
          }
        }
      }
      else
      {
        InputKey inputKey = InputKey.D0;
        if (this.DebugInput.IsKeyDown(InputKey.Y) && !this.yGuard)
        {
          this.str += "y";
          this.yGuard = true;
        }
        if (this.DebugInput.IsKeyDown(InputKey.Z) && !this.zGuard)
        {
          this.str += "z";
          this.zGuard = true;
        }
        if (this.DebugInput.IsKeyDown(InputKey.X) && !this.xGuard)
        {
          this.str += "x";
          this.xGuard = true;
        }
        if (this.DebugInput.IsKeyPressed(InputKey.Enter))
        {
          this._attributes[this._activeIndex] = this._activeIndex != 0 ? this.str : this.str.ToLower();
          this._activeIndex = -1;
          this.str = "";
          this.underscoreGuard = false;
          this.yGuard = false;
          this.xGuard = false;
          this.zGuard = false;
        }
        if (this.DebugInput.IsKeyPressed(InputKey.Escape))
        {
          this._activeIndex = -1;
          this.str = "";
          this.underscoreGuard = false;
          this.yGuard = false;
          this.xGuard = false;
          this.zGuard = false;
        }
        if (this.DebugInput.IsKeyPressed(InputKey.BackSpace) && this.str.Length > 0)
        {
          this.str = this.str.TrimEnd(this.str[this.str.Length - 1]);
          this.underscoreGuard = false;
          this.yGuard = false;
          this.xGuard = false;
          this.zGuard = false;
        }
        if (this.DebugInput.IsKeyPressed(InputKey.Space))
        {
          this.str += " ";
          this.underscoreGuard = false;
          this.yGuard = false;
          this.xGuard = false;
          this.zGuard = false;
        }
        if (this.DebugInput.IsKeyPressed(InputKey.CapsLock))
        {
          this._capsLock = !this._capsLock;
          this.underscoreGuard = false;
          this.yGuard = false;
          this.xGuard = false;
          this.zGuard = false;
        }
        if (this.DebugInput.IsKeyDown(InputKey.RightShift) && this.DebugInput.IsKeyDown(InputKey.Minus) && !this.underscoreGuard)
        {
          this.str += "_";
          this.underscoreGuard = true;
        }
        if (this.DebugInput.IsKeyDown(InputKey.LeftControl) && this.DebugInput.IsKeyPressed(InputKey.V))
        {
          this.str += TaleWorlds.InputSystem.Input.GetClipboardText();
          this.underscoreGuard = false;
          this.yGuard = false;
          this.xGuard = false;
          this.zGuard = false;
          return;
        }
        for (int index = 0; index < 40; ++index)
        {
          if (this.DebugInput.IsKeyPressed(inputKey + index))
          {
            string str = this._capsLock ? (inputKey + index).ToString().ToLower() : (inputKey + index).ToString();
            this.str += str.ToLower() == "d" + index.ToString() ? str.ToLower().Replace("d", "") : str;
            this.underscoreGuard = false;
            this.yGuard = false;
            this.xGuard = false;
            this.zGuard = false;
          }
        }
      }
      if (!this.DebugInput.IsKeyDown(InputKey.LeftAlt) || this.DebugInput.IsKeyDown(InputKey.LeftControl) || (this.DebugInput.IsKeyPressed(InputKey.MouseScrollUp) ? 1 : (this.DebugInput.IsKeyPressed(InputKey.MouseScrollDown) ? 1 : 0)) == 0)
        return;
      float num1 = 60f;
      if (this.DebugInput.IsKeyPressed(InputKey.MouseScrollDown))
        num1 *= -1f;
      MatrixFrame frame1 = this._mainAgent.Frame;
      frame1.rotation.RotateAboutUp((float) Math.PI / 180f * num1);
      this._mainAgent.SetTargetPositionAndDirection(frame1.origin.AsVec2, frame1.rotation.f);
    }

    private void OnEquipToolDebugTick(float dt)
    {
      if (!this._genderSet)
        return;
      double num = 10.0 + 70.0 + 15.0 + 120.0;
      for (int index1 = 0; index1 < this._currentItems.Count; ++index1)
      {
        int index2 = this._index;
        ItemObject.ItemTypeEnum itemType = this._currentItems[index1].itemType;
        switch (itemType)
        {
          case ItemObject.ItemTypeEnum.HeadArmor:
          case ItemObject.ItemTypeEnum.BodyArmor:
          case ItemObject.ItemTypeEnum.LegArmor:
          case ItemObject.ItemTypeEnum.HandArmor:
          case ItemObject.ItemTypeEnum.ChestArmor:
            break;
          default:
            1 = itemType == ItemObject.ItemTypeEnum.Cape ? 1 : 0;
            break;
        }
      }
    }

    private void SpawnItems()
    {
      float num = (float) -((double) this._allItemObjects.Count * (double) this._diff / 2.0);
      this._allItems.Clear();
      foreach (ItemObject allItemObject in this._allItemObjects)
      {
        MatrixFrame frame = new MatrixFrame(this._mainAgent.Frame.rotation, this._mainAgent.Position + new Vec3(-1f, 1f) + Vec3.Up * num);
        GameEntity empty = GameEntity.CreateEmpty(Mission.Current.Scene);
        MetaMesh copy = MetaMesh.GetCopy(allItemObject.MultiMeshName);
        empty.AddMultiMesh(copy);
        empty.SetFrame(ref frame);
        empty.SetVisibilityExcludeParents(false);
        this._allItems.Add(new MissionEquipItemToolView.ItemData()
        {
          Entity = empty,
          Name = allItemObject.Name.ToString(),
          Id = allItemObject.StringId,
          Culture = allItemObject.Culture,
          Gender = !allItemObject.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.NotUsableByFemale) ? (!allItemObject.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.NotUsableByMale) ? MissionEquipItemToolView.GenderEnum.Unisex : MissionEquipItemToolView.GenderEnum.Female) : MissionEquipItemToolView.GenderEnum.Male,
          itemType = allItemObject.ItemType
        });
        num += this._diff;
      }
    }

    private void SortFilter(ItemObject.ItemTypeEnum type)
    {
      this._currentItems.Clear();
      this._currentArmorValues.Clear();
      foreach (MissionEquipItemToolView.ItemData allItem in this._allItems)
      {
        MissionEquipItemToolView.ItemData item = allItem;
        if (item.itemType == type && (this._itemCulture == -1 || item.Culture == this._allFactions[this._itemCulture]))
        {
          bool flag = false;
          int index1;
          for (index1 = 0; index1 < this._currentItems.Count; ++index1)
          {
            string lower = this._currentItems[index1].Name.ToLower();
            for (int index2 = 0; index2 < item.Name.Length && index2 < lower.Length; ++index2)
            {
              if ((int) item.Name.ToLower()[index2] < (int) lower[index2])
              {
                flag = true;
                break;
              }
              if ((int) item.Name.ToLower()[index2] > (int) lower[index2])
                break;
            }
            if (flag)
              break;
          }
          if (item.Gender == MissionEquipItemToolView.GenderEnum.Unisex || this._mainAgent.Character.IsFemale && item.Gender == MissionEquipItemToolView.GenderEnum.Female || !this._mainAgent.Character.IsFemale && item.Gender == MissionEquipItemToolView.GenderEnum.Male)
          {
            this._currentItems.Insert(index1, item);
            ItemComponent itemComponent = this._allItemObjects.Where<ItemObject>((Func<ItemObject, bool>) (i => i.StringId == item.Id)).FirstOrDefault<ItemObject>().ItemComponent;
            ArmorComponent armorComponent = itemComponent == null || !(itemComponent is ArmorComponent) ? (ArmorComponent) null : (ArmorComponent) itemComponent;
            int num1 = 0;
            int num2 = 0;
            int num3 = 0;
            int num4 = 0;
            if (armorComponent != null)
            {
              num1 = armorComponent.HeadArmor;
              num2 = armorComponent.BodyArmor;
              num3 = armorComponent.LegArmor;
              num4 = armorComponent.ArmArmor;
            }
            Tuple<int, int, int, int> tuple = new Tuple<int, int, int, int>(num1, num2, num3, num4);
            this._currentArmorValues.Insert(index1, tuple);
          }
        }
        else
          item.Entity.SetVisibilityExcludeParents(false);
      }
      this.PositionCurrentItems();
    }

    private void SpawnHorse(ItemObject horse, ItemObject harness)
    {
      ItemRosterElement rosterElement = new ItemRosterElement();
      ItemRosterElement harnessRosterElement = new ItemRosterElement();
      if (horse != null)
      {
        rosterElement = new ItemRosterElement(horse, 1);
        harnessRosterElement = harness == null ? ItemRosterElement.Invalid : new ItemRosterElement(harness, 1);
      }
      else
      {
        if (harness == null)
          return;
        rosterElement = new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("mule"), 1);
        harnessRosterElement = new ItemRosterElement(harness, 1);
      }
      if (this._mountAgent != null)
        this._mountAgent.FadeOut(true, false);
      this._horse = rosterElement.EquipmentElement.Item;
      this._harness = harnessRosterElement.EquipmentElement.Item;
      this._mountAgent = this.Mission.SpawnMonster(rosterElement, harnessRosterElement, new Vec3(500f, this._mainAgent.Position.y - 3f, 1f), in Vec2.Forward, -1);
      this._mountAgent.Controller = Agent.ControllerType.None;
    }

    private void SpawnAgent(string id)
    {
      this._mountAgent?.FadeOut(true, false);
      this._mainAgent?.FadeOut(true, false);
      CharacterObject troop = Game.Current.ObjectManager.GetObject<CharacterObject>(id);
      List<Equipment> list = troop.AllEquipments.ToList<Equipment>();
      this._mainAgent = this.Mission.SpawnAgent(new AgentBuildData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) troop)).Equipment(list[this._setIndex]).NoHorses(true).Team(this.Mission.DefenderTeam).InitialPosition(new Vec3(500f, 200f, 1f)).InitialDirection(in Vec2.Forward));
      EquipmentElement equipmentElement = list[this._setIndex].Horse;
      if (equipmentElement.Item != null)
      {
        equipmentElement = list[this._setIndex].Horse;
        ItemObject horse = equipmentElement.Item;
        equipmentElement = list[this._setIndex].GetEquipmentFromSlot(EquipmentIndex.HorseHarness);
        ItemObject harness = equipmentElement.Item;
        this.SpawnHorse(horse, harness);
      }
      this._groupIndex = troop.DefaultFormationGroup;
      this._attributes[0] = troop.StringId;
      this._attributes[1] = troop.Name.ToString();
      this._attributes[2] = troop.Level.ToString();
      this._attributes[3] = troop.Occupation.ToString();
      for (int index = 0; index < this._attributes.Length; ++index)
        this._spawnAttributes[index] = this._attributes[index];
      this._groupIndex = troop.DefaultFormationGroup;
      for (int index = 0; index < this._allFactions.Count; ++index)
      {
        if (this._allFactions[index].StringId == troop.Culture.StringId)
        {
          this._factionIndex = index;
          this._itemCulture = -1;
          break;
        }
      }
      this._spawnSetIndex = this._setIndex;
      this.UpdateActiveItems();
      this.UpdateCamera();
    }

    private void PositionCurrentItems()
    {
      float num1 = 0.0f;
      float z = 0.0f;
      if (this._activeFilter == 6)
        this._diff = 1.5f;
      else if (this._activeFilter == 10 || this._activeFilter == 11)
      {
        this._diff = 4f;
        num1 = -1f;
      }
      else if (this._activeFilter == 1 || this._activeFilter == 2 || this._activeFilter == 14 || this._activeFilter == 16)
        this._diff = 1.5f;
      else if (this._activeFilter == 13 || this._activeFilter == 15)
      {
        this._diff = 2.5f;
        z = 1f;
      }
      else
        this._diff = 0.75f;
      float num2 = (float) -((double) (this._currentItems.Count / 2) * (double) this._diff);
      this._textStart = this._mainAgent.Position + new Vec3(-1f, 1f) + Vec3.Up * num2;
      foreach (MissionEquipItemToolView.ItemData currentItem in this._currentItems)
      {
        MatrixFrame frame = new MatrixFrame(Mat3.Identity, this._mainAgent.Position + new Vec3(-1f, 1f + num1, z) + Vec3.Up * num2);
        currentItem.Entity.SetVisibilityExcludeParents(true);
        currentItem.Entity.SetFrame(ref frame);
        num2 += this._diff;
        if ((NativeObject) currentItem.Entity.GetMetaMesh(0) != (NativeObject) null)
        {
          BoundingBox boundingBox = currentItem.Entity.GetMetaMesh(0).GetBoundingBox();
          if (!this._bounds.Contains(boundingBox))
            this._bounds.Add(boundingBox);
        }
      }
      this._index = this._currentItems.Count / 2;
      this._pivotDiff = 0.0f;
      foreach (BoundingBox bound in this._bounds)
        this._pivotDiff += bound.center.z;
      this._pivotDiff /= (float) this._bounds.Count;
      this._bounds.Clear();
    }

    private void EditNode()
    {
      this._charactersXml = this.LoadXmlFile(ModuleHelper.GetModuleFullPath("SandBoxCore") + "ModuleData/spnpccharacters.xml");
      this._charactersXml.DocumentElement.SelectNodes("NPCCharacter");
      bool flag = false;
      foreach (XmlNode selectNode in this._charactersXml.DocumentElement.SelectNodes("NPCCharacter"))
      {
        if (selectNode.Attributes["id"] != null && this._spawnAttributes[0] == selectNode.Attributes["id"].InnerText)
        {
          selectNode.Attributes["id"].InnerText = this._attributes[0];
          selectNode.Attributes["name"].InnerText = this._attributes[1];
          if (selectNode.Attributes["level"] != null)
            selectNode.Attributes["level"].InnerText = this._attributes[2];
          selectNode.Attributes["occupation"].InnerText = this._attributes[3];
          selectNode.Attributes["culture"].InnerText = "Culture." + this._allFactions[this._factionIndex].StringId;
          selectNode.Attributes["default_group"].InnerText = this._groups[this._groupIndex].GetName();
          this.SlotCheck("Head", 0, selectNode);
          this.SlotCheck("Cape", 1, selectNode);
          this.SlotCheck("Body", 2, selectNode);
          this.SlotCheck("Gloves", 3, selectNode);
          this.SlotCheck("Leg", 4, selectNode);
          this.SlotCheck("Item0", 5, selectNode);
          this.SlotCheck("Item1", 6, selectNode);
          this.SlotCheck("Item2", 7, selectNode);
          this.SlotCheck("Item3", 8, selectNode);
          this.SlotCheck("Horse", -1, selectNode, this._horse);
          this.SlotCheck("HorseHarness", -1, selectNode, this._harness);
          this._charactersXml.Save(ModuleHelper.GetModuleFullPath("SandBoxCore") + "ModuleData/spnpccharacters.xml");
          for (int index = 0; index < this._attributes.Length; ++index)
            this._spawnAttributes[index] = this._attributes[index];
          flag = true;
        }
      }
      int num = flag ? 1 : 0;
    }

    private void CheckForLoad()
    {
      if (this._spawnAttributes[0] != this._attributes[0] && Game.Current.ObjectManager.GetObject<CharacterObject>(this._attributes[0]) != null)
      {
        this.SpawnAgent(this._attributes[0]);
      }
      else
      {
        if (this._spawnAttributes[1] != this._attributes[1])
        {
          foreach (CharacterObject allCharacter in this._allCharacters)
          {
            if (allCharacter.Name.ToString() == this._attributes[1])
            {
              this.SpawnAgent(allCharacter.StringId);
              return;
            }
          }
        }
        if (this._setIndex == this._spawnSetIndex)
          return;
        this.SpawnAgent(this._mainAgent.Character.StringId);
      }
    }

    private void UpdateActiveItems()
    {
      this._activeItems.Clear();
      this._activeItems.Add(this._mainAgent.SpawnEquipment[EquipmentIndex.NumAllWeaponSlots].Item);
      this._activeItems.Add(this._mainAgent.SpawnEquipment[EquipmentIndex.Cape].Item);
      this._activeItems.Add(this._mainAgent.SpawnEquipment[EquipmentIndex.Body].Item);
      this._activeItems.Add(this._mainAgent.SpawnEquipment[EquipmentIndex.Gloves].Item);
      this._activeItems.Add(this._mainAgent.SpawnEquipment[EquipmentIndex.Leg].Item);
      MissionWeapon missionWeapon1 = this._mainAgent.Equipment[EquipmentIndex.WeaponItemBeginSlot];
      if (missionWeapon1.WeaponsCount > 0)
        this._activeItems.Add(missionWeapon1.Item);
      MissionWeapon missionWeapon2 = this._mainAgent.Equipment[EquipmentIndex.Weapon1];
      if (missionWeapon2.WeaponsCount > 0)
        this._activeItems.Add(missionWeapon2.Item);
      MissionWeapon missionWeapon3 = this._mainAgent.Equipment[EquipmentIndex.Weapon2];
      if (missionWeapon3.WeaponsCount > 0)
        this._activeItems.Add(missionWeapon3.Item);
      MissionWeapon missionWeapon4 = this._mainAgent.Equipment[EquipmentIndex.Weapon3];
      if (missionWeapon4.WeaponsCount > 0)
        this._activeItems.Add(missionWeapon4.Item);
      this._activeItems.Add(this._mainAgent.SpawnEquipment[EquipmentIndex.ArmorItemEndSlot].Item);
      this._activeItems.Add(this._mainAgent.SpawnEquipment[EquipmentIndex.HorseHarness].Item);
    }

    private void SlotCheck(string slotName, int index, XmlNode parentNode, ItemObject obj = null)
    {
      XmlNodeList xmlNodeList = parentNode.SelectNodes("equipmentSet")[this._setIndex].SelectNodes("equipment");
      bool flag = false;
      foreach (XmlNode oldChild in xmlNodeList)
      {
        if (oldChild.Attributes != null && oldChild.Attributes["slot"].InnerText == slotName)
        {
          if (index != -1 && this._activeItems[index] == null || index == -1 && obj == null)
          {
            oldChild.ParentNode.RemoveChild(oldChild);
            return;
          }
          oldChild.Attributes["id"].Value = "Item." + (obj == null ? this._activeItems[index].StringId : obj.StringId);
          flag = true;
          break;
        }
      }
      if (flag || index != -1 && this._activeItems[index] == null || index == -1 && obj == null)
        return;
      XmlElement element = this._charactersXml.CreateElement("equipment");
      XmlAttribute attribute1 = this._charactersXml.CreateAttribute("slot");
      attribute1.Value = slotName;
      XmlAttribute attribute2 = this._charactersXml.CreateAttribute("id");
      attribute2.Value = "Item." + (obj == null ? this._activeItems[index].StringId : obj.StringId);
      element.Attributes.Append(attribute1);
      element.Attributes.Append(attribute2);
      parentNode.SelectNodes("equipmentSet")[this._setIndex].AppendChild((XmlNode) element);
    }

    private void UpdateCamera()
    {
      Vec3 vec3 = this._mainAgent.MountAgent == null ? new Vec3(1.3f, 2f, 1f) : new Vec3(2f, 3f, 2f);
      MatrixFrame matrixFrame = new MatrixFrame()
      {
        rotation = {
          u = -(this._mainAgent.Position - this._cam.Position).NormalizedCopy(),
          f = Vec3.Up
        }
      };
      matrixFrame.rotation.s = Vec3.CrossProduct(matrixFrame.rotation.f, matrixFrame.rotation.u);
      double num = (double) matrixFrame.rotation.s.Normalize();
      matrixFrame.rotation.Orthonormalize();
      this._cam.SetFovVertical(1.134464f, Screen.AspectRatio, 1E-08f, 1000f);
      matrixFrame.origin = this._mainAgent.Position + vec3;
      this._cam.Frame = matrixFrame;
      this.MissionScreen.CustomCamera = this._cam;
    }

    private void SaveToXml()
    {
      this._charactersXml = this.LoadXmlFile(ModuleHelper.GetModuleFullPath("Sandbox") + "ModuleData/spnpccharacters.xml");
      XmlNodeList xmlNodeList = this._charactersXml.DocumentElement.SelectNodes("/NPCCharacters");
      bool flag1 = false;
      bool flag2 = false;
      string str1 = "\n  <equipmentSet>\n";
      foreach (XmlNode selectNode in this._charactersXml.DocumentElement.SelectNodes("NPCCharacter"))
      {
        if (selectNode.Attributes["id"] != null && this._attributes[0] == selectNode.Attributes["id"].InnerText)
        {
          flag2 = true;
          if (this._setIndex <= this._spawnSetIndex)
            return;
          for (int index = 0; index < 9; ++index)
          {
            if (this._activeItems[index] != null)
            {
              string str2 = "";
              switch (index)
              {
                case 0:
                  str2 = "Head";
                  break;
                case 1:
                  str2 = "Cape";
                  break;
                case 2:
                  str2 = "Body";
                  break;
                case 3:
                  str2 = "Gloves";
                  break;
                case 4:
                  str2 = "Leg";
                  break;
                case 5:
                  str2 = "Item0";
                  break;
                case 6:
                  str2 = "Item1";
                  break;
                case 7:
                  str2 = "Item2";
                  break;
                case 8:
                  str2 = "Item3";
                  break;
              }
              str1 = str1 + "    <equipment slot=\"" + str2 + "\" id=\"Item." + this._activeItems[index].StringId + "\" />\n";
            }
          }
          if (this._horse != null)
            str1 = str1 + "    <equipment slot=\"Horse\" id=\"Item." + this._horse.StringId + "\" />\n";
          if (this._harness != null)
            str1 = str1 + "    <equipment slot=\"HorseHarness\" id=\"Item." + this._harness.StringId + "\" />\n";
          string str3 = str1 + "  </equipmentSet>\n";
          selectNode.InnerXml += str3;
          this._charactersXml.Save(ModuleHelper.GetModuleFullPath("SandBoxCore") + "ModuleData/spnpccharacters.xml");
          Utilities.ConstructMainThreadJob((Delegate) new MissionEquipItemToolView.MainThreadDelegate(Mission.Current.EndMission));
          MBGameManager.EndGame();
          int num = 0;
          while (num < 10)
            ++num;
          break;
        }
        if (selectNode.Attributes["id"] != null && this._attributes[1] == selectNode.Attributes["name"].InnerText)
          flag1 = true;
      }
      if (!flag2)
      {
        XmlElement element1 = this._charactersXml.CreateElement("NPCCharacter");
        XmlAttribute attribute1 = this._charactersXml.CreateAttribute("id");
        attribute1.Value = this._attributes[0];
        element1.Attributes.Append(attribute1);
        XmlAttribute attribute2 = this._charactersXml.CreateAttribute("default_group");
        attribute2.Value = this._groups[this._groupIndex].GetName();
        element1.Attributes.Append(attribute2);
        XmlAttribute attribute3 = this._charactersXml.CreateAttribute("level");
        attribute3.Value = this._attributes[2];
        element1.Attributes.Append(attribute3);
        XmlAttribute attribute4 = this._charactersXml.CreateAttribute("name");
        attribute4.Value = this._attributes[1];
        element1.Attributes.Append(attribute4);
        XmlAttribute attribute5 = this._charactersXml.CreateAttribute("occupation");
        attribute5.Value = this._attributes[3];
        element1.Attributes.Append(attribute5);
        XmlAttribute attribute6 = this._charactersXml.CreateAttribute("culture");
        attribute6.Value = "Culture." + this._allFactions[this._factionIndex].StringId;
        element1.Attributes.Append(attribute6);
        XmlElement element2 = this._charactersXml.CreateElement("face");
        XmlElement element3 = this._charactersXml.CreateElement("face_key_template");
        XmlAttribute attribute7 = this._charactersXml.CreateAttribute("value");
        attribute7.Value = "NPCCharacter.villager_vlandia";
        element3.Attributes.Append(attribute7);
        element2.AppendChild((XmlNode) element3);
        element1.AppendChild((XmlNode) element2);
        XmlElement element4 = this._charactersXml.CreateElement("equipmentSet");
        for (int index = 0; index < 9; ++index)
        {
          if (this._activeItems[index] != null)
          {
            XmlElement element5 = this._charactersXml.CreateElement("equipment");
            XmlAttribute attribute8 = this._charactersXml.CreateAttribute("slot");
            string str4 = "";
            switch (index)
            {
              case 0:
                str4 = "Head";
                break;
              case 1:
                str4 = "Cape";
                break;
              case 2:
                str4 = "Body";
                break;
              case 3:
                str4 = "Gloves";
                break;
              case 4:
                str4 = "Leg";
                break;
              case 5:
                str4 = "Item0";
                break;
              case 6:
                str4 = "Item1";
                break;
              case 7:
                str4 = "Item2";
                break;
              case 8:
                str4 = "Item3";
                break;
            }
            attribute8.Value = str4;
            element5.Attributes.Append(attribute8);
            XmlAttribute attribute9 = this._charactersXml.CreateAttribute("id");
            attribute9.Value = "Item." + this._activeItems[index].StringId;
            element5.Attributes.Append(attribute9);
            element4.AppendChild((XmlNode) element5);
          }
        }
        element1.AppendChild((XmlNode) element4);
        if (this._horse != null)
        {
          XmlElement element6 = this._charactersXml.CreateElement("equipment");
          XmlAttribute attribute10 = this._charactersXml.CreateAttribute("slot");
          attribute10.Value = "Horse";
          element6.Attributes.Append(attribute10);
          XmlAttribute attribute11 = this._charactersXml.CreateAttribute("id");
          attribute11.Value = "Item." + this._horse.StringId;
          element6.Attributes.Append(attribute11);
          element1.AppendChild((XmlNode) element6);
        }
        if (this._harness != null)
        {
          XmlElement element7 = this._charactersXml.CreateElement("equipment");
          XmlAttribute attribute12 = this._charactersXml.CreateAttribute("slot");
          attribute12.Value = "HorseHarness";
          element7.Attributes.Append(attribute12);
          XmlAttribute attribute13 = this._charactersXml.CreateAttribute("id");
          attribute13.Value = "Item." + this._harness.StringId;
          element7.Attributes.Append(attribute13);
          element1.AppendChild((XmlNode) element7);
        }
        xmlNodeList[xmlNodeList.Count - 1].AppendChild((XmlNode) element1);
        this._charactersXml.Save(ModuleHelper.GetModuleFullPath("SandBoxCore") + "ModuleData/spnpccharacters.xml");
        Utilities.ConstructMainThreadJob((Delegate) new MissionEquipItemToolView.MainThreadDelegate(Mission.Current.EndMission));
        MBGameManager.EndGame();
        int num = 0;
        while (num < 10)
          ++num;
      }
      int num1 = flag1 ? 1 : 0;
    }

    private void Clear(bool[] array)
    {
      for (int index = 0; index < array.Length; ++index)
        array[index] = false;
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

    private enum Filter
    {
      Onehanded = 1,
      Twohanded = 2,
      Polearm = 3,
      Thrown = 4,
      Head = 5,
      Body = 6,
      Leg = 7,
      Hand = 8,
      Cape = 9,
      Horse = 10, // 0x0000000A
      Harness = 11, // 0x0000000B
      Shield = 12, // 0x0000000C
      Bow = 13, // 0x0000000D
      Arrow = 14, // 0x0000000E
      Crossbow = 15, // 0x0000000F
      Bolt = 16, // 0x00000010
    }

    private delegate void MainThreadDelegate();

    private class ItemData
    {
      public GameEntity Entity;
      public string Name;
      public string Id;
      public BasicCultureObject Culture;
      public ItemObject.ItemTypeEnum itemType;
      public MissionEquipItemToolView.GenderEnum Gender;
    }

    public enum GenderEnum
    {
      Male = 1,
      Unisex = 2,
      Female = 3,
    }
  }
}
