// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.Pages.DefaultEncyclopediaSettlementPage
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia.Pages
{
  [EncyclopediaModel(new Type[] {typeof (Settlement)})]
  public class DefaultEncyclopediaSettlementPage : EncyclopediaPage
  {
    public DefaultEncyclopediaSettlementPage() => this.HomePageOrderIndex = 100;

    protected override IEnumerable<EncyclopediaListItem> InitializeListItems()
    {
      DefaultEncyclopediaSettlementPage encyclopediaSettlementPage = this;
      foreach (Settlement settlement1 in (List<Settlement>) Settlement.All)
      {
        Settlement settlement = settlement1;
        if (encyclopediaSettlementPage.IsValidEncyclopediaItem((object) settlement))
          yield return new EncyclopediaListItem((object) settlement, settlement.Name.ToString(), "", settlement.StringId, encyclopediaSettlementPage.GetIdentifier(typeof (Settlement)), DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(settlement), (Action) (() => InformationManager.ShowTooltip(typeof (Settlement), (object) settlement, (object) false)));
      }
    }

    protected override IEnumerable<EncyclopediaFilterGroup> InitializeFilterItems()
    {
      List<EncyclopediaFilterGroup> encyclopediaFilterGroupList = new List<EncyclopediaFilterGroup>();
      List<EncyclopediaFilterItem> filters1 = new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=bOTQ7Pta}Town"), (Predicate<object>) (s => ((Settlement) s).IsTown)),
        new EncyclopediaFilterItem(new TextObject("{=sVXa3zFx}Castle"), (Predicate<object>) (s => ((Settlement) s).IsCastle)),
        new EncyclopediaFilterItem(new TextObject("{=Ua6CNLBZ}Village"), (Predicate<object>) (s => ((Settlement) s).IsVillage))
      };
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(filters1, new TextObject("{=zMMqgxb1}Type")));
      List<EncyclopediaFilterItem> filters2 = new List<EncyclopediaFilterItem>();
      foreach (CultureObject cultureObject in Game.Current.ObjectManager.GetObjectTypeList<CultureObject>().OrderByDescending<CultureObject, bool>((Func<CultureObject, bool>) (x => !x.IsMainCulture)).ThenBy<CultureObject, string>((Func<CultureObject, string>) (f => f.Name.ToString())).ToList<CultureObject>())
      {
        CultureObject culture = cultureObject;
        if (culture.StringId != "neutral_culture" && culture.CanHaveSettlement)
          filters2.Add(new EncyclopediaFilterItem(culture.Name, (Predicate<object>) (c => ((Settlement) c).Culture == culture)));
      }
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(filters2, GameTexts.FindText("str_culture")));
      return (IEnumerable<EncyclopediaFilterGroup>) encyclopediaFilterGroupList;
    }

    protected override IEnumerable<EncyclopediaSortController> InitializeSortControllers()
    {
      return (IEnumerable<EncyclopediaSortController>) new List<EncyclopediaSortController>()
      {
        new EncyclopediaSortController(GameTexts.FindText("str_garrison"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementGarrisonComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_food"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementFoodComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_security"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementSecurityComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_loyalty"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementLoyaltyComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_militia"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementMilitiaComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_prosperity"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementProsperityComparer())
      };
    }

    public override string GetViewFullyQualifiedName() => "EncyclopediaSettlementPage";

    public override TextObject GetName() => GameTexts.FindText("str_settlements");

    public override TextObject GetDescriptionText()
    {
      return GameTexts.FindText("str_settlement_description");
    }

    public override string GetStringID() => "EncyclopediaSettlement";

    public override bool IsValidEncyclopediaItem(object o)
    {
      if (!(o is Settlement settlement))
        return false;
      return settlement.IsFortification || settlement.IsVillage;
    }

    private static bool CanPlayerSeeValuesOf(Settlement settlement)
    {
      return Campaign.Current.Models.InformationRestrictionModel.DoesPlayerKnowDetailsOf(settlement);
    }

    private class EncyclopediaListSettlementGarrisonComparer : 
      DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer
    {
      private static int GarrisonComparison(Town t1, Town t2)
      {
        return t1.GarrisonParty.MemberRoster.TotalManCount.CompareTo(t2.GarrisonParty.MemberRoster.TotalManCount);
      }

      protected override bool CompareVisibility(
        Settlement s1,
        Settlement s2,
        out int comparisonResult)
      {
        if (s1.IsTown && s2.IsTown)
        {
          if (s1.Town.GarrisonParty == null && s2.Town.GarrisonParty == null)
          {
            comparisonResult = 0;
            return true;
          }
          if (s1.Town.GarrisonParty == null)
          {
            comparisonResult = this.IsAscending ? 2 : -2;
            return true;
          }
          if (s2.Town.GarrisonParty == null)
          {
            comparisonResult = this.IsAscending ? -2 : 2;
            return true;
          }
        }
        return base.CompareVisibility(s1, s2, out comparisonResult);
      }

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareFiefs(x, y, new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate(((DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer) this).CompareVisibility), new Func<Town, Town, int>(DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementGarrisonComparer.GarrisonComparison));
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Settlement settlement)
        {
          if (settlement.IsVillage)
            return this._emptyValue.ToString();
          return !DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(settlement) ? this._missingValue.ToString() : settlement.Town.GarrisonParty?.MemberRoster.TotalManCount.ToString() ?? 0.ToString();
        }
        Debug.FailedAssert("Unable to get the garrison of a non-settlement object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (GetComparedValueText), 159);
        return "";
      }
    }

    private class EncyclopediaListSettlementFoodComparer : 
      DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer
    {
      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareFiefs(x, y, new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate(((DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer) this).CompareVisibility), new Func<Town, Town, int>(DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementFoodComparer.FoodComparison));
      }

      private static int FoodComparison(Town t1, Town t2) => t1.FoodStocks.CompareTo(t2.FoodStocks);

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Settlement settlement)
        {
          if (settlement.IsVillage)
            return this._emptyValue.ToString();
          return !DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(settlement) ? this._missingValue.ToString() : ((int) settlement.Town.FoodStocks).ToString();
        }
        Debug.FailedAssert("Unable to get the food stocks of a non-settlement object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (GetComparedValueText), 194);
        return "";
      }
    }

    private class EncyclopediaListSettlementSecurityComparer : 
      DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer
    {
      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareFiefs(x, y, new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate(((DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer) this).CompareVisibility), new Func<Town, Town, int>(DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementSecurityComparer.SecurityComparison));
      }

      private static int SecurityComparison(Town t1, Town t2) => t1.Security.CompareTo(t2.Security);

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Settlement settlement)
        {
          if (settlement.IsVillage)
            return this._emptyValue.ToString();
          return !DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(settlement) ? this._missingValue.ToString() : ((int) settlement.Town.Security).ToString();
        }
        Debug.FailedAssert("Unable to get the security of a non-settlement object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (GetComparedValueText), 229);
        return "";
      }
    }

    private class EncyclopediaListSettlementLoyaltyComparer : 
      DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer
    {
      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareFiefs(x, y, new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate(((DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer) this).CompareVisibility), new Func<Town, Town, int>(DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementLoyaltyComparer.LoyaltyComparison));
      }

      private static int LoyaltyComparison(Town t1, Town t2) => t1.Loyalty.CompareTo(t2.Loyalty);

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Settlement settlement)
        {
          if (settlement.IsVillage)
            return this._emptyValue.ToString();
          return !DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(settlement) ? this._missingValue.ToString() : ((int) settlement.Town.Loyalty).ToString();
        }
        Debug.FailedAssert("Unable to get the loyalty of a non-settlement object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (GetComparedValueText), 264);
        return "";
      }
    }

    private class EncyclopediaListSettlementMilitiaComparer : 
      DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer
    {
      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareSettlements(x, y, new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate(((DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer) this).CompareVisibility), new Func<Settlement, Settlement, int>(DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementMilitiaComparer.MilitiaComparison));
      }

      private static int MilitiaComparison(Settlement t1, Settlement t2)
      {
        return t1.Militia.CompareTo(t2.Militia);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Settlement settlement)
          return !DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(settlement) ? this._missingValue.ToString() : ((int) settlement.Militia).ToString();
        Debug.FailedAssert("Unable to get the militia of a non-settlement object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (GetComparedValueText), 295);
        return "";
      }
    }

    private class EncyclopediaListSettlementProsperityComparer : 
      DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer
    {
      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareFiefs(x, y, new DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate(((DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer) this).CompareVisibility), new Func<Town, Town, int>(DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementProsperityComparer.ProsperityComparison));
      }

      private static int ProsperityComparison(Town t1, Town t2)
      {
        return t1.Prosperity.CompareTo(t2.Prosperity);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Settlement settlement)
        {
          if (settlement.IsVillage)
            return this._emptyValue.ToString();
          return !DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(settlement) ? this._missingValue.ToString() : ((int) settlement.Town.Prosperity).ToString();
        }
        Debug.FailedAssert("Unable to get the prosperity of a non-settlement object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (GetComparedValueText), 330);
        return "";
      }
    }

    public abstract class EncyclopediaListSettlementComparer : EncyclopediaListItemComparerBase
    {
      protected virtual bool CompareVisibility(
        Settlement s1,
        Settlement s2,
        out int comparisonResult)
      {
        bool flag1 = DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(s1);
        bool flag2 = DefaultEncyclopediaSettlementPage.CanPlayerSeeValuesOf(s2);
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

      protected int CompareSettlements(
        EncyclopediaListItem x,
        EncyclopediaListItem y,
        DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate visibilityComparison,
        Func<Settlement, Settlement, int> comparison)
      {
        if (x.Object is Settlement s1 && y.Object is Settlement s2)
        {
          int comparisonResult;
          if (visibilityComparison(s1, s2, out comparisonResult))
            return comparisonResult == 0 ? this.ResolveEquality(x, y) : comparisonResult * (this.IsAscending ? 1 : -1);
          int num = comparison(s1, s2) * (this.IsAscending ? 1 : -1);
          return num == 0 ? this.ResolveEquality(x, y) : num;
        }
        Debug.FailedAssert("Both objects should be settlements.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (CompareSettlements), 379);
        return 0;
      }

      protected int CompareFiefs(
        EncyclopediaListItem x,
        EncyclopediaListItem y,
        DefaultEncyclopediaSettlementPage.EncyclopediaListSettlementComparer.SettlementVisibilityComparerDelegate visibilityComparison,
        Func<Town, Town, int> comparison)
      {
        if (x.Object is Settlement s1 && y.Object is Settlement s2)
        {
          int num1 = s1.IsVillage.CompareTo(s2.IsVillage);
          if (num1 != 0)
            return num1;
          if (s1.IsVillage && s2.IsVillage)
            return this.ResolveEquality(x, y);
          int comparisonResult;
          if (visibilityComparison(s1, s2, out comparisonResult))
            return comparisonResult == 0 ? this.ResolveEquality(x, y) : comparisonResult * (this.IsAscending ? 1 : -1);
          int num2 = comparison(s1.Town, s2.Town) * (this.IsAscending ? 1 : -1);
          return num2 == 0 ? this.ResolveEquality(x, y) : num2;
        }
        Debug.FailedAssert("Unable to compare loyalty of non-fief (castle or town) objects.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaSettlementPage.cs", nameof (CompareFiefs), 403);
        return 0;
      }

      protected delegate bool SettlementVisibilityComparerDelegate(
        Settlement s1,
        Settlement s2,
        out int comparisonResult);
    }
  }
}
