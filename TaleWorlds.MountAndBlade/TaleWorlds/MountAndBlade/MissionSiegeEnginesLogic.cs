// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionSiegeEnginesLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.Missions;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionSiegeEnginesLogic : MissionLogic
  {
    private readonly MissionSiegeWeaponsController _defenderSiegeWeaponsController;
    private readonly MissionSiegeWeaponsController _attackerSiegeWeaponsController;

    public MissionSiegeEnginesLogic(
      List<MissionSiegeWeapon> defenderSiegeWeapons,
      List<MissionSiegeWeapon> attackerSiegeWeapons)
    {
      this._defenderSiegeWeaponsController = new MissionSiegeWeaponsController(BattleSideEnum.Defender, defenderSiegeWeapons);
      this._attackerSiegeWeaponsController = new MissionSiegeWeaponsController(BattleSideEnum.Attacker, attackerSiegeWeapons);
    }

    public IMissionSiegeWeaponsController GetSiegeWeaponsController(BattleSideEnum side)
    {
      if (side == BattleSideEnum.Defender)
        return (IMissionSiegeWeaponsController) this._defenderSiegeWeaponsController;
      return side == BattleSideEnum.Attacker ? (IMissionSiegeWeaponsController) this._attackerSiegeWeaponsController : (IMissionSiegeWeaponsController) null;
    }

    public void GetMissionSiegeWeapons(
      out IEnumerable<IMissionSiegeWeapon> defenderSiegeWeapons,
      out IEnumerable<IMissionSiegeWeapon> attackerSiegeWeapons)
    {
      defenderSiegeWeapons = this._defenderSiegeWeaponsController.GetSiegeWeapons();
      attackerSiegeWeapons = this._attackerSiegeWeaponsController.GetSiegeWeapons();
    }
  }
}
