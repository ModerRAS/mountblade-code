// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.GameOver.GameOverStatCategoryVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.GameOver
{
  public class GameOverStatCategoryVM : ViewModel
  {
    private readonly StatCategory _category;
    private readonly Action<GameOverStatCategoryVM> _onSelect;
    private string _name;
    private string _id;
    private bool _isSelected;
    private MBBindingList<GameOverStatItemVM> _items;

    public GameOverStatCategoryVM(StatCategory category, Action<GameOverStatCategoryVM> onSelect)
    {
      this._category = category;
      this._onSelect = onSelect;
      this.Items = new MBBindingList<GameOverStatItemVM>();
      this.ID = category.ID;
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Items.Clear();
      this.Name = GameTexts.FindText("str_game_over_stat_category", this._category.ID).ToString();
      foreach (StatItem statItem in this._category.Items)
        this.Items.Add(new GameOverStatItemVM(statItem));
    }

    public void ExecuteSelectCategory()
    {
      Action<GameOverStatCategoryVM> onSelect = this._onSelect;
      if (onSelect == null)
        return;
      onSelect.DynamicInvokeWithLog((object) this);
    }

    [DataSourceProperty]
    public string Name
    {
      get => this._name;
      set
      {
        if (!(value != this._name))
          return;
        this._name = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Name));
      }
    }

    [DataSourceProperty]
    public string ID
    {
      get => this._id;
      set
      {
        if (!(value != this._id))
          return;
        this._id = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ID));
      }
    }

    [DataSourceProperty]
    public bool IsSelected
    {
      get => this._isSelected;
      set
      {
        if (value == this._isSelected)
          return;
        this._isSelected = value;
        this.OnPropertyChangedWithValue(value, nameof (IsSelected));
      }
    }

    [DataSourceProperty]
    public MBBindingList<GameOverStatItemVM> Items
    {
      get => this._items;
      set
      {
        if (value == this._items)
          return;
        this._items = value;
        this.OnPropertyChangedWithValue<MBBindingList<GameOverStatItemVM>>(value, nameof (Items));
      }
    }
  }
}
