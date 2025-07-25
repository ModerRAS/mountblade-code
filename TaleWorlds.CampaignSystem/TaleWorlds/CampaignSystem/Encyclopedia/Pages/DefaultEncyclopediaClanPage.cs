// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.Pages.DefaultEncyclopediaClanPage
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
  [EncyclopediaModel(new Type[] {typeof (Clan)})]
  public class DefaultEncyclopediaClanPage : EncyclopediaPage
  {
    public DefaultEncyclopediaClanPage() => this.HomePageOrderIndex = 500;

    protected override IEnumerable<EncyclopediaListItem> InitializeListItems()
    {
      DefaultEncyclopediaClanPage encyclopediaClanPage = this;
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        if (encyclopediaClanPage.IsValidEncyclopediaItem((object) nonBanditFaction))
          yield return new EncyclopediaListItem((object) nonBanditFaction, nonBanditFaction.Name.ToString(), "", nonBanditFaction.StringId, encyclopediaClanPage.GetIdentifier(typeof (Clan)), true);
      }
    }

    protected override IEnumerable<EncyclopediaFilterGroup> InitializeFilterItems()
    {
      List<EncyclopediaFilterGroup> encyclopediaFilterGroupList = new List<EncyclopediaFilterGroup>();
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=QwpHoMJu}Minor"), (Predicate<object>) (f => ((IFaction) f).IsMinorFaction))
      }, new TextObject("{=zMMqgxb1}Type")));
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=lEHjxPTs}Ally"), (Predicate<object>) (f => FactionManager.IsAlliedWithFaction((IFaction) f, Hero.MainHero.MapFaction))),
        new EncyclopediaFilterItem(new TextObject("{=sPmQz21k}Enemy"), (Predicate<object>) (f => FactionManager.IsAtWarAgainstFaction((IFaction) f, Hero.MainHero.MapFaction) && !((IFaction) f).IsBanditFaction)),
        new EncyclopediaFilterItem(new TextObject("{=3PzgpFGq}Neutral"), (Predicate<object>) (f => FactionManager.IsNeutralWithFaction((IFaction) f, Hero.MainHero.MapFaction)))
      }, new TextObject("{=L7wn49Uz}Diplomacy")));
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
      {
        new EncyclopediaFilterItem(new TextObject("{=SlubkZ1A}Eliminated"), (Predicate<object>) (f => ((IFaction) f).IsEliminated)),
        new EncyclopediaFilterItem(new TextObject("{=YRbSBxqT}Active"), (Predicate<object>) (f => !((IFaction) f).IsEliminated))
      }, new TextObject("{=DXczLzml}Status")));
      List<EncyclopediaFilterItem> filters = new List<EncyclopediaFilterItem>();
      foreach (CultureObject cultureObject in Game.Current.ObjectManager.GetObjectTypeList<CultureObject>().OrderByDescending<CultureObject, bool>((Func<CultureObject, bool>) (x => !x.IsMainCulture)).ThenBy<CultureObject, string>((Func<CultureObject, string>) (f => f.Name.ToString())).ToList<CultureObject>())
      {
        CultureObject culture = cultureObject;
        if (culture.StringId != "neutral_culture" && !culture.IsBandit)
          filters.Add(new EncyclopediaFilterItem(culture.Name, (Predicate<object>) (c => ((IFaction) c).Culture == culture)));
      }
      encyclopediaFilterGroupList.Add(new EncyclopediaFilterGroup(filters, GameTexts.FindText("str_culture")));
      return (IEnumerable<EncyclopediaFilterGroup>) encyclopediaFilterGroupList;
    }

    protected override IEnumerable<EncyclopediaSortController> InitializeSortControllers()
    {
      return (IEnumerable<EncyclopediaSortController>) new List<EncyclopediaSortController>()
      {
        new EncyclopediaSortController(new TextObject("{=qtII2HbK}Wealth"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaClanPage.EncyclopediaListClanWealthComparer()),
        new EncyclopediaSortController(new TextObject("{=cc1d7mkq}Tier"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaClanPage.EncyclopediaListClanTierComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_strength"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaClanPage.EncyclopediaListClanStrengthComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_fiefs"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaClanPage.EncyclopediaListClanFiefComparer()),
        new EncyclopediaSortController(GameTexts.FindText("str_members"), (EncyclopediaListItemComparerBase) new DefaultEncyclopediaClanPage.EncyclopediaListClanMemberComparer())
      };
    }

    public override string GetViewFullyQualifiedName() => "EncyclopediaClanPage";

    public override TextObject GetName() => GameTexts.FindText("str_clans");

    public override TextObject GetDescriptionText() => GameTexts.FindText("str_clan_description");

    public override string GetStringID() => "EncyclopediaClan";

    public override MBObjectBase GetObject(string typeName, string stringID)
    {
      return (MBObjectBase) Campaign.Current.CampaignObjectManager.Find<Clan>(stringID);
    }

    public override bool IsValidEncyclopediaItem(object o) => o is IFaction;

    private class EncyclopediaListClanWealthComparer : 
      DefaultEncyclopediaClanPage.EncyclopediaListClanComparer
    {
      private static Func<Clan, Clan, int> _comparison = (Func<Clan, Clan, int>) ((c1, c2) => c1.Gold.CompareTo(c2.Gold));

      private string GetClanWealthStatusText(Clan _clan)
      {
        string empty = string.Empty;
        return _clan.Leader.Gold >= 15000 ? (_clan.Leader.Gold >= 45000 ? (_clan.Leader.Gold >= 135000 ? (_clan.Leader.Gold >= 405000 ? new TextObject("{=oJmRg2ms}Very Rich").ToString() : new TextObject("{=UbRqC0Yz}Rich").ToString()) : new TextObject("{=averageWealthStatus}Average").ToString()) : new TextObject("{=poorWealthStatus}Poor").ToString()) : new TextObject("{=SixPXaNh}Very Poor").ToString();
      }

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareClans(x, y, DefaultEncyclopediaClanPage.EncyclopediaListClanWealthComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Clan _clan)
          return this.GetClanWealthStatusText(_clan);
        Debug.FailedAssert("Unable to get the gold of a non-clan object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaClanPage.cs", nameof (GetComparedValueText), 157);
        return "";
      }
    }

    private class EncyclopediaListClanTierComparer : 
      DefaultEncyclopediaClanPage.EncyclopediaListClanComparer
    {
      private static Func<Clan, Clan, int> _comparison = (Func<Clan, Clan, int>) ((c1, c2) => c1.Tier.CompareTo(c2.Tier));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareClans(x, y, DefaultEncyclopediaClanPage.EncyclopediaListClanTierComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Clan clan)
          return clan.Tier.ToString();
        Debug.FailedAssert("Unable to get the tier of a non-clan object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaClanPage.cs", nameof (GetComparedValueText), 178);
        return "";
      }
    }

    private class EncyclopediaListClanStrengthComparer : 
      DefaultEncyclopediaClanPage.EncyclopediaListClanComparer
    {
      private static Func<Clan, Clan, int> _comparison = (Func<Clan, Clan, int>) ((c1, c2) => c1.TotalStrength.CompareTo(c2.TotalStrength));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareClans(x, y, DefaultEncyclopediaClanPage.EncyclopediaListClanStrengthComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Clan clan)
          return ((int) clan.TotalStrength).ToString();
        Debug.FailedAssert("Unable to get the strength of a non-clan object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaClanPage.cs", nameof (GetComparedValueText), 199);
        return "";
      }
    }

    private class EncyclopediaListClanFiefComparer : 
      DefaultEncyclopediaClanPage.EncyclopediaListClanComparer
    {
      private static Func<Clan, Clan, int> _comparison = (Func<Clan, Clan, int>) ((c1, c2) => c1.Fiefs.Count.CompareTo(c2.Fiefs.Count));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareClans(x, y, DefaultEncyclopediaClanPage.EncyclopediaListClanFiefComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Clan clan)
          return clan.Fiefs.Count.ToString();
        Debug.FailedAssert("Unable to get the fief count of a non-clan object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaClanPage.cs", nameof (GetComparedValueText), 220);
        return "";
      }
    }

    private class EncyclopediaListClanMemberComparer : 
      DefaultEncyclopediaClanPage.EncyclopediaListClanComparer
    {
      private static Func<Clan, Clan, int> _comparison = (Func<Clan, Clan, int>) ((c1, c2) => c1.Heroes.Count.CompareTo(c2.Heroes.Count));

      public override int Compare(EncyclopediaListItem x, EncyclopediaListItem y)
      {
        return this.CompareClans(x, y, DefaultEncyclopediaClanPage.EncyclopediaListClanMemberComparer._comparison);
      }

      public override string GetComparedValueText(EncyclopediaListItem item)
      {
        if (item.Object is Clan clan)
          return clan.Heroes.Count.ToString();
        Debug.FailedAssert("Unable to get members of a non-clan object.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaClanPage.cs", nameof (GetComparedValueText), 241);
        return "";
      }
    }

    public abstract class EncyclopediaListClanComparer : EncyclopediaListItemComparerBase
    {
      public int CompareClans(
        EncyclopediaListItem x,
        EncyclopediaListItem y,
        Func<Clan, Clan, int> comparison)
      {
        if (x.Object is Clan clan1 && y.Object is Clan clan2)
        {
          int num = comparison(clan1, clan2) * (this.IsAscending ? 1 : -1);
          return num == 0 ? this.ResolveEquality(x, y) : num;
        }
        Debug.FailedAssert("Both objects should be clans.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Encyclopedia\\Pages\\DefaultEncyclopediaClanPage.cs", nameof (CompareClans), 256);
        return 0;
      }
    }
  }
}
