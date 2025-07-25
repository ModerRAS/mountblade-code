// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBEquipmentMissionExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MBEquipmentMissionExtensions
  {
    public static SkinMask GetSkinMeshesMask(this Equipment equipment)
    {
      SkinMask skinMeshesMask = SkinMask.AllVisible;
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumEquipmentSetSlots; ++index)
      {
        EquipmentElement equipmentElement = equipment[(int) index];
        int num1;
        if (equipmentElement.Item != null)
        {
          equipmentElement = equipment[(int) index];
          num1 = equipmentElement.Item.HasArmorComponent ? 1 : 0;
        }
        else
          num1 = 0;
        bool flag1 = num1 != 0;
        bool flag2 = equipment[(int) index].CosmeticItem != null && equipment[(int) index].CosmeticItem.HasArmorComponent;
        if (((index == EquipmentIndex.NumAllWeaponSlots || index == EquipmentIndex.Body || index == EquipmentIndex.Leg || index == EquipmentIndex.Gloves ? 1 : (index == EquipmentIndex.Cape ? 1 : 0)) & (flag1 ? 1 : 0) | (flag2 ? 1 : 0)) != 0)
        {
          if (equipment[index].CosmeticItem == null)
          {
            int num2 = (int) skinMeshesMask;
            equipmentElement = equipment[(int) index];
            int meshesMask = (int) equipmentElement.Item.ArmorComponent.MeshesMask;
            skinMeshesMask = (SkinMask) (num2 & meshesMask);
          }
          else
            skinMeshesMask &= equipment[(int) index].CosmeticItem.ArmorComponent.MeshesMask;
        }
      }
      return skinMeshesMask;
    }
  }
}
