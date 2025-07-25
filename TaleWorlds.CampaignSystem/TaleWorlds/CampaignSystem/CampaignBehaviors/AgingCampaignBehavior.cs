// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.AgingCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class AgingCampaignBehavior : CampaignBehaviorBase
  {
    private Dictionary<Hero, int> _extraLivesContainer = new Dictionary<Hero, int>();
    private Dictionary<Hero, int> _heroesYoungerThanHeroComesOfAge = new Dictionary<Hero, int>();
    private int _gameStartDay;

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.OnCharacterCreationIsOverEvent.AddNonSerializedListener((object) this, new Action(this.OnCharacterCreationIsOver));
      CampaignEvents.HeroComesOfAgeEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroComesOfAge));
      CampaignEvents.HeroReachesTeenAgeEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroReachesTeenAge));
      CampaignEvents.HeroGrowsOutOfInfancyEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroGrowsOutOfInfancy));
      CampaignEvents.PerkOpenedEvent.AddNonSerializedListener((object) this, new Action<Hero, PerkObject>(this.OnPerkOpened));
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Hero, int>>("_extraLivesContainer", ref this._extraLivesContainer);
      dataStore.SyncData<Dictionary<Hero, int>>("_heroesYoungerThanHeroComesOfAge", ref this._heroesYoungerThanHeroComesOfAge);
    }

    private void OnHeroCreated(Hero hero, bool isBornNaturally)
    {
      int age = (int) hero.Age;
      if (age >= Campaign.Current.Models.AgeModel.HeroComesOfAge)
        return;
      this._heroesYoungerThanHeroComesOfAge.Add(hero, age);
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification)
    {
      if (!this._heroesYoungerThanHeroComesOfAge.ContainsKey(victim))
        return;
      this._heroesYoungerThanHeroComesOfAge.Remove(victim);
    }

    private void AddExtraLife(Hero hero)
    {
      if (!hero.IsAlive)
        return;
      if (this._extraLivesContainer.ContainsKey(hero))
        ++this._extraLivesContainer[hero];
      else
        this._extraLivesContainer.Add(hero, 1);
    }

    private void OnPerkOpened(Hero hero, PerkObject perk)
    {
      if (perk == DefaultPerks.Medicine.CheatDeath)
        this.AddExtraLife(hero);
      if (perk != DefaultPerks.Medicine.HealthAdvise || hero.Clan?.Leader != hero)
        return;
      foreach (Hero hero1 in hero.Clan.Heroes.Where<Hero>((Func<Hero, bool>) (x => x.IsAlive)))
        this.AddExtraLife(hero1);
    }

    private void DailyTickHero(Hero hero)
    {
      bool flag = (int) CampaignTime.Now.ToDays == this._gameStartDay;
      if (CampaignOptions.IsLifeDeathCycleDisabled || flag || hero.IsTemplate)
        return;
      if (hero.IsAlive && hero.CanDie(KillCharacterAction.KillCharacterActionDetail.DiedOfOldAge))
      {
        if (hero.DeathMark != KillCharacterAction.KillCharacterActionDetail.None && (hero.PartyBelongedTo == null || hero.PartyBelongedTo.MapEvent == null && hero.PartyBelongedTo.SiegeEvent == null))
          KillCharacterAction.ApplyByDeathMark(hero);
        else
          this.IsItTimeOfDeath(hero);
      }
      int num1;
      if (this._heroesYoungerThanHeroComesOfAge.TryGetValue(hero, out num1))
      {
        int age = (int) hero.Age;
        if (num1 != age)
        {
          if (age >= Campaign.Current.Models.AgeModel.HeroComesOfAge)
          {
            this._heroesYoungerThanHeroComesOfAge.Remove(hero);
            CampaignEventDispatcher.Instance.OnHeroComesOfAge(hero);
          }
          else
          {
            this._heroesYoungerThanHeroComesOfAge[hero] = age;
            if (age == Campaign.Current.Models.AgeModel.BecomeTeenagerAge)
              CampaignEventDispatcher.Instance.OnHeroReachesTeenAge(hero);
            else if (age == Campaign.Current.Models.AgeModel.BecomeChildAge)
              CampaignEventDispatcher.Instance.OnHeroGrowsOutOfInfancy(hero);
          }
        }
      }
      if (hero != Hero.MainHero || !Hero.IsMainHeroIll || Hero.MainHero.HeroState == Hero.CharacterStates.Dead)
        return;
      ++Campaign.Current.MainHeroIllDays;
      if (Campaign.Current.MainHeroIllDays <= 3)
        return;
      Hero.MainHero.HitPoints -= MathF.Ceiling((float) Hero.MainHero.HitPoints * (0.05f * (float) Campaign.Current.MainHeroIllDays));
      if (Hero.MainHero.HitPoints > 1 || Hero.MainHero.DeathMark != KillCharacterAction.KillCharacterActionDetail.None)
        return;
      int num2;
      if (this._extraLivesContainer.TryGetValue(Hero.MainHero, out num2))
      {
        if (num2 == 0)
        {
          this.KillMainHeroWithIllness();
        }
        else
        {
          Campaign.Current.MainHeroIllDays = -1;
          this._extraLivesContainer[Hero.MainHero] = num2 - 1;
          if (this._extraLivesContainer[Hero.MainHero] != 0)
            return;
          this._extraLivesContainer.Remove(Hero.MainHero);
        }
      }
      else
        this.KillMainHeroWithIllness();
    }

    private void KillMainHeroWithIllness()
    {
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      Hero.MainHero.AddDeathMark(deathMarkDetail: KillCharacterAction.KillCharacterActionDetail.DiedOfOldAge);
      KillCharacterAction.ApplyByOldAge(Hero.MainHero);
    }

    private void OnCharacterCreationIsOver()
    {
      this._gameStartDay = (int) CampaignTime.Now.ToDays;
      if (CampaignOptions.IsLifeDeathCycleDisabled)
        return;
      this.InitializeHeroesYoungerThanHeroComesOfAge();
    }

    private void OnHeroGrowsOutOfInfancy(Hero hero)
    {
      if (hero.Clan == Clan.PlayerClan)
        return;
      hero.HeroDeveloper.InitializeHeroDeveloper(true);
    }

    private void OnHeroReachesTeenAge(Hero hero)
    {
      MBEquipmentRoster elementInefficiently1 = Campaign.Current.Models.EquipmentSelectionModel.GetEquipmentRostersForHeroReachesTeenAge(hero).GetRandomElementInefficiently<MBEquipmentRoster>();
      if (elementInefficiently1 != null)
      {
        Equipment elementInefficiently2 = elementInefficiently1.GetCivilianEquipments().GetRandomElementInefficiently<Equipment>();
        EquipmentHelper.AssignHeroEquipmentFromEquipment(hero, elementInefficiently2);
        new Equipment(false).FillFrom(elementInefficiently2, false);
        EquipmentHelper.AssignHeroEquipmentFromEquipment(hero, elementInefficiently2);
      }
      else
        Debug.FailedAssert("Cant find child equipment template for " + (object) hero.Name, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\AgingCampaignBehavior.cs", nameof (OnHeroReachesTeenAge), 211);
      if (hero.Clan == Clan.PlayerClan)
        return;
      foreach (TraitObject trait in DefaultTraits.Personality)
      {
        int traitLevel = hero.GetTraitLevel(trait);
        if (hero.Father == null && hero.Mother == null)
        {
          hero.SetTraitLevel(trait, hero.Template.GetTraitLevel(trait));
        }
        else
        {
          float randomFloat1 = MBRandom.RandomFloat;
          float randomFloat2 = MBRandom.RandomFloat;
          if ((double) randomFloat1 < 0.2 && hero.Father != null)
            traitLevel = hero.Father.GetTraitLevel(trait);
          else if ((double) randomFloat1 < 0.6 && !hero.CharacterObject.IsFemale && hero.Father != null)
            traitLevel = hero.Father.GetTraitLevel(trait);
          else if ((double) randomFloat1 < 0.6 && hero.Mother != null)
            traitLevel = hero.Mother.GetTraitLevel(trait);
          else if ((double) randomFloat1 < 0.7 && hero.Mother != null)
            traitLevel = hero.Mother.GetTraitLevel(trait);
          else if ((double) randomFloat2 < 0.3)
            --traitLevel;
          else if ((double) randomFloat2 >= 0.7)
            ++traitLevel;
          int num = MBMath.ClampInt(traitLevel, trait.MinValue, trait.MaxValue);
          if (num != hero.GetTraitLevel(trait))
            hero.SetTraitLevel(trait, num);
        }
      }
      hero.HeroDeveloper.InitializeHeroDeveloper(true);
    }

    private void OnHeroComesOfAge(Hero hero)
    {
      if (hero.HeroState == Hero.CharacterStates.Active)
        return;
      bool flag = !hero.IsFemale || hero.Clan == Hero.MainHero.Clan || hero.Mother != null && !hero.Mother.IsNoncombatant || hero.RandomIntWithSeed(17U, 0, 1) == 0 && hero.GetTraitLevel(DefaultTraits.Valor) == 1;
      if (hero.Clan != Clan.PlayerClan)
      {
        foreach (TraitObject skillCategory in DefaultTraits.SkillCategories)
          hero.SetTraitLevel(skillCategory, 0);
        if (flag)
        {
          hero.SetTraitLevel(DefaultTraits.CavalryFightingSkills, 5);
          int num = MathF.Max(DefaultTraits.Commander.MinValue, 3 + hero.GetTraitLevel(DefaultTraits.Valor) + hero.GetTraitLevel(DefaultTraits.Generosity) + hero.RandomIntWithSeed(18U, -1, 2));
          hero.SetTraitLevel(DefaultTraits.Commander, num);
        }
        int num1 = MathF.Max(DefaultTraits.Manager.MinValue, 3 + hero.GetTraitLevel(DefaultTraits.Honor) + hero.RandomIntWithSeed(19U, -1, 2));
        hero.SetTraitLevel(DefaultTraits.Manager, num1);
        int num2 = MathF.Max(DefaultTraits.Politician.MinValue, 3 + hero.GetTraitLevel(DefaultTraits.Calculating) + hero.RandomIntWithSeed(20U, -1, 2));
        hero.SetTraitLevel(DefaultTraits.Politician, num2);
        hero.HeroDeveloper.InitializeHeroDeveloper(true);
      }
      else
        hero.HeroDeveloper.SetInitialLevel(hero.Level);
      MBList<MBEquipmentRoster> forHeroComeOfAge1 = Campaign.Current.Models.EquipmentSelectionModel.GetEquipmentRostersForHeroComeOfAge(hero, false);
      MBList<MBEquipmentRoster> forHeroComeOfAge2 = Campaign.Current.Models.EquipmentSelectionModel.GetEquipmentRostersForHeroComeOfAge(hero, true);
      MBEquipmentRoster randomElement1 = forHeroComeOfAge1.GetRandomElement<MBEquipmentRoster>();
      MBEquipmentRoster randomElement2 = forHeroComeOfAge2.GetRandomElement<MBEquipmentRoster>();
      Equipment randomElement3 = randomElement1.AllEquipments.GetRandomElement<Equipment>();
      Equipment randomElement4 = randomElement2.AllEquipments.GetRandomElement<Equipment>();
      EquipmentHelper.AssignHeroEquipmentFromEquipment(hero, randomElement3);
      EquipmentHelper.AssignHeroEquipmentFromEquipment(hero, randomElement4);
    }

    private void IsItTimeOfDeath(Hero hero)
    {
      if (!hero.IsAlive || (double) hero.Age < (double) Campaign.Current.Models.AgeModel.BecomeOldAge || CampaignOptions.IsLifeDeathCycleDisabled || hero.DeathMark != KillCharacterAction.KillCharacterActionDetail.None || (double) MBRandom.RandomFloat >= (double) hero.ProbabilityOfDeath)
        return;
      int num;
      if (this._extraLivesContainer.TryGetValue(hero, out num) && num > 0)
      {
        this._extraLivesContainer[hero] = num - 1;
        if (this._extraLivesContainer[hero] != 0)
          return;
        this._extraLivesContainer.Remove(hero);
      }
      else if (hero == Hero.MainHero && !Hero.IsMainHeroIll)
      {
        ++Campaign.Current.MainHeroIllDays;
        Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
        InformationManager.ShowInquiry(new InquiryData(new TextObject("{=2duoimiP}Caught Illness").ToString(), new TextObject("{=vo3MqtMn}You are at death's door, wracked by fever, drifting in and out of consciousness. The healers do not believe that you can recover. You should resolve your final affairs and determine a heir for your clan while you still have the strength to speak.").ToString(), true, false, new TextObject("{=yQtzabbe}Close").ToString(), "", (Action) null, (Action) null, "event:/ui/notification/quest_fail"));
      }
      else
      {
        if (hero == Hero.MainHero)
          return;
        KillCharacterAction.ApplyByOldAge(hero);
      }
    }

    private void MainHeroHealCheck()
    {
      if ((double) MBRandom.RandomFloat > 0.05000000074505806 || !Hero.MainHero.IsAlive)
        return;
      Campaign.Current.MainHeroIllDays = -1;
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=M5eUjgQl}Cured").ToString(), new TextObject("{=T5H3L9Kw}The fever has broken. You are weak but you feel you will recover. You rise from your bed from the first time in days, blinking in the sunlight.").ToString(), true, false, new TextObject("{=yQtzabbe}Close").ToString(), "", (Action) null, (Action) null, "event:/ui/notification/quest_finished"));
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
    }

    private void InitializeHeroesYoungerThanHeroComesOfAge()
    {
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        int age = (int) allAliveHero.Age;
        if (age < Campaign.Current.Models.AgeModel.HeroComesOfAge && !this._heroesYoungerThanHeroComesOfAge.ContainsKey(allAliveHero))
          this._heroesYoungerThanHeroComesOfAge.Add(allAliveHero, age);
      }
    }
  }
}
