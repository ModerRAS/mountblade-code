// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.ICraftingCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CraftingSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface ICraftingCampaignBehavior : ICampaignBehavior
  {
    IReadOnlyDictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots> CraftingOrders { get; }

    IReadOnlyCollection<WeaponDesign> CraftingHistory { get; }

    void CompleteOrder(
      Town town,
      CraftingOrder craftingOrder,
      ItemObject craftedItem,
      Hero completerHero);

    ItemModifier GetCurrentItemModifier();

    void SetCurrentItemModifier(ItemModifier modifier);

    void SetCraftedWeaponName(ItemObject craftedWeaponItem, TextObject name);

    void GetOrderResult(
      CraftingOrder craftingOrder,
      ItemObject craftedItem,
      out bool isSucceed,
      out TextObject orderRemark,
      out TextObject orderResult,
      out int finalPrice);

    int GetCraftingDifficulty(WeaponDesign weaponDesign);

    bool CanHeroUsePart(Hero hero, CraftingPiece craftingPiece);

    int GetHeroCraftingStamina(Hero hero);

    void SetHeroCraftingStamina(Hero hero, int value);

    int GetMaxHeroCraftingStamina(Hero hero);

    void DoRefinement(Hero hero, Crafting.RefiningFormula refineFormula);

    void DoSmelting(Hero currentCraftingHero, EquipmentElement equipmentElement);

    ItemObject CreateCraftedWeaponInFreeBuildMode(
      Hero hero,
      WeaponDesign currentWeaponDesign,
      ItemModifier weaponModifier = null);

    ItemObject CreateCraftedWeaponInCraftingOrderMode(
      Hero crafterHero,
      CraftingOrder craftingOrder,
      WeaponDesign weaponDesign);

    bool IsOpened(CraftingPiece craftingPiece, CraftingTemplate craftingTemplate);

    void InitializeCraftingElements();

    CraftingOrder CreateCustomOrderForHero(
      Hero orderOwner,
      float orderDifficulty = -1f,
      WeaponDesign weaponDesign = null,
      CraftingTemplate craftingTemplate = null);

    void CancelCustomOrder(Town town, CraftingOrder craftingOrder);
  }
}
