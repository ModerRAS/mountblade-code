// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Missions.IMissionSiegeWeaponsController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.Missions
{
  public interface IMissionSiegeWeaponsController
  {
    int GetMaxDeployableWeaponCount(System.Type t);

    IEnumerable<IMissionSiegeWeapon> GetSiegeWeapons();

    void OnWeaponDeployed(SiegeWeapon missionWeapon);

    void OnWeaponUndeployed(SiegeWeapon missionWeapon);
  }
}
