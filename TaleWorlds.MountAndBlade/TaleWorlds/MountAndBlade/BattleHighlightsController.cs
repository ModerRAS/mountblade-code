// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BattleHighlightsController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BattleHighlightsController : MissionLogic
  {
    private List<HighlightsController.HighlightType> _highlightTypes = new List<HighlightsController.HighlightType>()
    {
      new HighlightsController.HighlightType("hlid_kill_last_enemy_on_battlefield", "Take No Prisoners", "grpid_incidents", -5000, 3000, 0.0f, float.MaxValue, false),
      new HighlightsController.HighlightType("hlid_win_battle_as_last_man_standing", "Last Man Standing", "grpid_incidents", -5000, 3000, 0.0f, float.MaxValue, false),
      new HighlightsController.HighlightType("hlid_wall_break_kill", "Wall Break Kill", "grpid_incidents", -5000, 3000, 0.25f, 100f, true)
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
      if (affectorAgent == null || affectedAgent == null || !affectorAgent.IsHuman || !affectedAgent.IsHuman || agentState != AgentState.Killed && agentState != AgentState.Unconscious)
        return;
      bool flag1 = affectorAgent != null && affectorAgent.Team.IsPlayerTeam;
      bool flag2 = affectorAgent != null && affectorAgent.IsMainAgent;
      HighlightsController.Highlight highlight = new HighlightsController.Highlight();
      highlight.Start = Mission.Current.CurrentTime;
      highlight.End = Mission.Current.CurrentTime;
      bool flag3 = false;
      if (flag2 | flag1 && (killingBlow.WeaponRecordWeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.Burning) || killingBlow.WeaponRecordWeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.AffectsArea)))
      {
        highlight.HighlightType = this._highlightsController.GetHighlightTypeWithId("hlid_wall_break_kill");
        flag3 = true;
      }
      MBReadOnlyList<Agent> teamAgents1 = affectedAgent.Team?.TeamAgents;
      bool flag4 = teamAgents1 == null || teamAgents1.Any<Agent>((Func<Agent, bool>) (agent => agent.State != AgentState.Killed && agent.State != AgentState.Unconscious));
      if (!flag4 && flag2 | flag1)
      {
        highlight.HighlightType = this._highlightsController.GetHighlightTypeWithId("hlid_kill_last_enemy_on_battlefield");
        flag3 = true;
      }
      if (flag2)
      {
        MBReadOnlyList<Agent> teamAgents2 = affectorAgent.Team?.TeamAgents;
        if ((teamAgents2 == null ? 1 : (teamAgents2.Any<Agent>((Func<Agent, bool>) (agent => !agent.IsMainAgent && agent.State != AgentState.Killed && agent.State != AgentState.Unconscious)) ? 1 : 0)) == 0 && !flag4)
        {
          highlight.HighlightType = this._highlightsController.GetHighlightTypeWithId("hlid_win_battle_as_last_man_standing");
          flag3 = true;
        }
      }
      if (!flag3)
        return;
      this._highlightsController.SaveHighlight(highlight, affectedAgent.Position);
    }
  }
}
