// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.GameOver.GameOverStatItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.GameOver
{
  public class GameOverStatItemVM : ViewModel
  {
    private readonly StatItem _item;
    private string _definitionText;
    private string _valueText;
    private string _statTypeAsString;

    public GameOverStatItemVM(StatItem item)
    {
      this._item = item;
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.DefinitionText = GameTexts.FindText("str_game_over_stat_item", this._item.ID).ToString();
      this.ValueText = this._item.Value;
      this.StatTypeAsString = Enum.GetName(typeof (StatItem.StatType), (object) this._item.Type);
    }

    [DataSourceProperty]
    public string DefinitionText
    {
      get => this._definitionText;
      set
      {
        if (!(value != this._definitionText))
          return;
        this._definitionText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (DefinitionText));
      }
    }

    [DataSourceProperty]
    public string ValueText
    {
      get => this._valueText;
      set
      {
        if (!(value != this._valueText))
          return;
        this._valueText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ValueText));
      }
    }

    [DataSourceProperty]
    public string StatTypeAsString
    {
      get => this._statTypeAsString;
      set
      {
        if (!(value != this._statTypeAsString))
          return;
        this._statTypeAsString = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (StatTypeAsString));
      }
    }
  }
}
