// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.SmithingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class SmithingModel : GameModel
  {
    public abstract int GetCraftingPartDifficulty(CraftingPiece craftingPiece);

    public abstract int CalculateWeaponDesignDifficulty(WeaponDesign weaponDesign);

    public abstract ItemModifier GetCraftedWeaponModifier(
      WeaponDesign weaponDesign,
      Hero weaponsmith);

    public abstract IEnumerable<Crafting.RefiningFormula> GetRefiningFormulas(Hero weaponsmith);

    public abstract ItemObject GetCraftingMaterialItem(CraftingMaterials craftingMaterial);

    public abstract int[] GetSmeltingOutputForItem(ItemObject item);

    public abstract int GetSkillXpForRefining(ref Crafting.RefiningFormula refineFormula);

    public abstract int GetSkillXpForSmelting(ItemObject item);

    public abstract int GetSkillXpForSmithingInFreeBuildMode(ItemObject item);

    public abstract int GetSkillXpForSmithingInCraftingOrderMode(ItemObject item);

    public abstract int[] GetSmithingCostsForWeaponDesign(WeaponDesign weaponDesign);

    public abstract int GetEnergyCostForRefining(
      ref Crafting.RefiningFormula refineFormula,
      Hero hero);

    public abstract int GetEnergyCostForSmithing(ItemObject item, Hero hero);

    public abstract int GetEnergyCostForSmelting(ItemObject item, Hero hero);

    public abstract float ResearchPointsNeedForNewPart(int totalPartCount, int openedPartCount);

    public abstract int GetPartResearchGainForSmeltingItem(ItemObject item, Hero hero);

    public abstract int GetPartResearchGainForSmithingItem(
      ItemObject item,
      Hero hero,
      bool isFreeBuildMode);
  }
}
