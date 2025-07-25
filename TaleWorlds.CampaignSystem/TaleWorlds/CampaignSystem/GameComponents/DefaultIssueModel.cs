// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultIssueModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultIssueModel : IssueModel
  {
    private static readonly TextObject SettlementIssuesText = new TextObject("{=EQLgVYk0}Settlement Issues");
    private static readonly TextObject HeroIssueText = GameTexts.FindText("str_issues");
    private static readonly TextObject RelatedSettlementIssuesText = new TextObject("{=umNyHc3A}Bound Village Issues");
    private static readonly TextObject ClanIssuesText = new TextObject("{=jdl8G8JS}Clan Issues");

    public override int IssueOwnerCoolDownInDays => 30;

    public override float GetIssueDifficultyMultiplier()
    {
      return MBMath.ClampFloat(Campaign.Current.PlayerProgress, 0.1f, 1f);
    }

    public override void GetIssueEffectsOfSettlement(
      IssueEffect issueEffect,
      Settlement settlement,
      ref ExplainedNumber explainedNumber)
    {
      Hero leader = settlement.OwnerClan.Leader;
      if (leader != null && leader.IsAlive && leader.Issue != null)
        this.GetIssueEffectOfHeroInternal(issueEffect, leader, ref explainedNumber, DefaultIssueModel.SettlementIssuesText);
      foreach (Hero hero in (List<Hero>) settlement.HeroesWithoutParty)
      {
        if (hero.Issue != null)
          this.GetIssueEffectOfHeroInternal(issueEffect, hero, ref explainedNumber, DefaultIssueModel.SettlementIssuesText);
      }
      if (!settlement.IsTown && !settlement.IsCastle)
        return;
      foreach (SettlementComponent boundVillage in (List<Village>) settlement.BoundVillages)
      {
        foreach (Hero notable in (List<Hero>) boundVillage.Settlement.Notables)
        {
          if (notable.Issue != null)
            this.GetIssueEffectOfHeroInternal(issueEffect, notable, ref explainedNumber, DefaultIssueModel.RelatedSettlementIssuesText);
        }
      }
    }

    public override void GetIssueEffectOfHero(
      IssueEffect issueEffect,
      Hero hero,
      ref ExplainedNumber explainedNumber)
    {
      this.GetIssueEffectOfHeroInternal(issueEffect, hero, ref explainedNumber, DefaultIssueModel.HeroIssueText);
    }

    public override void GetIssueEffectOfClan(
      IssueEffect issueEffect,
      Clan clan,
      ref ExplainedNumber explainedNumber)
    {
      float num = 0.0f;
      foreach (Hero lord in (List<Hero>) clan.Lords)
      {
        if (lord.Issue != null)
        {
          IssueBase issue = lord.Issue;
          num += issue.GetActiveIssueEffectAmount(issueEffect);
        }
      }
      explainedNumber.Add(num, DefaultIssueModel.ClanIssuesText);
    }

    public override (int, int) GetCausalityForHero(Hero alternativeSolutionHero, IssueBase issue)
    {
      (SkillObject, int) alternativeSolutionSkill = this.GetIssueAlternativeSolutionSkill(alternativeSolutionHero, issue);
      int skillValue = alternativeSolutionHero.GetSkillValue(alternativeSolutionSkill.Item1);
      float num1 = 0.8f;
      if (skillValue != 0)
        num1 = (float) (alternativeSolutionSkill.Item2 / skillValue) * 0.1f;
      float num2 = MBMath.ClampFloat(num1, 0.2f, 0.8f);
      int maxValue = MathF.Ceiling((float) issue.GetTotalAlternativeSolutionNeededMenCount() * num2);
      return (MBMath.ClampInt(2 * (maxValue / 3), 1, maxValue), maxValue);
    }

    public override float GetFailureRiskForHero(Hero alternativeSolutionHero, IssueBase issue)
    {
      (SkillObject, int) alternativeSolutionSkill = this.GetIssueAlternativeSolutionSkill(alternativeSolutionHero, issue);
      return MBMath.ClampFloat((float) ((double) (alternativeSolutionSkill.Item2 - alternativeSolutionHero.GetSkillValue(alternativeSolutionSkill.Item1)) * 0.5 / 100.0), 0.0f, 0.9f);
    }

    public override CampaignTime GetDurationOfResolutionForHero(
      Hero alternativeSolutionHero,
      IssueBase issue)
    {
      (SkillObject, int) alternativeSolutionSkill = this.GetIssueAlternativeSolutionSkill(alternativeSolutionHero, issue);
      int skillValue = alternativeSolutionHero.GetSkillValue(alternativeSolutionSkill.Item1);
      float num = 10f;
      if (skillValue != 0)
        num = MBMath.ClampFloat((float) (alternativeSolutionSkill.Item2 / skillValue), 0.0f, 10f);
      return CampaignTime.Days((float) issue.GetBaseAlternativeSolutionDurationInDays() + 2f * num);
    }

    public override int GetTroopsRequiredForHero(Hero alternativeSolutionHero, IssueBase issue)
    {
      (SkillObject, int) alternativeSolutionSkill = this.GetIssueAlternativeSolutionSkill(alternativeSolutionHero, issue);
      int skillValue = alternativeSolutionHero.GetSkillValue(alternativeSolutionSkill.Item1);
      float num1 = 1.2f;
      if (skillValue != 0)
        num1 = (float) alternativeSolutionSkill.Item2 / (float) skillValue;
      float num2 = MBMath.ClampFloat(num1, 0.2f, 1.2f);
      return (int) ((double) issue.AlternativeSolutionBaseNeededMenCount * (double) num2);
    }

    public override (SkillObject, int) GetIssueAlternativeSolutionSkill(Hero hero, IssueBase issue)
    {
      return issue.GetAlternativeSolutionSkill(hero);
    }

    private void GetIssueEffectOfHeroInternal(
      IssueEffect issueEffect,
      Hero hero,
      ref ExplainedNumber explainedNumber,
      TextObject customText)
    {
      float issueEffectAmount = hero.Issue.GetActiveIssueEffectAmount(issueEffect);
      if ((double) issueEffectAmount == 0.0)
        return;
      explainedNumber.Add(issueEffectAmount, customText);
    }
  }
}
