// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapConversationTableau
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Engine.Options;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Tableaus;

#nullable disable
namespace SandBox.View.Map
{
  public class MapConversationTableau
  {
    private const float MinimumTimeRequiredToChangeIdleAction = 8f;
    private Scene _tableauScene;
    private float _animationFrequencyThreshold = 2.5f;
    private MatrixFrame _frame;
    private GameEntity _cameraEntity;
    private SoundEvent _conversationSoundEvent;
    private Camera _continuousRenderCamera;
    private MapConversationTableauData _data;
    private float _cameraRatio;
    private IMapConversationDataProvider _dataProvider;
    private bool _initialized;
    private Timer _changeIdleActionTimer;
    private int _tableauSizeX;
    private int _tableauSizeY;
    private uint _clothColor1 = new Color(1f, 1f, 1f).ToUnsignedInteger();
    private uint _clothColor2 = new Color(1f, 1f, 1f).ToUnsignedInteger();
    private List<AgentVisuals> _agentVisuals;
    private static readonly string fallbackAnimActName = "act_inventory_idle_start";
    private readonly string RainingEntityTag = "raining_entity";
    private readonly string SnowingEntityTag = "snowing_entity";
    private float _animationGap;
    private bool _isEnabled = true;
    private float RenderScale = 1f;
    private const float _baseCameraRatio = 1.77777779f;
    private float _baseCameraFOV = -1f;
    private string _cachedAtmosphereName = "";
    private string _opponentLeaderEquipmentCache;

    public Texture Texture { get; private set; }

    private TableauView View => this.Texture?.TableauView;

    public MapConversationTableau()
    {
      this._changeIdleActionTimer = new Timer(Game.Current.ApplicationTime, 8f);
      this._agentVisuals = new List<AgentVisuals>();
      this.View?.SetEnable(this._isEnabled);
      this._dataProvider = SandBoxViewSubModule.MapConversationDataProvider;
    }

    public void SetEnabled(bool enabled)
    {
      if (this._isEnabled == enabled)
        return;
      if (enabled)
      {
        this.View?.SetEnable(false);
        this.View?.AddClearTask(true);
        this.Texture?.ReleaseNextFrame();
        this.Texture = TableauView.AddTableau("MapConvTableau", new RenderTargetComponent.TextureUpdateEventHandler(this.CharacterTableauContinuousRenderFunction), (object) this._tableauScene, this._tableauSizeX, this._tableauSizeY);
        this.Texture.TableauView.SetSceneUsesContour(false);
      }
      else
      {
        this.View?.SetEnable(false);
        this.View?.ClearAll(false, false);
      }
      this._isEnabled = enabled;
    }

    public void SetData(object data)
    {
      if (this._data != null)
      {
        this._initialized = false;
        foreach (AgentVisuals agentVisual in this._agentVisuals)
          agentVisual.Reset();
        this._agentVisuals.Clear();
      }
      this._data = data as MapConversationTableauData;
    }

    public void SetTargetSize(int width, int height)
    {
      int num1;
      int num2;
      if (width <= 0 || height <= 0)
      {
        num1 = 10;
        num2 = 10;
      }
      else
      {
        this.RenderScale = NativeOptions.GetConfig(NativeOptions.NativeOptionsType.ResolutionScale) / 100f;
        num1 = (int) ((double) width * (double) this.RenderScale);
        num2 = (int) ((double) height * (double) this.RenderScale);
      }
      if (num1 == this._tableauSizeX && num2 == this._tableauSizeY)
        return;
      this._tableauSizeX = num1;
      this._tableauSizeY = num2;
      this._cameraRatio = (float) this._tableauSizeX / (float) this._tableauSizeY;
      this.View?.SetEnable(false);
      this.View?.AddClearTask(true);
      this.Texture?.ReleaseNextFrame();
      this.Texture = TableauView.AddTableau("MapConvTableau", new RenderTargetComponent.TextureUpdateEventHandler(this.CharacterTableauContinuousRenderFunction), (object) this._tableauScene, this._tableauSizeX, this._tableauSizeY);
    }

