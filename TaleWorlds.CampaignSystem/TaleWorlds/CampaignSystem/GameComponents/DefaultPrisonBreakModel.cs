// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPrisonBreakModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPrisonBreakModel : PrisonBreakModel
  {
    private const int BasePrisonBreakCost = 1000;

    public override bool CanPlayerStagePrisonBreak(Settlement settlement)
    {
      bool flag1 = false;
      if (settlement.IsFortification)
      {
        MobileParty garrisonParty = settlement.Town.GarrisonParty;
        bool flag2 = (garrisonParty != null ? (garrisonParty.PrisonRoster.TotalHeroes > 0 ? 1 : 0) : 0) != 0 || settlement.Party.PrisonRoster.TotalHeroes > 0;
        flag1 = ((settlement.MapFaction == Clan.PlayerClan.MapFaction ? 0 : (!FactionManager.IsAlliedWithFaction(settlement.MapFaction, Clan.PlayerClan.MapFaction) ? 1 : 0)) & (flag2 ? 1 : 0)) != 0;
      }
      return flag1;
    }

    public override int GetPrisonBreakStartCost(Hero prisonerHero)
    {
      int num = MathF.Ceiling((float) ((double) Campaign.Current.Models.RansomValueCalculationModel.PrisonerRansomValue(prisonerHero.CharacterObject) / 2000.0 * (double) prisonerHero.CurrentSettlement.Town.Security * 35.0) - (float) (Hero.MainHero.GetSkillValue(DefaultSkills.Roguery) * 10));
      return (num < 100 ? 0 : num / 100 * 100) + 1000;
    }

    public override int GetRelationRewardOnPrisonBreak(Hero prisonerHero) => 15;

    public override float GetRogueryRewardOnPrisonBreak(Hero prisonerHero, bool isSuccess)
    {
      return isSuccess ? (float) MBRandom.RandomInt(3500, 6000) : (float) MBRandom.RandomInt(1000, 2500);
    }
  }
}
