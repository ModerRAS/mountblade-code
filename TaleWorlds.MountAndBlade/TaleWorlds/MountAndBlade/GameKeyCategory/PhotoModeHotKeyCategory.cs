// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GameKeyCategory.PhotoModeHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine.Options;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade.GameKeyCategory
{
  public sealed class PhotoModeHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "PhotoModeHotKeyCategory";
    public const int HideUI = 90;
    public const int CameraRollLeft = 91;
    public const int CameraRollRight = 92;
    public const int ToggleCameraFollowMode = 95;
    public const int TakePicture = 93;
    public const int TakePictureWithAdditionalPasses = 94;
    public const int ToggleMouse = 96;
    public const int ToggleVignette = 97;
    public const int ToggleCharacters = 98;
    public const int Reset = 105;
    public const string FasterCamera = "FasterCamera";

    public PhotoModeHotKeyCategory()
      : base(nameof (PhotoModeHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("FasterCamera", nameof (PhotoModeHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.LeftShift),
        new Key(InputKey.ControllerRTrigger)
      }));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(90, "HideUI", nameof (PhotoModeHotKeyCategory), InputKey.H, InputKey.ControllerRUp, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(91, "CameraRollLeft", nameof (PhotoModeHotKeyCategory), InputKey.Q, InputKey.ControllerLBumper, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(92, "CameraRollRight", nameof (PhotoModeHotKeyCategory), InputKey.E, InputKey.ControllerRBumper, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(95, "ToggleCameraFollowMode", nameof (PhotoModeHotKeyCategory), InputKey.V, InputKey.ControllerRLeft, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(93, "TakePicture", nameof (PhotoModeHotKeyCategory), InputKey.Enter, InputKey.ControllerRDown, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(94, "TakePictureWithAdditionalPasses", nameof (PhotoModeHotKeyCategory), InputKey.BackSpace, InputKey.ControllerRBumper, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(96, "ToggleMouse", nameof (PhotoModeHotKeyCategory), InputKey.C, InputKey.ControllerLThumb, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(97, "ToggleVignette", nameof (PhotoModeHotKeyCategory), InputKey.X, InputKey.ControllerRThumb, GameKeyMainCategories.PhotoModeCategory));
      this.RegisterGameKey(new GameKey(98, "ToggleCharacters", nameof (PhotoModeHotKeyCategory), InputKey.B, InputKey.ControllerRRight, GameKeyMainCategories.PhotoModeCategory));
      if ((double) NativeOptions.GetConfig(NativeOptions.NativeOptionsType.EnableTouchpadMouse) != 0.0)
        this.RegisterGameKey(new GameKey(105, "Reset", nameof (PhotoModeHotKeyCategory), InputKey.T, InputKey.ControllerLOptionTap, GameKeyMainCategories.PhotoModeCategory));
      else
        this.RegisterGameKey(new GameKey(105, "Reset", nameof (PhotoModeHotKeyCategory), InputKey.T, InputKey.ControllerLOption, GameKeyMainCategories.PhotoModeCategory));
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
