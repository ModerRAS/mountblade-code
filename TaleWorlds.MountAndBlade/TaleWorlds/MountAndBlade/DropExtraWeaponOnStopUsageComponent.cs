// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DropExtraWeaponOnStopUsageComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  internal class DropExtraWeaponOnStopUsageComponent : UsableMissionObjectComponent
  {
    protected internal override void OnUseStopped(Agent userAgent, bool isSuccessful = true)
    {
      if (!isSuccessful || GameNetwork.IsClientOrReplay || userAgent.Equipment[EquipmentIndex.ExtraWeaponSlot].IsEmpty || Mission.Current.MissionIsEnding)
        return;
      userAgent.DropItem(EquipmentIndex.ExtraWeaponSlot);
    }
  }
}
