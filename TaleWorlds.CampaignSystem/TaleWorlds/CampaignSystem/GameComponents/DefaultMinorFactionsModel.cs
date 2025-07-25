// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMinorFactionsModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMinorFactionsModel : MinorFactionsModel
  {
    public override float DailyMinorFactionHeroSpawnChance => 0.1f;

    public override int MinorFactionHeroLimit => 4;

    public override int GetMercenaryAwardFactorToJoinKingdom(
      Clan mercenaryClan,
      Kingdom kingdom,
      bool neededAmountForClanToJoinCalculation = false)
    {
      float powerRatioToEnemies = FactionHelper.GetPowerRatioToEnemies(kingdom);
      float num1 = (double) powerRatioToEnemies <= 2.0 ? ((double) powerRatioToEnemies <= 1.0 ? ((double) powerRatioToEnemies <= 0.5 ? (float) (1.5 + (0.5 - (double) powerRatioToEnemies)) : (float) (1.0 + (1.0 - (double) powerRatioToEnemies))) : (float) (1.0 - ((double) powerRatioToEnemies - 1.0) * 0.5)) : 0.5f;
      float num2 = MathF.Sqrt(FactionHelper.GetPowerRatioToTributePayedKingdoms(kingdom));
      float num3 = (double) num2 > 1.0 ? 1f : 2f - num2;
      float num4 = (float) (1.0 + (double) mercenaryClan.Leader.Clan.Tier * 0.15000000596046448);
      int num5 = 0;
      float num6 = 0.0f;
      float num7 = 0.0f;
      foreach (Clan clan in (List<Clan>) kingdom.Clans)
      {
        if (!clan.IsUnderMercenaryService)
        {
          int num8 = clan.Leader == kingdom.Leader ? 2 : 1;
          num6 += (float) (num8 * clan.Leader.Gold);
          num5 += num8;
          if (clan.Leader.Gold < 30000)
            num7 += (float) num8 * (float) (1.0 - (double) clan.Leader.Gold / 30000.0);
        }
      }
      int num9 = MathF.Min(1000000, kingdom.KingdomBudgetWallet);
      float num10 = MathF.Min(3.5f, MathF.Pow((float) (((num5 > 0 ? ((double) num6 + (double) num9 * 0.5) / (double) num5 : 0.0) + 2000.0) / 10000.0), 0.3f)) - 0.5f;
      float num11 = (float) (1.0 - 0.800000011920929 * ((double) num7 / (double) num5));
      int count = kingdom.Clans.Count;
      int num12 = 0;
      foreach (Clan clan in (List<Clan>) kingdom.Clans)
      {
        if (clan.IsUnderMercenaryService)
          ++num12;
      }
      float num13 = count < 10 ? (float) (1.0 + (double) ((10 - count) * (10 - count)) / 81.0) : 1f;
      int num14 = 0;
      foreach (Town fief in (List<Town>) kingdom.Fiefs)
        num14 += fief.IsTown ? 2 : 1;
      float num15 = num14 < 25 ? 1f + MathF.Min(1f, (float) ((25 - num14) * (25 - num14)) * (3f / 1000f)) : 1f;
      if ((double) num15 > 1.0 && (double) num1 < 1.0)
      {
        float num16 = MathF.Pow(1f / num1, 1f / num15);
        num1 *= num16;
      }
      if (num12 > 0)
      {
        if ((double) num15 > 1.0)
          num15 = (float) (1.0 + ((double) num15 - 1.0) / (double) MathF.Sqrt((float) (1 + num12)));
        if ((double) num1 > 1.0)
          num1 = (float) (1.0 + ((double) num1 - 1.0) / (double) MathF.Pow((float) (1 + num12), 0.33f));
        if ((double) num3 > 1.0)
          num3 = (float) (1.0 + ((double) num3 - 1.0) / (double) MathF.Sqrt((float) (1 + num12)));
      }
      float num17 = (float) ((kingdom.Leader == Hero.MainHero ? 22.0 : 20.0) - (mercenaryClan.Leader == null || (double) mercenaryClan.Leader.Gold >= 160000.0 ? 0.0 : 2.0 * ((160000.0 - (double) MathF.Max(80000, mercenaryClan.Leader.Gold)) / 80000.0)) - (mercenaryClan.Leader == null || (double) mercenaryClan.Leader.Gold >= 80000.0 ? 0.0 : 2.0 * ((80000.0 - (double) MathF.Max(40000, mercenaryClan.Leader.Gold)) / 40000.0)) - (mercenaryClan.Leader == null || (double) mercenaryClan.Leader.Gold >= 40000.0 ? 0.0 : 2.0 * ((40000.0 - (double) MathF.Max(20000, mercenaryClan.Leader.Gold)) / 20000.0)) - (mercenaryClan.Leader == null || (double) mercenaryClan.Leader.Gold >= 20000.0 ? 0.0 : 2.0 * ((20000.0 - (double) MathF.Max(10000, mercenaryClan.Leader.Gold)) / 10000.0)) - (mercenaryClan.Leader == null || (double) mercenaryClan.Leader.Gold >= 10000.0 ? 0.0 : 2.0 * ((10000.0 - (double) MathF.Max(5000, mercenaryClan.Leader.Gold)) / 5000.0)) - (mercenaryClan.Leader == null || (double) mercenaryClan.Leader.Gold >= 5000.0 ? 0.0 : 2.0 * ((5000.0 - (double) mercenaryClan.Leader.Gold) / 5000.0)));
      int relation = mercenaryClan.Leader.GetRelation(kingdom.Leader);
      float num18 = neededAmountForClanToJoinCalculation ? (relation < 0 ? (float) (1.0 + (double) MathF.Sqrt((float) MathF.Abs(relation)) / 10.0) : (float) (1.0 - (double) MathF.Sqrt((float) relation) / 20.0)) : 1f;
      int factorToJoinKingdom = neededAmountForClanToJoinCalculation ? (int) ((double) num4 * (double) num17 * (double) num18) * 10 : MathF.Ceiling(MathF.Max(1f, MathF.Min(80f, (float) ((double) num13 * (double) num1 * (double) num3 * (double) num4 * (double) num10 * (double) num11 * (double) num15 * 6.0)))) * 10;
      if (mercenaryClan.IsMinorFaction && kingdom != null && kingdom.Leader == Hero.MainHero && kingdom.Leader.GetPerkValue(DefaultPerks.Trade.ManOfMeans))
        factorToJoinKingdom = MathF.Round((float) factorToJoinKingdom * (1f + DefaultPerks.Trade.ManOfMeans.PrimaryBonus));
      if (mercenaryClan.Culture.HasFeat(DefaultCulturalFeats.VlandianRenownMercenaryFeat))
        factorToJoinKingdom += (int) ((double) factorToJoinKingdom * 0.15000000596046448);
      return factorToJoinKingdom;
    }
  }
}