    public void OnFinalize(bool clearNextFrame)
    {
      this.View?.SetEnable(false);
      this.RemovePreviousAgentsSoundEvent();
      this.StopConversationSoundEvent();
      this._continuousRenderCamera?.ReleaseCameraEntity();
      this._continuousRenderCamera = (Camera) null;
      foreach (AgentVisuals agentVisual in this._agentVisuals)
        agentVisual.ResetNextFrame();
      this._agentVisuals = (List<AgentVisuals>) null;
      if (clearNextFrame)
      {
        this.View.AddClearTask(true);
        this.Texture.ReleaseNextFrame();
      }
      else
      {
        this.View.ClearAll(false, false);
        this.Texture.Release();
      }
      this.Texture = (Texture) null;
      IEnumerable<GameEntity> entitiesWithTag = this._tableauScene.FindEntitiesWithTag(this._cachedAtmosphereName);
      this._cachedAtmosphereName = "";
      foreach (GameEntity gameEntity in entitiesWithTag)
        gameEntity.SetVisibilityExcludeParents(false);
      TableauCacheManager.Current.ReturnCachedMapConversationTableauScene();
      this._tableauScene = (Scene) null;
    }

    public void OnTick(float dt)
    {
      if (this._data != null && !this._initialized)
      {
        this.FirstTimeInit();
        MapScreen.Instance?.GetMapView<MapConversationView>().ConversationMission.SetConversationTableau(this);
      }
      if (this._conversationSoundEvent != null && !this._conversationSoundEvent.IsPlaying())
      {
        this.RemovePreviousAgentsSoundEvent();
        this._conversationSoundEvent.Stop();
        this._conversationSoundEvent = (SoundEvent) null;
      }
      if ((double) this._animationFrequencyThreshold > (double) this._animationGap)
        this._animationGap += dt;
      TableauView view = this.View;
      if ((NativeObject) view != (NativeObject) null)
      {
        if ((NativeObject) this._continuousRenderCamera == (NativeObject) null)
          this._continuousRenderCamera = Camera.CreateCamera();
        view.SetDoNotRenderThisFrame(false);
      }
      if (this._agentVisuals != null && this._agentVisuals.Count > 0)
        this._agentVisuals[0].TickVisuals();
      if (!(this._agentVisuals[0].GetEquipment().CalculateEquipmentCode() != this._opponentLeaderEquipmentCache))
        return;
      this._initialized = false;
      foreach (AgentVisuals agentVisual in this._agentVisuals)
        agentVisual.Reset();
      this._agentVisuals.Clear();
    }

