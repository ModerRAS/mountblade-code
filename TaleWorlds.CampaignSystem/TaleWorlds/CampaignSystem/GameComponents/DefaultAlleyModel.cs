// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultAlleyModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultAlleyModel : AlleyModel
  {
    private const int BaseResponseTimeInDays = 5;
    private const int MaxResponseTimeInDays = 10;
    public const int MinimumRoguerySkillNeededForLeadingAnAlley = 30;
    public const int MaximumMercyTraitNeededForLeadingAnAlley = 0;

    private CharacterObject _thug
    {
      get => MBObjectManager.Instance.GetObject<CharacterObject>("gangster_1");
    }

    private CharacterObject _expertThug
    {
      get => MBObjectManager.Instance.GetObject<CharacterObject>("gangster_2");
    }

    private CharacterObject _masterThug
    {
      get => MBObjectManager.Instance.GetObject<CharacterObject>("gangster_3");
    }

    public override CampaignTime DestroyAlleyAfterDaysWhenLeaderIsDeath => CampaignTime.Days(4f);

    public override int MinimumTroopCountInPlayerOwnedAlley => 5;

    public override int MaximumTroopCountInPlayerOwnedAlley => 10;

    public override float GetDailyCrimeRatingOfAlley => 0.5f;

    public override float GetDailyXpGainForAssignedClanMember(Hero assignedHero) => 200f;

    public override float GetDailyXpGainForMainHero() => 40f;

    public override float GetInitialXpGainForMainHero() => 1500f;

    public override float GetXpGainAfterSuccessfulAlleyDefenseForMainHero() => 6000f;

    public override TroopRoster GetTroopsOfAIOwnedAlley(Alley alley)
    {
      return this.GetTroopsOfAlleyInternal(alley);
    }

    public override TroopRoster GetTroopsOfAlleyForBattleMission(Alley alley)
    {
      TroopRoster troopsOfAlleyInternal = this.GetTroopsOfAlleyInternal(alley);
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) troopsOfAlleyInternal.GetTroopRoster())
        dummyTroopRoster.AddToCounts(troopRosterElement.Character, troopRosterElement.Number * 2);
      return dummyTroopRoster;
    }

    private TroopRoster GetTroopsOfAlleyInternal(Alley alley)
    {
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      Hero owner = alley.Owner;
      if ((double) owner.Power <= 100.0)
      {
        if ((double) owner.RandomValue > 0.5)
        {
          dummyTroopRoster.AddToCounts(this._thug, 3);
        }
        else
        {
          dummyTroopRoster.AddToCounts(this._thug, 2);
          dummyTroopRoster.AddToCounts(this._masterThug, 1);
        }
      }
      else if ((double) owner.Power <= 200.0)
      {
        if ((double) owner.RandomValue > 0.5)
        {
          dummyTroopRoster.AddToCounts(this._thug, 2);
          dummyTroopRoster.AddToCounts(this._expertThug, 1);
          dummyTroopRoster.AddToCounts(this._masterThug, 2);
        }
        else
        {
          dummyTroopRoster.AddToCounts(this._thug, 1);
          dummyTroopRoster.AddToCounts(this._expertThug, 2);
          dummyTroopRoster.AddToCounts(this._masterThug, 2);
        }
      }
      else if ((double) owner.Power <= 300.0)
      {
        if ((double) owner.RandomValue > 0.5)
        {
          dummyTroopRoster.AddToCounts(this._thug, 3);
          dummyTroopRoster.AddToCounts(this._expertThug, 2);
          dummyTroopRoster.AddToCounts(this._masterThug, 2);
        }
        else
        {
          dummyTroopRoster.AddToCounts(this._thug, 1);
          dummyTroopRoster.AddToCounts(this._expertThug, 3);
          dummyTroopRoster.AddToCounts(this._masterThug, 3);
        }
      }
      else if ((double) owner.RandomValue > 0.5)
      {
        dummyTroopRoster.AddToCounts(this._thug, 3);
        dummyTroopRoster.AddToCounts(this._expertThug, 3);
        dummyTroopRoster.AddToCounts(this._masterThug, 3);
      }
      else
      {
        dummyTroopRoster.AddToCounts(this._thug, 1);
        dummyTroopRoster.AddToCounts(this._expertThug, 4);
        dummyTroopRoster.AddToCounts(this._masterThug, 4);
      }
      return dummyTroopRoster;
    }

    public override List<(Hero, DefaultAlleyModel.AlleyMemberAvailabilityDetail)> GetClanMembersAndAvailabilityDetailsForLeadingAnAlley(
      Alley alley)
    {
      List<(Hero, DefaultAlleyModel.AlleyMemberAvailabilityDetail)> forLeadingAnAlley = new List<(Hero, DefaultAlleyModel.AlleyMemberAvailabilityDetail)>();
      foreach (Hero lord in (List<Hero>) Clan.PlayerClan.Lords)
      {
        if (lord != Hero.MainHero && !lord.IsDead)
          forLeadingAnAlley.Add((lord, this.GetAvailability(alley, lord)));
      }
      foreach (Hero companion in (List<Hero>) Clan.PlayerClan.Companions)
      {
        if (companion != Hero.MainHero && !companion.IsDead)
          forLeadingAnAlley.Add((companion, this.GetAvailability(alley, companion)));
      }
      return forLeadingAnAlley;
    }

    public override TroopRoster GetTroopsToRecruitFromAlleyDependingOnAlleyRandom(
      Alley alley,
      float random)
    {
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      if ((double) random >= 0.5)
        return dummyTroopRoster;
      Clan settlementFaction = this.GetRelatedBanditClanDependingOnAlleySettlementFaction(alley);
      if ((double) random > 0.30000001192092896)
      {
        dummyTroopRoster.AddToCounts(this._thug, 1);
        dummyTroopRoster.AddToCounts(settlementFaction.BasicTroop, 1);
      }
      else if ((double) random > 0.15000000596046448)
      {
        dummyTroopRoster.AddToCounts(this._thug, 2);
        dummyTroopRoster.AddToCounts(settlementFaction.BasicTroop, 1);
        dummyTroopRoster.AddToCounts(settlementFaction.BasicTroop.UpgradeTargets[0], 1);
      }
      else if ((double) random > 0.05000000074505806)
      {
        dummyTroopRoster.AddToCounts(this._thug, 3);
        dummyTroopRoster.AddToCounts(settlementFaction.BasicTroop, 2);
        dummyTroopRoster.AddToCounts(settlementFaction.BasicTroop.UpgradeTargets[0], 1);
      }
      else
      {
        dummyTroopRoster.AddToCounts(this._thug, 2);
        dummyTroopRoster.AddToCounts(settlementFaction.BasicTroop, 3);
        dummyTroopRoster.AddToCounts(settlementFaction.BasicTroop.UpgradeTargets[0], 3);
      }
      return dummyTroopRoster;
    }

    public override TextObject GetDisabledReasonTextForHero(
      Hero hero,
      Alley alley,
      DefaultAlleyModel.AlleyMemberAvailabilityDetail detail)
    {
      switch (detail)
      {
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.Available:
          return TextObject.Empty;
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.AvailableWithDelay:
          TextObject reasonTextForHero = new TextObject("{=dgUF5awO}It will take {HOURS} {?HOURS > 1}hours{?}hour{\\?} for this clan member to arrive.");
          reasonTextForHero.SetTextVariable("HOURS", (int) Math.Ceiling((double) Campaign.Current.Models.DelayedTeleportationModel.GetTeleportationDelayAsHours(hero, alley.Settlement.Party).ResultNumber));
          return reasonTextForHero;
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.NotEnoughRoguerySkill:
          TextObject text1 = GameTexts.FindText("str_character_role_disabled_tooltip");
          text1.SetTextVariable("SKILL_NAME", DefaultSkills.Roguery.Name.ToString());
          text1.SetTextVariable("MIN_SKILL_AMOUNT", 30);
          return text1;
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.NotEnoughMercyTrait:
          TextObject text2 = GameTexts.FindText("str_hero_needs_trait_tooltip");
          text2.SetTextVariable("TRAIT_NAME", DefaultTraits.Mercy.Name.ToString());
          text2.SetTextVariable("MAX_TRAIT_AMOUNT", 0);
          return text2;
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.CanNotLeadParty:
          return new TextObject("{=qClVr2ka}This hero cannot lead a party.");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.AlreadyAlleyLeader:
          return GameTexts.FindText("str_hero_is_already_alley_leader");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.Prisoner:
          return new TextObject("{=qhRC8XWU}This hero is currently prisoner.");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.SolvingIssue:
          return new TextObject("{=nT6EQGf9}This hero is currently solving an issue.");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.Traveling:
          return new TextObject("{=WECWpVSw}This hero is currently traveling.");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.Busy:
          return new TextObject("{=c9iu5lcc}This hero is currently busy.");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.Fugutive:
          return new TextObject("{=eZYtkDff}This hero is currently fugutive.");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.Governor:
          return new TextObject("{=8NI4wrqU}This hero is currently assigned as a governor.");
        case DefaultAlleyModel.AlleyMemberAvailabilityDetail.AlleyUnderAttack:
          return new TextObject("{=pdqi2qz1}You can not do this action while your alley is under attack.");
        default:
          return TextObject.Empty;
      }
    }

    public override float GetAlleyAttackResponseTimeInDays(TroopRoster troopRoster)
    {
      float num = 0.0f;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) troopRoster.GetTroopRoster())
        num += ((double) troopRosterElement.Character.Tier > 4.0 ? 4f : (float) troopRosterElement.Character.Tier) * (float) troopRosterElement.Number;
      return (float) Math.Min(10, 5 + (int) ((double) num / 8.0));
    }

    private Clan GetRelatedBanditClanDependingOnAlleySettlementFaction(Alley alley)
    {
      string stringId = alley.Settlement.Culture.StringId;
      Clan settlementFaction = (Clan) null;
      switch (stringId)
      {
        case "khuzait":
          settlementFaction = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "steppe_bandits"));
          break;
        case "vlandia":
          settlementFaction = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "mountain_bandits"));
          break;
        default:
          if (!stringId.Contains("empire"))
          {
            switch (stringId)
            {
              case "aserai":
                settlementFaction = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "desert_bandits"));
                break;
              case "battania":
                settlementFaction = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "forest_bandits"));
                break;
              case "sturgia":
                settlementFaction = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "sea_raiders"));
                break;
            }
          }
          else
            goto case "vlandia";
          break;
      }
      return settlementFaction;
    }

    private DefaultAlleyModel.AlleyMemberAvailabilityDetail GetAvailability(Alley alley, Hero hero)
    {
      IAlleyCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<IAlleyCampaignBehavior>();
      if (campaignBehavior != null && campaignBehavior.GetIsAlleyUnderAttack(alley))
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.AlleyUnderAttack;
      if (hero.GetSkillValue(DefaultSkills.Roguery) < 30)
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.NotEnoughRoguerySkill;
      if (hero.GetTraitLevel(DefaultTraits.Mercy) > 0)
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.NotEnoughMercyTrait;
      if (campaignBehavior != null && campaignBehavior.GetAllAssignedClanMembersForOwnedAlleys().Contains(hero))
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.AlreadyAlleyLeader;
      if (hero.GovernorOf != null)
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.Governor;
      if (!hero.CanLeadParty())
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.CanNotLeadParty;
      if (Campaign.Current.IssueManager.IssueSolvingCompanionList.Contains<Hero>(hero))
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.SolvingIssue;
      if (hero.IsFugitive)
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.Fugutive;
      if (hero.IsTraveling)
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.Traveling;
      if (hero.IsPrisoner)
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.Prisoner;
      if (!hero.IsActive || hero.IsPartyLeader)
        return DefaultAlleyModel.AlleyMemberAvailabilityDetail.Busy;
      return (double) Campaign.Current.Models.DelayedTeleportationModel.GetTeleportationDelayAsHours(hero, alley.Settlement.Party).BaseNumber > 0.0 ? DefaultAlleyModel.AlleyMemberAvailabilityDetail.AvailableWithDelay : DefaultAlleyModel.AlleyMemberAvailabilityDetail.Available;
    }

    public override int GetDailyIncomeOfAlley(Alley alley)
    {
      return (int) ((double) alley.Settlement.Town.Prosperity / 50.0);
    }

    public enum AlleyMemberAvailabilityDetail
    {
      Available,
      AvailableWithDelay,
      NotEnoughRoguerySkill,
      NotEnoughMercyTrait,
      CanNotLeadParty,
      AlreadyAlleyLeader,
      Prisoner,
      SolvingIssue,
      Traveling,
      Busy,
      Fugutive,
      Governor,
      AlleyUnderAttack,
    }
  }
}
