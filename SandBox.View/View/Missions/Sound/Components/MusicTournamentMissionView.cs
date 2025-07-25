// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.Sound.Components.MusicTournamentMissionView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using psai.net;
using SandBox.Tournaments.MissionLogics;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions.Sound.Components
{
  public class MusicTournamentMissionView : MissionView, IMusicHandler
  {
    private const string ArenaSoundTag = "arena_sound";
    private const string ArenaIntensityParameterId = "ArenaIntensity";
    private const string ArenaPositiveReactionsSoundId = "event:/mission/ambient/arena/reaction";
    private const string ArenaNegativeReactionsSoundId = "event:/mission/ambient/arena/negative_reaction";
    private const string ArenaTournamentEndSoundId = "event:/mission/ambient/arena/reaction";
    private const int MainAgentKnocksDownAnOpponentBaseIntensityChange = 1;
    private const int MainAgentKnocksDownAnOpponentHeadShotIntensityChange = 3;
    private const int MainAgentKnocksDownAnOpponentMountedTargetIntensityChange = 1;
    private const int MainAgentKnocksDownAnOpponentRangedHitIntensityChange = 1;
    private const int MainAgentKnocksDownAnOpponentMeleeHitIntensityChange = 2;
    private const int MainAgentHeadShotFrom15MetersRangeIntensityChange = 3;
    private const int MainAgentDismountsAnOpponentIntensityChange = 3;
    private const int MainAgentBreaksAShieldIntensityChange = 2;
    private const int MainAgentWinsTournamentRoundIntensityChange = 10;
    private const int RoundEndIntensityChange = 10;
    private const int MainAgentKnocksDownATeamMateIntensityChange = -30;
    private const int MainAgentKnocksDownAFriendlyHorseIntensityChange = -20;
    private int _currentTournamentIntensity;
    private MusicTournamentMissionView.ArenaIntensityLevel _arenaIntensityLevel;
    private bool _allOneShotSoundEventsAreDisabled;
    private TournamentBehavior _tournamentBehavior;
    private TournamentMatch _currentMatch;
    private TournamentMatch _lastMatch;
    private GameEntity _arenaSoundEntity;
    private bool _isFinalRound;
    private bool _fightStarted;
    private Timer _startTimer;

    bool IMusicHandler.IsPausable => false;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      MBMusicManager.Current.DeactivateCurrentMode();
      MBMusicManager.Current.ActivateBattleMode();
      MBMusicManager.Current.OnBattleMusicHandlerInit((IMusicHandler) this);
      this._startTimer = new Timer(Mission.Current.CurrentTime, 3f);
    }

    public override void EarlyStart()
    {
      this._allOneShotSoundEventsAreDisabled = false;
      this._tournamentBehavior = Mission.Current.GetMissionBehavior<TournamentBehavior>();
      this._currentMatch = (TournamentMatch) null;
      this._lastMatch = (TournamentMatch) null;
      this._arenaSoundEntity = this.Mission.Scene.FindEntityWithTag("arena_sound");
      SoundManager.SetGlobalParameter("ArenaIntensity", 0.0f);
    }

    public override void OnMissionScreenFinalize()
    {
      SoundManager.SetGlobalParameter("ArenaIntensity", 0.0f);
      MBMusicManager.Current.DeactivateBattleMode();
      MBMusicManager.Current.OnBattleMusicHandlerFinalize();
    }

    private void CheckIntensityFall()
    {
      PsaiInfo psaiInfo = PsaiCore.Instance.GetPsaiInfo();
      if (psaiInfo.effectiveThemeId < 0)
        return;
      if (float.IsNaN(psaiInfo.currentIntensity))
      {
        MBMusicManager.Current.ChangeCurrentThemeIntensity(MusicParameters.MinIntensity);
      }
      else
      {
        if ((double) psaiInfo.currentIntensity >= (double) MusicParameters.MinIntensity)
          return;
        MBMusicManager.Current.ChangeCurrentThemeIntensity(MusicParameters.MinIntensity - psaiInfo.currentIntensity);
      }
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (this._fightStarted)
      {
        bool flag1 = affectedAgent.IsMine || affectedAgent.RiderAgent != null && affectedAgent.RiderAgent.IsMine;
        Team team = affectedAgent.Team;
        // ISSUE: explicit non-virtual call
        BattleSideEnum battleSideEnum = team != null ? __nonvirtual (team.Side) : BattleSideEnum.None;
        int num;
        if (!flag1)
        {
          if (battleSideEnum != BattleSideEnum.None)
          {
            Team playerTeam = Mission.Current.PlayerTeam;
            // ISSUE: explicit non-virtual call
            num = (playerTeam != null ? __nonvirtual (playerTeam.Side) : BattleSideEnum.None) == battleSideEnum ? 1 : 0;
          }
          else
            num = 0;
        }
        else
          num = 1;
        bool flag2 = num != 0;
        if (((!affectedAgent.IsHuman ? 0 : (affectedAgent.State != AgentState.Routed ? 1 : 0)) | (flag1 ? 1 : 0)) != 0)
        {
          float deltaIntensity = flag2 ? MusicParameters.FriendlyTroopDeadEffectOnIntensity : MusicParameters.EnemyTroopDeadEffectOnIntensity;
          if (flag1)
            deltaIntensity *= MusicParameters.PlayerTroopDeadEffectMultiplierOnIntensity;
          MBMusicManager.Current.ChangeCurrentThemeIntensity(deltaIntensity);
        }
      }
      if (affectedAgent == null || affectorAgent == null || !affectorAgent.IsMainAgent || agentState != AgentState.Killed && agentState != AgentState.Unconscious)
        return;
      int intensityChangeAmount = 0;
      if (affectedAgent.Team == affectorAgent.Team)
      {
        if (affectedAgent.IsHuman)
          intensityChangeAmount += -30;
        else
          intensityChangeAmount += -20;
      }
      else if (affectedAgent.IsHuman)
      {
        int num = intensityChangeAmount + 1;
        if (affectedAgent.HasMount)
          ++num;
        if (killingBlow.OverrideKillInfo == Agent.KillInfo.Headshot)
          num += 3;
        intensityChangeAmount = !killingBlow.IsMissile ? num + 2 : num + 1;
      }
      else if (affectedAgent.RiderAgent != null)
        intensityChangeAmount += 3;
      this.UpdateAudienceIntensity(intensityChangeAmount);
    }

    void IMusicHandler.OnUpdated(float dt)
    {
      if (!this._fightStarted && Agent.Main != null && Agent.Main.IsActive() && this._startTimer.Check(Mission.Current.CurrentTime))
      {
        this._fightStarted = true;
        MBMusicManager.Current.StartTheme(MusicTheme.BattleSmall, 0.5f);
      }
      if (!this._fightStarted)
        return;
      this.CheckIntensityFall();
    }

    public override void OnMissionTick(float dt)
    {
      if (this._tournamentBehavior == null)
        return;
      if (this._currentMatch != this._tournamentBehavior.CurrentMatch)
      {
        TournamentMatch currentMatch = this._tournamentBehavior.CurrentMatch;
        if ((currentMatch != null ? (currentMatch.IsPlayerParticipating() ? 1 : 0) : 0) != 0)
        {
          Agent main = Agent.Main;
          if ((main != null ? (main.IsActive() ? 1 : 0) : 0) != 0)
          {
            this._currentMatch = this._tournamentBehavior.CurrentMatch;
            this.OnTournamentRoundBegin(this._tournamentBehavior.NextRound == null);
          }
        }
      }
      if (this._lastMatch == this._tournamentBehavior.LastMatch)
        return;
      this._lastMatch = this._tournamentBehavior.LastMatch;
      if (this._tournamentBehavior.NextRound != null && !this._tournamentBehavior.LastMatch.IsPlayerParticipating())
        return;
      this.OnTournamentRoundEnd();
    }

    public override void OnScoreHit(
      Agent affectedAgent,
      Agent affectorAgent,
      WeaponComponentData attackerWeapon,
      bool isBlocked,
      bool isSiegeEngineHit,
      in Blow blow,
      in AttackCollisionData collisionData,
      float damagedHp,
      float hitDistance,
      float shotDifficulty)
    {
      if (affectorAgent == null || affectedAgent == null || !affectorAgent.IsMainAgent || !affectedAgent.IsHuman || (double) affectedAgent.Position.Distance(affectorAgent.Position) < 15.0 || blow.VictimBodyPart != BoneBodyPartType.Head && blow.VictimBodyPart != BoneBodyPartType.Neck)
        return;
      this.UpdateAudienceIntensity(3);
    }

    public override void OnMissileHit(
      Agent attacker,
      Agent victim,
      bool isCanceled,
      AttackCollisionData collisionData)
    {
      if (isCanceled || attacker == null || victim == null || !attacker.IsMainAgent || !victim.IsHuman || !collisionData.IsShieldBroken)
        return;
      this.UpdateAudienceIntensity(2);
    }

    public override void OnMeleeHit(
      Agent attacker,
      Agent victim,
      bool isCanceled,
      AttackCollisionData collisionData)
    {
      if (isCanceled || attacker == null || victim == null || !attacker.IsMainAgent || !victim.IsHuman || !collisionData.IsShieldBroken)
        return;
      this.UpdateAudienceIntensity(2);
    }

    private void UpdateAudienceIntensity(int intensityChangeAmount, bool isEnd = false)
    {
      MusicTournamentMissionView.ReactionType reactionType = isEnd ? MusicTournamentMissionView.ReactionType.End : (intensityChangeAmount >= 0 ? MusicTournamentMissionView.ReactionType.Positive : MusicTournamentMissionView.ReactionType.Negative);
      this._currentTournamentIntensity += intensityChangeAmount;
      bool flag = false;
      if (this._currentTournamentIntensity > 60)
      {
        flag = this._arenaIntensityLevel != MusicTournamentMissionView.ArenaIntensityLevel.High;
        this._arenaIntensityLevel = MusicTournamentMissionView.ArenaIntensityLevel.High;
      }
      else if (this._currentTournamentIntensity > 30)
      {
        flag = this._arenaIntensityLevel != MusicTournamentMissionView.ArenaIntensityLevel.Mid;
        this._arenaIntensityLevel = MusicTournamentMissionView.ArenaIntensityLevel.Mid;
      }
      else if (this._currentTournamentIntensity <= 30)
      {
        flag = this._arenaIntensityLevel != MusicTournamentMissionView.ArenaIntensityLevel.Low;
        this._arenaIntensityLevel = MusicTournamentMissionView.ArenaIntensityLevel.Low;
      }
      if (flag)
        SoundManager.SetGlobalParameter("ArenaIntensity", (float) this._arenaIntensityLevel);
      if (this._allOneShotSoundEventsAreDisabled)
        return;
      this.Cheer(reactionType);
    }

    private void Cheer(
      MusicTournamentMissionView.ReactionType reactionType)
    {
      string eventFullName = (string) null;
      switch (reactionType)
      {
        case MusicTournamentMissionView.ReactionType.Positive:
          eventFullName = "event:/mission/ambient/arena/reaction";
          break;
        case MusicTournamentMissionView.ReactionType.Negative:
          eventFullName = "event:/mission/ambient/arena/negative_reaction";
          break;
        case MusicTournamentMissionView.ReactionType.End:
          eventFullName = "event:/mission/ambient/arena/reaction";
          break;
      }
      if (eventFullName == null)
        return;
      SoundManager.StartOneShotEvent(eventFullName, this._arenaSoundEntity.GlobalPosition);
    }

    public void OnTournamentRoundBegin(bool isFinalRound)
    {
      this._isFinalRound = isFinalRound;
      this.UpdateAudienceIntensity(0);
    }

    public void OnTournamentRoundEnd()
    {
      int intensityChangeAmount = 10;
      if (this._lastMatch.IsPlayerWinner())
        intensityChangeAmount += 10;
      this.UpdateAudienceIntensity(intensityChangeAmount, this._isFinalRound);
    }

    private enum ArenaIntensityLevel
    {
      None,
      Low,
      Mid,
      High,
    }

    private enum ReactionType
    {
      Positive,
      Negative,
      End,
    }
  }
}