    private void FirstTimeInit()
    {
      if ((NativeObject) this._tableauScene == (NativeObject) null)
        this._tableauScene = TableauCacheManager.Current.GetCachedMapConversationTableauScene();
      string atmosphereNameFromData = this._dataProvider.GetAtmosphereNameFromData(this._data);
      this._tableauScene.SetAtmosphereWithName(atmosphereNameFromData);
      IEnumerable<GameEntity> entitiesWithTag = this._tableauScene.FindEntitiesWithTag(atmosphereNameFromData);
      this._cachedAtmosphereName = atmosphereNameFromData;
      foreach (GameEntity gameEntity in entitiesWithTag)
        gameEntity.SetVisibilityExcludeParents(true);
      if ((NativeObject) this._continuousRenderCamera == (NativeObject) null)
      {
        this._continuousRenderCamera = Camera.CreateCamera();
        this._cameraEntity = this._tableauScene.FindEntityWithTag("player_infantry_to_infantry");
        Vec3 dofParams = new Vec3();
        this._cameraEntity.GetCameraParamsFromCameraScript(this._continuousRenderCamera, ref dofParams);
        this._baseCameraFOV = this._continuousRenderCamera.HorizontalFov;
      }
      this.SpawnOpponentLeader();
      PartyBase party = this._data.ConversationPartnerData.Party;
      int num1;
      if (party == null)
      {
        num1 = 0;
      }
      else
      {
        int? totalManCount = party.MemberRoster?.TotalManCount;
        int num2 = 1;
        num1 = totalManCount.GetValueOrDefault() > num2 & totalManCount.HasValue ? 1 : 0;
      }
      if (num1 != 0)
      {
        int indexOfBodyguard1 = MathF.Min(2, this._data.ConversationPartnerData.Party.MemberRoster.ToFlattenedRoster().Count<FlattenedTroopRosterElement>() - 1);
        IOrderedEnumerable<TroopRosterElement> source = this._data.ConversationPartnerData.Party.MemberRoster.GetTroopRoster().OrderByDescending<TroopRosterElement, int>((Func<TroopRosterElement, int>) (t => t.Character.Level));
        foreach (TroopRosterElement troopRosterElement in (IEnumerable<TroopRosterElement>) source)
        {
          CharacterObject character = troopRosterElement.Character;
          if (character != this._data.ConversationPartnerData.Character && !character.IsPlayerCharacter)
          {
            --indexOfBodyguard1;
            this.SpawnOpponentBodyguardCharacter(character, indexOfBodyguard1);
          }
          if (indexOfBodyguard1 == 0)
            break;
        }
        if (indexOfBodyguard1 == 1)
        {
          int indexOfBodyguard2 = indexOfBodyguard1 - 1;
          TroopRosterElement troopRosterElement = source.FirstOrDefault<TroopRosterElement>((Func<TroopRosterElement, bool>) (troop => !troop.Character.IsHero));
          if (troopRosterElement.Character != null)
            this.SpawnOpponentBodyguardCharacter(troopRosterElement.Character, indexOfBodyguard2);
        }
      }
      this._agentVisuals.ForEach((Action<AgentVisuals>) (a => a.SetAgentLodZeroOrMaxExternal(true)));
      this._tableauScene.ForceLoadResources();
      this._cameraRatio = Screen.RealScreenResolutionWidth / Screen.RealScreenResolutionHeight;
      this.SetTargetSize((int) Screen.RealScreenResolutionWidth, (int) Screen.RealScreenResolutionHeight);
      this.View?.SetPostfxConfigParams(-1 & -1025);
      this._tableauScene.FindEntityWithTag(this.RainingEntityTag).SetVisibilityExcludeParents(this._data.IsRaining);
      this._tableauScene.FindEntityWithTag(this.SnowingEntityTag).SetVisibilityExcludeParents(this._data.IsSnowing);
      this._tableauScene.Tick(3f);
      this.View?.SetEnable(true);
      this._initialized = true;
    }

