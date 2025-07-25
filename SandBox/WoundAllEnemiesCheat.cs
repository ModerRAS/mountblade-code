// Decompiled with JetBrains decompiler
// Type: SandBox.WoundAllEnemiesCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class WoundAllEnemiesCheat : GameplayCheatItem
  {
    public override void ExecuteCheat() => this.KillAllEnemies();

    private void KillAllEnemies()
    {
      MBReadOnlyList<Agent> agents = Mission.Current?.Agents;
      Agent mainAgent = Mission.Current?.MainAgent;
      Team playerTeam = Mission.Current?.PlayerTeam;
      if (agents == null || playerTeam == null)
        return;
      for (int index = agents.Count - 1; index >= 0; --index)
      {
        Agent agent = agents[index];
        if (agent != mainAgent && agent.GetAgentFlags().HasAnyFlag<AgentFlag>(AgentFlag.CanAttack) && playerTeam != null && agent.Team.IsValid && playerTeam.IsEnemyOf(agent.Team))
          this.KillAgent(agent);
      }
    }

    private void KillAgent(Agent agent)
    {
      Agent agent1 = Mission.Current?.MainAgent ?? agent;
      Blow blow = new Blow(agent1.Index);
      blow.DamageType = DamageTypes.Blunt;
      blow.BoneIndex = agent.Monster.HeadLookDirectionBoneIndex;
      blow.GlobalPosition = agent.Position;
      blow.GlobalPosition.z += agent.GetEyeGlobalHeight();
      blow.BaseMagnitude = 2000f;
      blow.WeaponRecord.FillAsMeleeBlow((ItemObject) null, (WeaponComponentData) null, -1, (sbyte) -1);
      blow.InflictedDamage = 2000;
      blow.SwingDirection = agent.LookDirection;
      blow.Direction = blow.SwingDirection;
      blow.DamageCalculated = true;
      sbyte handItemBoneIndex = agent1.Monster.MainHandItemBoneIndex;
      AttackCollisionData collisionData = AttackCollisionData.GetAttackCollisionDataForDebugPurpose(false, false, false, true, false, false, false, false, false, false, false, false, CombatCollisionResult.StrikeAgent, -1, 0, 2, blow.BoneIndex, BoneBodyPartType.Head, handItemBoneIndex, Agent.UsageDirection.AttackLeft, -1, CombatHitResultFlags.NormalHit, 0.5f, 1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, Vec3.Up, blow.Direction, blow.GlobalPosition, Vec3.Zero, Vec3.Zero, agent.Velocity, Vec3.Up);
      agent.RegisterBlow(blow, in collisionData);
    }

    public override TextObject GetName() => new TextObject("{=FJ93PXVa}Wound All Enemies");
  }
}
