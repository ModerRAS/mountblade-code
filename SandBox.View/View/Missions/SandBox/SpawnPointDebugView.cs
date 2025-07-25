// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.SandBox.SpawnPointDebugView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Missions.MissionLogics;
using SandBox.Objects;
using SandBox.Objects.AnimationPoints;
using SandBox.Objects.AreaMarkers;
using SandBox.Objects.Usables;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Source.Objects;

#nullable disable
namespace SandBox.View.Missions.SandBox
{
  public class SpawnPointDebugView : ScriptComponentBehavior
  {
    private const string BattleSetName = "sp_battle_set";
    private const string CenterConversationPoint = "center_conversation_point";
    public static bool ActivateDebugUI;
    public bool ActivateDebugUIEditor;
    private readonly bool _separatorNeeded = true;
    private readonly bool _onSameLineNeeded = true;
    private bool _townCenterRadioButton;
    private bool _tavernRadioButton;
    private bool _arenaRadioButton;
    private bool _villageRadioButton;
    private bool _lordshallRadioButton;
    private bool _castleRadioButton;
    private bool _basicInformationTab;
    private bool _entityInformationTab;
    private bool _navigationMeshCheckTab;
    private bool _relatedEntityWindow;
    private string _relatedPrefabTag;
    private int _cameraFocusIndex;
    private bool _showNPCs;
    private bool _showChairs;
    private bool _showAnimals;
    private bool _showSemiValidPoints;
    private bool _showPassagePoints;
    private bool _showOutOfBoundPoints;
    private bool _showPassagesList;
    private bool _showAnimalsList;
    private bool _showNPCsList;
    private bool _showDontUseList;
    private bool _showOthersList;
    private string _sceneName;
    private SpawnPointUnits.SceneType _sceneType;
    private readonly bool _normalButton;
    private int _currentTownsfolkCount;
    private Vec3 _redColor = new Vec3(200f, w: (float) byte.MaxValue);
    private Vec3 _greenColor = new Vec3(y: 200f, w: (float) byte.MaxValue);
    private Vec3 _blueColor = new Vec3(y: 180f, z: 180f, w: (float) byte.MaxValue);
    private Vec3 _yellowColor = new Vec3(200f, 200f, w: (float) byte.MaxValue);
    private Vec3 _purbleColor = new Vec3((float) byte.MaxValue, z: (float) byte.MaxValue, w: (float) byte.MaxValue);
    private uint _npcDebugLineColor = 4294901760;
    private uint _chairDebugLineColor = 4278255360;
    private uint _animalDebugLineColor = 4279356620;
    private uint _semivalidChairDebugLineColor = 4294963200;
    private uint _passageDebugLineColor = 4288217241;
    private uint _missionBoundDebugLineColor = uint.MaxValue;
    private int _totalInvalidPoints;
    private int _currentInvalidPoints;
    private int _disabledFaceId;
    private int _particularfaceID;
    private Dictionary<SpawnPointDebugView.CategoryId, List<SpawnPointDebugView.InvalidPosition>> _invalidSpawnPointsDictionary = new Dictionary<SpawnPointDebugView.CategoryId, List<SpawnPointDebugView.InvalidPosition>>();
    private string allPrefabsWithParticularTag;
    private IList<SpawnPointUnits> _spUnitsList = (IList<SpawnPointUnits>) new List<SpawnPointUnits>();

    protected override void OnEditorInit()
    {
      base.OnEditorInit();
      this.DetermineSceneType();
      this.AddSpawnPointsToList(false);
    }

    protected override void OnInit()
    {
      base.OnInit();
      this.DetermineSceneType();
      this.AddSpawnPointsToList(false);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return SpawnPointDebugView.ActivateDebugUI || MBEditor.IsEditModeOn && this.ActivateDebugUIEditor ? ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement() : base.GetTickRequirement();
    }

    protected override void OnTick(float dt) => this.ToolMainFunction();

    protected override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this.ToolMainFunction();
    }

