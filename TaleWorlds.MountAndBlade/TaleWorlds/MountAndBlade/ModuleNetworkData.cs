// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ModuleNetworkData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class ModuleNetworkData
  {
    public static EquipmentElement ReadItemReferenceFromPacket(
      MBObjectManager objectManager,
      ref bool bufferReadValid)
    {
      MBObjectBase mbObjectBase = GameNetworkMessage.ReadObjectReferenceFromPacket(objectManager, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      int num = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid) ? 1 : 0;
      MBObjectBase cosmeticItem = (MBObjectBase) null;
      if (num != 0)
        cosmeticItem = GameNetworkMessage.ReadObjectReferenceFromPacket(objectManager, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      return new EquipmentElement(mbObjectBase as ItemObject, cosmeticItem: cosmeticItem as ItemObject);
    }

    public static void WriteItemReferenceToPacket(EquipmentElement equipElement)
    {
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) equipElement.Item, CompressionBasic.GUIDCompressionInfo);
      if (equipElement.CosmeticItem != null)
      {
        GameNetworkMessage.WriteBoolToPacket(true);
        GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) equipElement.CosmeticItem, CompressionBasic.GUIDCompressionInfo);
      }
      else
        GameNetworkMessage.WriteBoolToPacket(false);
    }

    public static MissionWeapon ReadWeaponReferenceFromPacket(
      MBObjectManager objectManager,
      ref bool bufferReadValid)
    {
      if (GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid))
        return MissionWeapon.Invalid;
      MBObjectBase mbObjectBase = GameNetworkMessage.ReadObjectReferenceFromPacket(objectManager, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      int dataValue1 = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.ItemDataValueCompressionInfo, ref bufferReadValid);
      int reloadPhase = GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponReloadPhaseCompressionInfo, ref bufferReadValid);
      short num1 = (short) GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponUsageIndexCompressionInfo, ref bufferReadValid);
      int num2 = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid) ? 1 : 0;
      Banner banner = (Banner) null;
      if (num2 != 0)
      {
        string bannerKey = GameNetworkMessage.ReadBannerCodeFromPacket(ref bufferReadValid);
        if (bufferReadValid)
          banner = new Banner(bannerKey);
      }
      ItemObject primaryItem1 = mbObjectBase as ItemObject;
      bool flag = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      MissionWeapon? ammoWeapon = new MissionWeapon?();
      if (bufferReadValid & flag)
      {
        MBObjectBase primaryItem2 = GameNetworkMessage.ReadObjectReferenceFromPacket(objectManager, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
        int dataValue2 = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.ItemDataValueCompressionInfo, ref bufferReadValid);
        ammoWeapon = new MissionWeapon?(new MissionWeapon(primaryItem2 as ItemObject, (ItemModifier) null, banner, (short) dataValue2));
      }
      return new MissionWeapon(primaryItem1, (ItemModifier) null, banner, (short) dataValue1, (short) reloadPhase, ammoWeapon)
      {
        CurrentUsageIndex = (int) num1
      };
    }

    public static void WriteWeaponReferenceToPacket(MissionWeapon weapon)
    {
      GameNetworkMessage.WriteBoolToPacket(weapon.IsEmpty);
      if (weapon.IsEmpty)
        return;
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) weapon.Item, CompressionBasic.GUIDCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) weapon.RawDataForNetwork, CompressionBasic.ItemDataValueCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) weapon.ReloadPhase, CompressionMission.WeaponReloadPhaseCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(weapon.CurrentUsageIndex, CompressionMission.WeaponUsageIndexCompressionInfo);
      int num1 = weapon.Banner != null ? 1 : 0;
      GameNetworkMessage.WriteBoolToPacket(num1 != 0);
      if (num1 != 0)
        GameNetworkMessage.WriteBannerCodeToPacket(weapon.Banner.Serialize());
      MissionWeapon ammoWeapon = weapon.AmmoWeapon;
      int num2 = !ammoWeapon.IsEmpty ? 1 : 0;
      GameNetworkMessage.WriteBoolToPacket(num2 != 0);
      if (num2 == 0)
        return;
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) ammoWeapon.Item, CompressionBasic.GUIDCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) ammoWeapon.RawDataForNetwork, CompressionBasic.ItemDataValueCompressionInfo);
    }

    public static MissionWeapon ReadMissileWeaponReferenceFromPacket(
      MBObjectManager objectManager,
      ref bool bufferReadValid)
    {
      MBObjectBase primaryItem = GameNetworkMessage.ReadObjectReferenceFromPacket(objectManager, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      short num = (short) GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponUsageIndexCompressionInfo, ref bufferReadValid);
      return new MissionWeapon(primaryItem as ItemObject, (ItemModifier) null, (Banner) null, (short) 1)
      {
        CurrentUsageIndex = (int) num
      };
    }

    public static void WriteMissileWeaponReferenceToPacket(MissionWeapon weapon)
    {
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) weapon.Item, CompressionBasic.GUIDCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(weapon.CurrentUsageIndex, CompressionMission.WeaponUsageIndexCompressionInfo);
    }
  }
}
