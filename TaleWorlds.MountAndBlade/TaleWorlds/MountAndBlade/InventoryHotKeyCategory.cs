// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.InventoryHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class InventoryHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "InventoryHotKeyCategory";
    public const string SwitchAlternative = "SwitchAlternative";

    public InventoryHotKeyCategory()
      : base(nameof (InventoryHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("SwitchAlternative", nameof (InventoryHotKeyCategory), InputKey.LeftAlt));
    }

    private void RegisterGameKeys()
    {
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
