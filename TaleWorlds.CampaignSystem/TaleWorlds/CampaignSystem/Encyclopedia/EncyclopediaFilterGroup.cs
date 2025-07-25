// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.EncyclopediaFilterGroup
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia
{
  public class EncyclopediaFilterGroup : ViewModel
  {
    public readonly List<EncyclopediaFilterItem> Filters;
    public readonly TextObject Name;

    public EncyclopediaFilterGroup(List<EncyclopediaFilterItem> filters, TextObject name)
    {
      this.Filters = filters;
      this.Name = name;
    }

    public System.Predicate<object> Predicate
    {
      get
      {
        return (System.Predicate<object>) (item =>
        {
          if (!this.Filters.Any<EncyclopediaFilterItem>((Func<EncyclopediaFilterItem, bool>) (f => f.IsActive)))
            return true;
          foreach (EncyclopediaFilterItem filter in this.Filters)
          {
            if (filter.IsActive && filter.Predicate(item))
              return true;
          }
          return false;
        });
      }
    }
  }
}
