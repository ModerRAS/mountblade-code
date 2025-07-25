// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.Pages.DefaultEncyclopediaUnitPage
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia.Pages
{
  [EncyclopediaModel(new Type[] {typeof (CharacterObject)})]
  public class DefaultEncyclopediaUnitPage : EncyclopediaPage
  {
    public DefaultEncyclopediaUnitPage() => this.HomePageOrderIndex = 300;

    protected override IEnumerable<EncyclopediaListItem> InitializeListItems()
    {
      DefaultEncyclopediaUnitPage encyclopediaUnitPage = this;
      foreach (CharacterObject characterObject in (List<CharacterObject>) CharacterObject.All)
      {
        CharacterObject character = characterObject;
        if (encyclopediaUnitPage.IsValidEncyclopediaItem((object) character))
          yield return new EncyclopediaListItem((object) character, character.Name.ToString(), "", character.StringId, encyclopediaUnitPage.GetIdentifier(typeof (CharacterObject)), true, (Action) (() => InformationManager.ShowTooltip(typeof (CharacterObject), (object) character)));
      }
    }

    protected override IEnumerable<EncyclopediaFilterGroup> InitializeFilterItems()
    {
      List<EncyclopediaFilterGroup> encyclopediaFilterGroupList = new List<EncyclopediaFilterGroup>();
      List<EncyclopediaFilterItem> filters1 = new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=1Bm1Wk1v}Infantry"), (Predicate<object>) (s => ((BasicCharacterObject) s).IsInfantry)),
        new EncyclopediaFilterItem(new TextObject("{=bIiBytSB}Archers"), (Predicate<object>) (s => ((BasicCharacterObject) s).IsRanged && !((BasicCharacterObject) s).IsMounted)),
        new EncyclopediaFilterItem(new TextObject("{=YVGtcLHF}Cavalry"), (Predicate<object>) (s => ((BasicCharacterObject) s).IsMounted && !((BasicCharacterObject) s).IsRanged)),
        new EncyclopediaFilterItem(new TextObject("{=I1CMeL9R}Mounted Archers"), (Predicate<object>) (s => ((BasicCharacterObject) s).IsRanged && ((BasicCharacterObject) s).IsMounted))
      };
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(filters1, new TextObject("{=zMMqgxb1}Type")));
      List<EncyclopediaFilterItem> filters2 = new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(GameTexts.FindText("str_occupation", "Soldier"), (Predicate<object>) (s => ((CharacterObject) s).Occupation == Occupation.Soldier)),
        new EncyclopediaFilterItem(GameTexts.FindText("str_occupation", "Mercenary"), (Predicate<object>) (s => ((CharacterObject) s).Occupation == Occupation.Mercenary)),
        new EncyclopediaFilterItem(GameTexts.FindText("str_occupation", "Bandit"), (Predicate<object>) (s => ((CharacterObject) s).Occupation == Occupation.Bandit))
      };
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(filters2, new TextObject("{=GZxFIeiJ}Occupation")));
      List<EncyclopediaFilterItem> filters3 = new List<EncyclopediaFilterItem>();
      foreach (CultureObject cultureObject in Game.Current.ObjectManager.GetObjectTypeList<CultureObject>().OrderByDescending<CultureObject, bool>((Func<CultureObject, bool>) (x => !x.IsMainCulture)).ThenBy<CultureObject, string>((Func<CultureObject, string>) (f => f.Name.ToString())).ToList<CultureObject>())
      {
        CultureObject culture = cultureObject;
        if (culture.StringId != "neutral_culture")
          filters3.Add(new EncyclopediaFilterItem(culture.Name, (Predicate<object>) (c => ((CharacterObject) c).Culture == culture)));
      }
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(filters3, GameTexts.FindText("str_culture")));
      return (IEnumerable<EncyclopediaFilterGroup>) encyclopediaFilterGroupList;
    }

    protected override IEnumerable<EncyclopediaSortController> InitializeSortControllers()
    {
      return (IEnumerable<EncyclopediaSortController>) new List<EncyclopediaSortController>()
      {
        new EncyclopediaSortController(new TextObject("{=cc1d7mkq}Tier"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaUnitPage.EncyclopediaListUnitTierComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_level_tag"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaUnitPage.EncyclopediaListUnitLevelComparer())
      };
    }

    public override string GetViewFullyQualifiedName() => "EncyclopediaUnitPage";

    public override TextObject GetName() => GameTexts.FindText("str_encyclopedia_troops");

    public override TextObject GetDescriptionText() => GameTexts.FindText("str_unit_description");

    public override string GetStringID() => "EncyclopediaUnit";

    public override bool IsValidEncyclopediaItem(object o)
    {
      if (!(o is CharacterObject characterObject) || characterObject.IsTemplate || characterObject == null || characterObject.HiddenInEncylopedia)
        return false;
      if (characterObject.Occupation == Occupation.Soldier || characterObject.Occupation == Occupation.Mercenary || characterObject.Occupation == Occupation.Bandit || characterObject.Occupation == Occupation.Gangster || characterObject.Occupation == Occupation.CaravanGuard)
        return true;
      return characterObject.Occupation == Occupation.Villager && characterObject.UpgradeTargets.Length != 0;
    }

    private class EncyclopediaListUnitTierComparer : 
      DefaultEncyclopediaUnitPage.EncyclopediaListUnitComparer
    {
      private static Func<CharacterObject, CharacterObject, int> _comparison = (Func<CharacterObject, CharacterObject, int>) ((c1, c2) => c1.Tier.CompareTo(c2.Tier));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareUnits(x, y, DefaultEncyclopediaUnitPage.EncyclopediaListUnitTierComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is CharacterObject characterObject)
          return characterObject.Tier.ToString();
        Debug.FailedAssert("Unable to get the tier of a non-character object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaUnitPage.cs", nameof (GetComparedValueText), 138);
        return "";
      }
    }

    private class EncyclopediaListUnitLevelComparer : 
      DefaultEncyclopediaUnitPage.EncyclopediaListUnitComparer
    {
      private static Func<CharacterObject, CharacterObject, int> _comparison = (Func<CharacterObject, CharacterObject, int>) ((c1, c2) => c1.Level.CompareTo(c2.Level));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareUnits(x, y, DefaultEncyclopediaUnitPage.EncyclopediaListUnitLevelComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is CharacterObject characterObject)
          return characterObject.Level.ToString();
        Debug.FailedAssert("Unable to get the level of a non-character object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaUnitPage.cs", nameof (GetComparedValueText), 159);
        return "";
      }
    }

    public abstract class EncyclopediaListUnitComparer : EncyclopediaListItemComparerBase
    {
      public int CompareUnits(
        EncyclopediaListItem x,
        EncyclopediaListItem y,
        Func<CharacterObject, CharacterObject, int> comparison)
      {
        if (x.Object is CharacterObject characterObject1 && y.Object is CharacterObject characterObject2)
        {
          int num = comparison(characterObject1, characterObject2) * (this.IsAscending ? 1 : -1);
          return num == 0 ? this.ResolveEquality(x, y) : num;
        }
        Debug.FailedAssert("Both objects should be character objects.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaUnitPage.cs", nameof (CompareUnits), 174);
        return 0;
      }
    }
  }
}
