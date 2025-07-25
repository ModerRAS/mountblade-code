// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AttackInformation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct AttackInformation
  {
    public Agent AttackerAgent;
    public Agent VictimAgent;
    public float ArmorAmountFloat;
    public WeaponComponentData ShieldOnBack;
    public AgentFlag VictimAgentFlag;
    public float VictimAgentAbsorbedDamageRatio;
    public float DamageMultiplierOfBone;
    public float CombatDifficultyMultiplier;
    public MissionWeapon VictimMainHandWeapon;
    public MissionWeapon VictimShield;
    public bool CanGiveDamageToAgentShield;
    public bool IsVictimAgentLeftStance;
    public bool IsFriendlyFire;
    public bool DoesAttackerHaveMountAgent;
    public bool DoesVictimHaveMountAgent;
    public Vec2 AttackerAgentMovementVelocity;
    public Vec2 AttackerAgentMountMovementDirection;
    public float AttackerMovementDirectionAsAngle;
    public Vec2 VictimAgentMovementVelocity;
    public Vec2 VictimAgentMountMovementDirection;
    public float VictimMovementDirectionAsAngle;
    public bool IsVictimAgentSameWithAttackerAgent;
    public bool IsAttackerAgentMine;
    public bool DoesAttackerHaveRiderAgent;
    public bool IsAttackerAgentRiderAgentMine;
    public bool IsAttackerAgentMount;
    public bool IsVictimAgentMine;
    public bool DoesVictimHaveRiderAgent;
    public bool IsVictimAgentRiderAgentMine;
    public bool IsVictimAgentMount;
    public bool IsAttackerAgentNull;
    public bool IsAttackerAIControlled;
    public BasicCharacterObject AttackerAgentCharacter;
    public BasicCharacterObject AttackerRiderAgentCharacter;
    public IAgentOriginBase AttackerAgentOrigin;
    public IAgentOriginBase AttackerRiderAgentOrigin;
    public BasicCharacterObject VictimAgentCharacter;
    public BasicCharacterObject VictimRiderAgentCharacter;
    public IAgentOriginBase VictimAgentOrigin;
    public IAgentOriginBase VictimRiderAgentOrigin;
    public Vec2 AttackerAgentMovementDirection;
    public Vec3 AttackerAgentVelocity;
    public float AttackerAgentMountChargeDamageProperty;
    public Vec3 AttackerAgentCurrentWeaponOffset;
    public bool IsAttackerAgentHuman;
    public bool IsAttackerAgentActive;
    public bool IsAttackerAgentDoingPassiveAttack;
    public bool IsVictimAgentNull;
    public float VictimAgentScale;
    public float VictimAgentWeight;
    public float VictimAgentHealth;
    public float VictimAgentMaxHealth;
    public float VictimAgentTotalEncumbrance;
    public bool IsVictimAgentHuman;
    public Vec3 VictimAgentVelocity;
    public Vec3 VictimAgentPosition;
    public int WeaponAttachBoneIndex;
    public MissionWeapon OffHandItem;
    public bool IsHeadShot;
    public bool IsVictimRiderAgentSameAsAttackerAgent;
    public BasicCharacterObject AttackerCaptainCharacter;
    public BasicCharacterObject VictimCaptainCharacter;
    public Formation AttackerFormation;
    public Formation VictimFormation;
    public float AttackerHitPointRate;
    public float VictimHitPointRate;
    public bool IsAttackerPlayer;
    public bool IsVictimPlayer;
    public DestructableComponent HitObjectDestructibleComponent;

    public AttackInformation(
      Agent attackerAgent,
      Agent victimAgent,
      GameEntity hitObject,
      in AttackCollisionData attackCollisionData,
      in MissionWeapon attackerWeapon)
    {
      this.AttackerAgent = attackerAgent;
      this.VictimAgent = victimAgent;
      this.IsAttackerAgentNull = attackerAgent == null;
      this.IsVictimAgentNull = victimAgent == null;
      this.ArmorAmountFloat = 0.0f;
      AttackCollisionData attackCollisionData1;
      if (!this.IsVictimAgentNull)
      {
        Agent agent = victimAgent;
        attackCollisionData1 = attackCollisionData;
        int victimHitBodyPart = (int) attackCollisionData1.VictimHitBodyPart;
        this.ArmorAmountFloat = agent.GetBaseArmorEffectivenessForBodyPart((BoneBodyPartType) victimHitBodyPart);
      }
      this.ShieldOnBack = (WeaponComponentData) null;
      MissionWeapon missionWeapon;
      if (!this.IsVictimAgentNull && (victimAgent.GetAgentFlags() & AgentFlag.CanWieldWeapon) != AgentFlag.None)
      {
        EquipmentIndex wieldedItemIndex = victimAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
        for (int index = 0; index < 4; ++index)
        {
          missionWeapon = victimAgent.Equipment[index];
          WeaponComponentData currentUsageItem = missionWeapon.CurrentUsageItem;
          if ((EquipmentIndex) index != wieldedItemIndex && currentUsageItem != null && currentUsageItem.IsShield)
          {
            this.ShieldOnBack = currentUsageItem;
            break;
          }
        }
      }
      this.VictimShield = MissionWeapon.Invalid;
      this.VictimMainHandWeapon = MissionWeapon.Invalid;
      if (!this.IsVictimAgentNull && (victimAgent.GetAgentFlags() & AgentFlag.CanWieldWeapon) != AgentFlag.None)
      {
        EquipmentIndex wieldedItemIndex1 = victimAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
        if (wieldedItemIndex1 != EquipmentIndex.None)
          this.VictimShield = victimAgent.Equipment[wieldedItemIndex1];
        EquipmentIndex wieldedItemIndex2 = victimAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
        if (wieldedItemIndex2 != EquipmentIndex.None)
          this.VictimMainHandWeapon = victimAgent.Equipment[wieldedItemIndex2];
      }
      this.AttackerAgentMountMovementDirection = new Vec2();
      if (!this.IsAttackerAgentNull && attackerAgent.HasMount)
        this.AttackerAgentMountMovementDirection = attackerAgent.MountAgent.GetMovementDirection();
      this.VictimAgentMountMovementDirection = new Vec2();
      if (!this.IsVictimAgentNull && victimAgent.HasMount)
        this.VictimAgentMountMovementDirection = victimAgent.MountAgent.GetMovementDirection();
      this.IsVictimAgentSameWithAttackerAgent = !this.IsAttackerAgentNull && attackerAgent == victimAgent;
      missionWeapon = attackerWeapon;
      int num1;
      if (missionWeapon.IsEmpty || this.IsAttackerAgentNull || !attackerAgent.IsHuman)
      {
        num1 = -1;
      }
      else
      {
        Monster monster = attackerAgent.Monster;
        missionWeapon = attackerWeapon;
        int itemFlags = (int) missionWeapon.Item.ItemFlags;
        num1 = (int) monster.GetBoneToAttachForItemFlags((ItemFlags) itemFlags);
      }
      this.WeaponAttachBoneIndex = num1;
      DestructableComponent scriptOfTypeInFamily = hitObject?.GetFirstScriptOfTypeInFamily<DestructableComponent>();
      this.HitObjectDestructibleComponent = scriptOfTypeInFamily;
      int num2;
      if (!this.IsAttackerAgentNull)
      {
        if (!this.IsVictimAgentSameWithAttackerAgent && (this.IsVictimAgentNull || !victimAgent.IsFriendOf(attackerAgent)))
        {
          if (scriptOfTypeInFamily != null)
          {
            int battleSide = (int) scriptOfTypeInFamily.BattleSide;
            BattleSideEnum? side = attackerAgent.Team?.Side;
            int valueOrDefault = (int) side.GetValueOrDefault();
            num2 = battleSide == valueOrDefault & side.HasValue ? 1 : 0;
          }
          else
            num2 = 0;
        }
        else
          num2 = 1;
      }
      else
        num2 = 0;
      this.IsFriendlyFire = num2 != 0;
      this.OffHandItem = new MissionWeapon();
      if (!this.IsAttackerAgentNull && (attackerAgent.GetAgentFlags() & AgentFlag.CanWieldWeapon) != AgentFlag.None)
      {
        EquipmentIndex wieldedItemIndex = attackerAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
        if (wieldedItemIndex != EquipmentIndex.None)
          this.OffHandItem = attackerAgent.Equipment[wieldedItemIndex];
      }
      attackCollisionData1 = attackCollisionData;
      this.IsHeadShot = attackCollisionData1.VictimHitBodyPart == BoneBodyPartType.Head;
      this.VictimAgentAbsorbedDamageRatio = 0.0f;
      this.DamageMultiplierOfBone = 0.0f;
      this.VictimMovementDirectionAsAngle = 0.0f;
      this.VictimAgentScale = 0.0f;
      this.VictimAgentHealth = 0.0f;
      this.VictimAgentMaxHealth = 0.0f;
      this.VictimAgentWeight = 0.0f;
      this.VictimAgentTotalEncumbrance = 0.0f;
      this.CombatDifficultyMultiplier = 1f;
      this.VictimHitPointRate = 0.0f;
      this.VictimAgentFlag = AgentFlag.CanAttack;
      this.IsVictimAgentLeftStance = false;
      this.DoesVictimHaveMountAgent = false;
      this.IsVictimAgentMine = false;
      this.DoesVictimHaveRiderAgent = false;
      this.IsVictimAgentRiderAgentMine = false;
      this.IsVictimAgentMount = false;
      this.IsVictimAgentHuman = false;
      this.IsVictimRiderAgentSameAsAttackerAgent = false;
      this.IsVictimPlayer = false;
      this.VictimAgentCharacter = (BasicCharacterObject) null;
      this.VictimRiderAgentCharacter = (BasicCharacterObject) null;
      this.VictimAgentMovementVelocity = new Vec2();
      this.VictimAgentPosition = new Vec3();
      this.VictimAgentVelocity = new Vec3();
      this.VictimCaptainCharacter = (BasicCharacterObject) null;
      this.VictimAgentOrigin = (IAgentOriginBase) null;
      this.VictimRiderAgentOrigin = (IAgentOriginBase) null;
      this.VictimFormation = (Formation) null;
      if (!this.IsVictimAgentNull)
      {
        this.IsVictimAgentMount = victimAgent.IsMount;
        this.IsVictimAgentMine = victimAgent.IsMine;
        this.IsVictimAgentHuman = victimAgent.IsHuman;
        this.IsVictimAgentLeftStance = victimAgent.GetIsLeftStance();
        this.DoesVictimHaveMountAgent = victimAgent.HasMount;
        this.DoesVictimHaveRiderAgent = victimAgent.RiderAgent != null;
        this.IsVictimRiderAgentSameAsAttackerAgent = this.DoesVictimHaveRiderAgent && victimAgent.RiderAgent == attackerAgent;
        this.IsVictimPlayer = victimAgent.IsPlayerControlled;
        this.VictimAgentAbsorbedDamageRatio = victimAgent.Monster.AbsorbedDamageRatio;
        AgentApplyDamageModel applyDamageModel = MissionGameModels.Current.AgentApplyDamageModel;
        attackCollisionData1 = attackCollisionData;
        int bodyPart;
        if (attackCollisionData1.CollisionBoneIndex == (sbyte) -1)
        {
          bodyPart = -1;
        }
        else
        {
          MBAgentVisuals agentVisuals = victimAgent.AgentVisuals;
          attackCollisionData1 = attackCollisionData;
          int collisionBoneIndex = (int) attackCollisionData1.CollisionBoneIndex;
          bodyPart = (int) agentVisuals.GetBoneTypeData((sbyte) collisionBoneIndex).BodyPartType;
        }
        attackCollisionData1 = attackCollisionData;
        int damageType = attackCollisionData1.DamageType;
        int num3 = this.IsVictimAgentHuman ? 1 : 0;
        attackCollisionData1 = attackCollisionData;
        int num4 = attackCollisionData1.IsMissile ? 1 : 0;
        this.DamageMultiplierOfBone = applyDamageModel.GetDamageMultiplierForBodyPart((BoneBodyPartType) bodyPart, (DamageTypes) damageType, num3 != 0, num4 != 0);
        this.VictimMovementDirectionAsAngle = victimAgent.MovementDirectionAsAngle;
        this.VictimAgentScale = victimAgent.AgentScale;
        this.VictimAgentHealth = victimAgent.Health;
        this.VictimAgentMaxHealth = victimAgent.HealthLimit;
        this.VictimAgentWeight = victimAgent.IsMount ? victimAgent.SpawnEquipment[EquipmentIndex.ArmorItemEndSlot].Weight : (float) victimAgent.Monster.Weight;
        this.VictimAgentTotalEncumbrance = victimAgent.GetTotalEncumbrance();
        this.CombatDifficultyMultiplier = Mission.Current.GetDamageMultiplierOfCombatDifficulty(victimAgent, attackerAgent);
        this.VictimHitPointRate = victimAgent.Health / victimAgent.HealthLimit;
        this.VictimAgentMovementVelocity = victimAgent.MovementVelocity;
        this.VictimAgentVelocity = victimAgent.Velocity;
        this.VictimAgentPosition = victimAgent.Position;
        this.VictimAgentFlag = victimAgent.GetAgentFlags();
        this.VictimAgentCharacter = victimAgent.Character;
        this.VictimAgentOrigin = victimAgent.Origin;
        if (this.DoesVictimHaveRiderAgent)
        {
          Agent riderAgent = victimAgent.RiderAgent;
          this.IsVictimAgentRiderAgentMine = riderAgent.IsMine;
          this.VictimRiderAgentCharacter = riderAgent.Character;
          this.VictimRiderAgentOrigin = riderAgent.Origin;
          Agent captain = riderAgent.Formation?.Captain;
          this.VictimCaptainCharacter = riderAgent != captain ? captain?.Character : (BasicCharacterObject) null;
          this.VictimFormation = riderAgent.Formation;
        }
        else
        {
          Agent captain = victimAgent.Formation?.Captain;
          this.VictimCaptainCharacter = victimAgent != captain ? captain?.Character : (BasicCharacterObject) null;
          this.VictimFormation = victimAgent.Formation;
        }
      }
      this.AttackerMovementDirectionAsAngle = 0.0f;
      this.AttackerAgentMountChargeDamageProperty = 0.0f;
      this.DoesAttackerHaveMountAgent = false;
      this.IsAttackerAgentMine = false;
      this.DoesAttackerHaveRiderAgent = false;
      this.IsAttackerAgentRiderAgentMine = false;
      this.IsAttackerAgentMount = false;
      this.IsAttackerAgentHuman = false;
      this.IsAttackerAgentActive = false;
      this.IsAttackerAgentDoingPassiveAttack = false;
      this.IsAttackerPlayer = false;
      this.AttackerAgentMovementVelocity = new Vec2();
      this.AttackerAgentCharacter = (BasicCharacterObject) null;
      this.AttackerRiderAgentCharacter = (BasicCharacterObject) null;
      this.AttackerAgentOrigin = (IAgentOriginBase) null;
      this.AttackerRiderAgentOrigin = (IAgentOriginBase) null;
      this.AttackerAgentMovementDirection = new Vec2();
      this.AttackerAgentVelocity = new Vec3();
      this.AttackerAgentCurrentWeaponOffset = new Vec3();
      this.IsAttackerAIControlled = false;
      this.AttackerCaptainCharacter = (BasicCharacterObject) null;
      this.AttackerFormation = (Formation) null;
      this.AttackerHitPointRate = 0.0f;
      if (!this.IsAttackerAgentNull)
      {
        this.DoesAttackerHaveMountAgent = attackerAgent.HasMount;
        this.IsAttackerAgentMine = attackerAgent.IsMine;
        this.IsAttackerAgentMount = attackerAgent.IsMount;
        this.IsAttackerAgentHuman = attackerAgent.IsHuman;
        this.IsAttackerAgentActive = attackerAgent.IsActive();
        this.IsAttackerAgentDoingPassiveAttack = attackerAgent.IsDoingPassiveAttack;
        this.DoesAttackerHaveRiderAgent = attackerAgent.RiderAgent != null;
        this.IsAttackerAIControlled = attackerAgent.IsAIControlled;
        this.IsAttackerPlayer = attackerAgent.IsPlayerControlled;
        this.AttackerMovementDirectionAsAngle = attackerAgent.MovementDirectionAsAngle;
        this.AttackerAgentMountChargeDamageProperty = attackerAgent.GetAgentDrivenPropertyValue(DrivenProperty.MountChargeDamage);
        this.AttackerHitPointRate = attackerAgent.Health / attackerAgent.HealthLimit;
        this.AttackerAgentMovementVelocity = attackerAgent.MovementVelocity;
        this.AttackerAgentMovementDirection = attackerAgent.GetMovementDirection();
        this.AttackerAgentVelocity = attackerAgent.Velocity;
        if (this.IsAttackerAgentActive)
          this.AttackerAgentCurrentWeaponOffset = attackerAgent.GetCurWeaponOffset();
        this.AttackerAgentCharacter = attackerAgent.Character;
        this.AttackerAgentOrigin = attackerAgent.Origin;
        if (this.DoesAttackerHaveRiderAgent)
        {
          Agent riderAgent = attackerAgent.RiderAgent;
          this.IsAttackerAgentRiderAgentMine = riderAgent.IsMine;
          this.AttackerRiderAgentCharacter = riderAgent.Character;
          this.AttackerRiderAgentOrigin = riderAgent.Origin;
          Agent captain = riderAgent.Formation?.Captain;
          this.AttackerCaptainCharacter = riderAgent != captain ? captain?.Character : (BasicCharacterObject) null;
          this.AttackerFormation = riderAgent.Formation;
        }
        else
        {
          Agent captain = attackerAgent.Formation?.Captain;
          this.AttackerCaptainCharacter = attackerAgent != captain ? captain?.Character : (BasicCharacterObject) null;
          this.AttackerFormation = attackerAgent.Formation;
        }
      }
      this.CanGiveDamageToAgentShield = true;
      if (this.IsVictimAgentSameWithAttackerAgent)
        return;
      Mission current = Mission.Current;
      Agent attacker = attackerAgent;
      missionWeapon = attackerWeapon;
      WeaponComponentData currentUsageItem1 = missionWeapon.CurrentUsageItem;
      Agent defender = victimAgent;
      this.CanGiveDamageToAgentShield = current.CanGiveDamageToAgentShield(attacker, currentUsageItem1, defender);
    }

    public AttackInformation(
      Agent attackerAgent,
      Agent victimAgent,
      float armorAmountFloat,
      WeaponComponentData shieldOnBack,
      AgentFlag victimAgentFlag,
      float victimAgentAbsorbedDamageRatio,
      float damageMultiplierOfBone,
      float combatDifficultyMultiplier,
      MissionWeapon victimMainHandWeapon,
      MissionWeapon victimShield,
      bool canGiveDamageToAgentShield,
      bool isVictimAgentLeftStance,
      bool isFriendlyFire,
      bool doesAttackerHaveMountAgent,
      bool doesVictimHaveMountAgent,
      Vec2 attackerAgentMovementVelocity,
      Vec2 attackerAgentMountMovementDirection,
      float attackerMovementDirectionAsAngle,
      Vec2 victimAgentMovementVelocity,
      Vec2 victimAgentMountMovementDirection,
      float victimMovementDirectionAsAngle,
      bool isVictimAgentSameWithAttackerAgent,
      bool isAttackerAgentMine,
      bool doesAttackerHaveRiderAgent,
      bool isAttackerAgentRiderAgentMine,
      bool isAttackerAgentMount,
      bool isVictimAgentMine,
      bool doesVictimHaveRiderAgent,
      bool isVictimAgentRiderAgentMine,
      bool isVictimAgentMount,
      bool isAttackerAgentNull,
      bool isAttackerAIControlled,
      BasicCharacterObject attackerAgentCharacter,
      BasicCharacterObject attackerRiderAgentCharacter,
      IAgentOriginBase attackerAgentOrigin,
      IAgentOriginBase attackerRiderAgentOrigin,
      BasicCharacterObject victimAgentCharacter,
      BasicCharacterObject victimRiderAgentCharacter,
      IAgentOriginBase victimAgentOrigin,
      IAgentOriginBase victimRiderAgentOrigin,
      Vec2 attackerAgentMovementDirection,
      Vec3 attackerAgentVelocity,
      float attackerAgentMountChargeDamageProperty,
      Vec3 attackerAgentCurrentWeaponOffset,
      bool isAttackerAgentHuman,
      bool isAttackerAgentActive,
      bool isAttackerAgentDoingPassiveAttack,
      bool isVictimAgentNull,
      float victimAgentScale,
      float victimAgentHealth,
      float victimAgentMaxHealth,
      float victimAgentWeight,
      float victimAgentTotalEncumbrance,
      bool isVictimAgentHuman,
      Vec3 victimAgentVelocity,
      Vec3 victimAgentPosition,
      int weaponAttachBoneIndex,
      MissionWeapon offHandItem,
      bool isHeadShot,
      bool isVictimRiderAgentSameAsAttackerAgent,
      bool isAttackerPlayer,
      bool isVictimPlayer,
      DestructableComponent hitObjectDestructibleComponent)
    {
      this.AttackerAgent = attackerAgent;
      this.VictimAgent = victimAgent;
      this.ArmorAmountFloat = armorAmountFloat;
      this.ShieldOnBack = shieldOnBack;
      this.VictimAgentFlag = victimAgentFlag;
      this.VictimAgentAbsorbedDamageRatio = victimAgentAbsorbedDamageRatio;
      this.DamageMultiplierOfBone = damageMultiplierOfBone;
      this.CombatDifficultyMultiplier = combatDifficultyMultiplier;
      this.VictimMainHandWeapon = victimMainHandWeapon;
      this.VictimShield = victimShield;
      this.CanGiveDamageToAgentShield = canGiveDamageToAgentShield;
      this.IsVictimAgentLeftStance = isVictimAgentLeftStance;
      this.IsFriendlyFire = isFriendlyFire;
      this.DoesAttackerHaveMountAgent = doesAttackerHaveMountAgent;
      this.DoesVictimHaveMountAgent = doesVictimHaveMountAgent;
      this.AttackerAgentMovementVelocity = attackerAgentMovementVelocity;
      this.AttackerAgentMountMovementDirection = attackerAgentMountMovementDirection;
      this.AttackerMovementDirectionAsAngle = attackerMovementDirectionAsAngle;
      this.VictimAgentMovementVelocity = victimAgentMovementVelocity;
      this.VictimAgentMountMovementDirection = victimAgentMountMovementDirection;
      this.VictimMovementDirectionAsAngle = victimMovementDirectionAsAngle;
      this.IsVictimAgentSameWithAttackerAgent = isVictimAgentSameWithAttackerAgent;
      this.IsAttackerAgentMine = isAttackerAgentMine;
      this.DoesAttackerHaveRiderAgent = doesAttackerHaveRiderAgent;
      this.IsAttackerAgentRiderAgentMine = isAttackerAgentRiderAgentMine;
      this.IsAttackerAgentMount = isAttackerAgentMount;
      this.IsVictimAgentMine = isVictimAgentMine;
      this.DoesVictimHaveRiderAgent = doesVictimHaveRiderAgent;
      this.IsVictimAgentRiderAgentMine = isVictimAgentRiderAgentMine;
      this.IsVictimAgentMount = isVictimAgentMount;
      this.IsAttackerAgentNull = isAttackerAgentNull;
      this.IsAttackerAIControlled = isAttackerAIControlled;
      this.AttackerAgentCharacter = attackerAgentCharacter;
      this.AttackerRiderAgentCharacter = attackerRiderAgentCharacter;
      this.AttackerAgentOrigin = attackerAgentOrigin;
      this.AttackerRiderAgentOrigin = attackerRiderAgentOrigin;
      this.VictimAgentCharacter = victimAgentCharacter;
      this.VictimRiderAgentCharacter = victimRiderAgentCharacter;
      this.VictimAgentOrigin = victimAgentOrigin;
      this.VictimRiderAgentOrigin = victimRiderAgentOrigin;
      this.AttackerAgentMovementDirection = attackerAgentMovementDirection;
      this.AttackerAgentVelocity = attackerAgentVelocity;
      this.AttackerAgentMountChargeDamageProperty = attackerAgentMountChargeDamageProperty;
      this.AttackerAgentCurrentWeaponOffset = attackerAgentCurrentWeaponOffset;
      this.IsAttackerAgentHuman = isAttackerAgentHuman;
      this.IsAttackerAgentActive = isAttackerAgentActive;
      this.IsAttackerAgentDoingPassiveAttack = isAttackerAgentDoingPassiveAttack;
      this.VictimAgentScale = victimAgentScale;
      this.IsVictimAgentNull = isVictimAgentNull;
      this.VictimAgentHealth = victimAgentHealth;
      this.VictimAgentMaxHealth = victimAgentMaxHealth;
      this.VictimAgentWeight = victimAgentWeight;
      this.VictimAgentTotalEncumbrance = victimAgentTotalEncumbrance;
      this.IsVictimAgentHuman = isVictimAgentHuman;
      this.VictimAgentVelocity = victimAgentVelocity;
      this.VictimAgentPosition = victimAgentPosition;
      this.WeaponAttachBoneIndex = weaponAttachBoneIndex;
      this.OffHandItem = offHandItem;
      this.IsHeadShot = isHeadShot;
      this.IsVictimRiderAgentSameAsAttackerAgent = isVictimRiderAgentSameAsAttackerAgent;
      this.AttackerCaptainCharacter = (BasicCharacterObject) null;
      this.VictimCaptainCharacter = (BasicCharacterObject) null;
      this.VictimFormation = (Formation) null;
      this.AttackerFormation = (Formation) null;
      this.AttackerHitPointRate = 1f;
      this.VictimHitPointRate = 1f;
      this.IsAttackerPlayer = isAttackerPlayer;
      this.IsVictimPlayer = isVictimPlayer;
      this.HitObjectDestructibleComponent = hitObjectDestructibleComponent;
    }
  }
}
