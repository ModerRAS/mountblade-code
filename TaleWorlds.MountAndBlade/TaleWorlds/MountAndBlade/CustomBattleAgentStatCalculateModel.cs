// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleAgentStatCalculateModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using MBHelpers;
using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleAgentStatCalculateModel : AgentStatCalculateModel
  {
    public override float GetDifficultyModifier() => 1f;

    public override bool CanAgentRideMount(Agent agent, Agent targetMount)
    {
      return agent.CheckSkillForMounting(targetMount);
    }

    public override void InitializeAgentStats(
      Agent agent,
      Equipment spawnEquipment,
      AgentDrivenProperties agentDrivenProperties,
      AgentBuildData agentBuildData)
    {
      agentDrivenProperties.ArmorEncumbrance = spawnEquipment.GetTotalWeightOfArmor(agent.IsHuman);
      if (agent.IsHuman)
      {
        agentDrivenProperties.ArmorHead = spawnEquipment.GetHeadArmorSum();
        agentDrivenProperties.ArmorTorso = spawnEquipment.GetHumanBodyArmorSum();
        agentDrivenProperties.ArmorLegs = spawnEquipment.GetLegArmorSum();
        agentDrivenProperties.ArmorArms = spawnEquipment.GetArmArmorSum();
      }
      else
      {
        AgentDrivenProperties drivenProperties1 = agentDrivenProperties;
        EquipmentElement equipmentElement1 = spawnEquipment[EquipmentIndex.ArmorItemEndSlot];
        int internalValue = (int) equipmentElement1.Item.Id.InternalValue;
        drivenProperties1.AiSpeciesIndex = internalValue;
        AgentDrivenProperties drivenProperties2 = agentDrivenProperties;
        equipmentElement1 = spawnEquipment[EquipmentIndex.HorseHarness];
        double num1 = 0.800000011920929 + (equipmentElement1.Item != null ? 0.20000000298023224 : 0.0);
        drivenProperties2.AttributeRiding = (float) num1;
        float num2 = 0.0f;
        for (int index = 1; index < 12; ++index)
        {
          equipmentElement1 = spawnEquipment[index];
          if (equipmentElement1.Item != null)
          {
            double num3 = (double) num2;
            equipmentElement1 = spawnEquipment[index];
            double modifiedMountBodyArmor = (double) equipmentElement1.GetModifiedMountBodyArmor();
            num2 = (float) (num3 + modifiedMountBodyArmor);
          }
        }
        agentDrivenProperties.ArmorTorso = num2;
        equipmentElement1 = spawnEquipment[EquipmentIndex.ArmorItemEndSlot];
        ItemObject itemObject = equipmentElement1.Item;
        if (itemObject == null)
          return;
        HorseComponent horseComponent = itemObject.HorseComponent;
        EquipmentElement equipmentElement2 = spawnEquipment[EquipmentIndex.ArmorItemEndSlot];
        EquipmentElement harness = spawnEquipment[EquipmentIndex.HorseHarness];
        agentDrivenProperties.MountChargeDamage = (float) equipmentElement2.GetModifiedMountCharge(in harness) * 0.01f;
        agentDrivenProperties.MountDifficulty = (float) equipmentElement2.Item.Difficulty;
      }
    }

    public override void UpdateAgentStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      if (agent.IsHuman)
        this.UpdateHumanStats(agent, agentDrivenProperties);
      else
        this.UpdateHorseStats(agent, agentDrivenProperties);
    }

    public override float GetWeaponDamageMultiplier(Agent agent, WeaponComponentData weapon)
    {
      float val2 = 1f;
      SkillObject relevantSkill = weapon?.RelevantSkill;
      if (relevantSkill != null)
      {
        int effectiveSkill = MissionGameModels.Current.AgentStatCalculateModel.GetEffectiveSkill(agent, relevantSkill);
        if (relevantSkill == DefaultSkills.OneHanded)
          val2 += (float) effectiveSkill * 0.0015f;
        else if (relevantSkill == DefaultSkills.TwoHanded)
          val2 += (float) effectiveSkill * (1f / 625f);
        else if (relevantSkill == DefaultSkills.Polearm)
          val2 += (float) effectiveSkill * 0.0007f;
        else if (relevantSkill == DefaultSkills.Bow)
          val2 += (float) effectiveSkill * 0.0011f;
        else if (relevantSkill == DefaultSkills.Throwing)
          val2 += (float) effectiveSkill * 0.0006f;
      }
      return Math.Max(0.0f, val2);
    }

    public override float GetKnockBackResistance(Agent agent)
    {
      return agent.IsHuman ? Math.Max(0.0f, (float) (0.15000000596046448 + (double) this.GetEffectiveSkill(agent, DefaultSkills.Athletics) * (1.0 / 1000.0))) : float.MaxValue;
    }

    public override float GetKnockDownResistance(Agent agent, StrikeType strikeType = StrikeType.Invalid)
    {
      if (!agent.IsHuman)
        return float.MaxValue;
      float val2 = (float) (0.40000000596046448 + (double) this.GetEffectiveSkill(agent, DefaultSkills.Athletics) * (1.0 / 1000.0));
      if (agent.HasMount)
        val2 += 0.1f;
      else if (strikeType == StrikeType.Thrust)
        val2 += 0.15f;
      return Math.Max(0.0f, val2);
    }

    public override float GetDismountResistance(Agent agent)
    {
      return agent.IsHuman ? Math.Max(0.0f, (float) (0.40000000596046448 + (double) this.GetEffectiveSkill(agent, DefaultSkills.Riding) * (1.0 / 1000.0))) : float.MaxValue;
    }

    private int GetSkillValueForItem(Agent agent, ItemObject primaryItem)
    {
      return this.GetEffectiveSkill(agent, primaryItem != null ? primaryItem.RelevantSkill : DefaultSkills.Athletics);
    }

    private void UpdateHumanStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      BasicCharacterObject character = agent.Character;
      MissionEquipment equipment = agent.Equipment;
      float totalWeightOfWeapons = equipment.GetTotalWeightOfWeapons();
      int weight = agent.Monster.Weight;
      float num1 = agentDrivenProperties.ArmorEncumbrance + totalWeightOfWeapons;
      EquipmentIndex wieldedItemIndex1 = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      EquipmentIndex wieldedItemIndex2 = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      if (wieldedItemIndex1 != EquipmentIndex.None)
      {
        ItemObject itemObject = equipment[wieldedItemIndex1].Item;
        WeaponComponent weaponComponent = itemObject.WeaponComponent;
        if (weaponComponent != null)
        {
          float realWeaponLength = weaponComponent.PrimaryWeapon.GetRealWeaponLength();
          totalWeightOfWeapons += 1.5f * itemObject.Weight * MathF.Sqrt(realWeaponLength);
        }
      }
      if (wieldedItemIndex2 != EquipmentIndex.None)
      {
        ItemObject itemObject = equipment[wieldedItemIndex2].Item;
        totalWeightOfWeapons += 1.5f * itemObject.Weight;
      }
      agentDrivenProperties.WeaponsEncumbrance = totalWeightOfWeapons;
      EquipmentIndex wieldedItemIndex3 = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      WeaponComponentData currentUsageItem1 = wieldedItemIndex3 != EquipmentIndex.None ? equipment[wieldedItemIndex3].CurrentUsageItem : (WeaponComponentData) null;
      ItemObject primaryItem = wieldedItemIndex3 != EquipmentIndex.None ? equipment[wieldedItemIndex3].Item : (ItemObject) null;
      EquipmentIndex wieldedItemIndex4 = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      WeaponComponentData currentUsageItem2 = wieldedItemIndex4 != EquipmentIndex.None ? equipment[wieldedItemIndex4].CurrentUsageItem : (WeaponComponentData) null;
      agentDrivenProperties.SwingSpeedMultiplier = (float) (0.93000000715255737 + 0.000699999975040555 * (double) this.GetSkillValueForItem(agent, primaryItem));
      agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier = agentDrivenProperties.SwingSpeedMultiplier;
      agentDrivenProperties.HandlingMultiplier = 1f;
      agentDrivenProperties.ShieldBashStunDurationMultiplier = 1f;
      agentDrivenProperties.KickStunDurationMultiplier = 1f;
      agentDrivenProperties.ReloadSpeed = (float) (0.93000000715255737 + 0.000699999975040555 * (double) this.GetSkillValueForItem(agent, primaryItem));
      agentDrivenProperties.MissileSpeedMultiplier = 1f;
      agentDrivenProperties.ReloadMovementPenaltyFactor = 1f;
      this.SetAllWeaponInaccuracy(agent, agentDrivenProperties, (int) wieldedItemIndex3, currentUsageItem1);
      int effectiveSkill1 = this.GetEffectiveSkill(agent, DefaultSkills.Athletics);
      int effectiveSkill2 = this.GetEffectiveSkill(agent, DefaultSkills.Riding);
      if (currentUsageItem1 != null)
      {
        WeaponComponentData weapon = currentUsageItem1;
        int effectiveSkillForWeapon = this.GetEffectiveSkillForWeapon(agent, weapon);
        if (weapon.IsRangedWeapon)
        {
          int thrustSpeed = weapon.ThrustSpeed;
          if (!agent.HasMount)
          {
            float num2 = MathF.Max(0.0f, (float) (1.0 - (double) effectiveSkillForWeapon / 500.0));
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = 0.125f * num2;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = 0.1f * num2;
          }
          else
          {
            float num3 = MathF.Max(0.0f, (float) ((1.0 - (double) effectiveSkillForWeapon / 500.0) * (1.0 - (double) effectiveSkill2 / 1800.0)));
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = 0.025f * num3;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = 0.12f * num3;
          }
          agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = MathF.Max(0.0f, agentDrivenProperties.WeaponMaxMovementAccuracyPenalty);
          agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = MathF.Max(0.0f, agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty);
          if (weapon.RelevantSkill == DefaultSkills.Bow)
          {
            float amount = MBMath.ClampFloat((float) (((double) thrustSpeed - 45.0) / 90.0), 0.0f, 1f);
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty *= 6f;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty *= 4.5f / MBMath.Lerp(0.75f, 2f, amount);
          }
          else if (weapon.RelevantSkill == DefaultSkills.Throwing)
          {
            float amount = MBMath.ClampFloat((float) (((double) thrustSpeed - 89.0) / 13.0), 0.0f, 1f);
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty *= 0.5f;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty *= 1.5f * MBMath.Lerp(1.5f, 0.8f, amount);
          }
          else if (weapon.RelevantSkill == DefaultSkills.Crossbow)
          {
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty *= 2.5f;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty *= 1.2f;
          }
          if (weapon.WeaponClass == WeaponClass.Bow)
          {
            agentDrivenProperties.WeaponBestAccuracyWaitTime = (float) (0.30000001192092896 + (95.75 - (double) thrustSpeed) * 0.004999999888241291);
            float amount = MBMath.ClampFloat((float) (((double) thrustSpeed - 45.0) / 90.0), 0.0f, 1f);
            agentDrivenProperties.WeaponUnsteadyBeginTime = (float) (0.60000002384185791 + (double) effectiveSkillForWeapon * 0.0099999997764825821 * (double) MBMath.Lerp(2f, 4f, amount));
            if (agent.IsAIControlled)
              agentDrivenProperties.WeaponUnsteadyBeginTime *= 4f;
            agentDrivenProperties.WeaponUnsteadyEndTime = 2f + agentDrivenProperties.WeaponUnsteadyBeginTime;
            agentDrivenProperties.WeaponRotationalAccuracyPenaltyInRadians = 0.1f;
          }
          else if (weapon.WeaponClass == WeaponClass.Javelin || weapon.WeaponClass == WeaponClass.ThrowingAxe || weapon.WeaponClass == WeaponClass.ThrowingKnife)
          {
            agentDrivenProperties.WeaponBestAccuracyWaitTime = (float) (0.20000000298023224 + (89.0 - (double) thrustSpeed) * 0.008999999612569809);
            agentDrivenProperties.WeaponUnsteadyBeginTime = (float) (2.5 + (double) effectiveSkillForWeapon * 0.0099999997764825821);
            agentDrivenProperties.WeaponUnsteadyEndTime = 10f + agentDrivenProperties.WeaponUnsteadyBeginTime;
            agentDrivenProperties.WeaponRotationalAccuracyPenaltyInRadians = 0.025f;
          }
          else
          {
            agentDrivenProperties.WeaponBestAccuracyWaitTime = 0.1f;
            agentDrivenProperties.WeaponUnsteadyBeginTime = 0.0f;
            agentDrivenProperties.WeaponUnsteadyEndTime = 0.0f;
            agentDrivenProperties.WeaponRotationalAccuracyPenaltyInRadians = 0.1f;
          }
        }
        else if (weapon.WeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.WideGrip))
        {
          agentDrivenProperties.WeaponUnsteadyBeginTime = (float) (1.0 + (double) effectiveSkillForWeapon * 0.004999999888241291);
          agentDrivenProperties.WeaponUnsteadyEndTime = (float) (3.0 + (double) effectiveSkillForWeapon * 0.0099999997764825821);
        }
      }
      agentDrivenProperties.TopSpeedReachDuration = 2f / MathF.Max((float) ((200.0 + (double) effectiveSkill1) / 300.0 * ((double) weight / ((double) weight + (double) num1))), 0.3f);
      float num4 = MBMath.ClampFloat((float) (0.699999988079071 + 0.00070000014966353774 * (double) effectiveSkill1) - MathF.Max((float) (0.20000000298023224 * (1.0 - (double) effectiveSkill1 * (1.0 / 1000.0))), 0.0f) * num1 / (float) weight, 0.0f, 0.91f);
      agentDrivenProperties.MaxSpeedMultiplier = this.GetEnvironmentSpeedFactor(agent) * num4;
      float managedParameter1 = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalCombatSpeedMinMultiplier);
      float managedParameter2 = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalCombatSpeedMaxMultiplier);
      float amount1 = MathF.Min(num1 / (float) weight, 1f);
      agentDrivenProperties.CombatMaxSpeedMultiplier = MathF.Min(MBMath.Lerp(managedParameter2, managedParameter1, amount1), 1f);
      agentDrivenProperties.AttributeShieldMissileCollisionBodySizeAdder = 0.3f;
      Agent mountAgent = agent.MountAgent;
      float num5 = mountAgent != null ? mountAgent.GetAgentDrivenPropertyValue(DrivenProperty.AttributeRiding) : 1f;
      agentDrivenProperties.AttributeRiding = (float) effectiveSkill2 * num5;
      agentDrivenProperties.AttributeHorseArchery = MissionGameModels.Current.StrikeMagnitudeModel.CalculateHorseArcheryFactor(character);
      agentDrivenProperties.BipedalRangedReadySpeedMultiplier = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalRangedReadySpeedMultiplier);
      agentDrivenProperties.BipedalRangedReloadSpeedMultiplier = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalRangedReloadSpeedMultiplier);
      if (agent.Character != null)
      {
        if (agent.HasMount && currentUsageItem1 != null)
          this.SetMountedWeaponPenaltiesOnAgent(agent, agentDrivenProperties, currentUsageItem1);
        this.SetBannerEffectsOnAgent(agent, agentDrivenProperties, currentUsageItem1);
      }
      this.SetAiRelatedProperties(agent, agentDrivenProperties, currentUsageItem1, currentUsageItem2);
      float num6 = 1f;
      if (!agent.Mission.Scene.IsAtmosphereIndoor)
      {
        float rainDensity = agent.Mission.Scene.GetRainDensity();
        float fog = agent.Mission.Scene.GetFog();
        if ((double) rainDensity > 0.0 || (double) fog > 0.0)
          num6 += MathF.Min(0.3f, rainDensity + fog);
        if (!MBMath.IsBetween(agent.Mission.Scene.TimeOfDay, 4f, 20.01f))
          num6 += 0.1f;
      }
      agentDrivenProperties.AiShooterError *= num6;
    }

    private void UpdateHorseStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      Equipment spawnEquipment = agent.SpawnEquipment;
      EquipmentElement mountElement = spawnEquipment[EquipmentIndex.ArmorItemEndSlot];
      EquipmentElement equipmentElement = spawnEquipment[EquipmentIndex.HorseHarness];
      ItemObject itemObject = mountElement.Item;
      float baseNumber = (float) (mountElement.GetModifiedMountSpeed(in equipmentElement) + 1);
      int modifiedMountManeuver = mountElement.GetModifiedMountManeuver(in equipmentElement);
      int ridingSkill = 0;
      float environmentSpeedFactor = this.GetEnvironmentSpeedFactor(agent);
      if (agent.RiderAgent != null)
      {
        ridingSkill = this.GetEffectiveSkill(agent.RiderAgent, DefaultSkills.Riding);
        FactoredNumber bonuses = new FactoredNumber(baseNumber);
        FactoredNumber factoredNumber = new FactoredNumber((float) modifiedMountManeuver);
        bonuses.AddFactor((float) ridingSkill * (1f / 1000f));
        factoredNumber.AddFactor((float) ridingSkill * 0.0004f);
        BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(agent.RiderAgent.Formation);
        if (activeBanner != null)
          BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedMountMovementSpeed, activeBanner, ref bonuses);
        agentDrivenProperties.MountManeuver = factoredNumber.ResultNumber;
        agentDrivenProperties.MountSpeed = (float) ((double) environmentSpeedFactor * 0.2199999988079071 * (1.0 + (double) bonuses.ResultNumber));
      }
      else
      {
        agentDrivenProperties.MountManeuver = (float) modifiedMountManeuver;
        agentDrivenProperties.MountSpeed = (float) ((double) environmentSpeedFactor * 0.2199999988079071 * (1.0 + (double) baseNumber));
      }
      float num = (float) ((double) mountElement.Weight / 2.0 + (equipmentElement.IsEmpty ? 0.0 : (double) equipmentElement.Weight));
      agentDrivenProperties.MountDashAccelerationMultiplier = (double) num > 200.0 ? ((double) num < 300.0 ? (float) (1.0 - ((double) num - 200.0) / 111.0) : 0.1f) : 1f;
      agentDrivenProperties.TopSpeedReachDuration = Game.Current.BasicModels.RidingModel.CalculateAcceleration(in mountElement, in equipmentElement, ridingSkill);
    }

    private void SetBannerEffectsOnAgent(
      Agent agent,
      AgentDrivenProperties agentDrivenProperties,
      WeaponComponentData equippedWeaponComponent)
    {
      BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(agent.Formation);
      if (activeBanner == null)
        return;
      int num = equippedWeaponComponent == null ? 0 : (equippedWeaponComponent.IsRangedWeapon ? 1 : 0);
      FactoredNumber bonuses1 = new FactoredNumber(agentDrivenProperties.MaxSpeedMultiplier);
      FactoredNumber bonuses2 = new FactoredNumber(agentDrivenProperties.WeaponInaccuracy);
      if (num != 0 && equippedWeaponComponent != null)
        BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedRangedAccuracyPenalty, activeBanner, ref bonuses2);
      BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedTroopMovementSpeed, activeBanner, ref bonuses1);
      agentDrivenProperties.MaxSpeedMultiplier = bonuses1.ResultNumber;
      agentDrivenProperties.WeaponInaccuracy = bonuses2.ResultNumber;
    }

    private void SetMountedWeaponPenaltiesOnAgent(
      Agent agent,
      AgentDrivenProperties agentDrivenProperties,
      WeaponComponentData equippedWeaponComponent)
    {
      int effectiveSkill = this.GetEffectiveSkill(agent, DefaultSkills.Riding);
      float num1 = (float) (0.30000001192092896 - (double) effectiveSkill * (3.0 / 1000.0));
      if ((double) num1 > 0.0)
      {
        float val2_1 = agentDrivenProperties.SwingSpeedMultiplier * (1f - num1);
        float val2_2 = agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier * (1f - num1);
        float val2_3 = agentDrivenProperties.ReloadSpeed * (1f - num1);
        float val2_4 = agentDrivenProperties.WeaponBestAccuracyWaitTime * (1f + num1);
        agentDrivenProperties.SwingSpeedMultiplier = Math.Max(0.0f, val2_1);
        agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier = Math.Max(0.0f, val2_2);
        agentDrivenProperties.ReloadSpeed = Math.Max(0.0f, val2_3);
        agentDrivenProperties.WeaponBestAccuracyWaitTime = Math.Max(0.0f, val2_4);
      }
      float num2 = (float) (15.0 - (double) effectiveSkill * 0.15000000596046448);
      if ((double) num2 <= 0.0)
        return;
      float val2 = agentDrivenProperties.WeaponInaccuracy * (1f + num2);
      agentDrivenProperties.WeaponInaccuracy = Math.Max(0.0f, val2);
    }
  }
}
