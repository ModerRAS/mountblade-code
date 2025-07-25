// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyMoraleModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyMoraleModel : PartyMoraleModel
  {
    private const float BaseMoraleValue = 50f;
    private readonly TextObject _recentEventsText = GameTexts.FindText("str_recent_events");
    private readonly TextObject _starvationMoraleText = GameTexts.FindText("str_starvation_morale");
    private readonly TextObject _noWageMoraleText = GameTexts.FindText("str_no_wage_morale");
    private readonly TextObject _foodBonusMoraleText = GameTexts.FindText("str_food_bonus_morale");
    private readonly TextObject _partySizeMoraleText = GameTexts.FindText("str_party_size_morale");

    public override float HighMoraleValue => 70f;

    public override int GetDailyStarvationMoralePenalty(PartyBase party) => -5;

    public override int GetDailyNoWageMoralePenalty(MobileParty party) => -3;

    private int GetStarvationMoralePenalty(MobileParty party) => -30;

    private int GetNoWageMoralePenalty(MobileParty party) => -20;

    public override float GetStandardBaseMorale(PartyBase party) => 50f;

    public override float GetVictoryMoraleChange(PartyBase party) => 20f;

    public override float GetDefeatMoraleChange(PartyBase party) => -20f;

    private void CalculateFoodVarietyMoraleBonus(MobileParty party, ref ExplainedNumber result)
    {
      if (party.Party.IsStarving)
        return;
      float num;
      switch (party.ItemRoster.FoodVariety)
      {
        case 0:
        case 1:
          num = -2f;
          break;
        case 2:
          num = -1f;
          break;
        case 3:
          num = 0.0f;
          break;
        case 4:
          num = 1f;
          break;
        case 5:
          num = 2f;
          break;
        case 6:
          num = 3f;
          break;
        case 7:
          num = 5f;
          break;
        case 8:
          num = 6f;
          break;
        case 9:
          num = 7f;
          break;
        case 10:
          num = 8f;
          break;
        case 11:
          num = 9f;
          break;
        case 12:
          num = 10f;
          break;
        default:
          num = 10f;
          break;
      }
      if ((double) num < 0.0 && party.LeaderHero != null && party.LeaderHero.GetPerkValue(DefaultPerks.Steward.WarriorsDiet))
        num = 0.0f;
      if ((double) num == 0.0)
        return;
      result.Add(num, this._foodBonusMoraleText);
      if ((double) num <= 0.0 || !party.HasPerk(DefaultPerks.Steward.Gourmet))
        return;
      result.Add(num, DefaultPerks.Steward.Gourmet.Name);
    }

    private void GetPartySizeMoraleEffect(MobileParty mobileParty, ref ExplainedNumber result)
    {
      if (mobileParty.IsMilitia || mobileParty.IsVillager)
        return;
      int x = mobileParty.Party.NumberOfAllMembers - mobileParty.Party.PartySizeLimit;
      if (x <= 0)
        return;
      result.Add(-1f * MathF.Sqrt((float) x), this._partySizeMoraleText);
    }

    private static void CheckPerkEffectOnPartyMorale(
      MobileParty party,
      PerkObject perk,
      bool isInfoNeeded,
      TextObject newInfo,
      int perkEffect,
      out TextObject outNewInfo,
      out int outPerkEffect)
    {
      outNewInfo = newInfo;
      outPerkEffect = perkEffect;
      if (party.LeaderHero == null || !party.LeaderHero.GetPerkValue(perk))
        return;
      if (isInfoNeeded)
      {
        MBTextManager.SetTextVariable("EFFECT_NAME", perk.Name, false);
        MBTextManager.SetTextVariable("NUM", 10);
        MBTextManager.SetTextVariable("STR1", newInfo, false);
        MBTextManager.SetTextVariable("STR2", GameTexts.FindText("str_party_effect"), false);
        outNewInfo = GameTexts.FindText("str_new_item_line");
      }
      outPerkEffect += 10;
    }

    private void GetMoraleEffectsFromPerks(MobileParty party, ref ExplainedNumber bonus)
    {
      if (party.HasPerk(DefaultPerks.Crossbow.PeasantLeader))
      {
        float troopTierRatio = this.CalculateTroopTierRatio(party);
        bonus.AddFactor(DefaultPerks.Crossbow.PeasantLeader.PrimaryBonus * troopTierRatio, DefaultPerks.Crossbow.PeasantLeader.Name);
      }
      if (party.CurrentSettlement?.SiegeEvent != null && party.HasPerk(DefaultPerks.Charm.SelfPromoter, true))
        bonus.Add(DefaultPerks.Charm.SelfPromoter.SecondaryBonus, DefaultPerks.Charm.SelfPromoter.Name);
      if (!party.HasPerk(DefaultPerks.Steward.Logistician))
        return;
      int num = 0;
      for (int index = 0; index < party.MemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = party.MemberRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Character.IsMounted)
          num += elementCopyAtIndex.Number;
      }
      if (party.Party.NumberOfMounts <= party.MemberRoster.TotalManCount - num)
        return;
      bonus.Add(DefaultPerks.Steward.Logistician.PrimaryBonus, DefaultPerks.Steward.Logistician.Name);
    }

    private float CalculateTroopTierRatio(MobileParty party)
    {
      int totalManCount = party.MemberRoster.TotalManCount;
      float num = 0.0f;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.Tier <= 3)
          num += (float) troopRosterElement.Number;
      }
      return num / (float) totalManCount;
    }

    private void GetMoraleEffectsFromSkill(MobileParty party, ref ExplainedNumber bonus)
    {
      CharacterObject partyLeaderForSkill = SkillHelper.GetEffectivePartyLeaderForSkill(party.Party);
      if (partyLeaderForSkill == null || partyLeaderForSkill.GetSkillValue(DefaultSkills.Leadership) <= 0)
        return;
      SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Leadership, DefaultSkillEffects.LeadershipMoraleBonus, partyLeaderForSkill, ref bonus);
    }

    public override ExplainedNumber GetEffectivePartyMorale(
      MobileParty mobileParty,
      bool includeDescription = false)
    {
      ExplainedNumber effectivePartyMorale = new ExplainedNumber(50f, includeDescription);
      effectivePartyMorale.Add(mobileParty.RecentEventsMorale, this._recentEventsText);
      this.GetMoraleEffectsFromSkill(mobileParty, ref effectivePartyMorale);
      if (mobileParty.IsMilitia || mobileParty.IsGarrison)
      {
        if (mobileParty.IsMilitia)
        {
          if (mobileParty.HomeSettlement.IsStarving)
            effectivePartyMorale.Add((float) this.GetStarvationMoralePenalty(mobileParty), this._starvationMoraleText);
        }
        else if (SettlementHelper.IsGarrisonStarving(mobileParty.CurrentSettlement))
          effectivePartyMorale.Add((float) this.GetStarvationMoralePenalty(mobileParty), this._starvationMoraleText);
      }
      else if (mobileParty.Party.IsStarving)
        effectivePartyMorale.Add((float) this.GetStarvationMoralePenalty(mobileParty), this._starvationMoraleText);
      if ((double) mobileParty.HasUnpaidWages > 0.0)
        effectivePartyMorale.Add(mobileParty.HasUnpaidWages * (float) this.GetNoWageMoralePenalty(mobileParty), this._noWageMoraleText);
      this.GetMoraleEffectsFromPerks(mobileParty, ref effectivePartyMorale);
      this.CalculateFoodVarietyMoraleBonus(mobileParty, ref effectivePartyMorale);
      this.GetPartySizeMoraleEffect(mobileParty, ref effectivePartyMorale);
      return effectivePartyMorale;
    }
  }
}
