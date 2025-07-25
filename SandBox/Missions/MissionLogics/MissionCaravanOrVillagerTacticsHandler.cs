// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionCaravanOrVillagerTacticsHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionCaravanOrVillagerTacticsHandler : MissionLogic
  {
    public override void EarlyStart()
    {
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        if (team.HasTeamAi && (MapEvent.PlayerMapEvent.PartiesOnSide(team.Side).Any<MapEventParty>((Func<MapEventParty, bool>) (p => p.Party.IsMobile && p.Party.MobileParty.IsCaravan)) || MapEvent.PlayerMapEvent.MapEventSettlement == null && MapEvent.PlayerMapEvent.PartiesOnSide(team.Side).Any<MapEventParty>((Func<MapEventParty, bool>) (p => p.Party.IsMobile && p.Party.MobileParty.IsVillager))))
          team.AddTacticOption((TacticComponent) new TacticDefensiveLine(team));
      }
    }
  }
}
