// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerAgentStatCalculateModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerAgentStatCalculateModel : AgentStatCalculateModel
  {
    public override float GetDifficultyModifier() => 0.5f;

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
      if (!agent.IsHuman)
        MultiplayerAgentStatCalculateModel.InitializeHorseAgentStats(agent, spawnEquipment, agentDrivenProperties);
      else
        agentDrivenProperties = this.InitializeHumanAgentStats(agent, agentDrivenProperties, agentBuildData);
    }

    public override float GetWeaponInaccuracy(
      Agent agent,
      WeaponComponentData weapon,
      int weaponSkill)
    {
      float val1 = 0.0f;
      if (weapon.IsRangedWeapon)
      {
        val1 = (float) ((100.0 - (double) weapon.Accuracy) * (1.0 - 1.0 / 500.0 * (double) weaponSkill) * (1.0 / 1000.0));
        if (weapon.WeaponClass == WeaponClass.ThrowingAxe)
          val1 *= 2f;
      }
      else if (weapon.WeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.WideGrip))
        val1 = (float) (1.0 - (double) weaponSkill * 0.0099999997764825821);
      return Math.Max(val1, 0.0f);
    }

    private AgentDrivenProperties InitializeHumanAgentStats(
      Agent agent,
      AgentDrivenProperties agentDrivenProperties,
      AgentBuildData agentBuildData)
    {
      MultiplayerClassDivisions.MPHeroClass classForCharacter = MultiplayerClassDivisions.GetMPHeroClassForCharacter(agent.Character);
      if (classForCharacter != null)
      {
        this.FillAgentStatsFromData(ref agentDrivenProperties, agent, classForCharacter, agentBuildData?.AgentMissionPeer, agentBuildData?.OwningAgentMissionPeer);
        agentDrivenProperties.SetStat(DrivenProperty.UseRealisticBlocking, MultiplayerOptions.OptionType.UseRealisticBlocking.GetBoolValue() ? 1f : 0.0f);
      }
      agent.BaseHealthLimit = classForCharacter == null ? 100f : (float) classForCharacter.Health;
      agent.HealthLimit = agent.BaseHealthLimit;
      agent.Health = agent.HealthLimit;
      return agentDrivenProperties;
    }

    private static void InitializeHorseAgentStats(
      Agent agent,
      Equipment spawnEquipment,
      AgentDrivenProperties agentDrivenProperties)
    {
      agentDrivenProperties.AiSpeciesIndex = agent.Monster.FamilyType;
      agentDrivenProperties.AttributeRiding = (float) (0.800000011920929 + (spawnEquipment[EquipmentIndex.HorseHarness].Item != null ? 0.20000000298023224 : 0.0));
      float num1 = 0.0f;
      EquipmentElement equipmentElement1;
      for (int index = 1; index < 12; ++index)
      {
        equipmentElement1 = spawnEquipment[index];
        if (equipmentElement1.Item != null)
        {
          double num2 = (double) num1;
          equipmentElement1 = spawnEquipment[index];
          double modifiedMountBodyArmor = (double) equipmentElement1.GetModifiedMountBodyArmor();
          num1 = (float) (num2 + modifiedMountBodyArmor);
        }
      }
      agentDrivenProperties.ArmorTorso = num1;
      equipmentElement1 = spawnEquipment[EquipmentIndex.ArmorItemEndSlot];
      HorseComponent horseComponent = equipmentElement1.Item.HorseComponent;
      EquipmentElement equipmentElement2 = spawnEquipment[EquipmentIndex.ArmorItemEndSlot];
      AgentDrivenProperties drivenProperties = agentDrivenProperties;
      ref EquipmentElement local1 = ref equipmentElement2;
      equipmentElement1 = spawnEquipment[EquipmentIndex.HorseHarness];
      ref EquipmentElement local2 = ref equipmentElement1;
      double num3 = (double) local1.GetModifiedMountCharge(in local2) * 0.0099999997764825821;
      drivenProperties.MountChargeDamage = (float) num3;
      agentDrivenProperties.MountDifficulty = (float) equipmentElement2.Item.Difficulty;
    }

    public override float GetWeaponDamageMultiplier(Agent agent, WeaponComponentData weapon) => 1f;

    public override float GetKnockBackResistance(Agent agent)
    {
      return agent.Character.KnockbackResistance;
    }

    public override float GetKnockDownResistance(Agent agent, StrikeType strikeType = StrikeType.Invalid)
    {
      float knockdownResistance = agent.Character.KnockdownResistance;
      if (agent.HasMount)
        knockdownResistance += 0.1f;
      else if (strikeType == StrikeType.Thrust)
        knockdownResistance += 0.25f;
      return knockdownResistance;
    }

    public override float GetDismountResistance(Agent agent) => agent.Character.DismountResistance;

    public override void UpdateAgentStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      if (agent.IsHuman)
      {
        this.UpdateHumanAgentStats(agent, agentDrivenProperties);
      }
      else
      {
        if (!agent.IsMount)
          return;
        this.UpdateMountAgentStats(agent, agentDrivenProperties);
      }
    }

    private void UpdateMountAgentStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      MPPerkObject.MPPerkHandler perkHandler = MPPerkObject.GetPerkHandler(agent.RiderAgent);
      EquipmentElement mountElement = agent.SpawnEquipment[EquipmentIndex.ArmorItemEndSlot];
      EquipmentElement equipmentElement = agent.SpawnEquipment[EquipmentIndex.HorseHarness];
      agentDrivenProperties.MountManeuver = (float) mountElement.GetModifiedMountManeuver(in equipmentElement) * (float) (1.0 + (perkHandler != null ? (double) perkHandler.GetMountManeuver() : 0.0));
      agentDrivenProperties.MountSpeed = (float) ((double) (mountElement.GetModifiedMountSpeed(in equipmentElement) + 1) * 0.2199999988079071 * (1.0 + (perkHandler != null ? (double) perkHandler.GetMountSpeed() : 0.0)));
      Agent riderAgent = agent.RiderAgent;
      int ridingSkill = riderAgent != null ? riderAgent.Character.GetSkillValue(DefaultSkills.Riding) : 100;
      agentDrivenProperties.TopSpeedReachDuration = Game.Current.BasicModels.RidingModel.CalculateAcceleration(in mountElement, in equipmentElement, ridingSkill);
      agentDrivenProperties.MountSpeed *= (float) (1.0 + (double) ridingSkill * (2.0 / 625.0));
      agentDrivenProperties.MountManeuver *= (float) (1.0 + (double) ridingSkill * 0.0035000001080334187);
      float num = (float) ((double) mountElement.Weight / 2.0 + (equipmentElement.IsEmpty ? 0.0 : (double) equipmentElement.Weight));
      agentDrivenProperties.MountDashAccelerationMultiplier = (double) num > 200.0 ? ((double) num < 300.0 ? (float) (1.0 - ((double) num - 200.0) / 111.0) : 0.1f) : 1f;
    }

    public override int GetEffectiveSkillForWeapon(Agent agent, WeaponComponentData weapon)
    {
      int effectiveSkillForWeapon = base.GetEffectiveSkillForWeapon(agent, weapon);
      if (effectiveSkillForWeapon > 0 && weapon.IsRangedWeapon)
      {
        MPPerkObject.MPPerkHandler perkHandler = MPPerkObject.GetPerkHandler(agent);
        if (perkHandler != null)
          effectiveSkillForWeapon = MathF.Ceiling((float) effectiveSkillForWeapon * (perkHandler.GetRangedAccuracy() + 1f));
      }
      return effectiveSkillForWeapon;
    }

    private void UpdateHumanAgentStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      MPPerkObject.MPPerkHandler perkHandler = MPPerkObject.GetPerkHandler(agent);
      BasicCharacterObject character = agent.Character;
      MissionEquipment equipment = agent.Equipment;
      float num1 = equipment.GetTotalWeightOfWeapons() * (float) (1.0 + (perkHandler != null ? (double) perkHandler.GetEncumbrance(true) : 0.0));
      EquipmentIndex wieldedItemIndex1 = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      EquipmentIndex wieldedItemIndex2 = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      if (wieldedItemIndex1 != EquipmentIndex.None)
      {
        ItemObject itemObject = equipment[wieldedItemIndex1].Item;
        WeaponComponent weaponComponent = itemObject.WeaponComponent;
        if (weaponComponent != null)
        {
          float realWeaponLength = weaponComponent.PrimaryWeapon.GetRealWeaponLength();
          float num2 = (weaponComponent.GetItemType() == ItemObject.ItemTypeEnum.Bow ? 4f : 1.5f) * itemObject.Weight * MathF.Sqrt(realWeaponLength) * (float) (1.0 + (perkHandler != null ? (double) perkHandler.GetEncumbrance(false) : 0.0));
          num1 += num2;
        }
      }
      if (wieldedItemIndex2 != EquipmentIndex.None)
      {
        float num3 = 1.5f * equipment[wieldedItemIndex2].Item.Weight * (float) (1.0 + (perkHandler != null ? (double) perkHandler.GetEncumbrance(false) : 0.0));
        num1 += num3;
      }
      agentDrivenProperties.WeaponsEncumbrance = num1;
      EquipmentIndex wieldedItemIndex3 = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      WeaponComponentData currentUsageItem1 = wieldedItemIndex3 != EquipmentIndex.None ? equipment[wieldedItemIndex3].CurrentUsageItem : (WeaponComponentData) null;
      ItemObject primaryItem = wieldedItemIndex3 != EquipmentIndex.None ? equipment[wieldedItemIndex3].Item : (ItemObject) null;
      EquipmentIndex wieldedItemIndex4 = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      WeaponComponentData currentUsageItem2 = wieldedItemIndex4 != EquipmentIndex.None ? equipment[wieldedItemIndex4].CurrentUsageItem : (WeaponComponentData) null;
      agentDrivenProperties.SwingSpeedMultiplier = (float) (0.93000000715255737 + 0.000699999975040555 * (double) this.GetSkillValueForItem(character, primaryItem));
      agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier = agentDrivenProperties.SwingSpeedMultiplier;
      agentDrivenProperties.HandlingMultiplier = 1f;
      agentDrivenProperties.ShieldBashStunDurationMultiplier = 1f;
      agentDrivenProperties.KickStunDurationMultiplier = 1f;
      agentDrivenProperties.ReloadSpeed = (float) (0.93000000715255737 + 0.000699999975040555 * (double) this.GetSkillValueForItem(character, primaryItem));
      agentDrivenProperties.MissileSpeedMultiplier = 1f;
      agentDrivenProperties.ReloadMovementPenaltyFactor = 1f;
      this.SetAllWeaponInaccuracy(agent, agentDrivenProperties, (int) wieldedItemIndex3, currentUsageItem1);
      MultiplayerClassDivisions.MPHeroClass classForCharacter = MultiplayerClassDivisions.GetMPHeroClassForCharacter(agent.Character);
      float num4 = classForCharacter.IsTroopCharacter(agent.Character) ? classForCharacter.TroopMovementSpeedMultiplier : classForCharacter.HeroMovementSpeedMultiplier;
      agentDrivenProperties.MaxSpeedMultiplier = (float) (1.0499999523162842 * ((double) num4 * (100.0 / (100.0 + (double) num1))));
      int skillValue = character.GetSkillValue(DefaultSkills.Riding);
      bool flag1 = false;
      bool flag2 = false;
      if (currentUsageItem1 != null)
      {
        WeaponComponentData weapon = currentUsageItem1;
        int effectiveSkillForWeapon = this.GetEffectiveSkillForWeapon(agent, weapon);
        if (perkHandler != null)
          agentDrivenProperties.MissileSpeedMultiplier *= perkHandler.GetThrowingWeaponSpeed(currentUsageItem1) + 1f;
        if (weapon.IsRangedWeapon)
        {
          int thrustSpeed = weapon.ThrustSpeed;
          if (!agent.HasMount)
          {
            float num5 = MathF.Max(0.0f, (float) (1.0 - (double) effectiveSkillForWeapon / 500.0));
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = 0.125f * num5;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = 0.1f * num5;
          }
          else
          {
            float num6 = MathF.Max(0.0f, (float) ((1.0 - (double) effectiveSkillForWeapon / 500.0) * (1.0 - (double) skillValue / 1800.0)));
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = 0.025f * num6;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = 0.06f * num6;
          }
          agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = MathF.Max(0.0f, agentDrivenProperties.WeaponMaxMovementAccuracyPenalty);
          agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = MathF.Max(0.0f, agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty);
          if (weapon.RelevantSkill == DefaultSkills.Bow)
          {
            float amount = MBMath.ClampFloat((float) (((double) thrustSpeed - 60.0) / 75.0), 0.0f, 1f);
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty *= 6f;
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty *= 4.5f / MBMath.Lerp(0.75f, 2f, amount);
          }
          else if (weapon.RelevantSkill == DefaultSkills.Throwing)
          {
            float amount = MBMath.ClampFloat((float) (((double) thrustSpeed - 85.0) / 17.0), 0.0f, 1f);
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
            flag1 = true;
            agentDrivenProperties.WeaponBestAccuracyWaitTime = (float) (0.30000001192092896 + (95.75 - (double) thrustSpeed) * 0.004999999888241291);
            float amount = MBMath.ClampFloat((float) (((double) thrustSpeed - 60.0) / 75.0), 0.0f, 1f);
            agentDrivenProperties.WeaponUnsteadyBeginTime = (float) (0.10000000149011612 + (double) effectiveSkillForWeapon * 0.0099999997764825821 * (double) MBMath.Lerp(1f, 2f, amount));
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
            if (weapon.WeaponClass == WeaponClass.ThrowingAxe)
              agentDrivenProperties.WeaponInaccuracy *= 6.6f;
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
          flag2 = true;
          agentDrivenProperties.WeaponUnsteadyBeginTime = (float) (1.0 + (double) effectiveSkillForWeapon * 0.004999999888241291);
          agentDrivenProperties.WeaponUnsteadyEndTime = (float) (3.0 + (double) effectiveSkillForWeapon * 0.0099999997764825821);
        }
      }
      agentDrivenProperties.AttributeShieldMissileCollisionBodySizeAdder = 0.3f;
      Agent mountAgent = agent.MountAgent;
      float num7 = mountAgent != null ? mountAgent.GetAgentDrivenPropertyValue(DrivenProperty.AttributeRiding) : 1f;
      agentDrivenProperties.AttributeRiding = (float) skillValue * num7;
      agentDrivenProperties.AttributeHorseArchery = MissionGameModels.Current.StrikeMagnitudeModel.CalculateHorseArcheryFactor(character);
      agentDrivenProperties.BipedalRangedReadySpeedMultiplier = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalRangedReadySpeedMultiplier);
      agentDrivenProperties.BipedalRangedReloadSpeedMultiplier = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalRangedReloadSpeedMultiplier);
      if (perkHandler != null)
      {
        for (int index = 55; index < 84; ++index)
        {
          DrivenProperty drivenProperty = (DrivenProperty) index;
          if (((drivenProperty == DrivenProperty.WeaponUnsteadyBeginTime ? 0 : (drivenProperty != DrivenProperty.WeaponUnsteadyEndTime ? 1 : 0)) | (flag1 ? 1 : 0) | (flag2 ? 1 : 0)) != 0 && drivenProperty != DrivenProperty.WeaponRotationalAccuracyPenaltyInRadians | flag1)
          {
            float stat = agentDrivenProperties.GetStat(drivenProperty);
            agentDrivenProperties.SetStat(drivenProperty, stat + perkHandler.GetDrivenPropertyBonus(drivenProperty, stat));
          }
        }
      }
      if (agent.Character != null && agent.HasMount && currentUsageItem1 != null)
        this.SetMountedWeaponPenaltiesOnAgent(agent, agentDrivenProperties, currentUsageItem1);
      this.SetAiRelatedProperties(agent, agentDrivenProperties, currentUsageItem1, currentUsageItem2);
    }

    private void FillAgentStatsFromData(
      ref AgentDrivenProperties agentDrivenProperties,
      Agent agent,
      MultiplayerClassDivisions.MPHeroClass heroClass,
      MissionPeer missionPeer,
      MissionPeer owningMissionPeer)
    {
      MissionPeer peer = missionPeer ?? owningMissionPeer;
      if (peer != null)
      {
        MPPerkObject.MPOnSpawnPerkHandler spawnPerkHandler = MPPerkObject.GetOnSpawnPerkHandler(peer);
        bool isPlayer = missionPeer != null;
        for (int index = 0; index < 55; ++index)
        {
          DrivenProperty drivenProperty = (DrivenProperty) index;
          float stat = agentDrivenProperties.GetStat(drivenProperty);
          if (drivenProperty == DrivenProperty.ArmorHead || drivenProperty == DrivenProperty.ArmorTorso || drivenProperty == DrivenProperty.ArmorLegs || drivenProperty == DrivenProperty.ArmorArms)
            agentDrivenProperties.SetStat(drivenProperty, stat + (float) heroClass.ArmorValue + spawnPerkHandler.GetDrivenPropertyBonusOnSpawn(isPlayer, drivenProperty, stat));
          else
            agentDrivenProperties.SetStat(drivenProperty, stat + spawnPerkHandler.GetDrivenPropertyBonusOnSpawn(isPlayer, drivenProperty, stat));
        }
      }
      float num1 = heroClass.IsTroopCharacter(agent.Character) ? heroClass.TroopTopSpeedReachDuration : heroClass.HeroTopSpeedReachDuration;
      agentDrivenProperties.TopSpeedReachDuration = num1;
      float managedParameter1 = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalCombatSpeedMinMultiplier);
      float managedParameter2 = ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalCombatSpeedMaxMultiplier);
      float num2 = heroClass.IsTroopCharacter(agent.Character) ? heroClass.TroopCombatMovementSpeedMultiplier : heroClass.HeroCombatMovementSpeedMultiplier;
      agentDrivenProperties.CombatMaxSpeedMultiplier = managedParameter1 + (managedParameter2 - managedParameter1) * num2;
    }

    private int GetSkillValueForItem(BasicCharacterObject characterObject, ItemObject primaryItem)
    {
      return characterObject.GetSkillValue(primaryItem != null ? primaryItem.RelevantSkill : DefaultSkills.Athletics);
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

    public static float CalculateMaximumSpeedMultiplier(Agent agent)
    {
      MultiplayerClassDivisions.MPHeroClass classForCharacter = MultiplayerClassDivisions.GetMPHeroClassForCharacter(agent.Character);
      return !classForCharacter.IsTroopCharacter(agent.Character) ? classForCharacter.HeroMovementSpeedMultiplier : classForCharacter.TroopMovementSpeedMultiplier;
    }
  }
}
