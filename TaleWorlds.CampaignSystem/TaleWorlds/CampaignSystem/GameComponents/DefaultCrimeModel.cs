// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultCrimeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultCrimeModel : CrimeModel
  {
    private const float ModerateCrimeRatingThreshold = 30f;
    private const float SevereCrimeRatingThreshold = 65f;

    public override bool DoesPlayerHaveAnyCrimeRating(IFaction faction)
    {
      return (double) faction.MainHeroCrimeRating > 0.0;
    }

    public override bool IsPlayerCrimeRatingSevere(IFaction faction)
    {
      return (double) faction.MainHeroCrimeRating >= 65.0;
    }

    public override bool IsPlayerCrimeRatingModerate(IFaction faction)
    {
      return (double) faction.MainHeroCrimeRating > 30.0 && (double) faction.MainHeroCrimeRating <= 65.0;
    }

    public override bool IsPlayerCrimeRatingMild(IFaction faction)
    {
      return (double) faction.MainHeroCrimeRating > 0.0 && (double) faction.MainHeroCrimeRating <= 30.0;
    }

    public override float GetCost(
      IFaction faction,
      CrimeModel.PaymentMethod paymentMethod,
      float minimumCrimeRating)
    {
      float x = MathF.Max(0.0f, faction.MainHeroCrimeRating - minimumCrimeRating);
      if (paymentMethod == CrimeModel.PaymentMethod.Gold)
        return (float) (int) ((double) MathF.Pow(x, 1.2f) * 100.0);
      return paymentMethod == CrimeModel.PaymentMethod.Influence ? MathF.Pow(x, 1.2f) : 0.0f;
    }

    public override ExplainedNumber GetDailyCrimeRatingChange(
      IFaction faction,
      bool includeDescriptions = false)
    {
      ExplainedNumber bonuses = new ExplainedNumber(includeDescriptions: includeDescriptions);
      int num = faction.Settlements.Count<Settlement>((Func<Settlement, bool>) (x => x.IsTown && x.Alleys.Any<Alley>((Func<Alley, bool>) (y => y.Owner == Hero.MainHero))));
      bonuses.Add((float) num * Campaign.Current.Models.AlleyModel.GetDailyCrimeRatingOfAlley, new TextObject("{=t87T82jq}Owned alleys"));
      if (faction.MainHeroCrimeRating.ApproximatelyEqualsTo(0.0f))
        return bonuses;
      Clan clan = faction as Clan;
      if (Hero.MainHero.Clan == faction)
        bonuses.Add(-5f, includeDescriptions ? new TextObject("{=eNtRt6F5}Your own Clan") : TextObject.Empty);
      else if (faction.IsKingdomFaction && faction.Leader == Hero.MainHero)
        bonuses.Add(-5f, includeDescriptions ? new TextObject("{=xer2bta5}Your own Kingdom") : TextObject.Empty);
      else if (Hero.MainHero.MapFaction == faction)
        bonuses.Add(-1.5f, includeDescriptions ? new TextObject("{=QRwaQIbm}Is in Kingdom") : TextObject.Empty);
      else if (clan != null && Hero.MainHero.MapFaction == clan.Kingdom)
        bonuses.Add(-1.25f, includeDescriptions ? new TextObject("{=hXGByLG9}Sharing the same Kingdom") : TextObject.Empty);
      else if (Hero.MainHero.Clan.IsAtWarWith(faction))
        bonuses.Add(-0.25f, includeDescriptions ? new TextObject("{=BYTrUJyj}In War") : TextObject.Empty);
      else
        bonuses.Add(-1f, includeDescriptions ? new TextObject("{=basevalue}Base") : TextObject.Empty);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Roguery.WhiteLies, Hero.MainHero.CharacterObject, true, ref bonuses);
      return bonuses;
    }

    public override int DeclareWarCrimeRatingThreshold => 60;

    public override float GetMaxCrimeRating() => 100f;

    public override float GetMinAcceptableCrimeRating(IFaction faction)
    {
      return faction != Hero.MainHero.MapFaction ? 30f : 20f;
    }
  }
}
