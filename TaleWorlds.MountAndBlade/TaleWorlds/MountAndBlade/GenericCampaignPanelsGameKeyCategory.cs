// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GenericCampaignPanelsGameKeyCategory
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class GenericCampaignPanelsGameKeyCategory : GameKeyContext
  {
    public const string CategoryId = "GenericCampaignPanelsGameKeyCategory";
    public const string FiveStackModifier = "FiveStackModifier";
    public const string EntireStackModifier = "EntireStackModifier";
    public const int BannerWindow = 36;
    public const int CharacterWindow = 37;
    public const int InventoryWindow = 38;
    public const int EncyclopediaWindow = 39;
    public const int PartyWindow = 43;
    public const int KingdomWindow = 40;
    public const int ClanWindow = 41;
    public const int QuestsWindow = 42;
    public const int FacegenWindow = 44;

    public static GenericCampaignPanelsGameKeyCategory Current { get; private set; }

    public GenericCampaignPanelsGameKeyCategory(string categoryId = "GenericCampaignPanelsGameKeyCategory")
      : base(categoryId, 108)
    {
      GenericCampaignPanelsGameKeyCategory.Current = this;
      this.RegisterHotKeys();
      this.RegisterGameKeys();
      this.RegisterGameAxisKeys();
    }

    private void RegisterHotKeys()
    {
      this.RegisterHotKey(new HotKey("FiveStackModifier", nameof (GenericCampaignPanelsGameKeyCategory), new List<Key>()
      {
        new Key(InputKey.LeftShift),
        new Key(InputKey.RightShift)
      }));
      this.RegisterHotKey(new HotKey("EntireStackModifier", nameof (GenericCampaignPanelsGameKeyCategory), new List<Key>()
      {
        new Key(InputKey.LeftControl),
        new Key(InputKey.RightControl)
      }));
    }

    private void RegisterGameKeys()
    {
      this.RegisterGameKey(new GameKey(36, "BannerWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.B, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(37, "CharacterWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.C, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(38, "InventoryWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.I, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(39, "EncyclopediaWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.N, InputKey.ControllerLOption, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(40, "KingdomWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.K, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(41, "ClanWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.L, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(42, "QuestsWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.J, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(43, "PartyWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.P, GameKeyMainCategories.MenuShortcutCategory));
      this.RegisterGameKey(new GameKey(44, "FacegenWindow", nameof (GenericCampaignPanelsGameKeyCategory), InputKey.V, GameKeyMainCategories.MenuShortcutCategory));
    }

    private void RegisterGameAxisKeys()
    {
    }
  }
}
