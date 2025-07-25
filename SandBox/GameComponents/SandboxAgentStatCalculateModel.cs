// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxAgentStatCalculateModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxAgentStatCalculateModel : AgentStatCalculateModel
  {
    public override float GetDifficultyModifier()
    {
      return Campaign.Current?.Models?.DifficultyModel?.GetCombatAIDifficultyMultiplier() ?? 0.5f;
    }

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
      agentDrivenProperties.ArmorEncumbrance = this.GetEffectiveArmorEncumbrance(agent, spawnEquipment);
      if (agent.IsHero)
      {
        CharacterObject character = agent.Character as CharacterObject;
        AgentFlag agentFlags = agent.GetAgentFlags();
        if (character.GetPerkValue(DefaultPerks.Bow.HorseMaster))
          agentFlags |= AgentFlag.CanUseAllBowsMounted;
        if (character.GetPerkValue(DefaultPerks.Crossbow.MountedCrossbowman))
          agentFlags |= AgentFlag.CanReloadAllXBowsMounted;
        if (character.GetPerkValue(DefaultPerks.TwoHanded.ProjectileDeflection))
          agentFlags |= AgentFlag.CanDeflectArrowsWith2HSword;
        agent.SetAgentFlags(agentFlags);
      }
      else
      {
        agent.HealthLimit = this.GetEffectiveMaxHealth(agent);
        agent.Health = agent.HealthLimit;
      }
      this.UpdateAgentStats(agent, agentDrivenProperties);
    }

    public override void InitializeMissionEquipment(Agent agent)
    {
      if (!agent.IsHuman || !(agent.Character is CharacterObject character))
        return;
      PartyBase battleCombatant = (PartyBase) agent?.Origin?.BattleCombatant;
      MapEvent mapEvent = battleCombatant?.MapEvent;
      MobileParty mobileParty = battleCombatant == null || !battleCombatant.IsMobile ? (MobileParty) null : battleCombatant.MobileParty;
      CharacterObject characterObject = PartyBaseHelper.GetVisualPartyLeader(battleCombatant);
      if (characterObject == character)
        characterObject = (CharacterObject) null;
      MissionEquipment equipment = agent.Equipment;
      for (int index = 0; index < 5; ++index)
      {
        EquipmentIndex equipmentIndex = (EquipmentIndex) index;
        MissionWeapon missionWeapon = equipment[equipmentIndex];
        if (!missionWeapon.IsEmpty)
        {
          WeaponComponentData currentUsageItem = missionWeapon.CurrentUsageItem;
          if (currentUsageItem != null)
          {
            if (currentUsageItem.IsConsumable && currentUsageItem.RelevantSkill != null)
            {
              ExplainedNumber explainedNumber = new ExplainedNumber();
              if (currentUsageItem.RelevantSkill == DefaultSkills.Bow)
              {
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.DeepQuivers, character, true, ref explainedNumber);
                if (characterObject != null && characterObject.GetPerkValue(DefaultPerks.Bow.DeepQuivers))
                  explainedNumber.Add(DefaultPerks.Bow.DeepQuivers.SecondaryBonus);
              }
              else if (currentUsageItem.RelevantSkill == DefaultSkills.Crossbow)
              {
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.Fletcher, character, true, ref explainedNumber);
                if (characterObject != null && characterObject.GetPerkValue(DefaultPerks.Crossbow.Fletcher))
                  explainedNumber.Add(DefaultPerks.Crossbow.Fletcher.SecondaryBonus);
              }
              else if (currentUsageItem.RelevantSkill == DefaultSkills.Throwing)
              {
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.WellPrepared, character, true, ref explainedNumber);
                PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.Resourceful, character, true, ref explainedNumber);
                if (agent.HasMount)
                  PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.Saddlebags, character, true, ref explainedNumber);
                PerkHelper.AddPerkBonusForParty(DefaultPerks.Throwing.WellPrepared, mobileParty, false, ref explainedNumber);
              }
              int num = MathF.Round(explainedNumber.ResultNumber);
              ExplainedNumber stat = new ExplainedNumber((float) ((int) missionWeapon.Amount + num));
              if (mobileParty != null && mapEvent != null && mapEvent.AttackerSide == battleCombatant.MapEventSide && mapEvent.EventType == MapEvent.BattleTypes.Siege)
                PerkHelper.AddPerkBonusForParty(DefaultPerks.Engineering.MilitaryPlanner, mobileParty, true, ref stat);
              int dataValue = MathF.Round(stat.ResultNumber);
              if (dataValue != (int) missionWeapon.Amount)
                equipment.SetAmountOfSlot(equipmentIndex, (short) dataValue, true);
            }
            else if (currentUsageItem.IsShield)
            {
              ExplainedNumber bonuses = new ExplainedNumber((float) missionWeapon.HitPoints);
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Engineering.Scaffolds, character, false, ref bonuses);
              int dataValue = MathF.Round(bonuses.ResultNumber);
              if (dataValue != (int) missionWeapon.HitPoints)
                equipment.SetHitPointsOfSlot(equipmentIndex, (short) dataValue, true);
            }
          }
        }
      }
    }

    public override void UpdateAgentStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      if (agent.IsHuman)
        this.UpdateHumanStats(agent, agentDrivenProperties);
      else
        this.UpdateHorseStats(agent, agentDrivenProperties);
    }

    public override int GetEffectiveSkill(Agent agent, SkillObject skill)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber((float) base.GetEffectiveSkill(agent, skill));
      CharacterObject character = agent.Character as CharacterObject;
      Formation formation = agent.Formation;
      PartyBase battleCombatant = (PartyBase) agent.Origin?.BattleCombatant;
      MobileParty mobileParty = battleCombatant == null || !battleCombatant.IsMobile ? (MobileParty) null : battleCombatant.MobileParty;
      CharacterObject captainCharacter = formation?.Captain?.Character as CharacterObject;
      if (captainCharacter == character)
        captainCharacter = (CharacterObject) null;
      if (captainCharacter != null)
      {
        bool flag1 = skill == DefaultSkills.Bow || skill == DefaultSkills.Crossbow || skill == DefaultSkills.Throwing;
        bool flag2 = skill == DefaultSkills.OneHanded || skill == DefaultSkills.TwoHanded || skill == DefaultSkills.Polearm;
        if (character.IsInfantry & flag1 || character.IsRanged & flag2)
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.FlexibleFighter, captainCharacter, ref explainedNumber);
      }
      if (skill == DefaultSkills.Bow)
      {
        if (captainCharacter != null)
        {
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.DeadAim, captainCharacter, ref explainedNumber);
          if (character.HasMount())
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.HorseMaster, captainCharacter, ref explainedNumber);
        }
      }
      else if (skill == DefaultSkills.Throwing)
      {
        if (captainCharacter != null)
        {
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.StrongArms, captainCharacter, ref explainedNumber);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.RunningThrow, captainCharacter, ref explainedNumber);
        }
      }
      else if (skill == DefaultSkills.Crossbow && captainCharacter != null)
        PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.DonkeysSwiftness, captainCharacter, ref explainedNumber);
      if (mobileParty != null && mobileParty.HasPerk(DefaultPerks.Roguery.OneOfTheFamily) && character.Occupation == Occupation.Bandit && (skill.CharacterAttribute == DefaultCharacterAttributes.Vigor || skill.CharacterAttribute == DefaultCharacterAttributes.Control))
        explainedNumber.Add(DefaultPerks.Roguery.OneOfTheFamily.PrimaryBonus, DefaultPerks.Roguery.OneOfTheFamily.Name);
      if (character.HasMount())
      {
        if (skill == DefaultSkills.Riding && captainCharacter != null)
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.NimbleSteed, captainCharacter, ref explainedNumber);
      }
      else
      {
        if (mobileParty != null && formation != null && ((skill == DefaultSkills.OneHanded || skill == DefaultSkills.TwoHanded ? 1 : (skill == DefaultSkills.Polearm ? 1 : 0)) & (formation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall ? 1 : 0)) != 0)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Polearm.Phalanx, mobileParty, true, ref explainedNumber);
        if (captainCharacter != null)
        {
          if (skill == DefaultSkills.OneHanded)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.WrappedHandles, captainCharacter, ref explainedNumber);
          else if (skill == DefaultSkills.TwoHanded)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.StrongGrip, captainCharacter, ref explainedNumber);
          else if (skill == DefaultSkills.Polearm)
          {
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.CleanThrust, captainCharacter, ref explainedNumber);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.CounterWeight, captainCharacter, ref explainedNumber);
          }
        }
      }
      return (int) explainedNumber.ResultNumber;
    }

    public override float GetWeaponDamageMultiplier(Agent agent, WeaponComponentData weapon)
    {
      ExplainedNumber stat = new ExplainedNumber(1f);
      SkillObject relevantSkill = weapon?.RelevantSkill;
      if (agent.Character is CharacterObject character && relevantSkill != null)
      {
        if (relevantSkill == DefaultSkills.OneHanded)
        {
          int effectiveSkill = this.GetEffectiveSkill(agent, relevantSkill);
          SkillHelper.AddSkillBonusForCharacter(relevantSkill, DefaultSkillEffects.OneHandedDamage, character, ref stat, effectiveSkill);
        }
        else if (relevantSkill == DefaultSkills.TwoHanded)
        {
          int effectiveSkill = this.GetEffectiveSkill(agent, relevantSkill);
          SkillHelper.AddSkillBonusForCharacter(relevantSkill, DefaultSkillEffects.TwoHandedDamage, character, ref stat, effectiveSkill);
        }
        else if (relevantSkill == DefaultSkills.Polearm)
        {
          int effectiveSkill = this.GetEffectiveSkill(agent, relevantSkill);
          SkillHelper.AddSkillBonusForCharacter(relevantSkill, DefaultSkillEffects.PolearmDamage, character, ref stat, effectiveSkill);
        }
        else if (relevantSkill == DefaultSkills.Bow)
        {
          int effectiveSkill = this.GetEffectiveSkill(agent, relevantSkill);
          SkillHelper.AddSkillBonusForCharacter(relevantSkill, DefaultSkillEffects.BowDamage, character, ref stat, effectiveSkill);
        }
        else if (relevantSkill == DefaultSkills.Throwing)
        {
          int effectiveSkill = this.GetEffectiveSkill(agent, relevantSkill);
          SkillHelper.AddSkillBonusForCharacter(relevantSkill, DefaultSkillEffects.ThrowingDamage, character, ref stat, effectiveSkill);
        }
      }
      return Math.Max(0.0f, stat.ResultNumber);
    }

    public override float GetKnockBackResistance(Agent agent)
    {
      return agent.IsHuman ? Math.Max(0.0f, DefaultSkillEffects.KnockBackResistance.GetPrimaryValue(this.GetEffectiveSkill(agent, DefaultSkills.Athletics)) * 0.01f) : float.MaxValue;
    }

    public override float GetKnockDownResistance(Agent agent, StrikeType strikeType = StrikeType.Invalid)
    {
      if (!agent.IsHuman)
        return float.MaxValue;
      float val2 = DefaultSkillEffects.KnockDownResistance.GetPrimaryValue(this.GetEffectiveSkill(agent, DefaultSkills.Athletics)) * 0.01f;
      if (agent.HasMount)
        val2 += 0.1f;
      else if (strikeType == StrikeType.Thrust)
        val2 += 0.15f;
      return Math.Max(0.0f, val2);
    }

    public override float GetDismountResistance(Agent agent)
    {
      return agent.IsHuman ? Math.Max(0.0f, DefaultSkillEffects.DismountResistance.GetPrimaryValue(this.GetEffectiveSkill(agent, DefaultSkills.Riding)) * 0.01f) : float.MaxValue;
    }

    public override float GetWeaponInaccuracy(
      Agent agent,
      WeaponComponentData weapon,
      int weaponSkill)
    {
      CharacterObject character = agent.Character as CharacterObject;
      CharacterObject captainCharacter = agent.Formation?.Captain?.Character as CharacterObject;
      if (character == captainCharacter)
        captainCharacter = (CharacterObject) null;
      float a = 0.0f;
      if (weapon.IsRangedWeapon)
      {
        ExplainedNumber explainedNumber = new ExplainedNumber(1f);
        if (character != null)
        {
          if (weapon.RelevantSkill == DefaultSkills.Bow)
          {
            SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Bow, DefaultSkillEffects.BowAccuracy, character, ref explainedNumber, weaponSkill, false);
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.QuickAdjustments, captainCharacter, ref explainedNumber);
          }
          else if (weapon.RelevantSkill == DefaultSkills.Crossbow)
            SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Crossbow, DefaultSkillEffects.CrossbowAccuracy, character, ref explainedNumber, weaponSkill, false);
          else if (weapon.RelevantSkill == DefaultSkills.Throwing)
            SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Throwing, DefaultSkillEffects.ThrowingAccuracy, character, ref explainedNumber, weaponSkill, false);
        }
        a = (float) ((100.0 - (double) weapon.Accuracy) * (double) explainedNumber.ResultNumber * (1.0 / 1000.0));
      }
      else if (weapon.WeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.WideGrip))
        a = (float) (1.0 - (double) weaponSkill * 0.0099999997764825821);
      return MathF.Max(a, 0.0f);
    }

    public override float GetInteractionDistance(Agent agent)
    {
      return agent.HasMount && agent.Character is CharacterObject character && character.GetPerkValue(DefaultPerks.Throwing.LongReach) ? 3f : base.GetInteractionDistance(agent);
    }

    public override float GetMaxCameraZoom(Agent agent)
    {
      CharacterObject character = agent.Character as CharacterObject;
      ExplainedNumber bonuses = new ExplainedNumber(1f);
      if (character != null)
      {
        MissionEquipment equipment = agent.Equipment;
        EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
        WeaponComponentData currentUsageItem = wieldedItemIndex != EquipmentIndex.None ? equipment[wieldedItemIndex].CurrentUsageItem : (WeaponComponentData) null;
        if (currentUsageItem != null)
        {
          if (currentUsageItem.RelevantSkill == DefaultSkills.Bow)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.EagleEye, character, true, ref bonuses);
          else if (currentUsageItem.RelevantSkill == DefaultSkills.Crossbow)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.LongShots, character, true, ref bonuses);
          else if (currentUsageItem.RelevantSkill == DefaultSkills.Throwing)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.Focus, character, true, ref bonuses);
        }
      }
      return bonuses.ResultNumber;
    }

    public List<PerkObject> GetPerksOfAgent(
      CharacterObject agentCharacter,
      SkillObject skill = null,
      bool filterPerkRole = false,
      SkillEffect.PerkRole perkRole = SkillEffect.PerkRole.Personal)
    {
      List<PerkObject> perksOfAgent = new List<PerkObject>();
      if (agentCharacter != null)
      {
        foreach (PerkObject perk in (List<PerkObject>) PerkObject.All)
        {
          if (agentCharacter.GetPerkValue(perk) && (skill == null || skill == perk.Skill))
          {
            if (filterPerkRole)
            {
              if (perk.PrimaryRole == perkRole || perk.SecondaryRole == perkRole)
                perksOfAgent.Add(perk);
            }
            else
              perksOfAgent.Add(perk);
          }
        }
      }
      return perksOfAgent;
    }

    public override string GetMissionDebugInfoForAgent(Agent agent)
    {
      string str1 = "" + "Base: Initial stats modified only by skills\n" + "Effective (Eff): Stats that are modified by perks & mission effects\n\n";
      string format1 = "{0,-20}";
      string str2 = str1 + string.Format(format1, (object) "Name") + ": " + agent.Name + "\n" + string.Format(format1, (object) "Age") + ": " + (object) (int) agent.Age + "\n" + string.Format(format1, (object) "Health") + ": " + (object) agent.Health + "\n";
      int num = agent.IsHuman ? agent.Character.MaxHitPoints() : agent.Monster.HitPoints;
      string debugInfoForAgent = str2 + string.Format(format1, (object) "Max.Health") + ": " + (object) num + "(Base)\n" + string.Format(format1, (object) "") + "  " + (object) MissionGameModels.Current.AgentStatCalculateModel.GetEffectiveMaxHealth(agent) + "(Eff)\n" + string.Format(format1, (object) "Team") + ": " + (agent.Team != null ? (agent.Team.IsAttacker ? "Attacker" : "Defender") : "N/A") + "\n";
      if (agent.IsHuman)
      {
        string format2 = format1 + ": {1,4:G}, {2,4:G}";
        string str3 = debugInfoForAgent + "-------------------------------------\n" + string.Format(format1 + ": {1,4}, {2,4}", (object) "Skills", (object) "Base", (object) "Eff") + "\n" + "-------------------------------------\n";
        foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        {
          int skillValue = agent.Character.GetSkillValue(skill);
          int effectiveSkill = MissionGameModels.Current.AgentStatCalculateModel.GetEffectiveSkill(agent, skill);
          string str4 = string.Format(format2, (object) skill.Name, (object) skillValue, (object) effectiveSkill);
          str3 = str3 + str4 + "\n";
        }
        debugInfoForAgent = str3 + "-------------------------------------\n";
        string perkInfoForAgent1 = this.GetDebugPerkInfoForAgent(agent.Character as CharacterObject);
        if (perkInfoForAgent1.Length > 0)
          debugInfoForAgent = debugInfoForAgent + string.Format(format1 + ": ", (object) "Perks") + "\n" + "-------------------------------------\n" + perkInfoForAgent1 + "-------------------------------------\n";
        CharacterObject character = agent.Formation?.Captain?.Character as CharacterObject;
        string perkInfoForAgent2 = this.GetDebugPerkInfoForAgent(character, true, SkillEffect.PerkRole.Captain);
        if (perkInfoForAgent2.Length > 0)
          debugInfoForAgent = debugInfoForAgent + string.Format(format1 + ": ", (object) "Captain Perks") + (object) character.Name + "\n" + "-------------------------------------\n" + perkInfoForAgent2 + "-------------------------------------\n";
        CharacterObject visualPartyLeader = PartyBaseHelper.GetVisualPartyLeader(((PartyBase) agent.Origin?.BattleCombatant)?.MobileParty?.Party);
        string perkInfoForAgent3 = this.GetDebugPerkInfoForAgent(visualPartyLeader, true, SkillEffect.PerkRole.PartyLeader);
        if (perkInfoForAgent3.Length > 0)
          debugInfoForAgent = debugInfoForAgent + string.Format(format1 + ": ", (object) "Party Leader Perks") + (object) visualPartyLeader.Name + "\n" + "-------------------------------------\n" + perkInfoForAgent3 + "-------------------------------------\n";
      }
      return debugInfoForAgent;
    }

    public float GetEffectiveArmorEncumbrance(Agent agent, Equipment equipment)
    {
      float totalWeightOfArmor = equipment.GetTotalWeightOfArmor(agent.IsHuman);
      float num = 1f;
      if (agent.Character is CharacterObject character && character.GetPerkValue(DefaultPerks.Athletics.FormFittingArmor))
        num += DefaultPerks.Athletics.FormFittingArmor.PrimaryBonus;
      return MathF.Max(0.0f, totalWeightOfArmor * num);
    }

    public override float GetEffectiveMaxHealth(Agent agent)
    {
      if (agent.IsHero)
        return (float) agent.Character.MaxHitPoints();
      ExplainedNumber explainedNumber = new ExplainedNumber(agent.BaseHealthLimit);
      if (agent.IsHuman)
      {
        CharacterObject character = agent.Character as CharacterObject;
        MobileParty mobileParty = ((PartyBase) agent?.Origin?.BattleCombatant)?.MobileParty;
        CharacterObject characterObject = mobileParty?.LeaderHero?.CharacterObject;
        if (character != null && characterObject != null)
        {
          PerkHelper.AddPerkBonusForParty(DefaultPerks.TwoHanded.ThickHides, mobileParty, false, ref explainedNumber);
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Polearm.HardyFrontline, mobileParty, true, ref explainedNumber);
          if (character.IsRanged)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Crossbow.PickedShots, mobileParty, false, ref explainedNumber);
          if (!agent.HasMount)
          {
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Athletics.WellBuilt, mobileParty, false, ref explainedNumber);
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Polearm.HardKnock, mobileParty, false, ref explainedNumber);
            if (character.IsInfantry)
              PerkHelper.AddPerkBonusForParty(DefaultPerks.OneHanded.UnwaveringDefense, mobileParty, false, ref explainedNumber);
          }
          if (characterObject.GetPerkValue(DefaultPerks.Medicine.MinisterOfHealth))
          {
            int num = (int) ((double) MathF.Max(characterObject.GetSkillValue(DefaultSkills.Medicine) - Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus, 0) * (double) DefaultPerks.Medicine.MinisterOfHealth.PrimaryBonus);
            if (num > 0)
              explainedNumber.Add((float) num);
          }
        }
      }
      else
      {
        Agent riderAgent = agent.RiderAgent;
        if (riderAgent != null)
        {
          CharacterObject character = riderAgent?.Character as CharacterObject;
          MobileParty mobileParty = ((PartyBase) riderAgent?.Origin?.BattleCombatant)?.MobileParty;
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.Sledges, mobileParty, false, ref explainedNumber);
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.Veterinary, character, true, ref explainedNumber);
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Riding.Veterinary, mobileParty, false, ref explainedNumber);
        }
      }
      return explainedNumber.ResultNumber;
    }

    public override float GetEnvironmentSpeedFactor(Agent agent)
    {
      Scene scene = agent.Mission.Scene;
      float environmentSpeedFactor = 1f;
      if (!agent.Mission.Scene.IsAtmosphereIndoor)
      {
        if ((double) agent.Mission.Scene.GetRainDensity() > 0.0)
          environmentSpeedFactor *= 0.9f;
        if (!agent.IsHuman && CampaignTime.Now.IsNightTime)
          environmentSpeedFactor *= 0.9f;
      }
      return environmentSpeedFactor;
    }

    private string GetDebugPerkInfoForAgent(
      CharacterObject agentCharacter,
      bool filterPerkRole = false,
      SkillEffect.PerkRole perkRole = SkillEffect.PerkRole.Personal)
    {
      string perkInfoForAgent = "";
      string format = "{0,-18}";
      if (this.GetPerksOfAgent(agentCharacter, filterPerkRole: filterPerkRole, perkRole: perkRole).Count > 0)
      {
        foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        {
          List<PerkObject> perksOfAgent = this.GetPerksOfAgent(agentCharacter, skill, filterPerkRole, perkRole);
          if (perksOfAgent != null && perksOfAgent.Count > 0)
          {
            string str1 = string.Format(format, (object) skill.Name) + ": ";
            int num1 = 5;
            int num2 = 0;
            foreach (PropertyObject propertyObject in perksOfAgent)
            {
              string str2 = propertyObject.Name.ToString();
              if (num2 == num1)
              {
                str1 = str1 + "\n" + string.Format(format, (object) "") + "  ";
                num2 = 0;
              }
              str1 = str1 + str2 + ", ";
              ++num2;
            }
            string str3 = str1.Remove(str1.LastIndexOf(","));
            perkInfoForAgent = perkInfoForAgent + str3 + "\n";
          }
        }
      }
      return perkInfoForAgent;
    }

    private void UpdateHumanStats(Agent agent, AgentDrivenProperties agentDrivenProperties)
    {
      Equipment spawnEquipment = agent.SpawnEquipment;
      agentDrivenProperties.ArmorHead = spawnEquipment.GetHeadArmorSum();
      agentDrivenProperties.ArmorTorso = spawnEquipment.GetHumanBodyArmorSum();
      agentDrivenProperties.ArmorLegs = spawnEquipment.GetLegArmorSum();
      agentDrivenProperties.ArmorArms = spawnEquipment.GetArmArmorSum();
      BasicCharacterObject character = agent.Character;
      CharacterObject agentCharacter = character as CharacterObject;
      MissionEquipment equipment = agent.Equipment;
      float totalWeightOfWeapons = equipment.GetTotalWeightOfWeapons();
      float armorEncumbrance = this.GetEffectiveArmorEncumbrance(agent, spawnEquipment);
      int weight = agent.Monster.Weight;
      EquipmentIndex wieldedItemIndex1 = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      EquipmentIndex wieldedItemIndex2 = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      if (wieldedItemIndex1 != EquipmentIndex.None)
      {
        ItemObject itemObject = equipment[wieldedItemIndex1].Item;
        WeaponComponent weaponComponent = itemObject.WeaponComponent;
        if (weaponComponent != null)
        {
          ItemObject.ItemTypeEnum itemType = weaponComponent.GetItemType();
          bool flag = false;
          if (agentCharacter != null)
            flag = (itemType == ItemObject.ItemTypeEnum.Bow && agentCharacter.GetPerkValue(DefaultPerks.Bow.RangersSwiftness)) | (itemType == ItemObject.ItemTypeEnum.Crossbow && agentCharacter.GetPerkValue(DefaultPerks.Crossbow.LooseAndMove));
          if (!flag)
          {
            float realWeaponLength = weaponComponent.PrimaryWeapon.GetRealWeaponLength();
            totalWeightOfWeapons += 4f * MathF.Sqrt(realWeaponLength) * itemObject.Weight;
          }
        }
      }
      if (wieldedItemIndex2 != EquipmentIndex.None)
      {
        ItemObject itemObject = equipment[wieldedItemIndex2].Item;
        WeaponComponentData primaryWeapon = itemObject.PrimaryWeapon;
        if (primaryWeapon != null && primaryWeapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanBlockRanged) && (agentCharacter == null ? 0 : (agentCharacter.GetPerkValue(DefaultPerks.OneHanded.ShieldBearer) ? 1 : 0)) == 0)
          totalWeightOfWeapons += 1.5f * itemObject.Weight;
      }
      agentDrivenProperties.WeaponsEncumbrance = totalWeightOfWeapons;
      agentDrivenProperties.ArmorEncumbrance = armorEncumbrance;
      float num1 = armorEncumbrance + totalWeightOfWeapons;
      EquipmentIndex wieldedItemIndex3 = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      MissionWeapon missionWeapon;
      WeaponComponentData weaponComponentData1;
      if (wieldedItemIndex3 == EquipmentIndex.None)
      {
        weaponComponentData1 = (WeaponComponentData) null;
      }
      else
      {
        missionWeapon = equipment[wieldedItemIndex3];
        weaponComponentData1 = missionWeapon.CurrentUsageItem;
      }
      WeaponComponentData weaponComponentData2 = weaponComponentData1;
      EquipmentIndex wieldedItemIndex4 = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      WeaponComponentData weaponComponentData3;
      if (wieldedItemIndex4 == EquipmentIndex.None)
      {
        weaponComponentData3 = (WeaponComponentData) null;
      }
      else
      {
        missionWeapon = equipment[wieldedItemIndex4];
        weaponComponentData3 = missionWeapon.CurrentUsageItem;
      }
      WeaponComponentData secondaryItem = weaponComponentData3;
      agentDrivenProperties.SwingSpeedMultiplier = 0.93f;
      agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier = 0.93f;
      agentDrivenProperties.HandlingMultiplier = 1f;
      agentDrivenProperties.ShieldBashStunDurationMultiplier = 1f;
      agentDrivenProperties.KickStunDurationMultiplier = 1f;
      agentDrivenProperties.ReloadSpeed = 0.93f;
      agentDrivenProperties.MissileSpeedMultiplier = 1f;
      agentDrivenProperties.ReloadMovementPenaltyFactor = 1f;
      this.SetAllWeaponInaccuracy(agent, agentDrivenProperties, (int) wieldedItemIndex3, weaponComponentData2);
      int effectiveSkill1 = this.GetEffectiveSkill(agent, DefaultSkills.Athletics);
      int effectiveSkill2 = this.GetEffectiveSkill(agent, DefaultSkills.Riding);
      if (weaponComponentData2 != null)
      {
        WeaponComponentData weapon = weaponComponentData2;
        int effectiveSkillForWeapon = this.GetEffectiveSkillForWeapon(agent, weapon);
        if (weapon.IsRangedWeapon)
        {
          int thrustSpeed = weapon.ThrustSpeed;
          if (!agent.HasMount)
          {
            float num2 = MathF.Max(0.0f, (float) (1.0 - (double) effectiveSkillForWeapon / 500.0));
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = MathF.Max(0.0f, 0.125f * num2);
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = MathF.Max(0.0f, 0.1f * num2);
          }
          else
          {
            float num3 = MathF.Max(0.0f, (float) ((1.0 - (double) effectiveSkillForWeapon / 500.0) * (1.0 - (double) effectiveSkill2 / 1800.0)));
            agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = MathF.Max(0.0f, 0.025f * num3);
            agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = MathF.Max(0.0f, 0.12f * num3);
          }
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
      agentDrivenProperties.TopSpeedReachDuration = (float) (2.5 + (double) MathF.Max((float) (5.0 - (1.0 + (double) effectiveSkill1 * 0.0099999997764825821)), 1f) / 3.5) - MathF.Min((float) weight / ((float) weight + num1), 0.8f);
      float maxValue = (float) (0.699999988079071 * (1.0 + 3.0 * (double) DefaultSkillEffects.AthleticsSpeedFactor.PrimaryBonus));
      float num4 = MBMath.ClampFloat((float) (0.699999988079071 + ((double) maxValue - 0.699999988079071) / 300.0 * (double) effectiveSkill1) - MathF.Max((float) (0.20000000298023224 * (1.0 - (double) DefaultSkillEffects.AthleticsWeightFactor.GetPrimaryValue(effectiveSkill1) * 0.0099999997764825821)), 0.0f) * num1 / (float) weight, 0.0f, maxValue);
      agentDrivenProperties.MaxSpeedMultiplier = this.GetEnvironmentSpeedFactor(agent) * num4;
      float managedParameter1 = TaleWorlds.Core.ManagedParameters.Instance.GetManagedParameter(TaleWorlds.Core.ManagedParametersEnum.BipedalCombatSpeedMinMultiplier);
      float managedParameter2 = TaleWorlds.Core.ManagedParameters.Instance.GetManagedParameter(TaleWorlds.Core.ManagedParametersEnum.BipedalCombatSpeedMaxMultiplier);
      float amount1 = MathF.Min(num1 / (float) weight, 1f);
      agentDrivenProperties.CombatMaxSpeedMultiplier = MathF.Min(MBMath.Lerp(managedParameter2, managedParameter1, amount1), 1f);
      agentDrivenProperties.AttributeShieldMissileCollisionBodySizeAdder = 0.3f;
      Agent mountAgent = agent.MountAgent;
      float num5 = mountAgent != null ? mountAgent.GetAgentDrivenPropertyValue(DrivenProperty.AttributeRiding) : 1f;
      agentDrivenProperties.AttributeRiding = (float) effectiveSkill2 * num5;
      agentDrivenProperties.AttributeHorseArchery = MissionGameModels.Current.StrikeMagnitudeModel.CalculateHorseArcheryFactor(character);
      agentDrivenProperties.BipedalRangedReadySpeedMultiplier = TaleWorlds.Core.ManagedParameters.Instance.GetManagedParameter(TaleWorlds.Core.ManagedParametersEnum.BipedalRangedReadySpeedMultiplier);
      agentDrivenProperties.BipedalRangedReloadSpeedMultiplier = TaleWorlds.Core.ManagedParameters.Instance.GetManagedParameter(TaleWorlds.Core.ManagedParametersEnum.BipedalRangedReloadSpeedMultiplier);
      if (agentCharacter != null)
      {
        if (weaponComponentData2 != null)
        {
          this.SetWeaponSkillEffectsOnAgent(agent, agentCharacter, agentDrivenProperties, weaponComponentData2);
          if (agent.HasMount)
            this.SetMountedPenaltiesOnAgent(agent, agentDrivenProperties, weaponComponentData2);
        }
        this.SetPerkAndBannerEffectsOnAgent(agent, agentCharacter, agentDrivenProperties, weaponComponentData2);
      }
      this.SetAiRelatedProperties(agent, agentDrivenProperties, weaponComponentData2, secondaryItem);
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
      ItemObject itemObject = mountElement.Item;
      EquipmentElement equipmentElement = spawnEquipment[EquipmentIndex.HorseHarness];
      agentDrivenProperties.AiSpeciesIndex = (int) itemObject.Id.InternalValue;
      agentDrivenProperties.AttributeRiding = (float) (0.800000011920929 + (equipmentElement.Item != null ? 0.20000000298023224 : 0.0));
      float num1 = 0.0f;
      for (int index = 1; index < 12; ++index)
      {
        if (spawnEquipment[index].Item != null)
          num1 += (float) spawnEquipment[index].GetModifiedMountBodyArmor();
      }
      agentDrivenProperties.ArmorTorso = num1;
      int modifiedMountManeuver = mountElement.GetModifiedMountManeuver(in equipmentElement);
      int baseNumber = mountElement.GetModifiedMountSpeed(in equipmentElement) + 1;
      int num2 = 0;
      float environmentSpeedFactor = this.GetEnvironmentSpeedFactor(agent);
      bool flag = Campaign.Current.Models.MapWeatherModel.GetWeatherEffectOnTerrainForPosition(MobileParty.MainParty.Position2D) == MapWeatherModel.WeatherEventEffectOnTerrain.Wet;
      Agent riderAgent = agent.RiderAgent;
      if (riderAgent != null)
      {
        CharacterObject character1 = riderAgent.Character as CharacterObject;
        Formation formation = riderAgent.Formation;
        Agent agent1 = formation?.Captain;
        if (agent1 == riderAgent)
          agent1 = (Agent) null;
        CharacterObject character2 = agent1?.Character as CharacterObject;
        BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(formation);
        ExplainedNumber explainedNumber1 = new ExplainedNumber((float) modifiedMountManeuver);
        ExplainedNumber explainedNumber2 = new ExplainedNumber((float) baseNumber);
        num2 = this.GetEffectiveSkill(agent.RiderAgent, DefaultSkills.Riding);
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Riding, DefaultSkillEffects.HorseManeuver, agent.RiderAgent.Character as CharacterObject, ref explainedNumber1, num2);
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Riding, DefaultSkillEffects.HorseSpeed, agent.RiderAgent.Character as CharacterObject, ref explainedNumber2, num2);
        if (activeBanner != null)
          BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedMountMovementSpeed, activeBanner, ref explainedNumber2);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.NimbleSteed, character1, true, ref explainedNumber1);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.SweepingWind, character1, true, ref explainedNumber2);
        ExplainedNumber bonuses = new ExplainedNumber(agentDrivenProperties.ArmorTorso);
        PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.ToughSteed, character2, ref bonuses);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.ToughSteed, character1, true, ref bonuses);
        if (character1.GetPerkValue(DefaultPerks.Riding.TheWayOfTheSaddle))
        {
          float num3 = (float) MathF.Max(num2 - Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus, 0) * DefaultPerks.Riding.TheWayOfTheSaddle.PrimaryBonus;
          explainedNumber1.Add(num3);
        }
        if (equipmentElement.Item == null)
        {
          explainedNumber1.AddFactor(-0.1f);
          explainedNumber2.AddFactor(-0.1f);
        }
        if (flag)
          explainedNumber2.AddFactor(-0.25f);
        agentDrivenProperties.ArmorTorso = bonuses.ResultNumber;
        agentDrivenProperties.MountManeuver = explainedNumber1.ResultNumber;
        agentDrivenProperties.MountSpeed = (float) ((double) environmentSpeedFactor * 0.2199999988079071 * (1.0 + (double) explainedNumber2.ResultNumber));
      }
      else
      {
        agentDrivenProperties.MountManeuver = (float) modifiedMountManeuver;
        agentDrivenProperties.MountSpeed = environmentSpeedFactor * 0.22f * (float) (1 + baseNumber);
      }
      float num4 = (float) ((double) mountElement.Weight / 2.0 + (equipmentElement.IsEmpty ? 0.0 : (double) equipmentElement.Weight));
      agentDrivenProperties.MountDashAccelerationMultiplier = (double) num4 > 200.0 ? ((double) num4 < 300.0 ? (float) (1.0 - ((double) num4 - 200.0) / 111.0) : 0.1f) : 1f;
      if (flag)
        agentDrivenProperties.MountDashAccelerationMultiplier *= 0.75f;
      agentDrivenProperties.TopSpeedReachDuration = Game.Current.BasicModels.RidingModel.CalculateAcceleration(in mountElement, in equipmentElement, num2);
      agentDrivenProperties.MountChargeDamage = (float) mountElement.GetModifiedMountCharge(in equipmentElement) * 0.004f;
      agentDrivenProperties.MountDifficulty = (float) mountElement.Item.Difficulty;
    }

    private void SetPerkAndBannerEffectsOnAgent(
      Agent agent,
      CharacterObject agentCharacter,
      AgentDrivenProperties agentDrivenProperties,
      WeaponComponentData equippedWeaponComponent)
    {
      CharacterObject captainCharacter = agent.Formation?.Captain?.Character as CharacterObject;
      if (agent.Formation?.Captain == agent)
        captainCharacter = (CharacterObject) null;
      ItemObject itemObject1 = (ItemObject) null;
      EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      if (wieldedItemIndex != EquipmentIndex.None)
        itemObject1 = agent.Equipment[wieldedItemIndex].Item;
      BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(agent.Formation);
      bool flag1 = equippedWeaponComponent != null && equippedWeaponComponent.IsRangedWeapon;
      bool flag2 = equippedWeaponComponent != null && equippedWeaponComponent.IsMeleeWeapon;
      bool flag3 = itemObject1 != null && itemObject1.PrimaryWeapon.IsShield;
      ExplainedNumber bonuses1 = new ExplainedNumber(agentDrivenProperties.CombatMaxSpeedMultiplier);
      ExplainedNumber bonuses2 = new ExplainedNumber(agentDrivenProperties.MaxSpeedMultiplier);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.FleetOfFoot, agentCharacter, true, ref bonuses1);
      ExplainedNumber bonuses3 = new ExplainedNumber(agentDrivenProperties.KickStunDurationMultiplier);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Roguery.DirtyFighting, agentCharacter, true, ref bonuses3);
      agentDrivenProperties.KickStunDurationMultiplier = bonuses3.ResultNumber;
      if (equippedWeaponComponent != null)
      {
        ExplainedNumber bonuses4 = new ExplainedNumber(agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier);
        if (flag2)
        {
          ExplainedNumber bonuses5 = new ExplainedNumber(agentDrivenProperties.SwingSpeedMultiplier);
          ExplainedNumber bonuses6 = new ExplainedNumber(agentDrivenProperties.HandlingMultiplier);
          if (!agent.HasMount)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.Fury, agentCharacter, true, ref bonuses6);
            if (captainCharacter != null)
            {
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.Fury, captainCharacter, ref bonuses6);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.OnTheEdge, captainCharacter, ref bonuses5);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.BladeMaster, captainCharacter, ref bonuses5);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.SwiftSwing, captainCharacter, ref bonuses5);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.BladeMaster, captainCharacter, ref bonuses4);
            }
          }
          if (equippedWeaponComponent.RelevantSkill == DefaultSkills.OneHanded)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.SwiftStrike, agentCharacter, true, ref bonuses5);
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.OneHanded.WayOfTheSword, agentCharacter, DefaultSkills.OneHanded, true, ref bonuses5, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.OneHanded.WayOfTheSword, agentCharacter, DefaultSkills.OneHanded, true, ref bonuses4, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.WrappedHandles, agentCharacter, true, ref bonuses6);
          }
          else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.TwoHanded)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.OnTheEdge, agentCharacter, true, ref bonuses5);
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.TwoHanded.WayOfTheGreatAxe, agentCharacter, DefaultSkills.TwoHanded, true, ref bonuses5, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.TwoHanded.WayOfTheGreatAxe, agentCharacter, DefaultSkills.TwoHanded, true, ref bonuses4, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.StrongGrip, agentCharacter, true, ref bonuses6);
          }
          else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Polearm)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.Footwork, agentCharacter, true, ref bonuses1);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.SwiftSwing, agentCharacter, true, ref bonuses5);
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Polearm.WayOfTheSpear, agentCharacter, DefaultSkills.Polearm, true, ref bonuses5, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Polearm.WayOfTheSpear, agentCharacter, DefaultSkills.Polearm, true, ref bonuses4, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
            if (equippedWeaponComponent.SwingDamageType != DamageTypes.Invalid)
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Polearm.CounterWeight, agentCharacter, true, ref bonuses6);
          }
          agentDrivenProperties.SwingSpeedMultiplier = bonuses5.ResultNumber;
          agentDrivenProperties.HandlingMultiplier = bonuses6.ResultNumber;
        }
        if (flag1)
        {
          ExplainedNumber bonuses7 = new ExplainedNumber(agentDrivenProperties.WeaponInaccuracy);
          ExplainedNumber bonuses8 = new ExplainedNumber(agentDrivenProperties.WeaponMaxMovementAccuracyPenalty);
          ExplainedNumber bonuses9 = new ExplainedNumber(agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty);
          ExplainedNumber bonuses10 = new ExplainedNumber(agentDrivenProperties.WeaponRotationalAccuracyPenaltyInRadians);
          ExplainedNumber bonuses11 = new ExplainedNumber(agentDrivenProperties.WeaponUnsteadyBeginTime);
          ExplainedNumber bonuses12 = new ExplainedNumber(agentDrivenProperties.WeaponUnsteadyEndTime);
          ExplainedNumber bonuses13 = new ExplainedNumber(agentDrivenProperties.ReloadMovementPenaltyFactor);
          ExplainedNumber bonuses14 = new ExplainedNumber(agentDrivenProperties.ReloadSpeed);
          ExplainedNumber bonuses15 = new ExplainedNumber(agentDrivenProperties.MissileSpeedMultiplier);
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.NockingPoint, agentCharacter, true, ref bonuses13);
          if (captainCharacter != null)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.LooseAndMove, captainCharacter, ref bonuses2);
          if (activeBanner != null)
            BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedRangedAccuracyPenalty, activeBanner, ref bonuses7);
          if (agent.HasMount)
          {
            if (agentCharacter.GetPerkValue(DefaultPerks.Riding.Sagittarius))
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.Sagittarius, agentCharacter, true, ref bonuses8);
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Riding.Sagittarius, agentCharacter, true, ref bonuses9);
            }
            if (captainCharacter != null && captainCharacter.GetPerkValue(DefaultPerks.Riding.Sagittarius))
            {
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.Sagittarius, captainCharacter, ref bonuses8);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Riding.Sagittarius, captainCharacter, ref bonuses9);
            }
            if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Bow && agentCharacter.GetPerkValue(DefaultPerks.Bow.MountedArchery))
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.MountedArchery, agentCharacter, true, ref bonuses8);
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.MountedArchery, agentCharacter, true, ref bonuses9);
            }
            if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Throwing && agentCharacter.GetPerkValue(DefaultPerks.Throwing.MountedSkirmisher))
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.MountedSkirmisher, agentCharacter, true, ref bonuses8);
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.MountedSkirmisher, agentCharacter, true, ref bonuses9);
            }
          }
          bool flag4 = false;
          if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Bow)
          {
            flag4 = true;
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.BowControl, agentCharacter, true, ref bonuses8);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.RapidFire, agentCharacter, true, ref bonuses14);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.QuickAdjustments, agentCharacter, true, ref bonuses10);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.Discipline, agentCharacter, true, ref bonuses11);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.Discipline, agentCharacter, true, ref bonuses12);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Bow.QuickDraw, agentCharacter, true, ref bonuses4);
            if (captainCharacter != null)
            {
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.RapidFire, captainCharacter, ref bonuses14);
              if (!agent.HasMount)
                PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Bow.NockingPoint, captainCharacter, ref bonuses2);
            }
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Bow.Deadshot, agentCharacter, DefaultSkills.Bow, true, ref bonuses14, Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus);
          }
          else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Crossbow)
          {
            flag4 = true;
            if (agent.HasMount)
            {
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.Steady, agentCharacter, true, ref bonuses8);
              PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.Steady, agentCharacter, true, ref bonuses10);
            }
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.WindWinder, agentCharacter, true, ref bonuses14);
            if (captainCharacter != null)
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Crossbow.WindWinder, captainCharacter, ref bonuses14);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.DonkeysSwiftness, agentCharacter, true, ref bonuses8);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Crossbow.Marksmen, agentCharacter, true, ref bonuses4);
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Crossbow.MightyPull, agentCharacter, DefaultSkills.Crossbow, true, ref bonuses14, Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus);
          }
          else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Throwing)
          {
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.QuickDraw, agentCharacter, true, ref bonuses14);
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Throwing.PerfectTechnique, agentCharacter, true, ref bonuses15);
            if (captainCharacter != null)
            {
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.QuickDraw, captainCharacter, ref bonuses14);
              PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Throwing.PerfectTechnique, captainCharacter, ref bonuses15);
            }
            PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Throwing.UnstoppableForce, agentCharacter, DefaultSkills.Throwing, true, ref bonuses15, Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus);
          }
          if (flag4 && Campaign.Current.Models.MapWeatherModel.GetWeatherEffectOnTerrainForPosition(MobileParty.MainParty.Position2D) == MapWeatherModel.WeatherEventEffectOnTerrain.Wet)
            bonuses15.AddFactor(-0.2f);
          agentDrivenProperties.ReloadMovementPenaltyFactor = bonuses13.ResultNumber;
          agentDrivenProperties.ReloadSpeed = bonuses14.ResultNumber;
          agentDrivenProperties.MissileSpeedMultiplier = bonuses15.ResultNumber;
          agentDrivenProperties.WeaponInaccuracy = bonuses7.ResultNumber;
          agentDrivenProperties.WeaponMaxMovementAccuracyPenalty = bonuses8.ResultNumber;
          agentDrivenProperties.WeaponMaxUnsteadyAccuracyPenalty = bonuses9.ResultNumber;
          agentDrivenProperties.WeaponUnsteadyBeginTime = bonuses11.ResultNumber;
          agentDrivenProperties.WeaponUnsteadyEndTime = bonuses12.ResultNumber;
          agentDrivenProperties.WeaponRotationalAccuracyPenaltyInRadians = bonuses10.ResultNumber;
        }
        agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier = bonuses4.ResultNumber;
      }
      if (flag3)
      {
        ExplainedNumber bonuses16 = new ExplainedNumber(agentDrivenProperties.AttributeShieldMissileCollisionBodySizeAdder);
        if (captainCharacter != null)
        {
          Formation formation = agent.Formation;
          if ((formation != null ? (formation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall ? 1 : 0) : 0) != 0)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.ShieldWall, captainCharacter, ref bonuses16);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.ArrowCatcher, captainCharacter, ref bonuses16);
        }
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.ArrowCatcher, agentCharacter, true, ref bonuses16);
        agentDrivenProperties.AttributeShieldMissileCollisionBodySizeAdder = bonuses16.ResultNumber;
        ExplainedNumber bonuses17 = new ExplainedNumber(agentDrivenProperties.ShieldBashStunDurationMultiplier);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.Basher, agentCharacter, true, ref bonuses17);
        agentDrivenProperties.ShieldBashStunDurationMultiplier = bonuses17.ResultNumber;
      }
      else
      {
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.MorningExercise, agentCharacter, true, ref bonuses2);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Medicine.SelfMedication, agentCharacter, false, ref bonuses2);
        if (!(flag3 | flag1))
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.Sprint, agentCharacter, true, ref bonuses2);
        if (equippedWeaponComponent == null && itemObject1 == null)
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Roguery.FleetFooted, agentCharacter, true, ref bonuses2);
        if (captainCharacter != null)
        {
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.MorningExercise, captainCharacter, ref bonuses2);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.ShieldBearer, captainCharacter, ref bonuses2);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.OneHanded.FleetOfFoot, captainCharacter, ref bonuses2);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.TwoHanded.RecklessCharge, captainCharacter, ref bonuses2);
          PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Polearm.Footwork, captainCharacter, ref bonuses2);
          if (agentCharacter.Tier >= 3)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.FormFittingArmor, captainCharacter, ref bonuses2);
          if (agentCharacter.IsInfantry)
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.Sprint, captainCharacter, ref bonuses2);
        }
      }
      if (agent.IsHero)
      {
        ItemObject itemObject2 = (Mission.Current.DoesMissionRequireCivilianEquipment ? agentCharacter.FirstCivilianEquipment : agentCharacter.FirstBattleEquipment)[EquipmentIndex.Body].Item;
        if (itemObject2 != null && itemObject2.IsCivilian && agentCharacter.GetPerkValue(DefaultPerks.Roguery.SmugglerConnections))
          agentDrivenProperties.ArmorTorso += DefaultPerks.Roguery.SmugglerConnections.PrimaryBonus;
      }
      float num1 = 0.0f;
      float num2 = 0.0f;
      bool flag5 = false;
      if (captainCharacter != null)
      {
        if (agent.HasMount && captainCharacter.GetPerkValue(DefaultPerks.Riding.DauntlessSteed))
        {
          num1 += DefaultPerks.Riding.DauntlessSteed.SecondaryBonus;
          flag5 = true;
        }
        else if (!agent.HasMount && captainCharacter.GetPerkValue(DefaultPerks.Athletics.IgnorePain))
        {
          num1 += DefaultPerks.Athletics.IgnorePain.SecondaryBonus;
          flag5 = true;
        }
        if (captainCharacter.GetPerkValue(DefaultPerks.Engineering.Metallurgy))
        {
          num1 += DefaultPerks.Engineering.Metallurgy.SecondaryBonus;
          flag5 = true;
        }
      }
      if (!agent.HasMount && agentCharacter.GetPerkValue(DefaultPerks.Athletics.IgnorePain))
      {
        num2 += DefaultPerks.Athletics.IgnorePain.PrimaryBonus;
        flag5 = true;
      }
      if (flag5)
      {
        float num3 = 1f + num2;
        agentDrivenProperties.ArmorHead = MathF.Max(0.0f, (agentDrivenProperties.ArmorHead + num1) * num3);
        agentDrivenProperties.ArmorTorso = MathF.Max(0.0f, (agentDrivenProperties.ArmorTorso + num1) * num3);
        agentDrivenProperties.ArmorArms = MathF.Max(0.0f, (agentDrivenProperties.ArmorArms + num1) * num3);
        agentDrivenProperties.ArmorLegs = MathF.Max(0.0f, (agentDrivenProperties.ArmorLegs + num1) * num3);
      }
      if (Mission.Current != null && Mission.Current.HasValidTerrainType)
      {
        switch (Mission.Current.TerrainType)
        {
          case TerrainType.Snow:
          case TerrainType.Forest:
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.ExtendedSkirmish, captainCharacter, ref bonuses2);
            break;
          case TerrainType.Steppe:
          case TerrainType.Plain:
          case TerrainType.Desert:
            PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.DecisiveBattle, captainCharacter, ref bonuses2);
            break;
        }
      }
      if (agentCharacter.Tier >= 3 && agentCharacter.IsInfantry)
        PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Athletics.FormFittingArmor, captainCharacter, ref bonuses2);
      if (agent.Formation != null && agent.Formation.CountOfUnits <= 15)
        PerkHelper.AddPerkBonusFromCaptain(DefaultPerks.Tactics.SmallUnitTactics, captainCharacter, ref bonuses2);
      if (activeBanner != null)
        BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.IncreasedTroopMovementSpeed, activeBanner, ref bonuses2);
      agentDrivenProperties.MaxSpeedMultiplier = bonuses2.ResultNumber;
      agentDrivenProperties.CombatMaxSpeedMultiplier = bonuses1.ResultNumber;
    }

    private void SetWeaponSkillEffectsOnAgent(
      Agent agent,
      CharacterObject agentCharacter,
      AgentDrivenProperties agentDrivenProperties,
      WeaponComponentData equippedWeaponComponent)
    {
      int effectiveSkill = this.GetEffectiveSkill(agent, equippedWeaponComponent.RelevantSkill);
      ExplainedNumber stat1 = new ExplainedNumber(agentDrivenProperties.SwingSpeedMultiplier);
      ExplainedNumber stat2 = new ExplainedNumber(agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier);
      ExplainedNumber stat3 = new ExplainedNumber(agentDrivenProperties.ReloadSpeed);
      if (equippedWeaponComponent.RelevantSkill == DefaultSkills.OneHanded)
      {
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.OneHanded, DefaultSkillEffects.OneHandedSpeed, agentCharacter, ref stat1, effectiveSkill);
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.OneHanded, DefaultSkillEffects.OneHandedSpeed, agentCharacter, ref stat2, effectiveSkill);
      }
      else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.TwoHanded)
      {
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.TwoHanded, DefaultSkillEffects.TwoHandedSpeed, agentCharacter, ref stat1, effectiveSkill);
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.TwoHanded, DefaultSkillEffects.TwoHandedSpeed, agentCharacter, ref stat2, effectiveSkill);
      }
      else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Polearm)
      {
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Polearm, DefaultSkillEffects.PolearmSpeed, agentCharacter, ref stat1, effectiveSkill);
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Polearm, DefaultSkillEffects.PolearmSpeed, agentCharacter, ref stat2, effectiveSkill);
      }
      else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Crossbow)
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Crossbow, DefaultSkillEffects.CrossbowReloadSpeed, agentCharacter, ref stat3, effectiveSkill);
      else if (equippedWeaponComponent.RelevantSkill == DefaultSkills.Throwing)
        SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Throwing, DefaultSkillEffects.ThrowingSpeed, agentCharacter, ref stat2, effectiveSkill);
      agentDrivenProperties.SwingSpeedMultiplier = Math.Max(0.0f, stat1.ResultNumber);
      agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier = Math.Max(0.0f, stat2.ResultNumber);
      agentDrivenProperties.ReloadSpeed = Math.Max(0.0f, stat3.ResultNumber);
    }

    private void SetMountedPenaltiesOnAgent(
      Agent agent,
      AgentDrivenProperties agentDrivenProperties,
      WeaponComponentData equippedWeaponComponent)
    {
      int effectiveSkill = this.GetEffectiveSkill(agent, DefaultSkills.Riding);
      float num1 = 0.01f * MathF.Max(0.0f, DefaultSkillEffects.MountedWeaponSpeedPenalty.GetPrimaryValue(effectiveSkill));
      if ((double) num1 > 0.0)
      {
        ExplainedNumber explainedNumber1 = new ExplainedNumber(agentDrivenProperties.WeaponBestAccuracyWaitTime);
        ExplainedNumber explainedNumber2 = new ExplainedNumber(agentDrivenProperties.SwingSpeedMultiplier);
        ExplainedNumber explainedNumber3 = new ExplainedNumber(agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier);
        ExplainedNumber explainedNumber4 = new ExplainedNumber(agentDrivenProperties.ReloadSpeed);
        explainedNumber2.AddFactor(-num1);
        explainedNumber3.AddFactor(-num1);
        explainedNumber4.AddFactor(-num1);
        explainedNumber1.AddFactor(num1);
        agentDrivenProperties.SwingSpeedMultiplier = Math.Max(0.0f, explainedNumber2.ResultNumber);
        agentDrivenProperties.ThrustOrRangedReadySpeedMultiplier = Math.Max(0.0f, explainedNumber3.ResultNumber);
        agentDrivenProperties.ReloadSpeed = Math.Max(0.0f, explainedNumber4.ResultNumber);
        agentDrivenProperties.WeaponBestAccuracyWaitTime = Math.Max(0.0f, explainedNumber1.ResultNumber);
      }
      float num2 = (float) (5.0 - (double) effectiveSkill * 0.05000000074505806);
      if ((double) num2 <= 0.0)
        return;
      ExplainedNumber explainedNumber = new ExplainedNumber(agentDrivenProperties.WeaponInaccuracy);
      explainedNumber.AddFactor(num2);
      agentDrivenProperties.WeaponInaccuracy = Math.Max(0.0f, explainedNumber.ResultNumber);
    }

    public static float CalculateMaximumSpeedMultiplier(
      int athletics,
      float baseWeight,
      float totalEncumbrance)
    {
      return MathF.Min((float) ((200.0 + (double) athletics) / 300.0 * ((double) baseWeight * 2.0 / ((double) baseWeight * 2.0 + (double) totalEncumbrance))), 1f);
    }
  }
}
