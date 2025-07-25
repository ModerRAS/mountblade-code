// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPrisonerDonationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPrisonerDonationModel : PrisonerDonationModel
  {
    public override float CalculateRelationGainAfterHeroPrisonerDonate(
      PartyBase donatingParty,
      Hero donatedHero,
      Settlement donatedSettlement)
    {
      float heroPrisonerDonate = 0.0f;
      int x = Campaign.Current.Models.RansomValueCalculationModel.PrisonerRansomValue(donatedHero.CharacterObject, donatingParty.LeaderHero);
      int relation = donatedHero.GetRelation(donatedSettlement.OwnerClan.Leader);
      if (relation <= 0)
      {
        float num = (float) (1.0 - (double) relation / 200.0);
        heroPrisonerDonate = !donatedHero.IsKingdomLeader ? (donatedHero.Clan.Leader != donatedHero ? MathF.Min(20f, MathF.Pow((float) x, 0.5f) * 0.1f) * num : MathF.Min(30f, MathF.Pow((float) x, 0.5f) * 0.25f) * num) : MathF.Min(40f, MathF.Pow((float) x, 0.5f) * 0.5f) * num;
      }
      return heroPrisonerDonate;
    }

    public override float CalculateInfluenceGainAfterPrisonerDonation(
      PartyBase donatingParty,
      CharacterObject character,
      Settlement donatedSettlement)
    {
      float num1 = 0.0f;
      float prisonerDonation;
      if (donatingParty.LeaderHero == Hero.MainHero)
      {
        if (character.IsHero)
        {
          Hero heroObject = character.HeroObject;
          float num2 = MathF.Pow((float) Campaign.Current.Models.RansomValueCalculationModel.PrisonerRansomValue(heroObject.CharacterObject, donatingParty.LeaderHero), 0.4f);
          prisonerDonation = !heroObject.IsKingdomLeader ? (heroObject.Clan.Leader != heroObject ? num2 * 0.2f : num2 * 0.5f) : num2;
        }
        else
          prisonerDonation = num1 + character.GetPower() / 20f;
      }
      else
      {
        int tier = character.Tier;
        prisonerDonation = (float) ((2 + tier) * (8 + tier)) * 0.02f;
      }
      return prisonerDonation;
    }

    public override float CalculateInfluenceGainAfterTroopDonation(
      PartyBase donatingParty,
      CharacterObject donatedCharacter,
      Settlement donatedSettlement)
    {
      Hero leaderHero = donatingParty.LeaderHero;
      ExplainedNumber stat = new ExplainedNumber(donatedCharacter.GetPower() / 3f);
      if (leaderHero != null && leaderHero.GetPerkValue(DefaultPerks.Steward.Relocation))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Steward.Relocation, donatingParty.MobileParty, true, ref stat);
      return stat.ResultNumber;
    }
  }
}
