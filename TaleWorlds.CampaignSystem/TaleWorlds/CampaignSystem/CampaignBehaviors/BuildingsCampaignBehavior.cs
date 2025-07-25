// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BuildingsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class BuildingsCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.OnBuildingLevelChangedEvent.AddNonSerializedListener((object) this, new Action<Town, Building, int>(this.OnBuildingLevelChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnNewGameCreated(CampaignGameStarter starter)
    {
      BuildingsCampaignBehavior.BuildDevelopmentsAtGameStart();
    }

    private void DecideProject(Town town)
    {
      if (town.Owner.Settlement.OwnerClan == Clan.PlayerClan || town.BuildingsInProgress.Count >= 3)
        return;
      List<Building> buildings = new List<Building>((IEnumerable<Building>) town.BuildingsInProgress);
      int num = 100;
      for (int index = 0; index < num; ++index)
      {
        Building nextBuilding = Campaign.Current.Models.BuildingScoreCalculationModel.GetNextBuilding(town);
        if (nextBuilding != null)
        {
          buildings.Add(nextBuilding);
          break;
        }
      }
      BuildingHelper.ChangeCurrentBuildingQueue(buildings, town);
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsFortification)
        return;
      Town town = settlement.Town;
      foreach (Building building in (List<Building>) town.Buildings)
      {
        if (town.Owner.Settlement.SiegeEvent == null)
          building.HitPointChanged(10f);
      }
      this.DecideProject(town);
    }

    private void OnBuildingLevelChanged(Town town, Building building, int levelChange)
    {
      if (levelChange <= 0)
        return;
      if (town.Governor != null)
      {
        if (town.IsTown && town.Governor.GetPerkValue(DefaultPerks.Charm.MoralLeader))
        {
          foreach (Hero notable in (List<Hero>) town.Settlement.Notables)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(town.Settlement.OwnerClan.Leader, notable, MathF.Round(DefaultPerks.Charm.MoralLeader.SecondaryBonus));
        }
        if (town.Governor.GetPerkValue(DefaultPerks.Engineering.Foreman))
          town.Prosperity += DefaultPerks.Engineering.Foreman.SecondaryBonus;
      }
      SkillLevelingManager.OnSettlementProjectFinished(town.Settlement);
    }

    private static void BuildDevelopmentsAtGameStart()
    {
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        Town town = settlement.Town;
        if (town != null)
        {
          bool haveBuilding = false;
          int level = 0;
          if (town.IsTown)
          {
            foreach (BuildingType buildingType in (List<BuildingType>) BuildingType.All)
            {
              if (buildingType.BuildingLocation == BuildingLocation.Settlement && buildingType != DefaultBuildingTypes.Fortifications)
              {
                BuildingsCampaignBehavior.GetBuildingProbability(out haveBuilding, out level);
                if (haveBuilding)
                {
                  if (level > 3)
                    level = 3;
                  town.Buildings.Add(new Building(buildingType, town, currentLevel: level));
                }
              }
            }
            foreach (BuildingType buildingType1 in (List<BuildingType>) BuildingType.All)
            {
              BuildingType buildingType = buildingType1;
              if (!town.Buildings.Any<Building>((Func<Building, bool>) (k => k.BuildingType == buildingType)) && buildingType.BuildingLocation == BuildingLocation.Settlement)
                town.Buildings.Add(new Building(buildingType, town));
            }
          }
          else if (town.IsCastle)
          {
            foreach (BuildingType buildingType in (List<BuildingType>) BuildingType.All)
            {
              if (buildingType.BuildingLocation == BuildingLocation.Castle && buildingType != DefaultBuildingTypes.Wall)
              {
                BuildingsCampaignBehavior.GetBuildingProbability(out haveBuilding, out level);
                if (haveBuilding)
                {
                  if (level > 3)
                    level = 3;
                  town.Buildings.Add(new Building(buildingType, town, currentLevel: level));
                }
              }
            }
            foreach (BuildingType buildingType2 in (List<BuildingType>) BuildingType.All)
            {
              BuildingType buildingType = buildingType2;
              if (!town.Buildings.Any<Building>((Func<Building, bool>) (k => k.BuildingType == buildingType)) && buildingType.BuildingLocation == BuildingLocation.Castle)
                town.Buildings.Add(new Building(buildingType, town));
            }
          }
          int num1 = MBRandom.RandomInt(1, 4);
          int num2 = 1;
          foreach (BuildingType buildingType in (List<BuildingType>) BuildingType.All)
          {
            if (buildingType.BuildingLocation == BuildingLocation.Daily)
            {
              Building building = new Building(buildingType, town, currentLevel: 1);
              town.Buildings.Add(building);
              if (num2 == num1)
                building.IsCurrentlyDefault = true;
              ++num2;
            }
          }
          foreach (Building building in (IEnumerable<Building>) town.Buildings.OrderByDescending<Building, int>((Func<Building, int>) (k => k.CurrentLevel)))
          {
            if (building.CurrentLevel != 3 && building.CurrentLevel != building.BuildingType.StartLevel && building.BuildingType.BuildingLocation != BuildingLocation.Daily)
              town.BuildingsInProgress.Enqueue(building);
          }
        }
      }
    }

    private static void GetBuildingProbability(out bool haveBuilding, out int level)
    {
      level = MBRandom.RandomInt(0, 7);
      if (level < 4)
      {
        haveBuilding = false;
      }
      else
      {
        haveBuilding = true;
        level -= 3;
      }
    }
  }
}
