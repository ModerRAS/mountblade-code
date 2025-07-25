// Decompiled with JetBrains decompiler
// Type: Helpers.ItemHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class ItemHelper
  {
    public static bool IsWeaponComparableWithUsage(ItemObject item, string comparedUsageId)
    {
      for (int index = 0; index < item.Weapons.Count; ++index)
      {
        if (item.Weapons[index].WeaponDescriptionId == comparedUsageId || comparedUsageId == "OneHandedBastardSword" && item.Weapons[index].WeaponDescriptionId == "OneHandedSword" || comparedUsageId == "OneHandedSword" && item.Weapons[index].WeaponDescriptionId == "OneHandedBastardSword")
          return true;
      }
      return false;
    }

    public static bool IsWeaponComparableWithUsage(
      ItemObject item,
      string comparedUsageId,
      out int comparableUsageIndex)
    {
      comparableUsageIndex = -1;
      for (int index = 0; index < item.Weapons.Count; ++index)
      {
        if (item.Weapons[index].WeaponDescriptionId == comparedUsageId || comparedUsageId == "OneHandedBastardSword" && item.Weapons[index].WeaponDescriptionId == "OneHandedSword" || comparedUsageId == "OneHandedSword" && item.Weapons[index].WeaponDescriptionId == "OneHandedBastardSword")
        {
          comparableUsageIndex = index;
          return true;
        }
      }
      return false;
    }

    public static bool CheckComparability(ItemObject item, ItemObject comparedItem)
    {
      if (item == null || comparedItem == null)
        return false;
      if (item.PrimaryWeapon == null || comparedItem.PrimaryWeapon == null || (!item.PrimaryWeapon.IsMeleeWeapon || !comparedItem.PrimaryWeapon.IsMeleeWeapon) && (!item.PrimaryWeapon.IsRangedWeapon || !item.PrimaryWeapon.IsConsumable || !comparedItem.PrimaryWeapon.IsRangedWeapon || !comparedItem.PrimaryWeapon.IsConsumable) && (item.PrimaryWeapon.IsRangedWeapon || !item.PrimaryWeapon.IsConsumable || comparedItem.PrimaryWeapon.IsRangedWeapon || !comparedItem.PrimaryWeapon.IsConsumable) && (!item.PrimaryWeapon.IsShield || !comparedItem.PrimaryWeapon.IsShield))
        return item.Type == comparedItem.Type;
      WeaponComponentData primaryWeapon = item.PrimaryWeapon;
      return ItemHelper.IsWeaponComparableWithUsage(comparedItem, primaryWeapon.WeaponDescriptionId);
    }

    public static bool CheckComparability(ItemObject item, ItemObject comparedItem, int usageIndex)
    {
      if (item == null || comparedItem == null)
        return false;
      if (item.PrimaryWeapon == null || (!item.PrimaryWeapon.IsMeleeWeapon || !comparedItem.PrimaryWeapon.IsMeleeWeapon) && (!item.PrimaryWeapon.IsRangedWeapon || !item.PrimaryWeapon.IsConsumable || !comparedItem.PrimaryWeapon.IsRangedWeapon || !comparedItem.PrimaryWeapon.IsConsumable) && (item.PrimaryWeapon.IsRangedWeapon || !item.PrimaryWeapon.IsConsumable || comparedItem.PrimaryWeapon.IsRangedWeapon || !comparedItem.PrimaryWeapon.IsConsumable) && (!item.PrimaryWeapon.IsShield || !comparedItem.PrimaryWeapon.IsShield))
        return item.Type == comparedItem.Type;
      WeaponComponentData weapon = item.Weapons[usageIndex];
      return ItemHelper.IsWeaponComparableWithUsage(comparedItem, weapon.WeaponDescriptionId);
    }

    private static TextObject GetDamageDescription(int damage, DamageTypes damageType)
    {
      TextObject damageDescription = new TextObject("{=vvCwVo7i}{DAMAGE} {DAMAGE_TYPE}");
      damageDescription.SetTextVariable("DAMAGE", damage);
      damageDescription.SetTextVariable("DAMAGE_TYPE", GameTexts.FindText("str_damage_types", damageType.ToString()));
      return damageDescription;
    }

    public static TextObject GetSwingDamageText(
      WeaponComponentData weapon,
      ItemModifier itemModifier)
    {
      return ItemHelper.GetDamageDescription(weapon.GetModifiedSwingDamage(itemModifier), weapon.SwingDamageType);
    }

    public static TextObject GetMissileDamageText(
      WeaponComponentData weapon,
      ItemModifier itemModifier)
    {
      return ItemHelper.GetDamageDescription(weapon.GetModifiedMissileDamage(itemModifier), weapon.WeaponClass == WeaponClass.ThrowingAxe ? weapon.SwingDamageType : weapon.ThrustDamageType);
    }

    public static TextObject GetThrustDamageText(
      WeaponComponentData weapon,
      ItemModifier itemModifier)
    {
      return ItemHelper.GetDamageDescription(weapon.GetModifiedThrustDamage(itemModifier), weapon.ThrustDamageType);
    }

    public static TextObject NumberOfItems(int number, ItemObject item)
    {
      TextObject textObject = new TextObject("{=siWNDxgo}{.%}{?NUMBER_OF_ITEM > 1}{NUMBER_OF_ITEM} {PLURAL(ITEM)}{?}one {ITEM}{\\?}{.%}");
      textObject.SetTextVariable("ITEM", item.Name);
      textObject.SetTextVariable("NUMBER_OF_ITEM", number);
      return textObject;
    }
  }
}