    private void SpawnOpponentLeader()
    {
      CharacterObject character = this._data.ConversationPartnerData.Character;
      if (character == null)
        return;
      GameEntity entityWithTag = this._tableauScene.FindEntityWithTag("player_infantry_spawn");
      MapConversationTableau.DefaultConversationAnimationData animForCharacter = this.GetDefaultAnimForCharacter(character, false);
      this._opponentLeaderEquipmentCache = (string) null;
      Equipment equipment = (!this._data.ConversationPartnerData.IsCivilianEquipmentRequiredForLeader ? (this._data.ConversationPartnerData.Character.IsHero ? character.FirstBattleEquipment : character.BattleEquipments.ElementAt<Equipment>(this._data.ConversationPartnerData.Character.GetDefaultFaceSeed(0) % character.BattleEquipments.Count<Equipment>())) : (this._data.ConversationPartnerData.Character.IsHero ? character.FirstCivilianEquipment : character.CivilianEquipments.ElementAt<Equipment>(this._data.ConversationPartnerData.Character.GetDefaultFaceSeed(0) % character.CivilianEquipments.Count<Equipment>()))).Clone();
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumEquipmentSetSlots; ++index)
      {
        EquipmentElement equipmentElement = equipment[index];
        if (!equipmentElement.IsEmpty)
        {
          equipmentElement = equipment[index];
          if (equipmentElement.Item.Type == ItemObject.ItemTypeEnum.Banner)
          {
            equipment[index] = EquipmentElement.Invalid;
            break;
          }
        }
      }
      int seed = -1;
      if (this._data.ConversationPartnerData.Party != null)
        seed = CharacterHelper.GetPartyMemberFaceSeed(this._data.ConversationPartnerData.Party, (BasicCharacterObject) character, 0);
      (uint color1, uint color2) colorsForCharacter = CharacterHelper.GetDeterministicColorsForCharacter(character);
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(character.Race);
      AgentVisualsData agentVisualsData = new AgentVisualsData().Banner(character.HeroObject?.ClanBanner).Equipment(equipment).Race(character.Race);
      Hero heroObject = character.HeroObject;
      BodyProperties bodyProperties = heroObject != null ? heroObject.BodyProperties : character.GetBodyProperties(equipment, seed);
      AgentVisuals agentVisuals = AgentVisuals.Create(agentVisualsData.BodyProperties(bodyProperties).Frame(entityWithTag.GetGlobalFrame()).UseMorphAnims(true).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, character.IsFemale, "_warrior")).ActionCode(ActionIndexCache.Create(animForCharacter.ActionName)).Scene(this._tableauScene).Monster(baseMonsterFromRace).PrepareImmediately(true).SkeletonType(character.IsFemale ? SkeletonType.Female : SkeletonType.Male).ClothColor1(colorsForCharacter.color1).ClothColor2(colorsForCharacter.color2), nameof (MapConversationTableau), true, false, false);
      agentVisuals.GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(0.1f, this._frame, true);
      Vec3 globalStableEyePoint = agentVisuals.GetVisuals().GetGlobalStableEyePoint(true);
      agentVisuals.SetLookDirection(this._cameraEntity.GetGlobalFrame().origin - globalStableEyePoint);
      string defaultFaceIdle = CharacterHelper.GetDefaultFaceIdle(character);
      agentVisuals.GetVisuals().GetSkeleton().SetFacialAnimation(Agent.FacialAnimChannel.Mid, defaultFaceIdle, false, true);
      this._agentVisuals.Add(agentVisuals);
      this._opponentLeaderEquipmentCache = equipment?.CalculateEquipmentCode();
    }

    private void SpawnOpponentBodyguardCharacter(CharacterObject character, int indexOfBodyguard)
    {
      if (indexOfBodyguard < 0 || indexOfBodyguard > 1)
        return;
      GameEntity gameEntity = this._tableauScene.FindEntitiesWithTag("player_bodyguard_infantry_spawn").ElementAt<GameEntity>(indexOfBodyguard);
      MapConversationTableau.DefaultConversationAnimationData animForCharacter = this.GetDefaultAnimForCharacter(character, true);
      int rank = (indexOfBodyguard + 10) * 5;
      Equipment equipment = !this._data.ConversationPartnerData.IsCivilianEquipmentRequiredForBodyGuardCharacters ? (this._data.ConversationPartnerData.Character.IsHero ? character.FirstBattleEquipment : character.BattleEquipments.ElementAt<Equipment>(rank % character.BattleEquipments.Count<Equipment>())) : (this._data.ConversationPartnerData.Character.IsHero ? character.FirstCivilianEquipment : character.CivilianEquipments.ElementAt<Equipment>(rank % character.CivilianEquipments.Count<Equipment>()));
      int seed = -1;
      if (this._data.ConversationPartnerData.Party != null)
        seed = CharacterHelper.GetPartyMemberFaceSeed(this._data.ConversationPartnerData.Party, (BasicCharacterObject) this._data.ConversationPartnerData.Character, rank);
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(character.Race);
      AgentVisualsData agentVisualsData1 = new AgentVisualsData().Banner(this._data.ConversationPartnerData.Party?.LeaderHero?.ClanBanner).Equipment(equipment).Race(character.Race).BodyProperties(character.GetBodyProperties(equipment, seed)).Frame(gameEntity.GetGlobalFrame()).UseMorphAnims(true).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, character.IsFemale, "_warrior")).ActionCode(ActionIndexCache.Create(animForCharacter.ActionName)).Scene(this._tableauScene).Monster(baseMonsterFromRace).PrepareImmediately(true).SkeletonType(character.IsFemale ? SkeletonType.Female : SkeletonType.Male);
      uint? nullable = this._data.ConversationPartnerData.Party?.LeaderHero?.MapFaction.Color;
      int clothColor1 = (int) nullable ?? -1;
      AgentVisualsData agentVisualsData2 = agentVisualsData1.ClothColor1((uint) clothColor1);
      nullable = this._data.ConversationPartnerData.Party?.LeaderHero?.MapFaction.Color2;
      int clothColor2 = (int) nullable ?? -1;
      AgentVisuals agentVisuals = AgentVisuals.Create(agentVisualsData2.ClothColor2((uint) clothColor2), nameof (MapConversationTableau), true, false, false);
      agentVisuals.GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(0.1f, this._frame, true);
      Vec3 globalStableEyePoint = agentVisuals.GetVisuals().GetGlobalStableEyePoint(true);
      agentVisuals.SetLookDirection(this._cameraEntity.GetGlobalFrame().origin - globalStableEyePoint);
      string defaultFaceIdle = CharacterHelper.GetDefaultFaceIdle(character);
      agentVisuals.GetVisuals().GetSkeleton().SetFacialAnimation(Agent.FacialAnimChannel.Mid, defaultFaceIdle, false, true);
      this._agentVisuals.Add(agentVisuals);
    }

    internal void CharacterTableauContinuousRenderFunction(Texture sender, EventArgs e)
    {
      Scene userData = (Scene) sender.UserData;
      this.Texture = sender;
      TableauView tableauView = sender.TableauView;
      if ((NativeObject) userData == (NativeObject) null)
      {
        tableauView.SetContinuousRendering(false);
        tableauView.SetDeleteAfterRendering(true);
      }
      else
      {
        userData.EnsurePostfxSystem();
        userData.SetDofMode(true);
        userData.SetMotionBlurMode(false);
        userData.SetBloom(true);
        userData.SetDynamicShadowmapCascadesRadiusMultiplier(0.31f);
        tableauView.SetRenderWithPostfx(true);
        uint num = (uint) (-1 & -1025);
        tableauView?.SetPostfxConfigParams((int) num);
        if (!((NativeObject) this._continuousRenderCamera != (NativeObject) null))
          return;
        this._continuousRenderCamera.SetFovHorizontal(this._cameraRatio / 1.77777779f * this._baseCameraFOV, this._cameraRatio, 0.2f, 200f);
        tableauView.SetCamera(this._continuousRenderCamera);
        tableauView.SetScene(userData);
        tableauView.SetSceneUsesSkybox(true);
        tableauView.SetDeleteAfterRendering(false);
        tableauView.SetContinuousRendering(true);
        tableauView.SetClearColor(0U);
        tableauView.SetClearGbuffer(true);
        tableauView.DoNotClear(false);
        tableauView.SetFocusedShadowmap(true, ref this._frame.origin, 1.55f);
        userData.ForceLoadResources();
        bool flag;
        do
        {
          flag = true;
          foreach (AgentVisuals agentVisual in this._agentVisuals)
            flag = flag && agentVisual.GetVisuals().CheckResources(true);
        }
        while (!flag);
      }
    }

    private MapConversationTableau.DefaultConversationAnimationData GetDefaultAnimForCharacter(
      CharacterObject character,
      bool preferLoopAnimationIfAvailable)
    {
      MapConversationTableau.DefaultConversationAnimationData invalid = MapConversationTableau.DefaultConversationAnimationData.Invalid;
      CultureObject culture = character.Culture;
      if ((culture != null ? (culture.IsBandit ? 1 : 0) : 0) != 0)
      {
        invalid.ActionName = "aggressive";
      }
      else
      {
        Hero heroObject = character.HeroObject;
        if ((heroObject != null ? (heroObject.IsWounded ? 1 : 0) : 0) != 0)
        {
          PlayerEncounter current = PlayerEncounter.Current;
          if ((current != null ? (current.EncounterState == PlayerEncounterState.CaptureHeroes ? 1 : 0) : 0) != 0)
          {
            invalid.ActionName = "weary";
            goto label_6;
          }
        }
        invalid.ActionName = CharacterHelper.GetStandingBodyIdle(character);
      }
label_6:
      ConversationAnimData conversationAnimData;
      if (Campaign.Current.ConversationManager.ConversationAnimationManager.ConversationAnims.TryGetValue(invalid.ActionName, out conversationAnimData))
      {
        bool flag1 = !string.IsNullOrEmpty(conversationAnimData.IdleAnimStart);
        bool flag2 = !string.IsNullOrEmpty(conversationAnimData.IdleAnimLoop);
        invalid.ActionName = preferLoopAnimationIfAvailable & flag2 || !flag1 ? conversationAnimData.IdleAnimLoop : conversationAnimData.IdleAnimStart;
        invalid.AnimationData = conversationAnimData;
        invalid.AnimationDataValid = true;
      }
      else
      {
        invalid.ActionName = MapConversationTableau.fallbackAnimActName;
        if (Campaign.Current.ConversationManager.ConversationAnimationManager.ConversationAnims.TryGetValue(invalid.ActionName, out conversationAnimData))
        {
          invalid.AnimationData = conversationAnimData;
          invalid.AnimationDataValid = true;
        }
      }
      return invalid;
    }

    public void OnConversationPlay(
      string idleActionId,
      string idleFaceAnimId,
      string reactionId,
      string reactionFaceAnimId,
      string soundPath)
    {
      if (!this._initialized)
      {
        Debug.FailedAssert("Conversation Tableau shouldn't play before initialization", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\MapConversationTableau.cs", nameof (OnConversationPlay), 590);
      }
      else
      {
        if (!Campaign.Current.ConversationManager.SpeakerAgent.Character.IsPlayerCharacter)
        {
          bool flag1 = false;
          bool flag2 = string.IsNullOrEmpty(idleActionId);
          ConversationAnimData animationData;
          if (flag2)
          {
            MapConversationTableau.DefaultConversationAnimationData animForCharacter = this.GetDefaultAnimForCharacter(this._data.ConversationPartnerData.Character, false);
            animationData = animForCharacter.AnimationData;
            flag1 = animForCharacter.AnimationDataValid;
          }
          else if (Campaign.Current.ConversationManager.ConversationAnimationManager.ConversationAnims.TryGetValue(idleActionId, out animationData))
            flag1 = true;
          if (flag1)
          {
            if (!string.IsNullOrEmpty(reactionId))
              this._agentVisuals[0].SetAction(ActionIndexCache.Create(animationData.Reactions[reactionId]), 0.0f, false);
            else if (!flag2 || this._changeIdleActionTimer.Check(Game.Current.ApplicationTime))
            {
              ActionIndexCache actionIndex = ActionIndexCache.Create(animationData.IdleAnimStart);
              if (!this._agentVisuals[0].DoesActionContinueWithCurrentAction(actionIndex))
              {
                this._changeIdleActionTimer.Reset(Game.Current.ApplicationTime);
                this._agentVisuals[0].SetAction(actionIndex, 0.0f, false);
              }
            }
          }
          if (!string.IsNullOrEmpty(reactionFaceAnimId))
            this._agentVisuals[0].GetVisuals().GetSkeleton().SetFacialAnimation(Agent.FacialAnimChannel.Mid, reactionFaceAnimId, false, false);
          else if (!string.IsNullOrEmpty(idleFaceAnimId))
            this._agentVisuals[0].GetVisuals().GetSkeleton().SetFacialAnimation(Agent.FacialAnimChannel.Mid, idleFaceAnimId, false, true);
        }
        this.RemovePreviousAgentsSoundEvent();
        this.StopConversationSoundEvent();
        if (string.IsNullOrEmpty(soundPath))
          return;
        this.PlayConversationSoundEvent(soundPath);
      }
    }

    private void RemovePreviousAgentsSoundEvent()
    {
      if (this._conversationSoundEvent == null)
        return;
      this._agentVisuals[0].StartRhubarbRecord("", -1);
    }

    private void PlayConversationSoundEvent(string soundPath)
    {
      Debug.Print("Conversation sound playing: " + soundPath, 5);
      this._conversationSoundEvent = SoundEvent.CreateEventFromExternalFile("event:/Extra/voiceover", soundPath, this._tableauScene);
      this._conversationSoundEvent.Play();
      int soundId = this._conversationSoundEvent.GetSoundId();
      this._agentVisuals[0].StartRhubarbRecord(this.GetRhubarbXmlPathFromSoundPath(soundPath), soundId);
    }

    private void StopConversationSoundEvent()
    {
      if (this._conversationSoundEvent == null)
        return;
      this._conversationSoundEvent.Stop();
      this._conversationSoundEvent = (SoundEvent) null;
    }

    private string GetRhubarbXmlPathFromSoundPath(string soundPath)
    {
      int length = soundPath.LastIndexOf('.');
      return soundPath.Substring(0, length) + ".xml";
    }

    private struct DefaultConversationAnimationData
    {
      public static readonly MapConversationTableau.DefaultConversationAnimationData Invalid = new MapConversationTableau.DefaultConversationAnimationData()
      {
        ActionName = "",
        AnimationDataValid = false
      };
      public ConversationAnimData AnimationData;
      public string ActionName;
      public bool AnimationDataValid;
    }
  }
}
