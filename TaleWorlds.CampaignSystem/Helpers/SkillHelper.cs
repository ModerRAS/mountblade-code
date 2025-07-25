// Decompiled with JetBrains decompiler
// Type: Helpers.SkillHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class SkillHelper
  {
    private static readonly TextObject _textLeader = new TextObject("{=SrfYbg3x}Leader");
    private static readonly TextObject _textPersonal = new TextObject("{=UxAl9iyi}Personal");
    private static readonly TextObject _textScout = new TextObject("{=92M0Pb5T}Scout");
    private static readonly TextObject _textQuartermaster = new TextObject("{=redwEIlW}Quartermaster");
    private static readonly TextObject _textEngineer = new TextObject("{=7h6cXdW7}Engineer");
    private static readonly TextObject _textPartyLeader = new TextObject("{=ggpRTQQl}Party Leader");
    private static readonly TextObject _textSurgeon = new TextObject("{=QBPrRdQJ}Surgeon");
    private static readonly TextObject _textSergeant = new TextObject("{=g9VIbA9s}Sergeant");
    private static readonly TextObject _textGovernor = new TextObject("{=Fa2nKXxI}Governor");
    private static readonly TextObject _textClanLeader = new TextObject("{=pqfz386V}Clan Leader");

    public static void AddSkillBonusForParty(
      SkillObject skill,
      SkillEffect skillEffect,
      MobileParty party,
      ref ExplainedNumber stat)
    {
      Hero leaderHero = party.LeaderHero;
      if (leaderHero == null || skillEffect == null)
        return;
      if (skillEffect.PrimaryRole == SkillEffect.PerkRole.PartyLeader || skillEffect.SecondaryRole == SkillEffect.PerkRole.PartyLeader)
      {
        int skillValue = leaderHero.GetSkillValue(skill);
        float num = (float) ((skillEffect.PrimaryRole == SkillEffect.PerkRole.PartyLeader ? (double) skillEffect.PrimaryBonus : (double) skillEffect.SecondaryBonus) * (leaderHero.Clan != Clan.PlayerClan ? 1.7999999523162842 : 1.0));
        SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, num * (float) skillValue, SkillHelper._textLeader);
      }
      if (skillEffect.PrimaryRole == SkillEffect.PerkRole.Engineer || skillEffect.SecondaryRole == SkillEffect.PerkRole.Engineer)
      {
        Hero effectiveEngineer = party.EffectiveEngineer;
        if (effectiveEngineer != null)
        {
          int skillValue = effectiveEngineer.GetSkillValue(skill);
          float num = skillEffect.PrimaryRole == SkillEffect.PerkRole.Engineer ? skillEffect.PrimaryBonus : skillEffect.SecondaryBonus;
          SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, num * (float) skillValue, SkillHelper._textEngineer);
        }
      }
      if (skillEffect.PrimaryRole == SkillEffect.PerkRole.Scout || skillEffect.SecondaryRole == SkillEffect.PerkRole.Scout)
      {
        Hero effectiveScout = party.EffectiveScout;
        if (effectiveScout != null)
        {
          int skillValue = effectiveScout.GetSkillValue(skill);
          float num = skillEffect.PrimaryRole == SkillEffect.PerkRole.Scout ? skillEffect.PrimaryBonus : skillEffect.SecondaryBonus;
          SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, num * (float) skillValue, SkillHelper._textScout);
        }
      }
      if (skillEffect.PrimaryRole == SkillEffect.PerkRole.Surgeon || skillEffect.SecondaryRole == SkillEffect.PerkRole.Surgeon)
      {
        Hero effectiveSurgeon = party.EffectiveSurgeon;
        if (effectiveSurgeon != null)
        {
          int skillValue = effectiveSurgeon.GetSkillValue(skill);
          float num = skillEffect.PrimaryRole == SkillEffect.PerkRole.Surgeon ? skillEffect.PrimaryBonus : skillEffect.SecondaryBonus;
          SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, num * (float) skillValue, SkillHelper._textSurgeon);
        }
      }
      if (skillEffect.PrimaryRole != SkillEffect.PerkRole.Quartermaster && skillEffect.SecondaryRole != SkillEffect.PerkRole.Quartermaster)
        return;
      Hero effectiveQuartermaster = party.EffectiveQuartermaster;
      if (effectiveQuartermaster == null)
        return;
      int skillValue1 = effectiveQuartermaster.GetSkillValue(skill);
      float num1 = skillEffect.PrimaryRole == SkillEffect.PerkRole.Quartermaster ? skillEffect.PrimaryBonus : skillEffect.SecondaryBonus;
      SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, num1 * (float) skillValue1, SkillHelper._textQuartermaster);
    }

    public static void AddSkillBonusForTown(
      SkillObject skill,
      SkillEffect skillEffect,
      Town town,
      ref ExplainedNumber bonuses)
    {
      if (skillEffect.PrimaryRole == SkillEffect.PerkRole.ClanLeader || skillEffect.SecondaryRole == SkillEffect.PerkRole.ClanLeader)
      {
        Hero leader = town.Owner.Settlement.OwnerClan?.Leader;
        if (leader != null)
        {
          int skillValue = leader.GetSkillValue(skill);
          float num = skillEffect.PrimaryRole == SkillEffect.PerkRole.ClanLeader ? skillEffect.PrimaryBonus : skillEffect.SecondaryBonus;
          SkillHelper.AddToStat(ref bonuses, skillEffect.IncrementType, num * (float) skillValue, SkillHelper._textClanLeader);
        }
      }
      if (skillEffect.PrimaryRole != SkillEffect.PerkRole.Governor && skillEffect.SecondaryRole != SkillEffect.PerkRole.Governor)
        return;
      Hero governor = town.Governor;
      if (governor == null || governor.CurrentSettlement != town.Settlement)
        return;
      int skillValue1 = governor.GetSkillValue(skill);
      float num1 = skillEffect.PrimaryRole == SkillEffect.PerkRole.Governor ? skillEffect.PrimaryBonus : skillEffect.SecondaryBonus;
      SkillHelper.AddToStat(ref bonuses, skillEffect.IncrementType, num1 * (float) skillValue1, SkillHelper._textGovernor);
    }

    public static void AddSkillBonusForCharacter(
      SkillObject skill,
      SkillEffect skillEffect,
      CharacterObject character,
      ref ExplainedNumber stat,
      int baseSkillOverride = -1,
      bool isBonusPositive = true,
      int extraSkillValue = 0)
    {
      int skillLevel = (baseSkillOverride >= 0 ? baseSkillOverride : character.GetSkillValue(skill)) + extraSkillValue;
      int num1 = isBonusPositive ? 1 : -1;
      if (skillEffect.PrimaryRole == SkillEffect.PerkRole.Personal || skillEffect.SecondaryRole == SkillEffect.PerkRole.Personal)
      {
        float num2 = skillEffect.PrimaryRole == SkillEffect.PerkRole.Personal ? skillEffect.GetPrimaryValue(skillLevel) : skillEffect.GetSecondaryValue(skillLevel);
        SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, (float) num1 * num2, SkillHelper._textPersonal);
      }
      Hero heroObject = character.HeroObject;
      if (heroObject == null)
        return;
      if ((skillEffect.PrimaryRole == SkillEffect.PerkRole.Engineer || skillEffect.SecondaryRole == SkillEffect.PerkRole.Engineer) && character.IsHero && heroObject.PartyBelongedTo?.EffectiveEngineer == heroObject)
      {
        float num3 = skillEffect.PrimaryRole == SkillEffect.PerkRole.Engineer ? skillEffect.GetPrimaryValue(skillLevel) : skillEffect.GetSecondaryValue(skillLevel);
        SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, (float) num1 * num3, SkillHelper._textEngineer);
      }
      if ((skillEffect.PrimaryRole == SkillEffect.PerkRole.Quartermaster || skillEffect.SecondaryRole == SkillEffect.PerkRole.Quartermaster) && character.IsHero && heroObject.PartyBelongedTo?.EffectiveQuartermaster == heroObject)
      {
        float num4 = skillEffect.PrimaryRole == SkillEffect.PerkRole.Quartermaster ? skillEffect.GetPrimaryValue(skillLevel) : skillEffect.GetSecondaryValue(skillLevel);
        SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, (float) num1 * num4, SkillHelper._textQuartermaster);
      }
      if ((skillEffect.PrimaryRole == SkillEffect.PerkRole.Scout || skillEffect.SecondaryRole == SkillEffect.PerkRole.Scout) && character.IsHero && heroObject.PartyBelongedTo?.EffectiveScout == heroObject)
      {
        float num5 = skillEffect.PrimaryRole == SkillEffect.PerkRole.Scout ? skillEffect.GetPrimaryValue(skillLevel) : skillEffect.GetSecondaryValue(skillLevel);
        SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, (float) num1 * num5, SkillHelper._textScout);
      }
      if ((skillEffect.PrimaryRole == SkillEffect.PerkRole.Surgeon || skillEffect.SecondaryRole == SkillEffect.PerkRole.Surgeon) && character.IsHero && heroObject.PartyBelongedTo?.EffectiveSurgeon == heroObject)
      {
        float num6 = skillEffect.PrimaryRole == SkillEffect.PerkRole.Surgeon ? skillEffect.GetPrimaryValue(skillLevel) : skillEffect.GetSecondaryValue(skillLevel);
        SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, (float) num1 * num6, SkillHelper._textSurgeon);
      }
      if (skillEffect.PrimaryRole != SkillEffect.PerkRole.PartyLeader && skillEffect.SecondaryRole != SkillEffect.PerkRole.PartyLeader || !character.IsHero || heroObject.PartyBelongedTo?.LeaderHero != heroObject)
        return;
      float num7 = skillEffect.PrimaryRole == SkillEffect.PerkRole.PartyLeader ? skillEffect.GetPrimaryValue(skillLevel) : skillEffect.GetSecondaryValue(skillLevel);
      SkillHelper.AddToStat(ref stat, skillEffect.IncrementType, (float) num1 * num7, SkillHelper._textPartyLeader);
    }

    public static string GetEffectDescriptionForSkillLevel(SkillEffect effect, int level)
    {
      MBTextManager.SetTextVariable("a0", effect.GetPrimaryValue(level).ToString("0.0"), false);
      MBTextManager.SetTextVariable("a1", effect.GetSecondaryValue(level).ToString("0.0"), false);
      return effect.Description.ToString();
    }

    private static void AddToStat(
      ref ExplainedNumber stat,
      SkillEffect.EffectIncrementType effectIncrementType,
      float number,
      TextObject text)
    {
      if (effectIncrementType == SkillEffect.EffectIncrementType.Add)
      {
        stat.Add(number, text);
      }
      else
      {
        if (effectIncrementType != SkillEffect.EffectIncrementType.AddFactor)
          return;
        stat.AddFactor(number * 0.01f, text);
      }
    }

    public static CharacterObject GetEffectivePartyLeaderForSkill(PartyBase party)
    {
      if (party == null)
        return (CharacterObject) null;
      if (party.LeaderHero != null)
        return party.LeaderHero.CharacterObject;
      TroopRoster memberRoster = party.MemberRoster;
      return ((object) memberRoster != null ? (memberRoster.TotalManCount > 0 ? 1 : 0) : 0) == 0 ? (CharacterObject) null : party.MemberRoster.GetCharacterAtIndex(0);
    }
  }
}
