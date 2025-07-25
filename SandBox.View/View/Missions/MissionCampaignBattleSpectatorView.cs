// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionCampaignBattleSpectatorView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.Screens;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionCampaignBattleSpectatorView : MissionView
  {
    public override void AfterStart()
    {
      this.MissionScreen.SetCustomAgentListToSpectateGatherer(new MissionScreen.GatherCustomAgentListToSpectateDelegate(this.SpectateListGatherer));
    }

    private int CalculateAgentScore(Agent agent)
    {
      Mission mission = agent.Mission;
      CharacterObject character = (CharacterObject) agent.Character;
      int agentScore = agent.IsPlayerControlled ? 2000000 : 0;
      if (agent.Team != null && agent.Team.IsValid)
      {
        int num = agentScore + (mission.PlayerTeam == null || !mission.PlayerTeam.IsValid || !agent.Team.IsEnemyOf(mission.PlayerTeam) ? 1000000 : 0);
        if (agent.Team.GeneralAgent == agent)
          num += 500000;
        else if (character.IsHero)
        {
          if (character.HeroObject.IsLord)
            num += 125000;
          else
            num += 250000;
          foreach (Formation formation in (List<Formation>) agent.Team.FormationsIncludingEmpty)
          {
            if (formation.Captain == agent)
              num += 100000;
          }
        }
        if (character.IsMounted)
          num += 50000;
        if (!character.IsRanged)
          num += 25000;
        agentScore = num + (int) agent.Health;
      }
      return agentScore;
    }

    private List<Agent> SpectateListGatherer(Agent forcedAgentToInclude)
    {
      return this.Mission.AllAgents.WhereQ<Agent>((Func<Agent, bool>) (x => x.IsCameraAttachable() || x == forcedAgentToInclude)).OrderByDescending<Agent, int>(new Func<Agent, int>(this.CalculateAgentScore)).ToList<Agent>();
    }
  }
}
