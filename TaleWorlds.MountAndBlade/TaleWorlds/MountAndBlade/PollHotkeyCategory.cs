// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.PollHotkeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class PollHotkeyCategory : GameKeyContext
  {
    public const string CategoryId = "PollHotkeyCategory";
    public const int AcceptPoll = 106;
    public const int DeclinePoll = 107;

    public PollHotkeyCategory()
      : base(nameof (PollHotkeyCategory), 108)
    {
      this.RegisterGameKeys();
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(106, "AcceptPoll", nameof (PollHotkeyCategory), InputKey.F10, InputKey.ControllerLBumper, GameKeyMainCategories.PollCategory));
      this.RegisterGameKey(new GameKey(107, "DeclinePoll", nameof (PollHotkeyCategory), InputKey.F11, InputKey.ControllerRBumper, GameKeyMainCategories.PollCategory));
    }
  }
}
