// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FaceGenHotkeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Linq;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class FaceGenHotkeyCategory : GameKeyContext
  {
    public const string CategoryId = "FaceGenHotkeyCategory";
    public const string Zoom = "Zoom";
    public const string ControllerRotationAxis = "CameraAxisX";
    public const string ControllerCameraUpDownAxis = "CameraAxisY";
    public const string Rotate = "Rotate";
    public const string Ascend = "Ascend";
    public const string Copy = "Copy";
    public const int ControllerZoomIn = 55;
    public const string Paste = "Paste";
    public const int ControllerZoomOut = 56;

    public FaceGenHotkeyCategory()
      : base(nameof (FaceGenHotkeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("Ascend", nameof (FaceGenHotkeyCategory), InputKey.MiddleMouseButton));
      this.RegisterHotKey(new HotKey("Rotate", nameof (FaceGenHotkeyCategory), InputKey.LeftMouseButton));
      this.RegisterHotKey(new HotKey("Zoom", nameof (FaceGenHotkeyCategory), InputKey.RightMouseButton));
      this.RegisterHotKey(new HotKey("Copy", nameof (FaceGenHotkeyCategory), InputKey.C));
      this.RegisterHotKey(new HotKey("Paste", nameof (FaceGenHotkeyCategory), InputKey.V));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(55, "ControllerZoomIn", nameof (FaceGenHotkeyCategory), InputKey.Invalid, InputKey.ControllerRTrigger));
      this.RegisterGameKey(new GameKey(56, "ControllerZoomOut", nameof (FaceGenHotkeyCategory), InputKey.Invalid, InputKey.ControllerLTrigger));
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
