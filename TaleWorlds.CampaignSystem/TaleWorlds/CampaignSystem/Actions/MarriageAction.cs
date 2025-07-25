// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.MarriageAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class MarriageAction
  {
    private static void ApplyInternal(Hero firstHero, Hero secondHero, bool showNotification)
    {
      if (!Campaign.Current.Models.MarriageModel.IsCoupleSuitableForMarriage(firstHero, secondHero))
      {
        Debug.Print("MarriageAction.Apply() called for not suitable couple: " + firstHero.StringId + " and " + secondHero.StringId);
      }
      else
      {
        firstHero.Spouse = secondHero;
        secondHero.Spouse = firstHero;
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(firstHero, secondHero, Campaign.Current.Models.MarriageModel.GetEffectiveRelationIncrease(firstHero, secondHero), false);
        Clan clanAfterMarriage = Campaign.Current.Models.MarriageModel.GetClanAfterMarriage(firstHero, secondHero);
        if (firstHero.Clan != clanAfterMarriage)
          MarriageAction.HandleClanChangeAfterMarriageForHero(firstHero, clanAfterMarriage);
        else
          MarriageAction.HandleClanChangeAfterMarriageForHero(secondHero, clanAfterMarriage);
        Romance.EndAllCourtships(firstHero);
        Romance.EndAllCourtships(secondHero);
        ChangeRomanticStateAction.Apply(firstHero, secondHero, Romance.RomanceLevelEnum.Marriage);
        CampaignEventDispatcher.Instance.OnHeroesMarried(firstHero, secondHero, showNotification);
      }
    }

    private static void HandleClanChangeAfterMarriageForHero(Hero hero, Clan clanAfterMarriage)
    {
      Clan clan = hero.Clan;
      if (hero.GovernorOf != null)
        ChangeGovernorAction.RemoveGovernorOf(hero);
      if (hero.PartyBelongedTo != null)
      {
        if (clan.Kingdom != clanAfterMarriage.Kingdom)
        {
          if (hero.PartyBelongedTo.Army != null)
          {
            if (hero.PartyBelongedTo.Army.LeaderParty == hero.PartyBelongedTo)
              DisbandArmyAction.ApplyByUnknownReason(hero.PartyBelongedTo.Army);
            else
              hero.PartyBelongedTo.Army = (Army) null;
          }
          FactionHelper.FinishAllRelatedHostileActionsOfNobleToFaction(hero, (IFaction) clanAfterMarriage.Kingdom ?? (IFaction) clanAfterMarriage);
        }
        MakeHeroFugitiveAction.Apply(hero);
      }
      hero.Clan = clanAfterMarriage;
      foreach (Hero hero1 in (List<Hero>) clan.Heroes)
        hero1.UpdateHomeSettlement();
      foreach (Hero hero2 in (List<Hero>) clanAfterMarriage.Heroes)
        hero2.UpdateHomeSettlement();
    }

    public static void Apply(Hero firstHero, Hero secondHero, bool showNotification = true)
    {
      MarriageAction.ApplyInternal(firstHero, secondHero, showNotification);
    }
  }
}
