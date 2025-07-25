// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.Towns.WorkshopMissionHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects.AreaMarkers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics.Towns
{
  public class WorkshopMissionHandler : MissionLogic
  {
    private Settlement _settlement;
    private MissionAgentHandler _missionAgentHandler;
    private string[] _propKinds = new string[6]
    {
      "a",
      "b",
      "c",
      "d",
      "e",
      "f"
    };
    private Dictionary<int, Dictionary<string, List<MatrixFrame>>> _propFrames;
    private List<GameEntity> _listOfCurrentProps;
    private List<WorkshopAreaMarker> _areaMarkers;
    private List<Tuple<Workshop, GameEntity>> _workshopSignEntities;

    public IEnumerable<Tuple<Workshop, GameEntity>> WorkshopSignEntities
    {
      get => this._workshopSignEntities.AsEnumerable<Tuple<Workshop, GameEntity>>();
    }

    public WorkshopMissionHandler(Settlement settlement) => this._settlement = settlement;

    public override void OnBehaviorInitialize()
    {
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      this._workshopSignEntities = new List<Tuple<Workshop, GameEntity>>();
      this._listOfCurrentProps = new List<GameEntity>();
      this._propFrames = new Dictionary<int, Dictionary<string, List<MatrixFrame>>>();
      this._areaMarkers = new List<WorkshopAreaMarker>();
    }

    public override void EarlyStart()
    {
      for (int key = 0; key < this._settlement.Town.Workshops.Length; ++key)
      {
        if (!this._settlement.Town.Workshops[key].WorkshopType.IsHidden)
        {
          this._propFrames.Add(key, new Dictionary<string, List<MatrixFrame>>());
          foreach (string propKind in this._propKinds)
            this._propFrames[key].Add(propKind, new List<MatrixFrame>());
        }
      }
      this._areaMarkers = this.Mission.ActiveMissionObjects.FindAllWithType<WorkshopAreaMarker>().ToList<WorkshopAreaMarker>().FindAll((Predicate<WorkshopAreaMarker>) (x => x.GameEntity.HasTag("workshop_area_marker")));
      foreach (WorkshopAreaMarker areaMarker in this._areaMarkers)
        ;
      foreach (GameEntity prop in this.Mission.Scene.FindEntitiesWithTag("shop_prop").ToList<GameEntity>())
      {
        WorkshopAreaMarker workshop = this.FindWorkshop(prop);
        if (workshop != null && this._propFrames.ContainsKey(workshop.AreaIndex) && (this._settlement.Town.Workshops[workshop.AreaIndex] == null || !this._settlement.Town.Workshops[workshop.AreaIndex].WorkshopType.IsHidden))
        {
          foreach (string propKind in this._propKinds)
          {
            if (prop.HasTag(propKind))
            {
              this._propFrames[workshop.AreaIndex][propKind].Add(prop.GetGlobalFrame());
              this._listOfCurrentProps.Add(prop);
              break;
            }
          }
        }
      }
      this.SetBenches();
    }

    public override void AfterStart() => this.InitShopSigns();

    private WorkshopAreaMarker FindWorkshop(GameEntity prop)
    {
      foreach (WorkshopAreaMarker areaMarker in this._areaMarkers)
      {
        if (areaMarker.IsPositionInRange(prop.GlobalPosition))
          return areaMarker;
      }
      return (WorkshopAreaMarker) null;
    }

    private void SetBenches()
    {
      this._missionAgentHandler?.RemovePropReference(this._listOfCurrentProps);
      foreach (GameEntity listOfCurrentProp in this._listOfCurrentProps)
        listOfCurrentProp.Remove(89);
      this._listOfCurrentProps.Clear();
      foreach (KeyValuePair<int, Dictionary<string, List<MatrixFrame>>> propFrame in this._propFrames)
      {
        int key = propFrame.Key;
        foreach (KeyValuePair<string, List<MatrixFrame>> keyValuePair in propFrame.Value)
        {
          List<string> prefabNames = this.GetPrefabNames(key, keyValuePair.Key);
          if (prefabNames.Count != 0)
          {
            for (int index = 0; index < keyValuePair.Value.Count; ++index)
            {
              MatrixFrame frame = keyValuePair.Value[index];
              this._listOfCurrentProps.Add(GameEntity.Instantiate(this.Mission.Scene, prefabNames[index % prefabNames.Count], frame));
            }
          }
        }
      }
    }

    private void InitShopSigns()
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign || this._settlement == null || !this._settlement.IsTown)
        return;
      List<GameEntity> list = this.Mission.Scene.FindEntitiesWithTag("shop_sign").ToList<GameEntity>();
      foreach (WorkshopAreaMarker workshopAreaMarker in this.Mission.ActiveMissionObjects.FindAllWithType<WorkshopAreaMarker>().ToList<WorkshopAreaMarker>())
      {
        Workshop workshop = this._settlement.Town.Workshops[workshopAreaMarker.AreaIndex];
        if (this._workshopSignEntities.All<Tuple<Workshop, GameEntity>>((Func<Tuple<Workshop, GameEntity>, bool>) (x => x.Item1 != workshop)))
        {
          for (int index = 0; index < list.Count; ++index)
          {
            GameEntity gameEntity = list[index];
            if (workshopAreaMarker.IsPositionInRange(gameEntity.GlobalPosition))
            {
              this._workshopSignEntities.Add(new Tuple<Workshop, GameEntity>(workshop, gameEntity));
              list.RemoveAt(index);
              break;
            }
          }
        }
      }
      foreach (Tuple<Workshop, GameEntity> workshopSignEntity in this._workshopSignEntities)
      {
        GameEntity gameEntity = workshopSignEntity.Item2;
        WorkshopType workshopType = workshopSignEntity.Item1.WorkshopType;
        gameEntity.ClearComponents();
        MetaMesh copy = MetaMesh.GetCopy(workshopType != null ? workshopType.SignMeshName : "shop_sign_merchantavailable");
        gameEntity.AddMultiMesh(copy);
      }
    }

    private List<string> GetPrefabNames(int areaIndex, string propKind)
    {
      List<string> prefabNames = new List<string>();
      Workshop workshop = this._settlement.Town.Workshops[areaIndex];
      if (workshop.WorkshopType != null)
      {
        if (propKind == this._propKinds[0])
          prefabNames.Add(workshop.WorkshopType.PropMeshName1);
        else if (propKind == this._propKinds[1])
          prefabNames.Add(workshop.WorkshopType.PropMeshName2);
        else if (propKind == this._propKinds[2])
          prefabNames.AddRange((IEnumerable<string>) workshop.WorkshopType.PropMeshName3List);
        else if (propKind == this._propKinds[3])
          prefabNames.Add(workshop.WorkshopType.PropMeshName4);
        else if (propKind == this._propKinds[4])
          prefabNames.Add(workshop.WorkshopType.PropMeshName5);
        else if (propKind == this._propKinds[5])
          prefabNames.Add(workshop.WorkshopType.PropMeshName6);
      }
      return prefabNames;
    }
  }
}
