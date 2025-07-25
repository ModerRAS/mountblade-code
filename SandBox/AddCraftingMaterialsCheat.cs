// Decompiled with JetBrains decompiler
// Type: SandBox.AddCraftingMaterialsCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class AddCraftingMaterialsCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      for (CraftingMaterials craftingMaterial = CraftingMaterials.IronOre; craftingMaterial < CraftingMaterials.NumCraftingMats; ++craftingMaterial)
        PartyBase.MainParty.ItemRoster.AddToCounts(Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem(craftingMaterial), 10);
    }

    public override TextObject GetName()
    {
      return new TextObject("{=63jJ3GGY}Add 10 Crafting Materials Each");
    }
  }
}
