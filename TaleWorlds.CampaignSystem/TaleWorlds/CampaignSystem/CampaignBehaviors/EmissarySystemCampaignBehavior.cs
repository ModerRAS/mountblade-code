// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.EmissarySystemCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class EmissarySystemCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void DailyTick()
    {
      EmissaryModel emissaryModel = Campaign.Current.Models.EmissaryModel;
      foreach (Hero hero in (List<Hero>) Clan.PlayerClan.Heroes)
      {
        if (emissaryModel.IsEmissary(hero) && (double) MBRandom.RandomFloat <= (0.10000000149011612 + 0.75 * ((double) hero.GetSkillValue(DefaultSkills.Charm) / 300.0)) / 10.0)
        {
          bool flag = (double) MBRandom.RandomFloat <= 0.5;
          if ((!flag || !hero.CurrentSettlement.HeroesWithoutParty.Any<Hero>((Func<Hero, bool>) (h => h.Occupation == Occupation.Lord)) ? (flag || hero.CurrentSettlement.Notables.Count != 0 ? 0 : (hero.CurrentSettlement.HeroesWithoutParty.Any<Hero>((Func<Hero, bool>) (h => h.Occupation == Occupation.Lord)) ? 1 : 0)) : 1) == 0)
          {
            Hero randomElement = hero.CurrentSettlement.Notables.GetRandomElement<Hero>();
            if (randomElement != null)
              ChangeRelationAction.ApplyEmissaryRelation(hero, randomElement, emissaryModel.EmissaryRelationBonusForMainClan);
          }
          else
          {
            Hero elementWithPredicate = hero.CurrentSettlement.HeroesWithoutParty.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (n => !n.IsPrisoner && n.CharacterObject.Occupation == Occupation.Lord && n.Clan != Clan.PlayerClan));
            if (elementWithPredicate != null)
              ChangeRelationAction.ApplyEmissaryRelation(hero, elementWithPredicate, emissaryModel.EmissaryRelationBonusForMainClan);
          }
        }
      }
    }
  }
}
