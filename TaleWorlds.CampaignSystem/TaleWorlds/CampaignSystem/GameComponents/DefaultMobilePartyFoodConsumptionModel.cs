// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMobilePartyFoodConsumptionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMobilePartyFoodConsumptionModel : MobilePartyFoodConsumptionModel
  {
    private static readonly TextObject _partyConsumption = new TextObject("{=UrFzdy4z}Daily Consumption");

    public override int NumberOfMenOnMapToEatOneFood => 20;

    public override ExplainedNumber CalculateDailyBaseFoodConsumptionf(
      MobileParty party,
      bool includeDescription = false)
    {
      int num = party.Party.NumberOfAllMembers + party.Party.NumberOfPrisoners / 2;
      return new ExplainedNumber((float) -(num < 1 ? 1.0 : (double) num) / (float) this.NumberOfMenOnMapToEatOneFood, includeDescription);
    }

    public override ExplainedNumber CalculateDailyFoodConsumptionf(
      MobileParty party,
      ExplainedNumber baseConsumption)
    {
      this.CalculatePerkEffects(party, ref baseConsumption);
      baseConsumption.LimitMax(0.0f);
      return baseConsumption;
    }

    private void CalculatePerkEffects(MobileParty party, ref ExplainedNumber result)
    {
      int num1 = 0;
      for (int index = 0; index < party.MemberRoster.Count; ++index)
      {
        if (party.MemberRoster.GetCharacterAtIndex(index).Culture.IsBandit)
          num1 += party.MemberRoster.GetElementNumber(index);
      }
      for (int index = 0; index < party.PrisonRoster.Count; ++index)
      {
        if (party.PrisonRoster.GetCharacterAtIndex(index).Culture.IsBandit)
          num1 += party.PrisonRoster.GetElementNumber(index);
      }
      if (party.LeaderHero != null && party.LeaderHero.GetPerkValue(DefaultPerks.Roguery.Promises) && num1 > 0)
      {
        float num2 = (float) num1 / (float) party.MemberRoster.TotalManCount * DefaultPerks.Roguery.Promises.PrimaryBonus;
        result.AddFactor(num2, DefaultPerks.Roguery.Promises.Name);
      }
      PerkHelper.AddPerkBonusForParty(DefaultPerks.Athletics.Spartan, party, false, ref result);
      PerkHelper.AddPerkBonusForParty(DefaultPerks.Steward.WarriorsDiet, party, true, ref result);
      if (party.EffectiveQuartermaster != null)
        PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Steward.PriceOfLoyalty, party.EffectiveQuartermaster.CharacterObject, DefaultSkills.Steward, true, ref result, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
      switch (Campaign.Current.MapSceneWrapper.GetFaceTerrainType(party.CurrentNavigationFace))
      {
        case TerrainType.Steppe:
        case TerrainType.Forest:
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.Foragers, party, true, ref result);
          break;
      }
      if (party.IsGarrison && party.CurrentSettlement != null && party.CurrentSettlement.Town.IsUnderSiege)
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Athletics.StrongLegs, party.CurrentSettlement.Town, ref result);
      if (party.Army != null)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Steward.StiffUpperLip, party, true, ref result);
      if (party.SiegeEvent?.BesiegerCamp == null)
        return;
      if (party.HasPerk(DefaultPerks.Steward.SoundReserves, true))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Steward.SoundReserves, party, false, ref result);
      if (!party.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(party.Party, MapEvent.BattleTypes.Siege) || !party.HasPerk(DefaultPerks.Steward.MasterOfPlanning))
        return;
      result.AddFactor(DefaultPerks.Steward.MasterOfPlanning.PrimaryBonus, DefaultPerks.Steward.MasterOfPlanning.Name);
    }

    public override bool DoesPartyConsumeFood(MobileParty mobileParty)
    {
      return mobileParty.IsActive && (mobileParty.LeaderHero == null || mobileParty.LeaderHero.IsLord || mobileParty.LeaderHero.Clan == Clan.PlayerClan || mobileParty.LeaderHero.IsMinorFactionHero) && !mobileParty.IsGarrison && !mobileParty.IsCaravan && !mobileParty.IsBandit && !mobileParty.IsMilitia && !mobileParty.IsVillager;
    }
  }
}
