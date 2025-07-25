// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxMissionDifficultyModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxMissionDifficultyModel : MissionDifficultyModel
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
          combatDifficulty = Mission.Current.DamageToPlayerMultiplier;
        else if (victimAgent.Origin?.BattleCombatant is PartyBase battleCombatant1 && Mission.Current?.MainAgent?.Origin?.BattleCombatant is PartyBase battleCombatant2 && battleCombatant1 == battleCombatant2)
          combatDifficulty = attackerAgent == null || attackerAgent != Mission.Current?.MainAgent ? Mission.Current.DamageToFriendsMultiplier : Mission.Current.DamageFromPlayerToFriendsMultiplier;
      }
      return combatDifficulty;
    }
  }
}
