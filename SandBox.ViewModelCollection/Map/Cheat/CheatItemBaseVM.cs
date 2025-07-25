// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.Cheat.CheatItemBaseVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Map.Cheat
{
  public abstract class CheatItemBaseVM : ViewModel
  {
    private string _name;

    public abstract void ExecuteAction();

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
  }
}
