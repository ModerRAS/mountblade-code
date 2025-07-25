// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.SandBoxGauntletUICheats
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.CampaignSystem.ViewModelCollection.Inventory;
using TaleWorlds.Library;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI
{
  public static class SandBoxGauntletUICheats
  {
    [CommandLineFunctionality.CommandLineArgumentFunction("set_inventory_search_enabled", "ui")]
    public static string SetInventorySearchEnabled(List<string> args)
    {
      string str = "Format is \"ui.set_inventory_search_enabled [1/0]\".";
      if (!(ScreenManager.TopScreen is GauntletInventoryScreen topScreen))
        return "Inventory screen is not open!";
      int result;
      if (args.Count != 1 || !int.TryParse(args[0], out result) || result != 1 && result != 0)
        return str;
      FieldInfo field = typeof (GauntletInventoryScreen).GetField("_dataSource", BindingFlags.Instance | BindingFlags.NonPublic);
      SPInventoryVM spInventoryVm = (SPInventoryVM) field.GetValue((object) topScreen);
      spInventoryVm.IsSearchAvailable = result == 1;
      field.SetValue((object) topScreen, (object) spInventoryVm);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("reload_pieces", "crafting")]
    public static string ReloadCraftingPieces(List<string> strings)
    {
      if (strings.Count != 2)
        return "Usage: crafting.reload_pieces {MODULE_NAME} {XML_NAME}";
      typeof (GauntletCraftingScreen).GetField("_reloadXmlPath", BindingFlags.Static | BindingFlags.NonPublic).SetValue((object) null, (object) new KeyValuePair<string, string>(strings[0], strings[1]));
      return "Reloading crafting pieces...";
    }
  }
}
