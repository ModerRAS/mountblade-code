// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SandboxHighlightsController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments.MissionLogics;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SandboxHighlightsController : MissionLogic
  {
    private List<HighlightsController.HighlightType> _highlightTypes = new List<HighlightsController.HighlightType>()
    {
      new HighlightsController.HighlightType("hlid_tournament_last_match_kill", "Champion of the Arena", "grpid_incidents", -5000, 3000, 0.0f, float.MaxValue, true)
    };
    private HighlightsController _highlightsController;

    public override void AfterStart()
    {
      this._highlightsController = Mission.Current.GetMissionBehavior<HighlightsController>();
      foreach (HighlightsController.HighlightType highlightType in this._highlightTypes)
        HighlightsController.AddHighlightType(highlightType);
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (affectorAgent == null || !affectorAgent.IsMainAgent || affectedAgent == null || !affectedAgent.IsHuman)
        return;
      TournamentBehavior missionBehavior = Mission.Current.GetMissionBehavior<TournamentBehavior>();
      if (missionBehavior == null || missionBehavior.CurrentMatch == null || missionBehavior.NextRound != null)
        return;
      foreach (TournamentParticipant participant in missionBehavior.CurrentMatch.Participants)
      {
        if (affectorAgent.Character == participant.Character && affectedAgent.Character != participant.Character)
        {
          this._highlightsController.SaveHighlight(new HighlightsController.Highlight()
          {
            Start = Mission.Current.CurrentTime,
            End = Mission.Current.CurrentTime,
            HighlightType = this._highlightsController.GetHighlightTypeWithId("hlid_tournament_last_match_kill")
          }, affectedAgent.Position);
          break;
        }
      }
    }
  }
}
