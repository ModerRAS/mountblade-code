// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ScoreboardHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class ScoreboardHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "ScoreboardHotKeyCategory";
    public const int ShowMouse = 35;
    public const string HoldShow = "HoldShow";
    public const string ToggleFastForward = "ToggleFastForward";
    public const string MenuShowContextMenu = "MenuShowContextMenu";

    public ScoreboardHotKeyCategory()
      : base(nameof (ScoreboardHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("ToggleFastForward", nameof (ScoreboardHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.F),
        new Key(InputKey.ControllerRUp)
      }));
      this.RegisterHotKey(new HotKey("MenuShowContextMenu", nameof (ScoreboardHotKeyCategory), InputKey.RightMouseButton));
      this.RegisterHotKey(new HotKey("HoldShow", nameof (ScoreboardHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.Tab),
        new Key(InputKey.ControllerRRight)
      }));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(35, "ShowMouse", nameof (ScoreboardHotKeyCategory), InputKey.MiddleMouseButton, InputKey.ControllerLThumb, GameKeyMainCategories.ActionCategory));
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
