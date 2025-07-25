// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultClanTierModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultClanTierModel : ClanTierModel
  {
    private static readonly int[] TierLowerRenownLimits = new int[7]
    {
      0,
      50,
      150,
      350,
      900,
      2350,
      6150
    };
    private readonly TextObject _partyLimitBonusText = GameTexts.FindText("str_clan_tier_party_limit_bonus");
    private readonly TextObject _companionLimitBonusText = GameTexts.FindText("str_clan_tier_companion_limit_bonus");
    private readonly TextObject _mercenaryEligibleText = GameTexts.FindText("str_clan_tier_mercenary_eligible");
    private readonly TextObject _vassalEligibleText = GameTexts.FindText("str_clan_tier_vassal_eligible");
    private readonly TextObject _additionalCurrentPartySizeBonus = GameTexts.FindText("str_clan_tier_party_size_bonus");
    private readonly TextObject _additionalWorkshopCountBonus = GameTexts.FindText("str_clan_tier_workshop_count_bonus");
    private readonly TextObject _kingdomEligibleText = GameTexts.FindText("str_clan_tier_kingdom_eligible");

    public override int MinClanTier => 0;

    public override int MaxClanTier => 6;

    public override int MercenaryEligibleTier => 1;

    public override int VassalEligibleTier => 2;

    public override int BannerEligibleTier => 0;

    public override int RebelClanStartingTier => 3;

    public override int CompanionToLordClanStartingTier => 2;

    private int KingdomEligibleTier
    {
      get => Campaign.Current.Models.KingdomCreationModel.MinimumClanTierToCreateKingdom;
    }

    public override int CalculateInitialRenown(Clan clan)
    {
      int lowerRenownLimit = DefaultClanTierModel.TierLowerRenownLimits[clan.Tier];
      int num = clan.Tier >= this.MaxClanTier ? DefaultClanTierModel.TierLowerRenownLimits[this.MaxClanTier] + 1500 : DefaultClanTierModel.TierLowerRenownLimits[clan.Tier + 1];
      int maxValue = (int) ((double) num - (double) (num - lowerRenownLimit) * 0.40000000596046448);
      return MBRandom.RandomInt(lowerRenownLimit, maxValue);
    }

    public override int CalculateInitialInfluence(Clan clan)
    {
      return (int) (150.0 + (double) MBRandom.RandomInt((int) ((double) this.CalculateInitialRenown(clan) / 15.0)) + (double) MBRandom.RandomInt(MBRandom.RandomInt(MBRandom.RandomInt(400))));
    }

    public override int CalculateTier(Clan clan)
    {
      int tier = this.MinClanTier;
      for (int index = this.MinClanTier + 1; index <= this.MaxClanTier; ++index)
      {
        if ((double) clan.Renown >= (double) DefaultClanTierModel.TierLowerRenownLimits[index])
          tier = index;
      }
      return tier;
    }

    public override (ExplainedNumber, bool) HasUpcomingTier(
      Clan clan,
      out TextObject extraExplanation,
      bool includeDescriptions = false)
    {
      bool flag = clan.Tier < this.MaxClanTier;
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: includeDescriptions);
      extraExplanation = TextObject.Empty;
      if (flag)
      {
        int num1 = this.GetPartyLimitForTier(clan, clan.Tier + 1) - this.GetPartyLimitForTier(clan, clan.Tier);
        if (num1 != 0)
          explainedNumber.Add((float) num1, this._partyLimitBonusText);
        int num2 = this.GetCompanionLimitFromTier(clan.Tier + 1) - this.GetCompanionLimitFromTier(clan.Tier);
        if (num2 != 0)
          explainedNumber.Add((float) num2, this._companionLimitBonusText);
        int num3 = Campaign.Current.Models.PartySizeLimitModel.GetTierPartySizeEffect(clan.Tier + 1) - Campaign.Current.Models.PartySizeLimitModel.GetTierPartySizeEffect(clan.Tier);
        if (num3 > 0)
          explainedNumber.Add((float) num3, this._additionalCurrentPartySizeBonus);
        int num4 = Campaign.Current.Models.WorkshopModel.GetMaxWorkshopCountForClanTier(clan.Tier + 1) - Campaign.Current.Models.WorkshopModel.GetMaxWorkshopCountForClanTier(clan.Tier);
        if (num4 > 0)
          explainedNumber.Add((float) num4, this._additionalWorkshopCountBonus);
        if (clan.Tier + 1 == this.MercenaryEligibleTier)
          extraExplanation = this._mercenaryEligibleText;
        else if (clan.Tier + 1 == this.VassalEligibleTier)
          extraExplanation = this._vassalEligibleText;
        else if (clan.Tier + 1 == this.KingdomEligibleTier)
          extraExplanation = this._kingdomEligibleText;
      }
      return (explainedNumber, flag);
    }

    public override int GetRequiredRenownForTier(int tier)
    {
      return DefaultClanTierModel.TierLowerRenownLimits[tier];
    }

    public override int GetPartyLimitForTier(Clan clan, int clanTierToCheck)
    {
      ExplainedNumber result = new ExplainedNumber();
      if (!clan.IsMinorFaction)
      {
        if (clanTierToCheck < 3)
          result.Add(1f);
        else if (clanTierToCheck < 5)
          result.Add(2f);
        else
          result.Add(3f);
      }
      else
        result.Add(MathF.Clamp((float) clanTierToCheck, 1f, 4f));
      this.AddPartyLimitPerkEffects(clan, ref result);
      return MathF.Round(result.ResultNumber);
    }

    private void AddPartyLimitPerkEffects(Clan clan, ref ExplainedNumber result)
    {
      if (clan.Leader == null || !clan.Leader.GetPerkValue(DefaultPerks.Leadership.TalentMagnet))
        return;
      result.Add(DefaultPerks.Leadership.TalentMagnet.SecondaryBonus, DefaultPerks.Leadership.TalentMagnet.Name);
    }

    public override int GetCompanionLimit(Clan clan)
    {
      int companionLimitFromTier = this.GetCompanionLimitFromTier(clan.Tier);
      if (clan.Leader.GetPerkValue(DefaultPerks.Leadership.WePledgeOurSwords))
        companionLimitFromTier += (int) DefaultPerks.Leadership.WePledgeOurSwords.PrimaryBonus;
      if (clan.Leader.GetPerkValue(DefaultPerks.Charm.Camaraderie))
        companionLimitFromTier += (int) DefaultPerks.Charm.Camaraderie.SecondaryBonus;
      return companionLimitFromTier;
    }

    private int GetCompanionLimitFromTier(int clanTier) => clanTier + 3;
  }
}
