// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StandingPointWithWeaponRequirement
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StandingPointWithWeaponRequirement : StandingPoint
  {
    private ItemObject _requiredWeapon;
    private ItemObject _givenWeapon;
    private WeaponClass _requiredWeaponClass1;
    private WeaponClass _requiredWeaponClass2;
    private bool _hasAlternative;

    public StandingPointWithWeaponRequirement()
    {
      this.AutoSheathWeapons = false;
      this._requiredWeaponClass1 = WeaponClass.Undefined;
      this._requiredWeaponClass2 = WeaponClass.Undefined;
      this._hasAlternative = base.HasAlternative();
    }

    protected internal override void OnInit() => base.OnInit();

    public void InitRequiredWeaponClasses(
      WeaponClass requiredWeaponClass1,
      WeaponClass requiredWeaponClass2 = WeaponClass.Undefined)
    {
      this._requiredWeaponClass1 = requiredWeaponClass1;
      this._requiredWeaponClass2 = requiredWeaponClass2;
    }

    public void InitRequiredWeapon(ItemObject weapon) => this._requiredWeapon = weapon;

    public void InitGivenWeapon(ItemObject weapon) => this._givenWeapon = weapon;

    public override bool IsDisabledForAgent(Agent agent)
    {
      EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      if (this._requiredWeapon != null)
      {
        if (wieldedItemIndex != EquipmentIndex.None && agent.Equipment[wieldedItemIndex].Item == this._requiredWeapon)
          return base.IsDisabledForAgent(agent);
      }
      else if (this._givenWeapon != null)
      {
        if (wieldedItemIndex == EquipmentIndex.None || agent.Equipment[wieldedItemIndex].Item != this._givenWeapon)
          return base.IsDisabledForAgent(agent);
      }
      else if ((this._requiredWeaponClass1 != WeaponClass.Undefined || this._requiredWeaponClass2 != WeaponClass.Undefined) && wieldedItemIndex != EquipmentIndex.None)
      {
        for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
        {
          if (!agent.Equipment[index].IsEmpty && (agent.Equipment[index].CurrentUsageItem.WeaponClass == this._requiredWeaponClass1 || agent.Equipment[index].CurrentUsageItem.WeaponClass == this._requiredWeaponClass2) && (!agent.Equipment[index].CurrentUsageItem.IsConsumable || (int) agent.Equipment[index].Amount < (int) agent.Equipment[index].ModifiedMaxAmount || index == EquipmentIndex.ExtraWeaponSlot))
            return base.IsDisabledForAgent(agent);
        }
      }
      return true;
    }

    public void SetHasAlternative(bool hasAlternative) => this._hasAlternative = hasAlternative;

    public override bool HasAlternative() => this._hasAlternative;

    public void SetUsingBattleSide(BattleSideEnum side) => this.StandingPointSide = side;
  }
}
