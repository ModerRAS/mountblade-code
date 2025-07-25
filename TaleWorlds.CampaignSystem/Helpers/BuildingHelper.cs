// Decompiled with JetBrains decompiler
// Type: Helpers.BuildingHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Library;

#nullable disable
namespace Helpers
{
  public static class BuildingHelper
  {
    public static void ChangeCurrentBuilding(BuildingType buildingType, Town town)
    {
      Queue<Building> buildingQueue = new Queue<Building>();
      foreach (Building building in (List<Building>) town.Buildings)
      {
        if (building.BuildingType == buildingType)
        {
          buildingQueue.Enqueue(building);
          break;
        }
      }
      foreach (Building building in town.BuildingsInProgress)
        buildingQueue.Enqueue(building);
      town.BuildingsInProgress = buildingQueue;
    }

    public static void ChangeDefaultBuilding(Building newDefault, Town town)
    {
      foreach (Building building in (List<Building>) town.Buildings)
      {
        if (building.IsCurrentlyDefault)
          building.IsCurrentlyDefault = false;
        if (building == newDefault)
          building.IsCurrentlyDefault = true;
      }
    }

    public static void ChangeCurrentBuildingQueue(List<Building> buildings, Town town)
    {
      town.BuildingsInProgress = new Queue<Building>();
      foreach (Building building in buildings)
      {
        if (!building.BuildingType.IsDefaultProject)
          town.BuildingsInProgress.Enqueue(building);
      }
    }

    public static float GetProgressOfBuilding(Building building, Town town)
    {
      foreach (Building building1 in (List<Building>) town.Buildings)
      {
        if (building1 == building)
          return building.BuildingProgress / (float) building.GetConstructionCost();
      }
      Debug.FailedAssert(building.Name.ToString() + "is not a project of" + (object) town.Name, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Helpers.cs", nameof (GetProgressOfBuilding), 6243);
      return 0.0f;
    }

    public static int GetDaysToComplete(Building building, Town town)
    {
      BuildingConstructionModel constructionModel = Campaign.Current.Models.BuildingConstructionModel;
      foreach (Building building1 in (List<Building>) town.Buildings)
      {
        if (building1 == building)
        {
          float num1 = (float) building.GetConstructionCost() - building.BuildingProgress;
          int construction = (int) town.Construction;
          if (construction == 0)
            return -1;
          int a = (int) ((double) num1 / (double) construction);
          int num2 = town.IsCastle ? constructionModel.CastleBoostCost : constructionModel.TownBoostCost;
          if (town.BoostBuildingProcess >= num2)
          {
            int num3 = town.BoostBuildingProcess / num2;
            if (a > num3)
            {
              int num4 = num3 * construction;
              int powerWithoutBoost = Campaign.Current.Models.BuildingConstructionModel.CalculateDailyConstructionPowerWithoutBoost(town);
              return num3 + MathF.Max((int) (((double) num1 - (double) num4) / (double) powerWithoutBoost), 1);
            }
          }
          return MathF.Max(a, 1);
        }
      }
      Debug.FailedAssert(building.Name.ToString() + "is not a project of" + (object) town.Name, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Helpers.cs", nameof (GetDaysToComplete), 6285);
      return 0;
    }

    public static int GetTierOfBuilding(BuildingType buildingType, Town town)
    {
      foreach (Building building in (List<Building>) town.Buildings)
      {
        if (building.BuildingType == buildingType)
          return building.CurrentLevel;
      }
      Debug.FailedAssert(buildingType.Name.ToString() + "is not a project of" + (object) town.Name, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Helpers.cs", nameof (GetTierOfBuilding), 6299);
      return 0;
    }

    public static void BoostBuildingProcessWithGold(int gold, Town town)
    {
      if (gold < town.BoostBuildingProcess)
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, town.BoostBuildingProcess - gold);
      else if (gold > town.BoostBuildingProcess)
        GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, gold - town.BoostBuildingProcess);
      town.BoostBuildingProcess = gold;
    }

    public static void AddDefaultDailyBonus(
      Town fortification,
      BuildingEffectEnum effect,
      ref ExplainedNumber result)
    {
      float buildingEffectAmount = Campaign.Current.Models.BuildingEffectModel.GetBuildingEffectAmount(fortification.CurrentDefaultBuilding, effect);
      result.Add(buildingEffectAmount, fortification.CurrentDefaultBuilding.BuildingType.Name);
    }
  }
}
