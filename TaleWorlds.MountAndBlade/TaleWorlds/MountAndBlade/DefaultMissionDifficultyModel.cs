// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DefaultMissionDifficultyModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DefaultMissionDifficultyModel : MissionDifficultyModel
  {
    public override float GetDamageMultiplierOfCombatDifficulty(
      Agent victimAgent,
      Agent attackerAgent = null)
    {
      float combatDifficulty = 1f;
      victimAgent = victimAgent.IsMount ? victimAgent.RiderAgent : victimAgent;
      if (victimAgent != null)
      {
        if (victimAgent.IsMainAgent)
        {
          combatDifficulty = Mission.Current.DamageToPlayerMultiplier;
        }
        else
        {
          Agent mainAgent = Mission.Current?.MainAgent;
          if (mainAgent != null && victimAgent.IsFriendOf(mainAgent))
            combatDifficulty = attackerAgent == null || attackerAgent != mainAgent ? Mission.Current.DamageToFriendsMultiplier : Mission.Current.DamageFromPlayerToFriendsMultiplier;
        }
      }
      return combatDifficulty;
    }
  }
}
