// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CraftingHotkeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class CraftingHotkeyCategory : GameKeyContext
  {
    public const string CategoryId = "CraftingHotkeyCategory";
    public const string Zoom = "Zoom";
    public const string Rotate = "Rotate";
    public const string Ascend = "Ascend";
    public const string ResetCamera = "ResetCamera";
    public const string Copy = "Copy";
    public const string Paste = "Paste";
    public const string Exit = "Exit";
    public const string Confirm = "Confirm";
    public const string SwitchToPreviousTab = "SwitchToPreviousTab";
    public const string SwitchToNextTab = "SwitchToNextTab";
    public const string ControllerRotationAxisX = "CameraAxisX";
    public const string ControllerRotationAxisY = "CameraAxisY";
    public const int ControllerZoomIn = 55;
    public const int ControllerZoomOut = 56;

    public CraftingHotkeyCategory()
      : base(nameof (CraftingHotkeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      List<Key> keys1 = new List<Key>()
      {
        new Key(InputKey.Escape),
        new Key(InputKey.ControllerRRight)
      };
      List<Key> keys2 = new List<Key>()
      {
        new Key(InputKey.Space),
        new Key(InputKey.ControllerRLeft)
      };
      List<Key> keys3 = new List<Key>()
      {
        new Key(InputKey.Q),
        new Key(InputKey.ControllerLBumper)
      };
      List<Key> keys4 = new List<Key>()
      {
        new Key(InputKey.E),
        new Key(InputKey.ControllerRBumper)
      };
      this.RegisterHotKey(new HotKey("Exit", nameof (CraftingHotkeyCategory), keys1));
      this.RegisterHotKey(new HotKey("Confirm", nameof (CraftingHotkeyCategory), keys2));
      this.RegisterHotKey(new HotKey("SwitchToPreviousTab", nameof (CraftingHotkeyCategory), keys3));
      this.RegisterHotKey(new HotKey("SwitchToNextTab", nameof (CraftingHotkeyCategory), keys4));
      this.RegisterHotKey(new HotKey("Ascend", nameof (CraftingHotkeyCategory), InputKey.MiddleMouseButton));
      this.RegisterHotKey(new HotKey("Rotate", nameof (CraftingHotkeyCategory), InputKey.LeftMouseButton));
      this.RegisterHotKey(new HotKey("Zoom", nameof (CraftingHotkeyCategory), InputKey.RightMouseButton));
      this.RegisterHotKey(new HotKey("Copy", nameof (CraftingHotkeyCategory), InputKey.C));
      this.RegisterHotKey(new HotKey("Paste", nameof (CraftingHotkeyCategory), InputKey.V));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(55, "ControllerZoomIn", nameof (CraftingHotkeyCategory), InputKey.Invalid, InputKey.ControllerRTrigger));
      this.RegisterGameKey(new GameKey(56, "ControllerZoomOut", nameof (CraftingHotkeyCategory), InputKey.Invalid, InputKey.ControllerLTrigger));
    }

    private void RegisterGameAxisKeys()
    {
      GameAxisKey gameKey1 = GenericGameKeyContext.Current.RegisteredGameAxisKeys.First<GameAxisKey>((Func<GameAxisKey, bool>) (g => g.Id.Equals("CameraAxisX")));
      GameAxisKey gameKey2 = GenericGameKeyContext.Current.RegisteredGameAxisKeys.First<GameAxisKey>((Func<GameAxisKey, bool>) (g => g.Id.Equals("CameraAxisY")));
      this.RegisterGameAxisKey(gameKey1);
      this.RegisterGameAxisKey(gameKey2);
    }
  }
}