    private void ToolMainFunction()
    {
      if (!SpawnPointDebugView.ActivateDebugUI && (!MBEditor.IsEditModeOn || !this.ActivateDebugUIEditor))
        return;
      this.StartImGUIWindow("Debug Window");
      if (Mission.Current != null)
        this.ImGUITextArea("- Do Not Hide The Mouse Cursor When Debug Window Is Intersecting With The Center Of The Screen!! -", this._separatorNeeded, !this._onSameLineNeeded);
      if (this.ImGUIButton("Scene Basic Information Tab", this._normalButton))
        this.ChangeTab(true, false, false);
      this.LeaveSpaceBetweenTabs();
      if (this.ImGUIButton("Scene Entity Check Tab", this._normalButton))
        this.ChangeTab(false, true, false);
      this.LeaveSpaceBetweenTabs();
      if (this.ImGUIButton("Navigation Mesh Check Tab", this._normalButton))
        this.ChangeTab(false, false, true);
      if (this._entityInformationTab)
        this.ShowEntityInformationTab();
      if (this._basicInformationTab)
        this.ShowBasicInformationTab();
      if (this._navigationMeshCheckTab)
        this.ShowNavigationCheckTab();
      if (this._relatedEntityWindow)
        this.ShowRelatedEntity();
      this.ImGUITextArea("If there are more than one 'SpawnPointDebugView' in the scene, please remove them.", this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("If you have any questions about this tool feel free to ask Campaign team.", this._separatorNeeded, !this._onSameLineNeeded);
      this.EndImGUIWindow();
    }

    private void ShowRelatedEntity()
    {
      this.StartImGUIWindow("Entity Window");
      if (this.ImGUIButton("Close Tab", this._normalButton))
        this._relatedEntityWindow = false;
      this.ImGUITextArea("Please expand the window!", !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Prefabs with '" + this._relatedPrefabTag + "' tags are listed.", this._separatorNeeded, !this._onSameLineNeeded);
      this.FindAllPrefabsWithSelectedTag();
      this.EndImGUIWindow();
    }

    private void ShowBasicInformationTab()
    {
      this.ImGUITextArea("Tool tried to detect the scene type. If scene type is not correct or not determined", !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("please select the scene type from toggle buttons below.", this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Scene Type: " + (object) this._sceneType + " ", !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Scene Name: " + this._sceneName + " ", !this._separatorNeeded, !this._onSameLineNeeded);
      this.HandleRadioButtons();
    }

    private void HandleRadioButtons()
    {
      if (this.ImGUIButton("Town Center", this._townCenterRadioButton))
      {
        this._sceneType = SpawnPointUnits.SceneType.Center;
        this._townCenterRadioButton = false;
        this._tavernRadioButton = false;
        this._villageRadioButton = false;
        this._arenaRadioButton = false;
        this._lordshallRadioButton = false;
        this._castleRadioButton = false;
        this.AddSpawnPointsToList(true);
      }
      if (this.ImGUIButton("Tavern", this._tavernRadioButton))
      {
        this._sceneType = SpawnPointUnits.SceneType.Tavern;
        this._tavernRadioButton = false;
        this._townCenterRadioButton = false;
        this._villageRadioButton = false;
        this._arenaRadioButton = false;
        this._lordshallRadioButton = false;
        this._castleRadioButton = false;
        this.AddSpawnPointsToList(true);
      }
      if (this.ImGUIButton("Village", this._villageRadioButton))
      {
        this._sceneType = SpawnPointUnits.SceneType.VillageCenter;
        this._villageRadioButton = false;
        this._townCenterRadioButton = false;
        this._tavernRadioButton = false;
        this._arenaRadioButton = false;
        this._lordshallRadioButton = false;
        this.AddSpawnPointsToList(true);
      }
      if (this.ImGUIButton("Arena", this._arenaRadioButton))
      {
        this._sceneType = SpawnPointUnits.SceneType.Arena;
        this._arenaRadioButton = false;
        this._townCenterRadioButton = false;
        this._tavernRadioButton = false;
        this._villageRadioButton = false;
        this._lordshallRadioButton = false;
        this._castleRadioButton = false;
        this.AddSpawnPointsToList(true);
      }
      if (this.ImGUIButton("Lords Hall", this._lordshallRadioButton))
      {
        this._sceneType = SpawnPointUnits.SceneType.LordsHall;
        this._lordshallRadioButton = false;
        this._townCenterRadioButton = false;
        this._tavernRadioButton = false;
        this._villageRadioButton = false;
        this._arenaRadioButton = false;
        this._castleRadioButton = false;
        this.AddSpawnPointsToList(true);
      }
      if (!this.ImGUIButton("Castle", this._castleRadioButton))
        return;
      this._sceneType = SpawnPointUnits.SceneType.Castle;
      this._castleRadioButton = false;
      this._lordshallRadioButton = false;
      this._townCenterRadioButton = false;
      this._tavernRadioButton = false;
      this._villageRadioButton = false;
      this._arenaRadioButton = false;
      this.AddSpawnPointsToList(true);
    }

    private void ChangeTab(
      bool basicInformationTab,
      bool entityInformationTab,
      bool navigationMeshCheckTab)
    {
      this._basicInformationTab = basicInformationTab;
      this._entityInformationTab = entityInformationTab;
      this._navigationMeshCheckTab = navigationMeshCheckTab;
    }

    private void DetermineSceneType()
    {
      this._sceneName = this.Scene.GetName();
      if (this._sceneName.Contains("tavern"))
        this._sceneType = SpawnPointUnits.SceneType.Tavern;
      else if (this._sceneName.Contains("lords_hall") || this._sceneName.Contains("interior") && (this._sceneName.Contains("lords_hall") || this._sceneName.Contains("castle") || this._sceneName.Contains("keep")))
        this._sceneType = SpawnPointUnits.SceneType.LordsHall;
      else if (this._sceneName.Contains("village"))
        this._sceneType = SpawnPointUnits.SceneType.VillageCenter;
      else if (this._sceneName.Contains("town") || this._sceneName.Contains("city"))
        this._sceneType = SpawnPointUnits.SceneType.Center;
      else if (this._sceneName.Contains("dungeon"))
        this._sceneType = SpawnPointUnits.SceneType.Dungeon;
      else if (this._sceneName.Contains("hippodrome") || this._sceneName.Contains("arena"))
        this._sceneType = SpawnPointUnits.SceneType.Arena;
      else if (this._sceneName.Contains("castle") || this._sceneName.Contains("siege"))
        this._sceneType = SpawnPointUnits.SceneType.Castle;
      else if (this._sceneName.Contains("interior"))
        this._sceneType = SpawnPointUnits.SceneType.EmptyShop;
      else
        this._sceneType = SpawnPointUnits.SceneType.NotDetermined;
    }

    private void AddSpawnPointsToList(bool alreadyInitialized)
    {
      this._spUnitsList.Clear();
      if (this._sceneType == SpawnPointUnits.SceneType.Center)
      {
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_player_outside", SpawnPointUnits.SceneType.Center, "npc", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("alley_1_population", SpawnPointUnits.SceneType.Center, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("alley_2_population", SpawnPointUnits.SceneType.Center, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("alley_3_population", SpawnPointUnits.SceneType.Center, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("center_conversation_point", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_alley_1", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_alley_2", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_alley_3", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("workshop_area_1_population", SpawnPointUnits.SceneType.Center, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("workshop_area_2_population", SpawnPointUnits.SceneType.Center, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("workshop_area_3_population", SpawnPointUnits.SceneType.Center, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_workshop_1", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_workshop_2", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_workshop_3", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("workshop_1_notable_parent", SpawnPointUnits.SceneType.Center, 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("workshop_2_notable_parent", SpawnPointUnits.SceneType.Center, 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("workshop_3_notable_parent", SpawnPointUnits.SceneType.Center, 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("navigation_mesh_deactivator", SpawnPointUnits.SceneType.Center, 0, 1));
        this._spUnitsList.Add(new SpawnPointUnits("alley_marker", SpawnPointUnits.SceneType.Center, 3, 3));
        this._spUnitsList.Add(new SpawnPointUnits("workshop_area_marker", SpawnPointUnits.SceneType.Center, 3, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_outside_near_town_main_gate", SpawnPointUnits.SceneType.Center, "npc", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_dancer", SpawnPointUnits.SceneType.Center, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_cleaner", SpawnPointUnits.SceneType.Center, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("npc_beggar", SpawnPointUnits.SceneType.Center, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_notable_artisan", SpawnPointUnits.SceneType.Center, "npc", 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_notable_gangleader", SpawnPointUnits.SceneType.Center, "npc", 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_notable_merchant", SpawnPointUnits.SceneType.Center, "npc", 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_notable_preacher", SpawnPointUnits.SceneType.Center, "npc", 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_merchant", SpawnPointUnits.SceneType.Center, "npc", 1, 25));
        this._spUnitsList.Add(new SpawnPointUnits("sp_armorer", SpawnPointUnits.SceneType.Center, "npc", 1, 25));
        this._spUnitsList.Add(new SpawnPointUnits("sp_blacksmith", SpawnPointUnits.SceneType.Center, "npc", 1, 25));
        this._spUnitsList.Add(new SpawnPointUnits("sp_weaponsmith", SpawnPointUnits.SceneType.Center, "npc", 1, 25));
        this._spUnitsList.Add(new SpawnPointUnits("sp_horse_merchant", SpawnPointUnits.SceneType.Center, "npc", 1, 25));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard", SpawnPointUnits.SceneType.Center, "npc", 2, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_castle", SpawnPointUnits.SceneType.Center, "npc", 1, 2));
        this._spUnitsList.Add(new SpawnPointUnits("sp_prison_guard", SpawnPointUnits.SceneType.Center, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_patrol", SpawnPointUnits.SceneType.Center, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_unarmed", SpawnPointUnits.SceneType.Center, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_tavern_wench", SpawnPointUnits.SceneType.Center, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_tavernkeeper", SpawnPointUnits.SceneType.Center, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_barber", SpawnPointUnits.SceneType.Center, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation", SpawnPointUnits.SceneType.Center, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_tavern", SpawnPointUnits.SceneType.Center, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_arena", SpawnPointUnits.SceneType.Center, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_lordshall", SpawnPointUnits.SceneType.Center, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_prison", SpawnPointUnits.SceneType.Center, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_house_1", SpawnPointUnits.SceneType.Center, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_house_2", SpawnPointUnits.SceneType.Center, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_house_3", SpawnPointUnits.SceneType.Center, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("desert_war_horse", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("steppe_charger", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("war_horse", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("charger", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("desert_horse", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("hunter", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_sheep", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_cow", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_hog", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_goose", SpawnPointUnits.SceneType.Center, "animal", 0, int.MaxValue));
      }
      else if (this._sceneType == SpawnPointUnits.SceneType.Tavern)
      {
        this._spUnitsList.Add(new SpawnPointUnits("musician", SpawnPointUnits.SceneType.Tavern, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_tavern_wench", SpawnPointUnits.SceneType.Tavern, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_tavernkeeper", SpawnPointUnits.SceneType.Tavern, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_mercenary", SpawnPointUnits.SceneType.Tavern, "npc", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("gambler_npc", SpawnPointUnits.SceneType.Tavern, "npc", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_center", SpawnPointUnits.SceneType.Tavern, "passage", 1, 1));
      }
      else if (this._sceneType == SpawnPointUnits.SceneType.VillageCenter)
      {
        this._spUnitsList.Add(new SpawnPointUnits("sp_notable", SpawnPointUnits.SceneType.VillageCenter, "notable", 6, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_notable_rural_notable", SpawnPointUnits.SceneType.VillageCenter, "npc", 6, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation", SpawnPointUnits.SceneType.VillageCenter, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("alley_1_population", SpawnPointUnits.SceneType.VillageCenter, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("alley_2_population", SpawnPointUnits.SceneType.VillageCenter, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("alley_3_population", SpawnPointUnits.SceneType.VillageCenter, 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("center_conversation_point", SpawnPointUnits.SceneType.VillageCenter, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_alley_1", SpawnPointUnits.SceneType.VillageCenter, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_alley_2", SpawnPointUnits.SceneType.VillageCenter, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation_alley_3", SpawnPointUnits.SceneType.VillageCenter, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("alley_marker", SpawnPointUnits.SceneType.VillageCenter, 3, 3));
        this._spUnitsList.Add(new SpawnPointUnits("battle_set", SpawnPointUnits.SceneType.VillageCenter, 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("navigation_mesh_deactivator", SpawnPointUnits.SceneType.VillageCenter, 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("desert_war_horse", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("steppe_charger", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("war_horse", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("charger", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("desert_horse", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("hunter", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_sheep", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_cow", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_hog", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_goose", SpawnPointUnits.SceneType.VillageCenter, "animal", 0, int.MaxValue));
      }
      else if (this._sceneType == SpawnPointUnits.SceneType.Arena)
      {
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_tournamentmaster", SpawnPointUnits.SceneType.Arena, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_near_arena_master", SpawnPointUnits.SceneType.Arena, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("tournament_archery", SpawnPointUnits.SceneType.Arena, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("tournament_fight", SpawnPointUnits.SceneType.Arena, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("tournament_jousting", SpawnPointUnits.SceneType.Arena, 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_center", SpawnPointUnits.SceneType.Arena, "passage", 1, 1));
      }
      else if (this._sceneType == SpawnPointUnits.SceneType.LordsHall)
      {
        this._spUnitsList.Add(new SpawnPointUnits("battle_set", SpawnPointUnits.SceneType.LordsHall, 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard", SpawnPointUnits.SceneType.LordsHall, "npc", 2, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_notable", SpawnPointUnits.SceneType.LordsHall, "npc", 10, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_king", SpawnPointUnits.SceneType.LordsHall, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_throne", SpawnPointUnits.SceneType.LordsHall, "npc", 1, 2));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_center", SpawnPointUnits.SceneType.LordsHall, "passage", 1, 1));
      }
      else if (this._sceneType == SpawnPointUnits.SceneType.Castle)
      {
        this._spUnitsList.Add(new SpawnPointUnits("sp_prison_guard", SpawnPointUnits.SceneType.Castle, "npc", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard", SpawnPointUnits.SceneType.Castle, "npc", 2, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_castle", SpawnPointUnits.SceneType.Castle, "npc", 1, 2));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_patrol", SpawnPointUnits.SceneType.Castle, "npc", 1, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_unarmed", SpawnPointUnits.SceneType.Castle, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_lordshall", SpawnPointUnits.SceneType.Castle, "passage", 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("sp_player_conversation", SpawnPointUnits.SceneType.Castle, 1, int.MaxValue));
      }
      else if (this._sceneType == SpawnPointUnits.SceneType.Dungeon)
      {
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard", SpawnPointUnits.SceneType.Dungeon, "npc", 2, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_patrol", SpawnPointUnits.SceneType.Dungeon, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_guard_unarmed", SpawnPointUnits.SceneType.Dungeon, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("npc_passage_center", SpawnPointUnits.SceneType.Castle, "passage", 1, 1));
      }
      if (!alreadyInitialized)
      {
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_player", SpawnPointUnits.SceneType.All, 1, 1));
        this._spUnitsList.Add(new SpawnPointUnits("npc_common", SpawnPointUnits.SceneType.All, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("npc_common_limited", SpawnPointUnits.SceneType.All, "npc", 0, int.MaxValue));
        this._spUnitsList.Add(new SpawnPointUnits("sp_npc", SpawnPointUnits.SceneType.All, "DONTUSE", 0, 0));
        this._spUnitsList.Add(new SpawnPointUnits("spawnpoint_elder", SpawnPointUnits.SceneType.VillageCenter, "DONTUSE", 0, 0));
      }
      this._invalidSpawnPointsDictionary.Clear();
      this._invalidSpawnPointsDictionary.Add(SpawnPointDebugView.CategoryId.NPC, new List<SpawnPointDebugView.InvalidPosition>());
      this._invalidSpawnPointsDictionary.Add(SpawnPointDebugView.CategoryId.Animal, new List<SpawnPointDebugView.InvalidPosition>());
      this._invalidSpawnPointsDictionary.Add(SpawnPointDebugView.CategoryId.Chair, new List<SpawnPointDebugView.InvalidPosition>());
      this._invalidSpawnPointsDictionary.Add(SpawnPointDebugView.CategoryId.Passage, new List<SpawnPointDebugView.InvalidPosition>());
      this._invalidSpawnPointsDictionary.Add(SpawnPointDebugView.CategoryId.SemivalidChair, new List<SpawnPointDebugView.InvalidPosition>());
    }

    private List<List<string>> GetLevelCombinationsToCheck()
    {
      this.GameEntity.Scene.GetName();
      int num = this.GameEntity.Scene.GetUpgradeLevelMaskOfLevelName("siege") > 0U ? 1 : 0;
      List<List<string>> combinationsToCheck = new List<List<string>>();
      if (num != 0)
      {
        combinationsToCheck.Add(new List<string>());
        combinationsToCheck[0].Add("level_1");
        combinationsToCheck[0].Add("civilian");
        combinationsToCheck.Add(new List<string>());
        combinationsToCheck[1].Add("level_2");
        combinationsToCheck[1].Add("civilian");
        combinationsToCheck.Add(new List<string>());
        combinationsToCheck[2].Add("level_3");
        combinationsToCheck[2].Add("civilian");
      }
      else
      {
        combinationsToCheck.Add(new List<string>());
        combinationsToCheck[0].Add("base");
      }
      return combinationsToCheck;
    }

    protected override bool OnCheckForProblems()
    {
      base.OnCheckForProblems();
      bool flag1 = false;
      if (this._sceneType == SpawnPointUnits.SceneType.NotDetermined)
      {
        flag1 = true;
        MBEditor.AddEntityWarning(this.GameEntity, "Scene type could not be determined");
      }
      uint upgradeLevelMask = this.GameEntity.Scene.GetUpgradeLevelMask();
      foreach (List<string> levels in this.GetLevelCombinationsToCheck())
      {
        string str1 = "";
        for (int index = 0; index < levels.Count - 1; ++index)
          str1 = str1 + levels[index] + "|";
        string str2 = str1 + levels[levels.Count - 1];
        this.GameEntity.Scene.SetUpgradeLevelVisibility(levels);
        this.CountEntities();
        foreach (SpawnPointUnits spUnits in (IEnumerable<SpawnPointUnits>) this._spUnitsList)
        {
          if (spUnits.Place == SpawnPointUnits.SceneType.All || this._sceneType == spUnits.Place)
          {
            bool flag2 = spUnits.CurrentCount <= spUnits.MaxCount && spUnits.CurrentCount >= spUnits.MinCount;
            flag1 |= !flag2;
            if (!flag2)
            {
              string str3 = "Spawnpoint (" + spUnits.SpName + ") has some issues. ";
              string msg;
              if (spUnits.MaxCount < spUnits.CurrentCount)
                msg = str3 + "It is placed too much. Placed count(" + (object) spUnits.CurrentCount + "). Max count(" + (object) spUnits.MaxCount + "). Level: " + str2;
              else
                msg = str3 + "It is placed too less. Placed count(" + (object) spUnits.CurrentCount + "). Min count(" + (object) spUnits.MinCount + "). Level: " + str2;
              MBEditor.AddEntityWarning(this.GameEntity, msg);
            }
          }
        }
      }
      this.GameEntity.Scene.SetUpgradeLevelVisibility(upgradeLevelMask);
      this.CheckForNavigationMesh();
      foreach (List<SpawnPointDebugView.InvalidPosition> invalidPositionList in this._invalidSpawnPointsDictionary.Values)
      {
        foreach (SpawnPointDebugView.InvalidPosition invalidPosition in invalidPositionList)
        {
          if (!invalidPosition.doNotShowWarning)
          {
            string msg;
            if (invalidPosition.isDisabledNavMesh)
              msg = "Special entity with name (" + invalidPosition.entity.Name + ") has a navigation mesh below which is deactivated by the deactivater script. Position " + (object) invalidPosition.position.x + " , " + (object) invalidPosition.position.y + " , " + (object) invalidPosition.position.z + ".";
            else
              msg = "Special entity with name (" + invalidPosition.entity.Name + ") has no navigation mesh below. Position " + (object) invalidPosition.position.x + " , " + (object) invalidPosition.position.y + " , " + (object) invalidPosition.position.z + ".";
            MBEditor.AddEntityWarning(invalidPosition.entity, msg);
            flag1 = true;
          }
        }
      }
      return flag1;
    }

    private void ShowEntityInformationTab()
    {
      this.ImGUITextArea("This tab calculates the spawnpoint counts and warns you if", !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("counts are not in the given criteria.", this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Click 'Count Entities' button to calculate and toggle categories.", this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("You can use the list button to list all the prefabs with tag.", this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Current Townsfolk count: " + (object) this._currentTownsfolkCount, this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUICheckBox("NPCs ", ref this._showNPCsList, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUICheckBox("Animals ", ref this._showAnimalsList, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUICheckBox("Passages ", ref this._showPassagesList, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUICheckBox("Others ", ref this._showOthersList, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUICheckBox("DONT USE ", ref this._showDontUseList, this._separatorNeeded, !this._onSameLineNeeded);
      this.WriteTableHeaders();
      foreach (SpawnPointUnits spUnits in (IEnumerable<SpawnPointUnits>) this._spUnitsList)
      {
        if (spUnits.Place == SpawnPointUnits.SceneType.All)
        {
          if (spUnits.CurrentCount > spUnits.MaxCount || spUnits.CurrentCount < spUnits.MinCount)
            this.WriteLineOfTableDebug(spUnits, this._redColor, spUnits.Type);
          else
            this.WriteLineOfTableDebug(spUnits, this._greenColor, spUnits.Type);
        }
        else if (this._sceneType == spUnits.Place)
        {
          if (spUnits.CurrentCount > spUnits.MaxCount || spUnits.CurrentCount < spUnits.MinCount)
            this.WriteLineOfTableDebug(spUnits, this._redColor, spUnits.Type);
          else
            this.WriteLineOfTableDebug(spUnits, this._greenColor, spUnits.Type);
        }
      }
      if (!this.ImGUIButton("COUNT ENTITIES", this._normalButton))
        return;
      this.CountEntities();
    }

    private void CalculateSpawnedAgentCount(SpawnPointUnits spUnit)
    {
      if (spUnit.SpName == "npc_common")
        spUnit.SpawnedAgentCount = (int) ((double) spUnit.CurrentCount * 0.20000000298023224 + 0.15000000596046448);
      else if (spUnit.SpName == "npc_common_limited")
        spUnit.SpawnedAgentCount = (int) ((double) spUnit.CurrentCount * 0.15000000596046448 + 0.10000000149011612);
      else if (spUnit.SpName == "npc_beggar")
        spUnit.SpawnedAgentCount = (int) ((double) spUnit.CurrentCount * 0.33000001311302185);
      else if (spUnit.SpName == "spawnpoint_cleaner" || spUnit.SpName == "npc_dancer" || spUnit.SpName == "sp_guard_patrol" || spUnit.SpName == "sp_guard")
        spUnit.SpawnedAgentCount = spUnit.CurrentCount;
      else if (spUnit.CurrentCount != 0)
        spUnit.SpawnedAgentCount = 1;
      this._currentTownsfolkCount += spUnit.SpawnedAgentCount;
    }

    private void CountEntities()
    {
      this._currentTownsfolkCount = 0;
      foreach (SpawnPointUnits spUnit in this._spUnitsList.ToList<SpawnPointUnits>())
      {
        List<GameEntity> list1 = this.Scene.FindEntitiesWithTag(spUnit.SpName).ToList<GameEntity>();
        int num = 0;
        foreach (GameEntity gameEntity in list1)
        {
          if (gameEntity.GetEditModeLevelVisibility())
            ++num;
        }
        spUnit.CurrentCount = num;
        this.CalculateSpawnedAgentCount(spUnit);
        this.CountPassages(spUnit);
        foreach (GameEntity gameEntity in list1)
        {
          if (gameEntity.IsGhostObject())
            --spUnit.CurrentCount;
        }
        if (spUnit.SpName == "navigation_mesh_deactivator")
        {
          this._disabledFaceId = -1;
          foreach (GameEntity gameEntity in list1)
          {
            NavigationMeshDeactivator firstScriptOfType = gameEntity.GetFirstScriptOfType<NavigationMeshDeactivator>();
            if (firstScriptOfType != null && firstScriptOfType.GameEntity.GetEditModeLevelVisibility())
              this._disabledFaceId = firstScriptOfType.DisableFaceWithId;
          }
        }
        else if (spUnit.SpName == "alley_marker")
          this.CheckForCommonAreas((IEnumerable<GameEntity>) list1, spUnit);
        else if (spUnit.SpName == "workshop_area_marker")
          this.CheckForWorkshops((IEnumerable<GameEntity>) list1, spUnit);
        else if (spUnit.SpName == "center_conversation_point")
        {
          List<GameEntity> list2 = this.Scene.FindEntitiesWithTag("sp_player_conversation").ToList<GameEntity>();
          List<GameEntity> list3 = this.Scene.FindEntitiesWithTag("alley_marker").ToList<GameEntity>();
          foreach (GameEntity gameEntity1 in list2)
          {
            bool flag = false;
            foreach (GameEntity gameEntity2 in list3)
            {
              if (gameEntity2.GetFirstScriptOfType<CommonAreaMarker>().IsPositionInRange(gameEntity1.GlobalPosition))
              {
                flag = true;
                break;
              }
            }
            if (!flag)
            {
              SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "center_conversation_point" && x.Place == this._sceneType));
              if (spawnPointUnits != null)
                ++spawnPointUnits.CurrentCount;
            }
          }
        }
      }
    }

    private void CheckForCommonAreas(
      IEnumerable<GameEntity> allGameEntitiesWithGivenTag,
      SpawnPointUnits spUnit)
    {
      foreach (GameEntity gameEntity1 in allGameEntitiesWithGivenTag)
      {
        CommonAreaMarker alleyMarker = gameEntity1.GetFirstScriptOfType<CommonAreaMarker>();
        if (alleyMarker != null && !gameEntity1.IsGhostObject())
        {
          float areaRadius = alleyMarker.AreaRadius;
          List<GameEntity> list1 = this.Scene.FindEntitiesWithTag("npc_common").ToList<GameEntity>();
          foreach (GameEntity gameEntity2 in list1.ToList<GameEntity>())
          {
            float num = areaRadius * areaRadius;
            if (gameEntity2.HasScriptOfType<Passage>() || !gameEntity2.IsVisibleIncludeParents() || (double) gameEntity2.GlobalPosition.DistanceSquared(gameEntity1.GlobalPosition) > (double) num)
              list1.Remove(gameEntity2);
          }
          List<GameEntity> list2 = this.Scene.FindEntitiesWithTag("sp_player_conversation").ToList<GameEntity>();
          int num1 = 0;
          foreach (GameEntity gameEntity3 in list2)
          {
            if (alleyMarker.IsPositionInRange(gameEntity3.GlobalPosition))
            {
              SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "sp_player_conversation_alley_" + (object) alleyMarker.AreaIndex && x.Place == this._sceneType));
              if (spawnPointUnits != null)
                spawnPointUnits.CurrentCount = ++num1;
            }
          }
          if (alleyMarker.AreaIndex == 1)
          {
            SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "alley_1_population" && x.Place == this._sceneType));
            if (spawnPointUnits != null)
              spawnPointUnits.CurrentCount = this.FindValidSpawnPointCountOfUsableMachine(list1);
          }
          else if (alleyMarker.AreaIndex == 2)
          {
            SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "alley_2_population" && x.Place == this._sceneType));
            if (spawnPointUnits != null)
              spawnPointUnits.CurrentCount = this.FindValidSpawnPointCountOfUsableMachine(list1);
          }
          else if (alleyMarker.AreaIndex == 3)
          {
            SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "alley_3_population" && x.Place == this._sceneType));
            if (spawnPointUnits != null)
              spawnPointUnits.CurrentCount = this.FindValidSpawnPointCountOfUsableMachine(list1);
          }
        }
      }
    }

    private void CheckForWorkshops(
      IEnumerable<GameEntity> allGameEntitiesWithGivenTag,
      SpawnPointUnits spUnit)
    {
      foreach (GameEntity gameEntity1 in allGameEntitiesWithGivenTag)
      {
        WorkshopAreaMarker workshopAreaMarker = gameEntity1.GetFirstScriptOfType<WorkshopAreaMarker>();
        if (workshopAreaMarker != null && !gameEntity1.IsGhostObject())
        {
          double areaRadius = (double) workshopAreaMarker.AreaRadius;
          List<GameEntity> entities = new List<GameEntity>();
          this.Scene.GetEntities(ref entities);
          float num1 = (float) (areaRadius * areaRadius);
          foreach (GameEntity gameEntity2 in entities.ToList<GameEntity>())
          {
            if (!gameEntity2.HasScriptOfType<UsableMachine>() || gameEntity2.HasScriptOfType<Passage>() || (double) gameEntity2.GlobalPosition.DistanceSquared(gameEntity1.GlobalPosition) > (double) num1)
              entities.Remove(gameEntity2);
          }
          foreach (GameEntity gameEntity3 in this.Scene.FindEntitiesWithTag("sp_notables_parent").ToList<GameEntity>())
          {
            if ((double) gameEntity3.GlobalPosition.DistanceSquared(gameEntity1.GlobalPosition) < (double) num1)
            {
              if (workshopAreaMarker.AreaIndex == 1)
              {
                SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "workshop_1_notable_parent" && x.Place == this._sceneType));
                if (spawnPointUnits != null)
                  spawnPointUnits.CurrentCount = 1;
              }
              else if (workshopAreaMarker.AreaIndex == 2)
              {
                SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "workshop_2_notable_parent" && x.Place == this._sceneType));
                if (spawnPointUnits != null)
                  spawnPointUnits.CurrentCount = 1;
              }
              else if (workshopAreaMarker.AreaIndex == 3)
              {
                SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "workshop_3_notable_parent" && x.Place == this._sceneType));
                if (spawnPointUnits != null)
                  spawnPointUnits.CurrentCount = 1;
              }
            }
          }
          List<GameEntity> list = this.Scene.FindEntitiesWithTag("sp_player_conversation").ToList<GameEntity>();
          int num2 = 0;
          foreach (GameEntity gameEntity4 in list)
          {
            if (workshopAreaMarker.IsPositionInRange(gameEntity4.GlobalPosition))
            {
              SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "sp_player_conversation_workshop_" + (object) workshopAreaMarker.AreaIndex && x.Place == this._sceneType));
              if (spawnPointUnits != null)
                spawnPointUnits.CurrentCount = ++num2;
            }
          }
          if (workshopAreaMarker.AreaIndex == 1)
          {
            SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "workshop_area_1_population" && x.Place == this._sceneType));
            if (spawnPointUnits != null)
              spawnPointUnits.CurrentCount += this.FindValidSpawnPointCountOfUsableMachine(entities);
          }
          else if (workshopAreaMarker.AreaIndex == 2)
          {
            SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "workshop_area_2_population" && x.Place == this._sceneType));
            if (spawnPointUnits != null)
              spawnPointUnits.CurrentCount += this.FindValidSpawnPointCountOfUsableMachine(entities);
          }
          else if (workshopAreaMarker.AreaIndex == 3)
          {
            SpawnPointUnits spawnPointUnits = this._spUnitsList.FirstOrDefault<SpawnPointUnits>((Func<SpawnPointUnits, bool>) (x => x.SpName == "workshop_area_3_population" && x.Place == this._sceneType));
            if (spawnPointUnits != null)
              spawnPointUnits.CurrentCount += this.FindValidSpawnPointCountOfUsableMachine(entities);
          }
        }
      }
    }

    private int FindValidSpawnPointCountOfUsableMachine(List<GameEntity> gameEntities)
    {
      int countOfUsableMachine = 0;
      foreach (GameEntity gameEntity in gameEntities)
      {
        UsableMachine firstScriptOfType = gameEntity.GetFirstScriptOfType<UsableMachine>();
        if (firstScriptOfType != null)
          countOfUsableMachine += MissionAgentHandler.GetPointCountOfUsableMachine(firstScriptOfType, false);
      }
      return countOfUsableMachine;
    }

    private void CountPassages(SpawnPointUnits spUnit)
    {
      if (!spUnit.SpName.Contains("npc_passage"))
        return;
      foreach (GameEntity gameEntity in this.Scene.FindEntitiesWithTag("npc_passage"))
      {
        foreach (GameEntity child in gameEntity.GetChildren())
        {
          PassageUsePoint firstScriptOfType = child.GetFirstScriptOfType<PassageUsePoint>();
          if (firstScriptOfType != null && !child.IsGhostObject() && child.GetEditModeLevelVisibility() && (this.DetectWhichPassage(firstScriptOfType, spUnit.SpName, "tavern") || this.DetectWhichPassage(firstScriptOfType, spUnit.SpName, "arena") || this.DetectWhichPassage(firstScriptOfType, spUnit.SpName, "prison") || this.DetectWhichPassage(firstScriptOfType, spUnit.SpName, "lordshall") || this.DetectWhichPassage(firstScriptOfType, spUnit.SpName, "house_1") || this.DetectWhichPassage(firstScriptOfType, spUnit.SpName, "house_2") || this.DetectWhichPassage(firstScriptOfType, spUnit.SpName, "house_3")))
            ++spUnit.CurrentCount;
        }
      }
    }

    private void CalculateCurrentInvalidPointsCount()
    {
      this._currentInvalidPoints = 0;
      if (this._showAnimals)
        this._currentInvalidPoints += this.GetCategoryCount(SpawnPointDebugView.CategoryId.Animal);
      if (this._showChairs)
        this._currentInvalidPoints += this.GetCategoryCount(SpawnPointDebugView.CategoryId.Chair);
      if (this._showNPCs)
        this._currentInvalidPoints += this.GetCategoryCount(SpawnPointDebugView.CategoryId.NPC);
      if (this._showSemiValidPoints)
        this._currentInvalidPoints += this.GetCategoryCount(SpawnPointDebugView.CategoryId.SemivalidChair);
      if (this._showPassagePoints)
        this._currentInvalidPoints += this.GetCategoryCount(SpawnPointDebugView.CategoryId.Passage);
      if (!this._showOutOfBoundPoints)
        return;
      this._currentInvalidPoints += this.GetCategoryCount(SpawnPointDebugView.CategoryId.OutOfMissionBound);
    }

    private bool DetectWhichPassage(
      PassageUsePoint passageUsePoint,
      string spName,
      string locationName)
    {
      string toLocationId = passageUsePoint.ToLocationId;
      if (this._sceneType != SpawnPointUnits.SceneType.Center && this._sceneType != SpawnPointUnits.SceneType.Castle)
        locationName = "center";
      string str = locationName;
      return toLocationId == str && spName == "npc_passage_" + locationName;
    }

    private void ShowNavigationCheckTab()
    {
      this.WriteNavigationMeshTabTexts();
      this.ToggleButtons();
      this.CalculateCurrentInvalidPointsCount();
      if (!this.ImGUIButton("CHECK", this._normalButton))
        return;
      this.CheckForNavigationMesh();
    }

    private void CheckForNavigationMesh()
    {
      this.ClearAllLists();
      this.CountEntities();
      foreach (SpawnPointUnits spUnits in (IEnumerable<SpawnPointUnits>) this._spUnitsList)
      {
        if (!(spUnits.SpName == "alley_marker") && !(spUnits.SpName == "navigation_mesh_deactivator"))
        {
          this.CheckIfPassage(spUnits);
          this.CheckIfChairOrAnimal(spUnits);
        }
      }
      this.RemoveDuplicateValuesInLists();
    }

    private void CheckNavigationMeshForParticularEntity(
      GameEntity gameEntity,
      SpawnPointDebugView.CategoryId categoryId)
    {
      if (gameEntity.Name == "workshop_1" || gameEntity.Name == "workshop_2" || gameEntity.Name == "workshop_3")
        return;
      Vec3 origin = gameEntity.GetGlobalFrame().origin;
      if (gameEntity.HasScriptOfType<NavigationMeshDeactivator>() || !MBEditor.IsEditModeOn || !gameEntity.GetEditModeLevelVisibility() || !gameEntity.HasScriptOfType<StandingPoint>())
        return;
      if (Mission.Current != null && !Mission.Current.IsPositionInsideBoundaries(origin.AsVec2))
        this.AddPositionToInvalidList(categoryId, origin, gameEntity, false);
      this._particularfaceID = -1;
      if (this.Scene.GetNavigationMeshForPosition(ref origin, out this._particularfaceID))
      {
        if (!gameEntity.Name.Contains("player") && this._particularfaceID == this._disabledFaceId && (this._sceneType == SpawnPointUnits.SceneType.Center || this._sceneType == SpawnPointUnits.SceneType.VillageCenter) && categoryId != SpawnPointDebugView.CategoryId.Chair && categoryId != SpawnPointDebugView.CategoryId.Animal)
        {
          if ((NativeObject) gameEntity.Parent != (NativeObject) null && gameEntity.Parent.Name == "sp_battle_set")
            return;
          this.AddPositionToInvalidList(categoryId, origin, gameEntity, true);
        }
        else
        {
          if (!((NativeObject) gameEntity.Parent != (NativeObject) null))
            return;
          this.CheckSemiValidsOfChair(gameEntity);
        }
      }
      else if (categoryId == SpawnPointDebugView.CategoryId.Chair && (NativeObject) gameEntity.Parent != (NativeObject) null)
        this.CheckSemiValidsOfChair(gameEntity);
      else
        this.AddPositionToInvalidList(categoryId, origin, gameEntity, false);
    }

    private void CheckSemiValidsOfChair(GameEntity gameEntity)
    {
      AnimationPoint firstScriptOfType = gameEntity.GetFirstScriptOfType<AnimationPoint>();
      if (firstScriptOfType == null)
        return;
      bool flag1 = false;
      bool flag2 = false;
      List<AnimationPoint> alternatives = firstScriptOfType.GetAlternatives();
      if (alternatives != null && !alternatives.IsEmpty<AnimationPoint>())
      {
        foreach (AnimationPoint animationPoint in alternatives)
        {
          Vec3 origin = animationPoint.GameEntity.GetGlobalFrame().origin;
          if ((this.Scene.GetNavigationMeshForPosition(ref origin, out this._particularfaceID) || animationPoint.GameEntity.IsGhostObject()) && this._particularfaceID != this._disabledFaceId)
          {
            flag1 = true;
            if (animationPoint == firstScriptOfType)
              flag2 = true;
          }
        }
        if (flag2)
          return;
        if (flag1)
          this.AddPositionToInvalidList(SpawnPointDebugView.CategoryId.SemivalidChair, firstScriptOfType.GameEntity.GetGlobalFrame().origin, gameEntity, false, true);
        else
          this.AddPositionToInvalidList(SpawnPointDebugView.CategoryId.Chair, firstScriptOfType.GameEntity.GetGlobalFrame().origin, gameEntity, false);
      }
      else
      {
        Vec3 origin = firstScriptOfType.GameEntity.GetGlobalFrame().origin;
        if (this.Scene.GetNavigationMeshForPosition(ref origin) || firstScriptOfType.GameEntity.IsGhostObject())
          return;
        this.AddPositionToInvalidList(SpawnPointDebugView.CategoryId.Chair, origin, gameEntity, false);
      }
    }

    private void CheckIfChairOrAnimal(SpawnPointUnits spUnit)
    {
      foreach (GameEntity gameEntity1 in this.Scene.FindEntitiesWithTag(spUnit.SpName))
      {
        IEnumerable<GameEntity> children = gameEntity1.GetChildren();
        if (children.Count<GameEntity>() != 0)
        {
          foreach (GameEntity gameEntity2 in children)
          {
            if (gameEntity2.Name.Contains("chair") && !gameEntity2.IsGhostObject())
              this.CheckNavigationMeshForParticularEntity(gameEntity2, SpawnPointDebugView.CategoryId.Chair);
            else if (!gameEntity2.IsGhostObject() && !gameEntity2.IsGhostObject())
              this.CheckNavigationMeshForParticularEntity(gameEntity2, SpawnPointDebugView.CategoryId.NPC);
          }
        }
        else if (spUnit.Type == "animal" && !gameEntity1.IsGhostObject())
          this.CheckNavigationMeshForParticularEntity(gameEntity1, SpawnPointDebugView.CategoryId.Animal);
        else if (!gameEntity1.IsGhostObject())
          this.CheckNavigationMeshForParticularEntity(gameEntity1, SpawnPointDebugView.CategoryId.NPC);
      }
    }

    private void CheckIfPassage(SpawnPointUnits spUnit)
    {
      if (!spUnit.SpName.Contains("passage"))
        return;
      foreach (GameEntity gameEntity in this.Scene.FindEntitiesWithTag("npc_passage"))
      {
        foreach (GameEntity child in gameEntity.GetChildren())
        {
          if (child.Name.Contains("passage") && !child.IsGhostObject())
          {
            this.CheckNavigationMeshForParticularEntity(child, SpawnPointDebugView.CategoryId.Passage);
            break;
          }
        }
      }
    }

    private void RemoveDuplicateValuesInLists()
    {
      this._invalidSpawnPointsDictionary = this._invalidSpawnPointsDictionary.ToDictionary<KeyValuePair<SpawnPointDebugView.CategoryId, List<SpawnPointDebugView.InvalidPosition>>, SpawnPointDebugView.CategoryId, List<SpawnPointDebugView.InvalidPosition>>((Func<KeyValuePair<SpawnPointDebugView.CategoryId, List<SpawnPointDebugView.InvalidPosition>>, SpawnPointDebugView.CategoryId>) (c => c.Key), (Func<KeyValuePair<SpawnPointDebugView.CategoryId, List<SpawnPointDebugView.InvalidPosition>>, List<SpawnPointDebugView.InvalidPosition>>) (c => c.Value.Distinct<SpawnPointDebugView.InvalidPosition>().ToList<SpawnPointDebugView.InvalidPosition>()));
      if (!this._invalidSpawnPointsDictionary.ContainsKey(SpawnPointDebugView.CategoryId.SemivalidChair))
        return;
      foreach (SpawnPointDebugView.InvalidPosition invalidPosition in this._invalidSpawnPointsDictionary[SpawnPointDebugView.CategoryId.SemivalidChair])
      {
        if (this._invalidSpawnPointsDictionary[SpawnPointDebugView.CategoryId.Chair].Contains(invalidPosition))
          this._invalidSpawnPointsDictionary[SpawnPointDebugView.CategoryId.Chair].Remove(invalidPosition);
      }
    }

    private void AddPositionToInvalidList(
      SpawnPointDebugView.CategoryId categoryId,
      Vec3 globalPosition,
      GameEntity entity,
      bool isDisabledNavMesh,
      bool doNotShowWarning = false)
    {
      if (entity.IsGhostObject() || !entity.IsVisibleIncludeParents() || !this._invalidSpawnPointsDictionary.ContainsKey(categoryId))
        return;
      SpawnPointDebugView.InvalidPosition invalidPosition;
      invalidPosition.position = globalPosition;
      invalidPosition.entity = entity;
      invalidPosition.isDisabledNavMesh = isDisabledNavMesh;
      invalidPosition.doNotShowWarning = doNotShowWarning;
      if (!this._invalidSpawnPointsDictionary[categoryId].All<SpawnPointDebugView.InvalidPosition>((Func<SpawnPointDebugView.InvalidPosition, bool>) (x => x.position != globalPosition)))
        return;
      this._invalidSpawnPointsDictionary[categoryId].Add(invalidPosition);
    }

    private void ToggleButtons()
    {
      if (this._showNPCs)
        this.DrawDebugLinesForInvalidSpawnPoints(SpawnPointDebugView.CategoryId.NPC, this._npcDebugLineColor);
      if (this._showChairs)
        this.DrawDebugLinesForInvalidSpawnPoints(SpawnPointDebugView.CategoryId.Chair, this._chairDebugLineColor);
      if (this._showAnimals)
        this.DrawDebugLinesForInvalidSpawnPoints(SpawnPointDebugView.CategoryId.Animal, this._animalDebugLineColor);
      if (this._showSemiValidPoints)
        this.DrawDebugLinesForInvalidSpawnPoints(SpawnPointDebugView.CategoryId.SemivalidChair, this._semivalidChairDebugLineColor);
      if (this._showPassagePoints)
        this.DrawDebugLinesForInvalidSpawnPoints(SpawnPointDebugView.CategoryId.Passage, this._passageDebugLineColor);
      if (!this._showOutOfBoundPoints)
        return;
      this.DrawDebugLinesForInvalidSpawnPoints(SpawnPointDebugView.CategoryId.OutOfMissionBound, this._missionBoundDebugLineColor);
    }

    private void FindAllPrefabsWithSelectedTag()
    {
      if (this.allPrefabsWithParticularTag == null)
        return;
      string withParticularTag = this.allPrefabsWithParticularTag;
      char[] chArray = new char[1]{ '/' };
      foreach (string text in withParticularTag.Split(chArray))
        this.ImGUITextArea(text, !this._separatorNeeded, !this._onSameLineNeeded);
    }

    private void FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId CategoryId)
    {
      List<SpawnPointDebugView.InvalidPosition> invalidPositionList;
      this._invalidSpawnPointsDictionary.TryGetValue(CategoryId, out invalidPositionList);
      if (invalidPositionList.Count == 0 || this._cameraFocusIndex < 0 || this._cameraFocusIndex >= invalidPositionList.Count)
      {
        this._cameraFocusIndex = 0;
      }
      else
      {
        MBEditor.ZoomToPosition(invalidPositionList[this._cameraFocusIndex].position);
        this._cameraFocusIndex = this._cameraFocusIndex >= invalidPositionList.Count - 1 ? (this._cameraFocusIndex = 0) : ++this._cameraFocusIndex;
      }
    }

    private int GetCategoryCount(SpawnPointDebugView.CategoryId CategoryId)
    {
      int categoryCount = 0;
      if (this._invalidSpawnPointsDictionary.ContainsKey(CategoryId))
        categoryCount = this._invalidSpawnPointsDictionary[CategoryId].Count;
      return categoryCount;
    }

    private void ClearAllLists()
    {
      foreach (KeyValuePair<SpawnPointDebugView.CategoryId, List<SpawnPointDebugView.InvalidPosition>> invalidSpawnPoints in this._invalidSpawnPointsDictionary)
        invalidSpawnPoints.Value.Clear();
    }

    private bool ImGUIButton(string buttonText, bool smallButton)
    {
      return smallButton ? Imgui.SmallButton(buttonText) : Imgui.Button(buttonText);
    }

    private void LeaveSpaceBetweenTabs()
    {
      this.OnSameLine();
      this.ImGUITextArea(" ", !this._separatorNeeded, this._onSameLineNeeded);
    }

    private void EndImGUIWindow()
    {
      Imgui.End();
      Imgui.EndMainThreadScope();
    }

    private void StartImGUIWindow(string str)
    {
      Imgui.BeginMainThreadScope();
      Imgui.Begin(str);
    }

    private void ImGUITextArea(string text, bool separatorNeeded, bool onSameLine)
    {
      Imgui.Text(text);
      this.ImGUISeparatorSameLineHandler(separatorNeeded, onSameLine);
    }

    private void ImGUICheckBox(
      string text,
      ref bool is_checked,
      bool separatorNeeded,
      bool onSameLine)
    {
      Imgui.Checkbox(text, ref is_checked);
      this.ImGUISeparatorSameLineHandler(separatorNeeded, onSameLine);
    }

    private void ImguiSameLine(float positionX, float spacingWidth)
    {
      Imgui.SameLine(positionX, spacingWidth);
    }

    private void ImGUISeparatorSameLineHandler(bool separatorNeeded, bool onSameLine)
    {
      if (separatorNeeded)
        this.Separator();
      if (!onSameLine)
        return;
      this.OnSameLine();
    }

    private void OnSameLine() => Imgui.SameLine();

    private void Separator() => Imgui.Separator();

    private void WriteLineOfTableDebug(SpawnPointUnits spUnit, Vec3 Color, string type)
    {
      if ((!(type == "animal") || !this._showAnimalsList) && (!(type == "npc") || !this._showNPCsList) && (!(type == "passage") || !this._showPassagesList) && (!(type == "DONTUSE") || !this._showDontUseList) && (!(type == "other") || !this._showOthersList))
        return;
      Imgui.PushStyleColor(Imgui.ColorStyle.Text, ref Color);
      this.ImguiSameLine(0.0f, 0.0f);
      this.ImGUITextArea(spUnit.SpName, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(305f, 10f);
      this.ImGUITextArea(spUnit.MinCount.ToString(), !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(345f, 10f);
      this.ImGUITextArea(spUnit.MaxCount == int.MaxValue ? "-" : spUnit.MaxCount.ToString(), !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(405f, 10f);
      this.ImGUITextArea(spUnit.CurrentCount.ToString(), !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(500f, 10f);
      this.ImGUITextArea(spUnit.SpawnedAgentCount.ToString(), !this._separatorNeeded, this._onSameLineNeeded);
      Imgui.PopStyleColor();
      this.ImguiSameLine(575f, 10f);
      if (this.ImGUIButton(spUnit.SpName, this._normalButton))
      {
        this._relatedEntityWindow = true;
        this._relatedPrefabTag = spUnit.SpName;
        this.allPrefabsWithParticularTag = MBEditor.GetAllPrefabsAndChildWithTag(this._relatedPrefabTag);
      }
      this.ImGUITextArea(" ", !this._separatorNeeded, !this._onSameLineNeeded);
    }

    private void WriteNavigationMeshTabTexts()
    {
      this.ImGUITextArea("This tool will mark the spawn points which are not on the navigation mesh", !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("or on the navigation mesh that will be deactivated by 'Navigation Mesh Deactivator'", !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Deactivation Face Id: " + (object) this._disabledFaceId, !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Click 'CHECK' button to calculate.", this._separatorNeeded, !this._onSameLineNeeded);
      Imgui.PushStyleColor(Imgui.ColorStyle.Text, ref this._redColor);
      this.ImGUICheckBox("Show NPCs ", ref this._showNPCs, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUITextArea("(" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.NPC) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      if (this._showNPCs)
      {
        if (this.ImGUIButton("<Previous NPC", this._normalButton))
        {
          this._cameraFocusIndex -= 2;
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.NPC);
        }
        this.ImguiSameLine(120f, 20f);
        if (this.ImGUIButton("Next NPC>", this._normalButton))
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.NPC);
        this.ImGUITextArea((this._cameraFocusIndex + 1).ToString() + " (" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.NPC) + ")", this._separatorNeeded, !this._onSameLineNeeded);
      }
      Imgui.PopStyleColor();
      Imgui.PushStyleColor(Imgui.ColorStyle.Text, ref this._blueColor);
      this.ImGUICheckBox("Show Animals ", ref this._showAnimals, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUITextArea("(" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.Animal) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      if (this._showAnimals)
      {
        if (this.ImGUIButton("<Previous Animal", this._normalButton))
        {
          this._cameraFocusIndex -= 2;
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.Animal);
        }
        this.ImguiSameLine(120f, 20f);
        if (this.ImGUIButton("Next Animal>", this._normalButton))
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.Animal);
        this.ImGUITextArea((this._cameraFocusIndex + 1).ToString() + " (" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.Animal) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      }
      Imgui.PopStyleColor();
      Imgui.PushStyleColor(Imgui.ColorStyle.Text, ref this._purbleColor);
      this.ImGUICheckBox("Show Passages ", ref this._showPassagePoints, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUITextArea("(" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.Passage) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      if (this._showPassagePoints)
      {
        if (this.ImGUIButton("<Previous Passage", this._normalButton))
        {
          this._cameraFocusIndex -= 2;
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.Passage);
        }
        this.ImguiSameLine(120f, 20f);
        if (this.ImGUIButton("Next Passage>", this._normalButton))
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.Passage);
        this.ImGUITextArea((this._cameraFocusIndex + 1).ToString() + " (" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.Passage) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      }
      Imgui.PopStyleColor();
      Imgui.PushStyleColor(Imgui.ColorStyle.Text, ref this._greenColor);
      this.ImGUICheckBox("Show Chairs ", ref this._showChairs, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUITextArea("(" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.Chair) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      if (this._showChairs)
      {
        if (this.ImGUIButton("<Previous Chair", this._normalButton))
        {
          this._cameraFocusIndex -= 2;
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.Chair);
        }
        this.ImguiSameLine(120f, 20f);
        if (this.ImGUIButton("Next Chair>", this._normalButton))
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.Chair);
        this.ImGUITextArea((this._cameraFocusIndex + 1).ToString() + " (" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.Chair) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      }
      Imgui.PopStyleColor();
      Imgui.PushStyleColor(Imgui.ColorStyle.Text, ref this._yellowColor);
      this.ImGUICheckBox("Show semi-valid Chairs* ", ref this._showSemiValidPoints, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUITextArea("(" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.SemivalidChair) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      if (this._showSemiValidPoints)
      {
        if (this.ImGUIButton("<Previous S-Chair", this._normalButton))
        {
          this._cameraFocusIndex -= 2;
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.SemivalidChair);
        }
        this.ImguiSameLine(120f, 20f);
        if (this.ImGUIButton("Next S-Chair>", this._normalButton))
          this.FocusCameraToMisplacedObjects(SpawnPointDebugView.CategoryId.SemivalidChair);
        this.ImGUITextArea((this._cameraFocusIndex + 1).ToString() + " (" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.SemivalidChair) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      }
      Imgui.PopStyleColor();
      this.ImGUICheckBox("Show out of Mission Bound Points**", ref this._showOutOfBoundPoints, !this._separatorNeeded, this._onSameLineNeeded);
      this.ImGUITextArea(" (" + (object) this.GetCategoryCount(SpawnPointDebugView.CategoryId.OutOfMissionBound) + ")", !this._separatorNeeded, !this._onSameLineNeeded);
      this._totalInvalidPoints = this.GetCategoryCount(SpawnPointDebugView.CategoryId.NPC) + this.GetCategoryCount(SpawnPointDebugView.CategoryId.Chair) + this.GetCategoryCount(SpawnPointDebugView.CategoryId.Animal) + this.GetCategoryCount(SpawnPointDebugView.CategoryId.SemivalidChair) + this.GetCategoryCount(SpawnPointDebugView.CategoryId.Passage) + this.GetCategoryCount(SpawnPointDebugView.CategoryId.OutOfMissionBound);
      this.ImGUITextArea("(" + (object) this._currentInvalidPoints + " / " + (object) this._totalInvalidPoints + " ) are being shown.", !this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("Found " + (object) this._totalInvalidPoints + " invalid spawnpoints.", this._separatorNeeded, !this._onSameLineNeeded);
      this.ImGUITextArea("* Points that have at least one valid point as alternative", this._separatorNeeded, !this._onSameLineNeeded);
      if (Mission.Current != null)
        return;
      this.ImGUITextArea("** Mission bound checking feature is not working in editor. Open mission to check it.", this._separatorNeeded, !this._onSameLineNeeded);
    }

    private void DrawDebugLinesForInvalidSpawnPoints(
      SpawnPointDebugView.CategoryId CategoryId,
      uint color)
    {
      if (!this._invalidSpawnPointsDictionary.ContainsKey(CategoryId))
        return;
      foreach (SpawnPointDebugView.InvalidPosition invalidPosition in this._invalidSpawnPointsDictionary[CategoryId])
        ;
    }

    private void WriteTableHeaders()
    {
      this.ImguiSameLine(0.0f, 0.0f);
      this.ImGUITextArea("Tag Name", !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(295f, 10f);
      this.ImGUITextArea("Min", !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(340f, 10f);
      this.ImGUITextArea("Max", !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(390f, 10f);
      this.ImGUITextArea("Current", !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(465f, 10f);
      this.ImGUITextArea("Agent Count", !this._separatorNeeded, this._onSameLineNeeded);
      this.ImguiSameLine(575f, 10f);
      this.ImGUITextArea("List all prefabs with tag:", this._separatorNeeded, !this._onSameLineNeeded);
    }

    private enum CategoryId
    {
      NPC,
      Animal,
      Chair,
      Passage,
      OutOfMissionBound,
      SemivalidChair,
    }

    private struct InvalidPosition
    {
      public Vec3 position;
      public GameEntity entity;
      public bool isDisabledNavMesh;
      public bool doNotShowWarning;
    }
  }
}
