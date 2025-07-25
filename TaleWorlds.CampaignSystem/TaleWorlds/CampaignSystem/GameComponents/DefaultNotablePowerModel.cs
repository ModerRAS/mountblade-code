// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultNotablePowerModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultNotablePowerModel : NotablePowerModel
  {
    private DefaultNotablePowerModel.NotablePowerRank[] NotablePowerRanks = new DefaultNotablePowerModel.NotablePowerRank[3]
    {
      new DefaultNotablePowerModel.NotablePowerRank(new TextObject("{=aTeuX4L0}Regular"), 0, 0.05f),
      new DefaultNotablePowerModel.NotablePowerRank(new TextObject("{=nTETQEmy}Influential"), 100, 0.1f),
      new DefaultNotablePowerModel.NotablePowerRank(new TextObject("{=UCpyo9hw}Powerful"), 200, 0.15f)
    };
    private TextObject _currentRankEffect = new TextObject("{=7j9uHxLM}Current Rank Effect");
    private TextObject _militiaEffect = new TextObject("{=R1MaIgOb}Militia Effect");
    private TextObject _rulerClanEffect = new TextObject("{=JE3RTqx5}Ruler Clan Effect");
    private TextObject _propertyEffect = new TextObject("{=yDomN9L2}Property Effect");

    public override int NotableDisappearPowerLimit => 100;

    public override ExplainedNumber CalculateDailyPowerChangeForHero(
      Hero hero,
      bool includeDescriptions = false)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: includeDescriptions);
      if (!hero.IsActive)
        return explainedNumber;
      if ((double) hero.Power > (double) this.RegularNotableMaxPowerLevel)
        this.CalculateDailyPowerChangeForInfluentialNotables(hero, ref explainedNumber);
      this.CalculateDailyPowerChangePerPropertyOwned(hero, ref explainedNumber);
      if (hero.Issue != null)
        this.CalculatePowerChangeFromIssues(hero, ref explainedNumber);
      if (hero.IsArtisan)
        explainedNumber.Add(-0.1f, this._propertyEffect);
      if (hero.IsGangLeader)
        explainedNumber.Add(-0.4f, this._propertyEffect);
      if (hero.IsRuralNotable)
        explainedNumber.Add(0.1f, this._propertyEffect);
      if (hero.IsHeadman)
        explainedNumber.Add(0.1f, this._propertyEffect);
      if (hero.IsMerchant)
        explainedNumber.Add(0.2f, this._propertyEffect);
      if (hero.CurrentSettlement != null)
      {
        if (hero.CurrentSettlement.IsVillage && hero.CurrentSettlement.Village.Bound.IsCastle)
          explainedNumber.Add(0.1f, this._propertyEffect);
        if (hero.SupporterOf == hero.CurrentSettlement.OwnerClan)
          this.CalculateDailyPowerChangeForAffiliationWithRulerClan(ref explainedNumber);
      }
      return explainedNumber;
    }

    public override int RegularNotableMaxPowerLevel => this.NotablePowerRanks[1].MinPowerValue;

    private void CalculateDailyPowerChangePerPropertyOwned(
      Hero hero,
      ref ExplainedNumber explainedNumber)
    {
      float num = 0.1f;
      int count = hero.OwnedAlleys.Count;
      explainedNumber.Add(num * (float) count, this._propertyEffect);
    }

    private void CalculateDailyPowerChangeForAffiliationWithRulerClan(
      ref ExplainedNumber explainedNumber)
    {
      float num = 0.2f;
      explainedNumber.Add(num, this._rulerClanEffect);
    }

    private void CalculateDailyPowerChangeForInfluentialNotables(
      Hero hero,
      ref ExplainedNumber explainedNumber)
    {
      float num = (float) (-1.0 * (((double) hero.Power - (double) this.RegularNotableMaxPowerLevel) / 500.0));
      explainedNumber.Add(num, this._currentRankEffect);
    }

    private void CalculatePowerChangeFromIssues(Hero hero, ref ExplainedNumber explainedNumber)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectOfHero(DefaultIssueEffects.IssueOwnerPower, hero, ref explainedNumber);
    }

    public override TextObject GetPowerRankName(Hero hero) => this.GetPowerRank(hero).Name;

    public override float GetInfluenceBonusToClan(Hero hero)
    {
      return this.GetPowerRank(hero).InfluenceBonus;
    }

    private DefaultNotablePowerModel.NotablePowerRank GetPowerRank(Hero hero)
    {
      int index1 = 0;
      for (int index2 = 0; index2 < this.NotablePowerRanks.Length; ++index2)
      {
        if ((double) hero.Power > (double) this.NotablePowerRanks[index2].MinPowerValue)
          index1 = index2;
      }
      return this.NotablePowerRanks[index1];
    }

    public override int GetInitialPower()
    {
      float randomFloat = MBRandom.RandomFloat;
      if ((double) randomFloat < 0.20000000298023224)
        return MBRandom.RandomInt((int) ((double) (this.NotablePowerRanks[0].MinPowerValue + this.NotablePowerRanks[1].MinPowerValue) * 0.5), this.NotablePowerRanks[1].MinPowerValue);
      return (double) randomFloat >= 0.800000011920929 ? MBRandom.RandomInt(this.NotablePowerRanks[2].MinPowerValue, (int) ((double) this.NotablePowerRanks[2].MinPowerValue * 2.0)) : MBRandom.RandomInt(this.NotablePowerRanks[1].MinPowerValue, this.NotablePowerRanks[2].MinPowerValue);
    }

    private struct NotablePowerRank
    {
      public readonly TextObject Name;
      public readonly int MinPowerValue;
      public readonly float InfluenceBonus;

      public NotablePowerRank(TextObject name, int minPowerValue, float influenceBonus)
      {
        this.Name = name;
        this.MinPowerValue = minPowerValue;
        this.InfluenceBonus = influenceBonus;
      }
    }
  }
}
