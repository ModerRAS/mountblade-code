// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPrisonerRecruitmentCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPrisonerRecruitmentCalculationModel : PrisonerRecruitmentCalculationModel
  {
    public override int GetConformityNeededToRecruitPrisoner(CharacterObject character)
    {
      return (character.Level + 6) * (character.Level + 6) - 10;
    }

    public override int GetConformityChangePerHour(PartyBase party, CharacterObject troopToBoost)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(10f);
      if (party.LeaderHero != null)
        explainedNumber.Add((float) party.LeaderHero.GetSkillValue(DefaultSkills.Leadership) * 0.05f);
      if (troopToBoost.Tier <= 3 && party.MobileParty.HasPerk(DefaultPerks.Leadership.FerventAttacker, true))
        explainedNumber.AddFactor(DefaultPerks.Leadership.FerventAttacker.SecondaryBonus);
      if (troopToBoost.Tier >= 4 && party.MobileParty.HasPerk(DefaultPerks.Leadership.StoutDefender, true))
        explainedNumber.AddFactor(DefaultPerks.Leadership.StoutDefender.SecondaryBonus);
      if (troopToBoost.Occupation != Occupation.Bandit && party.MobileParty.HasPerk(DefaultPerks.Leadership.LoyaltyAndHonor, true))
        explainedNumber.AddFactor(DefaultPerks.Leadership.LoyaltyAndHonor.SecondaryBonus);
      if (troopToBoost.IsInfantry && party.MobileParty.HasPerk(DefaultPerks.Leadership.LeadByExample))
        explainedNumber.AddFactor(DefaultPerks.Leadership.LeadByExample.PrimaryBonus);
      if (troopToBoost.IsRanged && party.MobileParty.HasPerk(DefaultPerks.Leadership.TrustedCommander))
        explainedNumber.AddFactor(DefaultPerks.Leadership.TrustedCommander.PrimaryBonus);
      if (troopToBoost.Occupation == Occupation.Bandit && party.MobileParty.HasPerk(DefaultPerks.Roguery.Promises, true))
        explainedNumber.AddFactor(DefaultPerks.Roguery.Promises.SecondaryBonus);
      return MathF.Round(explainedNumber.ResultNumber);
    }

    public override int GetPrisonerRecruitmentMoraleEffect(
      PartyBase party,
      CharacterObject character,
      int num)
    {
      if (character.Culture == party.LeaderHero?.Culture)
      {
        MobileParty mobileParty = party.MobileParty;
        if ((mobileParty != null ? (mobileParty.HasPerk(DefaultPerks.Leadership.Presence, true) ? 1 : 0) : 0) != 0)
          goto label_4;
      }
      if (character.Occupation == Occupation.Bandit)
      {
        MobileParty mobileParty = party.MobileParty;
        if ((mobileParty != null ? (mobileParty.HasPerk(DefaultPerks.Roguery.TwoFaced, true) ? 1 : 0) : 0) != 0)
          goto label_4;
      }
      return (character.Occupation != Occupation.Bandit ? -1 : -2) * num;
label_4:
      return 0;
    }

    public override bool IsPrisonerRecruitable(
      PartyBase party,
      CharacterObject character,
      out int conformityNeeded)
    {
      if (!character.IsRegular || character.Tier > Campaign.Current.Models.CharacterStatsModel.MaxCharacterTier)
      {
        conformityNeeded = 0;
        return false;
      }
      int elementXp = party.MobileParty.PrisonRoster.GetElementXp(character);
      conformityNeeded = this.GetConformityNeededToRecruitPrisoner(character);
      int num = conformityNeeded;
      return elementXp >= num;
    }

    public override bool ShouldPartyRecruitPrisoners(PartyBase party)
    {
      return ((double) party.MobileParty.Morale > 30.0 || party.MobileParty.HasPerk(DefaultPerks.Leadership.Presence, true)) && party.PartySizeLimit > party.MobileParty.MemberRoster.TotalManCount;
    }

    public override int CalculateRecruitableNumber(PartyBase party, CharacterObject character)
    {
      if (character.IsHero || party.PrisonRoster.Count == 0 || party.PrisonRoster.TotalRegulars <= 0)
        return 0;
      int toRecruitPrisoner = Campaign.Current.Models.PrisonerRecruitmentCalculationModel.GetConformityNeededToRecruitPrisoner(character);
      int elementXp = party.PrisonRoster.GetElementXp(character);
      int elementNumber = party.PrisonRoster.GetElementNumber(character);
      int num = toRecruitPrisoner;
      return MathF.Min(elementXp / num, elementNumber);
    }
  }
}
