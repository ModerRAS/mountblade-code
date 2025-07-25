// Decompiled with JetBrains decompiler
// Type: TaleWorlds.Engine.GauntletUI.UIConfig
// Assembly: TaleWorlds.Engine.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 09142970-CF52-41EE-A3E1-A44F7B1BD752
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.Engine.GauntletUI.dll

using System.Collections.Generic;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.Engine.GauntletUI
{
  public static class UIConfig
  {
    public static bool DoNotUseGeneratedPrefabs { get; set; }

    public static bool DebugModeEnabled { get; set; }

    public static bool GetIsUsingGeneratedPrefabs()
    {
      return !NativeConfig.GetUIDoNotUseGeneratedPrefabs && !UIConfig.DoNotUseGeneratedPrefabs;
    }

    public static bool GetIsHotReloadEnabled()
    {
      return NativeConfig.GetUIDebugMode || UIConfig.DebugModeEnabled;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_debug_mode", "ui")]
    public static string SetDebugMode(List<string> args)
    {
      string str = "Format is \"ui.set_debug_mode [1/0]\".";
      int result;
      if (args.Count != 1 || !int.TryParse(args[0], out result) || result != 1 && result != 0)
        return str;
      UIConfig.DebugModeEnabled = result == 1;
      return "Success.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("use_generated_prefabs", "ui")]
    public static string SetUsingGeneratedPrefabs(List<string> args)
    {
      string str = "Format is \"ui.use_generated_prefabs [1/0].\"";
      int result;
      if (args.Count != 1 || !int.TryParse(args[0], out result) || result != 1 && result != 0)
        return str;
      UIConfig.DoNotUseGeneratedPrefabs = result == 0;
      return "Success.";
    }
  }
}
