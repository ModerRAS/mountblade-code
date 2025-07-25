// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GenericGameKeyContext
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class GenericGameKeyContext : GameKeyContext
  {
    public const string CategoryId = "Generic";
    public const int Up = 0;
    public const int Down = 1;
    public const int Right = 3;
    public const int Left = 2;
    public const string MovementAxisX = "MovementAxisX";
    public const string MovementAxisY = "MovementAxisY";
    public const string CameraAxisX = "CameraAxisX";
    public const string CameraAxisY = "CameraAxisY";
    public const int Leave = 4;
    public const int ShowIndicators = 5;

    public static GenericGameKeyContext Current { get; private set; }

    public GenericGameKeyContext()
      : base("Generic", 108)
    {
      GenericGameKeyContext.Current = this;
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
    }

    private void RegisterGameKeys()
    {
      GameKey gameKey1 = new GameKey(0, "Up", "Generic", InputKey.W, InputKey.ControllerLStickUp, GameKeyMainCategories.ActionCategory);
      GameKey gameKey2 = new GameKey(1, "Down", "Generic", InputKey.S, InputKey.ControllerLStickDown, GameKeyMainCategories.ActionCategory);
      GameKey gameKey3 = new GameKey(2, "Left", "Generic", InputKey.A, InputKey.ControllerLStickLeft, GameKeyMainCategories.ActionCategory);
      GameKey gameKey4 = new GameKey(3, "Right", "Generic", InputKey.D, InputKey.ControllerLStickRight, GameKeyMainCategories.ActionCategory);
      this.RegisterGameKey(gameKey1);
      this.RegisterGameKey(gameKey2);
      this.RegisterGameKey(gameKey3);
      this.RegisterGameKey(gameKey4);
      this.RegisterGameKey(new GameKey(4, "Leave", "Generic", InputKey.Tab, InputKey.ControllerRRight, GameKeyMainCategories.ActionCategory));
      this.RegisterGameKey(new GameKey(5, "ShowIndicators", "Generic", InputKey.LeftAlt, InputKey.ControllerLBumper, GameKeyMainCategories.ActionCategory));
      this.RegisterGameAxisKey(new GameAxisKey("MovementAxisX", InputKey.ControllerLStick, gameKey4, gameKey3));
      this.RegisterGameAxisKey(new GameAxisKey("MovementAxisY", InputKey.ControllerLStick, gameKey1, gameKey2, GameAxisKey.AxisType.Y));
      this.RegisterGameAxisKey(new GameAxisKey("CameraAxisX", InputKey.ControllerRStick, (GameKey) null, (GameKey) null));
      this.RegisterGameAxisKey(new GameAxisKey("CameraAxisY", InputKey.ControllerRStick, (GameKey) null, (GameKey) null, GameAxisKey.AxisType.Y));
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
