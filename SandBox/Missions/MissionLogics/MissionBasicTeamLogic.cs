// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionBasicTeamLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionBasicTeamLogic : MissionLogic
  {
    public override void AfterStart()
    {
      base.AfterStart();
      this.InitializeTeams();
    }

    private void GetTeamColor(
      BattleSideEnum side,
      bool isPlayerAttacker,
      out uint teamColor1,
      out uint teamColor2)
    {
      teamColor1 = uint.MaxValue;
      teamColor2 = uint.MaxValue;
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        return;
      if (isPlayerAttacker && side == BattleSideEnum.Attacker || !isPlayerAttacker && side == BattleSideEnum.Defender)
      {
        teamColor1 = Hero.MainHero.MapFaction.Color;
        teamColor2 = Hero.MainHero.MapFaction.Color2;
      }
      else
      {
        if (MobileParty.MainParty.MapEvent == null)
          return;
        if (MobileParty.MainParty.MapEvent.MapEventSettlement != null)
        {
          teamColor1 = MobileParty.MainParty.MapEvent.MapEventSettlement.MapFaction.Color;
          teamColor2 = MobileParty.MainParty.MapEvent.MapEventSettlement.MapFaction.Color2;
        }
        else
        {
          teamColor1 = MobileParty.MainParty.MapEvent.GetLeaderParty(side).MapFaction.Color;
          teamColor2 = MobileParty.MainParty.MapEvent.GetLeaderParty(side).MapFaction.Color2;
        }
      }
    }

    private void InitializeTeams(bool isPlayerAttacker = true)
    {
      if (!this.Mission.Teams.IsEmpty<Team>())
        throw new MBIllegalValueException("Number of teams is not 0.");
      uint teamColor1_1;
      uint teamColor2_1;
      this.GetTeamColor(BattleSideEnum.Defender, isPlayerAttacker, out teamColor1_1, out teamColor2_1);
      uint teamColor1_2;
      uint teamColor2_2;
      this.GetTeamColor(BattleSideEnum.Attacker, isPlayerAttacker, out teamColor1_2, out teamColor2_2);
      this.Mission.Teams.Add(BattleSideEnum.Defender, teamColor1_1, teamColor2_1);
      this.Mission.Teams.Add(BattleSideEnum.Attacker, teamColor1_2, teamColor2_2);
      if (isPlayerAttacker)
      {
        this.Mission.Teams.Add(BattleSideEnum.Attacker, uint.MaxValue, uint.MaxValue, (Banner) null, true, false, true);
        this.Mission.PlayerTeam = this.Mission.AttackerTeam;
      }
      else
      {
        this.Mission.Teams.Add(BattleSideEnum.Defender, uint.MaxValue, uint.MaxValue, (Banner) null, true, false, true);
        this.Mission.PlayerTeam = this.Mission.DefenderTeam;
      }
    }
  }
}
