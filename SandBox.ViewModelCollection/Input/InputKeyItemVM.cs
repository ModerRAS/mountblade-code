// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Input.InputKeyItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Input
{
  public class InputKeyItemVM : ViewModel
  {
    private bool _isVisibleToConsoleOnly;
    private TextObject _forcedName;
    private string _forcedID;
    private bool? _forcedVisibility;
    private string _keyID;
    private string _keyName;
    private bool _isVisible;

    public GameKey GameKey { get; private set; }

    public HotKey HotKey { get; private set; }

    private InputKeyItemVM()
    {
      TaleWorlds.InputSystem.Input.OnGamepadActiveStateChanged += new Action(this.OnGamepadActiveStateChanged);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      TaleWorlds.InputSystem.Input.OnGamepadActiveStateChanged -= new Action(this.OnGamepadActiveStateChanged);
    }

    private void OnGamepadActiveStateChanged() => this.ForceRefresh();

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.ForceRefresh();
    }

    public void SetForcedVisibility(bool? isVisible)
    {
      this._forcedVisibility = isVisible;
      this.UpdateVisibility();
    }

    private void ForceRefresh()
    {
      this.UpdateVisibility();
      if (this.GameKey != null)
      {
        this.KeyID = TaleWorlds.InputSystem.Input.IsGamepadActive ? this.GameKey.ControllerKey?.InputKey.ToString() : this.GameKey.KeyboardKey?.InputKey.ToString();
        this.KeyName = this._forcedName?.ToString() ?? Module.CurrentModule.GlobalTextManager.FindText("str_key_name", this.GameKey.GroupId + "_" + this.GameKey.StringId).ToString();
      }
      else if (this.HotKey != null)
      {
        this.KeyID = TaleWorlds.InputSystem.Input.IsGamepadActive ? this.HotKey.Keys.Find((Predicate<Key>) (k => k.IsControllerInput))?.InputKey.ToString() : this.HotKey.Keys.Find((Predicate<Key>) (k => !k.IsControllerInput))?.InputKey.ToString();
        this.KeyName = this._forcedName?.ToString() ?? Module.CurrentModule.GlobalTextManager.FindText("str_key_name", this.HotKey.GroupId + "_" + this.HotKey.Id).ToString();
      }
      else if (this._forcedID != null)
      {
        this.KeyID = this._forcedID;
        this.KeyName = this._forcedName?.ToString() ?? string.Empty;
      }
      else
      {
        this.KeyID = string.Empty;
        this.KeyName = string.Empty;
      }
    }

    private void UpdateVisibility()
    {
      this.IsVisible = ((int) this._forcedVisibility ?? (!this._isVisibleToConsoleOnly ? 1 : (TaleWorlds.InputSystem.Input.IsGamepadActive ? 1 : 0))) != 0;
    }

    public static InputKeyItemVM CreateFromGameKey(GameKey gameKey, bool isConsoleOnly)
    {
      InputKeyItemVM fromGameKey = new InputKeyItemVM();
      fromGameKey.GameKey = gameKey;
      fromGameKey._isVisibleToConsoleOnly = isConsoleOnly;
      fromGameKey.ForceRefresh();
      return fromGameKey;
    }

    public static InputKeyItemVM CreateFromHotKey(HotKey hotKey, bool isConsoleOnly)
    {
      InputKeyItemVM fromHotKey = new InputKeyItemVM();
      fromHotKey.HotKey = hotKey;
      fromHotKey._isVisibleToConsoleOnly = isConsoleOnly;
      fromHotKey.ForceRefresh();
      return fromHotKey;
    }

    public static InputKeyItemVM CreateFromHotKeyWithForcedName(
      HotKey hotKey,
      TextObject forcedName,
      bool isConsoleOnly)
    {
      InputKeyItemVM keyWithForcedName = new InputKeyItemVM();
      keyWithForcedName.HotKey = hotKey;
      keyWithForcedName._isVisibleToConsoleOnly = isConsoleOnly;
      keyWithForcedName._forcedName = forcedName;
      keyWithForcedName.ForceRefresh();
      return keyWithForcedName;
    }

    public static InputKeyItemVM CreateFromGameKeyWithForcedName(
      GameKey gameKey,
      TextObject forcedName,
      bool isConsoleOnly)
    {
      InputKeyItemVM keyWithForcedName = new InputKeyItemVM();
      keyWithForcedName.GameKey = gameKey;
      keyWithForcedName._isVisibleToConsoleOnly = isConsoleOnly;
      keyWithForcedName._forcedName = forcedName;
      keyWithForcedName.ForceRefresh();
      return keyWithForcedName;
    }

    public static InputKeyItemVM CreateFromForcedID(string forcedID, TextObject forcedName)
    {
      InputKeyItemVM fromForcedId = new InputKeyItemVM();
      fromForcedId._forcedID = forcedID;
      fromForcedId._forcedName = forcedName;
      fromForcedId.ForceRefresh();
      return fromForcedId;
    }

    [DataSourceProperty]
    public string KeyID
    {
      get => this._keyID;
      set
      {
        if (!(value != this._keyID))
          return;
        this._keyID = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (KeyID));
      }
    }

    [DataSourceProperty]
    public string KeyName
    {
      get => this._keyName;
      set
      {
        if (!(value != this._keyName))
          return;
        this._keyName = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (KeyName));
      }
    }

    [DataSourceProperty]
    public bool IsVisible
    {
      get => this._isVisible;
      set
      {
        if (value == this._isVisible)
          return;
        this._isVisible = value;
        this.OnPropertyChangedWithValue(value, nameof (IsVisible));
      }
    }
  }
}
