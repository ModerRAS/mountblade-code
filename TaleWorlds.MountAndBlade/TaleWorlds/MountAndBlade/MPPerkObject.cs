// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MPPerkObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Xml;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Network.Gameplay.Perks.Conditions;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MPPerkObject : IReadOnlyPerkObject
  {
    private readonly MissionPeer _peer;
    private readonly MPConditionalEffect.ConditionalEffectContainer _conditionalEffects;
    private readonly MPPerkCondition.PerkEventFlags _perkEventFlags;
    private readonly string _name;
    private readonly string _description;
    private readonly List<MPPerkEffectBase> _effects;

    public TextObject Name => new TextObject(this._name);

    public TextObject Description => new TextObject(this._description);

    public bool HasBannerBearer { get; }

    public List<string> GameModes { get; }

    public int PerkListIndex { get; }

    public string IconId { get; }

    public string HeroIdleAnimOverride { get; }

    public string HeroMountIdleAnimOverride { get; }

    public string TroopIdleAnimOverride { get; }

    public string TroopMountIdleAnimOverride { get; }

    public MPPerkObject(
      MissionPeer peer,
      string name,
      string description,
      List<string> gameModes,
      int perkListIndex,
      string iconId,
      IEnumerable<MPConditionalEffect> conditionalEffects,
      IEnumerable<MPPerkEffectBase> effects,
      string heroIdleAnimOverride,
      string heroMountIdleAnimOverride,
      string troopIdleAnimOverride,
      string troopMountIdleAnimOverride)
    {
      this._peer = peer;
      this._name = name;
      this._description = description;
      this.GameModes = gameModes;
      this.PerkListIndex = perkListIndex;
      this.IconId = iconId;
      this._conditionalEffects = new MPConditionalEffect.ConditionalEffectContainer(conditionalEffects);
      this._effects = new List<MPPerkEffectBase>(effects);
      this.HeroIdleAnimOverride = heroIdleAnimOverride;
      this.HeroMountIdleAnimOverride = heroMountIdleAnimOverride;
      this.TroopIdleAnimOverride = troopIdleAnimOverride;
      this.TroopMountIdleAnimOverride = troopMountIdleAnimOverride;
      this._perkEventFlags = MPPerkCondition.PerkEventFlags.None;
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        foreach (MPPerkCondition condition in (List<MPPerkCondition>) conditionalEffect.Conditions)
          this._perkEventFlags |= condition.EventFlags;
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        foreach (MPPerkCondition condition in (List<MPPerkCondition>) conditionalEffect.Conditions)
        {
          if (condition is BannerBearerCondition)
            this.HasBannerBearer = true;
        }
      }
    }

    private MPPerkObject(XmlNode node)
    {
      this._peer = (MissionPeer) null;
      this._conditionalEffects = new MPConditionalEffect.ConditionalEffectContainer();
      this._effects = new List<MPPerkEffectBase>();
      this._name = node.Attributes["name"].Value;
      this._description = node.Attributes["description"].Value;
      this.GameModes = new List<string>((IEnumerable<string>) node.Attributes["game_mode"].Value.Split(','));
      for (int index = 0; index < this.GameModes.Count; ++index)
        this.GameModes[index] = this.GameModes[index].Trim();
      this.IconId = node.Attributes["icon"].Value;
      this.PerkListIndex = 0;
      XmlNode attribute = (XmlNode) node.Attributes["perk_list"];
      if (attribute != null)
      {
        this.PerkListIndex = Convert.ToInt32(attribute.Value);
        this.PerkListIndex = this.PerkListIndex - 1;
      }
      foreach (XmlNode childNode in node.ChildNodes)
      {
        if (childNode.NodeType != XmlNodeType.Comment && childNode.NodeType != XmlNodeType.SignificantWhitespace)
        {
          if (childNode.Name == "ConditionalEffect")
            this._conditionalEffects.Add(new MPConditionalEffect(this.GameModes, childNode));
          else if (childNode.Name == "Effect")
            this._effects.Add((MPPerkEffectBase) MPPerkEffect.CreateFrom(childNode));
          else if (childNode.Name == "OnSpawnEffect")
            this._effects.Add((MPPerkEffectBase) MPOnSpawnPerkEffect.CreateFrom(childNode));
          else if (childNode.Name == "RandomOnSpawnEffect")
            this._effects.Add((MPPerkEffectBase) MPRandomOnSpawnPerkEffect.CreateFrom(childNode));
          else
            Debug.FailedAssert("Unknown child element", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Network\\Gameplay\\Perks\\MPPerkObject.cs", ".ctor", 750);
        }
      }
      this.HeroIdleAnimOverride = node.Attributes["hero_idle_anim"]?.Value;
      this.HeroMountIdleAnimOverride = node.Attributes["hero_mount_idle_anim"]?.Value;
      this.TroopIdleAnimOverride = node.Attributes["troop_idle_anim"]?.Value;
      this.TroopMountIdleAnimOverride = node.Attributes["troop_mount_idle_anim"]?.Value;
      this._perkEventFlags = MPPerkCondition.PerkEventFlags.None;
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        foreach (MPPerkCondition condition in (List<MPPerkCondition>) conditionalEffect.Conditions)
          this._perkEventFlags |= condition.EventFlags;
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        foreach (MPPerkCondition condition in (List<MPPerkCondition>) conditionalEffect.Conditions)
        {
          if (condition is BannerBearerCondition)
            this.HasBannerBearer = true;
        }
      }
    }

    public MPPerkObject Clone(MissionPeer peer)
    {
      return new MPPerkObject(peer, this._name, this._description, this.GameModes, this.PerkListIndex, this.IconId, (IEnumerable<MPConditionalEffect>) this._conditionalEffects, (IEnumerable<MPPerkEffectBase>) this._effects, this.HeroIdleAnimOverride, this.HeroMountIdleAnimOverride, this.TroopIdleAnimOverride, this.TroopMountIdleAnimOverride);
    }

    public void Reset() => this._conditionalEffects.ResetStates();

    private void OnEvent(bool isWarmup, MPPerkCondition.PerkEventFlags flags)
    {
      if ((flags & this._perkEventFlags) == MPPerkCondition.PerkEventFlags.None)
        return;
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if ((flags & conditionalEffect.EventFlags) != MPPerkCondition.PerkEventFlags.None)
          conditionalEffect.OnEvent(isWarmup, this._peer, this._conditionalEffects);
      }
    }

    private void OnEvent(bool isWarmup, Agent agent, MPPerkCondition.PerkEventFlags flags)
    {
      if (agent?.MissionPeer == null && agent != null)
      {
        MissionPeer agentMissionPeer = agent.OwningAgentMissionPeer;
      }
      if ((flags & this._perkEventFlags) == MPPerkCondition.PerkEventFlags.None)
        return;
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if ((flags & conditionalEffect.EventFlags) != MPPerkCondition.PerkEventFlags.None)
          conditionalEffect.OnEvent(isWarmup, agent, this._conditionalEffects);
      }
    }

    private void OnTick(bool isWarmup, int tickCount)
    {
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.IsTickRequired)
          conditionalEffect.OnTick(isWarmup, this._peer, tickCount);
      }
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if ((!isWarmup || !effect.IsDisabledInWarmup) && effect.IsTickRequired)
          effect.OnTick(this._peer, tickCount);
      }
    }

    private float GetDamage(
      bool isWarmup,
      Agent agent,
      WeaponComponentData attackerWeapon,
      DamageTypes damageType,
      bool isAlternativeAttack)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float damage = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          damage += effect.GetDamage(attackerWeapon, damageType, isAlternativeAttack);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              damage += effect.GetDamage(attackerWeapon, damageType, isAlternativeAttack);
          }
        }
      }
      return damage;
    }

    private float GetMountDamage(
      bool isWarmup,
      Agent agent,
      WeaponComponentData attackerWeapon,
      DamageTypes damageType,
      bool isAlternativeAttack)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float mountDamage = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          mountDamage += effect.GetMountDamage(attackerWeapon, damageType, isAlternativeAttack);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              mountDamage += effect.GetMountDamage(attackerWeapon, damageType, isAlternativeAttack);
          }
        }
      }
      return mountDamage;
    }

    private float GetDamageTaken(
      bool isWarmup,
      Agent agent,
      WeaponComponentData attackerWeapon,
      DamageTypes damageType)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float damageTaken = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          damageTaken += effect.GetDamageTaken(attackerWeapon, damageType);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              damageTaken += effect.GetDamageTaken(attackerWeapon, damageType);
          }
        }
      }
      return damageTaken;
    }

    private float GetMountDamageTaken(
      bool isWarmup,
      Agent agent,
      WeaponComponentData attackerWeapon,
      DamageTypes damageType)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float mountDamageTaken = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          mountDamageTaken += effect.GetMountDamageTaken(attackerWeapon, damageType);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              mountDamageTaken += effect.GetMountDamageTaken(attackerWeapon, damageType);
          }
        }
      }
      return mountDamageTaken;
    }

    private float GetSpeedBonusEffectiveness(
      bool isWarmup,
      Agent agent,
      WeaponComponentData attackerWeapon,
      DamageTypes damageType)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float bonusEffectiveness = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          bonusEffectiveness += effect.GetSpeedBonusEffectiveness(agent, attackerWeapon, damageType);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              bonusEffectiveness += effect.GetSpeedBonusEffectiveness(agent, attackerWeapon, damageType);
          }
        }
      }
      return bonusEffectiveness;
    }

    private float GetShieldDamage(
      bool isWarmup,
      Agent attacker,
      Agent defender,
      bool isCorrectSideBlock)
    {
      float shieldDamage = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          shieldDamage += effect.GetShieldDamage(isCorrectSideBlock);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(attacker))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              shieldDamage += effect.GetShieldDamage(isCorrectSideBlock);
          }
        }
      }
      return shieldDamage;
    }

    private float GetShieldDamageTaken(
      bool isWarmup,
      Agent attacker,
      Agent defender,
      bool isCorrectSideBlock)
    {
      float shieldDamageTaken = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          shieldDamageTaken += effect.GetShieldDamageTaken(isCorrectSideBlock);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(defender))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              shieldDamageTaken += effect.GetShieldDamageTaken(isCorrectSideBlock);
          }
        }
      }
      return shieldDamageTaken;
    }

    private float GetRangedAccuracy(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float rangedAccuracy = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          rangedAccuracy += effect.GetRangedAccuracy();
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              rangedAccuracy += effect.GetRangedAccuracy();
          }
        }
      }
      return rangedAccuracy;
    }

    private float GetThrowingWeaponSpeed(
      bool isWarmup,
      Agent agent,
      WeaponComponentData attackerWeapon)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float throwingWeaponSpeed = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          throwingWeaponSpeed += effect.GetThrowingWeaponSpeed(attackerWeapon);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              throwingWeaponSpeed += effect.GetThrowingWeaponSpeed(attackerWeapon);
          }
        }
      }
      return throwingWeaponSpeed;
    }

    private float GetDamageInterruptionThreshold(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float interruptionThreshold = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          interruptionThreshold += effect.GetDamageInterruptionThreshold();
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              interruptionThreshold += effect.GetDamageInterruptionThreshold();
          }
        }
      }
      return interruptionThreshold;
    }

    private float GetMountManeuver(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float mountManeuver = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          mountManeuver += effect.GetMountManeuver();
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              mountManeuver += effect.GetMountManeuver();
          }
        }
      }
      return mountManeuver;
    }

    private float GetMountSpeed(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float mountSpeed = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          mountSpeed += effect.GetMountSpeed();
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              mountSpeed += effect.GetMountSpeed();
          }
        }
      }
      return mountSpeed;
    }

    private float GetRangedHeadShotDamage(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float rangedHeadShotDamage = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          rangedHeadShotDamage += effect.GetRangedHeadShotDamage();
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              rangedHeadShotDamage += effect.GetRangedHeadShotDamage();
          }
        }
      }
      return rangedHeadShotDamage;
    }

    public int GetExtraTroopCount(bool isWarmup)
    {
      int extraTroopCount = 0;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (effect is IOnSpawnPerkEffect onSpawnPerkEffect && (!isWarmup || !effect.IsDisabledInWarmup))
          extraTroopCount += onSpawnPerkEffect.GetExtraTroopCount();
      }
      return extraTroopCount;
    }

    public List<(EquipmentIndex, EquipmentElement)> GetAlternativeEquipments(
      bool isWarmup,
      bool isPlayer,
      List<(EquipmentIndex, EquipmentElement)> alternativeEquipments,
      bool getAllEquipments = false)
    {
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (effect is IOnSpawnPerkEffect onSpawnPerkEffect && (!isWarmup || !effect.IsDisabledInWarmup))
          alternativeEquipments = onSpawnPerkEffect.GetAlternativeEquipments(isPlayer, alternativeEquipments, getAllEquipments);
      }
      return alternativeEquipments;
    }

    private float GetDrivenPropertyBonus(
      bool isWarmup,
      Agent agent,
      DrivenProperty drivenProperty,
      float baseValue)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float drivenPropertyBonus = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          drivenPropertyBonus += effect.GetDrivenPropertyBonus(drivenProperty, baseValue);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              drivenPropertyBonus += effect.GetDrivenPropertyBonus(drivenProperty, baseValue);
          }
        }
      }
      return drivenPropertyBonus;
    }

    public float GetDrivenPropertyBonusOnSpawn(
      bool isWarmup,
      bool isPlayer,
      DrivenProperty drivenProperty,
      float baseValue)
    {
      float propertyBonusOnSpawn = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (effect is IOnSpawnPerkEffect onSpawnPerkEffect && (!isWarmup || !effect.IsDisabledInWarmup))
          propertyBonusOnSpawn += onSpawnPerkEffect.GetDrivenPropertyBonusOnSpawn(isPlayer, drivenProperty, baseValue);
      }
      return propertyBonusOnSpawn;
    }

    public float GetHitpoints(bool isWarmup, bool isPlayer)
    {
      float hitpoints = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (effect is IOnSpawnPerkEffect onSpawnPerkEffect && (!isWarmup || !effect.IsDisabledInWarmup))
          hitpoints += onSpawnPerkEffect.GetHitpoints(isPlayer);
      }
      return hitpoints;
    }

    private float GetEncumbrance(bool isWarmup, Agent agent, bool isOnBody)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      float encumbrance = 0.0f;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          encumbrance += effect.GetEncumbrance(isOnBody);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              encumbrance += effect.GetEncumbrance(isOnBody);
          }
        }
      }
      return encumbrance;
    }

    private int GetGoldOnKill(bool isWarmup, Agent agent, float attackerValue, float victimValue)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      int goldOnKill = 0;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          goldOnKill += effect.GetGoldOnKill(attackerValue, victimValue);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              goldOnKill += effect.GetGoldOnKill(attackerValue, victimValue);
          }
        }
      }
      return goldOnKill;
    }

    private int GetGoldOnAssist(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      int goldOnAssist = 0;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          goldOnAssist += effect.GetGoldOnAssist();
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              goldOnAssist += effect.GetGoldOnAssist();
          }
        }
      }
      return goldOnAssist;
    }

    private int GetRewardedGoldOnAssist(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      int rewardedGoldOnAssist = 0;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          rewardedGoldOnAssist += effect.GetRewardedGoldOnAssist();
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              rewardedGoldOnAssist += effect.GetRewardedGoldOnAssist();
          }
        }
      }
      return rewardedGoldOnAssist;
    }

    private bool GetIsTeamRewardedOnDeath(bool isWarmup, Agent agent)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if ((!isWarmup || !effect.IsDisabledInWarmup) && effect.GetIsTeamRewardedOnDeath())
          return true;
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if ((!isWarmup || !effect.IsDisabledInWarmup) && effect.GetIsTeamRewardedOnDeath())
              return true;
          }
        }
      }
      return false;
    }

    private void CalculateRewardedGoldOnDeath(
      bool isWarmup,
      Agent agent,
      List<(MissionPeer, int)> teamMembers)
    {
      agent = agent ?? this._peer?.ControlledAgent;
      teamMembers.Shuffle<(MissionPeer, int)>();
      foreach (MPPerkEffectBase effect in this._effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          effect.CalculateRewardedGoldOnDeath(agent, teamMembers);
      }
      foreach (MPConditionalEffect conditionalEffect in (List<MPConditionalEffect>) this._conditionalEffects)
      {
        if (conditionalEffect.Check(agent))
        {
          foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) conditionalEffect.Effects)
          {
            if (!isWarmup || !effect.IsDisabledInWarmup)
              effect.CalculateRewardedGoldOnDeath(agent, teamMembers);
          }
        }
      }
    }

    public static int GetTroopCount(
      MultiplayerClassDivisions.MPHeroClass heroClass,
      int botsPerFormation,
      MPPerkObject.MPOnSpawnPerkHandler onSpawnPerkHandler)
    {
      int a = MathF.Ceiling((float) ((double) botsPerFormation * (double) heroClass.TroopMultiplier - 9.9999997473787516E-06));
      if (onSpawnPerkHandler != null)
        a += (int) onSpawnPerkHandler.GetExtraTroopCount();
      return MathF.Max(a, 1);
    }

    public static IReadOnlyPerkObject Deserialize(XmlNode node)
    {
      return (IReadOnlyPerkObject) new MPPerkObject(node);
    }

    public static MPPerkObject.MPPerkHandler GetPerkHandler(Agent agent)
    {
      MBReadOnlyList<MPPerkObject> mbReadOnlyList = agent?.MissionPeer?.SelectedPerks ?? agent?.OwningAgentMissionPeer?.SelectedPerks;
      return mbReadOnlyList != null && mbReadOnlyList.Count > 0 && !agent.IsMount ? (MPPerkObject.MPPerkHandler) new MPPerkObject.MPPerkHandlerInstance(agent) : (MPPerkObject.MPPerkHandler) null;
    }

    public static MPPerkObject.MPPerkHandler GetPerkHandler(MissionPeer peer)
    {
      MBReadOnlyList<MPPerkObject> mbReadOnlyList = peer?.SelectedPerks ?? peer?.SelectedPerks;
      return mbReadOnlyList != null && mbReadOnlyList.Count > 0 ? (MPPerkObject.MPPerkHandler) new MPPerkObject.MPPerkHandlerInstance(peer) : (MPPerkObject.MPPerkHandler) null;
    }

    public static MPPerkObject.MPCombatPerkHandler GetCombatPerkHandler(
      Agent attacker,
      Agent defender)
    {
      Agent agent1 = attacker == null || !attacker.IsMount ? attacker : attacker.RiderAgent;
      MBReadOnlyList<MPPerkObject> mbReadOnlyList1 = agent1?.MissionPeer?.SelectedPerks ?? agent1?.OwningAgentMissionPeer?.SelectedPerks;
      Agent agent2 = defender == null || !defender.IsMount ? defender : defender.RiderAgent;
      MBReadOnlyList<MPPerkObject> mbReadOnlyList2 = agent2?.MissionPeer?.SelectedPerks ?? agent2?.OwningAgentMissionPeer?.SelectedPerks;
      return attacker != defender && (mbReadOnlyList1 != null && mbReadOnlyList1.Count > 0 || mbReadOnlyList2 != null && mbReadOnlyList2.Count > 0) ? (MPPerkObject.MPCombatPerkHandler) new MPPerkObject.MPCombatPerkHandlerInstance(attacker, defender) : (MPPerkObject.MPCombatPerkHandler) null;
    }

    public static MPPerkObject.MPOnSpawnPerkHandler GetOnSpawnPerkHandler(MissionPeer peer)
    {
      return (peer?.SelectedPerks ?? peer?.SelectedPerks) != null ? (MPPerkObject.MPOnSpawnPerkHandler) new MPPerkObject.MPOnSpawnPerkHandlerInstance(peer) : (MPPerkObject.MPOnSpawnPerkHandler) null;
    }

    public static MPPerkObject.MPOnSpawnPerkHandler GetOnSpawnPerkHandler(
      IEnumerable<IReadOnlyPerkObject> perks)
    {
      return perks != null ? (MPPerkObject.MPOnSpawnPerkHandler) new MPPerkObject.MPOnSpawnPerkHandlerInstance(perks) : (MPPerkObject.MPOnSpawnPerkHandler) null;
    }

    public static void RaiseEventForAllPeers(MPPerkCondition.PerkEventFlags flags)
    {
      if (!GameNetwork.IsServerOrRecorder)
        return;
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        MPPerkObject.GetPerkHandler(networkPeer.GetComponent<MissionPeer>())?.OnEvent(flags);
    }

    public static void RaiseEventForAllPeersOnTeam(Team side, MPPerkCondition.PerkEventFlags flags)
    {
      if (!GameNetwork.IsServerOrRecorder)
        return;
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component != null && component.Team == side)
          MPPerkObject.GetPerkHandler(component)?.OnEvent(flags);
      }
    }

    public static void TickAllPeerPerks(int tickCount)
    {
      if (!GameNetwork.IsServerOrRecorder)
        return;
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component != null && component.Team != null && component.Culture != null && component.Team.Side != BattleSideEnum.None)
          MPPerkObject.GetPerkHandler(component)?.OnTick(tickCount);
      }
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("raise_event", "mp_perks")]
    public static string RaiseEventForAllPeersCommand(List<string> strings)
    {
      if (!GameNetwork.IsServerOrRecorder)
        return "Can't run this command on clients";
      MPPerkCondition.PerkEventFlags flags = MPPerkCondition.PerkEventFlags.None;
      foreach (string str in strings)
      {
        MPPerkCondition.PerkEventFlags result;
        if (Enum.TryParse<MPPerkCondition.PerkEventFlags>(str, true, out result))
          flags |= result;
      }
      MPPerkObject.RaiseEventForAllPeers(flags);
      return "Raised event with flags " + (object) flags;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("tick_perks", "mp_perks")]
    public static string TickAllPeerPerksCommand(List<string> strings)
    {
      if (!GameNetwork.IsServerOrRecorder)
        return "Can't run this command on clients";
      int result;
      if (strings.Count == 0 || !int.TryParse(strings[0], out result))
        result = 1;
      MPPerkObject.TickAllPeerPerks(result);
      return "Peer perks on tick with tick count " + (object) result;
    }

    private class MPOnSpawnPerkHandlerInstance : MPPerkObject.MPOnSpawnPerkHandler
    {
      public MPOnSpawnPerkHandlerInstance(IEnumerable<IReadOnlyPerkObject> perks)
        : base(perks)
      {
      }

      public MPOnSpawnPerkHandlerInstance(MissionPeer peer)
        : base(peer)
      {
      }
    }

    private class MPPerkHandlerInstance : MPPerkObject.MPPerkHandler
    {
      public MPPerkHandlerInstance(Agent agent)
        : base(agent)
      {
      }

      public MPPerkHandlerInstance(MissionPeer peer)
        : base(peer)
      {
      }
    }

    private class MPCombatPerkHandlerInstance : MPPerkObject.MPCombatPerkHandler
    {
      public MPCombatPerkHandlerInstance(Agent attacker, Agent defender)
        : base(attacker, defender)
      {
      }
    }

    public class MPOnSpawnPerkHandler
    {
      private IEnumerable<IReadOnlyPerkObject> _perks;

      public bool IsWarmup
      {
        get
        {
          return Mission.Current?.GetMissionBehavior<MissionMultiplayerGameModeBase>()?.WarmupComponent?.IsInWarmup ?? false;
        }
      }

      protected MPOnSpawnPerkHandler(IEnumerable<IReadOnlyPerkObject> perks) => this._perks = perks;

      protected MPOnSpawnPerkHandler(MissionPeer peer)
      {
        this._perks = (IEnumerable<IReadOnlyPerkObject>) peer.SelectedPerks;
      }

      public float GetExtraTroopCount()
      {
        float extraTroopCount = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (IReadOnlyPerkObject perk in this._perks)
        {
          if (perk != null)
            extraTroopCount += (float) perk.GetExtraTroopCount(isWarmup);
        }
        return extraTroopCount;
      }

      public IEnumerable<(EquipmentIndex, EquipmentElement)> GetAlternativeEquipments(bool isPlayer)
      {
        List<(EquipmentIndex, EquipmentElement)> alternativeEquipments = (List<(EquipmentIndex, EquipmentElement)>) null;
        bool isWarmup = this.IsWarmup;
        foreach (IReadOnlyPerkObject perk in this._perks)
        {
          if (perk != null)
            alternativeEquipments = perk.GetAlternativeEquipments(isWarmup, isPlayer, alternativeEquipments);
        }
        return (IEnumerable<(EquipmentIndex, EquipmentElement)>) alternativeEquipments;
      }

      public float GetDrivenPropertyBonusOnSpawn(
        bool isPlayer,
        DrivenProperty drivenProperty,
        float baseValue)
      {
        float propertyBonusOnSpawn = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (IReadOnlyPerkObject perk in this._perks)
        {
          if (perk != null)
            propertyBonusOnSpawn += perk.GetDrivenPropertyBonusOnSpawn(isWarmup, isPlayer, drivenProperty, baseValue);
        }
        return propertyBonusOnSpawn;
      }

      public float GetHitpoints(bool isPlayer)
      {
        float hitpoints = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (IReadOnlyPerkObject perk in this._perks)
          hitpoints += perk.GetHitpoints(isWarmup, isPlayer);
        return hitpoints;
      }
    }

    public class MPPerkHandler
    {
      private readonly Agent _agent;
      private readonly MBReadOnlyList<MPPerkObject> _perks;

      public bool IsWarmup
      {
        get
        {
          return Mission.Current?.GetMissionBehavior<MissionMultiplayerGameModeBase>()?.WarmupComponent?.IsInWarmup ?? false;
        }
      }

      protected MPPerkHandler(Agent agent)
      {
        this._agent = agent;
        this._perks = (this._agent?.MissionPeer?.SelectedPerks ?? this._agent?.OwningAgentMissionPeer?.SelectedPerks) ?? (MBReadOnlyList<MPPerkObject>) new MBList<MPPerkObject>();
      }

      protected MPPerkHandler(MissionPeer peer)
      {
        this._agent = peer?.ControlledAgent;
        this._perks = peer?.SelectedPerks ?? (MBReadOnlyList<MPPerkObject>) new MBList<MPPerkObject>();
      }

      public void OnEvent(MPPerkCondition.PerkEventFlags flags)
      {
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          perk.OnEvent(isWarmup, flags);
      }

      public void OnEvent(Agent agent, MPPerkCondition.PerkEventFlags flags)
      {
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          perk.OnEvent(isWarmup, agent, flags);
      }

      public void OnTick(int tickCount)
      {
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          perk.OnTick(isWarmup, tickCount);
      }

      public float GetDrivenPropertyBonus(DrivenProperty drivenProperty, float baseValue)
      {
        float drivenPropertyBonus = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          drivenPropertyBonus += perk.GetDrivenPropertyBonus(isWarmup, this._agent, drivenProperty, baseValue);
        return drivenPropertyBonus;
      }

      public float GetRangedAccuracy()
      {
        float rangedAccuracy = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          rangedAccuracy += perk.GetRangedAccuracy(isWarmup, this._agent);
        return rangedAccuracy;
      }

      public float GetThrowingWeaponSpeed(WeaponComponentData attackerWeapon)
      {
        float throwingWeaponSpeed = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          throwingWeaponSpeed += perk.GetThrowingWeaponSpeed(isWarmup, this._agent, attackerWeapon);
        return throwingWeaponSpeed;
      }

      public float GetDamageInterruptionThreshold()
      {
        float interruptionThreshold = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          interruptionThreshold += perk.GetDamageInterruptionThreshold(isWarmup, this._agent);
        return interruptionThreshold;
      }

      public float GetMountManeuver()
      {
        float mountManeuver = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          mountManeuver += perk.GetMountManeuver(isWarmup, this._agent);
        return mountManeuver;
      }

      public float GetMountSpeed()
      {
        float mountSpeed = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          mountSpeed += perk.GetMountSpeed(isWarmup, this._agent);
        return mountSpeed;
      }

      public int GetGoldOnKill(float attackerValue, float victimValue)
      {
        int goldOnKill = 0;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          goldOnKill += perk.GetGoldOnKill(isWarmup, this._agent, attackerValue, victimValue);
        return goldOnKill;
      }

      public int GetGoldOnAssist()
      {
        int goldOnAssist = 0;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          goldOnAssist += perk.GetGoldOnAssist(isWarmup, this._agent);
        return goldOnAssist;
      }

      public int GetRewardedGoldOnAssist()
      {
        int rewardedGoldOnAssist = 0;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          rewardedGoldOnAssist += perk.GetRewardedGoldOnAssist(isWarmup, this._agent);
        return rewardedGoldOnAssist;
      }

      public bool GetIsTeamRewardedOnDeath()
      {
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
        {
          if (perk.GetIsTeamRewardedOnDeath(isWarmup, this._agent))
            return true;
        }
        return false;
      }

      public IEnumerable<(MissionPeer, int)> GetTeamGoldRewardsOnDeath()
      {
        if (!this.GetIsTeamRewardedOnDeath())
          return (IEnumerable<(MissionPeer, int)>) null;
        MissionPeer missionPeer = this._agent?.MissionPeer ?? this._agent?.OwningAgentMissionPeer;
        List<(MissionPeer, int)> teamMembers = new List<(MissionPeer, int)>();
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        {
          MissionPeer component = networkPeer.GetComponent<MissionPeer>();
          if (component != missionPeer && component.Team == missionPeer.Team)
            teamMembers.Add((component, 0));
        }
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          perk.CalculateRewardedGoldOnDeath(isWarmup, this._agent, teamMembers);
        return (IEnumerable<(MissionPeer, int)>) teamMembers;
      }

      public float GetEncumbrance(bool isOnBody)
      {
        float encumbrance = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject perk in (List<MPPerkObject>) this._perks)
          encumbrance += perk.GetEncumbrance(isWarmup, this._agent, isOnBody);
        return encumbrance;
      }
    }

    public class MPCombatPerkHandler
    {
      private readonly Agent _attacker;
      private readonly Agent _defender;
      private readonly MBReadOnlyList<MPPerkObject> _attackerPerks;
      private readonly MBReadOnlyList<MPPerkObject> _defenderPerks;

      public bool IsWarmup
      {
        get
        {
          return Mission.Current?.GetMissionBehavior<MissionMultiplayerGameModeBase>()?.WarmupComponent?.IsInWarmup ?? false;
        }
      }

      protected MPCombatPerkHandler(Agent attacker, Agent defender)
      {
        this._attacker = attacker;
        this._defender = defender;
        attacker = attacker == null || !attacker.IsMount ? attacker : attacker.RiderAgent;
        defender = defender == null || !defender.IsMount ? defender : defender.RiderAgent;
        this._attackerPerks = attacker?.MissionPeer?.SelectedPerks ?? attacker?.OwningAgentMissionPeer?.SelectedPerks ?? (MBReadOnlyList<MPPerkObject>) new MBList<MPPerkObject>();
        this._defenderPerks = defender?.MissionPeer?.SelectedPerks ?? defender?.OwningAgentMissionPeer?.SelectedPerks ?? (MBReadOnlyList<MPPerkObject>) new MBList<MPPerkObject>();
      }

      public float GetDamage(
        WeaponComponentData attackerWeapon,
        DamageTypes damageType,
        bool isAlternativeAttack)
      {
        float damage = 0.0f;
        if (this._attackerPerks.Count > 0 && this._defender != null)
        {
          bool isWarmup = this.IsWarmup;
          if (this._defender.IsMount)
          {
            foreach (MPPerkObject attackerPerk in (List<MPPerkObject>) this._attackerPerks)
              damage += attackerPerk.GetMountDamage(isWarmup, this._attacker, attackerWeapon, damageType, isAlternativeAttack);
          }
          foreach (MPPerkObject attackerPerk in (List<MPPerkObject>) this._attackerPerks)
            damage += attackerPerk.GetDamage(isWarmup, this._attacker, attackerWeapon, damageType, isAlternativeAttack);
        }
        return damage;
      }

      public float GetDamageTaken(WeaponComponentData attackerWeapon, DamageTypes damageType)
      {
        float damageTaken = 0.0f;
        if (this._defenderPerks.Count > 0)
        {
          bool isWarmup = this.IsWarmup;
          if (this._defender.IsMount)
          {
            foreach (MPPerkObject defenderPerk in (List<MPPerkObject>) this._defenderPerks)
              damageTaken += defenderPerk.GetMountDamageTaken(isWarmup, this._defender, attackerWeapon, damageType);
          }
          else
          {
            foreach (MPPerkObject defenderPerk in (List<MPPerkObject>) this._defenderPerks)
              damageTaken += defenderPerk.GetDamageTaken(isWarmup, this._defender, attackerWeapon, damageType);
          }
        }
        return damageTaken;
      }

      public float GetSpeedBonusEffectiveness(
        WeaponComponentData attackerWeapon,
        DamageTypes damageType)
      {
        float bonusEffectiveness = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject attackerPerk in (List<MPPerkObject>) this._attackerPerks)
          bonusEffectiveness += attackerPerk.GetSpeedBonusEffectiveness(isWarmup, this._attacker, attackerWeapon, damageType);
        return bonusEffectiveness;
      }

      public float GetShieldDamage(bool isCorrectSideBlock)
      {
        float shieldDamage = 0.0f;
        if (this._defender != null)
        {
          bool isWarmup = this.IsWarmup;
          foreach (MPPerkObject attackerPerk in (List<MPPerkObject>) this._attackerPerks)
            shieldDamage += attackerPerk.GetShieldDamage(isWarmup, this._attacker, this._defender, isCorrectSideBlock);
        }
        return shieldDamage;
      }

      public float GetShieldDamageTaken(bool isCorrectSideBlock)
      {
        float shieldDamageTaken = 0.0f;
        bool isWarmup = this.IsWarmup;
        foreach (MPPerkObject defenderPerk in (List<MPPerkObject>) this._defenderPerks)
          shieldDamageTaken += defenderPerk.GetShieldDamageTaken(isWarmup, this._attacker, this._defender, isCorrectSideBlock);
        return shieldDamageTaken;
      }

      public float GetRangedHeadShotDamage()
      {
        float rangedHeadShotDamage = 0.0f;
        if (this._attacker != null)
        {
          bool isWarmup = this.IsWarmup;
          foreach (MPPerkObject attackerPerk in (List<MPPerkObject>) this._attackerPerks)
            rangedHeadShotDamage += attackerPerk.GetRangedHeadShotDamage(isWarmup, this._attacker);
        }
        return rangedHeadShotDamage;
      }
    }
  }
}
