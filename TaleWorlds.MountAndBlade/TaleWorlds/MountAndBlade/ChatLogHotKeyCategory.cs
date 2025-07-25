// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ChatLogHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class ChatLogHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "ChatLogHotKeyCategory";
    public const int InitiateAllChat = 6;
    public const int InitiateTeamChat = 7;
    public const int FinalizeChat = 8;
    public const string CycleChatTypes = "CycleChatTypes";
    public const string FinalizeChatAlternative = "FinalizeChatAlternative";
    public const string SendMessage = "SendMessage";

    public ChatLogHotKeyCategory()
      : base(nameof (ChatLogHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      List<Key> keys1 = new List<Key>()
      {
        new Key(InputKey.Tab),
        new Key(InputKey.ControllerRUp)
      };
      List<Key> keys2 = new List<Key>()
      {
        new Key(InputKey.NumpadEnter)
      };
      keys2.Add(new Key(InputKey.ControllerLOption));
      List<Key> keys3 = new List<Key>()
      {
        new Key(InputKey.ControllerRLeft)
      };
      this.RegisterHotKey(new HotKey("CycleChatTypes", nameof (ChatLogHotKeyCategory), keys1));
      this.RegisterHotKey(new HotKey("FinalizeChatAlternative", nameof (ChatLogHotKeyCategory), keys2));
      this.RegisterHotKey(new HotKey("SendMessage", nameof (ChatLogHotKeyCategory), keys3));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(6, "InitiateAllChat", nameof (ChatLogHotKeyCategory), InputKey.T, GameKeyMainCategories.ChatCategory));
      this.RegisterGameKey(new GameKey(7, "InitiateTeamChat", nameof (ChatLogHotKeyCategory), InputKey.Y, GameKeyMainCategories.ChatCategory));
      this.RegisterGameKey(new GameKey(8, "FinalizeChat", nameof (ChatLogHotKeyCategory), InputKey.Enter, InputKey.ControllerLOption, GameKeyMainCategories.ChatCategory));
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
