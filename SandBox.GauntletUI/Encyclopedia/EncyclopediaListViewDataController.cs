// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Encyclopedia.EncyclopediaListViewDataController
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System.Collections.Generic;
using System.Collections.ObjectModel;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.List;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Pages;
using TaleWorlds.Core.ViewModelCollection.Selector;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.GauntletUI.Encyclopedia
{
  public class EncyclopediaListViewDataController
  {
    private Dictionary<EncyclopediaPage, EncyclopediaListViewDataController.EncyclopediaListViewData> _listData;

    public EncyclopediaListViewDataController()
    {
      this._listData = new Dictionary<EncyclopediaPage, EncyclopediaListViewDataController.EncyclopediaListViewData>();
      foreach (EncyclopediaPage encyclopediaPage in Campaign.Current.EncyclopediaManager.GetEncyclopediaPages())
      {
        if (!this._listData.ContainsKey(encyclopediaPage))
          this._listData.Add(encyclopediaPage, new EncyclopediaListViewDataController.EncyclopediaListViewData(new MBBindingList<EncyclopediaFilterGroupVM>(), 0, "", false));
      }
    }

    public void SaveListData(EncyclopediaListVM list, string id)
    {
      if (list == null || !this._listData.ContainsKey(list.Page))
        return;
      int num1 = ((SelectorVM<EncyclopediaListSelectorItemVM>) ((EncyclopediaPageVM) list).SortController?.SortSelection)?.SelectedIndex ?? 0;
      Dictionary<EncyclopediaPage, EncyclopediaListViewDataController.EncyclopediaListViewData> listData = this._listData;
      EncyclopediaPage page = list.Page;
      MBBindingList<EncyclopediaFilterGroupVM> filterGroups = ((EncyclopediaPageVM) list).FilterGroups;
      int selectedSortIndex = num1;
      string lastSelectedItemId = id;
      EncyclopediaListSortControllerVM sortController = ((EncyclopediaPageVM) list).SortController;
      int num2 = sortController != null ? (sortController.GetSortOrder() ? 1 : 0) : 0;
      EncyclopediaListViewDataController.EncyclopediaListViewData encyclopediaListViewData = new EncyclopediaListViewDataController.EncyclopediaListViewData(filterGroups, selectedSortIndex, lastSelectedItemId, num2 != 0);
      listData[page] = encyclopediaListViewData;
    }

    public void LoadListData(EncyclopediaListVM list)
    {
      if (list == null || !this._listData.ContainsKey(list.Page))
        return;
      EncyclopediaListViewDataController.EncyclopediaListViewData encyclopediaListViewData = this._listData[list.Page];
      ((EncyclopediaPageVM) list).SortController?.SetSortSelection(encyclopediaListViewData.SelectedSortIndex);
      ((EncyclopediaPageVM) list).SortController?.SetSortOrder(encyclopediaListViewData.IsAscending);
      list.CopyFiltersFrom(encyclopediaListViewData.Filters);
      list.LastSelectedItemId = encyclopediaListViewData.LastSelectedItemId;
    }

    private readonly struct EncyclopediaListViewData
    {
      public readonly Dictionary<EncyclopediaFilterItem, bool> Filters;
      public readonly int SelectedSortIndex;
      public readonly string LastSelectedItemId;
      public readonly bool IsAscending;

      public EncyclopediaListViewData(
        MBBindingList<EncyclopediaFilterGroupVM> filters,
        int selectedSortIndex,
        string lastSelectedItemId,
        bool isAscending)
      {
        Dictionary<EncyclopediaFilterItem, bool> dictionary = new Dictionary<EncyclopediaFilterItem, bool>();
        foreach (EncyclopediaFilterGroupVM filter1 in (Collection<EncyclopediaFilterGroupVM>) filters)
        {
          foreach (EncyclopediaListFilterVM filter2 in (Collection<EncyclopediaListFilterVM>) filter1.Filters)
          {
            if (!dictionary.ContainsKey(filter2.Filter))
              dictionary.Add(filter2.Filter, filter2.IsSelected);
          }
        }
        this.Filters = dictionary;
        this.SelectedSortIndex = selectedSortIndex;
        this.LastSelectedItemId = lastSelectedItemId;
        this.IsAscending = isAscending;
      }
    }
  }
}
