// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBuildingScoreCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBuildingScoreCalculationModel : BuildingScoreCalculationModel
  {
    public override Building GetNextBuilding(Town town)
    {
      Building building = town.Buildings[MBRandom.RandomInt(0, town.Buildings.Count)];
      return building.CurrentLevel != 3 && !town.BuildingsInProgress.Contains(building) && building.BuildingType.BuildingLocation != BuildingLocation.Daily ? building : (Building) null;
    }
  }
}
