// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.SettlementNameplateEventItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class SettlementNameplateEventItemVM : ViewModel
  {
    public readonly SettlementNameplateEventItemVM.SettlementEventType EventType;
    private int _type;
    private string _additionalParameters;

    public SettlementNameplateEventItemVM(
      SettlementNameplateEventItemVM.SettlementEventType eventType)
    {
      this.EventType = eventType;
      this.Type = (int) eventType;
      this.AdditionalParameters = "";
    }

    public SettlementNameplateEventItemVM(string productionIconId = "")
    {
      this.EventType = SettlementNameplateEventItemVM.SettlementEventType.Production;
      this.Type = (int) this.EventType;
      this.AdditionalParameters = productionIconId;
    }

    [DataSourceProperty]
    public int Type
    {
      get => this._type;
      set
      {
        if (value == this._type)
          return;
        this._type = value;
        this.OnPropertyChangedWithValue(value, nameof (Type));
      }
    }

    [DataSourceProperty]
    public string AdditionalParameters
    {
      get => this._additionalParameters;
      set
      {
        if (!(value != this._additionalParameters))
          return;
        this._additionalParameters = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (AdditionalParameters));
      }
    }

    public enum SettlementEventType
    {
      Tournament,
      AvailableIssue,
      ActiveQuest,
      ActiveStoryQuest,
      TrackedIssue,
      TrackedStoryQuest,
      Production,
    }
  }
}
