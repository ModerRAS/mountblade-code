// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.Pages.DefaultEncyclopediaConceptPage
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia.Pages
{
  [EncyclopediaModel(new Type[] {typeof (Concept)})]
  public class DefaultEncyclopediaConceptPage : EncyclopediaPage
  {
    public DefaultEncyclopediaConceptPage() => this.HomePageOrderIndex = 600;

    protected override IEnumerable<EncyclopediaListItem> InitializeListItems()
    {
      DefaultEncyclopediaConceptPage encyclopediaConceptPage = this;
      foreach (Concept concept in (List<Concept>) Concept.All)
        yield return new EncyclopediaListItem((object) concept, concept.Title.ToString(), concept.Description.ToString(), concept.StringId, encyclopediaConceptPage.GetIdentifier(typeof (Concept)), true);
    }

    protected override IEnumerable<EncyclopediaFilterGroup> InitializeFilterItems()
    {
      return (IEnumerable<EncyclopediaFilterGroup>) new List<EncyclopediaFilterGroup>()
      {
        new EncyclopediaFilterGroup(new List<EncyclopediaFilterItem>()
        {
          new EncyclopediaFilterItem(new TextObject("{=uauMia0D} Characters"), (Predicate<object>) (c => Concept.IsGroupMember("Characters", (Concept) c))),
          new EncyclopediaFilterItem(new TextObject("{=cwRkqIt4} Kingdoms"), (Predicate<object>) (c => Concept.IsGroupMember("Kingdoms", (Concept) c))),
          new EncyclopediaFilterItem(new TextObject("{=x6knoNnC} Clans"), (Predicate<object>) (c => Concept.IsGroupMember("Clans", (Concept) c))),
          new EncyclopediaFilterItem(new TextObject("{=GYzkb4iB} Parties"), (Predicate<object>) (c => Concept.IsGroupMember("Parties", (Concept) c))),
          new EncyclopediaFilterItem(new TextObject("{=u6GM5Spa} Armies"), (Predicate<object>) (c => Concept.IsGroupMember("Armies", (Concept) c))),
          new EncyclopediaFilterItem(new TextObject("{=zPYRGJtD} Troops"), (Predicate<object>) (c => Concept.IsGroupMember("Troops", (Concept) c))),
          new EncyclopediaFilterItem(new TextObject("{=3PUkH5Zf} Items"), (Predicate<object>) (c => Concept.IsGroupMember("Items", (Concept) c))),
          new EncyclopediaFilterItem(new TextObject("{=xKVBAL3m} Campaign Issues"), (Predicate<object>) (c => Concept.IsGroupMember("CampaignIssues", (Concept) c)))
        }, new TextObject("{=tBx7XXps}Types"))
      };
    }

    protected override IEnumerable<EncyclopediaSortController> InitializeSortControllers()
    {
      return (IEnumerable<EncyclopediaSortController>) new List<EncyclopediaSortController>();
    }

    public override string GetViewFullyQualifiedName() => "EncyclopediaConceptPage";

    public override TextObject GetName() => GameTexts.FindText("str_concepts");

    public override TextObject GetDescriptionText()
    {
      return GameTexts.FindText("str_concepts_description");
    }

    public override string GetStringID() => "EncyclopediaConcept";

    public override bool IsValidEncyclopediaItem(object o)
    {
      return o is Concept concept && concept.Title != null && concept.Description != null;
    }
  }
}
