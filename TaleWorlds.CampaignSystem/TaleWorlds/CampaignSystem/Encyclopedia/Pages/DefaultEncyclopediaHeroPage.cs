// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.Pages.DefaultEncyclopediaHeroPage
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia.Pages
{
  [EncyclopediaModel(new Type[] {typeof (Hero)})]
  public class DefaultEncyclopediaHeroPage : EncyclopediaPage
  {
    public DefaultEncyclopediaHeroPage() => this.HomePageOrderIndex = 200;

    protected override IEnumerable<EncyclopediaListItem> InitializeListItems()
    {
      DefaultEncyclopediaHeroPage encyclopediaHeroPage = this;
      int comingOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
      TextObject heroName = new TextObject("{=TauRjAud}{NAME} of the {FACTION}");
      string empty = string.Empty;
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        Hero hero = allAliveHero;
        if (encyclopediaHeroPage.IsValidEncyclopediaItem((object) hero) && !hero.IsNotable && (double) hero.Age >= (double) comingOfAge)
        {
          string name;
          if (hero.Clan != null)
          {
            heroName.SetTextVariable("NAME", hero.FirstName ?? hero.Name);
            heroName.SetTextVariable("FACTION", hero.Clan?.Name ?? TextObject.Empty);
            name = heroName.ToString();
          }
          else
            name = hero.Name.ToString();
          yield return new EncyclopediaListItem((object) hero, name, "", hero.StringId, encyclopediaHeroPage.GetIdentifier(typeof (Hero)), DefaultEncyclopediaHeroPage.CanPlayerSeeValuesOf(hero), (Action) (() => InformationManager.ShowTooltip(typeof (Hero), (object) hero, (object) false)));
        }
      }
      foreach (Hero deadOrDisabledHero in (List<Hero>) Hero.DeadOrDisabledHeroes)
      {
        Hero hero = deadOrDisabledHero;
        if (encyclopediaHeroPage.IsValidEncyclopediaItem((object) hero) && !hero.IsNotable && (double) hero.Age >= (double) comingOfAge)
        {
          if (hero.Clan != null)
          {
            heroName.SetTextVariable("NAME", hero.FirstName ?? hero.Name);
            heroName.SetTextVariable("FACTION", hero.Clan?.Name ?? TextObject.Empty);
            yield return new EncyclopediaListItem((object) hero, heroName.ToString(), "", hero.StringId, encyclopediaHeroPage.GetIdentifier(typeof (Hero)), DefaultEncyclopediaHeroPage.CanPlayerSeeValuesOf(hero), (Action) (() => InformationManager.ShowTooltip(typeof (Hero), (object) hero, (object) false)));
          }
          else
            yield return new EncyclopediaListItem((object) hero, hero.Name.ToString(), "", hero.StringId, encyclopediaHeroPage.GetIdentifier(typeof (Hero)), DefaultEncyclopediaHeroPage.CanPlayerSeeValuesOf(hero), (Action) (() => InformationManager.ShowTooltip(typeof (Hero), (object) hero, (object) false)));
        }
      }
    }

    protected override IEnumerable<EncyclopediaFilterGroup> InitializeFilterItems()
    {
      List<EncyclopediaFilterGroup> encyclopediaFilterGroupList = new List<EncyclopediaFilterGroup>();
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=5xi0t1dD}Met Before"), (Predicate<object>) (h => ((Hero) h).HasMet))
      }, new TextObject("{=BlidMNGT}Relation")));
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=oAb4NqO5}Male"), (Predicate<object>) (h => !((Hero) h).IsFemale)),
        new EncyclopediaFilterItem(new TextObject("{=2YUUGQvG}Female"), (Predicate<object>) (h => ((Hero) h).IsFemale))
      }, new TextObject("{=fGFMqlGz}Gender")));
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=uvjOVy5P}Dead"), (Predicate<object>) (h => !((Hero) h).IsAlive)),
        new EncyclopediaFilterItem(new TextObject("{=3TmLIou4}Alive"), (Predicate<object>) (h => ((Hero) h).IsAlive))
      }, new TextObject("{=DXczLzml}Status")));
      List<EncyclopediaFilterItem> filters = new List<EncyclopediaFilterItem>();
      foreach (CultureObject cultureObject in Game.Current.ObjectManager.GetObjectTypeList<CultureObject>().OrderByDescending<CultureObject, bool>((Func<CultureObject, bool>) (x => !x.IsMainCulture)).ThenBy<CultureObject, string>((Func<CultureObject, string>) (f => f.Name.ToString())).ToList<CultureObject>())
      {
        CultureObject culture = cultureObject;
        if (culture.StringId != "neutral_culture" && !culture.IsBandit)
          filters.Add(new EncyclopediaFilterItem(culture.Name, (Predicate<object>) (c => ((Hero) c).Culture == culture)));
      }
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(filters, GameTexts.FindText("str_culture")));
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=b9ty57rJ}Faction Leader"), (Predicate<object>) (h => ((Hero) h).IsKingdomLeader || ((Hero) h).IsClanLeader)),
        new EncyclopediaFilterItem(new TextObject("{=4vleNtxb}Lord/Lady"), (Predicate<object>) (h => ((Hero) h).IsLord)),
        new EncyclopediaFilterItem(new TextObject("{=vmMqs3Ck}Noble"), (Predicate<object>) (h =>
        {
          Clan clan = ((Hero) h).Clan;
          return clan != null && clan.IsNoble;
        })),
        new EncyclopediaFilterItem(new TextObject("{=FLa5OuyK}Wanderer"), (Predicate<object>) (h => ((Hero) h).IsWanderer))
      }, new TextObject("{=GZxFIeiJ}Occupation")));
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=qIAgh9VL}Not Married"), (Predicate<object>) (h => ((Hero) h).Spouse == null)),
        new EncyclopediaFilterItem(new TextObject("{=xeawD38S}Married"), (Predicate<object>) (h => ((Hero) h).Spouse != null))
      }, new TextObject("{=PMio7set}Marital Status")));
      return (IEnumerable<EncyclopediaFilterGroup>) encyclopediaFilterGroupList;
    }

    protected override IEnumerable<EncyclopediaSortController> InitializeSortControllers()
    {
      return (IEnumerable<EncyclopediaSortController>) new List<EncyclopediaSortController>()
      {
        new EncyclopediaSortController(new TextObject("{=jaaQijQs}Age"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaHeroPage.EncyclopediaListHeroAgeComparer()),
        new EncyclopediaSortController(new TextObject("{=BlidMNGT}Relation"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaHeroPage.EncyclopediaListHeroRelationComparer())
      };
    }

    public override string GetViewFullyQualifiedName() => "EncyclopediaHeroPage";

    public override string GetStringID() => "EncyclopediaHero";

    public override TextObject GetName() => GameTexts.FindText("str_encyclopedia_heroes");

    public override TextObject GetDescriptionText() => GameTexts.FindText("str_hero_description");

    public override MBObjectBase GetObject(string typeName, string stringID)
    {
      return (MBObjectBase) Campaign.Current.CampaignObjectManager.Find<Hero>(stringID);
    }

    public override bool IsValidEncyclopediaItem(object o)
    {
      if (o is Hero hero && !hero.IsTemplate && hero.IsReady)
      {
        IFaction mapFaction = hero.MapFaction;
        if ((mapFaction != null ? (!mapFaction.IsBanditFaction ? 1 : 0) : 1) != 0)
          return !hero.CharacterObject.HiddenInEncylopedia;
      }
      return false;
    }

    private static bool CanPlayerSeeValuesOf(Hero hero)
    {
      return Campaign.Current.Models.InformationRestrictionModel.DoesPlayerKnowDetailsOf(hero);
    }

    private class EncyclopediaListHeroAgeComparer : 
      DefaultEncyclopediaHeroPage.EncyclopediaListHeroComparer
    {
      private static Func<Hero, Hero, int> _comparison = (Func<Hero, Hero, int>) ((h1, h2) => h1.Age.CompareTo(h2.Age));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareHeroes(x, y, DefaultEncyclopediaHeroPage.EncyclopediaListHeroAgeComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Hero hero)
          return !DefaultEncyclopediaHeroPage.CanPlayerSeeValuesOf(hero) ? this._missingValue.ToString() : ((int) hero.Age).ToString();
        Debug.FailedAssert("Unable to get the age of a non-hero object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaHeroPage.cs", nameof (GetComparedValueText), 179);
        return "";
      }
    }

    private class EncyclopediaListHeroRelationComparer : 
      DefaultEncyclopediaHeroPage.EncyclopediaListHeroComparer
    {
      private static Func<Hero, Hero, int> _comparison = (Func<Hero, Hero, int>) ((h1, h2) => h1.GetRelationWithPlayer().CompareTo(h2.GetRelationWithPlayer()));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareHeroes(x, y, DefaultEncyclopediaHeroPage.EncyclopediaListHeroRelationComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Hero hero)
        {
          if (!DefaultEncyclopediaHeroPage.CanPlayerSeeValuesOf(hero))
            return this._missingValue.ToString();
          int relationWithPlayer = (int) hero.GetRelationWithPlayer();
          MBTextManager.SetTextVariable("NUMBER", relationWithPlayer);
          return relationWithPlayer <= 0 ? relationWithPlayer.ToString() : GameTexts.FindText("str_plus_with_number").ToString();
        }
        Debug.FailedAssert("Unable to get the relation between a non-hero object and the player.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaHeroPage.cs", nameof (GetComparedValueText), 209);
        return "";
      }
    }

    public abstract class EncyclopediaListHeroComparer : EncyclopediaListItemComparerBase
    {
      protected bool CompareVisibility(Hero h1, Hero h2, out int comparisonResult)
      {
        bool flag1 = DefaultEncyclopediaHeroPage.CanPlayerSeeValuesOf(h1);
        bool flag2 = DefaultEncyclopediaHeroPage.CanPlayerSeeValuesOf(h2);
        if (!flag1 && !flag2)
        {
          comparisonResult = 0;
          return true;
        }
        if (!flag1)
        {
          comparisonResult = this.IsAscending ? 1 : -1;
          return true;
        }
        if (!flag2)
        {
          comparisonResult = this.IsAscending ? -1 : 1;
          return true;
        }
        comparisonResult = 0;
        return false;
      }

      protected int CompareHeroes(
        EncyclopediaListItem x,
        EncyclopediaListItem y,
        Func<Hero, Hero, int> comparison)
      {
        if (x.Object is Hero h1 && y.Object is Hero h2)
        {
          int comparisonResult;
          if (this.CompareVisibility(h1, h2, out comparisonResult))
            return comparisonResult == 0 ? this.ResolveEquality(x, y) : comparisonResult * (this.IsAscending ? 1 : -1);
          int num = comparison(h1, h2) * (this.IsAscending ? 1 : -1);
          return num == 0 ? this.ResolveEquality(x, y) : num;
        }
        Debug.FailedAssert("Both objects should be heroes.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaHeroPage.cs", nameof (CompareHeroes), 258);
        return 0;
      }

      protected delegate bool HeroVisibilityComparerDelegate(
        Hero h1,
        Hero h2,
        out int comparisonResult);
    }
  }
}
