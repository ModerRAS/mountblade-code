// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.Sound.Components.MusicArenaPracticeMissionView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions.Sound.Components
{
  public class MusicArenaPracticeMissionView : MissionView, IMusicHandler
  {
    private const string ArenaSoundTag = "arena_sound";
    private const string ArenaIntensityParameterId = "ArenaIntensity";
    private const string ArenaPositiveReactionsSoundId = "event:/mission/ambient/arena/reaction";
    private const int MainAgentKnocksDownAnOpponentBaseIntensityChange = 1;
    private const int MainAgentKnocksDownAnOpponentHeadShotIntensityChange = 3;
    private const int MainAgentKnocksDownAnOpponentMountedTargetIntensityChange = 1;
    private const int MainAgentKnocksDownAnOpponentRangedHitIntensityChange = 1;
    private const int MainAgentKnocksDownAnOpponentMeleeHitIntensityChange = 2;
    private const int MainAgentHeadShotFrom15MetersRangeIntensityChange = 3;
    private const int MainAgentDismountsAnOpponentIntensityChange = 3;
    private const int MainAgentBreaksAShieldIntensityChange = 2;
    private int _currentTournamentIntensity;
    private MusicArenaPracticeMissionView.ArenaIntensityLevel _currentArenaIntensityLevel;
    private bool _allOneShotSoundEventsAreDisabled;
    private GameEntity _arenaSoundEntity;

    bool IMusicHandler.IsPausable => false;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      MBMusicManager.Current.DeactivateCurrentMode();
      MBMusicManager.Current.ActivateBattleMode();
      MBMusicManager.Current.OnBattleMusicHandlerInit((IMusicHandler) this);
    }

    public override void EarlyStart()
    {
      this._allOneShotSoundEventsAreDisabled = false;
      this._arenaSoundEntity = this.Mission.Scene.FindEntityWithTag("arena_sound");
      SoundManager.SetGlobalParameter("ArenaIntensity", 0.0f);
    }

    public override void OnMissionScreenFinalize()
    {
      SoundManager.SetGlobalParameter("ArenaIntensity", 0.0f);
      MBMusicManager.Current.DeactivateBattleMode();
      MBMusicManager.Current.OnBattleMusicHandlerFinalize();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (affectedAgent == null || affectorAgent == null || !affectorAgent.IsMainAgent || agentState != AgentState.Killed && agentState != AgentState.Unconscious)
        return;
      if (affectedAgent.Team != affectorAgent.Team)
      {
        if (affectedAgent.IsHuman)
        {
          ++this._currentTournamentIntensity;
          if (affectedAgent.HasMount)
            ++this._currentTournamentIntensity;
          if (killingBlow.OverrideKillInfo == Agent.KillInfo.Headshot)
            this._currentTournamentIntensity += 3;
          if (killingBlow.IsMissile)
            ++this._currentTournamentIntensity;
          else
            this._currentTournamentIntensity += 2;
        }
        else if (affectedAgent.RiderAgent != null)
          this._currentTournamentIntensity += 3;
      }
      this.UpdateAudienceIntensity();
    }

    public override void OnMissionTick(float dt)
    {
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
      this._currentTournamentIntensity += 3;
      this.UpdateAudienceIntensity();
    }

    public override void OnMissileHit(
      Agent attacker,
      Agent victim,
      bool isCanceled,
      AttackCollisionData collisionData)
    {
      if (isCanceled || attacker == null || victim == null || !attacker.IsMainAgent || !victim.IsHuman || !collisionData.IsShieldBroken)
        return;
      this._currentTournamentIntensity += 2;
      this.UpdateAudienceIntensity();
    }

    public override void OnMeleeHit(
      Agent attacker,
      Agent victim,
      bool isCanceled,
      AttackCollisionData collisionData)
    {
      if (isCanceled || attacker == null || victim == null || !attacker.IsMainAgent || !victim.IsHuman || !collisionData.IsShieldBroken)
        return;
      this._currentTournamentIntensity += 2;
      this.UpdateAudienceIntensity();
    }

    private void UpdateAudienceIntensity()
    {
      bool flag = false;
      if (this._currentTournamentIntensity > 60)
      {
        flag = this._currentArenaIntensityLevel != MusicArenaPracticeMissionView.ArenaIntensityLevel.High;
        this._currentArenaIntensityLevel = MusicArenaPracticeMissionView.ArenaIntensityLevel.High;
      }
      else if (this._currentTournamentIntensity > 30)
      {
        flag = this._currentArenaIntensityLevel != MusicArenaPracticeMissionView.ArenaIntensityLevel.Mid;
        this._currentArenaIntensityLevel = MusicArenaPracticeMissionView.ArenaIntensityLevel.Mid;
      }
      else if (this._currentTournamentIntensity <= 30)
      {
        flag = this._currentArenaIntensityLevel != MusicArenaPracticeMissionView.ArenaIntensityLevel.Low;
        this._currentArenaIntensityLevel = MusicArenaPracticeMissionView.ArenaIntensityLevel.Low;
      }
      if (flag)
        SoundManager.SetGlobalParameter("ArenaIntensity", (float) this._currentArenaIntensityLevel);
      if (this._allOneShotSoundEventsAreDisabled)
        return;
      this.Cheer();
    }

    private void Cheer()
    {
      SoundManager.StartOneShotEvent("event:/mission/ambient/arena/reaction", this._arenaSoundEntity.GlobalPosition);
    }

    public void OnUpdated(float dt)
    {
    }

    private enum ArenaIntensityLevel
    {
      None,
      Low,
      Mid,
      High,
    }
  }
}
