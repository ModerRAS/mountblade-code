// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.PartyHotKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class PartyHotKeyCategory : GameKeyContext
  {
    public const string CategoryId = "PartyHotKeyCategory";
    public const string TakeAllTroops = "TakeAllTroops";
    public const string GiveAllTroops = "GiveAllTroops";
    public const string TakeAllPrisoners = "TakeAllPrisoners";
    public const string GiveAllPrisoners = "GiveAllPrisoners";
    public const string PopupItemPrimaryAction = "PopupItemPrimaryAction";
    public const string PopupItemSecondaryAction = "PopupItemSecondaryAction";
    public const string OpenUpgradePopup = "OpenUpgradePopup";
    public const string OpenRecruitPopup = "OpenRecruitPopup";

    public PartyHotKeyCategory()
      : base(nameof (PartyHotKeyCategory), 108)
    {
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      List<Key> keys1 = new List<Key>()
      {
        new Key(InputKey.Q),
        new Key(InputKey.ControllerLTrigger)
      };
      List<Key> keys2 = new List<Key>()
      {
        new Key(InputKey.E),
        new Key(InputKey.ControllerRTrigger)
      };
      List<Key> keys3 = new List<Key>()
      {
        new Key(InputKey.A),
        new Key(InputKey.ControllerLBumper)
      };
      List<Key> keys4 = new List<Key>()
      {
        new Key(InputKey.D),
        new Key(InputKey.ControllerRBumper)
      };
      List<Key> keys5 = new List<Key>()
      {
        new Key(InputKey.ControllerLBumper)
      };
      List<Key> keys6 = new List<Key>()
      {
        new Key(InputKey.ControllerRBumper)
      };
      List<Key> keys7 = new List<Key>()
      {
        new Key(InputKey.ControllerLThumb)
      };
      List<Key> keys8 = new List<Key>()
      {
        new Key(InputKey.ControllerRThumb)
      };
      this.RegisterHotKey(new HotKey("TakeAllTroops", nameof (PartyHotKeyCategory), keys1));
      this.RegisterHotKey(new HotKey("GiveAllTroops", nameof (PartyHotKeyCategory), keys2));
      this.RegisterHotKey(new HotKey("TakeAllPrisoners", nameof (PartyHotKeyCategory), keys3));
      this.RegisterHotKey(new HotKey("GiveAllPrisoners", nameof (PartyHotKeyCategory), keys4));
      this.RegisterHotKey(new HotKey("OpenUpgradePopup", nameof (PartyHotKeyCategory), keys7));
      this.RegisterHotKey(new HotKey("OpenRecruitPopup", nameof (PartyHotKeyCategory), keys8));
      this.RegisterHotKey(new HotKey("PopupItemPrimaryAction", nameof (PartyHotKeyCategory), keys5));
      this.RegisterHotKey(new HotKey("PopupItemSecondaryAction", nameof (PartyHotKeyCategory), keys6));
    }

    private void RegisterGameKeys()
    {
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
