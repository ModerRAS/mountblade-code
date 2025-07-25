// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBScreen
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBScreen
  {
    [EngineMethod("on_exit_button_click", false)]
    void OnExitButtonClick();

    [EngineMethod("on_edit_mode_enter_press", false)]
    void OnEditModeEnterPress();

    [EngineMethod("on_edit_mode_enter_release", false)]
    void OnEditModeEnterRelease();
  }
}
