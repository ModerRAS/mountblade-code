// Decompiled with JetBrains decompiler
// Type: Helpers.EquipmentHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

#nullable disable
namespace Helpers
{
  public static class EquipmentHelper
  {
    public static void AssignHeroEquipmentFromEquipment(Hero hero, Equipment equipment)
    {
      Equipment equipment1 = equipment.IsCivilian ? hero.CivilianEquipment : hero.BattleEquipment;
      for (int index1 = 0; index1 < 12; ++index1)
      {
        Equipment equipment2 = equipment1;
        int index2 = index1;
        EquipmentElement equipmentElement1 = equipment[index1];
        ItemObject itemObject = equipmentElement1.Item;
        equipmentElement1 = equipment[index1];
        ItemModifier itemModifier = equipmentElement1.ItemModifier;
        EquipmentElement equipmentElement2 = new EquipmentElement(itemObject, itemModifier);
        equipment2[index2] = equipmentElement2;
      }
    }
  }
}
