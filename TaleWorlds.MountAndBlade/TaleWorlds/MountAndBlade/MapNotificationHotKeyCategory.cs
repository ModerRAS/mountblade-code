// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MapNotificationHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class MapNotificationHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "MapNotificationHotKeyCategory";
    public const string RemoveNotification = "RemoveNotification";

    public MapNotificationHotKeyCategory()
      : base(nameof (MapNotificationHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("RemoveNotification", nameof (MapNotificationHotKeyCategory), InputKey.ControllerRUp));
    }
  }
}
