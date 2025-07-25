// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CosmeticsManagerHelper
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Diamond.Cosmetics;
using TaleWorlds.MountAndBlade.Diamond.Cosmetics.CosmeticTypes;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class CosmeticsManagerHelper
  {
    public static Dictionary<int, List<int>> GetUsedIndicesFromIds(
      Dictionary<string, List<string>> usedCosmetics)
    {
      Dictionary<int, List<int>> usedIndicesFromIds = new Dictionary<int, List<int>>();
      MBReadOnlyList<MultiplayerClassDivisions.MPHeroClass> objectTypeList = MBObjectManager.Instance.GetObjectTypeList<MultiplayerClassDivisions.MPHeroClass>();
      foreach (KeyValuePair<string, List<string>> usedCosmetic in usedCosmetics)
      {
        int key = -1;
        for (int index = 0; index < objectTypeList.Count; ++index)
        {
          if (objectTypeList[index].StringId == usedCosmetic.Key)
          {
            key = index;
            break;
          }
        }
        if (key != -1)
        {
          List<int> intList = new List<int>();
          foreach (string str in usedCosmetic.Value)
          {
            int num = -1;
            for (int index = 0; index < CosmeticsManager.CosmeticElementsList.Count; ++index)
            {
              if (CosmeticsManager.CosmeticElementsList[index].Id == str)
              {
                num = index;
                break;
              }
            }
            if (num >= 0)
              intList.Add(num);
          }
          if (intList.Count > 0)
            usedIndicesFromIds.Add(key, intList);
        }
      }
      return usedIndicesFromIds;
    }

    public static ActionIndexCache GetSuitableTauntAction(Agent agent, int tauntIndex)
    {
      if (agent.Equipment == null)
        return ActionIndexCache.act_none;
      WeaponComponentData currentUsageItem1 = agent.WieldedWeapon.CurrentUsageItem;
      WeaponComponentData currentUsageItem2 = agent.WieldedOffhandWeapon.CurrentUsageItem;
      return ActionIndexCache.Create(TauntUsageManager.GetAction(tauntIndex, agent.GetIsLeftStance(), !agent.HasMount, currentUsageItem1, currentUsageItem2));
    }

    public static TauntUsageManager.TauntUsage.TauntUsageFlag GetActionNotUsableReason(
      Agent agent,
      int tauntIndex)
    {
      WeaponComponentData currentUsageItem1 = agent.WieldedWeapon.CurrentUsageItem;
      WeaponComponentData currentUsageItem2 = agent.WieldedOffhandWeapon.CurrentUsageItem;
      return TauntUsageManager.GetIsActionNotSuitableReason(tauntIndex, agent.GetIsLeftStance(), !agent.HasMount, currentUsageItem1, currentUsageItem2);
    }

    public static string GetSuitableTauntActionForEquipment(
      Equipment equipment,
      TauntCosmeticElement taunt)
    {
      if (equipment == null)
        return (string) null;
      EquipmentIndex mainHandWeaponIndex;
      EquipmentIndex offHandWeaponIndex;
      equipment.GetInitialWeaponIndicesToEquip(out mainHandWeaponIndex, out offHandWeaponIndex, out bool _);
      EquipmentElement equipmentElement;
      WeaponComponentData weaponComponentData1;
      if (mainHandWeaponIndex == EquipmentIndex.None)
      {
        weaponComponentData1 = (WeaponComponentData) null;
      }
      else
      {
        equipmentElement = equipment[mainHandWeaponIndex];
        weaponComponentData1 = equipmentElement.Item?.PrimaryWeapon;
      }
      WeaponComponentData mainHandWeapon = weaponComponentData1;
      WeaponComponentData weaponComponentData2;
      if (offHandWeaponIndex == EquipmentIndex.None)
      {
        weaponComponentData2 = (WeaponComponentData) null;
      }
      else
      {
        equipmentElement = equipment[offHandWeaponIndex];
        weaponComponentData2 = equipmentElement.Item?.PrimaryWeapon;
      }
      WeaponComponentData offhandWeapon = weaponComponentData2;
      return TauntUsageManager.GetAction(TauntUsageManager.GetIndexOfAction(taunt.Id), false, true, mainHandWeapon, offhandWeapon);
    }

    public static bool IsWeaponClassOneHanded(WeaponClass weaponClass)
    {
      return weaponClass == WeaponClass.OneHandedAxe || weaponClass == WeaponClass.OneHandedPolearm || weaponClass == WeaponClass.OneHandedSword;
    }

    public static bool IsWeaponClassTwoHanded(WeaponClass weaponClass)
    {
      return weaponClass == WeaponClass.TwoHandedAxe || weaponClass == WeaponClass.TwoHandedMace || weaponClass == WeaponClass.TwoHandedPolearm || weaponClass == WeaponClass.TwoHandedSword;
    }

    public static bool IsWeaponClassShield(WeaponClass weaponClass)
    {
      return weaponClass == WeaponClass.LargeShield || weaponClass == WeaponClass.SmallShield;
    }

    public static bool IsWeaponClassBow(WeaponClass weaponClass) => weaponClass == WeaponClass.Bow;

    public static bool IsWeaponClassCrossbow(WeaponClass weaponClass)
    {
      return weaponClass == WeaponClass.Crossbow;
    }

    public static WeaponClass[] GetComplimentaryWeaponClasses(WeaponClass weaponClass)
    {
      switch (weaponClass)
      {
        case WeaponClass.OneHandedSword:
        case WeaponClass.OneHandedAxe:
        case WeaponClass.Mace:
        case WeaponClass.Pick:
        case WeaponClass.OneHandedPolearm:
        case WeaponClass.LowGripPolearm:
        case WeaponClass.Stone:
        case WeaponClass.ThrowingAxe:
        case WeaponClass.ThrowingKnife:
        case WeaponClass.Javelin:
          return new WeaponClass[2]
          {
            WeaponClass.SmallShield,
            WeaponClass.LargeShield
          };
        case WeaponClass.Arrow:
          return new WeaponClass[1]{ WeaponClass.Bow };
        case WeaponClass.Bolt:
          return new WeaponClass[1]{ WeaponClass.Crossbow };
        case WeaponClass.Bow:
          return new WeaponClass[1]{ WeaponClass.Arrow };
        case WeaponClass.Crossbow:
          return new WeaponClass[1]{ WeaponClass.Bolt };
        case WeaponClass.SmallShield:
        case WeaponClass.LargeShield:
          return new WeaponClass[4]
          {
            WeaponClass.OneHandedAxe,
            WeaponClass.OneHandedSword,
            WeaponClass.OneHandedPolearm,
            WeaponClass.Mace
          };
        default:
          return new WeaponClass[0];
      }
    }
  }
}
