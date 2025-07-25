// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DefaultItemPickupModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DefaultItemPickupModel : ItemPickupModel
  {
    public override float GetItemScoreForAgent(SpawnedItemEntity item, Agent agent)
    {
      if (!item.WeaponCopy.Item.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.CannotBePickedUp))
      {
        WeaponClass weaponClass = item.WeaponCopy.Item.PrimaryWeapon.WeaponClass;
        if (MissionGameModels.Current.BattleBannerBearersModel.IsFormationBanner(agent.Formation, item))
          return 120f;
        if (agent.HadSameTypeOfConsumableOrShieldOnSpawn(weaponClass))
        {
          switch (weaponClass)
          {
            case WeaponClass.Arrow:
              return 80f;
            case WeaponClass.Bolt:
              return 80f;
            case WeaponClass.Stone:
              return 20f;
            case WeaponClass.Boulder:
              return -1f;
            case WeaponClass.ThrowingAxe:
              return 60f;
            case WeaponClass.ThrowingKnife:
              return 50f;
            case WeaponClass.Javelin:
              return 70f;
            case WeaponClass.SmallShield:
            case WeaponClass.LargeShield:
              return 100f;
            default:
              throw new MBException("This pickable item not scored: " + weaponClass.ToString());
          }
        }
      }
      return 0.0f;
    }

    public override bool IsItemAvailableForAgent(
      SpawnedItemEntity item,
      Agent agent,
      EquipmentIndex slotToPickUp)
    {
      if (!agent.CanReachAndUseObject((UsableMissionObject) item, 0.0f) || !agent.ObjectHasVacantPosition((UsableMissionObject) item) || item.HasAIMovingTo)
        return false;
      WeaponClass weaponClass = item.WeaponCopy.Item.PrimaryWeapon.WeaponClass;
      switch (weaponClass)
      {
        case WeaponClass.Arrow:
        case WeaponClass.Bolt:
        case WeaponClass.ThrowingAxe:
        case WeaponClass.ThrowingKnife:
        case WeaponClass.Javelin:
          if (item.WeaponCopy.Amount > (short) 0)
          {
            MissionWeapon missionWeapon = agent.Equipment[slotToPickUp];
            if (!missionWeapon.IsEmpty)
            {
              missionWeapon = agent.Equipment[slotToPickUp];
              if (missionWeapon.Item.PrimaryWeapon.WeaponClass == weaponClass)
              {
                missionWeapon = agent.Equipment[slotToPickUp];
                int amount = (int) missionWeapon.Amount;
                missionWeapon = agent.Equipment[slotToPickUp];
                int num = (int) missionWeapon.ModifiedMaxAmount >> 1;
                if (amount <= num)
                  return true;
                break;
              }
              break;
            }
            break;
          }
          break;
        case WeaponClass.SmallShield:
        case WeaponClass.LargeShield:
          return agent.Equipment[slotToPickUp].IsEmpty && agent.HasLostShield();
        case WeaponClass.Banner:
          return agent.Equipment[slotToPickUp].IsEmpty;
      }
      return false;
    }

    public override bool IsAgentEquipmentSuitableForPickUpAvailability(Agent agent)
    {
      if (agent.HasLostShield())
        return true;
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.ExtraWeaponSlot; ++index)
      {
        MissionWeapon missionWeapon = agent.Equipment[index];
        if (!missionWeapon.IsEmpty && missionWeapon.IsAnyConsumable() && (int) missionWeapon.Amount <= (int) missionWeapon.ModifiedMaxAmount >> 1)
          return true;
      }
      BattleBannerBearersModel bannerBearersModel = MissionGameModels.Current.BattleBannerBearersModel;
      return bannerBearersModel != null && bannerBearersModel.IsBannerSearchingAgent(agent);
    }
  }
}
