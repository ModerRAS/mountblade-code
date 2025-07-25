// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.Pages.DefaultEncyclopediaFactionPage
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia.Pages
{
  [EncyclopediaModel(new Type[] {typeof (Kingdom)})]
  public class DefaultEncyclopediaFactionPage : EncyclopediaPage
  {
    public DefaultEncyclopediaFactionPage() => this.HomePageOrderIndex = 400;

    public override string GetViewFullyQualifiedName() => "EncyclopediaFactionPage";

    public override TextObject GetName() => GameTexts.FindText("str_kingdoms_group");

    public override TextObject GetDescriptionText()
    {
      return GameTexts.FindText("str_faction_description");
    }

    public override string GetStringID() => "EncyclopediaKingdom";

    public override MBObjectBase GetObject(string typeName, string stringID)
    {
      return (MBObjectBase) Campaign.Current.CampaignObjectManager.Find<Kingdom>(stringID);
    }

    public override bool IsValidEncyclopediaItem(object o)
    {
      return o is IFaction faction && !faction.IsBanditFaction;
    }

    protected override IEnumerable<EncyclopediaListItem> InitializeListItems()
    {
      DefaultEncyclopediaFactionPage encyclopediaFactionPage = this;
      foreach (Kingdom o in (List<Kingdom>) Kingdom.All)
      {
        if (encyclopediaFactionPage.IsValidEncyclopediaItem((object) o))
          yield return new EncyclopediaListItem((object) o, o.Name.ToString(), "", o.StringId, encyclopediaFactionPage.GetIdentifier(typeof (Kingdom)), true);
      }
    }

    protected override IEnumerable<EncyclopediaFilterGroup> InitializeFilterItems()
    {
      List<EncyclopediaFilterGroup> encyclopediaFilterGroupList = new List<EncyclopediaFilterGroup>();
      List<EncyclopediaFilterItem> encyclopediaFilterItemList = new List<EncyclopediaFilterItem>();
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=lEHjxPTs}Ally"), (Predicate<object>) (f => FactionManager.IsAlliedWithFaction((IFaction) f, Hero.MainHero.MapFaction))),
        new EncyclopediaFilterItem(new TextObject("{=sPmQz21k}Enemy"), (Predicate<object>) (f => FactionManager.IsAtWarAgainstFaction((IFaction) f, Hero.MainHero.MapFaction) && !((IFaction) f).IsBanditFaction)),
        new EncyclopediaFilterItem(new TextObject("{=3PzgpFGq}Neutral"), (Predicate<object>) (f => FactionManager.IsNeutralWithFaction((IFaction) f, Hero.MainHero.MapFaction)))
      }, new TextObject("{=L7wn49Uz}Diplomacy")));
      return (IEnumerable<EncyclopediaFilterGroup>) encyclopediaFilterGroupList;
    }

    protected override IEnumerable<EncyclopediaSortController> InitializeSortControllers()
    {
      return (IEnumerable<EncyclopediaSortController>) new List<EncyclopediaSortController>()
      {
        new EncyclopediaSortController(GameTexts.FindText("str_total_strength"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaFactionPage.EncyclopediaListKingdomTotalStrengthComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_fiefs"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaFactionPage.EncyclopediaListKingdomFiefsComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_clans"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaFactionPage.EncyclopediaListKingdomClanComparer())
      };
    }

    private class EncyclopediaListKingdomTotalStrengthComparer : 
      DefaultEncyclopediaFactionPage.EncyclopediaListKingdomComparer
    {
      private static Func<Kingdom, Kingdom, int> _comparison = (Func<Kingdom, Kingdom, int>) ((k1, k2) => k1.TotalStrength.CompareTo(k2.TotalStrength));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareKingdoms(x, y, DefaultEncyclopediaFactionPage.EncyclopediaListKingdomTotalStrengthComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Kingdom kingdom)
          return ((int) kingdom.TotalStrength).ToString();
        Debug.FailedAssert("Unable to get the total strength of a non-kingdom object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaFactionPage.cs", nameof (GetComparedValueText), 107);
        return "";
      }
    }

    private class EncyclopediaListKingdomFiefsComparer : 
      DefaultEncyclopediaFactionPage.EncyclopediaListKingdomComparer
    {
      private static Func<Kingdom, Kingdom, int> _comparison = (Func<Kingdom, Kingdom, int>) ((k1, k2) => k1.Fiefs.Count.CompareTo(k2.Fiefs.Count));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareKingdoms(x, y, DefaultEncyclopediaFactionPage.EncyclopediaListKingdomFiefsComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Kingdom kingdom)
          return kingdom.Fiefs.Count.ToString();
        Debug.FailedAssert("Unable to get the fief count from a non-kingdom object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaFactionPage.cs", nameof (GetComparedValueText), 128);
        return "";
      }
    }

    private class EncyclopediaListKingdomClanComparer : 
      DefaultEncyclopediaFactionPage.EncyclopediaListKingdomComparer
    {
      private static Func<Kingdom, Kingdom, int> _comparison = (Func<Kingdom, Kingdom, int>) ((k1, k2) => k1.Clans.Count.CompareTo(k2.Clans.Count));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareKingdoms(x, y, DefaultEncyclopediaFactionPage.EncyclopediaListKingdomClanComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Kingdom kingdom)
          return kingdom.Clans.Count.ToString();
        Debug.FailedAssert("Unable to get the clan count from a non-kingdom object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaFactionPage.cs", nameof (GetComparedValueText), 149);
        return "";
      }
    }

    public abstract class EncyclopediaListKingdomComparer : EncyclopediaListItemComparerBase
    {
      public int CompareKingdoms(
        EncyclopediaListItem x,
        EncyclopediaListItem y,
        Func<Kingdom, Kingdom, int> comparison)
      {
        if (x.Object is Kingdom kingdom1 && y.Object is Kingdom kingdom2)
        {
          int num = comparison(kingdom1, kingdom2) * (this.IsAscending ? 1 : -1);
          return num == 0 ? this.ResolveEquality(x, y) : num;
        }
        Debug.FailedAssert("Both objects should be kingdoms.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaFactionPage.cs", nameof (CompareKingdoms), 164);
        return 0;
      }
    }
  }
}
