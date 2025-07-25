// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ConversationHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class ConversationHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "ConversationHotKeyCategory";
    public const string ContinueKey = "ContinueKey";
    public const string ContinueClick = "ContinueClick";

    public ConversationHotKeyCategory()
      : base(nameof (ConversationHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("ContinueKey", nameof (ConversationHotKeyCategory), new List<Key>()
      {
        new Key(InputKey.Space),
        new Key(InputKey.Enter),
        new Key(InputKey.NumpadEnter),
        new Key(InputKey.ControllerRDown)
      }));
      this.RegisterHotKey(new HotKey("ContinueClick", nameof (ConversationHotKeyCategory), InputKey.LeftMouseButton));
    }

    private void RegisterGameKeys()
    {
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
