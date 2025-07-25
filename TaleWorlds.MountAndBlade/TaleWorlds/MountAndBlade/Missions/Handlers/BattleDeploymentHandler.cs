// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Missions.Handlers.BattleDeploymentHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Missions.Handlers
{
  public class BattleDeploymentHandler : DeploymentHandler
  {
    public event Action OnDeploymentReady;

    public event Action OnAIDeploymentReady;

    public BattleDeploymentHandler(bool isPlayerAttacker)
      : base(isPlayerAttacker)
    {
    }

    public override void OnTeamDeployed(Team team)
    {
      if (team.IsPlayerTeam)
      {
        Action onDeploymentReady = this.OnDeploymentReady;
        if (onDeploymentReady == null)
          return;
        onDeploymentReady();
      }
      else
      {
        Action aiDeploymentReady = this.OnAIDeploymentReady;
        if (aiDeploymentReady == null)
          return;
        aiDeploymentReady();
      }
    }

    public override void FinishDeployment()
    {
      base.FinishDeployment();
      Mission mission = this.Mission ?? Mission.Current;
      mission.GetMissionBehavior<DeploymentMissionController>().FinishDeployment();
      mission.IsTeleportingAgents = false;
    }

    public Vec2 GetEstimatedAverageDefenderPosition()
    {
      WorldPosition spawnPosition;
      this.Mission.GetFormationSpawnFrame(BattleSideEnum.Defender, FormationClass.Infantry, false, out spawnPosition, out Vec2 _);
      return spawnPosition.AsVec2;
    }
  }
}
