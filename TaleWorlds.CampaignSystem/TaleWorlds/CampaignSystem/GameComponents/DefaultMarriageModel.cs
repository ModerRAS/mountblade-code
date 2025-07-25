// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMarriageModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMarriageModel : MarriageModel
  {
    private const float BaseMarriageChanceForNpcs = 0.002f;

    public override int MinimumMarriageAgeMale => 18;

    public override int MinimumMarriageAgeFemale => 18;

    public override bool IsCoupleSuitableForMarriage(Hero firstHero, Hero secondHero)
    {
      if (!this.IsClanSuitableForMarriage(firstHero.Clan) || !this.IsClanSuitableForMarriage(secondHero.Clan) || firstHero.Clan?.Leader == firstHero && secondHero.Clan?.Leader == secondHero || firstHero.IsFemale == secondHero.IsFemale || this.AreHeroesRelated(firstHero, secondHero, 3))
        return false;
      Hero courtedHeroInOtherClan1 = Romance.GetCourtedHeroInOtherClan(firstHero, secondHero);
      if (courtedHeroInOtherClan1 != null && courtedHeroInOtherClan1 != secondHero)
        return false;
      Hero courtedHeroInOtherClan2 = Romance.GetCourtedHeroInOtherClan(secondHero, firstHero);
      return (courtedHeroInOtherClan2 == null || courtedHeroInOtherClan2 == firstHero) && firstHero.CanMarry() && secondHero.CanMarry();
    }

    public override bool IsClanSuitableForMarriage(Clan clan)
    {
      return clan != null && !clan.IsBanditFaction && !clan.IsRebelClan;
    }

    public override float NpcCoupleMarriageChance(Hero firstHero, Hero secondHero)
    {
      if (!this.IsCoupleSuitableForMarriage(firstHero, secondHero))
        return 0.0f;
      float num1 = 1f / 500f * (float) (1.0 + ((double) firstHero.Age - 18.0) / 50.0) * (float) (1.0 + ((double) secondHero.Age - 18.0) / 50.0) * (float) (1.0 - (double) MathF.Abs(secondHero.Age - firstHero.Age) / 50.0);
      if (firstHero.Clan.Kingdom != secondHero.Clan.Kingdom)
        num1 *= 0.5f;
      float num2 = (float) (0.5 + (double) firstHero.Clan.GetRelationWithClan(secondHero.Clan) / 200.0);
      return num1 * num2;
    }

    public override bool ShouldNpcMarriageBetweenClansBeAllowed(
      Clan consideringClan,
      Clan targetClan)
    {
      return targetClan != consideringClan && !consideringClan.IsAtWarWith((IFaction) targetClan) && consideringClan.GetRelationWithClan(targetClan) >= -50;
    }

    public override List<Hero> GetAdultChildrenSuitableForMarriage(Hero hero)
    {
      List<Hero> suitableForMarriage = new List<Hero>();
      foreach (Hero child in (List<Hero>) hero.Children)
      {
        if (child.CanMarry())
          suitableForMarriage.Add(child);
      }
      return suitableForMarriage;
    }

    private bool AreHeroesRelatedAux1(Hero firstHero, Hero secondHero, int ancestorDepth)
    {
      if (firstHero == secondHero)
        return true;
      if (ancestorDepth <= 0)
        return false;
      if (secondHero.Mother != null && this.AreHeroesRelatedAux1(firstHero, secondHero.Mother, ancestorDepth - 1))
        return true;
      return secondHero.Father != null && this.AreHeroesRelatedAux1(firstHero, secondHero.Father, ancestorDepth - 1);
    }

    private bool AreHeroesRelatedAux2(
      Hero firstHero,
      Hero secondHero,
      int ancestorDepth,
      int secondAncestorDepth)
    {
      if (this.AreHeroesRelatedAux1(firstHero, secondHero, secondAncestorDepth))
        return true;
      if (ancestorDepth <= 0)
        return false;
      if (firstHero.Mother != null && this.AreHeroesRelatedAux2(firstHero.Mother, secondHero, ancestorDepth - 1, secondAncestorDepth))
        return true;
      return firstHero.Father != null && this.AreHeroesRelatedAux2(firstHero.Father, secondHero, ancestorDepth - 1, secondAncestorDepth);
    }

    private bool AreHeroesRelated(Hero firstHero, Hero secondHero, int ancestorDepth)
    {
      return this.AreHeroesRelatedAux2(firstHero, secondHero, ancestorDepth, ancestorDepth);
    }

    public override int GetEffectiveRelationIncrease(Hero firstHero, Hero secondHero)
    {
      ExplainedNumber stat = new ExplainedNumber(20f);
      SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Charm, DefaultSkillEffects.CharmRelationBonus, firstHero.IsFemale ? secondHero.CharacterObject : firstHero.CharacterObject, ref stat);
      return MathF.Round(stat.ResultNumber);
    }

    public override bool IsSuitableForMarriage(Hero maidenOrSuitor)
    {
      if (!maidenOrSuitor.IsActive || maidenOrSuitor.Spouse != null || !maidenOrSuitor.IsLord || maidenOrSuitor.IsMinorFactionHero || maidenOrSuitor.IsNotable || maidenOrSuitor.IsTemplate || maidenOrSuitor.PartyBelongedTo?.MapEvent != null || maidenOrSuitor.PartyBelongedTo?.Army != null)
        return false;
      return maidenOrSuitor.IsFemale ? (double) maidenOrSuitor.CharacterObject.Age >= (double) this.MinimumMarriageAgeFemale : (double) maidenOrSuitor.CharacterObject.Age >= (double) this.MinimumMarriageAgeMale;
    }

    public override Clan GetClanAfterMarriage(Hero firstHero, Hero secondHero)
    {
      return firstHero.IsHumanPlayerCharacter || !secondHero.IsHumanPlayerCharacter && (firstHero.Clan.Leader == firstHero || secondHero.Clan.Leader != secondHero && !firstHero.IsFemale) ? firstHero.Clan : secondHero.Clan;
    }
  }
}
