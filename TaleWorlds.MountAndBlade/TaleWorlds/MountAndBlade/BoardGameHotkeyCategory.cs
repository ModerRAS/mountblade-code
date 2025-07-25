// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BoardGameHotkeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class BoardGameHotkeyCategory : GameKeyContext
  {
    public const string CategoryId = "BoardGameHotkeyCategory";
    public const string BoardGamePawnSelect = "BoardGamePawnSelect";
    public const string BoardGamePawnDeselect = "BoardGamePawnDeselect";
    public const string BoardGameDragPreview = "BoardGameDragPreview";
    public const string BoardGameRollDice = "BoardGameRollDice";

    public BoardGameHotkeyCategory()
      : base(nameof (BoardGameHotkeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      List<Key> keys1 = new List<Key>()
      {
        new Key(InputKey.LeftMouseButton),
        new Key(InputKey.ControllerRDown)
      };
      List<Key> keys2 = new List<Key>()
      {
        new Key(InputKey.LeftMouseButton),
        new Key(InputKey.ControllerRDown)
      };
      List<Key> keys3 = new List<Key>()
      {
        new Key(InputKey.LeftMouseButton),
        new Key(InputKey.ControllerRDown)
      };
      List<Key> keys4 = new List<Key>()
      {
        new Key(InputKey.Space),
        new Key(InputKey.ControllerRBumper)
      };
      this.RegisterHotKey(new HotKey("BoardGamePawnSelect", nameof (BoardGameHotkeyCategory), keys1));
      this.RegisterHotKey(new HotKey("BoardGamePawnDeselect", nameof (BoardGameHotkeyCategory), keys2));
      this.RegisterHotKey(new HotKey("BoardGameDragPreview", nameof (BoardGameHotkeyCategory), keys3));
      this.RegisterHotKey(new HotKey("BoardGameRollDice", nameof (BoardGameHotkeyCategory), keys4));
    }

    private void RegisterGameKeys()
    {
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
