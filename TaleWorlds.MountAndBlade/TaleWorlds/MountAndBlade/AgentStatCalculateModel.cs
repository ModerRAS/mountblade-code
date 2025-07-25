// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AgentStatCalculateModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class AgentStatCalculateModel : GameModel
  {
    protected const float MaxHorizontalErrorRadian = 0.0349065848f;
    private float _AILevelMultiplier = 1f;

    public abstract void InitializeAgentStats(
      Agent agent,
      Equipment spawnEquipment,
      AgentDrivenProperties agentDrivenProperties,
      AgentBuildData agentBuildData);

    public virtual void InitializeMissionEquipment(Agent agent)
    {
    }

    public abstract void UpdateAgentStats(Agent agent, AgentDrivenProperties agentDrivenProperties);

    public abstract float GetDifficultyModifier();

    public abstract bool CanAgentRideMount(Agent agent, Agent targetMount);

    public virtual bool HasHeavyArmor(Agent agent)
    {
      return (double) agent.GetBaseArmorEffectivenessForBodyPart(BoneBodyPartType.Chest) >= 24.0;
    }

    public virtual float GetEffectiveMaxHealth(Agent agent) => agent.BaseHealthLimit;

    public virtual float GetEnvironmentSpeedFactor(Agent agent)
    {
      Scene scene = agent.Mission.Scene;
      float environmentSpeedFactor = 1f;
      if (!scene.IsAtmosphereIndoor)
      {
        if ((double) scene.GetRainDensity() > 0.0)
          environmentSpeedFactor *= 0.9f;
        if (!agent.IsHuman && !MBMath.IsBetween(scene.TimeOfDay, 4f, 20.01f))
          environmentSpeedFactor *= 0.9f;
      }
      return environmentSpeedFactor;
    }

    public float CalculateAIAttackOnDecideMaxValue()
    {
      return (double) this.GetDifficultyModifier() < 0.5 ? 0.16f : 0.48f;
    }

    public virtual float GetWeaponInaccuracy(
      Agent agent,
      WeaponComponentData weapon,
      int weaponSkill)
    {
      float a = 0.0f;
      if (weapon.IsRangedWeapon)
        a = (float) ((100.0 - (double) weapon.Accuracy) * (1.0 - 1.0 / 500.0 * (double) weaponSkill) * (1.0 / 1000.0));
      else if (weapon.WeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.WideGrip))
        a = (float) (1.0 - (double) weaponSkill * 0.0099999997764825821);
      return MathF.Max(a, 0.0f);
    }

    public virtual float GetDetachmentCostMultiplierOfAgent(Agent agent, IDetachment detachment)
    {
      return agent.Banner != null ? 10f : 1f;
    }

    public virtual float GetInteractionDistance(Agent agent) => 1.5f;

    public virtual float GetMaxCameraZoom(Agent agent) => 1f;

    public virtual int GetEffectiveSkill(Agent agent, SkillObject skill)
    {
      return agent.Character.GetSkillValue(skill);
    }

    public virtual int GetEffectiveSkillForWeapon(Agent agent, WeaponComponentData weapon)
    {
      return this.GetEffectiveSkill(agent, weapon.RelevantSkill);
    }

    public abstract float GetWeaponDamageMultiplier(Agent agent, WeaponComponentData weapon);

    public abstract float GetKnockBackResistance(Agent agent);

    public abstract float GetKnockDownResistance(Agent agent, StrikeType strikeType = StrikeType.Invalid);

    public abstract float GetDismountResistance(Agent agent);

    public virtual string GetMissionDebugInfoForAgent(Agent agent)
    {
      return "Debug info not supported in this model";
    }

    public void ResetAILevelMultiplier() => this._AILevelMultiplier = 1f;

    public void SetAILevelMultiplier(float multiplier) => this._AILevelMultiplier = multiplier;

    protected int GetMeleeSkill(
      Agent agent,
      WeaponComponentData equippedItem,
      WeaponComponentData secondaryItem)
    {
      SkillObject skill = DefaultSkills.Athletics;
      if (equippedItem != null)
      {
        SkillObject relevantSkill = equippedItem.RelevantSkill;
        skill = relevantSkill == DefaultSkills.OneHanded || relevantSkill == DefaultSkills.Polearm ? relevantSkill : (relevantSkill != DefaultSkills.TwoHanded ? DefaultSkills.OneHanded : (secondaryItem == null ? DefaultSkills.TwoHanded : DefaultSkills.OneHanded));
      }
      return this.GetEffectiveSkill(agent, skill);
    }

    protected float CalculateAILevel(Agent agent, int relevantSkillLevel)
    {
      float difficultyModifier = this.GetDifficultyModifier();
      return MBMath.ClampFloat((float) relevantSkillLevel / 300f * difficultyModifier, 0.0f, 1f);
    }

    protected void SetAiRelatedProperties(
      Agent agent,
      AgentDrivenProperties agentDrivenProperties,
      WeaponComponentData equippedItem,
      WeaponComponentData secondaryItem)
    {
      int meleeSkill = this.GetMeleeSkill(agent, equippedItem, secondaryItem);
      SkillObject skill = equippedItem == null ? DefaultSkills.Athletics : equippedItem.RelevantSkill;
      int effectiveSkill = this.GetEffectiveSkill(agent, skill);
      float num1 = MBMath.ClampFloat(this.CalculateAILevel(agent, meleeSkill) * this._AILevelMultiplier, 0.0f, 1f);
      float num2 = MBMath.ClampFloat(this.CalculateAILevel(agent, effectiveSkill) * this._AILevelMultiplier, 0.0f, 1f);
      float num3 = num1 + agent.Defensiveness;
      agentDrivenProperties.AiRangedHorsebackMissileRange = (float) (0.30000001192092896 + 0.40000000596046448 * (double) num2);
      agentDrivenProperties.AiFacingMissileWatch = (float) ((double) num1 * 0.059999998658895493 - 0.95999997854232788);
      agentDrivenProperties.AiFlyingMissileCheckRadius = (float) (8.0 - 6.0 * (double) num1);
      agentDrivenProperties.AiShootFreq = (float) (0.30000001192092896 + 0.699999988079071 * (double) num2);
      agentDrivenProperties.AiWaitBeforeShootFactor = agent.PropertyModifiers.resetAiWaitBeforeShootFactor ? 0.0f : (float) (1.0 - 0.5 * (double) num2);
      agentDrivenProperties.AIBlockOnDecideAbility = MBMath.Lerp(0.5f, 0.99f, MBMath.ClampFloat(MathF.Pow(num1, 0.5f), 0.0f, 1f));
      agentDrivenProperties.AIParryOnDecideAbility = MBMath.Lerp(0.5f, 0.95f, MBMath.ClampFloat(num1, 0.0f, 1f));
      agentDrivenProperties.AiTryChamberAttackOnDecide = (float) (((double) num1 - 0.15000000596046448) * 0.10000000149011612);
      agentDrivenProperties.AIAttackOnParryChance = (float) (0.079999998211860657 - 0.019999999552965164 * (double) agent.Defensiveness);
      agentDrivenProperties.AiAttackOnParryTiming = (float) (0.30000001192092896 * (double) num1 - 0.20000000298023224);
      agentDrivenProperties.AIDecideOnAttackChance = 0.5f * agent.Defensiveness;
      agentDrivenProperties.AIParryOnAttackAbility = MBMath.ClampFloat(num1, 0.0f, 1f);
      agentDrivenProperties.AiKick = (float) (((double) num1 > 0.40000000596046448 ? 0.40000000596046448 : (double) num1) - 0.10000000149011612);
      agentDrivenProperties.AiAttackCalculationMaxTimeFactor = num1;
      agentDrivenProperties.AiDecideOnAttackWhenReceiveHitTiming = (float) (-0.25 * (1.0 - (double) num1));
      agentDrivenProperties.AiDecideOnAttackContinueAction = (float) (-0.5 * (1.0 - (double) num1));
      agentDrivenProperties.AiDecideOnAttackingContinue = 0.1f * num1;
      agentDrivenProperties.AIParryOnAttackingContinueAbility = MBMath.Lerp(0.5f, 0.95f, MBMath.ClampFloat(num1, 0.0f, 1f));
      agentDrivenProperties.AIDecideOnRealizeEnemyBlockingAttackAbility = MBMath.ClampFloat(MathF.Pow(num1, 2.5f) - 0.1f, 0.0f, 1f);
      agentDrivenProperties.AIRealizeBlockingFromIncorrectSideAbility = MBMath.ClampFloat(MathF.Pow(num1, 2.5f) - 0.01f, 0.0f, 1f);
      agentDrivenProperties.AiAttackingShieldDefenseChance = (float) (0.20000000298023224 + 0.30000001192092896 * (double) num1);
      agentDrivenProperties.AiAttackingShieldDefenseTimer = (float) (0.30000001192092896 * (double) num1 - 0.30000001192092896);
      agentDrivenProperties.AiRandomizedDefendDirectionChance = 1f - MathF.Pow(num1, 3f);
      agentDrivenProperties.AiShooterError = 0.008f;
      agentDrivenProperties.AISetNoAttackTimerAfterBeingHitAbility = MBMath.Lerp(0.33f, 1f, num1);
      agentDrivenProperties.AISetNoAttackTimerAfterBeingParriedAbility = MBMath.Lerp(0.2f, 1f, num1 * num1);
      agentDrivenProperties.AISetNoDefendTimerAfterHittingAbility = MBMath.Lerp(0.1f, 0.99f, num1 * num1);
      agentDrivenProperties.AISetNoDefendTimerAfterParryingAbility = MBMath.Lerp(0.15f, 1f, num1 * num1);
      agentDrivenProperties.AIEstimateStunDurationPrecision = 1f - MBMath.Lerp(0.2f, 1f, num1);
      agentDrivenProperties.AIHoldingReadyMaxDuration = MBMath.Lerp(0.25f, 0.0f, MathF.Min(1f, num1 * 2f));
      agentDrivenProperties.AIHoldingReadyVariationPercentage = num1;
      agentDrivenProperties.AiRaiseShieldDelayTimeBase = (float) (0.5 * (double) num1 - 0.75);
      agentDrivenProperties.AiUseShieldAgainstEnemyMissileProbability = (float) (0.10000000149011612 + (double) num1 * 0.60000002384185791 + (double) num3 * 0.20000000298023224);
      agentDrivenProperties.AiCheckMovementIntervalFactor = (float) (0.004999999888241291 * (1.1000000238418579 - (double) num1));
      agentDrivenProperties.AiMovementDelayFactor = (float) (4.0 / (3.0 + (double) num2));
      agentDrivenProperties.AiParryDecisionChangeValue = (float) (0.05000000074505806 + 0.699999988079071 * (double) num1);
      agentDrivenProperties.AiDefendWithShieldDecisionChanceValue = MathF.Min(2f, (float) (0.5 + (double) num1 + 0.60000002384185791 * (double) num3));
      agentDrivenProperties.AiMoveEnemySideTimeValue = (float) (0.5 * (double) num1 - 2.5);
      agentDrivenProperties.AiMinimumDistanceToContinueFactor = (float) (2.0 + 0.30000001192092896 * (3.0 - (double) num1));
      agentDrivenProperties.AiHearingDistanceFactor = 1f + num1;
      agentDrivenProperties.AiChargeHorsebackTargetDistFactor = (float) (1.5 * (3.0 - (double) num1));
      agentDrivenProperties.AiWaitBeforeShootFactor = agent.PropertyModifiers.resetAiWaitBeforeShootFactor ? 0.0f : (float) (1.0 - 0.5 * (double) num2);
      float num4 = 1f - num2;
      agentDrivenProperties.AiRangerLeadErrorMin = (float) (-(double) num4 * 0.34999999403953552);
      agentDrivenProperties.AiRangerLeadErrorMax = num4 * 0.2f;
      agentDrivenProperties.AiRangerVerticalErrorMultiplier = num4 * 0.1f;
      agentDrivenProperties.AiRangerHorizontalErrorMultiplier = num4 * ((float) Math.PI / 90f);
      agentDrivenProperties.AIAttackOnDecideChance = MathF.Clamp((float) (0.10000000149011612 * (double) this.CalculateAIAttackOnDecideMaxValue() * (3.0 - (double) agent.Defensiveness)), 0.05f, 1f);
      agentDrivenProperties.SetStat(DrivenProperty.UseRealisticBlocking, agent.Controller != Agent.ControllerType.Player ? 1f : 0.0f);
    }

    protected void SetAllWeaponInaccuracy(
      Agent agent,
      AgentDrivenProperties agentDrivenProperties,
      int equippedIndex,
      WeaponComponentData equippedWeaponComponent)
    {
      if (equippedWeaponComponent != null)
        agentDrivenProperties.WeaponInaccuracy = this.GetWeaponInaccuracy(agent, equippedWeaponComponent, this.GetEffectiveSkillForWeapon(agent, equippedWeaponComponent));
      else
        agentDrivenProperties.WeaponInaccuracy = 0.0f;
    }
  }
}
