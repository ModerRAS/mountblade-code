// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Inventory.InventoryItemType
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem.Inventory
{
  [Flags]
  public enum InventoryItemType
  {
    None = 0,
    Weapon = 1,
    Shield = 2,
    HeadArmor = 4,
    BodyArmor = 8,
    LegArmor = 16, // 0x00000010
    HandArmor = 32, // 0x00000020
    Horse = 64, // 0x00000040
    HorseHarness = 128, // 0x00000080
    Goods = 256, // 0x00000100
    Book = 512, // 0x00000200
    Animal = 1024, // 0x00000400
    Cape = 2048, // 0x00000800
    Banner = 4096, // 0x00001000
    HorseCategory = HorseHarness | Horse, // 0x000000C0
    Armors = Cape | HandArmor | LegArmor | BodyArmor | HeadArmor, // 0x0000083C
    Equipable = Armors | HorseCategory | Banner | Shield | Weapon, // 0x000018FF
    All = Armors | HorseCategory | Animal | Book | Goods | Shield | Weapon, // 0x00000FFF
  }
}
