// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.IssueModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class IssueModel : GameModel
  {
    public abstract float GetIssueDifficultyMultiplier();

    public abstract int IssueOwnerCoolDownInDays { get; }

    public abstract void GetIssueEffectsOfSettlement(
      IssueEffect issueEffect,
      Settlement settlement,
      ref ExplainedNumber explainedNumber);

    public abstract void GetIssueEffectOfHero(
      IssueEffect issueEffect,
      Hero hero,
      ref ExplainedNumber explainedNumber);

    public abstract void GetIssueEffectOfClan(
      IssueEffect issueEffect,
      Clan clan,
      ref ExplainedNumber explainedNumber);

    public abstract (int, int) GetCausalityForHero(Hero alternativeSolutionHero, IssueBase issue);

    public abstract float GetFailureRiskForHero(Hero alternativeSolutionHero, IssueBase issue);

    public abstract CampaignTime GetDurationOfResolutionForHero(
      Hero alternativeSolutionHero,
      IssueBase issue);

    public abstract int GetTroopsRequiredForHero(Hero alternativeSolutionHero, IssueBase issue);

    public abstract (SkillObject, int) GetIssueAlternativeSolutionSkill(Hero hero, IssueBase issue);
  }
}
