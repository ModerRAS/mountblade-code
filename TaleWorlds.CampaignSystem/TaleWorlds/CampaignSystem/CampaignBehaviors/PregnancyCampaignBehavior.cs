// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PregnancyCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PregnancyCampaignBehavior : CampaignBehaviorBase
  {
    private List<PregnancyCampaignBehavior.Pregnancy> _heroPregnancies = new List<PregnancyCampaignBehavior.Pregnancy>();

    public override void RegisterEvents()
    {
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.OnChildConceivedEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.ChildConceived));
    }

    private void DailyTickHero(Hero hero)
    {
      if (!hero.IsFemale || CampaignOptions.IsLifeDeathCycleDisabled || !hero.IsAlive || (double) hero.Age <= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge || hero.Clan != null && hero.Clan.IsRebelClan)
        return;
      if ((double) hero.Age > 18.0 && hero.Spouse != null && hero.Spouse.IsAlive && !hero.IsPregnant)
        this.RefreshSpouseVisit(hero);
      if (!hero.IsPregnant)
        return;
      this.CheckOffspringsToDeliver(hero);
    }

    private void CheckOffspringsToDeliver(Hero hero)
    {
      PregnancyCampaignBehavior.Pregnancy pregnancy = this._heroPregnancies.Find((Predicate<PregnancyCampaignBehavior.Pregnancy>) (x => x.Mother == hero));
      if (pregnancy == null)
        hero.IsPregnant = false;
      else
        this.CheckOffspringsToDeliver(pregnancy);
    }

    private void RefreshSpouseVisit(Hero hero)
    {
      if (!this.CheckAreNearby(hero, hero.Spouse) || (double) MBRandom.RandomFloat > (double) Campaign.Current.Models.PregnancyModel.GetDailyChanceOfPregnancyForHero(hero))
        return;
      MakePregnantAction.Apply(hero);
    }

    private bool CheckAreNearby(Hero hero, Hero spouse)
    {
      Settlement heroSettlement1;
      MobileParty heroParty1;
      this.GetLocation(hero, out heroSettlement1, out heroParty1);
      Settlement heroSettlement2;
      MobileParty heroParty2;
      this.GetLocation(spouse, out heroSettlement2, out heroParty2);
      return heroSettlement1 != null && heroSettlement1 == heroSettlement2 || heroParty1 != null && heroParty1 == heroParty2 || hero.Clan != Hero.MainHero.Clan && (double) MBRandom.RandomFloat < 0.20000000298023224;
    }

    private void GetLocation(Hero hero, out Settlement heroSettlement, out MobileParty heroParty)
    {
      heroSettlement = hero.CurrentSettlement;
      heroParty = hero.PartyBelongedTo;
      if (heroParty?.AttachedTo != null)
        heroParty = heroParty.AttachedTo;
      if (heroSettlement != null)
        return;
      heroSettlement = heroParty?.CurrentSettlement;
    }

    private void CheckOffspringsToDeliver(PregnancyCampaignBehavior.Pregnancy pregnancy)
    {
      PregnancyModel pregnancyModel = Campaign.Current.Models.PregnancyModel;
      if (pregnancy.DueDate.IsFuture || !pregnancy.Mother.IsAlive)
        return;
      Hero mother = pregnancy.Mother;
      int num1 = (double) MBRandom.RandomFloat <= (double) pregnancyModel.DeliveringTwinsProbability ? 1 : 0;
      List<Hero> aliveChildren = new List<Hero>();
      int num2 = num1 != 0 ? 2 : 1;
      int stillbornCount = 0;
      for (int index = 0; index < num2; ++index)
      {
        if ((double) MBRandom.RandomFloat > (double) pregnancyModel.StillbirthProbability)
        {
          bool isOffspringFemale = (double) MBRandom.RandomFloat <= (double) pregnancyModel.DeliveringFemaleOffspringProbability;
          Hero hero = HeroCreator.DeliverOffSpring(mother, pregnancy.Father, isOffspringFemale);
          aliveChildren.Add(hero);
        }
        else
        {
          TextObject parent = new TextObject("{=pw4cUPEn}{MOTHER.LINK} has delivered stillborn.");
          StringHelpers.SetCharacterProperties("MOTHER", mother.CharacterObject, parent);
          InformationManager.DisplayMessage(new InformationMessage(parent.ToString()));
          ++stillbornCount;
        }
      }
      CampaignEventDispatcher.Instance.OnGivenBirth(mother, aliveChildren, stillbornCount);
      mother.IsPregnant = false;
      this._heroPregnancies.Remove(pregnancy);
      if ((mother == Hero.MainHero ? 0 : ((double) MBRandom.RandomFloat <= (double) pregnancyModel.MaternalMortalityProbabilityInLabor ? 1 : 0)) == 0)
        return;
      KillCharacterAction.ApplyInLabor(mother);
    }

    private void ChildConceived(Hero mother)
    {
      this._heroPregnancies.Add(new PregnancyCampaignBehavior.Pregnancy(mother, mother.Spouse, CampaignTime.DaysFromNow(Campaign.Current.Models.PregnancyModel.PregnancyDurationInDays)));
    }

    public void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification)
    {
      if (!victim.IsFemale || !this._heroPregnancies.Any<PregnancyCampaignBehavior.Pregnancy>((Func<PregnancyCampaignBehavior.Pregnancy, bool>) (pregnancy => pregnancy.Mother == victim)))
        return;
      this._heroPregnancies.RemoveAll((Predicate<PregnancyCampaignBehavior.Pregnancy>) (pregnancy => pregnancy.Mother == victim));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<PregnancyCampaignBehavior.Pregnancy>>("_heroPregnancies", ref this._heroPregnancies);
    }

    public class PregnancyCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public PregnancyCampaignBehaviorTypeDefiner()
        : base(110000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (PregnancyCampaignBehavior.Pregnancy), 2);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (List<PregnancyCampaignBehavior.Pregnancy>));
      }
    }

    internal class Pregnancy
    {
      [SaveableField(1)]
      public readonly Hero Mother;
      [SaveableField(2)]
      public readonly Hero Father;
      [SaveableField(3)]
      public readonly CampaignTime DueDate;

      public Pregnancy(Hero pregnantHero, Hero father, CampaignTime dueDate)
      {
        this.Mother = pregnantHero;
        this.Father = father;
        this.DueDate = dueDate;
      }

      internal static void AutoGeneratedStaticCollectObjectsPregnancy(
        object o,
        List<object> collectedObjects)
      {
        ((PregnancyCampaignBehavior.Pregnancy) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.Mother);
        collectedObjects.Add((object) this.Father);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this.DueDate, collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValueMother(object o)
      {
        return (object) ((PregnancyCampaignBehavior.Pregnancy) o).Mother;
      }

      internal static object AutoGeneratedGetMemberValueFather(object o)
      {
        return (object) ((PregnancyCampaignBehavior.Pregnancy) o).Father;
      }

      internal static object AutoGeneratedGetMemberValueDueDate(object o)
      {
        return (object) ((PregnancyCampaignBehavior.Pregnancy) o).DueDate;
      }
    }
  }
}
