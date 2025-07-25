// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultDailyTroopXpBonusModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultDailyTroopXpBonusModel : DailyTroopXpBonusModel
  {
    public override int CalculateDailyTroopXpBonus(Town town)
    {
      return this.CalculateTroopXpBonusInternal(town);
    }

    private int CalculateTroopXpBonusInternal(Town town)
    {
      ExplainedNumber bonuses = new ExplainedNumber();
      foreach (Building building in (List<Building>) town.Buildings)
      {
        float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.Experience);
        if ((double) buildingEffectAmount > 0.0)
          bonuses.Add(buildingEffectAmount, building.Name);
      }
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Leadership.RaiseTheMeek, town, ref bonuses);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.TwoHanded.ProjectileDeflection, town, ref bonuses);
      return (int) bonuses.ResultNumber;
    }

    public override float CalculateGarrisonXpBonusMultiplier(Town town) => 1f;
  }
}
