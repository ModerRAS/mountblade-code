// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.PartyVisual
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using Helpers;
using SandBox.ViewModelCollection;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;

#nullable disable
namespace SandBox.View.Map
{
  public class PartyVisual
  {
    private const string MapSiegeEngineTag = "map_siege_engine";
    private const string MapBreachableWallTag = "map_breachable_wall";
    private const string MapDefenderEngineTag = "map_defensive_engine";
    private const string CircleTag = "map_settlement_circle";
    private const string BannerPlaceHolderTag = "map_banner_placeholder";
    private const string MapCampArea1Tag = "map_camp_area_1";
    private const string MapCampArea2Tag = "map_camp_area_2";
    private const string MapSiegeEngineRamTag = "map_siege_ram";
    private const string TownPhysicalTag = "bo_town";
    private const string MapSiegeEngineTowerTag = "map_siege_tower";
    private const string MapPreparationTag = "siege_preparation";
    private const string BurnedTag = "looted";
    private const float PartyScale = 0.3f;
    private const float HorseAnimationSpeedFactor = 1.3f;
    private static readonly ActionIndexCache _raidOnFoot = ActionIndexCache.Create("act_map_raid");
    private static readonly ActionIndexCache _camelSwordAttack = ActionIndexCache.Create("act_map_rider_camel_attack_1h");
    private static readonly ActionIndexCache _camelSpearAttack = ActionIndexCache.Create("act_map_rider_camel_attack_1h_spear");
    private static readonly ActionIndexCache _camel1HandedSwingAttack = ActionIndexCache.Create("act_map_rider_camel_attack_1h_swing");
    private static readonly ActionIndexCache _camel2HandedSwingAttack = ActionIndexCache.Create("act_map_rider_camel_attack_2h_swing");
    private static readonly ActionIndexCache _camelUnarmedAttack = ActionIndexCache.Create("act_map_rider_camel_attack_unarmed");
    private static readonly ActionIndexCache _horseSwordAttack = ActionIndexCache.Create("act_map_rider_horse_attack_1h");
    private static readonly ActionIndexCache _horseSpearAttack = ActionIndexCache.Create("act_map_rider_horse_attack_1h_spear");
    private static readonly ActionIndexCache _horse1HandedSwingAttack = ActionIndexCache.Create("act_map_rider_horse_attack_1h_swing");
    private static readonly ActionIndexCache _horse2HandedSwingAttack = ActionIndexCache.Create("act_map_rider_horse_attack_2h_swing");
    private static readonly ActionIndexCache _horseUnarmedAttack = ActionIndexCache.Create("act_map_rider_horse_attack_unarmed");
    private static readonly ActionIndexCache _swordAttackMount = ActionIndexCache.Create("act_map_mount_attack_1h");
    private static readonly ActionIndexCache _spearAttackMount = ActionIndexCache.Create("act_map_mount_attack_spear");
    private static readonly ActionIndexCache _swingAttackMount = ActionIndexCache.Create("act_map_mount_attack_swing");
    private static readonly ActionIndexCache _unarmedAttackMount = ActionIndexCache.Create("act_map_mount_attack_unarmed");
    private static readonly ActionIndexCache _attack1H = ActionIndexCache.Create("act_map_attack_1h");
    private static readonly ActionIndexCache _attack2H = ActionIndexCache.Create("act_map_attack_2h");
    private static readonly ActionIndexCache _attackSpear1HOr2H = ActionIndexCache.Create("act_map_attack_spear_1h_or_2h");
    private static readonly ActionIndexCache _attackUnarmed = ActionIndexCache.Create("act_map_attack_unarmed");
    private readonly List<(GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity)> _siegeRangedMachineEntities;
    private readonly List<(GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity)> _siegeMeleeMachineEntities;
    private readonly List<(GameEntity, BattleSideEnum, int)> _siegeMissileEntities;
    private Dictionary<int, List<GameEntity>> _gateBannerEntitiesWithLevels;
    private GameEntity[] _attackerRangedEngineSpawnEntities;
    private GameEntity[] _attackerBatteringRamSpawnEntities;
    private GameEntity[] _defenderBreachableWallEntitiesCacheForCurrentLevel;
    private GameEntity[] _attackerSiegeTowerSpawnEntities;
    private GameEntity[] _defenderRangedEngineSpawnEntitiesForAllLevels;
    private GameEntity[] _defenderRangedEngineSpawnEntitiesCacheForCurrentLevel;
    private GameEntity[] _defenderBreachableWallEntitiesForAllLevels;
    private (string, GameEntityComponent) _cachedBannerComponent;
    private (string, GameEntity) _cachedBannerEntity;
    private MatrixFrame _hoveredSiegeEntityFrame = MatrixFrame.Identity;
    private GameEntity.UpgradeLevelMask _currentSettlementUpgradeLevelMask;
    private float _speed;
    private float _entityAlpha;
    private Scene _mapScene;
    private Mesh _contourMaskMesh;
    private uint _currentLevelMask;
    public readonly PartyBase PartyBase;
    private Vec2 _lastFrameVisualPositionWithoutError;

    public MapScreen MapScreen => MapScreen.Instance;

    public GameEntity StrategicEntity { get; private set; }

    public List<GameEntity> TownPhysicalEntities { get; private set; }

    public MatrixFrame CircleLocalFrame { get; private set; }

    public Vec2 Position => this.PartyBase.Position2D;

    public IMapEntity GetMapEntity() => this.PartyBase.MapEntity;

    public bool TargetVisibility => this.PartyBase.IsVisible;

    private Scene MapScene
    {
      get
      {
        if ((NativeObject) this._mapScene == (NativeObject) null && Campaign.Current != null && Campaign.Current.MapSceneWrapper != null)
          this._mapScene = ((SandBox.MapScene) Campaign.Current.MapSceneWrapper).Scene;
        return this._mapScene;
      }
    }

    public AgentVisuals HumanAgentVisuals { get; private set; }

    public AgentVisuals MountAgentVisuals { get; private set; }

    public AgentVisuals CaravanMountAgentVisuals { get; private set; }

    public bool IsEnemy { get; private set; }

    public bool IsFriendly { get; private set; }

    public bool IsEntityMovingVisually()
    {
      if (!this.PartyBase.IsMobile || this.PartyBase.MobileParty.VisualPosition2DWithoutError.NearlyEquals(this._lastFrameVisualPositionWithoutError))
        return false;
      if (Campaign.Current.TimeControlMode != CampaignTimeControlMode.Stop)
        this._lastFrameVisualPositionWithoutError = this.PartyBase.MobileParty.VisualPosition2DWithoutError;
      return true;
    }

    public PartyVisual(PartyBase partyBase)
    {
      this.PartyBase = partyBase;
      this._siegeRangedMachineEntities = new List<(GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity)>();
      this._siegeMeleeMachineEntities = new List<(GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity)>();
      this._siegeMissileEntities = new List<(GameEntity, BattleSideEnum, int)>();
      this.CircleLocalFrame = MatrixFrame.Identity;
    }

    private void AddMountToPartyIcon(
      Vec3 positionOffset,
      string mountItemId,
      string harnessItemId,
      uint contourColor,
      CharacterObject character)
    {
      ItemObject mountItem = Game.Current.ObjectManager.GetObject<ItemObject>(mountItemId);
      Monster monster = mountItem.HorseComponent.Monster;
      ItemObject itemObject = (ItemObject) null;
      if (!string.IsNullOrEmpty(harnessItemId))
        itemObject = Game.Current.ObjectManager.GetObject<ItemObject>(harnessItemId);
      this.CaravanMountAgentVisuals = AgentVisuals.Create(new AgentVisualsData().Equipment(new Equipment()
      {
        [EquipmentIndex.ArmorItemEndSlot] = new EquipmentElement(mountItem),
        [EquipmentIndex.HorseHarness] = new EquipmentElement(itemObject)
      }).Scale(mountItem.ScaleFactor * 0.3f).Frame(new MatrixFrame(Mat3.Identity, positionOffset)).ActionSet(MBGlobals.GetActionSet(monster.ActionSetCode + "_map")).Scene(this.MapScene).Monster(monster).PrepareImmediately(false).UseScaledWeapons(true).HasClippingPlane(true).MountCreationKey(MountCreationKey.GetRandomMountKeyString(mountItem, character.GetMountKeySeed())), "PartyIcon " + mountItemId, false, false, false);
      this.CaravanMountAgentVisuals.GetEntity().SetContourColor(new uint?(contourColor), false);
      MatrixFrame frame = this.CaravanMountAgentVisuals.GetFrame();
      frame.rotation.ApplyScaleLocal(this.CaravanMountAgentVisuals.GetScale());
      MatrixFrame parent = this.StrategicEntity.GetFrame().TransformToParent(frame);
      this.CaravanMountAgentVisuals.GetEntity().SetFrame(ref parent);
      float speed = MathF.Min((float) (0.32499998807907104 * (double) this._speed / 0.30000001192092896), 20f);
      this.CaravanMountAgentVisuals.Tick((AgentVisuals) null, 0.0001f, this.IsEntityMovingVisually(), speed);
      this.CaravanMountAgentVisuals.GetEntity().Skeleton.ForceUpdateBoneFrames();
    }

