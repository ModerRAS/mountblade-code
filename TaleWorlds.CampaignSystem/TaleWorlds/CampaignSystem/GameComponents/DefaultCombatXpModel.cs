// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultCombatXpModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultCombatXpModel : CombatXpModel
  {
    public override SkillObject GetSkillForWeapon(WeaponComponentData weapon, bool isSiegeEngineHit)
    {
      SkillObject skillForWeapon = DefaultSkills.Athletics;
      if (isSiegeEngineHit)
        skillForWeapon = DefaultSkills.Engineering;
      else if (weapon != null)
        skillForWeapon = weapon.RelevantSkill;
      return skillForWeapon;
    }

    public override void GetXpFromHit(
      CharacterObject attackerTroop,
      CharacterObject captain,
      CharacterObject attackedTroop,
      PartyBase party,
      int damage,
      bool isFatal,
      CombatXpModel.MissionTypeEnum missionType,
      out int xpAmount)
    {
      int b = attackedTroop.MaxHitPoints();
      MilitaryPowerModel militaryPowerModel = Campaign.Current.Models.MilitaryPowerModel;
      float defaultTroopPower1 = militaryPowerModel.GetDefaultTroopPower(attackedTroop);
      float defaultTroopPower2 = militaryPowerModel.GetDefaultTroopPower(attackerTroop);
      float leaderModifier = 0.0f;
      float contextModifier = 0.0f;
      if (party?.MapEvent != null)
      {
        contextModifier = militaryPowerModel.GetContextModifier(attackedTroop, party.Side, party.MapEvent.SimulationContext);
        leaderModifier = party.MapEventSide.LeaderSimulationModifier;
      }
      float troopPower = militaryPowerModel.GetTroopPower(defaultTroopPower1, leaderModifier, contextModifier);
      double num1 = 0.40000000596046448 * ((double) militaryPowerModel.GetTroopPower(defaultTroopPower2, leaderModifier, contextModifier) + 0.5) * ((double) troopPower + 0.5) * (double) (MathF.Min(damage, b) + (isFatal ? b : 0));
      double num2;
      switch (missionType)
      {
        case CombatXpModel.MissionTypeEnum.Battle:
          num2 = 1.0;
          break;
        case CombatXpModel.MissionTypeEnum.PracticeFight:
          num2 = 1.0 / 16.0;
          break;
        case CombatXpModel.MissionTypeEnum.Tournament:
          num2 = 0.33000001311302185;
          break;
        case CombatXpModel.MissionTypeEnum.SimulationBattle:
          num2 = 0.89999997615814209;
          break;
        case CombatXpModel.MissionTypeEnum.NoXp:
          num2 = 0.0;
          break;
        default:
          num2 = 1.0;
          break;
      }
      ExplainedNumber xpToGain = new ExplainedNumber((float) (num1 * num2));
      if (party != null)
        this.GetBattleXpBonusFromPerks(party, ref xpToGain, attackerTroop);
      if (captain != null && captain.IsHero && captain.GetPerkValue(DefaultPerks.Leadership.InspiringLeader))
        xpToGain.AddFactor(DefaultPerks.Leadership.InspiringLeader.SecondaryBonus, DefaultPerks.Leadership.InspiringLeader.Name);
      xpAmount = MathF.Round(xpToGain.ResultNumber);
    }

    public override float GetXpMultiplierFromShotDifficulty(float shotDifficulty)
    {
      if ((double) shotDifficulty > 14.399999618530273)
        shotDifficulty = 14.4f;
      return MBMath.Lerp(0.0f, 2f, (float) (((double) shotDifficulty - 1.0) / 13.399999618530273));
    }

    public override float CaptainRadius => 10f;

    private void GetBattleXpBonusFromPerks(
      PartyBase party,
      ref ExplainedNumber xpToGain,
      CharacterObject troop)
    {
      if (party.IsMobile && party.MobileParty.LeaderHero != null)
      {
        if (!troop.IsRanged && party.MobileParty.HasPerk(DefaultPerks.OneHanded.Trainer, true))
          xpToGain.AddFactor(DefaultPerks.OneHanded.Trainer.SecondaryBonus, DefaultPerks.OneHanded.Trainer.Name);
        if (troop.HasThrowingWeapon() && party.MobileParty.HasPerk(DefaultPerks.Throwing.Resourceful, true))
          xpToGain.AddFactor(DefaultPerks.Throwing.Resourceful.SecondaryBonus, DefaultPerks.Throwing.Resourceful.Name);
        if (troop.IsInfantry)
        {
          if (party.MobileParty.HasPerk(DefaultPerks.OneHanded.CorpsACorps))
            xpToGain.AddFactor(DefaultPerks.OneHanded.CorpsACorps.PrimaryBonus, DefaultPerks.OneHanded.CorpsACorps.Name);
          if (party.MobileParty.HasPerk(DefaultPerks.TwoHanded.BaptisedInBlood, true))
            xpToGain.AddFactor(DefaultPerks.TwoHanded.BaptisedInBlood.SecondaryBonus, DefaultPerks.TwoHanded.BaptisedInBlood.Name);
        }
        if (party.MobileParty.HasPerk(DefaultPerks.OneHanded.LeadByExample))
          xpToGain.AddFactor(DefaultPerks.OneHanded.LeadByExample.PrimaryBonus, DefaultPerks.OneHanded.LeadByExample.Name);
        if (troop.IsRanged)
        {
          if (party.MobileParty.HasPerk(DefaultPerks.Crossbow.MountedCrossbowman, true))
            xpToGain.AddFactor(DefaultPerks.Crossbow.MountedCrossbowman.SecondaryBonus, DefaultPerks.Crossbow.MountedCrossbowman.Name);
          if (party.MobileParty.HasPerk(DefaultPerks.Bow.BullsEye))
            xpToGain.AddFactor(DefaultPerks.Bow.BullsEye.PrimaryBonus, DefaultPerks.Bow.BullsEye.Name);
        }
        if (troop.Culture.IsBandit && party.MobileParty.HasPerk(DefaultPerks.Roguery.NoRestForTheWicked))
          xpToGain.AddFactor(DefaultPerks.Roguery.NoRestForTheWicked.PrimaryBonus, DefaultPerks.Roguery.NoRestForTheWicked.Name);
      }
      if (!party.IsMobile || !party.MobileParty.IsGarrison || party.MobileParty.CurrentSettlement?.Town.Governor == null)
        return;
      PerkHelper.AddPerkBonusForTown(DefaultPerks.TwoHanded.ProjectileDeflection, party.MobileParty.CurrentSettlement.Town, ref xpToGain);
      if (!troop.IsMounted)
        return;
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Polearm.Guards, party.MobileParty.CurrentSettlement.Town, ref xpToGain);
    }
  }
}
