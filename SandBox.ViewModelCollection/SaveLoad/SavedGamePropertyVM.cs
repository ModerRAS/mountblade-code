// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SaveLoad.SavedGamePropertyVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection.SaveLoad
{
  public class SavedGamePropertyVM : ViewModel
  {
    private TextObject _valueText = TextObject.Empty;
    private HintViewModel _hint;
    private string _propertyType;
    private string _value;

    public SavedGamePropertyVM(
      SavedGamePropertyVM.SavedGameProperty type,
      TextObject value,
      TextObject hint)
    {
      this.PropertyType = type.ToString();
      this._valueText = value;
      this.Hint = new HintViewModel(hint, (string) null);
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Value = this._valueText.ToString();
    }

    [DataSourceProperty]
    public HintViewModel Hint
    {
      get => this._hint;
      set
      {
        if (value == this._hint)
          return;
        this._hint = value;
        this.OnPropertyChangedWithValue<HintViewModel>(value, nameof (Hint));
      }
    }

    [DataSourceProperty]
    public string PropertyType
    {
      get => this._propertyType;
      set
      {
        if (!(value != this._propertyType))
          return;
        this._propertyType = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (PropertyType));
      }
    }

    [DataSourceProperty]
    public string Value
    {
      get => this._value;
      set
      {
        if (!(value != this._value))
          return;
        this._value = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Value));
      }
    }

    public enum SavedGameProperty
    {
      None = -1, // 0xFFFFFFFF
      Health = 0,
      Gold = 1,
      Influence = 2,
      PartySize = 3,
      Food = 4,
      Fiefs = 5,
    }
  }
}
