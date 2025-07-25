// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionOrderHotkeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class MissionOrderHotkeyCategory : GameKeyContext
  {
    public const string CategoryId = "MissionOrderHotkeyCategory";
    public const int ViewOrders = 67;
    public const int SelectOrder1 = 68;
    public const int SelectOrder2 = 69;
    public const int SelectOrder3 = 70;
    public const int SelectOrder4 = 71;
    public const int SelectOrder5 = 72;
    public const int SelectOrder6 = 73;
    public const int SelectOrder7 = 74;
    public const int SelectOrder8 = 75;
    public const int SelectOrderReturn = 76;
    public const int EveryoneHear = 77;
    public const int Group0Hear = 78;
    public const int Group1Hear = 79;
    public const int Group2Hear = 80;
    public const int Group3Hear = 81;
    public const int Group4Hear = 82;
    public const int Group5Hear = 83;
    public const int Group6Hear = 84;
    public const int Group7Hear = 85;
    public const int HoldOrder = 86;
    public const int SelectNextGroup = 87;
    public const int SelectPreviousGroup = 88;
    public const int ToggleGroupSelection = 89;

    public MissionOrderHotkeyCategory()
      : base(nameof (MissionOrderHotkeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(67, "ViewOrders", nameof (MissionOrderHotkeyCategory), InputKey.BackSpace, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(68, "SelectOrder1", nameof (MissionOrderHotkeyCategory), InputKey.F1, InputKey.ControllerRLeft, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(69, "SelectOrder2", nameof (MissionOrderHotkeyCategory), InputKey.F2, InputKey.ControllerRDown, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(70, "SelectOrder3", nameof (MissionOrderHotkeyCategory), InputKey.F3, InputKey.ControllerRRight, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(71, "SelectOrder4", nameof (MissionOrderHotkeyCategory), InputKey.F4, InputKey.ControllerRUp, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(72, "SelectOrder5", nameof (MissionOrderHotkeyCategory), InputKey.F5, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(73, "SelectOrder6", nameof (MissionOrderHotkeyCategory), InputKey.F6, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(74, "SelectOrder7", nameof (MissionOrderHotkeyCategory), InputKey.F7, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(75, "SelectOrder8", nameof (MissionOrderHotkeyCategory), InputKey.F8, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(76, "SelectOrderReturn", nameof (MissionOrderHotkeyCategory), InputKey.F9, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(77, "EveryoneHear", nameof (MissionOrderHotkeyCategory), InputKey.D0, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(78, "Group0Hear", nameof (MissionOrderHotkeyCategory), InputKey.D1, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(79, "Group1Hear", nameof (MissionOrderHotkeyCategory), InputKey.D2, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(80, "Group2Hear", nameof (MissionOrderHotkeyCategory), InputKey.D3, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(81, "Group3Hear", nameof (MissionOrderHotkeyCategory), InputKey.D4, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(82, "Group4Hear", nameof (MissionOrderHotkeyCategory), InputKey.D5, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(83, "Group5Hear", nameof (MissionOrderHotkeyCategory), InputKey.D6, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(84, "Group6Hear", nameof (MissionOrderHotkeyCategory), InputKey.D7, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(85, "Group7Hear", nameof (MissionOrderHotkeyCategory), InputKey.D8, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(86, "HoldOrder", nameof (MissionOrderHotkeyCategory), InputKey.Invalid, InputKey.ControllerLBumper, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(87, "SelectNextGroup", nameof (MissionOrderHotkeyCategory), InputKey.Invalid, InputKey.ControllerLRight, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(88, "SelectPreviousGroup", nameof (MissionOrderHotkeyCategory), InputKey.Invalid, InputKey.ControllerLLeft, GameKeyMainCategories.OrderMenuCategory));
      this.RegisterGameKey(new GameKey(89, "ToggleGroupSelection", nameof (MissionOrderHotkeyCategory), InputKey.Invalid, InputKey.ControllerLDown, GameKeyMainCategories.OrderMenuCategory));
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
