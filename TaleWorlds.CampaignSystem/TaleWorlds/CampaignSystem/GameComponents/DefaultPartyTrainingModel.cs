// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyTrainingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyTrainingModel : PartyTrainingModel
  {
    public override int GetXpReward(CharacterObject character)
    {
      int num = character.Level + 6;
      return num * num / 3;
    }

    public override ExplainedNumber GetEffectiveDailyExperience(
      MobileParty mobileParty,
      TroopRosterElement troop)
    {
      ExplainedNumber stat = new ExplainedNumber();
      if (mobileParty.IsLordParty && !troop.Character.IsHero && (mobileParty.Army == null || mobileParty.Army.LeaderParty != MobileParty.MainParty) && mobileParty.MapEvent == null && (mobileParty.Party.Owner == null || mobileParty.Party.Owner.Clan != Clan.PlayerClan))
      {
        if (mobileParty.LeaderHero != null && mobileParty.LeaderHero == mobileParty.ActualClan.Leader)
          stat.Add((float) (15.0 + (double) troop.Character.Tier * 3.0));
        else
          stat.Add((float) (10.0 + (double) troop.Character.Tier * 2.0));
      }
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Leadership.CombatTips))
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Leadership.CombatTips));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Leadership.RaiseTheMeek) && troop.Character.Tier < 3)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Leadership.RaiseTheMeek));
      if (mobileParty.IsGarrison && mobileParty.CurrentSettlement?.Town.Governor != null && mobileParty.CurrentSettlement.Town.Governor.GetPerkValue(DefaultPerks.Bow.BullsEye))
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Bow.BullsEye));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Polearm.Drills, true))
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Polearm.Drills));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.OneHanded.MilitaryTradition) && troop.Character.IsInfantry)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.OneHanded.MilitaryTradition));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Athletics.WalkItOff, true) && !troop.Character.IsMounted && mobileParty.IsMoving)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Athletics.WalkItOff));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Throwing.Saddlebags, true) && troop.Character.IsInfantry)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Throwing.Saddlebags));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Athletics.AGoodDaysRest, true) && !troop.Character.IsMounted && !mobileParty.IsMoving && mobileParty.CurrentSettlement != null)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Athletics.AGoodDaysRest));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Bow.Trainer, true) && troop.Character.IsRanged)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Bow.Trainer));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Crossbow.RenownMarksmen) && troop.Character.IsRanged)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Crossbow.RenownMarksmen));
      if (mobileParty.IsActive && mobileParty.IsMoving)
      {
        if ((double) mobileParty.Morale > 75.0)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.ForcedMarch, mobileParty, false, ref stat);
        if ((double) mobileParty.ItemRoster.TotalWeight > (double) mobileParty.InventoryCapacity)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.Unburdened, mobileParty, false, ref stat);
      }
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Steward.SevenVeterans) && troop.Character.Tier >= 4)
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Steward.SevenVeterans));
      if (mobileParty.IsActive && mobileParty.HasPerk(DefaultPerks.Steward.DrillSergant))
        stat.Add((float) this.GetPerkExperiencesForTroops(DefaultPerks.Steward.DrillSergant));
      if (troop.Character.Culture.IsBandit)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Roguery.NoRestForTheWicked, mobileParty, true, ref stat);
      return stat;
    }

    private int GetPerkExperiencesForTroops(PerkObject perk)
    {
      if (perk == DefaultPerks.Leadership.CombatTips || perk == DefaultPerks.Leadership.RaiseTheMeek || perk == DefaultPerks.OneHanded.MilitaryTradition || perk == DefaultPerks.Crossbow.RenownMarksmen || perk == DefaultPerks.Steward.SevenVeterans || perk == DefaultPerks.Steward.DrillSergant)
        return MathF.Round(perk.PrimaryBonus);
      return perk == DefaultPerks.Polearm.Drills || perk == DefaultPerks.Athletics.WalkItOff || perk == DefaultPerks.Athletics.AGoodDaysRest || perk == DefaultPerks.Bow.Trainer || perk == DefaultPerks.Bow.BullsEye || perk == DefaultPerks.Throwing.Saddlebags ? MathF.Round(perk.SecondaryBonus) : 0;
    }

    public override int GenerateSharedXp(CharacterObject troop, int xp, MobileParty mobileParty)
    {
      float sharedXp = (float) xp * DefaultPerks.Leadership.LeaderOfMasses.SecondaryBonus;
      if (troop.IsHero && !mobileParty.HasPerk(DefaultPerks.Leadership.LeaderOfMasses, true))
        return 0;
      if (troop.IsRanged && troop.IsRegular && mobileParty.HasPerk(DefaultPerks.Leadership.MakeADifference, true))
        sharedXp += sharedXp * DefaultPerks.Leadership.MakeADifference.SecondaryBonus;
      if (troop.IsMounted && troop.IsRegular && mobileParty.HasPerk(DefaultPerks.Leadership.LeadByExample, true))
        sharedXp += sharedXp * DefaultPerks.Leadership.LeadByExample.SecondaryBonus;
      return (int) sharedXp;
    }

    public override int CalculateXpGainFromBattles(
      FlattenedTroopRosterElement troopRosterElement,
      PartyBase party)
    {
      int xpGained = troopRosterElement.XpGained;
      if ((party.MapEvent.IsPlayerSimulation || !party.MapEvent.IsPlayerMapEvent) && party.MobileParty.HasPerk(DefaultPerks.Leadership.TrustedCommander, true))
        xpGained += MathF.Round((float) xpGained * DefaultPerks.Leadership.TrustedCommander.SecondaryBonus);
      return xpGained;
    }
  }
}
