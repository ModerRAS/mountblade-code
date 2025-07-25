// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionAgentHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Missions.AgentBehaviors;
using SandBox.Objects.AnimationPoints;
using SandBox.Objects.Usables;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Objects;
using TaleWorlds.MountAndBlade.Source.Objects;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionAgentHandler : MissionLogic
  {
    private const float PassageUsageDeltaTime = 30f;
    private static readonly uint[] _tournamentTeamColors = new uint[11]
    {
      4294110933U,
      4290269521U,
      4291535494U,
      4286151096U,
      4290286497U,
      4291600739U,
      4291868275U,
      4287285710U,
      4283204487U,
      4287282028U,
      4290300789U
    };
    private static readonly uint[] _villagerClothColors = new uint[35]
    {
      4292860590U,
      4291351206U,
      4289117081U,
      4288460959U,
      4287541416U,
      4288922566U,
      4292654718U,
      4289243320U,
      4290286483U,
      4290288531U,
      4290156159U,
      4291136871U,
      4289233774U,
      4291205980U,
      4291735684U,
      4292722283U,
      4293119406U,
      4293911751U,
      4294110933U,
      4291535494U,
      4289955192U,
      4289631650U,
      4292133587U,
      4288785593U,
      4286288275U,
      4286222496U,
      4287601851U,
      4286622134U,
      4285898909U,
      4285638289U,
      4289830302U,
      4287593853U,
      4289957781U,
      4287071646U,
      4284445583U
    };
    private static int _disabledFaceId = -1;
    private static int _disabledFaceIdForAnimals = 1;
    private readonly Dictionary<string, List<UsableMachine>> _usablePoints;
    private readonly Dictionary<string, List<UsableMachine>> _pairedUsablePoints;
    private List<UsableMachine> _disabledPassages;
    private readonly Location _previousLocation;
    private readonly Location _currentLocation;
    private readonly string _playerSpecialSpawnTag;
    private BasicMissionTimer _checkPossibleQuestTimer;
    private float _passageUsageTime;
    private CharacterObject _conversationCharacter;

    public bool HasPassages()
    {
      List<UsableMachine> usableMachineList;
      return this._usablePoints.TryGetValue("npc_passage", out usableMachineList) && usableMachineList.Count > 0;
    }

    public List<UsableMachine> TownPassageProps
    {
      get
      {
        List<UsableMachine> townPassageProps;
        this._usablePoints.TryGetValue("npc_passage", out townPassageProps);
        return townPassageProps;
      }
    }

    public MissionAgentHandler(
      Location location,
      CharacterObject conversationCharacter,
      string playerSpecialSpawnTag = null)
    {
      this._currentLocation = location;
      this._previousLocation = Campaign.Current.GameMode == CampaignGameMode.Campaign ? Campaign.Current.GameMenuManager.PreviousLocation : (Location) null;
      if (this._previousLocation != null && !this._currentLocation.LocationsOfPassages.Contains(this._previousLocation))
      {
        TaleWorlds.Library.Debug.FailedAssert("No passage from " + (object) this._previousLocation.DoorName + " to " + (object) this._currentLocation.DoorName, "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\MissionAgentHandler.cs", ".ctor", 77);
        this._previousLocation = (Location) null;
      }
      this._usablePoints = new Dictionary<string, List<UsableMachine>>();
      this._pairedUsablePoints = new Dictionary<string, List<UsableMachine>>();
      this._disabledPassages = new List<UsableMachine>();
      this._checkPossibleQuestTimer = new BasicMissionTimer();
      this._playerSpecialSpawnTag = playerSpecialSpawnTag;
      this._conversationCharacter = conversationCharacter;
    }

    public override void OnCreated()
    {
      if (this._currentLocation == null)
        return;
      CampaignMission.Current.Location = this._currentLocation;
    }

    public override void EarlyStart()
    {
      this._passageUsageTime = this.Mission.CurrentTime + 30f;
      this.GetAllProps();
      switch (Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(Settlement.CurrentSettlement.Position2D))
      {
        case MapWeatherModel.WeatherEvent.HeavyRain:
        case MapWeatherModel.WeatherEvent.Blizzard:
          this.Mission.SetReportStuckAgentsMode(true);
          break;
        default:
          this.InitializePairedUsableObjects();
          goto case MapWeatherModel.WeatherEvent.HeavyRain;
      }
    }

    public override void OnRenderingStarted()
    {
    }

    public override void OnMissionTick(float dt)
    {
      float currentTime = this.Mission.CurrentTime;
      if ((double) currentTime <= (double) this._passageUsageTime)
        return;
      this._passageUsageTime = currentTime + 30f;
      if (PlayerEncounter.LocationEncounter == null || LocationComplex.Current == null)
        return;
      LocationComplex.Current.AgentPassageUsageTick();
    }

    public override void OnRemoveBehavior()
    {
      foreach (Location listOfLocation in LocationComplex.Current.GetListOfLocations())
      {
        if (listOfLocation.StringId == "center" || listOfLocation.StringId == "village_center" || listOfLocation.StringId == "lordshall" || listOfLocation.StringId == "prison" || listOfLocation.StringId == "tavern" || listOfLocation.StringId == "alley")
          listOfLocation.RemoveAllCharacters((Predicate<LocationCharacter>) (x => !x.Character.IsHero));
      }
      base.OnRemoveBehavior();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (affectedAgent.IsHuman && (agentState == AgentState.Killed || agentState == AgentState.Unconscious))
      {
        LocationCharacter locationCharacter = CampaignMission.Current.Location.GetLocationCharacter(affectedAgent.Origin);
        if (locationCharacter != null)
        {
          CampaignMission.Current.Location.RemoveLocationCharacter(locationCharacter);
          if (PlayerEncounter.LocationEncounter.GetAccompanyingCharacter(locationCharacter) != null && affectedAgent.State == AgentState.Killed)
            PlayerEncounter.LocationEncounter.RemoveAccompanyingCharacter(locationCharacter);
        }
      }
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        agent.GetComponent<CampaignAgentComponent>()?.OnAgentRemoved(affectedAgent);
    }

    public override void OnMissionModeChange(MissionMode oldMissionMode, bool atStart)
    {
      if (atStart)
        return;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (agent.IsHuman)
          agent.SetAgentExcludeStateForFaceGroupId(MissionAgentHandler._disabledFaceId, agent.CurrentWatchState != Agent.WatchState.Alarmed);
      }
    }

    private void InitializePairedUsableObjects()
    {
      Dictionary<string, List<UsableMachine>> dictionary = new Dictionary<string, List<UsableMachine>>();
      foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
      {
        foreach (UsableMachine usableMachine in usablePoint.Value)
        {
          foreach (StandingPoint standingPoint in (List<StandingPoint>) usableMachine.StandingPoints)
          {
            if (standingPoint is AnimationPoint animationPoint && (NativeObject) animationPoint.PairEntity != (NativeObject) null)
            {
              if (this._pairedUsablePoints.ContainsKey(usablePoint.Key))
              {
                if (!this._pairedUsablePoints[usablePoint.Key].Contains(usableMachine))
                  this._pairedUsablePoints[usablePoint.Key].Add(usableMachine);
              }
              else
                this._pairedUsablePoints.Add(usablePoint.Key, new List<UsableMachine>()
                {
                  usableMachine
                });
              if (dictionary.ContainsKey(usablePoint.Key))
                dictionary[usablePoint.Key].Add(usableMachine);
              else
                dictionary.Add(usablePoint.Key, new List<UsableMachine>()
                {
                  usableMachine
                });
            }
          }
        }
      }
      foreach (KeyValuePair<string, List<UsableMachine>> keyValuePair in dictionary)
      {
        foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
        {
          foreach (UsableMachine usableMachine in dictionary[keyValuePair.Key])
            usablePoint.Value.Remove(usableMachine);
        }
      }
    }

    private void GetAllProps()
    {
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("navigation_mesh_deactivator");
      if ((NativeObject) entityWithTag != (NativeObject) null)
      {
        NavigationMeshDeactivator firstScriptOfType = entityWithTag.GetFirstScriptOfType<NavigationMeshDeactivator>();
        MissionAgentHandler._disabledFaceId = firstScriptOfType.DisableFaceWithId;
        MissionAgentHandler._disabledFaceIdForAnimals = firstScriptOfType.DisableFaceWithIdForAnimals;
      }
      this._usablePoints.Clear();
      foreach (UsableMachine usableMachine in this.Mission.MissionObjects.FindAllWithType<UsableMachine>())
      {
        foreach (string tag in usableMachine.GameEntity.Tags)
        {
          if (!this._usablePoints.ContainsKey(tag))
            this._usablePoints.Add(tag, new List<UsableMachine>());
          this._usablePoints[tag].Add(usableMachine);
        }
      }
      if (Settlement.CurrentSettlement.IsTown || Settlement.CurrentSettlement.IsVillage)
      {
        foreach (AreaMarker areaMarker in this.Mission.ActiveMissionObjects.FindAllWithType<AreaMarker>().ToList<AreaMarker>())
        {
          string tag = areaMarker.Tag;
          List<UsableMachine> usableMachinesInRange = areaMarker.GetUsableMachinesInRange(areaMarker.Tag.Contains("workshop") ? "unaffected_by_area" : (string) null);
          if (!this._usablePoints.ContainsKey(tag))
            this._usablePoints.Add(tag, new List<UsableMachine>());
          foreach (UsableMachine usableMachine1 in usableMachinesInRange)
          {
            foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
            {
              if (usablePoint.Value.Contains(usableMachine1))
                usablePoint.Value.Remove(usableMachine1);
            }
            if (usableMachine1.GameEntity.HasTag("hold_tag_always"))
            {
              string str = usableMachine1.GameEntity.Tags[0] + "_" + areaMarker.Tag;
              usableMachine1.GameEntity.AddTag(str);
              if (!this._usablePoints.ContainsKey(str))
              {
                this._usablePoints.Add(str, new List<UsableMachine>());
                this._usablePoints[str].Add(usableMachine1);
              }
              else
                this._usablePoints[str].Add(usableMachine1);
            }
            else
            {
              foreach (UsableMachine usableMachine2 in usableMachinesInRange)
              {
                if (!usableMachine2.GameEntity.HasTag(tag))
                  usableMachine2.GameEntity.AddTag(tag);
              }
            }
          }
          if (this._usablePoints.ContainsKey(tag))
          {
            usableMachinesInRange.RemoveAll((Predicate<UsableMachine>) (x => this._usablePoints[tag].Contains(x)));
            if (usableMachinesInRange.Count > 0)
              this._usablePoints[tag].AddRange((IEnumerable<UsableMachine>) usableMachinesInRange);
          }
          foreach (UsableMachine usableMachine in areaMarker.GetUsableMachinesWithTagInRange("unaffected_by_area"))
          {
            string tag1 = usableMachine.GameEntity.Tags[0];
            foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
            {
              if (usablePoint.Value.Contains(usableMachine))
                usablePoint.Value.Remove(usableMachine);
            }
            if (this._usablePoints.ContainsKey(tag1))
            {
              this._usablePoints[tag1].Add(usableMachine);
            }
            else
            {
              this._usablePoints.Add(tag1, new List<UsableMachine>());
              this._usablePoints[tag1].Add(usableMachine);
            }
          }
        }
      }
      this.DisableUnavailableWaypoints();
      this.RemoveDeactivatedUsablePlacesFromList();
    }

    [Conditional("DEBUG")]
    public void DetectMissingEntities()
    {
      if (CampaignMission.Current.Location == null || Utilities.CommandLineArgumentExists("CampaignGameplayTest"))
        return;
      IEnumerable<LocationCharacter> characterList = CampaignMission.Current.Location.GetCharacterList();
      Dictionary<string, int> dictionary = new Dictionary<string, int>();
      foreach (LocationCharacter locationCharacter in characterList)
      {
        if (locationCharacter.SpecialTargetTag != null && !locationCharacter.IsHidden)
        {
          if (dictionary.ContainsKey(locationCharacter.SpecialTargetTag))
            dictionary[locationCharacter.SpecialTargetTag]++;
          else
            dictionary.Add(locationCharacter.SpecialTargetTag, 1);
        }
      }
      foreach (KeyValuePair<string, int> keyValuePair in dictionary)
      {
        string key = keyValuePair.Key;
        int num1 = keyValuePair.Value;
        int num2 = 0;
        if (this._usablePoints.ContainsKey(key))
        {
          num2 += this._usablePoints[key].Count;
          foreach (UsableMachine usableMachine in this._usablePoints[key])
            num2 += MissionAgentHandler.GetPointCountOfUsableMachine(usableMachine, false);
        }
        if (this._pairedUsablePoints.ContainsKey(key))
        {
          num2 += this._pairedUsablePoints[key].Count;
          foreach (UsableMachine usableMachine in this._pairedUsablePoints[key])
            num2 += MissionAgentHandler.GetPointCountOfUsableMachine(usableMachine, false);
        }
        if (num2 < num1)
        {
          "Trying to spawn " + (object) num1 + " npc with \"" + key + "\" but there are " + (object) num2 + " suitable spawn points in scene " + this.Mission.SceneName;
          if (TestCommonBase.BaseInstance != null)
          {
            int num3 = TestCommonBase.BaseInstance.IsTestEnabled ? 1 : 0;
          }
        }
      }
    }

    public void RemoveDeactivatedUsablePlacesFromList()
    {
      Dictionary<string, List<UsableMachine>> dictionary = new Dictionary<string, List<UsableMachine>>();
      foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
      {
        foreach (UsableMachine usableMachine in usablePoint.Value)
        {
          if (usableMachine.IsDeactivated)
          {
            if (dictionary.ContainsKey(usablePoint.Key))
            {
              dictionary[usablePoint.Key].Add(usableMachine);
            }
            else
            {
              dictionary.Add(usablePoint.Key, new List<UsableMachine>());
              dictionary[usablePoint.Key].Add(usableMachine);
            }
          }
        }
      }
      foreach (KeyValuePair<string, List<UsableMachine>> keyValuePair in dictionary)
      {
        foreach (UsableMachine usableMachine in keyValuePair.Value)
          this._usablePoints[keyValuePair.Key].Remove(usableMachine);
      }
    }

    private Dictionary<string, int> FindUnusedUsablePointCount()
    {
      Dictionary<string, int> usablePointCount = new Dictionary<string, int>();
      foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
      {
        int num = 0;
        foreach (UsableMachine usableMachine in usablePoint.Value)
          num += MissionAgentHandler.GetPointCountOfUsableMachine(usableMachine, true);
        if (num > 0)
          usablePointCount.Add(usablePoint.Key, num);
      }
      foreach (KeyValuePair<string, List<UsableMachine>> pairedUsablePoint in this._pairedUsablePoints)
      {
        int num = 0;
        foreach (UsableMachine usableMachine in pairedUsablePoint.Value)
          num += MissionAgentHandler.GetPointCountOfUsableMachine(usableMachine, true);
        if (num > 0)
        {
          if (!usablePointCount.ContainsKey(pairedUsablePoint.Key))
            usablePointCount.Add(pairedUsablePoint.Key, num);
          else
            usablePointCount[pairedUsablePoint.Key] += num;
        }
      }
      return usablePointCount;
    }

    private CharacterObject GetPlayerCharacter()
    {
      return CharacterObject.PlayerCharacter ?? Game.Current.ObjectManager.GetObject<CharacterObject>("main_hero_for_perf");
    }

    public void SpawnPlayer(
      bool civilianEquipment = false,
      bool noHorses = false,
      bool noWeapon = false,
      bool wieldInitialWeapons = false,
      bool isStealth = false,
      string spawnTag = "")
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        civilianEquipment = false;
      MatrixFrame matrixFrame = MatrixFrame.Identity;
      GameEntity entityWithTag1 = this.Mission.Scene.FindEntityWithTag("spawnpoint_player");
      if ((NativeObject) entityWithTag1 != (NativeObject) null)
      {
        matrixFrame = entityWithTag1.GetGlobalFrame();
        matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      }
      bool flag1 = Campaign.Current.GameMode == CampaignGameMode.Campaign && PlayerEncounter.IsActive && (Settlement.CurrentSettlement.IsTown || Settlement.CurrentSettlement.IsCastle) && !Campaign.Current.IsNight && CampaignMission.Current.Location.StringId == "center" && !PlayerEncounter.LocationEncounter.IsInsideOfASettlement;
      bool flag2 = false;
      if (this._playerSpecialSpawnTag != null)
      {
        GameEntity gameEntity = (GameEntity) null;
        UsableMachine usableMachine = this.GetAllUsablePointsWithTag(this._playerSpecialSpawnTag).FirstOrDefault<UsableMachine>();
        if (usableMachine != null)
          gameEntity = usableMachine.StandingPoints.FirstOrDefault<StandingPoint>()?.GameEntity;
        if ((NativeObject) gameEntity == (NativeObject) null)
          gameEntity = this.Mission.Scene.FindEntityWithTag(this._playerSpecialSpawnTag);
        if ((NativeObject) gameEntity != (NativeObject) null)
        {
          matrixFrame = gameEntity.GetGlobalFrame();
          matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        }
      }
      else if (CampaignMission.Current.Location.StringId == "arena")
      {
        GameEntity entityWithTag2 = this.Mission.Scene.FindEntityWithTag("sp_player_near_arena_master");
        if ((NativeObject) entityWithTag2 != (NativeObject) null)
        {
          matrixFrame = entityWithTag2.GetGlobalFrame();
          matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        }
      }
      else if (this._previousLocation != null)
      {
        matrixFrame = this.GetSpawnFrameOfPassage(this._previousLocation);
        matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        noHorses = true;
        flag2 = true;
      }
      else if (flag1)
      {
        GameEntity entityWithTag3 = this.Mission.Scene.FindEntityWithTag(isStealth ? "sp_player_stealth" : "spawnpoint_player_outside");
        if ((NativeObject) entityWithTag3 != (NativeObject) null)
        {
          matrixFrame = entityWithTag3.GetGlobalFrame();
          matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        }
      }
      else
      {
        GameEntity entityWithTag4 = this.Mission.Scene.FindEntityWithTag("spawnpoint_player");
        if ((NativeObject) entityWithTag4 != (NativeObject) null)
        {
          matrixFrame = entityWithTag4.GetGlobalFrame();
          matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        }
      }
      if (PlayerEncounter.LocationEncounter is TownEncounter)
        PlayerEncounter.LocationEncounter.IsInsideOfASettlement = true;
      CharacterObject playerCharacter = this.GetPlayerCharacter();
      AgentBuildData agentBuildData1 = new AgentBuildData((BasicCharacterObject) playerCharacter).Team(this.Mission.PlayerTeam).InitialPosition(in matrixFrame.origin);
      Vec2 vec2 = matrixFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).CivilianEquipment(civilianEquipment).NoHorses(noHorses).NoWeapons(noWeapon).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2).TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, this.GetPlayerCharacter()));
      EquipmentElement equipmentElement = playerCharacter.Equipment[EquipmentIndex.ArmorItemEndSlot];
      string randomMountKeyString = MountCreationKey.GetRandomMountKeyString(equipmentElement.Item, playerCharacter.GetMountKeySeed());
      AgentBuildData agentBuildData3 = agentBuildData2.MountKey(randomMountKeyString).Controller(Agent.ControllerType.Player);
      if (playerCharacter.HeroObject?.ClanBanner != null)
        agentBuildData3.Banner(playerCharacter.HeroObject.ClanBanner);
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        agentBuildData3.TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) CharacterObject.PlayerCharacter));
      if (isStealth)
        agentBuildData3.Equipment(this.GetStealthEquipmentForPlayer());
      else if (Campaign.Current.IsMainHeroDisguised)
      {
        Equipment defaultEquipment = MBObjectManager.Instance.GetObject<MBEquipmentRoster>("npc_disguised_hero_equipment_template").DefaultEquipment;
        Equipment civilianEquipment1 = CharacterObject.PlayerCharacter.FirstCivilianEquipment;
        for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
        {
          equipmentElement = civilianEquipment1[equipmentIndex];
          ItemObject itemObject = equipmentElement.Item;
          defaultEquipment.AddEquipmentToSlotWithoutAgent(equipmentIndex, new EquipmentElement(itemObject));
        }
        agentBuildData3.Equipment(defaultEquipment);
      }
      Agent agent = this.Mission.SpawnAgent(agentBuildData3);
      if (wieldInitialWeapons)
        agent.WieldInitialWeapons();
      if (flag2)
        this.Mission.MakeSound(MiscSoundContainer.SoundCodeMovementFoleyDoorClose, matrixFrame.origin, true, false, -1, -1);
      this.SpawnCharactersAccompanyingPlayer(noHorses);
      for (int index = 0; index < 3; ++index)
        Agent.Main.AgentVisuals.GetSkeleton().TickAnimations(0.1f, Agent.Main.AgentVisuals.GetGlobalFrame(), true);
    }

    private Equipment GetStealthEquipmentForPlayer()
    {
      Equipment equipmentForPlayer = new Equipment();
      equipmentForPlayer.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Body, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("ragged_robes")));
      equipmentForPlayer.AddEquipmentToSlotWithoutAgent(EquipmentIndex.NumAllWeaponSlots, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("pilgrim_hood")));
      equipmentForPlayer.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Leg, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("ragged_boots")));
      equipmentForPlayer.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Gloves, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("ragged_armwraps")));
      for (int index = 0; index < 5; ++index)
      {
        EquipmentElement equipmentFromSlot = CharacterObject.PlayerCharacter.Equipment.GetEquipmentFromSlot((EquipmentIndex) index);
        if (equipmentFromSlot.Item != null)
          equipmentForPlayer.AddEquipmentToSlotWithoutAgent((EquipmentIndex) index, new EquipmentElement(equipmentFromSlot.Item));
        else if (index >= 0 && index <= 3)
          equipmentForPlayer.AddEquipmentToSlotWithoutAgent((EquipmentIndex) index, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("throwing_stone")));
      }
      return equipmentForPlayer;
    }

    private MatrixFrame GetSpawnFrameOfPassage(Location location)
    {
      MatrixFrame spawnFrameOfPassage = MatrixFrame.Identity;
      UsableMachine usableMachine = this.TownPassageProps.FirstOrDefault<UsableMachine>((Func<UsableMachine, bool>) (x => ((Passage) x).ToLocation == location)) ?? this._disabledPassages.FirstOrDefault<UsableMachine>((Func<UsableMachine, bool>) (x => ((Passage) x).ToLocation == location));
      if (usableMachine != null)
      {
        MatrixFrame globalFrame = usableMachine.PilotStandingPoint.GameEntity.GetGlobalFrame();
        globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        globalFrame.origin.z = this.Mission.Scene.GetGroundHeightAtPosition(globalFrame.origin);
        globalFrame.rotation.RotateAboutUp(3.14159274f);
        spawnFrameOfPassage = globalFrame;
      }
      return spawnFrameOfPassage;
    }

    public void DisableUnavailableWaypoints()
    {
      bool isNight = Campaign.Current.IsNight;
      string str = "";
      int num1 = 0;
      foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
      {
        int num2 = 0;
        int num3 = 0;
        int num4 = 0;
        for (int index = 0; index < usablePoint.Value.Count; ++index)
        {
          UsableMachine usableMachine = usablePoint.Value[index];
          if (!Mission.Current.IsPositionInsideBoundaries(usableMachine.GameEntity.GlobalPosition.AsVec2))
          {
            foreach (UsableMissionObject standingPoint in (List<StandingPoint>) usableMachine.StandingPoints)
            {
              standingPoint.IsDeactivated = true;
              ++num1;
            }
          }
          switch (usableMachine)
          {
            case Chair _:
              using (List<StandingPoint>.Enumerator enumerator = usableMachine.StandingPoints.GetEnumerator())
              {
                while (enumerator.MoveNext())
                {
                  StandingPoint current = enumerator.Current;
                  Vec3 origin = current.GameEntity.GetGlobalFrame().origin;
                  PathFaceRecord nullFaceRecord = PathFaceRecord.NullFaceRecord;
                  this.Mission.Scene.GetNavMeshFaceIndex(ref nullFaceRecord, origin, true);
                  if (!nullFaceRecord.IsValid() || MissionAgentHandler._disabledFaceId != -1 && nullFaceRecord.FaceGroupIndex == MissionAgentHandler._disabledFaceId)
                  {
                    current.IsDeactivated = true;
                    ++num2;
                  }
                }
                break;
              }
            case Passage _:
              Passage passage = usableMachine as Passage;
              if (passage.ToLocation == null || !passage.ToLocation.CanPlayerSee())
              {
                foreach (UsableMissionObject standingPoint in (List<StandingPoint>) passage.StandingPoints)
                  standingPoint.IsDeactivated = true;
                passage.Disable();
                this._disabledPassages.Add(usableMachine);
                Location toLocation = passage.ToLocation;
                usablePoint.Value.RemoveAt(index);
                --index;
                ++num3;
                break;
              }
              break;
            case UsablePlace _:
              using (List<StandingPoint>.Enumerator enumerator = usableMachine.StandingPoints.GetEnumerator())
              {
                while (enumerator.MoveNext())
                {
                  StandingPoint current = enumerator.Current;
                  Vec3 origin = current.GameEntity.GetGlobalFrame().origin;
                  PathFaceRecord nullFaceRecord = PathFaceRecord.NullFaceRecord;
                  this.Mission.Scene.GetNavMeshFaceIndex(ref nullFaceRecord, origin, true);
                  if (!nullFaceRecord.IsValid() || MissionAgentHandler._disabledFaceId != -1 && nullFaceRecord.FaceGroupIndex == MissionAgentHandler._disabledFaceId || isNight && usableMachine.GameEntity.HasTag("disable_at_night") || !isNight && usableMachine.GameEntity.HasTag("enable_at_night"))
                  {
                    current.IsDeactivated = true;
                    ++num4;
                  }
                }
                break;
              }
          }
        }
        if (num4 + num2 + num3 > 0)
        {
          str = str + "_____________________________________________\n\"" + usablePoint.Key + "\" :\n";
          if (num4 > 0)
            str = str + "Disabled standing point : " + (object) num4 + "\n";
          if (num2 > 0)
            str = str + "Disabled chair use point : " + (object) num2 + "\n";
          if (num3 > 0)
            str = str + "Disabled passage info : " + (object) num3 + "\n";
        }
      }
    }

    public void SpawnLocationCharacters(string overridenTagValue = null)
    {
      Dictionary<string, int> usablePointCount = this.FindUnusedUsablePointCount();
      IEnumerable<LocationCharacter> characterList = CampaignMission.Current.Location.GetCharacterList();
      if (PlayerEncounter.LocationEncounter.Settlement.IsTown && CampaignMission.Current.Location == LocationComplex.Current.GetLocationWithId("center"))
      {
        foreach (LocationCharacter character in LocationComplex.Current.GetLocationWithId("alley").GetCharacterList())
          characterList.Append<LocationCharacter>(character);
      }
      CampaignEventDispatcher.Instance.LocationCharactersAreReadyToSpawn(usablePointCount);
      foreach (LocationCharacter locationCharacter in characterList)
      {
        if (!this.IsAlreadySpawned(locationCharacter.AgentOrigin) && !locationCharacter.IsHidden)
        {
          if (!string.IsNullOrEmpty(overridenTagValue))
            locationCharacter.SpecialTargetTag = overridenTagValue;
          MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(this.SpawnLocationCharacter(locationCharacter), MissionAgentHandler._disabledFaceId);
        }
      }
      List<Passage> passageList = new List<Passage>();
      if (this.TownPassageProps != null)
      {
        foreach (UsableMachine townPassageProp in this.TownPassageProps)
        {
          if (townPassageProp is Passage passage && !townPassageProp.IsDeactivated)
          {
            passage.Deactivate();
            passageList.Add(passage);
          }
        }
      }
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        this.SimulateAgent(agent);
      foreach (UsableMachine usableMachine in passageList)
        usableMachine.Activate();
      CampaignEventDispatcher.Instance.LocationCharactersSimulated();
    }

    private bool IsAlreadySpawned(IAgentOriginBase agentOrigin)
    {
      return Mission.Current != null && Mission.Current.Agents.Any<Agent>((Func<Agent, bool>) (x => x.Origin == agentOrigin));
    }

    public Agent SpawnLocationCharacter(
      LocationCharacter locationCharacter,
      bool simulateAgentAfterSpawn = false)
    {
      Agent agent = this.SpawnWanderingAgent(locationCharacter);
      if (simulateAgentAfterSpawn)
        this.SimulateAgent(agent);
      if (locationCharacter.IsVisualTracked)
        Mission.Current.GetMissionBehavior<VisualTrackerMissionBehavior>()?.RegisterLocalOnlyObject((ITrackableBase) agent);
      return agent;
    }

    public void SimulateAgent(Agent agent)
    {
      if (!agent.IsHuman)
        return;
      AgentNavigator agentNavigator = agent.GetComponent<CampaignAgentComponent>().AgentNavigator;
      int num = MBRandom.RandomInt(35, 50);
      agent.PreloadForRendering();
      for (int index = 0; index < num; ++index)
      {
        agentNavigator?.Tick(0.1f, true);
        if (agent.IsUsingGameObject)
          agent.CurrentlyUsedGameObject.SimulateTick(0.1f);
      }
    }

    public void SpawnThugs()
    {
      IEnumerable<LocationCharacter> characterList = CampaignMission.Current.Location.GetCharacterList();
      List<MatrixFrame> list = this.Mission.Scene.FindEntitiesWithTag("spawnpoint_thug").Select<GameEntity, MatrixFrame>((Func<GameEntity, MatrixFrame>) (x => x.GetGlobalFrame())).ToList<MatrixFrame>();
      int num = 0;
      foreach (LocationCharacter locationCharacter in characterList)
      {
        if (locationCharacter.CharacterRelation == LocationCharacter.CharacterRelations.Enemy)
        {
          MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(this.SpawnWanderingAgentWithInitialFrame(locationCharacter, list[num % list.Count]), MissionAgentHandler._disabledFaceId);
          ++num;
        }
      }
    }

    private void GetFrameForFollowingAgent(Agent followedAgent, out MatrixFrame frame)
    {
      frame = followedAgent.Frame;
      frame.origin += -(frame.rotation.f * 1.5f);
    }

    public void SpawnCharactersAccompanyingPlayer(bool noHorse)
    {
      int num = 0;
      bool flag1 = PlayerEncounter.LocationEncounter.CharactersAccompanyingPlayer.Any<AccompanyingCharacter>((Func<AccompanyingCharacter, bool>) (c => c.IsFollowingPlayerAtMissionStart));
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("navigation_mesh_deactivator");
      foreach (AccompanyingCharacter accompanyingCharacter1 in PlayerEncounter.LocationEncounter.CharactersAccompanyingPlayer)
      {
        bool flag2 = accompanyingCharacter1.LocationCharacter.Character.IsHero && accompanyingCharacter1.LocationCharacter.Character.HeroObject.IsWounded;
        if (!(!this._currentLocation.GetCharacterList().Contains<LocationCharacter>(accompanyingCharacter1.LocationCharacter) & flag2) && accompanyingCharacter1.CanEnterLocation(this._currentLocation))
        {
          this._currentLocation.AddCharacter(accompanyingCharacter1.LocationCharacter);
          if (accompanyingCharacter1.IsFollowingPlayerAtMissionStart || !flag1 && num == 0)
          {
            WorldFrame worldFrame = this.Mission.MainAgent.GetWorldFrame();
            worldFrame.Origin.SetVec2(this.Mission.GetRandomPositionAroundPoint(worldFrame.Origin.GetNavMeshVec3(), 0.5f, 2f).AsVec2);
            Agent agent = this.SpawnWanderingAgentWithInitialFrame(accompanyingCharacter1.LocationCharacter, worldFrame.ToGroundMatrixFrame(), noHorse);
            if ((NativeObject) entityWithTag != (NativeObject) null)
            {
              int disableFaceWithId = entityWithTag.GetFirstScriptOfType<NavigationMeshDeactivator>().DisableFaceWithId;
              if (disableFaceWithId != -1)
                agent.SetAgentExcludeStateForFaceGroupId(disableFaceWithId, false);
            }
            for (int index = 0; !agent.CanMoveDirectlyToPosition(this.Mission.MainAgent.Position.AsVec2) && index < 50; ++index)
            {
              worldFrame.Origin.SetVec2(this.Mission.GetRandomPositionAroundPoint(worldFrame.Origin.GetNavMeshVec3(), 0.5f, 4f).AsVec2);
              agent.TeleportToPosition(worldFrame.ToGroundMatrixFrame().origin);
            }
            agent.SetTeam(this.Mission.PlayerTeam, true);
            ++num;
          }
          else
            this.SpawnWanderingAgent(accompanyingCharacter1.LocationCharacter).SetTeam(this.Mission.PlayerTeam, true);
          foreach (Agent agent in (List<Agent>) this.Mission.Agents)
          {
            AccompanyingCharacter accompanyingCharacter2 = PlayerEncounter.LocationEncounter.GetAccompanyingCharacter(CampaignMission.Current.Location.GetLocationCharacter(agent.Origin));
            if (agent.GetComponent<CampaignAgentComponent>().AgentNavigator != null && accompanyingCharacter2 != null)
            {
              DailyBehaviorGroup behaviorGroup = agent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
              if (accompanyingCharacter1.IsFollowingPlayerAtMissionStart)
              {
                FollowAgentBehavior followAgentBehavior = behaviorGroup.GetBehavior<FollowAgentBehavior>() ?? behaviorGroup.AddBehavior<FollowAgentBehavior>();
                behaviorGroup.SetScriptedBehavior<FollowAgentBehavior>();
                followAgentBehavior.SetTargetAgent(Agent.Main);
              }
              else
                behaviorGroup.Behaviors.Clear();
            }
          }
        }
      }
    }

    public void FadeoutExitingLocationCharacter(LocationCharacter locationCharacter)
    {
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        if ((CharacterObject) agent.Character == locationCharacter.Character)
        {
          agent.FadeOut(false, true);
          break;
        }
      }
    }

    public void SpawnEnteringLocationCharacter(
      LocationCharacter locationCharacter,
      Location fromLocation)
    {
      if (fromLocation != null)
      {
        bool flag = false;
        foreach (UsableMachine townPassageProp in this.TownPassageProps)
        {
          Passage passage = townPassageProp as Passage;
          if (passage.ToLocation == fromLocation)
          {
            MatrixFrame globalFrame = passage.PilotStandingPoint.GameEntity.GetGlobalFrame();
            globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
            globalFrame.origin.z = this.Mission.Scene.GetGroundHeightAtPosition(globalFrame.origin);
            Vec3 f = globalFrame.rotation.f;
            double num = (double) f.Normalize();
            globalFrame.origin -= 0.3f * f;
            globalFrame.rotation.RotateAboutUp(3.14159274f);
            Agent agent = this.SpawnWanderingAgentWithInitialFrame(locationCharacter, globalFrame);
            MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
            this.Mission.MakeSound(MiscSoundContainer.SoundCodeMovementFoleyDoorClose, globalFrame.origin, true, false, -1, -1);
            agent.FadeIn();
            flag = true;
            break;
          }
        }
        int num1 = flag ? 1 : 0;
      }
      else
        this.SpawnLocationCharacter(locationCharacter, true);
    }

    private static void SimulateAnimalAnimations(Agent agent)
    {
      int num = 10 + MBRandom.RandomInt(90);
      for (int index = 0; index < num; ++index)
      {
        agent.TickActionChannels(0.1f);
        Vec3 animationDisplacement = agent.ComputeAnimationDisplacement(0.1f);
        if ((double) animationDisplacement.LengthSquared > 0.0)
          agent.TeleportToPosition(agent.Position + animationDisplacement);
        agent.AgentVisuals.GetSkeleton().TickAnimations(0.1f, agent.AgentVisuals.GetGlobalFrame(), true);
      }
    }

    public static void SpawnSheeps()
    {
      foreach (GameEntity spawnEntity in Mission.Current.Scene.FindEntitiesWithTag("sp_sheep"))
      {
        MatrixFrame globalFrame = spawnEntity.GetGlobalFrame();
        ItemRosterElement rosterElement = new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("sheep"));
        globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        Agent agent = Mission.Current.SpawnMonster(rosterElement, new ItemRosterElement(), in globalFrame.origin, globalFrame.rotation.f.AsVec2, -1);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceIdForAnimals);
        AnimalSpawnSettings.CheckAndSetAnimalAgentFlags(spawnEntity, agent);
        MissionAgentHandler.SimulateAnimalAnimations(agent);
      }
    }

    public static void SpawnCows()
    {
      foreach (GameEntity spawnEntity in Mission.Current.Scene.FindEntitiesWithTag("sp_cow"))
      {
        MatrixFrame globalFrame = spawnEntity.GetGlobalFrame();
        ItemRosterElement rosterElement = new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("cow"));
        globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        Agent agent = Mission.Current.SpawnMonster(rosterElement, new ItemRosterElement(), in globalFrame.origin, globalFrame.rotation.f.AsVec2, -1);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceIdForAnimals);
        AnimalSpawnSettings.CheckAndSetAnimalAgentFlags(spawnEntity, agent);
        MissionAgentHandler.SimulateAnimalAnimations(agent);
      }
    }

    public static void SpawnGeese()
    {
      foreach (GameEntity spawnEntity in Mission.Current.Scene.FindEntitiesWithTag("sp_goose"))
      {
        MatrixFrame globalFrame = spawnEntity.GetGlobalFrame();
        ItemRosterElement rosterElement = new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("goose"));
        globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        Agent agent = Mission.Current.SpawnMonster(rosterElement, new ItemRosterElement(), in globalFrame.origin, globalFrame.rotation.f.AsVec2, -1);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceIdForAnimals);
        AnimalSpawnSettings.CheckAndSetAnimalAgentFlags(spawnEntity, agent);
        MissionAgentHandler.SimulateAnimalAnimations(agent);
      }
    }

    public static void SpawnChicken()
    {
      foreach (GameEntity spawnEntity in Mission.Current.Scene.FindEntitiesWithTag("sp_chicken"))
      {
        MatrixFrame globalFrame = spawnEntity.GetGlobalFrame();
        ItemRosterElement rosterElement = new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("chicken"));
        globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        Agent agent = Mission.Current.SpawnMonster(rosterElement, new ItemRosterElement(), in globalFrame.origin, globalFrame.rotation.f.AsVec2, -1);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceIdForAnimals);
        AnimalSpawnSettings.CheckAndSetAnimalAgentFlags(spawnEntity, agent);
        MissionAgentHandler.SimulateAnimalAnimations(agent);
      }
    }

    public static void SpawnHogs()
    {
      foreach (GameEntity spawnEntity in Mission.Current.Scene.FindEntitiesWithTag("sp_hog"))
      {
        MatrixFrame globalFrame = spawnEntity.GetGlobalFrame();
        ItemRosterElement rosterElement = new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("hog"));
        globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        Agent agent = Mission.Current.SpawnMonster(rosterElement, new ItemRosterElement(), in globalFrame.origin, globalFrame.rotation.f.AsVec2, -1);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
        MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceIdForAnimals);
        AnimalSpawnSettings.CheckAndSetAnimalAgentFlags(spawnEntity, agent);
        MissionAgentHandler.SimulateAnimalAnimations(agent);
      }
    }

    public static List<Agent> SpawnHorses()
    {
      List<Agent> agentList = new List<Agent>();
      foreach (GameEntity spawnEntity in Mission.Current.Scene.FindEntitiesWithTag("sp_horse"))
      {
        MatrixFrame globalFrame = spawnEntity.GetGlobalFrame();
        ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>(spawnEntity.Tags[1]);
        ItemRosterElement rosterElement = new ItemRosterElement(itemObject, 1);
        ItemRosterElement harnessRosterElement = new ItemRosterElement();
        if (itemObject.HasHorseComponent)
        {
          globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
          Agent agent = Mission.Current.SpawnMonster(rosterElement, harnessRosterElement, in globalFrame.origin, globalFrame.rotation.f.AsVec2, -1);
          AnimalSpawnSettings.CheckAndSetAnimalAgentFlags(spawnEntity, agent);
          MissionAgentHandler.SimulateAnimalAnimations(agent);
          agentList.Add(agent);
        }
      }
      return agentList;
    }

    public IEnumerable<string> GetAllSpawnTags()
    {
      return this._usablePoints.Keys.ToList<string>().Concat<string>((IEnumerable<string>) this._pairedUsablePoints.Keys.ToList<string>());
    }

    public List<UsableMachine> GetAllUsablePointsWithTag(string tag)
    {
      List<UsableMachine> usablePointsWithTag = new List<UsableMachine>();
      List<UsableMachine> collection1 = new List<UsableMachine>();
      if (this._usablePoints.TryGetValue(tag, out collection1))
        usablePointsWithTag.AddRange((IEnumerable<UsableMachine>) collection1);
      List<UsableMachine> collection2 = new List<UsableMachine>();
      if (this._pairedUsablePoints.TryGetValue(tag, out collection2))
        usablePointsWithTag.AddRange((IEnumerable<UsableMachine>) collection2);
      return usablePointsWithTag;
    }

    private bool GetSpawnDataForTag(
      string targetTag,
      out MatrixFrame spawnFrame,
      out UsableMachine usableMachine)
    {
      List<UsableMachine> usablePointsWithTag = this.GetAllUsablePointsWithTag(targetTag);
      spawnFrame = MatrixFrame.Identity;
      usableMachine = (UsableMachine) null;
      if (usablePointsWithTag.Count > 0)
      {
        foreach (UsableMachine usableMachine1 in usablePointsWithTag)
        {
          MatrixFrame frame;
          if (this.GetSpawnFrameFromUsableMachine(usableMachine1, out frame))
          {
            spawnFrame = frame;
            usableMachine = usableMachine1;
            return true;
          }
        }
      }
      return false;
    }

    private bool GetSpawnDataInUsablePointsList(
      Dictionary<string, List<UsableMachine>> list,
      out MatrixFrame spawnFrame,
      out UsableMachine usableMachine)
    {
      spawnFrame = MatrixFrame.Identity;
      usableMachine = (UsableMachine) null;
      foreach (KeyValuePair<string, List<UsableMachine>> keyValuePair in list)
      {
        if (keyValuePair.Value.Count > 0)
        {
          foreach (UsableMachine usableMachine1 in keyValuePair.Value)
          {
            MatrixFrame frame;
            if (this.GetSpawnFrameFromUsableMachine(usableMachine1, out frame))
            {
              spawnFrame = frame;
              usableMachine = usableMachine1;
              return true;
            }
          }
        }
      }
      return false;
    }

    public Agent SpawnWanderingAgent(LocationCharacter locationCharacter)
    {
      bool flag = false;
      MatrixFrame spawnFrame = MatrixFrame.Identity;
      UsableMachine usableMachine = (UsableMachine) null;
      if (locationCharacter.SpecialTargetTag != null)
        flag = this.GetSpawnDataForTag(locationCharacter.SpecialTargetTag, out spawnFrame, out usableMachine);
      if (!flag)
        flag = this.GetSpawnDataForTag("npc_common_limited", out spawnFrame, out usableMachine);
      if (!flag)
        flag = this.GetSpawnDataForTag("npc_common", out spawnFrame, out usableMachine);
      if (!flag && this._usablePoints.Count > 0)
        flag = this.GetSpawnDataInUsablePointsList(this._usablePoints, out spawnFrame, out usableMachine);
      if (!flag && this._pairedUsablePoints.Count > 0)
        this.GetSpawnDataInUsablePointsList(this._pairedUsablePoints, out spawnFrame, out usableMachine);
      spawnFrame.rotation.f.z = 0.0f;
      double num = (double) spawnFrame.rotation.f.Normalize();
      spawnFrame.rotation.u = Vec3.Up;
      spawnFrame.rotation.s = Vec3.CrossProduct(spawnFrame.rotation.f, spawnFrame.rotation.u);
      spawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      Agent agent = usableMachine == null || locationCharacter.Character == this._conversationCharacter ? this.SpawnWanderingAgentWithInitialFrame(locationCharacter, spawnFrame) : this.SpawnWanderingAgentWithUsableMachine(locationCharacter, usableMachine);
      MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
      return agent;
    }

    private bool GetSpawnFrameFromUsableMachine(UsableMachine usableMachine, out MatrixFrame frame)
    {
      frame = MatrixFrame.Identity;
      StandingPoint elementWithPredicate = usableMachine.StandingPoints.GetRandomElementWithPredicate<StandingPoint>((Func<StandingPoint, bool>) (x => !x.HasUser && !x.IsDeactivated && !x.IsDisabled));
      if (elementWithPredicate == null)
        return false;
      frame = elementWithPredicate.GameEntity.GetGlobalFrame();
      return true;
    }

    private Agent SpawnWanderingAgentWithUsableMachine(
      LocationCharacter locationCharacter,
      UsableMachine usableMachine)
    {
      MatrixFrame frame;
      this.GetSpawnFrameFromUsableMachine(usableMachine, out frame);
      Agent agent = this.SpawnWanderingAgentWithInitialFrame(locationCharacter, frame);
      agent.GetComponent<CampaignAgentComponent>().AgentNavigator.SetTarget(usableMachine, true);
      return agent;
    }

    private Agent SpawnWanderingAgentWithInitialFrame(
      LocationCharacter locationCharacter,
      MatrixFrame spawnPointFrame,
      bool noHorses = true)
    {
      Team team = Team.Invalid;
      switch (locationCharacter.CharacterRelation)
      {
        case LocationCharacter.CharacterRelations.Neutral:
          team = Team.Invalid;
          break;
        case LocationCharacter.CharacterRelations.Friendly:
          team = this.Mission.PlayerAllyTeam;
          break;
        case LocationCharacter.CharacterRelations.Enemy:
          team = this.Mission.PlayerEnemyTeam;
          break;
      }
      spawnPointFrame.origin.z = this.Mission.Scene.GetGroundHeightAtPosition(spawnPointFrame.origin);
      (uint color1, uint color2) settlementColors = MissionAgentHandler.GetAgentSettlementColors(locationCharacter);
      AgentBuildData agentBuildData1 = locationCharacter.GetAgentBuildData().Team(team).InitialPosition(in spawnPointFrame.origin);
      Vec2 vec2 = spawnPointFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).ClothingColor1(settlementColors.color1).ClothingColor2(settlementColors.color2).CivilianEquipment(locationCharacter.UseCivilianEquipment).NoHorses(noHorses).Banner(locationCharacter.Character?.HeroObject?.Clan?.Banner);
      Agent agent = this.Mission.SpawnAgent(agentBuildData2);
      MissionAgentHandler.SetAgentExcludeFaceGroupIdAux(agent, MissionAgentHandler._disabledFaceId);
      AnimationSystemData animationSystemData = agentBuildData2.AgentMonster.FillAnimationSystemData(MBGlobals.GetActionSet(locationCharacter.ActionSetCode), locationCharacter.Character.GetStepSize(), false);
      agent.SetActionSet(ref animationSystemData);
      agent.GetComponent<CampaignAgentComponent>().CreateAgentNavigator(locationCharacter);
      locationCharacter.AddBehaviors((IAgent) agent);
      return agent;
    }

    private static void SetAgentExcludeFaceGroupIdAux(Agent agent, int _disabledFaceId)
    {
      if (_disabledFaceId == -1)
        return;
      agent.SetAgentExcludeStateForFaceGroupId(_disabledFaceId, true);
    }

    public static uint GetRandomTournamentTeamColor(int teamIndex)
    {
      return MissionAgentHandler._tournamentTeamColors[teamIndex % MissionAgentHandler._tournamentTeamColors.Length];
    }

    public static (uint color1, uint color2) GetAgentSettlementColors(
      LocationCharacter locationCharacter)
    {
      CharacterObject character = locationCharacter.Character;
      if (character.IsHero)
      {
        if (character.HeroObject.Clan == CharacterObject.PlayerCharacter.HeroObject.Clan)
          return (Clan.PlayerClan.Color, Clan.PlayerClan.Color2);
        return !character.HeroObject.IsNotable ? (locationCharacter.AgentData.AgentClothingColor1, locationCharacter.AgentData.AgentClothingColor2) : CharacterHelper.GetDeterministicColorsForCharacter(character);
      }
      return character.IsSoldier ? (Settlement.CurrentSettlement.MapFaction.Color, Settlement.CurrentSettlement.MapFaction.Color2) : (MissionAgentHandler._villagerClothColors[MBRandom.RandomInt(MissionAgentHandler._villagerClothColors.Length)], MissionAgentHandler._villagerClothColors[MBRandom.RandomInt(MissionAgentHandler._villagerClothColors.Length)]);
    }

    public UsableMachine FindUnusedPointWithTagForAgent(Agent agent, string tag)
    {
      return this.FindUnusedPointForAgent(agent, this._pairedUsablePoints, tag) ?? this.FindUnusedPointForAgent(agent, this._usablePoints, tag);
    }

    private UsableMachine FindUnusedPointForAgent(
      Agent agent,
      Dictionary<string, List<UsableMachine>> usableMachinesList,
      string primaryTag)
    {
      List<UsableMachine> usableMachineList;
      if (usableMachinesList.TryGetValue(primaryTag, out usableMachineList) && usableMachineList.Count > 0)
      {
        int num = MBRandom.RandomInt(0, usableMachineList.Count);
        for (int index = 0; index < usableMachineList.Count; ++index)
        {
          UsableMachine unusedPointForAgent = usableMachineList[(num + index) % usableMachineList.Count];
          if (!unusedPointForAgent.IsDisabled && !unusedPointForAgent.IsDestroyed && unusedPointForAgent.IsStandingPointAvailableForAgent(agent))
            return unusedPointForAgent;
        }
      }
      return (UsableMachine) null;
    }

    public List<UsableMachine> FindAllUnusedPoints(Agent agent, string primaryTag)
    {
      List<UsableMachine> usableMachineList = new List<UsableMachine>();
      List<UsableMachine> allUnusedPoints = new List<UsableMachine>();
      List<UsableMachine> collection;
      this._usablePoints.TryGetValue(primaryTag, out collection);
      List<UsableMachine> source;
      this._pairedUsablePoints.TryGetValue(primaryTag, out source);
      List<UsableMachine> list = source != null ? source.Distinct<UsableMachine>().ToList<UsableMachine>() : (List<UsableMachine>) null;
      // ISSUE: explicit non-virtual call
      if (collection != null && __nonvirtual (collection.Count) > 0)
        usableMachineList.AddRange((IEnumerable<UsableMachine>) collection);
      // ISSUE: explicit non-virtual call
      if (list != null && __nonvirtual (list.Count) > 0)
        usableMachineList.AddRange((IEnumerable<UsableMachine>) list);
      if (usableMachineList.Count > 0)
      {
        foreach (UsableMachine usableMachine in usableMachineList)
        {
          if (usableMachine.StandingPoints.Exists((Predicate<StandingPoint>) (sp => (sp.IsInstantUse || !sp.HasUser && !sp.HasAIMovingTo) && !sp.IsDisabledForAgent(agent))))
            allUnusedPoints.Add(usableMachine);
        }
      }
      return allUnusedPoints;
    }

    public void RemovePropReference(List<GameEntity> props)
    {
      foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
      {
        foreach (GameEntity prop in props)
        {
          if (prop.HasTag(usablePoint.Key))
          {
            UsableMachine firstScriptOfType = prop.GetFirstScriptOfType<UsableMachine>();
            usablePoint.Value.Remove(firstScriptOfType);
          }
        }
      }
      foreach (KeyValuePair<string, List<UsableMachine>> pairedUsablePoint in this._pairedUsablePoints)
      {
        foreach (GameEntity prop in props)
        {
          if (prop.HasTag(pairedUsablePoint.Key))
          {
            UsableMachine firstScriptOfType = prop.GetFirstScriptOfType<UsableMachine>();
            pairedUsablePoint.Value.Remove(firstScriptOfType);
          }
        }
      }
    }

    public void AddPropReference(List<GameEntity> props)
    {
      foreach (KeyValuePair<string, List<UsableMachine>> usablePoint in this._usablePoints)
      {
        foreach (GameEntity prop in props)
        {
          UsableMachine firstScriptOfType = prop.GetFirstScriptOfType<UsableMachine>();
          if (firstScriptOfType != null && prop.HasTag(usablePoint.Key))
            usablePoint.Value.Add(firstScriptOfType);
        }
      }
    }

    public void TeleportTargetAgentNearReferenceAgent(
      Agent referenceAgent,
      Agent teleportAgent,
      bool teleportFollowers,
      bool teleportOpposite)
    {
      Vec3 vec3_1 = referenceAgent.Position + referenceAgent.LookDirection.NormalizedCopy() * 4f;
      Vec3 position;
      if (teleportOpposite)
      {
        position = vec3_1;
        position.z = this.Mission.Scene.GetGroundHeightAtPosition(position);
      }
      else
      {
        position = Mission.Current.GetRandomPositionAroundPoint(referenceAgent.Position, 2f, 4f, true);
        position.z = this.Mission.Scene.GetGroundHeightAtPosition(position);
      }
      Vec3 vec3_2 = new Vec3(new WorldFrame(referenceAgent.Frame.rotation, new WorldPosition(this.Mission.Scene, referenceAgent.Frame.origin)).Origin.AsVec2 - position.AsVec2);
      teleportAgent.LookDirection = vec3_2.NormalizedCopy();
      teleportAgent.TeleportToPosition(position);
      if (!teleportFollowers || teleportAgent.Controller != Agent.ControllerType.Player)
        return;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        AccompanyingCharacter accompanyingCharacter = PlayerEncounter.LocationEncounter.GetAccompanyingCharacter(CampaignMission.Current.Location.GetLocationCharacter(agent.Origin));
        if (agent.GetComponent<CampaignAgentComponent>().AgentNavigator != null && accompanyingCharacter != null && accompanyingCharacter.IsFollowingPlayerAtMissionStart)
        {
          MatrixFrame frame;
          this.GetFrameForFollowingAgent(teleportAgent, out frame);
          agent.TeleportToPosition(frame.origin);
        }
      }
    }

    public static int GetPointCountOfUsableMachine(
      UsableMachine usableMachine,
      bool checkForUnusedOnes)
    {
      int countOfUsableMachine = 0;
      List<AnimationPoint> animationPointList = new List<AnimationPoint>();
      foreach (StandingPoint standingPoint in (List<StandingPoint>) usableMachine.StandingPoints)
      {
        if (standingPoint is AnimationPoint animationPoint && animationPoint.IsActive && !standingPoint.IsDeactivated && !standingPoint.IsDisabled && !standingPoint.IsInstantUse && (!checkForUnusedOnes || !standingPoint.HasUser && !standingPoint.HasAIMovingTo))
        {
          List<AnimationPoint> alternatives = animationPoint.GetAlternatives();
          if (alternatives.Count == 0)
            ++countOfUsableMachine;
          else if (!animationPointList.Contains(animationPoint) && (!checkForUnusedOnes || !alternatives.Any<AnimationPoint>((Func<AnimationPoint, bool>) (x => x.HasUser && x.HasAIMovingTo))))
          {
            animationPointList.AddRange((IEnumerable<AnimationPoint>) alternatives);
            ++countOfUsableMachine;
          }
        }
      }
      return countOfUsableMachine;
    }
  }
}
