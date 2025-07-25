// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultRansomValueCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultRansomValueCalculationModel : RansomValueCalculationModel
  {
    public override int PrisonerRansomValue(CharacterObject prisoner, Hero sellerHero = null)
    {
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(prisoner, (Hero) null);
      float num1 = 0.0f;
      float num2 = 0.0f;
      float num3 = 1f;
      if (prisoner.HeroObject?.Clan != null)
      {
        num1 = (float) ((prisoner.HeroObject.Clan.Tier + 2) * 200) * (prisoner.HeroObject.Clan.Leader == prisoner.HeroObject ? 2f : 1f);
        num2 = MathF.Sqrt((float) MathF.Max(0, prisoner.HeroObject.Gold)) * 6f;
        if (prisoner.HeroObject.Clan.Kingdom != null)
        {
          int count = prisoner.HeroObject.Clan.Kingdom.Fiefs.Count;
          num3 = prisoner.HeroObject.MapFaction.IsKingdomFaction ? (count < 8 ? (float) (((double) count + 1.0) / 9.0) : (float) (1.0 + (double) MathF.Sqrt((float) (count - 8)) * 0.10000000149011612)) : 1f;
        }
        else
          num3 = 0.5f;
      }
      float num4 = prisoner.HeroObject != null ? num1 + num2 : 0.0f;
      int num5 = (int) (((double) troopRecruitmentCost + (double) num4) * (!prisoner.IsHero ? 0.25 : 1.0) * (double) num3);
      if (sellerHero != null)
      {
        if (!prisoner.IsHero)
        {
          if (sellerHero.GetPerkValue(DefaultPerks.Roguery.Manhunter))
            num5 = MathF.Round((float) num5 + (float) num5 * DefaultPerks.Roguery.Manhunter.PrimaryBonus);
        }
        else if (sellerHero.IsPartyLeader && sellerHero.GetPerkValue(DefaultPerks.Roguery.RansomBroker))
          num5 = MathF.Round((float) num5 + (float) num5 * DefaultPerks.Roguery.RansomBroker.PrimaryBonus);
      }
      return num5 != 0 ? num5 : 1;
    }
  }
}
