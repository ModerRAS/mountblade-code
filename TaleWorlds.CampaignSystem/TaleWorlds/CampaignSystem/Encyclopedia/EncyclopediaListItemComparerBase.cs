// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.EncyclopediaListItemComparerBase
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia
{
  public abstract class EncyclopediaListItemComparerBase : IComparer<EncyclopediaListItem>
  {
    protected readonly TextObject _emptyValue = new TextObject("{=4NaOKslb}-");
    protected readonly TextObject _missingValue = new TextObject("{=keqS2dGa}???");

    public bool IsAscending { get; private set; }

    public void SetSortOrder(bool isAscending) => this.IsAscending = isAscending;

    public void SwitchSortOrder() => this.IsAscending = !this.IsAscending;

    public void SetDefaultSortOrder() => this.IsAscending = false;

    public abstract int Compare(EncyclopediaListItem x, EncyclopediaListItem y);

    public abstract string GetComparedValueText(EncyclopediaListItem item);

    protected int ResolveEquality(EncyclopediaListItem x, EncyclopediaListItem y)
    {
      return x.Name.CompareTo(y.Name);
    }
  }
}
