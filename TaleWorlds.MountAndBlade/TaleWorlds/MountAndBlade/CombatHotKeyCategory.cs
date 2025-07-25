// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CombatHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class CombatHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "CombatHotKeyCategory";
    public const int MissionScreenHotkeyCameraZoomIn = 28;
    public const int MissionScreenHotkeyCameraZoomOut = 29;
    public const int Action = 13;
    public const int Jump = 14;
    public const int Crouch = 15;
    public const int Attack = 9;
    public const int Defend = 10;
    public const int Kick = 16;
    public const int ToggleWeaponMode = 17;
    public const int ToggleWalkMode = 30;
    public const int EquipWeapon1 = 18;
    public const int EquipWeapon2 = 19;
    public const int EquipWeapon3 = 20;
    public const int EquipWeapon4 = 21;
    public const int EquipPrimaryWeapon = 11;
    public const int EquipSecondaryWeapon = 12;
    public const int DropWeapon = 22;
    public const int SheathWeapon = 23;
    public const int Zoom = 24;
    public const int ViewCharacter = 25;
    public const int LockTarget = 26;
    public const int CameraToggle = 27;
    public const int Cheer = 31;
    public const int PushToTalk = 33;
    public const int EquipmentSwitch = 34;
    public const string DeploymentCameraIsActive = "DeploymentCameraIsActive";
    public const string ToggleZoom = "ToggleZoom";
    public const string ControllerEquipDropRRight = "ControllerEquipDropWeapon1";
    public const string ControllerEquipDropRUp = "ControllerEquipDropWeapon2";
    public const string ControllerEquipDropRLeft = "ControllerEquipDropWeapon3";
    public const string ControllerEquipDropRDown = "ControllerEquipDropWeapon4";
    public const string CheerBarkSelectFirstCategory = "CheerBarkSelectFirstCategory";
    public const string CheerBarkSelectSecondCategory = "CheerBarkSelectSecondCategory";
    public const string CheerBarkCloseMenu = "CheerBarkCloseMenu";
    public const string CheerBarkItem1 = "CheerBarkItem1";
    public const string CheerBarkItem2 = "CheerBarkItem2";
    public const string CheerBarkItem3 = "CheerBarkItem3";
    public const string CheerBarkItem4 = "CheerBarkItem4";
    public const string ForfeitSpawn = "ForfeitSpawn";

    public CombatHotKeyCategory()
      : base(nameof (CombatHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("DeploymentCameraIsActive", nameof (CombatHotKeyCategory), InputKey.MiddleMouseButton));
      this.RegisterHotKey(new HotKey("ToggleZoom", nameof (CombatHotKeyCategory), InputKey.ControllerRThumb));
      this.RegisterHotKey(new HotKey("ControllerEquipDropWeapon1", nameof (CombatHotKeyCategory), InputKey.ControllerRRight));
      this.RegisterHotKey(new HotKey("ControllerEquipDropWeapon2", nameof (CombatHotKeyCategory), InputKey.ControllerRUp));
      this.RegisterHotKey(new HotKey("ControllerEquipDropWeapon3", nameof (CombatHotKeyCategory), InputKey.ControllerRLeft));
      this.RegisterHotKey(new HotKey("ControllerEquipDropWeapon4", nameof (CombatHotKeyCategory), InputKey.ControllerRDown));
      this.RegisterHotKey(new HotKey("CheerBarkSelectFirstCategory", nameof (CombatHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.LeftMouseButton),
        new Key(InputKey.ControllerRLeft)
      }));
      this.RegisterHotKey(new HotKey("CheerBarkSelectSecondCategory", nameof (CombatHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.RightMouseButton),
        new Key(InputKey.ControllerRRight)
      }));
      this.RegisterHotKey(new HotKey("CheerBarkCloseMenu", nameof (CombatHotKeyCategory), InputKey.ControllerRThumb));
      this.RegisterHotKey(new HotKey("CheerBarkItem1", nameof (CombatHotKeyCategory), InputKey.ControllerRUp));
      this.RegisterHotKey(new HotKey("CheerBarkItem2", nameof (CombatHotKeyCategory), InputKey.ControllerRRight));
      this.RegisterHotKey(new HotKey("CheerBarkItem3", nameof (CombatHotKeyCategory), InputKey.ControllerRDown));
      this.RegisterHotKey(new HotKey("CheerBarkItem4", nameof (CombatHotKeyCategory), InputKey.ControllerRLeft));
      this.RegisterHotKey(new HotKey("ForfeitSpawn", nameof (CombatHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.X),
        new Key(InputKey.ControllerRLeft)
      }));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(9, "Attack", nameof (CombatHotKeyCategory), InputKey.LeftMouseButton, InputKey.ControllerRTrigger, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(10, "Defend", nameof (CombatHotKeyCategory), InputKey.RightMouseButton, InputKey.ControllerLTrigger, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(11, "EquipPrimaryWeapon", nameof (CombatHotKeyCategory), InputKey.MouseScrollUp, InputKey.Invalid, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(12, "EquipSecondaryWeapon", nameof (CombatHotKeyCategory), InputKey.MouseScrollDown, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(13, "Action", nameof (CombatHotKeyCategory), InputKey.F, InputKey.ControllerRUp, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(14, "Jump", nameof (CombatHotKeyCategory), InputKey.Space, InputKey.ControllerRDown, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(15, "Crouch", nameof (CombatHotKeyCategory), InputKey.Z, InputKey.ControllerLDown, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(16, "Kick", nameof (CombatHotKeyCategory), InputKey.E, InputKey.ControllerRLeft, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(17, "ToggleWeaponMode", nameof (CombatHotKeyCategory), InputKey.X, InputKey.Invalid, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(18, "EquipWeapon1", nameof (CombatHotKeyCategory), InputKey.Numpad1, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(19, "EquipWeapon2", nameof (CombatHotKeyCategory), InputKey.Numpad2, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(20, "EquipWeapon3", nameof (CombatHotKeyCategory), InputKey.Numpad3, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(21, "EquipWeapon4", nameof (CombatHotKeyCategory), InputKey.Numpad4, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(22, "DropWeapon", nameof (CombatHotKeyCategory), InputKey.G, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(23, "SheathWeapon", nameof (CombatHotKeyCategory), InputKey.BackSlash, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(24, "Zoom", nameof (CombatHotKeyCategory), InputKey.LeftShift, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(25, "ViewCharacter", nameof (CombatHotKeyCategory), InputKey.Tilde, InputKey.ControllerLLeft, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(26, "LockTarget", nameof (CombatHotKeyCategory), InputKey.MiddleMouseButton, InputKey.ControllerRThumb, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(27, "CameraToggle", nameof (CombatHotKeyCategory), InputKey.R, InputKey.ControllerLThumb, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(28, "MissionScreenHotkeyCameraZoomIn", nameof (CombatHotKeyCategory), InputKey.NumpadPlus, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(29, "MissionScreenHotkeyCameraZoomOut", nameof (CombatHotKeyCategory), InputKey.NumpadMinus, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(30, "ToggleWalkMode", nameof (CombatHotKeyCategory), InputKey.CapsLock, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(31, "Cheer", nameof (CombatHotKeyCategory), InputKey.O, InputKey.ControllerLUp, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(33, "PushToTalk", nameof (CombatHotKeyCategory), InputKey.V, InputKey.ControllerLRight, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(34, "EquipmentSwitch", nameof (CombatHotKeyCategory), InputKey.U, InputKey.ControllerRBumper, GameKeyMainCategories.ActionCategory));
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
