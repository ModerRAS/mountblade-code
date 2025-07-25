// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultVolunteerModel
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
  public class DefaultVolunteerModel : VolunteerModel
  {
    public override int MaximumIndexHeroCanRecruitFromHero(
      Hero buyerHero,
      Hero sellerHero,
      int useValueAsRelation = -101)
    {
      Settlement currentSettlement = sellerHero.CurrentSettlement;
      int num1 = 1;
      int recruitSlotBonus = buyerHero == Hero.MainHero ? Campaign.Current.Models.DifficultyModel.GetPlayerRecruitSlotBonus() : 0;
      int num2 = buyerHero != Hero.MainHero ? 1 : 0;
      int num3 = currentSettlement == null || buyerHero.MapFaction != currentSettlement.MapFaction ? 0 : 1;
      int num4 = currentSettlement == null || !buyerHero.MapFaction.IsAtWarWith(currentSettlement.MapFaction) ? 0 : -(1 + num2);
      if (buyerHero.IsMinorFactionHero && currentSettlement != null && currentSettlement.IsVillage)
        num4 = 0;
      int num5 = useValueAsRelation < -100 ? buyerHero.GetRelation(sellerHero) : useValueAsRelation;
      int num6 = num5 >= 100 ? 7 : (num5 >= 80 ? 6 : (num5 >= 60 ? 5 : (num5 >= 40 ? 4 : (num5 >= 20 ? 3 : (num5 >= 10 ? 2 : (num5 >= 5 ? 1 : (num5 >= 0 ? 0 : -1)))))));
      int num7 = 0;
      if (sellerHero.IsGangLeader && currentSettlement != null && currentSettlement.OwnerClan == buyerHero.Clan)
      {
        if (currentSettlement.IsTown)
        {
          Hero governor = currentSettlement.Town.Governor;
          if ((governor != null ? (governor.GetPerkValue(DefaultPerks.Roguery.OneOfTheFamily) ? 1 : 0) : 0) != 0)
            goto label_7;
        }
        if (currentSettlement.IsVillage)
        {
          Hero governor = currentSettlement.Village.Bound.Town.Governor;
          if ((governor != null ? (governor.GetPerkValue(DefaultPerks.Roguery.OneOfTheFamily) ? 1 : 0) : 0) == 0)
            goto label_8;
        }
        else
          goto label_8;
label_7:
        num7 += (int) DefaultPerks.Roguery.OneOfTheFamily.SecondaryBonus;
      }
label_8:
      if (sellerHero.IsMerchant && buyerHero.GetPerkValue(DefaultPerks.Trade.ArtisanCommunity))
        num7 += (int) DefaultPerks.Trade.ArtisanCommunity.SecondaryBonus;
      if (sellerHero.Culture == buyerHero.Culture && buyerHero.GetPerkValue(DefaultPerks.Leadership.CombatTips))
        num7 += (int) DefaultPerks.Leadership.CombatTips.SecondaryBonus;
      if (sellerHero.IsRuralNotable && buyerHero.GetPerkValue(DefaultPerks.Charm.Firebrand))
        num7 += (int) DefaultPerks.Charm.Firebrand.SecondaryBonus;
      if (sellerHero.IsUrbanNotable && buyerHero.GetPerkValue(DefaultPerks.Charm.FlexibleEthics))
        num7 += (int) DefaultPerks.Charm.FlexibleEthics.SecondaryBonus;
      if (sellerHero.IsArtisan && buyerHero.PartyBelongedTo != null && buyerHero.PartyBelongedTo.EffectiveEngineer != null && buyerHero.PartyBelongedTo.EffectiveEngineer.GetPerkValue(DefaultPerks.Engineering.EngineeringGuilds))
        num7 += (int) DefaultPerks.Engineering.EngineeringGuilds.PrimaryBonus;
      return MathF.Min(6, MathF.Max(0, num1 + num2 + num6 + recruitSlotBonus + num3 + num4 + num7));
    }

    public override float GetDailyVolunteerProductionProbability(
      Hero hero,
      int index,
      Settlement settlement)
    {
      float num1 = 0.7f;
      int num2 = 0;
      foreach (Town fief in (List<Town>) hero.CurrentSettlement.MapFaction.Fiefs)
        num2 += fief.IsTown ? ((double) fief.Prosperity < 3000.0 ? 1 : ((double) fief.Prosperity < 6000.0 ? 2 : 3)) + fief.Villages.Count : fief.Villages.Count;
      float num3 = num2 < 46 ? (float) ((double) num2 / 46.0 * ((double) num2 / 46.0)) : 1f;
      ExplainedNumber explainedNumber = new ExplainedNumber(0.75f * MathF.Clamp(MathF.Pow(num1 + (hero.CurrentSettlement == null || (double) num3 >= 1.0 ? 0.0f : (float) ((1.0 - (double) num3) * 0.20000000298023224)), (float) (index + 1)), 0.0f, 1f));
      if (hero.Clan?.Kingdom != null && hero.Clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Cantons))
        explainedNumber.AddFactor(0.2f);
      Town town = settlement.IsTown ? settlement.Town : settlement.Village.TradeBound?.Town;
      if (town != null && hero.IsAlive && hero.VolunteerTypes[index] != null && hero.VolunteerTypes[index].IsMounted && PerkHelper.GetPerkValueForTown(DefaultPerks.Riding.CavalryTactics, town))
        explainedNumber.AddFactor(DefaultPerks.Riding.CavalryTactics.PrimaryBonus);
      return explainedNumber.ResultNumber;
    }

    public override CharacterObject GetBasicVolunteer(Hero sellerHero)
    {
      return sellerHero.IsRuralNotable && sellerHero.CurrentSettlement.Village.Bound.IsCastle ? sellerHero.Culture.EliteBasicTroop : sellerHero.Culture.BasicTroop;
    }

    public override bool CanHaveRecruits(Hero hero)
    {
      switch (hero.Occupation)
      {
        case Occupation.Mercenary:
        case Occupation.Artisan:
        case Occupation.Merchant:
        case Occupation.Preacher:
        case Occupation.Headman:
        case Occupation.GangLeader:
        case Occupation.RuralNotable:
          return true;
        default:
          return false;
      }
    }

    public override int MaxVolunteerTier => 4;
  }
}
