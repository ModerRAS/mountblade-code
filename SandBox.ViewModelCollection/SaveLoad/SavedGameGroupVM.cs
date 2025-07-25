// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SaveLoad.SavedGameGroupVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.SaveLoad
{
  public class SavedGameGroupVM : ViewModel
  {
    private bool _isFilteredOut;
    private MBBindingList<SavedGameVM> _savedGamesList;
    private string _identifierID;

    public SavedGameGroupVM() => this.SavedGamesList = new MBBindingList<SavedGameVM>();

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.SavedGamesList.ApplyActionOnAllItems((Action<SavedGameVM>) (s => s.RefreshValues()));
    }

    [DataSourceProperty]
    public bool IsFilteredOut
    {
      get => this._isFilteredOut;
      set
      {
        if (value == this._isFilteredOut)
          return;
        this._isFilteredOut = value;
        this.OnPropertyChangedWithValue(value, nameof (IsFilteredOut));
      }
    }

    [DataSourceProperty]
    public MBBindingList<SavedGameVM> SavedGamesList
    {
      get => this._savedGamesList;
      set
      {
        if (value == this._savedGamesList)
          return;
        this._savedGamesList = value;
        this.OnPropertyChangedWithValue<MBBindingList<SavedGameVM>>(value, nameof (SavedGamesList));
      }
    }

    [DataSourceProperty]
    public string IdentifierID
    {
      get => this._identifierID;
      set
      {
        if (!(value != this._identifierID))
          return;
        this._identifierID = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (IdentifierID));
      }
    }
  }
}
