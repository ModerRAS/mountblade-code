// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CompanionsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CompanionsCampaignBehavior : CampaignBehaviorBase
  {
    private const int CompanionMoveRandomIndex = 2;
    private const float DesiredCompanionPerTown = 0.6f;
    private const float KillChance = 0.1f;
    private const int SkillThresholdValue = 20;
    private const int RemoveWandererAfterDays = 40;
    private IReadOnlyDictionary<CompanionsCampaignBehavior.CompanionTemplateType, List<CharacterObject>> _companionsOfTemplates = (IReadOnlyDictionary<CompanionsCampaignBehavior.CompanionTemplateType, List<CharacterObject>>) new Dictionary<CompanionsCampaignBehavior.CompanionTemplateType, List<CharacterObject>>()
    {
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Engineering,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Tactics,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Leadership,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Steward,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Trade,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Roguery,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Medicine,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Smithing,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Scouting,
        new List<CharacterObject>()
      },
      {
        CompanionsCampaignBehavior.CompanionTemplateType.Combat,
        new List<CharacterObject>()
      }
    };
    private HashSet<CharacterObject> _aliveCompanionTemplates = new HashSet<CharacterObject>();
    private const float EngineerScore = 2f;
    private const float TacticsScore = 4f;
    private const float LeadershipScore = 3f;
    private const float StewardScore = 3f;
    private const float TradeScore = 3f;
    private const float RogueryScore = 4f;
    private const float MedicineScore = 3f;
    private const float SmithingScore = 2f;
    private const float ScoutingScore = 5f;
    private const float CombatScore = 5f;
    private const float AllScore = 34f;

    private float _desiredTotalCompanionCount => (float) Town.AllTowns.Count * 0.6f;

    public override void RegisterEvents()
    {
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.HeroOccupationChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Occupation>(this.OnHeroOccupationChanged));
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.WeeklyTickEvent.AddNonSerializedListener((object) this, new Action(this.WeeklyTick));
    }

    private void OnGameLoadFinished()
    {
      this.InitializeCompanionTemplateList();
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.IsWanderer)
          this.AddToAliveCompanions(allAliveHero);
      }
      foreach (Hero deadOrDisabledHero in (List<Hero>) Hero.DeadOrDisabledHeroes)
      {
        if (deadOrDisabledHero.IsAlive && deadOrDisabledHero.IsWanderer)
          this.AddToAliveCompanions(deadOrDisabledHero);
      }
    }

    private void DailyTick()
    {
      this.TryKillCompanion();
      this.SwapCompanions();
      this.TrySpawnNewCompanion();
    }

    private void WeeklyTick()
    {
      foreach (Hero hero in Hero.DeadOrDisabledHeroes.ToList<Hero>())
      {
        if (hero.IsWanderer && (double) hero.DeathDay.ElapsedDaysUntilNow >= 40.0)
          Campaign.Current.CampaignObjectManager.UnregisterDeadHero(hero);
      }
    }

    private void RemoveFromAliveCompanions(Hero companion)
    {
      CharacterObject template = companion.Template;
      if (!this._aliveCompanionTemplates.Contains(template))
        return;
      this._aliveCompanionTemplates.Remove(template);
    }

    private void AddToAliveCompanions(Hero companion, bool isTemplateControlled = false)
    {
      CharacterObject template = companion.Template;
      bool flag = true;
      if (!isTemplateControlled)
        flag = this.IsTemplateKnown(template);
      if (!flag || this._aliveCompanionTemplates.Contains(template))
        return;
      this._aliveCompanionTemplates.Add(template);
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      this.RemoveFromAliveCompanions(victim);
      if (!victim.IsWanderer || victim.HasMet)
        return;
      Campaign.Current.CampaignObjectManager.UnregisterDeadHero(victim);
    }

    private void OnHeroOccupationChanged(Hero hero, Occupation oldOccupation)
    {
      if (oldOccupation == Occupation.Wanderer)
      {
        this.RemoveFromAliveCompanions(hero);
      }
      else
      {
        if (hero.Occupation != Occupation.Wanderer)
          return;
        this.AddToAliveCompanions(hero);
      }
    }

    private void OnHeroCreated(Hero hero, bool showNotification = true)
    {
      if (!hero.IsAlive || !hero.IsWanderer)
        return;
      this.AddToAliveCompanions(hero, true);
    }

    private void TryKillCompanion()
    {
      if ((double) MBRandom.RandomFloat > 0.10000000149011612 || this._aliveCompanionTemplates.Count <= 0)
        return;
      CharacterObject elementInefficiently = this._aliveCompanionTemplates.GetRandomElementInefficiently<CharacterObject>();
      Hero victim = (Hero) null;
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.Template == elementInefficiently && allAliveHero.IsWanderer)
        {
          victim = allAliveHero;
          break;
        }
      }
      if (victim == null || victim.CompanionOf != null || victim.CurrentSettlement != null && victim.CurrentSettlement == Hero.MainHero.CurrentSettlement)
        return;
      KillCharacterAction.ApplyByRemove(victim);
    }

    private void TrySpawnNewCompanion()
    {
      if ((double) this._aliveCompanionTemplates.Count >= (double) this._desiredTotalCompanionCount)
        return;
      Settlement settlement = Town.AllTowns.GetRandomElementWithPredicate<Town>((Func<Town, bool>) (x => x.Settlement != Hero.MainHero.CurrentSettlement && x.Settlement.SiegeEvent == null && x.Settlement.HeroesWithoutParty.AllQ<Hero>((Func<Hero, bool>) (y => !y.IsWanderer || y.CompanionOf != null))))?.Settlement;
      if (settlement == null)
        return;
      this.CreateCompanionAndAddToSettlement(settlement);
    }

    private void SwapCompanions()
    {
      int maxValue = Town.AllTowns.Count / 2;
      int num = MBRandom.RandomInt(Town.AllTowns.Count % 2);
      Town allTown1 = Town.AllTowns[num + MBRandom.RandomInt(maxValue)];
      Hero hero1 = allTown1.Settlement.HeroesWithoutParty.Where<Hero>((Func<Hero, bool>) (x => x.IsWanderer && x.CompanionOf == null)).GetRandomElementInefficiently<Hero>();
      for (int index = 1; index < 2; ++index)
      {
        Town allTown2 = Town.AllTowns[index * maxValue + num + MBRandom.RandomInt(maxValue)];
        IEnumerable<Hero> heroes = allTown2.Settlement.HeroesWithoutParty.Where<Hero>((Func<Hero, bool>) (x => x.IsWanderer && x.CompanionOf == null));
        Hero hero2 = (Hero) null;
        if (heroes.Any<Hero>())
        {
          hero2 = heroes.GetRandomElementInefficiently<Hero>();
          LeaveSettlementAction.ApplyForCharacterOnly(hero2);
        }
        if (hero1 != null)
          EnterSettlementAction.ApplyForCharacterOnly(hero1, allTown2.Settlement);
        hero1 = hero2;
      }
      if (hero1 == null)
        return;
      EnterSettlementAction.ApplyForCharacterOnly(hero1, allTown1.Settlement);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnNewGameCreated(CampaignGameStarter starter)
    {
      this.InitializeCompanionTemplateList();
      List<Town> listQ = Town.AllTowns.ToListQ<Town>();
      listQ.Shuffle<Town>();
      for (int index = 0; (double) index < (double) this._desiredTotalCompanionCount; ++index)
        this.CreateCompanionAndAddToSettlement(listQ[index].Settlement);
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeCompanionTemplateList();
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.IsWanderer)
          this.AddToAliveCompanions(allAliveHero);
      }
      foreach (Hero deadOrDisabledHero in (List<Hero>) Hero.DeadOrDisabledHeroes)
      {
        if (deadOrDisabledHero.IsAlive && deadOrDisabledHero.IsWanderer)
          this.AddToAliveCompanions(deadOrDisabledHero);
      }
    }

    private void AdjustEquipment(Hero hero)
    {
      this.AdjustEquipmentImp(hero.BattleEquipment);
      this.AdjustEquipmentImp(hero.CivilianEquipment);
    }

    private void AdjustEquipmentImp(Equipment equipment)
    {
      ItemModifier itemModifier1 = MBObjectManager.Instance.GetObject<ItemModifier>("companion_armor");
      ItemModifier itemModifier2 = MBObjectManager.Instance.GetObject<ItemModifier>("companion_weapon");
      ItemModifier itemModifier3 = MBObjectManager.Instance.GetObject<ItemModifier>("companion_horse");
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumEquipmentSetSlots; ++index)
      {
        EquipmentElement equipmentElement = equipment[index];
        if (equipmentElement.Item != null)
        {
          if (equipmentElement.Item.ArmorComponent != null)
            equipment[index] = new EquipmentElement(equipmentElement.Item, itemModifier1);
          else if (equipmentElement.Item.HorseComponent != null)
            equipment[index] = new EquipmentElement(equipmentElement.Item, itemModifier3);
          else if (equipmentElement.Item.WeaponComponent != null)
            equipment[index] = new EquipmentElement(equipmentElement.Item, itemModifier2);
        }
      }
    }

    private void InitializeCompanionTemplateList()
    {
      foreach (CultureObject objectType in (List<CultureObject>) MBObjectManager.Instance.GetObjectTypeList<CultureObject>())
      {
        foreach (CharacterObject wandererTemplate in (List<CharacterObject>) objectType.NotableAndWandererTemplates)
        {
          if (wandererTemplate.Occupation == Occupation.Wanderer)
            this._companionsOfTemplates[this.GetTemplateTypeOfCompanion(wandererTemplate)].Add(wandererTemplate);
        }
      }
    }

    private CompanionsCampaignBehavior.CompanionTemplateType GetTemplateTypeOfCompanion(
      CharacterObject character)
    {
      CompanionsCampaignBehavior.CompanionTemplateType templateTypeOfCompanion = CompanionsCampaignBehavior.CompanionTemplateType.Combat;
      int num1 = 20;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        int skillValue = character.GetSkillValue(skill);
        if (skillValue > num1)
        {
          CompanionsCampaignBehavior.CompanionTemplateType templateTypeForSkill = this.GetTemplateTypeForSkill(skill);
          if (templateTypeForSkill != CompanionsCampaignBehavior.CompanionTemplateType.Combat)
          {
            num1 = skillValue;
            templateTypeOfCompanion = templateTypeForSkill;
          }
        }
      }
      foreach (Tuple<SkillObject, int> derivedFromTrait in Campaign.Current.Models.CharacterDevelopmentModel.GetSkillsDerivedFromTraits(templateCharacter: character))
      {
        int num2 = derivedFromTrait.Item2;
        if (num2 > num1)
        {
          CompanionsCampaignBehavior.CompanionTemplateType templateTypeForSkill = this.GetTemplateTypeForSkill(derivedFromTrait.Item1);
          if (templateTypeForSkill != CompanionsCampaignBehavior.CompanionTemplateType.Combat)
          {
            num1 = num2;
            templateTypeOfCompanion = templateTypeForSkill;
          }
        }
      }
      return templateTypeOfCompanion;
    }

    private void CreateCompanionAndAddToSettlement(Settlement settlement)
    {
      CharacterObject companionTemplate = this.GetCompanionTemplateToSpawn();
      if (companionTemplate == null)
        return;
      Settlement bornSettlement = Town.AllTowns.GetRandomElementWithPredicate<Town>((Func<Town, bool>) (x => x.Culture == companionTemplate.Culture))?.Settlement ?? Town.AllTowns.GetRandomElement<Town>().Settlement;
      Hero specialHero = HeroCreator.CreateSpecialHero(companionTemplate, bornSettlement, age: Campaign.Current.Models.AgeModel.HeroComesOfAge + 5 + MBRandom.RandomInt(27));
      this.AdjustEquipment(specialHero);
      specialHero.ChangeState(Hero.CharacterStates.Active);
      EnterSettlementAction.ApplyForCharacterOnly(specialHero, settlement);
    }

    private CompanionsCampaignBehavior.CompanionTemplateType GetCompanionTemplateTypeToSpawn()
    {
      CompanionsCampaignBehavior.CompanionTemplateType templateTypeToSpawn = CompanionsCampaignBehavior.CompanionTemplateType.Combat;
      float num1 = -1f;
      foreach (KeyValuePair<CompanionsCampaignBehavior.CompanionTemplateType, List<CharacterObject>> companionsOfTemplate in (IEnumerable<KeyValuePair<CompanionsCampaignBehavior.CompanionTemplateType, List<CharacterObject>>>) this._companionsOfTemplates)
      {
        float templateTypeScore = this.GetTemplateTypeScore(companionsOfTemplate.Key);
        if ((double) templateTypeScore > 0.0)
        {
          int num2 = 0;
          foreach (CharacterObject characterObject in companionsOfTemplate.Value)
          {
            if (this._aliveCompanionTemplates.Contains(characterObject))
              ++num2;
          }
          float num3 = (float) num2 / this._desiredTotalCompanionCount;
          float num4 = (templateTypeScore - num3) / templateTypeScore;
          if (num2 < companionsOfTemplate.Value.Count && (double) num4 > (double) num1)
          {
            num1 = num4;
            templateTypeToSpawn = companionsOfTemplate.Key;
          }
        }
      }
      return templateTypeToSpawn;
    }

    private bool IsTemplateKnown(CharacterObject companionTemplate)
    {
      foreach (KeyValuePair<CompanionsCampaignBehavior.CompanionTemplateType, List<CharacterObject>> companionsOfTemplate in (IEnumerable<KeyValuePair<CompanionsCampaignBehavior.CompanionTemplateType, List<CharacterObject>>>) this._companionsOfTemplates)
      {
        for (int index = 0; index < companionsOfTemplate.Value.Count; ++index)
        {
          if (companionTemplate == companionsOfTemplate.Value[index])
            return true;
        }
      }
      return false;
    }

    private CharacterObject GetCompanionTemplateToSpawn()
    {
      List<CharacterObject> companionsOfTemplate = this._companionsOfTemplates[this.GetCompanionTemplateTypeToSpawn()];
      companionsOfTemplate.Shuffle<CharacterObject>();
      CharacterObject companionTemplateToSpawn = (CharacterObject) null;
      foreach (CharacterObject characterObject in companionsOfTemplate)
      {
        if (!this._aliveCompanionTemplates.Contains(characterObject))
        {
          companionTemplateToSpawn = characterObject;
          break;
        }
      }
      return companionTemplateToSpawn;
    }

    private float GetTemplateTypeScore(
      CompanionsCampaignBehavior.CompanionTemplateType templateType)
    {
      switch (templateType)
      {
        case CompanionsCampaignBehavior.CompanionTemplateType.Engineering:
          return 0.05882353f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Tactics:
          return 0.117647059f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Leadership:
          return 0.0882353f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Steward:
          return 0.0882353f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Trade:
          return 0.0882353f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Roguery:
          return 0.117647059f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Medicine:
          return 0.0882353f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Smithing:
          return 0.05882353f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Scouting:
          return 0.14705883f;
        case CompanionsCampaignBehavior.CompanionTemplateType.Combat:
          return 0.14705883f;
        default:
          return 0.0f;
      }
    }

    private CompanionsCampaignBehavior.CompanionTemplateType GetTemplateTypeForSkill(
      SkillObject skill)
    {
      CompanionsCampaignBehavior.CompanionTemplateType templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Combat;
      if (skill == DefaultSkills.Engineering)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Engineering;
      else if (skill == DefaultSkills.Tactics)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Tactics;
      else if (skill == DefaultSkills.Leadership)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Leadership;
      else if (skill == DefaultSkills.Steward)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Steward;
      else if (skill == DefaultSkills.Trade)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Trade;
      else if (skill == DefaultSkills.Roguery)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Roguery;
      else if (skill == DefaultSkills.Medicine)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Medicine;
      else if (skill == DefaultSkills.Crafting)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Smithing;
      else if (skill == DefaultSkills.Scouting)
        templateTypeForSkill = CompanionsCampaignBehavior.CompanionTemplateType.Scouting;
      return templateTypeForSkill;
    }

    private enum CompanionTemplateType
    {
      Engineering,
      Tactics,
      Leadership,
      Steward,
      Trade,
      Roguery,
      Medicine,
      Smithing,
      Scouting,
      Combat,
    }
  }
}
