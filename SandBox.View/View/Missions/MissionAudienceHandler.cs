// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionAudienceHandler
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionAudienceHandler : MissionView
  {
    private const int GapBetweenCheerSmallInSeconds = 10;
    private const int GapBetweenCheerMedium = 4;
    private float _minChance;
    private float _maxChance;
    private float _minDist;
    private float _maxDist;
    private float _minHeight;
    private float _maxHeight;
    private List<GameEntity> _audienceMidPoints;
    private List<KeyValuePair<GameEntity, float>> _audienceList;
    private readonly float _density;
    private GameEntity _arenaSoundEntity;
    private SoundEvent _ambientSoundEvent;
    private MissionTime _lastOneShotSoundEventStarted;
    private bool _allOneShotSoundEventsAreDisabled;
    private ActionIndexCache _spectatorAction = ActionIndexCache.Create("act_arena_spectator");

    public MissionAudienceHandler(float density) => this._density = density;

    public override void EarlyStart()
    {
      this._allOneShotSoundEventsAreDisabled = true;
      this._audienceMidPoints = this.Mission.Scene.FindEntitiesWithTag("audience_mid_point").ToList<GameEntity>();
      this._arenaSoundEntity = this.Mission.Scene.FindEntityWithTag("arena_sound");
      this._audienceList = new List<KeyValuePair<GameEntity, float>>();
      if (this._audienceMidPoints.Count <= 0)
        return;
      this.OnInit();
    }

    public void OnInit()
    {
      this._minChance = MathF.Max(this._density - 0.5f, 0.0f);
      this._maxChance = this._density;
      this.GetAudienceEntities();
      this.SpawnAudienceAgents();
      this._lastOneShotSoundEventStarted = MissionTime.Zero;
      this._allOneShotSoundEventsAreDisabled = false;
      this._ambientSoundEvent = SoundManager.CreateEvent("event:/mission/ambient/detail/arena/arena", this.Mission.Scene);
      this._ambientSoundEvent.Play();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (affectorAgent == null || !affectorAgent.IsHuman || !affectedAgent.IsHuman)
        return;
      this.Cheer();
    }

    private void Cheer(bool onEnd = false)
    {
      if (this._allOneShotSoundEventsAreDisabled)
        return;
      string eventFullName = (string) null;
      if (onEnd)
      {
        eventFullName = "event:/mission/ambient/detail/arena/cheer_big";
        this._allOneShotSoundEventsAreDisabled = true;
      }
      else if ((double) this._lastOneShotSoundEventStarted.ElapsedSeconds > 4.0 && (double) this._lastOneShotSoundEventStarted.ElapsedSeconds < 10.0)
        eventFullName = "event:/mission/ambient/detail/arena/cheer_medium";
      else if ((double) this._lastOneShotSoundEventStarted.ElapsedSeconds > 10.0)
        eventFullName = "event:/mission/ambient/detail/arena/cheer_small";
      if (eventFullName == null)
        return;
      Vec3 position = (NativeObject) this._arenaSoundEntity != (NativeObject) null ? this._arenaSoundEntity.GlobalPosition : (this._audienceMidPoints.Any<GameEntity>() ? this._audienceMidPoints.GetRandomElement<GameEntity>().GlobalPosition : Vec3.Zero);
      SoundManager.StartOneShotEvent(eventFullName, in position);
      this._lastOneShotSoundEventStarted = MissionTime.Now;
    }

    private void GetAudienceEntities()
    {
      this._maxDist = 0.0f;
      this._minDist = float.MaxValue;
      this._maxHeight = 0.0f;
      this._minHeight = float.MaxValue;
      foreach (GameEntity gameEntity in this.Mission.Scene.FindEntitiesWithTag("audience"))
      {
        float distanceSquareToArena = this.GetDistanceSquareToArena(gameEntity);
        this._maxDist = (double) distanceSquareToArena > (double) this._maxDist ? distanceSquareToArena : this._maxDist;
        this._minDist = (double) distanceSquareToArena < (double) this._minDist ? distanceSquareToArena : this._minDist;
        float z = gameEntity.GetFrame().origin.z;
        this._maxHeight = (double) z > (double) this._maxHeight ? z : this._maxHeight;
        this._minHeight = (double) z < (double) this._minHeight ? z : this._minHeight;
        this._audienceList.Add(new KeyValuePair<GameEntity, float>(gameEntity, distanceSquareToArena));
        gameEntity.SetVisibilityExcludeParents(false);
      }
    }

    private float GetDistanceSquareToArena(GameEntity audienceEntity)
    {
      float distanceSquareToArena = float.MaxValue;
      foreach (GameEntity audienceMidPoint in this._audienceMidPoints)
      {
        float num = audienceMidPoint.GlobalPosition.DistanceSquared(audienceEntity.GlobalPosition);
        if ((double) num < (double) distanceSquareToArena)
          distanceSquareToArena = num;
      }
      return distanceSquareToArena;
    }

    private CharacterObject GetRandomAudienceCharacterToSpawn()
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      return MBRandom.ChooseWeighted<CharacterObject>((IReadOnlyList<(CharacterObject, float)>) new List<(CharacterObject, float)>()
      {
        (currentSettlement.Culture.Townswoman, 0.2f),
        (currentSettlement.Culture.Townsman, 0.2f),
        (currentSettlement.Culture.Armorer, 0.1f),
        (currentSettlement.Culture.Merchant, 0.1f),
        (currentSettlement.Culture.Musician, 0.1f),
        (currentSettlement.Culture.Weaponsmith, 0.1f),
        (currentSettlement.Culture.RansomBroker, 0.1f),
        (currentSettlement.Culture.Barber, 0.05f),
        (currentSettlement.Culture.FemaleDancer, 0.05f)
      }) ?? ((double) MBRandom.RandomFloat < 0.64999997615814209 ? currentSettlement.Culture.Townsman : currentSettlement.Culture.Townswoman);
    }

    private void SpawnAudienceAgents()
    {
      for (int index = this._audienceList.Count - 1; index >= 0; --index)
      {
        KeyValuePair<GameEntity, float> audience = this._audienceList[index];
        if ((double) MBRandom.RandomFloat < ((double) this._minChance + (1.0 - ((double) audience.Value - (double) this._minDist) / ((double) this._maxDist - (double) this._minDist)) * ((double) this._maxChance - (double) this._minChance)) * 0.40000000596046448 + (double) (this._minChance + (float) ((1.0 - (double) MathF.Pow((float) (((double) audience.Key.GetFrame().origin.z - (double) this._minHeight) / ((double) this._maxHeight - (double) this._minHeight)), 2f)) * ((double) this._maxChance - (double) this._minChance))) * 0.60000002384185791)
        {
          MatrixFrame globalFrame = audience.Key.GetGlobalFrame();
          CharacterObject characterToSpawn = this.GetRandomAudienceCharacterToSpawn();
          Agent agent = Mission.Current.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterToSpawn).InitialPosition(in globalFrame.origin).InitialDirection(new Vec2(-globalFrame.rotation.f.AsVec2.x, -globalFrame.rotation.f.AsVec2.y)).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) characterToSpawn)).Team(Team.Invalid).CanSpawnOutsideOfMissionBoundary(true));
          MBAnimation.PrefetchAnimationClip(agent.ActionSet, this._spectatorAction);
          agent.SetActionChannel(0, this._spectatorAction, true, actionSpeed: MBRandom.RandomFloatRanged(0.75f, 1f), startProgress: MBRandom.RandomFloatRanged(0.01f, 1f));
          agent.Controller = Agent.ControllerType.None;
          agent.ToggleInvulnerable();
        }
      }
    }

    public override void OnMissionTick(float dt)
    {
      if (this._audienceMidPoints == null || !this.Mission.MissionEnded)
        return;
      this.Cheer(true);
    }

    public override void OnMissionModeChange(MissionMode oldMissionMode, bool atStart)
    {
      if (oldMissionMode != MissionMode.Battle || Mission.Current.Mode != MissionMode.StartUp || Agent.Main == null || !Agent.Main.IsActive())
        return;
      this.Cheer(true);
    }

    public override void OnMissionScreenFinalize() => this._ambientSoundEvent?.Release();
  }
}
