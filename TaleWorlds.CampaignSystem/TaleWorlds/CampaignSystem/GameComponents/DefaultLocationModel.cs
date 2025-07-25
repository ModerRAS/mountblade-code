// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultLocationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultLocationModel : LocationModel
  {
    public override int GetSettlementUpgradeLevel(LocationEncounter locationEncounter)
    {
      return locationEncounter.Settlement.Town.GetWallLevel();
    }

    public override string GetCivilianSceneLevel(Settlement settlement)
    {
      string civilianSceneLevel = "civilian";
      if (settlement.IsFortification)
      {
        string upgradeLevelTag = this.GetUpgradeLevelTag(settlement.Town.GetWallLevel());
        if (!upgradeLevelTag.IsEmpty<char>())
          civilianSceneLevel = civilianSceneLevel + " " + upgradeLevelTag;
      }
      return civilianSceneLevel;
    }

    public override string GetCivilianUpgradeLevelTag(int upgradeLevel)
    {
      if (upgradeLevel == 0)
        return "";
      string civilianUpgradeLevelTag = "civilian";
      string upgradeLevelTag = this.GetUpgradeLevelTag(upgradeLevel);
      if (!upgradeLevelTag.IsEmpty<char>())
        civilianUpgradeLevelTag = civilianUpgradeLevelTag + " " + upgradeLevelTag;
      return civilianUpgradeLevelTag;
    }

    public override string GetUpgradeLevelTag(int upgradeLevel)
    {
      switch (upgradeLevel)
      {
        case 1:
          return "level_1";
        case 2:
          return "level_2";
        case 3:
          return "level_3";
        default:
          return "";
      }
    }
  }
}
