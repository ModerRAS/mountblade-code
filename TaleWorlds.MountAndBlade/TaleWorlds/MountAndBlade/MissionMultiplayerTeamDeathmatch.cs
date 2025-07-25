// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerTeamDeathmatch
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.MissionRepresentatives;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionMultiplayerTeamDeathmatch : MissionMultiplayerGameModeBase
  {
    public const int MaxScoreToEndMatch = 1023000;
    private const int FirstSpawnGold = 120;
    private const int RespawnGold = 100;
    private MissionScoreboardComponent _missionScoreboardComponent;

    public override bool IsGameModeHidingAllAgentVisuals => true;

    public override bool IsGameModeUsingOpposingTeams => true;

    public override MultiplayerGameType GetMissionType() => MultiplayerGameType.TeamDeathmatch;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionScoreboardComponent = this.Mission.GetMissionBehavior<MissionScoreboardComponent>();
    }

    public override void AfterStart()
    {
      string strValue1 = MultiplayerOptions.OptionType.CultureTeam1.GetStrValue();
      string strValue2 = MultiplayerOptions.OptionType.CultureTeam2.GetStrValue();
      BasicCultureObject basicCultureObject1 = MBObjectManager.Instance.GetObject<BasicCultureObject>(strValue1);
      BasicCultureObject basicCultureObject2 = MBObjectManager.Instance.GetObject<BasicCultureObject>(strValue2);
      Banner banner1 = new Banner(basicCultureObject1.BannerKey, basicCultureObject1.BackgroundColor1, basicCultureObject1.ForegroundColor1);
      Banner banner2 = new Banner(basicCultureObject2.BannerKey, basicCultureObject2.BackgroundColor2, basicCultureObject2.ForegroundColor2);
      this.Mission.Teams.Add(BattleSideEnum.Attacker, basicCultureObject1.BackgroundColor1, basicCultureObject1.ForegroundColor1, banner1);
      this.Mission.Teams.Add(BattleSideEnum.Defender, basicCultureObject2.BackgroundColor2, basicCultureObject2.ForegroundColor2, banner2);
    }

    protected override void HandleEarlyNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      networkPeer.AddComponent<TeamDeathmatchMissionRepresentative>();
    }

    protected override void HandleNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
      this.ChangeCurrentGoldForPeer(networkPeer.GetComponent<MissionPeer>(), 120);
      this.GameModeBaseClient.OnGoldAmountChangedForRepresentative((MissionRepresentativeBase) networkPeer.GetComponent<TeamDeathmatchMissionRepresentative>(), 120);
    }

    public override void OnPeerChangedTeam(NetworkCommunicator peer, Team oldTeam, Team newTeam)
    {
      if (oldTeam == null || oldTeam == newTeam || oldTeam.Side == BattleSideEnum.None)
        return;
      this.ChangeCurrentGoldForPeer(peer.GetComponent<MissionPeer>(), 100);
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      if (blow.DamageType == DamageTypes.Invalid || agentState != AgentState.Unconscious && agentState != AgentState.Killed || !affectedAgent.IsHuman)
        return;
      if (affectorAgent != null)
      {
        if (affectorAgent.IsEnemyOf(affectedAgent))
          this._missionScoreboardComponent.ChangeTeamScore(affectorAgent.Team, this.GetScoreForKill(affectedAgent));
        else
          this._missionScoreboardComponent.ChangeTeamScore(affectedAgent.Team, -this.GetScoreForKill(affectedAgent));
      }
      MissionPeer missionPeer = affectedAgent.MissionPeer;
      if (missionPeer != null)
      {
        int num1 = 100;
        if (affectorAgent != affectedAgent)
        {
          List<MissionPeer>[] missionPeerListArray = new List<MissionPeer>[2];
          for (int index = 0; index < missionPeerListArray.Length; ++index)
            missionPeerListArray[index] = new List<MissionPeer>();
          foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
          {
            MissionPeer component = networkPeer.GetComponent<MissionPeer>();
            if (component != null && component.Team != null && component.Team.Side != BattleSideEnum.None)
              missionPeerListArray[(int) component.Team.Side].Add(component);
          }
          int f = missionPeerListArray[1].Count - missionPeerListArray[0].Count;
          BattleSideEnum index1 = f == 0 ? BattleSideEnum.None : (f < 0 ? BattleSideEnum.Attacker : BattleSideEnum.Defender);
          if (index1 != BattleSideEnum.None && index1 == missionPeer.Team.Side)
          {
            int num2 = MathF.Abs(f);
            int count = missionPeerListArray[(int) index1].Count;
            if (count > 0)
            {
              int num3 = num1 * num2 / 10 / count * 10;
              num1 += num3;
            }
          }
        }
        this.ChangeCurrentGoldForPeer(missionPeer, missionPeer.Representative.Gold + num1);
      }
      bool isFriendly = affectorAgent?.Team != null && affectedAgent.Team != null && affectorAgent.Team.Side == affectedAgent.Team.Side;
      MultiplayerClassDivisions.MPHeroClass classForCharacter = MultiplayerClassDivisions.GetMPHeroClassForCharacter(affectedAgent.Character);
      Agent.Hitter assistingHitter = affectedAgent.GetAssistingHitter(affectorAgent?.MissionPeer);
      if (affectorAgent?.MissionPeer != null && affectorAgent != affectedAgent && !affectorAgent.IsFriendOf(affectedAgent))
      {
        TeamDeathmatchMissionRepresentative representative = affectorAgent.MissionPeer.Representative as TeamDeathmatchMissionRepresentative;
        int dataAndUpdateFlags = representative.GetGoldGainsFromKillDataAndUpdateFlags(MPPerkObject.GetPerkHandler(affectorAgent.MissionPeer), MPPerkObject.GetPerkHandler(assistingHitter?.HitterPeer), classForCharacter, false, blow.IsMissile, isFriendly);
        this.ChangeCurrentGoldForPeer(affectorAgent.MissionPeer, representative.Gold + dataAndUpdateFlags);
      }
      if (assistingHitter?.HitterPeer != null && !assistingHitter.IsFriendlyHit)
      {
        TeamDeathmatchMissionRepresentative representative = assistingHitter.HitterPeer.Representative as TeamDeathmatchMissionRepresentative;
        int dataAndUpdateFlags = representative.GetGoldGainsFromKillDataAndUpdateFlags(MPPerkObject.GetPerkHandler(affectorAgent?.MissionPeer), MPPerkObject.GetPerkHandler(assistingHitter.HitterPeer), classForCharacter, true, blow.IsMissile, isFriendly);
        this.ChangeCurrentGoldForPeer(assistingHitter.HitterPeer, representative.Gold + dataAndUpdateFlags);
      }
      if (missionPeer?.Team == null)
        return;
      IEnumerable<(MissionPeer, int)> goldRewardsOnDeath = MPPerkObject.GetPerkHandler(missionPeer)?.GetTeamGoldRewardsOnDeath();
      if (goldRewardsOnDeath == null)
        return;
      foreach ((MissionPeer peer, int baseAmount) in goldRewardsOnDeath)
      {
        if (peer?.Representative is TeamDeathmatchMissionRepresentative representative)
        {
          int fromAllyDeathReward = representative.GetGoldGainsFromAllyDeathReward(baseAmount);
          if (fromAllyDeathReward > 0)
            this.ChangeCurrentGoldForPeer(peer, representative.Gold + fromAllyDeathReward);
        }
      }
    }

    public override bool CheckForMatchEnd()
    {
      int minScoreToWinMatch = MultiplayerOptions.OptionType.MinScoreToWinMatch.GetIntValue();
      return ((IEnumerable<MissionScoreboardComponent.MissionScoreboardSide>) this._missionScoreboardComponent.Sides).Any<MissionScoreboardComponent.MissionScoreboardSide>((Func<MissionScoreboardComponent.MissionScoreboardSide, bool>) (side => side.SideScore >= minScoreToWinMatch));
    }

    public override Team GetWinnerTeam()
    {
      int intValue = MultiplayerOptions.OptionType.MinScoreToWinMatch.GetIntValue();
      Team winnerTeam = (Team) null;
      MissionScoreboardComponent.MissionScoreboardSide[] sides = this._missionScoreboardComponent.Sides;
      if (sides[1].SideScore < intValue && sides[0].SideScore >= intValue)
        winnerTeam = this.Mission.Teams.Defender;
      if (sides[0].SideScore < intValue && sides[1].SideScore >= intValue)
        winnerTeam = this.Mission.Teams.Attacker;
      return winnerTeam;
    }
  }
}
