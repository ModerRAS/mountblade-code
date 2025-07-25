// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SaveLoad.SavedGameModuleInfoVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.SaveLoad
{
  public class SavedGameModuleInfoVM : ViewModel
  {
    private string _definition;
    private string _seperator;
    private string _value;

    public SavedGameModuleInfoVM(string definition, string seperator, string value)
    {
      this.Definition = definition;
      this.Seperator = seperator;
      this.Value = value;
    }

    [DataSourceProperty]
    public string Definition
    {
      get => this._definition;
      set
      {
        if (!(value != this._definition))
          return;
        this._definition = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Definition));
      }
    }

    [DataSourceProperty]
    public string Seperator
    {
      get => this._seperator;
      set
      {
        if (!(value != this._seperator))
          return;
        this._seperator = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Seperator));
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
  }
}