    private void AddCharacterToPartyIcon(
      CharacterObject characterObject,
      uint contourColor,
      string bannerKey,
      int wieldedItemIndex,
      uint teamColor1,
      uint teamColor2,
      ActionIndexCache leaderAction,
      ActionIndexCache mountAction,
      float animationStartDuration,
      ref bool clearBannerEntityCache)
    {
      Equipment equipment = characterObject.Equipment.Clone();
      bool flag = !string.IsNullOrEmpty(bannerKey) && ((characterObject.IsPlayerCharacter || characterObject.HeroObject.Clan == Clan.PlayerClan) && Clan.PlayerClan.Tier >= Campaign.Current.Models.ClanTierModel.BannerEligibleTier || !characterObject.IsPlayerCharacter && (!characterObject.IsHero || characterObject.IsHero && characterObject.HeroObject.Clan != Clan.PlayerClan));
      int leftWieldedItemIndex = 4;
      if (flag)
      {
        ItemObject itemObject = Game.Current.ObjectManager.GetObject<ItemObject>("campaign_banner_small");
        equipment[EquipmentIndex.ExtraWeaponSlot] = new EquipmentElement(itemObject);
      }
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(characterObject.Race);
      MBActionSet actionSetWithSuffix = MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, characterObject.IsFemale, flag ? "_map_with_banner" : "_map");
      AgentVisualsData data1 = new AgentVisualsData().UseMorphAnims(true).Equipment(equipment).BodyProperties(characterObject.GetBodyProperties(characterObject.Equipment, -1)).SkeletonType(characterObject.IsFemale ? SkeletonType.Female : SkeletonType.Male).Scale(0.3f).Frame(this.StrategicEntity.GetFrame()).ActionSet(actionSetWithSuffix).Scene(this.MapScene).Monster(baseMonsterFromRace).PrepareImmediately(false).RightWieldedItemIndex(wieldedItemIndex).HasClippingPlane(true).UseScaledWeapons(true).ClothColor1(teamColor1).ClothColor2(teamColor2).CharacterObjectStringId(characterObject.StringId).AddColorRandomness(!characterObject.IsHero).Race(characterObject.Race);
      if (flag)
      {
        Banner banner = new Banner(bannerKey);
        data1.Banner(banner).LeftWieldedItemIndex(leftWieldedItemIndex);
        if (this._cachedBannerEntity.Item1 == bannerKey + "campaign_banner_small")
          data1.CachedWeaponEntity(EquipmentIndex.ExtraWeaponSlot, this._cachedBannerEntity.Item2);
      }
      this.HumanAgentVisuals = AgentVisuals.Create(data1, "PartyIcon " + (object) characterObject.Name, false, false, false);
      if (flag)
      {
        GameEntity entity = this.HumanAgentVisuals.GetEntity();
        GameEntity child = entity.GetChild(entity.ChildCount - 1);
        if (child.GetComponentCount(GameEntity.ComponentType.ClothSimulator) > 0)
        {
          clearBannerEntityCache = false;
          this._cachedBannerEntity = (bannerKey + "campaign_banner_small", child);
        }
      }
      if (leaderAction != ActionIndexCache.act_none)
      {
        float animationDuration = MBActionSet.GetActionAnimationDuration(actionSetWithSuffix, leaderAction);
        if ((double) animationDuration < 1.0)
          this.HumanAgentVisuals.GetVisuals().GetSkeleton().SetAgentActionChannel(0, leaderAction, animationStartDuration);
        else
          this.HumanAgentVisuals.GetVisuals().GetSkeleton().SetAgentActionChannel(0, leaderAction, animationStartDuration / animationDuration);
      }
      if (characterObject.HasMount())
      {
        Monster monster = characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item.HorseComponent.Monster;
        MBActionSet actionSet = MBGlobals.GetActionSet(monster.ActionSetCode + "_map");
        AgentVisualsData agentVisualsData1 = new AgentVisualsData().Equipment(characterObject.Equipment);
        EquipmentElement equipmentElement = characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot];
        double scale = (double) equipmentElement.Item.ScaleFactor * 0.30000001192092896;
        AgentVisualsData agentVisualsData2 = agentVisualsData1.Scale((float) scale).Frame(MatrixFrame.Identity).ActionSet(actionSet).Scene(this.MapScene).Monster(monster).PrepareImmediately(false).UseScaledWeapons(true).HasClippingPlane(true);
        equipmentElement = characterObject.Equipment[EquipmentIndex.ArmorItemEndSlot];
        string randomMountKeyString = MountCreationKey.GetRandomMountKeyString(equipmentElement.Item, characterObject.GetMountKeySeed());
        AgentVisualsData data2 = agentVisualsData2.MountCreationKey(randomMountKeyString);
        this.MountAgentVisuals = AgentVisuals.Create(data2, "PartyIcon " + (object) characterObject.Name + " mount", false, false, false);
        if (mountAction != ActionIndexCache.act_none)
        {
          float animationDuration = MBActionSet.GetActionAnimationDuration(actionSet, mountAction);
          if ((double) animationDuration < 1.0)
            this.MountAgentVisuals.GetEntity().Skeleton.SetAgentActionChannel(0, mountAction, animationStartDuration);
          else
            this.MountAgentVisuals.GetEntity().Skeleton.SetAgentActionChannel(0, mountAction, animationStartDuration / animationDuration);
        }
        this.MountAgentVisuals.GetEntity().SetContourColor(new uint?(contourColor), false);
        MatrixFrame frame = this.StrategicEntity.GetFrame();
        frame.rotation.ApplyScaleLocal(data2.ScaleData);
        this.MountAgentVisuals.GetEntity().SetFrame(ref frame);
      }
      this.HumanAgentVisuals.GetEntity().SetContourColor(new uint?(contourColor), false);
      MatrixFrame frame1 = this.StrategicEntity.GetFrame();
      frame1.rotation.ApplyScaleLocal(data1.ScaleData);
      this.HumanAgentVisuals.GetEntity().SetFrame(ref frame1);
      float speed = MathF.Min((float) (0.25 * (this.MountAgentVisuals != null ? 1.2999999523162842 : 1.0) * (double) this._speed / 0.30000001192092896), 20f);
      if (this.MountAgentVisuals != null)
      {
        this.MountAgentVisuals.Tick((AgentVisuals) null, 0.0001f, this.IsEntityMovingVisually(), speed);
        this.MountAgentVisuals.GetEntity().Skeleton.ForceUpdateBoneFrames();
      }
      this.HumanAgentVisuals.Tick(this.MountAgentVisuals, 0.0001f, this.IsEntityMovingVisually(), speed);
      this.HumanAgentVisuals.GetEntity().Skeleton.ForceUpdateBoneFrames();
    }

    private static MetaMesh GetBannerOfCharacter(Banner banner, string bannerMeshName)
    {
      MetaMesh copy = MetaMesh.GetCopy(bannerMeshName);
      for (int meshIndex = 0; meshIndex < copy.MeshCount; ++meshIndex)
      {
        Mesh meshAtIndex = copy.GetMeshAtIndex(meshIndex);
        if (!meshAtIndex.HasTag("dont_use_tableau"))
        {
          Material material = meshAtIndex.GetMaterial();
          Material tableauMaterial = (Material) null;
          Tuple<Material, BannerCode> key = new Tuple<Material, BannerCode>(material, BannerCode.CreateFrom(banner));
          if (MapScreen.Instance._characterBannerMaterialCache.ContainsKey(key))
          {
            tableauMaterial = MapScreen.Instance._characterBannerMaterialCache[key];
          }
          else
          {
            tableauMaterial = material.CreateCopy();
            Action<Texture> setAction = (Action<Texture>) (tex =>
            {
              tableauMaterial.SetTexture(Material.MBTextureType.DiffuseMap2, tex);
              uint materialShaderFlagMask = (uint) tableauMaterial.GetShader().GetMaterialShaderFlagMask("use_tableau_blending");
              tableauMaterial.SetShaderFlags(tableauMaterial.GetShaderFlags() | (ulong) materialShaderFlagMask);
            });
            banner.GetTableauTextureLarge(setAction);
            MapScreen.Instance._characterBannerMaterialCache[key] = tableauMaterial;
          }
          meshAtIndex.SetMaterial(tableauMaterial);
        }
      }
      return copy;
    }

    public void Tick(float dt, ref int dirtyPartiesCount, ref PartyVisual[] dirtyPartiesList)
    {
      if (this.PartyBase.IsSettlement)
        this.TickSettlementVisual(dt, ref dirtyPartiesCount, ref dirtyPartiesList);
      else
        this.TickMobilePartyVisual(dt, ref dirtyPartiesCount, ref dirtyPartiesList);
      if (!this.PartyBase.LevelMaskIsDirty)
        return;
      this.RefreshLevelMask();
    }

    private void TickSettlementVisual(
      float dt,
      ref int dirtyPartiesCount,
      ref PartyVisual[] dirtyPartiesList)
    {
      if ((NativeObject) this.StrategicEntity == (NativeObject) null)
        return;
      if (this.PartyBase.IsVisualDirty)
      {
        int index = Interlocked.Increment(ref dirtyPartiesCount);
        dirtyPartiesList[index] = this;
      }
      else
      {
        double toHours1 = CampaignTime.Now.ToHours;
        foreach ((GameEntity, BattleSideEnum, int) siegeMissileEntity in this._siegeMissileEntities)
        {
          GameEntity gameEntity1 = siegeMissileEntity.Item1;
          ISiegeEventSide siegeEventSide = this.PartyBase.Settlement.SiegeEvent.GetSiegeEventSide(siegeMissileEntity.Item2);
          int index = siegeMissileEntity.Item3;
          bool visible1 = false;
          if (siegeEventSide.SiegeEngineMissiles.Count > index)
          {
            SiegeEvent.SiegeEngineMissile siegeEngineMissile = siegeEventSide.SiegeEngineMissiles[index];
            double toHours2 = siegeEngineMissile.CollisionTime.ToHours;
            PartyVisual.SiegeBombardmentData bombardmentData;
            this.CalculateDataAndDurationsForSiegeMachine(siegeEngineMissile.ShooterSlotIndex, siegeEngineMissile.ShooterSiegeEngineType, siegeEventSide.BattleSide, siegeEngineMissile.TargetType, siegeEngineMissile.TargetSlotIndex, out bombardmentData);
            float num1 = bombardmentData.MissileSpeed * MathF.Cos(bombardmentData.LaunchAngle);
            if (toHours1 > toHours2 - (double) bombardmentData.TotalDuration)
            {
              bool flag = toHours1 - (double) dt > toHours2 - (double) bombardmentData.FlightDuration && toHours1 - (double) dt < toHours2;
              bool visible2 = toHours1 > toHours2 - (double) bombardmentData.FlightDuration && toHours1 < toHours2;
              if (visible2)
              {
                visible1 = true;
                float num2 = (float) (toHours1 - (toHours2 - (double) bombardmentData.FlightDuration));
                float num3 = bombardmentData.MissileSpeed * MathF.Sin(bombardmentData.LaunchAngle);
                Vec2 vec2_1 = new Vec2(num1 * num2, (float) ((double) num3 * (double) num2 - (double) bombardmentData.Gravity * 0.5 * (double) num2 * (double) num2));
                Vec3 o = bombardmentData.LaunchGlobalPosition + bombardmentData.TargetAlignedShooterGlobalFrame.rotation.f.NormalizedCopy() * vec2_1.x + bombardmentData.TargetAlignedShooterGlobalFrame.rotation.u.NormalizedCopy() * vec2_1.y;
                float num4 = num2 + 0.1f;
                Vec2 vec2_2 = new Vec2(num1 * num4, (float) ((double) num3 * (double) num4 - (double) bombardmentData.Gravity * 0.5 * (double) num4 * (double) num4));
                Vec3 vec3 = bombardmentData.LaunchGlobalPosition + bombardmentData.TargetAlignedShooterGlobalFrame.rotation.f.NormalizedCopy() * vec2_2.x + bombardmentData.TargetAlignedShooterGlobalFrame.rotation.u.NormalizedCopy() * vec2_2.y;
                Mat3 rotation = gameEntity1.GetGlobalFrame().rotation with
                {
                  f = vec3 - o
                };
                rotation.Orthonormalize();
                rotation.ApplyScaleLocal(this.MapScreen.PrefabEntityCache.GetScaleForSiegeEngine(siegeEngineMissile.ShooterSiegeEngineType, siegeEventSide.BattleSide));
                MatrixFrame frame = new MatrixFrame(rotation, o);
                gameEntity1.SetGlobalFrame(in frame);
              }
              gameEntity1.GetChild(0).SetVisibilityExcludeParents(visible2);
              int soundCodeId = -1;
              if (!flag & visible2)
                soundCodeId = siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.Ballista || siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.FireBallista ? MiscSoundContainer.SoundCodeAmbientNodeSiegeBallistaFire : (siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.Catapult || siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.FireCatapult || siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.Onager || siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.FireOnager ? MiscSoundContainer.SoundCodeAmbientNodeSiegeMangonelFire : MiscSoundContainer.SoundCodeAmbientNodeSiegeTrebuchetFire);
              else if (flag && !visible2)
              {
                this.StrategicEntity.Scene.CreateBurstParticle(ParticleSystemManager.GetRuntimeIdByName(siegeEngineMissile.TargetType == SiegeBombardTargets.RangedEngines ? "psys_game_ballista_destruction" : "psys_campaign_boulder_stone_coll"), gameEntity1.GetGlobalFrame());
                soundCodeId = siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.Ballista || siegeEngineMissile.ShooterSiegeEngineType == DefaultSiegeEngineTypes.FireBallista ? MiscSoundContainer.SoundCodeAmbientNodeSiegeBallistaHit : MiscSoundContainer.SoundCodeAmbientNodeSiegeBoulderHit;
              }
              MBSoundEvent.PlaySound(soundCodeId, gameEntity1.GlobalPosition);
              if (toHours1 >= toHours2 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration - (double) bombardmentData.ReloadDuration))
              {
                if (toHours1 < toHours2 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration - (double) bombardmentData.ReloadDuration - (double) bombardmentData.AimingDuration))
                {
                  if (siegeEventSide.SiegeEngines.DeployedRangedSiegeEngines[siegeEngineMissile.ShooterSlotIndex] != null && siegeEventSide.SiegeEngines.DeployedRangedSiegeEngines[siegeEngineMissile.ShooterSlotIndex].SiegeEngine == siegeEngineMissile.ShooterSiegeEngineType)
                  {
                    foreach ((GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity) rangedMachineEntity in this._siegeRangedMachineEntities)
                    {
                      if (!visible1 && rangedMachineEntity.Item2 == siegeEventSide.BattleSide && rangedMachineEntity.Item3 == siegeEngineMissile.ShooterSlotIndex)
                      {
                        GameEntity gameEntity2 = rangedMachineEntity.Item5;
                        if ((NativeObject) gameEntity2 != (NativeObject) null)
                        {
                          visible1 = true;
                          gameEntity1.SetGlobalFrame(gameEntity2.GetGlobalFrame().TransformToParent(MBSkeletonExtensions.GetBoneEntitialFrame(gameEntity2.Skeleton, Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapProjectileBoneIndex(siegeEngineMissile.ShooterSiegeEngineType, siegeEventSide.BattleSide))));
                        }
                      }
                    }
                  }
                }
                else if (toHours1 < toHours2 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration - (double) bombardmentData.ReloadDuration - (double) bombardmentData.AimingDuration - (double) bombardmentData.FireDuration) && !visible2 && siegeEventSide.SiegeEngines.DeployedRangedSiegeEngines[siegeEngineMissile.ShooterSlotIndex] != null && siegeEventSide.SiegeEngines.DeployedRangedSiegeEngines[siegeEngineMissile.ShooterSlotIndex].SiegeEngine == siegeEngineMissile.ShooterSiegeEngineType)
                {
                  foreach ((GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity) rangedMachineEntity in this._siegeRangedMachineEntities)
                  {
                    if (!visible1 && rangedMachineEntity.Item2 == siegeEventSide.BattleSide && rangedMachineEntity.Item3 == siegeEngineMissile.ShooterSlotIndex)
                    {
                      GameEntity gameEntity3 = rangedMachineEntity.Item5;
                      if ((NativeObject) gameEntity3 != (NativeObject) null)
                      {
                        visible1 = true;
                        gameEntity1.SetGlobalFrame(gameEntity3.GetGlobalFrame().TransformToParent(MBSkeletonExtensions.GetBoneEntitialFrame(gameEntity3.Skeleton, Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapProjectileBoneIndex(siegeEngineMissile.ShooterSiegeEngineType, siegeEventSide.BattleSide))));
                      }
                    }
                  }
                }
              }
            }
          }
          gameEntity1.SetVisibilityExcludeParents(visible1);
        }
        foreach ((GameEntity gameEntity4, BattleSideEnum side, int machineSlotIndex, MatrixFrame _, GameEntity gameEntity5) in this._siegeRangedMachineEntities)
        {
          SiegeEngineType siegeEngine = this.PartyBase.Settlement.SiegeEvent.GetSiegeEventSide(side).SiegeEngines.DeployedRangedSiegeEngines[machineSlotIndex].SiegeEngine;
          if ((NativeObject) gameEntity5 != (NativeObject) null)
          {
            Skeleton skeleton = gameEntity5.Skeleton;
            string fireAnimationName = Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapFireAnimationName(siegeEngine, side);
            string reloadAnimationName = Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapReloadAnimationName(siegeEngine, side);
            SiegeEvent.RangedSiegeEngine rangedSiegeEngine = this.PartyBase.Settlement.SiegeEvent.GetSiegeEventSide(side).SiegeEngines.DeployedRangedSiegeEngines[machineSlotIndex].RangedSiegeEngine;
            PartyVisual.SiegeBombardmentData bombardmentData;
            this.CalculateDataAndDurationsForSiegeMachine(machineSlotIndex, siegeEngine, side, rangedSiegeEngine.CurrentTargetType, rangedSiegeEngine.CurrentTargetIndex, out bombardmentData);
            MatrixFrame frame = bombardmentData.ShooterGlobalFrame;
            if (rangedSiegeEngine.PreviousTargetIndex >= 0)
            {
              Vec3 vec3 = rangedSiegeEngine.PreviousDamagedTargetType != SiegeBombardTargets.Wall ? (side == BattleSideEnum.Attacker ? this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel[rangedSiegeEngine.PreviousTargetIndex].GetGlobalFrame().origin : this._attackerRangedEngineSpawnEntities[rangedSiegeEngine.PreviousTargetIndex].GetGlobalFrame().origin) : this._defenderBreachableWallEntitiesCacheForCurrentLevel[rangedSiegeEngine.PreviousTargetIndex].GlobalPosition;
              frame.rotation.f.AsVec2 = (vec3 - frame.origin).AsVec2;
              frame.rotation.f.NormalizeWithoutChangingZ();
              frame.rotation.Orthonormalize();
            }
            gameEntity4.SetGlobalFrame(in frame);
            skeleton.TickAnimations(dt, MatrixFrame.Identity, false);
            double toHours3 = rangedSiegeEngine.NextProjectileCollisionTime.ToHours;
            if (toHours1 > toHours3 - (double) bombardmentData.TotalDuration)
            {
              if (toHours1 < toHours3 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration))
              {
                Vec2 asVec2 = (bombardmentData.TargetPosition - frame.origin).AsVec2;
                double rotationInRadians1 = (double) asVec2.RotationInRadians;
                asVec2 = frame.rotation.f.AsVec2;
                float rotationInRadians2 = asVec2.RotationInRadians;
                double num5 = (double) rotationInRadians2;
                float f = (float) (rotationInRadians1 - num5);
                float num6 = MathF.Abs(f);
                float num7 = (float) (toHours3 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration) - toHours1);
                if ((double) num6 > (double) num7 * 2.0)
                {
                  frame.rotation.f.AsVec2 = Vec2.FromRotation(rotationInRadians2 + (float) MathF.Sign(f) * (num6 - num7 * 2f));
                  frame.rotation.f.NormalizeWithoutChangingZ();
                  frame.rotation.Orthonormalize();
                  gameEntity4.SetGlobalFrame(in frame);
                }
              }
              else if (toHours1 < toHours3 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration - (double) bombardmentData.ReloadDuration))
              {
                gameEntity4.SetGlobalFrame(in bombardmentData.TargetAlignedShooterGlobalFrame);
                skeleton.SetAnimationAtChannel(reloadAnimationName, 0, blendInPeriod: 0.0f, startProgress: (float) (toHours1 - (toHours3 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration))) / bombardmentData.ReloadDuration);
              }
              else if (toHours1 < toHours3 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration - (double) bombardmentData.ReloadDuration - (double) bombardmentData.AimingDuration))
              {
                gameEntity4.SetGlobalFrame(in bombardmentData.TargetAlignedShooterGlobalFrame);
                skeleton.SetAnimationAtChannel(reloadAnimationName, 0, blendInPeriod: 0.0f, startProgress: 1f);
              }
              else if (toHours1 < toHours3 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration - (double) bombardmentData.ReloadDuration - (double) bombardmentData.AimingDuration - (double) bombardmentData.FireDuration))
              {
                gameEntity4.SetGlobalFrame(in bombardmentData.TargetAlignedShooterGlobalFrame);
                skeleton.SetAnimationAtChannel(fireAnimationName, 0, blendInPeriod: 0.0f, startProgress: (float) (toHours1 - (toHours3 - ((double) bombardmentData.TotalDuration - (double) bombardmentData.RotationDuration - (double) bombardmentData.ReloadDuration - (double) bombardmentData.AimingDuration))) / bombardmentData.FireDuration);
              }
              else
              {
                gameEntity4.SetGlobalFrame(in bombardmentData.TargetAlignedShooterGlobalFrame);
                skeleton.SetAnimationAtChannel(fireAnimationName, 0, blendInPeriod: 0.0f, startProgress: 1f);
              }
            }
          }
        }
      }
    }

    private void TickMobilePartyVisual(
      float dt,
      ref int dirtyPartiesCount,
      ref PartyVisual[] dirtyPartiesList)
    {
      if ((NativeObject) this.StrategicEntity == (NativeObject) null)
        return;
      if (this.PartyBase.IsVisualDirty && ((double) this._entityAlpha > 0.0 || this.TargetVisibility))
      {
        int index = Interlocked.Increment(ref dirtyPartiesCount);
        dirtyPartiesList[index] = this;
      }
      this._speed = this.PartyBase.MobileParty.Speed;
      if ((double) this._entityAlpha > 0.0 && this.HumanAgentVisuals != null && !this.HumanAgentVisuals.GetEquipment()[EquipmentIndex.ExtraWeaponSlot].IsEmpty)
        this.HumanAgentVisuals.SetClothWindToWeaponAtIndex(-this.StrategicEntity.GetGlobalFrame().rotation.f, false, EquipmentIndex.ExtraWeaponSlot);
      float speed = MathF.Min((float) (0.25 * (this.MountAgentVisuals != null ? 1.2999999523162842 : 1.0) * (double) this._speed / 0.30000001192092896), 20f);
      bool isEntityMoving = this.IsEntityMovingVisually();
      this.HumanAgentVisuals?.Tick(this.MountAgentVisuals, dt, isEntityMoving, speed);
      this.MountAgentVisuals?.Tick((AgentVisuals) null, dt, isEntityMoving, speed);
      this.CaravanMountAgentVisuals?.Tick((AgentVisuals) null, dt, isEntityMoving, speed);
      if (!this.IsVisibleOrFadingOut())
        return;
      MobileParty mobileParty = this.PartyBase.MobileParty;
      MatrixFrame identity = MatrixFrame.Identity with
      {
        origin = this.GetVisualPosition()
      };
      if (mobileParty.Army != null && mobileParty.Army.LeaderParty.AttachedParties.Contains(mobileParty))
      {
        MatrixFrame frame = this.GetFrame();
        Vec2 vec2_1 = identity.origin.AsVec2 - frame.origin.AsVec2;
        if ((double) vec2_1.Length / (double) dt > 20.0)
          identity.rotation.RotateAboutUp(this.PartyBase.AverageBearingRotation);
        else if (mobileParty.CurrentSettlement == null)
        {
          Vec2 vec2_2 = frame.rotation.f.AsVec2;
          double rotationInRadians1 = (double) vec2_2.RotationInRadians;
          vec2_2 = vec2_1 + Vec2.FromRotation(this.PartyBase.AverageBearingRotation) * 0.01f;
          double rotationInRadians2 = (double) vec2_2.RotationInRadians;
          double amount = 6.0 * (double) dt;
          double minChange = 0.029999999329447746 * (double) dt;
          double maxChange = 10.0 * (double) dt;
          float a = MBMath.LerpRadians((float) rotationInRadians1, (float) rotationInRadians2, (float) amount, (float) minChange, (float) maxChange);
          identity.rotation.RotateAboutUp(a);
        }
        else
        {
          float rotationInRadians = frame.rotation.f.AsVec2.RotationInRadians;
          identity.rotation.RotateAboutUp(rotationInRadians);
        }
      }
      else if (mobileParty.CurrentSettlement == null)
        identity.rotation.RotateAboutUp(this.PartyBase.AverageBearingRotation);
      this.SetFrame(ref identity);
    }

    public Vec3 GetVisualPosition()
    {
      float height = 0.0f;
      Vec2 vec2_1 = Vec2.Zero;
      if (this.PartyBase.IsMobile)
      {
        MobileParty mobileParty = this.PartyBase.MobileParty;
        vec2_1 = new Vec2(mobileParty.EventPositionAdder.x + mobileParty.ArmyPositionAdder.x + mobileParty.ErrorPosition.x, mobileParty.EventPositionAdder.y + mobileParty.ArmyPositionAdder.y + mobileParty.ErrorPosition.y);
      }
      Vec2 vec2_2 = new Vec2(this.PartyBase.Position2D.x + vec2_1.x, this.PartyBase.Position2D.y + vec2_1.y);
      Campaign.Current.MapSceneWrapper.GetHeightAtPoint(vec2_2, ref height);
      return new Vec3(vec2_2, height);
    }

    private void CalculateDataAndDurationsForSiegeMachine(
      int machineSlotIndex,
      SiegeEngineType machineType,
      BattleSideEnum side,
      SiegeBombardTargets targetType,
      int targetSlotIndex,
      out PartyVisual.SiegeBombardmentData bombardmentData)
    {
      bombardmentData = new PartyVisual.SiegeBombardmentData();
      MatrixFrame matrixFrame = side == BattleSideEnum.Defender ? this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel[machineSlotIndex].GetGlobalFrame() : this._attackerRangedEngineSpawnEntities[machineSlotIndex].GetGlobalFrame();
      matrixFrame.rotation.MakeUnit();
      bombardmentData.ShooterGlobalFrame = matrixFrame;
      string fireAnimationName = Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapFireAnimationName(machineType, side);
      string reloadAnimationName = Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapReloadAnimationName(machineType, side);
      bombardmentData.ReloadDuration = MBAnimation.GetAnimationDuration(reloadAnimationName) * 0.25f;
      bombardmentData.AimingDuration = 0.25f;
      bombardmentData.RotationDuration = 0.4f;
      bombardmentData.FireDuration = MBAnimation.GetAnimationDuration(fireAnimationName) * 0.25f;
      float animationParameter1 = MBAnimation.GetAnimationParameter1(fireAnimationName);
      bombardmentData.MissileLaunchDuration = bombardmentData.FireDuration * animationParameter1;
      bombardmentData.MissileSpeed = 14f;
      bombardmentData.Gravity = machineType == DefaultSiegeEngineTypes.Ballista || machineType == DefaultSiegeEngineTypes.FireBallista ? 10f : 40f;
      switch (targetType)
      {
        case SiegeBombardTargets.Wall:
          bombardmentData.TargetPosition = this._defenderBreachableWallEntitiesCacheForCurrentLevel[targetSlotIndex].GlobalPosition;
          break;
        case SiegeBombardTargets.RangedEngines:
          bombardmentData.TargetPosition = side == BattleSideEnum.Attacker ? this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel[targetSlotIndex].GetGlobalFrame().origin : this._attackerRangedEngineSpawnEntities[targetSlotIndex].GetGlobalFrame().origin;
          break;
        default:
          if (targetSlotIndex == -1)
          {
            bombardmentData.TargetPosition = Vec3.Zero;
            break;
          }
          bombardmentData.TargetPosition = side == BattleSideEnum.Attacker ? this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel[targetSlotIndex].GetGlobalFrame().origin : this._attackerRangedEngineSpawnEntities[targetSlotIndex].GetGlobalFrame().origin;
          bombardmentData.TargetPosition += (bombardmentData.TargetPosition - bombardmentData.ShooterGlobalFrame.origin).NormalizedCopy() * 2f;
          Campaign.Current.MapSceneWrapper.GetHeightAtPoint(bombardmentData.TargetPosition.AsVec2, ref bombardmentData.TargetPosition.z);
          break;
      }
      bombardmentData.TargetAlignedShooterGlobalFrame = bombardmentData.ShooterGlobalFrame;
      bombardmentData.TargetAlignedShooterGlobalFrame.rotation.f.AsVec2 = (bombardmentData.TargetPosition - bombardmentData.ShooterGlobalFrame.origin).AsVec2;
      bombardmentData.TargetAlignedShooterGlobalFrame.rotation.f.NormalizeWithoutChangingZ();
      bombardmentData.TargetAlignedShooterGlobalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      bombardmentData.LaunchGlobalPosition = bombardmentData.TargetAlignedShooterGlobalFrame.TransformToParent(this.MapScreen.PrefabEntityCache.GetLaunchEntitialFrameForSiegeEngine(machineType, side).origin);
      float lengthSquared = (bombardmentData.LaunchGlobalPosition.AsVec2 - bombardmentData.TargetPosition.AsVec2).LengthSquared;
      float num1 = MathF.Sqrt(lengthSquared);
      float num2 = bombardmentData.LaunchGlobalPosition.z - bombardmentData.TargetPosition.z;
      float num3 = bombardmentData.MissileSpeed * bombardmentData.MissileSpeed;
      float num4 = num3 * num3;
      float x1 = num4 - bombardmentData.Gravity * (float) ((double) bombardmentData.Gravity * (double) lengthSquared - 2.0 * (double) num2 * (double) num3);
      if ((double) x1 >= 0.0)
      {
        bombardmentData.LaunchAngle = MathF.Atan((float) (((double) num3 - (double) MathF.Sqrt(x1)) / ((double) bombardmentData.Gravity * (double) num1)));
      }
      else
      {
        bombardmentData.Gravity = 1f;
        float x2 = num4 - bombardmentData.Gravity * (float) ((double) bombardmentData.Gravity * (double) lengthSquared - 2.0 * (double) num2 * (double) num3);
        bombardmentData.LaunchAngle = MathF.Atan((float) (((double) num3 - (double) MathF.Sqrt(x2)) / ((double) bombardmentData.Gravity * (double) num1)));
      }
      float num5 = bombardmentData.MissileSpeed * MathF.Cos(bombardmentData.LaunchAngle);
      bombardmentData.FlightDuration = num1 / num5;
      bombardmentData.TotalDuration = bombardmentData.RotationDuration + bombardmentData.ReloadDuration + bombardmentData.AimingDuration + bombardmentData.MissileLaunchDuration + bombardmentData.FlightDuration;
    }

    private void RemoveContourMesh()
    {
      if (!((NativeObject) this._contourMaskMesh != (NativeObject) null))
        return;
      this.MapScreen.ContourMaskEntity.RemoveComponentWithMesh(this._contourMaskMesh);
      this._contourMaskMesh = (Mesh) null;
    }

    public void ReleaseResources()
    {
      this.RemoveSiege();
      this.ResetPartyIcon();
    }

    public void ValidateIsDirty(float realDt, float dt)
    {
      if (this.PartyBase.IsSettlement)
      {
        this.RefreshPartyIcon();
        PartyVisualManager.Current.RegisterFadingVisual(this);
      }
      else if (this.PartyBase.MemberRoster.TotalManCount != 0)
      {
        this.RefreshPartyIcon();
        if (((double) this._entityAlpha >= 1.0 || !this.TargetVisibility) && ((double) this._entityAlpha <= 0.0 || this.TargetVisibility))
          return;
        PartyVisualManager.Current.RegisterFadingVisual(this);
      }
      else
        this.ResetPartyIcon();
    }

    public void TickFadingState(float realDt, float dt)
    {
      if ((double) this._entityAlpha < 1.0 && this.TargetVisibility || (double) this._entityAlpha > 0.0 && !this.TargetVisibility)
      {
        if (this.TargetVisibility)
        {
          if ((double) this._entityAlpha <= 0.0)
          {
            this.StrategicEntity.SetVisibilityExcludeParents(true);
            this.HumanAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(true);
            this.MountAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(true);
            this.CaravanMountAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(true);
          }
          this._entityAlpha = MathF.Min(this._entityAlpha + realDt * 2f, 1f);
          this.StrategicEntity.SetAlpha(this._entityAlpha);
          this.HumanAgentVisuals?.GetEntity()?.SetAlpha(this._entityAlpha);
          this.MountAgentVisuals?.GetEntity()?.SetAlpha(this._entityAlpha);
          this.CaravanMountAgentVisuals?.GetEntity()?.SetAlpha(this._entityAlpha);
          this.StrategicEntity.EntityFlags &= ~EntityFlags.DoNotTick;
        }
        else
        {
          this._entityAlpha = MathF.Max(this._entityAlpha - realDt * 2f, 0.0f);
          this.StrategicEntity.SetAlpha(this._entityAlpha);
          this.HumanAgentVisuals?.GetEntity()?.SetAlpha(this._entityAlpha);
          this.MountAgentVisuals?.GetEntity()?.SetAlpha(this._entityAlpha);
          this.CaravanMountAgentVisuals?.GetEntity()?.SetAlpha(this._entityAlpha);
          if ((double) this._entityAlpha > 0.0)
            return;
          this.StrategicEntity.SetVisibilityExcludeParents(false);
          this.HumanAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(false);
          this.MountAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(false);
          this.CaravanMountAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(false);
          this.StrategicEntity.EntityFlags |= EntityFlags.DoNotTick;
        }
      }
      else
        PartyVisualManager.Current.UnRegisterFadingVisual(this);
    }

    public void ResetPartyIcon()
    {
      if ((NativeObject) this.StrategicEntity != (NativeObject) null)
        this.RemoveContourMesh();
      if (this.HumanAgentVisuals != null)
      {
        this.HumanAgentVisuals.Reset();
        this.HumanAgentVisuals = (AgentVisuals) null;
      }
      if (this.MountAgentVisuals != null)
      {
        this.MountAgentVisuals.Reset();
        this.MountAgentVisuals = (AgentVisuals) null;
      }
      if (this.CaravanMountAgentVisuals != null)
      {
        this.CaravanMountAgentVisuals.Reset();
        this.CaravanMountAgentVisuals = (AgentVisuals) null;
      }
      if ((NativeObject) this.StrategicEntity != (NativeObject) null)
      {
        if ((this.StrategicEntity.EntityFlags & EntityFlags.Ignore) != (EntityFlags) 0)
          this.StrategicEntity.RemoveFromPredisplayEntity();
        this.StrategicEntity.ClearComponents();
      }
      PartyVisualManager.Current.UnRegisterFadingVisual(this);
    }

    private void RefreshPartyIcon()
    {
      if (!this.PartyBase.IsVisualDirty)
        return;
      this.PartyBase.OnVisualsUpdated();
      bool flag1 = true;
      bool flag2 = true;
      if (!this.PartyBase.IsSettlement)
      {
        this.ResetPartyIcon();
        this.CircleLocalFrame = this.CircleLocalFrame with
        {
          origin = Vec3.Zero
        };
      }
      else
      {
        this.RemoveSiege();
        this.StrategicEntity.RemoveAllParticleSystems();
        this.StrategicEntity.EntityFlags |= EntityFlags.DoNotTick;
      }
      if (this.PartyBase.MobileParty?.CurrentSettlement != null)
      {
        Dictionary<int, List<GameEntity>> entitiesWithLevels = PartyVisualManager.Current.GetVisualOfParty(this.PartyBase.MobileParty.CurrentSettlement.Party)._gateBannerEntitiesWithLevels;
        if (!this.PartyBase.MobileParty.MapFaction.IsAtWarWith(this.PartyBase.MobileParty.CurrentSettlement.MapFaction) && entitiesWithLevels != null && !entitiesWithLevels.IsEmpty<KeyValuePair<int, List<GameEntity>>>() && this.PartyBase.LeaderHero?.ClanBanner != null)
        {
          string bannerKey = this.PartyBase.LeaderHero.ClanBanner.Serialize();
          if (!string.IsNullOrEmpty(bannerKey))
          {
            int num1 = 0;
            foreach (MobileParty party in (List<MobileParty>) this.PartyBase.MobileParty.CurrentSettlement.Parties)
            {
              if (party != this.PartyBase.MobileParty)
              {
                if (party.LeaderHero?.ClanBanner != null)
                  ++num1;
              }
              else
                break;
            }
            MatrixFrame identity = MatrixFrame.Identity;
            int wallLevel = this.PartyBase.MobileParty.CurrentSettlement.Town.GetWallLevel();
            int count = entitiesWithLevels[wallLevel].Count;
            if (count == 0)
            {
              Debug.FailedAssert(string.Format("{0} - has no Banner Entities at level {1}.", (object) this.PartyBase.MobileParty.CurrentSettlement.Name, (object) wallLevel), "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\PartyVisual.cs", nameof (RefreshPartyIcon), 1060);
            }
            else
            {
              GameEntity gameEntity = entitiesWithLevels[wallLevel][num1 % count];
              GameEntity child = gameEntity.GetChild(0);
              MatrixFrame matrixFrame1 = (NativeObject) child != (NativeObject) null ? child.GetGlobalFrame() : gameEntity.GetGlobalFrame();
              int num2 = num1 / count;
              float num3 = 0.75f / (float) MathF.Max(1, this.PartyBase.MobileParty.CurrentSettlement.Parties.Count<MobileParty>((Func<MobileParty, bool>) (p => p.LeaderHero?.ClanBanner != null)) / (count * 2));
              int num4 = num2 % 2 == 0 ? -1 : 1;
              Vec3 vec3 = matrixFrame1.rotation.f / 2f * (float) num4;
              if ((double) vec3.Length < (double) matrixFrame1.rotation.s.Length)
                vec3 = matrixFrame1.rotation.s / 2f * (float) num4;
              identity.origin = matrixFrame1.origin + vec3 * (float) ((num2 + 1) / 2) * (float) (num2 % 2 * 2 - 1) * num3 * (float) num4;
              identity.origin = this.StrategicEntity.GetGlobalFrame().TransformToLocal(identity.origin);
              float scaleAmount = MBMath.Map((float) ((double) this.PartyBase.NumberOfAllMembers / 400.0 * (this.PartyBase.MobileParty.Army == null || this.PartyBase.MobileParty.Army.LeaderParty != this.PartyBase.MobileParty ? 1.0 : 1.25)), 0.0f, 1f, 0.2f, 0.5f);
              MatrixFrame matrixFrame2 = identity.Elevate(-scaleAmount);
              matrixFrame2.rotation.ApplyScaleLocal(scaleAmount);
              matrixFrame2.rotation = this.StrategicEntity.GetGlobalFrame().rotation.TransformToLocal(matrixFrame2.rotation);
              this.StrategicEntity.AddSphereAsBody(matrixFrame2.origin + Vec3.Up * 0.3f, 0.15f, BodyFlags.None);
              flag1 = false;
              string bannerMeshName = "campaign_flag";
              if (this._cachedBannerComponent.Item1 == bannerKey + bannerMeshName)
              {
                this._cachedBannerComponent.Item2.GetFirstMetaMesh().Frame = matrixFrame2;
                this.StrategicEntity.AddComponent(this._cachedBannerComponent.Item2);
              }
              else
              {
                MetaMesh bannerOfCharacter = PartyVisual.GetBannerOfCharacter(new Banner(bannerKey), bannerMeshName);
                bannerOfCharacter.Frame = matrixFrame2;
                int componentCount = this.StrategicEntity.GetComponentCount(GameEntity.ComponentType.ClothSimulator);
                this.StrategicEntity.AddMultiMesh(bannerOfCharacter);
                if (this.StrategicEntity.GetComponentCount(GameEntity.ComponentType.ClothSimulator) > componentCount)
                {
                  this._cachedBannerComponent.Item1 = bannerKey + bannerMeshName;
                  this._cachedBannerComponent.Item2 = this.StrategicEntity.GetComponentAtIndex(componentCount, GameEntity.ComponentType.ClothSimulator);
                }
              }
            }
          }
        }
        else
          this.StrategicEntity.RemovePhysics();
      }
      else
      {
        this.IsEnemy = this.PartyBase.MapFaction != null && FactionManager.IsAtWarAgainstFaction(this.PartyBase.MapFaction, Hero.MainHero.MapFaction);
        this.IsFriendly = this.PartyBase.MapFaction != null && FactionManager.IsAlliedWithFaction(this.PartyBase.MapFaction, Hero.MainHero.MapFaction);
        this.InitializePartyCollider(this.PartyBase);
        if (this.PartyBase.IsSettlement)
        {
          if (this.PartyBase.Settlement.IsFortification)
            this.UpdateDefenderSiegeEntitiesCache();
          this.AddSiegeIconComponents(this.PartyBase);
          this.SetSettlementLevelVisibility();
          this.RefreshWallState();
          this.RefreshTownPhysicalEntitiesState(this.PartyBase);
          this.RefreshSiegePreparations(this.PartyBase);
          if (this.PartyBase.Settlement.IsVillage)
          {
            MapEvent mapEvent = this.PartyBase.MapEvent;
            if ((mapEvent != null ? (mapEvent.IsRaid ? 1 : 0) : 0) != 0)
            {
              this.StrategicEntity.EntityFlags &= ~EntityFlags.DoNotTick;
              this.StrategicEntity.AddParticleSystemComponent("psys_fire_smoke_env_point");
            }
            else if (this.PartyBase.Settlement.IsRaided)
            {
              this.StrategicEntity.EntityFlags &= ~EntityFlags.DoNotTick;
              this.StrategicEntity.AddParticleSystemComponent("map_icon_village_plunder_fx");
            }
          }
        }
        else
          this.AddMobileIconComponents(this.PartyBase, ref flag2, ref flag2);
      }
      if (flag1)
        this._cachedBannerComponent = ((string) null, (GameEntityComponent) null);
      if (flag2)
        this._cachedBannerEntity = ((string) null, (GameEntity) null);
      this.StrategicEntity.CheckResources(true, false);
    }

    private void RemoveSiege()
    {
      foreach ((GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity) rangedMachineEntity in this._siegeRangedMachineEntities)
        this.StrategicEntity.RemoveChild(rangedMachineEntity.Item1, false, false, true, 36);
      foreach ((GameEntity, BattleSideEnum, int) siegeMissileEntity in this._siegeMissileEntities)
        this.StrategicEntity.RemoveChild(siegeMissileEntity.Item1, false, false, true, 37);
      foreach ((GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity) meleeMachineEntity in this._siegeMeleeMachineEntities)
        this.StrategicEntity.RemoveChild(meleeMachineEntity.Item1, false, false, true, 38);
      this._siegeRangedMachineEntities.Clear();
      this._siegeMeleeMachineEntities.Clear();
      this._siegeMissileEntities.Clear();
    }

    private void RefreshSiegePreparations(PartyBase party)
    {
      List<GameEntity> children = new List<GameEntity>();
      this.StrategicEntity.GetChildrenRecursive(ref children);
      List<GameEntity> all = children.FindAll((Predicate<GameEntity>) (x => x.HasTag("siege_preparation")));
      bool flag = false;
      if (party.Settlement != null && party.Settlement.IsUnderSiege)
      {
        SiegeEvent.SiegeEngineConstructionProgress siegePreparations = party.Settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.SiegePreparations;
        if (siegePreparations != null && (double) siegePreparations.Progress >= 1.0)
        {
          flag = true;
          foreach (GameEntity gameEntity in all)
            gameEntity.SetVisibilityExcludeParents(true);
        }
      }
      if (flag)
        return;
      foreach (GameEntity gameEntity in all)
        gameEntity.SetVisibilityExcludeParents(false);
    }

    private void AddSiegeIconComponents(PartyBase party)
    {
      if (!party.Settlement.IsUnderSiege)
        return;
      int wallLevel = -1;
      if (party.Settlement.SiegeEvent.BesiegedSettlement.IsTown || party.Settlement.SiegeEvent.BesiegedSettlement.IsCastle)
        wallLevel = party.Settlement.SiegeEvent.BesiegedSettlement.Town.GetWallLevel();
      SiegeEvent.SiegeEngineConstructionProgress[] rangedSiegeEngines1 = party.Settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedRangedSiegeEngines;
      for (int slotIndex = 0; slotIndex < rangedSiegeEngines1.Length; ++slotIndex)
      {
        SiegeEvent.SiegeEngineConstructionProgress constructionProgress = rangedSiegeEngines1[slotIndex];
        if ((constructionProgress != null ? (constructionProgress.IsActive ? 1 : 0) : 0) != 0 && slotIndex < this._attackerRangedEngineSpawnEntities.Length)
        {
          MatrixFrame globalFrame = this._attackerRangedEngineSpawnEntities[slotIndex].GetGlobalFrame();
          globalFrame.rotation.MakeUnit();
          this.AddSiegeMachine(rangedSiegeEngines1[slotIndex].SiegeEngine, globalFrame, BattleSideEnum.Attacker, wallLevel, slotIndex);
        }
      }
      SiegeEvent.SiegeEngineConstructionProgress[] meleeSiegeEngines = party.Settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedMeleeSiegeEngines;
      for (int slotIndex = 0; slotIndex < meleeSiegeEngines.Length; ++slotIndex)
      {
        SiegeEvent.SiegeEngineConstructionProgress constructionProgress = meleeSiegeEngines[slotIndex];
        if ((constructionProgress != null ? (constructionProgress.IsActive ? 1 : 0) : 0) != 0)
        {
          if (meleeSiegeEngines[slotIndex].SiegeEngine == DefaultSiegeEngineTypes.SiegeTower)
          {
            int index = slotIndex - this._attackerBatteringRamSpawnEntities.Length;
            if (index >= 0)
            {
              MatrixFrame globalFrame = this._attackerSiegeTowerSpawnEntities[index].GetGlobalFrame();
              globalFrame.rotation.MakeUnit();
              this.AddSiegeMachine(meleeSiegeEngines[slotIndex].SiegeEngine, globalFrame, BattleSideEnum.Attacker, wallLevel, slotIndex);
            }
          }
          else if (meleeSiegeEngines[slotIndex].SiegeEngine == DefaultSiegeEngineTypes.Ram || meleeSiegeEngines[slotIndex].SiegeEngine == DefaultSiegeEngineTypes.ImprovedRam)
          {
            int index = slotIndex;
            if (index >= 0)
            {
              MatrixFrame globalFrame = this._attackerBatteringRamSpawnEntities[index].GetGlobalFrame();
              globalFrame.rotation.MakeUnit();
              this.AddSiegeMachine(meleeSiegeEngines[slotIndex].SiegeEngine, globalFrame, BattleSideEnum.Attacker, wallLevel, slotIndex);
            }
          }
        }
      }
      SiegeEvent.SiegeEngineConstructionProgress[] rangedSiegeEngines2 = party.Settlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Defender).SiegeEngines.DeployedRangedSiegeEngines;
      for (int slotIndex = 0; slotIndex < rangedSiegeEngines2.Length; ++slotIndex)
      {
        SiegeEvent.SiegeEngineConstructionProgress constructionProgress = rangedSiegeEngines2[slotIndex];
        if ((constructionProgress != null ? (constructionProgress.IsActive ? 1 : 0) : 0) != 0 && slotIndex < this._defenderBreachableWallEntitiesCacheForCurrentLevel.Length)
        {
          MatrixFrame globalFrame = this._defenderBreachableWallEntitiesCacheForCurrentLevel[slotIndex].GetGlobalFrame();
          globalFrame.rotation.MakeUnit();
          this.AddSiegeMachine(rangedSiegeEngines2[slotIndex].SiegeEngine, globalFrame, BattleSideEnum.Defender, wallLevel, slotIndex);
        }
      }
      for (int index1 = 0; index1 < 2; ++index1)
      {
        BattleSideEnum side = index1 == 0 ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
        MBReadOnlyList<SiegeEvent.SiegeEngineMissile> siegeEngineMissiles = party.Settlement.SiegeEvent.GetSiegeEventSide(side).SiegeEngineMissiles;
        for (int index2 = 0; index2 < siegeEngineMissiles.Count; ++index2)
          this.AddSiegeMissile(siegeEngineMissiles[index2].ShooterSiegeEngineType, this.StrategicEntity.GetGlobalFrame(), side, index2);
      }
    }

    private void AddSiegeMachine(
      SiegeEngineType type,
      MatrixFrame globalFrame,
      BattleSideEnum side,
      int wallLevel,
      int slotIndex)
    {
      GameEntity gameEntity1 = GameEntity.Instantiate(this.MapScene, Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapPrefabName(type, wallLevel, side), true);
      if (!((NativeObject) gameEntity1 != (NativeObject) null))
        return;
      this.StrategicEntity.AddChild(gameEntity1);
      MatrixFrame frame;
      gameEntity1.GetFrame(out frame);
      gameEntity1.SetGlobalFrame(globalFrame.TransformToParent(frame));
      List<GameEntity> children = new List<GameEntity>();
      gameEntity1.GetChildrenRecursive(ref children);
      GameEntity gameEntity2 = (GameEntity) null;
      if (children.Any<GameEntity>((Func<GameEntity, bool>) (entity => entity.HasTag("siege_machine_mapicon_skeleton"))))
      {
        GameEntity gameEntity3 = children.Find((Predicate<GameEntity>) (entity => entity.HasTag("siege_machine_mapicon_skeleton")));
        if ((NativeObject) gameEntity3.Skeleton != (NativeObject) null)
        {
          gameEntity2 = gameEntity3;
          string fireAnimationName = Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapFireAnimationName(type, side);
          gameEntity2.Skeleton.SetAnimationAtChannel(fireAnimationName, 0, blendInPeriod: 0.0f, startProgress: 1f);
        }
      }
      if (type.IsRanged)
        this._siegeRangedMachineEntities.Add(ValueTuple.Create<GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity>(gameEntity1, side, slotIndex, globalFrame, gameEntity2));
      else
        this._siegeMeleeMachineEntities.Add(ValueTuple.Create<GameEntity, BattleSideEnum, int, MatrixFrame, GameEntity>(gameEntity1, side, slotIndex, globalFrame, gameEntity2));
    }

    private void AddSiegeMissile(
      SiegeEngineType type,
      MatrixFrame globalFrame,
      BattleSideEnum side,
      int missileIndex)
    {
      GameEntity gameEntity = GameEntity.Instantiate(this.MapScene, Campaign.Current.Models.SiegeEventModel.GetSiegeEngineMapProjectilePrefabName(type), true);
      if (!((NativeObject) gameEntity != (NativeObject) null))
        return;
      this._siegeMissileEntities.Add(ValueTuple.Create<GameEntity, BattleSideEnum, int>(gameEntity, side, missileIndex));
      this.StrategicEntity.AddChild(gameEntity);
      this.StrategicEntity.EntityFlags &= ~EntityFlags.DoNotTick;
      MatrixFrame frame;
      gameEntity.GetFrame(out frame);
      gameEntity.SetGlobalFrame(globalFrame.TransformToParent(frame));
      gameEntity.SetVisibilityExcludeParents(false);
    }

    private void AddMobileIconComponents(
      PartyBase party,
      ref bool clearBannerComponentCache,
      ref bool clearBannerEntityCache)
    {
      uint contourColor = FactionManager.IsAtWarAgainstFaction(party.MapFaction, Hero.MainHero.MapFaction) ? 4294905856U : 4278206719U;
      if (party.MobileParty.BesiegedSettlement?.SiegeEvent != null && party.MobileParty.BesiegedSettlement.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(party, MapEvent.BattleTypes.Siege))
      {
        GameEntity empty = GameEntity.CreateEmpty(this.StrategicEntity.Scene);
        empty.AddMultiMesh(MetaMesh.GetCopy("map_icon_siege_camp_tent"));
        MatrixFrame identity1 = MatrixFrame.Identity;
        identity1.rotation.ApplyScaleLocal(1.2f);
        empty.SetFrame(ref identity1);
        string bannerKey = (string) null;
        if (party.LeaderHero?.ClanBanner != null)
          bannerKey = party.LeaderHero.ClanBanner.Serialize();
        bool flag = party.MobileParty.Army != null && party.MobileParty.Army.LeaderParty == party.MobileParty;
        MatrixFrame identity2 = MatrixFrame.Identity;
        identity2.origin.z += flag ? 0.2f : 0.15f;
        identity2.rotation.RotateAboutUp(1.57079637f);
        float scaleAmount = MBMath.Map((float) ((double) party.TotalStrength / 500.0 * (party.MobileParty.Army != null & flag ? 1.0 : 0.800000011920929)), 0.0f, 1f, 0.15f, 0.5f);
        identity2.rotation.ApplyScaleLocal(scaleAmount);
        if (!string.IsNullOrEmpty(bannerKey))
        {
          clearBannerComponentCache = false;
          string bannerMeshName = "campaign_flag";
          if (this._cachedBannerComponent.Item1 == bannerKey + bannerMeshName)
          {
            this._cachedBannerComponent.Item2.GetFirstMetaMesh().Frame = identity2;
            this.StrategicEntity.AddComponent(this._cachedBannerComponent.Item2);
          }
          else
          {
            MetaMesh bannerOfCharacter = PartyVisual.GetBannerOfCharacter(new Banner(bannerKey), bannerMeshName);
            bannerOfCharacter.Frame = identity2;
            int componentCount = empty.GetComponentCount(GameEntity.ComponentType.ClothSimulator);
            empty.AddMultiMesh(bannerOfCharacter);
            if (empty.GetComponentCount(GameEntity.ComponentType.ClothSimulator) > componentCount)
            {
              this._cachedBannerComponent.Item1 = bannerKey + bannerMeshName;
              this._cachedBannerComponent.Item2 = empty.GetComponentAtIndex(componentCount, GameEntity.ComponentType.ClothSimulator);
            }
          }
        }
        this.StrategicEntity.AddChild(empty);
      }
      else
      {
        if (PartyBaseHelper.GetVisualPartyLeader(party) == null)
          return;
        string bannerKey = (string) null;
        if (party.LeaderHero?.ClanBanner != null)
          bannerKey = party.LeaderHero.ClanBanner.Serialize();
        ActionIndexCache leaderAction = ActionIndexCache.act_none;
        ActionIndexCache mountAction = ActionIndexCache.act_none;
        MapEvent mapEvent = party.MobileParty.Army == null || !party.MobileParty.Army.DoesLeaderPartyAndAttachedPartiesContain(party.MobileParty) ? party.MapEvent : party.MobileParty.Army.LeaderParty.MapEvent;
        int wieldedItemIndex;
        this.GetMeleeWeaponToWield(party, out wieldedItemIndex);
        if (mapEvent != null && (mapEvent.EventType == MapEvent.BattleTypes.FieldBattle || mapEvent.EventType == MapEvent.BattleTypes.Raid && party.MapEventSide == mapEvent.AttackerSide || mapEvent.EventType == MapEvent.BattleTypes.SiegeOutside || mapEvent.EventType == MapEvent.BattleTypes.SallyOut))
          PartyVisual.GetPartyBattleAnimation(party, wieldedItemIndex, out leaderAction, out mountAction);
        IFaction mapFaction1 = party.MapFaction;
        uint teamColor1 = mapFaction1 != null ? mapFaction1.Color : 4291609515U;
        IFaction mapFaction2 = party.MapFaction;
        uint teamColor2 = mapFaction2 != null ? mapFaction2.Color2 : 4291609515U;
        this.AddCharacterToPartyIcon(PartyBaseHelper.GetVisualPartyLeader(party), contourColor, bannerKey, wieldedItemIndex, teamColor1, teamColor2, leaderAction, mountAction, MBRandom.NondeterministicRandomFloat * 0.7f, ref clearBannerEntityCache);
        if (!party.IsMobile)
          return;
        string mountStringId;
        string harnessStringId;
        party.MobileParty.GetMountAndHarnessVisualIdsForPartyIcon(out mountStringId, out harnessStringId);
        if (string.IsNullOrEmpty(mountStringId))
          return;
        this.AddMountToPartyIcon(new Vec3(0.3f, -0.25f), mountStringId, harnessStringId, contourColor, PartyBaseHelper.GetVisualPartyLeader(party));
      }
    }

    private void GetMeleeWeaponToWield(PartyBase party, out int wieldedItemIndex)
    {
      wieldedItemIndex = -1;
      CharacterObject visualPartyLeader = PartyBaseHelper.GetVisualPartyLeader(party);
      if (visualPartyLeader == null)
        return;
      for (int index = 0; index < 5; ++index)
      {
        EquipmentElement equipmentElement = visualPartyLeader.Equipment[index];
        if (equipmentElement.Item != null)
        {
          equipmentElement = visualPartyLeader.Equipment[index];
          if (equipmentElement.Item.PrimaryWeapon.IsMeleeWeapon)
          {
            wieldedItemIndex = index;
            break;
          }
        }
      }
    }

    private static void GetPartyBattleAnimation(
      PartyBase party,
      int wieldedItemIndex,
      out ActionIndexCache leaderAction,
      out ActionIndexCache mountAction)
    {
      leaderAction = ActionIndexCache.act_none;
      mountAction = ActionIndexCache.act_none;
      if (party.MobileParty.Army == null || !party.MobileParty.Army.DoesLeaderPartyAndAttachedPartiesContain(party.MobileParty))
      {
        MapEvent mapEvent1 = party.MapEvent;
      }
      else
      {
        MapEvent mapEvent2 = party.MobileParty.Army.LeaderParty.MapEvent;
      }
      CharacterObject visualPartyLeader = PartyBaseHelper.GetVisualPartyLeader(party);
      if (party.MapEvent?.MapEventSettlement != null && visualPartyLeader != null && !visualPartyLeader.HasMount())
      {
        leaderAction = PartyVisual._raidOnFoot;
      }
      else
      {
        EquipmentElement equipmentElement;
        if (wieldedItemIndex > -1)
        {
          ItemObject itemObject;
          if (visualPartyLeader == null)
          {
            itemObject = (ItemObject) null;
          }
          else
          {
            equipmentElement = visualPartyLeader.Equipment[wieldedItemIndex];
            itemObject = equipmentElement.Item;
          }
          if (itemObject != null)
          {
            equipmentElement = visualPartyLeader.Equipment[wieldedItemIndex];
            WeaponComponent weaponComponent = equipmentElement.Item.WeaponComponent;
            if (weaponComponent != null && weaponComponent.PrimaryWeapon.IsMeleeWeapon)
            {
              if (visualPartyLeader.HasMount())
              {
                equipmentElement = visualPartyLeader.Equipment[10];
                if (equipmentElement.Item.HorseComponent.Monster.MonsterUsage == "camel")
                {
                  if (weaponComponent.GetItemType() == ItemObject.ItemTypeEnum.OneHandedWeapon || weaponComponent.GetItemType() == ItemObject.ItemTypeEnum.TwoHandedWeapon)
                  {
                    leaderAction = PartyVisual._camelSwordAttack;
                    mountAction = PartyVisual._swordAttackMount;
                  }
                  else if (weaponComponent.GetItemType() == ItemObject.ItemTypeEnum.Polearm)
                  {
                    if (weaponComponent.PrimaryWeapon.SwingDamageType == DamageTypes.Invalid)
                    {
                      leaderAction = PartyVisual._camelSpearAttack;
                      mountAction = PartyVisual._spearAttackMount;
                    }
                    else if (weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.TwoHandedPolearm)
                    {
                      leaderAction = PartyVisual._camel1HandedSwingAttack;
                      mountAction = PartyVisual._swingAttackMount;
                    }
                    else
                    {
                      leaderAction = PartyVisual._camel2HandedSwingAttack;
                      mountAction = PartyVisual._swingAttackMount;
                    }
                  }
                }
                else if (weaponComponent.GetItemType() == ItemObject.ItemTypeEnum.OneHandedWeapon || weaponComponent.GetItemType() == ItemObject.ItemTypeEnum.TwoHandedWeapon)
                {
                  leaderAction = PartyVisual._horseSwordAttack;
                  mountAction = PartyVisual._swordAttackMount;
                }
                else if (weaponComponent.GetItemType() == ItemObject.ItemTypeEnum.Polearm)
                {
                  if (weaponComponent.PrimaryWeapon.SwingDamageType == DamageTypes.Invalid)
                  {
                    leaderAction = PartyVisual._horseSpearAttack;
                    mountAction = PartyVisual._spearAttackMount;
                  }
                  else if (weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.TwoHandedPolearm)
                  {
                    leaderAction = PartyVisual._horse1HandedSwingAttack;
                    mountAction = PartyVisual._swingAttackMount;
                  }
                  else
                  {
                    leaderAction = PartyVisual._horse2HandedSwingAttack;
                    mountAction = PartyVisual._swingAttackMount;
                  }
                }
              }
              else if (weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.OneHandedAxe || weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.Mace || weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.OneHandedSword)
                leaderAction = PartyVisual._attack1H;
              else if (weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.TwoHandedAxe || weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.TwoHandedMace || weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.TwoHandedSword)
                leaderAction = PartyVisual._attack2H;
              else if (weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.OneHandedPolearm || weaponComponent.PrimaryWeapon.WeaponClass == WeaponClass.TwoHandedPolearm)
                leaderAction = PartyVisual._attackSpear1HOr2H;
            }
          }
        }
        if (!(leaderAction == ActionIndexCache.act_none))
          return;
        if (visualPartyLeader.HasMount())
        {
          equipmentElement = visualPartyLeader.Equipment[10];
          leaderAction = !(equipmentElement.Item.HorseComponent.Monster.MonsterUsage == "camel") ? PartyVisual._horseUnarmedAttack : PartyVisual._camelUnarmedAttack;
          mountAction = PartyVisual._unarmedAttackMount;
        }
        else
          leaderAction = PartyVisual._attackUnarmed;
      }
    }

    public void RefreshWallState()
    {
      if (this._defenderBreachableWallEntitiesForAllLevels == null)
        return;
      MBReadOnlyList<float> hitPointsRatioList = this.PartyBase?.Settlement == null || this.PartyBase.Settlement != null && !this.PartyBase.Settlement.IsFortification ? (MBReadOnlyList<float>) null : this.PartyBase.Settlement.SettlementWallSectionHitPointsRatioList;
      if (hitPointsRatioList == null)
        return;
      if (hitPointsRatioList.Count == 0)
      {
        Debug.FailedAssert("Town (" + this.PartyBase.Settlement.Name.ToString() + ") doesn't have wall entities defined for it's current level(" + (object) this.PartyBase.Settlement.Town.GetWallLevel() + ")", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\PartyVisual.cs", nameof (RefreshWallState), 1658);
      }
      else
      {
        for (int index = 0; index < this._defenderBreachableWallEntitiesForAllLevels.Length; ++index)
        {
          bool visible = (double) hitPointsRatioList[index % hitPointsRatioList.Count] <= 0.0;
          foreach (GameEntity child in this._defenderBreachableWallEntitiesForAllLevels[index].GetChildren())
          {
            if (child.HasTag("map_solid_wall"))
              child.SetVisibilityExcludeParents(!visible);
            else if (child.HasTag("map_broken_wall"))
              child.SetVisibilityExcludeParents(visible);
          }
        }
      }
    }

    public void RefreshTownPhysicalEntitiesState(PartyBase party)
    {
      if (party?.Settlement == null || !party.Settlement.IsFortification || this.TownPhysicalEntities == null)
        return;
      if (PlayerSiege.PlayerSiegeEvent != null && PlayerSiege.PlayerSiegeEvent.BesiegedSettlement == party.Settlement)
        this.TownPhysicalEntities.ForEach((Action<GameEntity>) (p => p.AddBodyFlags(BodyFlags.Disabled)));
      else
        this.TownPhysicalEntities.ForEach((Action<GameEntity>) (p => p.RemoveBodyFlags(BodyFlags.Disabled)));
    }

    public void SetLevelMask(uint newMask)
    {
      this._currentLevelMask = newMask;
      this.PartyBase.SetVisualAsDirty();
    }

    public void RefreshLevelMask()
    {
      if (this.PartyBase.IsSettlement)
      {
        uint newMask = 0;
        if (this.PartyBase.Settlement.IsVillage)
          newMask = (this.PartyBase.Settlement.Village.VillageState != Village.VillageStates.Looted ? newMask | Campaign.Current.MapSceneWrapper.GetSceneLevel("civilian") : newMask | Campaign.Current.MapSceneWrapper.GetSceneLevel("looted")) | PartyVisual.GetLevelOfProduction(this.PartyBase.Settlement);
        else if (this.PartyBase.Settlement.IsTown || this.PartyBase.Settlement.IsCastle)
        {
          if (this.PartyBase.Settlement.Town.GetWallLevel() == 1)
            newMask |= Campaign.Current.MapSceneWrapper.GetSceneLevel("level_1");
          else if (this.PartyBase.Settlement.Town.GetWallLevel() == 2)
            newMask |= Campaign.Current.MapSceneWrapper.GetSceneLevel("level_2");
          else if (this.PartyBase.Settlement.Town.GetWallLevel() == 3)
            newMask |= Campaign.Current.MapSceneWrapper.GetSceneLevel("level_3");
          if (this.PartyBase.Settlement.SiegeEvent != null)
            newMask |= Campaign.Current.MapSceneWrapper.GetSceneLevel("siege");
          else
            newMask |= Campaign.Current.MapSceneWrapper.GetSceneLevel("civilian");
        }
        else if (this.PartyBase.Settlement.IsHideout)
          newMask |= Campaign.Current.MapSceneWrapper.GetSceneLevel("level_1");
        if ((int) this._currentLevelMask != (int) newMask)
          this.SetLevelMask(newMask);
      }
      this.PartyBase.OnLevelMaskUpdated();
    }

    private static uint GetLevelOfProduction(Settlement settlement)
    {
      uint levelOfProduction = 0;
      if (settlement.IsVillage)
      {
        if ((double) settlement.Village.Hearth < 200.0)
          levelOfProduction |= Campaign.Current.MapSceneWrapper.GetSceneLevel("level_1");
        else if ((double) settlement.Village.Hearth < 600.0)
          levelOfProduction |= Campaign.Current.MapSceneWrapper.GetSceneLevel("level_2");
        else
          levelOfProduction |= Campaign.Current.MapSceneWrapper.GetSceneLevel("level_3");
      }
      return levelOfProduction;
    }

    private void SetSettlementLevelVisibility()
    {
      List<GameEntity> children = new List<GameEntity>();
      this.StrategicEntity.GetChildrenRecursive(ref children);
      foreach (GameEntity gameEntity in children)
      {
        if ((gameEntity.GetUpgradeLevelMask() & (GameEntity.UpgradeLevelMask) this._currentLevelMask) == (GameEntity.UpgradeLevelMask) this._currentLevelMask)
        {
          gameEntity.SetVisibilityExcludeParents(true);
          gameEntity.SetPhysicsState(true, true);
        }
        else
        {
          gameEntity.SetVisibilityExcludeParents(false);
          gameEntity.SetPhysicsState(false, true);
        }
      }
    }

    private void InitializePartyCollider(PartyBase party)
    {
      if (!((NativeObject) this.StrategicEntity != (NativeObject) null) || !party.IsMobile)
        return;
      this.StrategicEntity.AddSphereAsBody(new Vec3(), 0.5f, BodyFlags.Moveable | BodyFlags.OnlyCollideWithRaycast);
    }

    public void OnPartyRemoved()
    {
      if (!((NativeObject) this.StrategicEntity != (NativeObject) null))
        return;
      MapScreen.VisualsOfEntities.Remove(this.StrategicEntity.Pointer);
      foreach (NativeObject child in this.StrategicEntity.GetChildren())
        MapScreen.VisualsOfEntities.Remove(child.Pointer);
      this.ReleaseResources();
      this.StrategicEntity.Remove(111);
    }

    internal void OnMapHoverSiegeEngine(MatrixFrame engineFrame)
    {
      if (PlayerSiege.PlayerSiegeEvent == null)
        return;
      for (int index = 0; index < this._attackerBatteringRamSpawnEntities.Length; ++index)
      {
        MatrixFrame globalFrame = this._attackerBatteringRamSpawnEntities[index].GetGlobalFrame();
        if (globalFrame.NearlyEquals(engineFrame))
        {
          if (!(this._hoveredSiegeEntityFrame != globalFrame))
            return;
          InformationManager.ShowTooltip(typeof (List<TooltipProperty>), (object) SandBoxUIHelper.GetSiegeEngineInProgressTooltip(PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedMeleeSiegeEngines[index]));
          return;
        }
      }
      for (int index = 0; index < this._attackerSiegeTowerSpawnEntities.Length; ++index)
      {
        MatrixFrame globalFrame = this._attackerSiegeTowerSpawnEntities[index].GetGlobalFrame();
        if (globalFrame.NearlyEquals(engineFrame))
        {
          if (!(this._hoveredSiegeEntityFrame != globalFrame))
            return;
          InformationManager.ShowTooltip(typeof (List<TooltipProperty>), (object) SandBoxUIHelper.GetSiegeEngineInProgressTooltip(PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedMeleeSiegeEngines[this._attackerBatteringRamSpawnEntities.Length + index]));
          return;
        }
      }
      for (int index = 0; index < this._attackerRangedEngineSpawnEntities.Length; ++index)
      {
        MatrixFrame globalFrame = this._attackerRangedEngineSpawnEntities[index].GetGlobalFrame();
        if (globalFrame.NearlyEquals(engineFrame))
        {
          if (!(this._hoveredSiegeEntityFrame != globalFrame))
            return;
          InformationManager.ShowTooltip(typeof (List<TooltipProperty>), (object) SandBoxUIHelper.GetSiegeEngineInProgressTooltip(PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedRangedSiegeEngines[index]));
          return;
        }
      }
      for (int index = 0; index < this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel.Length; ++index)
      {
        MatrixFrame globalFrame = this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel[index].GetGlobalFrame();
        if (globalFrame.NearlyEquals(engineFrame))
        {
          if (!(this._hoveredSiegeEntityFrame != globalFrame))
            return;
          InformationManager.ShowTooltip(typeof (List<TooltipProperty>), (object) SandBoxUIHelper.GetSiegeEngineInProgressTooltip(PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Defender).SiegeEngines.DeployedRangedSiegeEngines[index]));
          return;
        }
      }
      for (int wallIndex = 0; wallIndex < this._defenderBreachableWallEntitiesCacheForCurrentLevel.Length; ++wallIndex)
      {
        MatrixFrame globalFrame = this._defenderBreachableWallEntitiesCacheForCurrentLevel[wallIndex].GetGlobalFrame();
        if (globalFrame.NearlyEquals(engineFrame))
        {
          if (!(this._hoveredSiegeEntityFrame != globalFrame) || !this.PartyBase.IsSettlement)
            return;
          InformationManager.ShowTooltip(typeof (List<TooltipProperty>), (object) SandBoxUIHelper.GetWallSectionTooltip(this.PartyBase.Settlement, wallIndex));
          return;
        }
      }
      this._hoveredSiegeEntityFrame = MatrixFrame.Identity;
    }

    internal void OnMapHoverSiegeEngineEnd()
    {
      this._hoveredSiegeEntityFrame = MatrixFrame.Identity;
      MBInformationManager.HideInformations();
    }

    public void OnStartup()
    {
      bool flag1 = false;
      if (this.PartyBase.IsMobile)
      {
        this.StrategicEntity = GameEntity.CreateEmpty(this.MapScene);
        if (!this.PartyBase.IsVisible)
          this.StrategicEntity.EntityFlags |= EntityFlags.DoNotTick;
      }
      else if (this.PartyBase.IsSettlement)
      {
        this.StrategicEntity = this.MapScene.GetCampaignEntityWithName(this.PartyBase.Id);
        if ((NativeObject) this.StrategicEntity == (NativeObject) null)
        {
          Campaign.Current.MapSceneWrapper.AddNewEntityToMapScene(this.PartyBase.Settlement.StringId, this.PartyBase.Settlement.Position2D);
          this.StrategicEntity = this.MapScene.GetCampaignEntityWithName(this.PartyBase.Id);
        }
        bool flag2 = false;
        if (this.PartyBase.Settlement.IsFortification)
        {
          List<GameEntity> children = new List<GameEntity>();
          this.StrategicEntity.GetChildrenRecursive(ref children);
          this.PopulateSiegeEngineFrameListsFromChildren(children);
          this.UpdateDefenderSiegeEntitiesCache();
          this.TownPhysicalEntities = children.FindAll((Predicate<GameEntity>) (x => x.HasTag("bo_town")));
          List<GameEntity> gameEntityList = new List<GameEntity>();
          Dictionary<int, List<GameEntity>> dictionary = new Dictionary<int, List<GameEntity>>();
          dictionary.Add(1, new List<GameEntity>());
          dictionary.Add(2, new List<GameEntity>());
          dictionary.Add(3, new List<GameEntity>());
          List<MatrixFrame> matrixFrameList1 = new List<MatrixFrame>();
          List<MatrixFrame> matrixFrameList2 = new List<MatrixFrame>();
          foreach (GameEntity gameEntity in children)
          {
            if (gameEntity.HasTag("main_map_city_gate"))
            {
              PartyBase.IsPositionOkForTraveling(gameEntity.GetGlobalFrame().origin.AsVec2);
              flag2 = true;
              gameEntityList.Add(gameEntity);
            }
            if (gameEntity.HasTag("map_settlement_circle"))
            {
              this.CircleLocalFrame = gameEntity.GetGlobalFrame();
              flag1 = true;
              gameEntity.SetVisibilityExcludeParents(false);
              gameEntityList.Add(gameEntity);
            }
            if (gameEntity.HasTag("map_banner_placeholder"))
            {
              int upgradeLevelOfEntity = gameEntity.Parent.GetUpgradeLevelOfEntity();
              if (upgradeLevelOfEntity == 0)
              {
                dictionary[1].Add(gameEntity);
                dictionary[2].Add(gameEntity);
                dictionary[3].Add(gameEntity);
              }
              else
                dictionary[upgradeLevelOfEntity].Add(gameEntity);
              gameEntityList.Add(gameEntity);
            }
            if (gameEntity.HasTag("map_camp_area_1"))
            {
              matrixFrameList1.Add(gameEntity.GetGlobalFrame());
              gameEntityList.Add(gameEntity);
            }
            else if (gameEntity.HasTag("map_camp_area_2"))
            {
              matrixFrameList2.Add(gameEntity.GetGlobalFrame());
              gameEntityList.Add(gameEntity);
            }
          }
          this._gateBannerEntitiesWithLevels = dictionary;
          if (this.PartyBase.Settlement.IsFortification)
          {
            this.PartyBase.Settlement.Town.BesiegerCampPositions1 = matrixFrameList1.ToArray();
            this.PartyBase.Settlement.Town.BesiegerCampPositions2 = matrixFrameList2.ToArray();
          }
          foreach (GameEntity gameEntity in gameEntityList)
            gameEntity.Remove(112);
        }
        if (!flag2)
        {
          if (!this.PartyBase.Settlement.IsTown)
          {
            int num = this.PartyBase.Settlement.IsCastle ? 1 : 0;
          }
          if (!PartyBase.IsPositionOkForTraveling(this.PartyBase.Settlement.GatePosition))
          {
            Vec2 gatePosition = this.PartyBase.Settlement.GatePosition;
          }
        }
      }
      CharacterObject visualPartyLeader = PartyBaseHelper.GetVisualPartyLeader(this.PartyBase);
      if (!flag1)
      {
        this.CircleLocalFrame = MatrixFrame.Identity;
        if (this.PartyBase.IsSettlement)
        {
          MatrixFrame circleLocalFrame = this.CircleLocalFrame;
          Mat3 rotation = circleLocalFrame.rotation;
          if (this.PartyBase.Settlement.IsVillage)
            rotation.ApplyScaleLocal(1.75f);
          else if (this.PartyBase.Settlement.IsTown)
            rotation.ApplyScaleLocal(5.75f);
          else if (this.PartyBase.Settlement.IsCastle)
            rotation.ApplyScaleLocal(2.75f);
          else
            rotation.ApplyScaleLocal(1.75f);
          circleLocalFrame.rotation = rotation;
          this.CircleLocalFrame = circleLocalFrame;
        }
        else if (visualPartyLeader != null && visualPartyLeader.HasMount() || this.PartyBase.MobileParty.IsCaravan)
        {
          MatrixFrame circleLocalFrame = this.CircleLocalFrame;
          Mat3 rotation = circleLocalFrame.rotation;
          rotation.ApplyScaleLocal(0.4625f);
          circleLocalFrame.rotation = rotation;
          this.CircleLocalFrame = circleLocalFrame;
        }
        else
        {
          MatrixFrame circleLocalFrame = this.CircleLocalFrame;
          Mat3 rotation = circleLocalFrame.rotation;
          rotation.ApplyScaleLocal(0.3725f);
          circleLocalFrame.rotation = rotation;
          this.CircleLocalFrame = circleLocalFrame;
        }
      }
      this.StrategicEntity.SetVisibilityExcludeParents(this.PartyBase.IsVisible);
      this.HumanAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(this.PartyBase.IsVisible);
      this.MountAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(this.PartyBase.IsVisible);
      this.CaravanMountAgentVisuals?.GetEntity()?.SetVisibilityExcludeParents(this.PartyBase.IsVisible);
      this.StrategicEntity.SetReadyToRender(true);
      this.StrategicEntity.SetEntityEnvMapVisibility(false);
      this._entityAlpha = this.PartyBase.IsVisible ? 1f : 0.0f;
      this.InitializePartyCollider(this.PartyBase);
      List<GameEntity> children1 = new List<GameEntity>();
      this.StrategicEntity.GetChildrenRecursive(ref children1);
      if (!MapScreen.VisualsOfEntities.ContainsKey(this.StrategicEntity.Pointer))
        MapScreen.VisualsOfEntities.Add(this.StrategicEntity.Pointer, this);
      foreach (GameEntity gameEntity in children1)
      {
        if (!MapScreen.VisualsOfEntities.ContainsKey(gameEntity.Pointer) && !MapScreen.FrameAndVisualOfEngines.ContainsKey(gameEntity.Pointer))
          MapScreen.VisualsOfEntities.Add(gameEntity.Pointer, this);
      }
      if (!this.PartyBase.IsSettlement)
        return;
      this.StrategicEntity.SetAsPredisplayEntity();
    }

    private void PopulateSiegeEngineFrameListsFromChildren(List<GameEntity> children)
    {
      this._attackerRangedEngineSpawnEntities = children.FindAll((Predicate<GameEntity>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("map_siege_engine"))))).OrderBy<GameEntity, string>((Func<GameEntity, string>) (e => ((IEnumerable<string>) e.Tags).First<string>((Func<string, bool>) (s => s.Contains("map_siege_engine"))))).ToArray<GameEntity>();
      foreach (GameEntity engineSpawnEntity in this._attackerRangedEngineSpawnEntities)
      {
        if (engineSpawnEntity.ChildCount > 0 && !MapScreen.FrameAndVisualOfEngines.ContainsKey(engineSpawnEntity.GetChild(0).Pointer))
          MapScreen.FrameAndVisualOfEngines.Add(engineSpawnEntity.GetChild(0).Pointer, new Tuple<MatrixFrame, PartyVisual>(engineSpawnEntity.GetGlobalFrame(), this));
      }
      this._defenderRangedEngineSpawnEntitiesForAllLevels = children.FindAll((Predicate<GameEntity>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("map_defensive_engine"))))).OrderBy<GameEntity, string>((Func<GameEntity, string>) (e => ((IEnumerable<string>) e.Tags).First<string>((Func<string, bool>) (s => s.Contains("map_defensive_engine"))))).ToArray<GameEntity>();
      foreach (GameEntity entitiesForAllLevel in this._defenderRangedEngineSpawnEntitiesForAllLevels)
      {
        if (entitiesForAllLevel.ChildCount > 0 && !MapScreen.FrameAndVisualOfEngines.ContainsKey(entitiesForAllLevel.GetChild(0).Pointer))
          MapScreen.FrameAndVisualOfEngines.Add(entitiesForAllLevel.GetChild(0).Pointer, new Tuple<MatrixFrame, PartyVisual>(entitiesForAllLevel.GetGlobalFrame(), this));
      }
      this._attackerBatteringRamSpawnEntities = children.FindAll((Predicate<GameEntity>) (x => x.HasTag("map_siege_ram"))).ToArray();
      foreach (GameEntity batteringRamSpawnEntity in this._attackerBatteringRamSpawnEntities)
      {
        if (batteringRamSpawnEntity.ChildCount > 0 && !MapScreen.FrameAndVisualOfEngines.ContainsKey(batteringRamSpawnEntity.GetChild(0).Pointer))
          MapScreen.FrameAndVisualOfEngines.Add(batteringRamSpawnEntity.GetChild(0).Pointer, new Tuple<MatrixFrame, PartyVisual>(batteringRamSpawnEntity.GetGlobalFrame(), this));
      }
      this._attackerSiegeTowerSpawnEntities = children.FindAll((Predicate<GameEntity>) (x => x.HasTag("map_siege_tower"))).ToArray();
      foreach (GameEntity towerSpawnEntity in this._attackerSiegeTowerSpawnEntities)
      {
        if (towerSpawnEntity.ChildCount > 0 && !MapScreen.FrameAndVisualOfEngines.ContainsKey(towerSpawnEntity.GetChild(0).Pointer))
          MapScreen.FrameAndVisualOfEngines.Add(towerSpawnEntity.GetChild(0).Pointer, new Tuple<MatrixFrame, PartyVisual>(towerSpawnEntity.GetGlobalFrame(), this));
      }
      this._defenderBreachableWallEntitiesForAllLevels = children.FindAll((Predicate<GameEntity>) (x => x.HasTag("map_breachable_wall"))).ToArray();
      foreach (GameEntity entitiesForAllLevel in this._defenderBreachableWallEntitiesForAllLevels)
      {
        if (entitiesForAllLevel.ChildCount > 0 && !MapScreen.FrameAndVisualOfEngines.ContainsKey(entitiesForAllLevel.GetChild(0).Pointer))
          MapScreen.FrameAndVisualOfEngines.Add(entitiesForAllLevel.GetChild(0).Pointer, new Tuple<MatrixFrame, PartyVisual>(entitiesForAllLevel.GetGlobalFrame(), this));
      }
    }

    private MatrixFrame GetFrame() => this.StrategicEntity.GetFrame();

    private void SetFrame(ref MatrixFrame frame)
    {
      if (!((NativeObject) this.StrategicEntity != (NativeObject) null) || this.StrategicEntity.GetFrame().NearlyEquals(frame))
        return;
      this.StrategicEntity.SetFrame(ref frame);
      if (this.HumanAgentVisuals != null)
      {
        MatrixFrame frame1 = frame;
        frame1.rotation.ApplyScaleLocal(this.HumanAgentVisuals.GetScale());
        this.HumanAgentVisuals.GetEntity().SetFrame(ref frame1);
      }
      if (this.MountAgentVisuals != null)
      {
        MatrixFrame frame2 = frame;
        frame2.rotation.ApplyScaleLocal(this.MountAgentVisuals.GetScale());
        this.MountAgentVisuals.GetEntity().SetFrame(ref frame2);
      }
      if (this.CaravanMountAgentVisuals == null)
        return;
      MatrixFrame parent = frame.TransformToParent(this.CaravanMountAgentVisuals.GetFrame());
      parent.rotation.ApplyScaleLocal(this.CaravanMountAgentVisuals.GetScale());
      this.CaravanMountAgentVisuals.GetEntity().SetFrame(ref parent);
    }

    private void UpdateDefenderSiegeEntitiesCache()
    {
      GameEntity.UpgradeLevelMask upgradeLevelMask = GameEntity.UpgradeLevelMask.None;
      if (this.PartyBase.IsSettlement && this.PartyBase.Settlement.IsFortification)
      {
        if (this.PartyBase.Settlement.Town.GetWallLevel() == 1)
          upgradeLevelMask = GameEntity.UpgradeLevelMask.Level1;
        else if (this.PartyBase.Settlement.Town.GetWallLevel() == 2)
          upgradeLevelMask = GameEntity.UpgradeLevelMask.Level2;
        else if (this.PartyBase.Settlement.Town.GetWallLevel() == 3)
          upgradeLevelMask = GameEntity.UpgradeLevelMask.Level3;
      }
      this._currentSettlementUpgradeLevelMask = upgradeLevelMask;
      this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel = ((IEnumerable<GameEntity>) this._defenderRangedEngineSpawnEntitiesForAllLevels).Where<GameEntity>((Func<GameEntity, bool>) (e => (e.GetUpgradeLevelMask() & this._currentSettlementUpgradeLevelMask) == this._currentSettlementUpgradeLevelMask)).ToArray<GameEntity>();
      this._defenderBreachableWallEntitiesCacheForCurrentLevel = ((IEnumerable<GameEntity>) this._defenderBreachableWallEntitiesForAllLevels).Where<GameEntity>((Func<GameEntity, bool>) (e => (e.GetUpgradeLevelMask() & this._currentSettlementUpgradeLevelMask) == this._currentSettlementUpgradeLevelMask)).ToArray<GameEntity>();
    }

    public MatrixFrame[] GetAttackerTowerSiegeEngineFrames()
    {
      MatrixFrame[] siegeEngineFrames = new MatrixFrame[this._attackerSiegeTowerSpawnEntities.Length];
      for (int index = 0; index < this._attackerSiegeTowerSpawnEntities.Length; ++index)
        siegeEngineFrames[index] = this._attackerSiegeTowerSpawnEntities[index].GetGlobalFrame();
      return siegeEngineFrames;
    }

    public MatrixFrame[] GetAttackerBatteringRamSiegeEngineFrames()
    {
      MatrixFrame[] siegeEngineFrames = new MatrixFrame[this._attackerBatteringRamSpawnEntities.Length];
      for (int index = 0; index < this._attackerBatteringRamSpawnEntities.Length; ++index)
        siegeEngineFrames[index] = this._attackerBatteringRamSpawnEntities[index].GetGlobalFrame();
      return siegeEngineFrames;
    }

    public MatrixFrame[] GetAttackerRangedSiegeEngineFrames()
    {
      MatrixFrame[] siegeEngineFrames = new MatrixFrame[this._attackerRangedEngineSpawnEntities.Length];
      for (int index = 0; index < this._attackerRangedEngineSpawnEntities.Length; ++index)
        siegeEngineFrames[index] = this._attackerRangedEngineSpawnEntities[index].GetGlobalFrame();
      return siegeEngineFrames;
    }

    public MatrixFrame[] GetDefenderRangedSiegeEngineFrames()
    {
      MatrixFrame[] siegeEngineFrames = new MatrixFrame[this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel.Length];
      for (int index = 0; index < this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel.Length; ++index)
        siegeEngineFrames[index] = this._defenderRangedEngineSpawnEntitiesCacheForCurrentLevel[index].GetGlobalFrame();
      return siegeEngineFrames;
    }

    public MatrixFrame[] GetBreachableWallFrames()
    {
      MatrixFrame[] breachableWallFrames = new MatrixFrame[this._defenderBreachableWallEntitiesCacheForCurrentLevel.Length];
      for (int index = 0; index < this._defenderBreachableWallEntitiesCacheForCurrentLevel.Length; ++index)
        breachableWallFrames[index] = this._defenderBreachableWallEntitiesCacheForCurrentLevel[index].GetGlobalFrame();
      return breachableWallFrames;
    }

    public bool IsVisibleOrFadingOut() => (double) this._entityAlpha > 0.0;

    private struct SiegeBombardmentData
    {
      public Vec3 LaunchGlobalPosition;
      public Vec3 TargetPosition;
      public MatrixFrame ShooterGlobalFrame;
      public MatrixFrame TargetAlignedShooterGlobalFrame;
      public float MissileSpeed;
      public float Gravity;
      public float LaunchAngle;
      public float RotationDuration;
      public float ReloadDuration;
      public float AimingDuration;
      public float MissileLaunchDuration;
      public float FireDuration;
      public float FlightDuration;
      public float TotalDuration;
    }
  }
}
