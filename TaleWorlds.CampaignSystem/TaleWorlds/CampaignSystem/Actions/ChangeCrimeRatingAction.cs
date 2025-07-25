// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeCrimeRatingAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeCrimeRatingAction
  {
    private static void ApplyInternal(
      IFaction faction,
      float deltaCrimeRating,
      bool showNotification)
    {
      float f = MBMath.ClampFloat(faction.MainHeroCrimeRating + deltaCrimeRating, 0.0f, Campaign.Current.Models.CrimeModel.GetMaxCrimeRating());
      deltaCrimeRating = f - faction.MainHeroCrimeRating;
      if (showNotification && !deltaCrimeRating.ApproximatelyEqualsTo(0.0f))
      {
        TextObject message = new TextObject("{=hwq0RMRN}Your criminal rating with {FACTION_NAME} has {?IS_INCREASED}increased{?}decreased{\\?} by {CHANGE} to {NEW_RATING}");
        message.SetTextVariable("CHANGE", MathF.Round(MathF.Abs(deltaCrimeRating)));
        message.SetTextVariable("IS_INCREASED", (double) deltaCrimeRating > 0.0 ? 1 : 0);
        message.SetTextVariable("FACTION_NAME", faction.Name);
        message.SetTextVariable("NEW_RATING", MathF.Round(f));
        MBInformationManager.AddQuickInformation(message);
      }
      faction.MainHeroCrimeRating = f;
      if ((double) f > (double) Campaign.Current.Models.CrimeModel.DeclareWarCrimeRatingThreshold && Hero.MainHero.MapFaction.Leader == Hero.MainHero && !faction.IsAtWarWith(Hero.MainHero.MapFaction) && Hero.MainHero.MapFaction != faction)
      {
        ChangeRelationAction.ApplyPlayerRelation(faction.Leader, -10);
        DeclareWarAction.ApplyByCrimeRatingChange(faction, Hero.MainHero.MapFaction);
      }
      CampaignEventDispatcher.Instance.OnCrimeRatingChanged(faction, deltaCrimeRating);
    }

    public static void Apply(IFaction faction, float deltaCrimeRating, bool showNotification = true)
    {
      ChangeCrimeRatingAction.ApplyInternal(faction, deltaCrimeRating, showNotification);
    }
  }
}
