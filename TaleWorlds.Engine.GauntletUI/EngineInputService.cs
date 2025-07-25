// Decompiled with JetBrains decompiler
// Type: TaleWorlds.Engine.GauntletUI.EngineInputService
// Assembly: TaleWorlds.Engine.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 09142970-CF52-41EE-A3E1-A44F7B1BD752
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.Engine.GauntletUI.dll

using TaleWorlds.GauntletUI;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.Engine.GauntletUI
{
  public class EngineInputService : IInputService
  {
    private IInputContext _inputContext;
    private bool _mouseEnabled;
    private bool _keyboardEnabled;
    private bool _gamepadEnabled;

    public EngineInputService(IInputContext inputContext) => this._inputContext = inputContext;

    bool IInputService.MouseEnabled => this._mouseEnabled;

    bool IInputService.KeyboardEnabled => this._keyboardEnabled;

    bool IInputService.GamepadEnabled => this._gamepadEnabled;

    public void UpdateInputDevices(bool keyboardEnabled, bool mouseEnabled, bool gamepadEnabled)
    {
      this._mouseEnabled = mouseEnabled;
      this._keyboardEnabled = keyboardEnabled;
      this._gamepadEnabled = gamepadEnabled;
    }
  }
}
