// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultWallHitPointCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultWallHitPointCalculationModel : WallHitPointCalculationModel
  {
    public override float CalculateMaximumWallHitPoint(Town town)
    {
      return town == null ? 0.0f : this.CalculateMaximumWallHitPointInternal(town);
    }

    private float CalculateMaximumWallHitPointInternal(Town town)
    {
      float num = 0.0f;
      float hitPointInternal;
      switch (town.GetWallLevel())
      {
        case 1:
          hitPointInternal = num + 30000f;
          break;
        case 2:
          hitPointInternal = num + 50000f;
          break;
        case 3:
          hitPointInternal = num + 67000f;
          break;
        default:
          Debug.FailedAssert("Settlement \"" + (object) town.Name + "\" has a wrong wall level set.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameComponents\\DefaultWallHitPointCalculationModel.cs", nameof (CalculateMaximumWallHitPointInternal), 35);
          hitPointInternal = num - 1f;
          break;
      }
      Hero governor = town.Governor;
      if ((governor != null ? (governor.GetPerkValue(DefaultPerks.Engineering.EngineeringGuilds) ? 1 : 0) : 0) != 0)
        hitPointInternal += hitPointInternal * DefaultPerks.Engineering.EngineeringGuilds.SecondaryBonus;
      return hitPointInternal;
    }
  }
}
