// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MapHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine.Options;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class MapHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "MapHotKeyCategory";
    public const int QuickSave = 53;
    public const int PartyMoveUp = 49;
    public const int PartyMoveLeft = 52;
    public const int PartyMoveDown = 50;
    public const int PartyMoveRight = 51;
    public const int MapMoveUp = 45;
    public const int MapMoveDown = 46;
    public const int MapMoveLeft = 48;
    public const int MapMoveRight = 47;
    public const string MovementAxisX = "MapMovementAxisX";
    public const string MovementAxisY = "MapMovementAxisY";
    public const int MapFastMove = 54;
    public const int MapZoomIn = 55;
    public const int MapZoomOut = 56;
    public const int MapRotateLeft = 57;
    public const int MapRotateRight = 58;
    public const int MapCameraFollowMode = 63;
    public const int MapToggleFastForward = 64;
    public const int MapTrackSettlement = 65;
    public const int MapGoToEncylopedia = 66;
    public const string MapClick = "MapClick";
    public const string MapFollowModifier = "MapFollowModifier";
    public const string MapChangeCursorMode = "MapChangeCursorMode";
    public const int MapTimeStop = 59;
    public const int MapTimeNormal = 60;
    public const int MapTimeFastForward = 61;
    public const int MapTimeTogglePause = 62;

    public MapHotKeyCategory()
      : base(nameof (MapHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      List<Key> keys = new List<Key>()
      {
        new Key(InputKey.LeftMouseButton),
        new Key(InputKey.ControllerRDown)
      };
      if ((double) NativeOptions.GetConfig(NativeOptions.NativeOptionsType.EnableTouchpadMouse) != 0.0)
        keys.Add(new Key(InputKey.ControllerLOptionTap));
      this.RegisterHotKey(new HotKey("MapClick", nameof (MapHotKeyCategory), keys));
      this.RegisterHotKey(new HotKey("MapFollowModifier", nameof (MapHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.LeftAlt),
        new Key(InputKey.ControllerLBumper)
      }));
      this.RegisterHotKey(new HotKey("MapChangeCursorMode", nameof (MapHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.ControllerRRight)
      }));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(49, "PartyMoveUp", nameof (MapHotKeyCategory), InputKey.Up, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(50, "PartyMoveDown", nameof (MapHotKeyCategory), InputKey.Down, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(51, "PartyMoveRight", nameof (MapHotKeyCategory), InputKey.Right, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(52, "PartyMoveLeft", nameof (MapHotKeyCategory), InputKey.Left, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(53, "QuickSave", nameof (MapHotKeyCategory), InputKey.F5, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(54, "MapFastMove", nameof (MapHotKeyCategory), InputKey.LeftShift, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(55, "MapZoomIn", nameof (MapHotKeyCategory), InputKey.MouseScrollUp, InputKey.ControllerRTrigger, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(56, "MapZoomOut", nameof (MapHotKeyCategory), InputKey.MouseScrollDown, InputKey.ControllerLTrigger, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(57, "MapRotateLeft", nameof (MapHotKeyCategory), InputKey.Q, InputKey.Invalid, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(58, "MapRotateRight", nameof (MapHotKeyCategory), InputKey.E, InputKey.Invalid, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(59, "MapTimeStop", nameof (MapHotKeyCategory), InputKey.D1, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(60, "MapTimeNormal", nameof (MapHotKeyCategory), InputKey.D2, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(61, "MapTimeFastForward", nameof (MapHotKeyCategory), InputKey.D3, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(62, "MapTimeTogglePause", nameof (MapHotKeyCategory), InputKey.Space, InputKey.ControllerRLeft, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(63, "MapCameraFollowMode", nameof (MapHotKeyCategory), InputKey.Invalid, InputKey.ControllerLThumb, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(64, "MapToggleFastForward", nameof (MapHotKeyCategory), InputKey.Invalid, InputKey.ControllerRBumper, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(65, "MapTrackSettlement", nameof (MapHotKeyCategory), InputKey.Invalid, InputKey.ControllerRThumb, GameKeyMainCategories.CampaignMapCategory));
      this.RegisterGameKey(new GameKey(66, "MapGoToEncylopedia", nameof (MapHotKeyCategory), InputKey.Invalid, InputKey.ControllerLOption, GameKeyMainCategories.CampaignMapCategory));
    }

    private void RegisterGameAxisKeys()
    {
      GameKey gameKey1 = new GameKey(45, "MapMoveUp", nameof (MapHotKeyCategory), InputKey.W, GameKeyMainCategories.CampaignMapCategory);
      GameKey gameKey2 = new GameKey(46, "MapMoveDown", nameof (MapHotKeyCategory), InputKey.S, GameKeyMainCategories.CampaignMapCategory);
      GameKey gameKey3 = new GameKey(47, "MapMoveRight", nameof (MapHotKeyCategory), InputKey.D, GameKeyMainCategories.CampaignMapCategory);
      GameKey gameKey4 = new GameKey(48, "MapMoveLeft", nameof (MapHotKeyCategory), InputKey.A, GameKeyMainCategories.CampaignMapCategory);
      this.RegisterGameKey(gameKey1);
      this.RegisterGameKey(gameKey2);
      this.RegisterGameKey(gameKey4);
      this.RegisterGameKey(gameKey3);
      this.RegisterGameAxisKey(new GameAxisKey("MapMovementAxisX", InputKey.ControllerLStick, gameKey3, gameKey4));
      this.RegisterGameAxisKey(new GameAxisKey("MapMovementAxisY", InputKey.ControllerLStick, gameKey1, gameKey2, GameAxisKey.AxisType.Y));
    }
  }
}
