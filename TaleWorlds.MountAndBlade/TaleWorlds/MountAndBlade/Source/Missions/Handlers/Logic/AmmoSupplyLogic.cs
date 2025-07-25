// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.Handlers.Logic.AmmoSupplyLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions.Handlers.Logic
{
  public class AmmoSupplyLogic : MissionLogic
  {
    private const float CheckTimePeriod = 3f;
    private readonly List<BattleSideEnum> _sideList;
    private readonly BasicMissionTimer _checkTimer;

    public AmmoSupplyLogic(List<BattleSideEnum> sideList)
    {
      this._sideList = sideList;
      this._checkTimer = new BasicMissionTimer();
    }

    public bool IsAgentEligibleForAmmoSupply(Agent agent)
    {
      if (agent.IsAIControlled && this._sideList.Contains(agent.Team.Side))
      {
        for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
        {
          MissionWeapon missionWeapon = agent.Equipment[index];
          if (!missionWeapon.IsEmpty)
          {
            missionWeapon = agent.Equipment[index];
            if (missionWeapon.IsAnyAmmo())
              return true;
          }
        }
      }
      return false;
    }

    public override void OnMissionTick(float dt)
    {
      if ((double) this._checkTimer.ElapsedTime <= 3.0)
        return;
      this._checkTimer.Reset();
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        if (this._sideList.IndexOf(team.Side) >= 0)
        {
          foreach (Agent activeAgent in (List<Agent>) team.ActiveAgents)
          {
            for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
            {
              if (activeAgent.IsAIControlled && !activeAgent.Equipment[equipmentIndex].IsEmpty && activeAgent.Equipment[equipmentIndex].IsAnyAmmo())
              {
                short modifiedMaxAmount = activeAgent.Equipment[equipmentIndex].ModifiedMaxAmount;
                int amount1 = (int) activeAgent.Equipment[equipmentIndex].Amount;
                short amount2 = modifiedMaxAmount;
                if (modifiedMaxAmount > (short) 1)
                  amount2 = (short) ((int) modifiedMaxAmount - 1);
                int num = (int) amount2;
                if (amount1 < num)
                  activeAgent.SetWeaponAmountInSlot(equipmentIndex, amount2, false);
              }
            }
          }
        }
      }
    }
  }
}
