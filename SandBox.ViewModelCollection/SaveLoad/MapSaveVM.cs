// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SaveLoad.MapSaveVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection.SaveLoad
{
  public class MapSaveVM : ViewModel
  {
    private readonly Action<bool> _onActiveStateChange;
    private string _savingText;
    private bool _isActive;

    public MapSaveVM(Action<bool> onActiveStateChange)
    {
      this._onActiveStateChange = onActiveStateChange;
      CampaignEvents.OnSaveStartedEvent.AddNonSerializedListener((object) this, new Action(this.OnSaveStarted));
      CampaignEvents.OnSaveOverEvent.AddNonSerializedListener((object) this, new Action<bool, string>(this.OnSaveOver));
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      TextObject empty = TextObject.Empty;
      this.SavingText = new TextObject("{=cp2XDjeq}Saving...").ToString();
    }

    private void OnSaveOver(bool isSuccessful, string saveName)
    {
      this.IsActive = false;
      Action<bool> activeStateChange = this._onActiveStateChange;
      if (activeStateChange == null)
        return;
      activeStateChange(false);
    }

    private void OnSaveStarted()
    {
      this.IsActive = true;
      Action<bool> activeStateChange = this._onActiveStateChange;
      if (activeStateChange == null)
        return;
      activeStateChange(true);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      CampaignEvents.OnSaveStartedEvent.ClearListeners((object) this);
      CampaignEvents.OnSaveOverEvent.ClearListeners((object) this);
    }

    [DataSourceProperty]
    public bool IsActive
    {
      get => this._isActive;
      set
      {
        if (value == this._isActive)
          return;
        this._isActive = value;
        this.OnPropertyChangedWithValue(value, nameof (IsActive));
      }
    }

    [DataSourceProperty]
    public string SavingText
    {
      get => this._savingText;
      set
      {
        if (!(value != this._savingText))
          return;
        this._savingText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (SavingText));
      }
    }
  }
}
