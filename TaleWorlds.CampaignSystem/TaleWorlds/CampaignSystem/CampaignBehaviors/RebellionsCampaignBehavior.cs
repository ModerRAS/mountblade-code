// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.RebellionsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class RebellionsCampaignBehavior : CampaignBehaviorBase
  {
    private const int UpdateClanAfterDays = 30;
    private const int LoyaltyAfterRebellion = 100;
    private const int InitialRelationPenalty = -80;
    private const int InitialRelationBoostWithOtherFactions = 10;
    private const int InitialRelationBoost = 60;
    private const int InitialRelationBetweenRebelHeroes = 10;
    private const int RebelClanStartingRenownMin = 200;
    private const int RebelClanStartingRenownMax = 300;
    private const int RebelHeroAgeMin = 25;
    private const int RebelHeroAgeMax = 40;
    private const float MilitiaGarrisonRatio = 1.4f;
    private const float ThrowGarrisonTroopToPrisonPercentage = 0.5f;
    private const float ThrowMilitiaTroopToGarrisonPercentage = 0.6f;
    private const float DailyRebellionCheckChance = 0.25f;
    private Dictionary<Clan, int> _rebelClansAndDaysPassedAfterCreation;
    private Dictionary<CultureObject, Dictionary<int, int>> _cultureIconIdAndFrequencies;
    private bool _rebellionEnabled = true;

    public RebellionsCampaignBehavior()
    {
      this._rebelClansAndDaysPassedAfterCreation = new Dictionary<Clan, int>();
      this._cultureIconIdAndFrequencies = new Dictionary<CultureObject, Dictionary<int, int>>();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyTickClan));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoaded));
      CampaignEvents.OnClanDestroyedEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnClanDestroyed));
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeStarted));
    }

    private void OnSiegeStarted(SiegeEvent siegeEvent)
    {
      if (!siegeEvent.BesiegedSettlement.IsTown)
        return;
      this.CheckAndSetTownRebelliousState(siegeEvent.BesiegedSettlement);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Clan, int>>("_rebelClansAndDaysPassedAfterCreation", ref this._rebelClansAndDaysPassedAfterCreation);
      dataStore.SyncData<Dictionary<CultureObject, Dictionary<int, int>>>("_iconIdAndFrequency", ref this._cultureIconIdAndFrequencies);
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      this.InitializeIconIdAndFrequencies();
    }

    private void OnGameLoaded()
    {
      this.InitializeIconIdAndFrequencies();
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("e1.7.3.0")))
        return;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (!settlement.IsTown && settlement.InRebelliousState)
        {
          settlement.Town.InRebelliousState = false;
          CampaignEventDispatcher.Instance.TownRebelliousStateChanged(settlement.Town, false);
        }
      }
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (this._rebellionEnabled && settlement.IsTown && settlement.Party.MapEvent == null && settlement.Party.SiegeEvent == null && !settlement.OwnerClan.IsRebelClan && Settlement.CurrentSettlement != settlement)
      {
        this.CheckAndSetTownRebelliousState(settlement);
        if ((double) MBRandom.RandomFloat < 0.25 && RebellionsCampaignBehavior.CheckRebellionEvent(settlement))
          this.StartRebellionEvent(settlement);
      }
      if (!settlement.IsTown || !settlement.OwnerClan.IsRebelClan)
        return;
      float num = MBMath.Map((float) (this._rebelClansAndDaysPassedAfterCreation[settlement.OwnerClan] - 1), 0.0f, 30f, (float) Campaign.Current.Models.SettlementLoyaltyModel.LoyaltyBoostAfterRebellionStartValue, 0.0f);
      settlement.Town.Loyalty += num;
    }

    private void CheckAndSetTownRebelliousState(Settlement settlement)
    {
      int num1 = settlement.Town.InRebelliousState ? 1 : 0;
      settlement.Town.InRebelliousState = (double) settlement.Town.Loyalty <= (double) Campaign.Current.Models.SettlementLoyaltyModel.RebelliousStateStartLoyaltyThreshold;
      int num2 = settlement.Town.InRebelliousState ? 1 : 0;
      if (num1 == num2)
        return;
      CampaignEventDispatcher.Instance.TownRebelliousStateChanged(settlement.Town, settlement.Town.InRebelliousState);
    }

    private void OnClanDestroyed(Clan destroyedClan)
    {
      if (this._rebelClansAndDaysPassedAfterCreation.ContainsKey(destroyedClan))
        this._rebelClansAndDaysPassedAfterCreation.Remove(destroyedClan);
      if (!destroyedClan.IsRebelClan)
        return;
      for (int index = destroyedClan.Heroes.Count - 1; index >= 0; --index)
        Campaign.Current.CampaignObjectManager.UnregisterDeadHero(destroyedClan.Heroes[index]);
    }

    private void DailyTickClan(Clan clan)
    {
      if (this._rebelClansAndDaysPassedAfterCreation.ContainsKey(clan))
      {
        this._rebelClansAndDaysPassedAfterCreation[clan]++;
        if (this._rebelClansAndDaysPassedAfterCreation[clan] >= 30 && clan.Leader != null && clan.Settlements.Count > 0)
        {
          TextObject textObject = new TextObject("{=aKaGaOQx}{CLAN_LEADER.NAME}{.o} Clan");
          StringHelpers.SetCharacterProperties("CLAN_LEADER", clan.Leader.CharacterObject, textObject);
          clan.ChangeClanName(textObject, textObject);
          clan.IsRebelClan = false;
          this._rebelClansAndDaysPassedAfterCreation.Remove(clan);
          CampaignEventDispatcher.Instance.OnRebelliousClanDisbandedAtSettlement(clan.HomeSettlement, clan);
        }
      }
      if (!clan.IsRebelClan || clan.Settlements.Count != 0 || clan.Heroes.Count <= 0 || clan.IsEliminated)
        return;
      for (int index = clan.Heroes.Count - 1; index >= 0; --index)
      {
        Hero hero = clan.Heroes[index];
        if (hero.IsAlive)
        {
          if (hero.IsPrisoner && hero.PartyBelongedToAsPrisoner != null && hero.PartyBelongedToAsPrisoner != PartyBase.MainParty && hero.PartyBelongedToAsPrisoner.LeaderHero != null)
            KillCharacterAction.ApplyByExecution(hero, hero.PartyBelongedToAsPrisoner.LeaderHero, isForced: true);
          else if (hero.PartyBelongedTo == null)
            KillCharacterAction.ApplyByRemove(hero);
          else if (this._rebelClansAndDaysPassedAfterCreation[clan] > 90 && hero.PartyBelongedTo != null && hero.PartyBelongedTo.MapEvent == null)
            KillCharacterAction.ApplyByRemove(hero);
        }
      }
    }

    private static bool CheckRebellionEvent(Settlement settlement)
    {
      if ((double) settlement.Town.Loyalty > (double) Campaign.Current.Models.SettlementLoyaltyModel.RebellionStartLoyaltyThreshold)
        return false;
      float militia = settlement.Militia;
      MobileParty garrisonParty = settlement.Town.GarrisonParty;
      float num = garrisonParty != null ? garrisonParty.Party.TotalStrength : 0.0f;
      foreach (MobileParty party in (List<MobileParty>) settlement.Parties)
      {
        if (party.IsLordParty && FactionManager.IsAlliedWithFaction(party.MapFaction, settlement.MapFaction))
          num += party.Party.TotalStrength;
      }
      return (double) militia >= (double) num * 1.3999999761581421;
    }

    public void StartRebellionEvent(Settlement settlement)
    {
      Clan ownerClan = settlement.OwnerClan;
      this.CreateRebelPartyAndClan(settlement);
      this.ApplyRebellionConsequencesToSettlement(settlement);
      CampaignEventDispatcher.Instance.OnRebellionFinished(settlement, ownerClan);
      settlement.Town.FoodStocks = (float) settlement.Town.FoodStocksUpperLimit();
      settlement.Militia = 100f;
    }

    private void ApplyRebellionConsequencesToSettlement(Settlement settlement)
    {
      Dictionary<TroopRosterElement, int> dictionary = new Dictionary<TroopRosterElement, int>();
      foreach (TroopRosterElement key in (List<TroopRosterElement>) settlement.Town.GarrisonParty.MemberRoster.GetTroopRoster())
      {
        for (int index = 0; index < key.Number; ++index)
        {
          if ((double) MBRandom.RandomFloat < 0.5)
          {
            if (dictionary.ContainsKey(key))
              dictionary[key]++;
            else
              dictionary.Add(key, 1);
          }
        }
      }
      settlement.Town.GarrisonParty.MemberRoster.Clear();
      foreach (KeyValuePair<TroopRosterElement, int> keyValuePair in dictionary)
        settlement.Town.GarrisonParty.AddPrisoner(keyValuePair.Key.Character, keyValuePair.Value);
      settlement.Town.GarrisonParty.AddElementToMemberRoster(settlement.Culture.RangedMilitiaTroop, (int) ((double) settlement.Militia * ((double) MBRandom.RandomFloatRanged(-0.1f, 0.1f) + 0.60000002384185791)));
      settlement.Militia = 0.0f;
      if (settlement.MilitiaPartyComponent != null)
        DestroyPartyAction.Apply((PartyBase) null, settlement.MilitiaPartyComponent.MobileParty);
      settlement.Town.GarrisonParty.MemberRoster.AddToCounts(settlement.OwnerClan.Culture.BasicTroop, 50);
      settlement.Town.GarrisonParty.MemberRoster.AddToCounts(settlement.OwnerClan.Culture.BasicTroop.UpgradeTargets.Length != 0 ? settlement.OwnerClan.Culture.BasicTroop.UpgradeTargets.GetRandomElement<CharacterObject>() : settlement.OwnerClan.Culture.BasicTroop, 25);
      settlement.Town.Loyalty = 100f;
      settlement.Town.InRebelliousState = false;
    }

    private void CreateRebelPartyAndClan(Settlement settlement)
    {
      MBReadOnlyList<CharacterObject> rebelliousHeroTemplates = settlement.Culture.RebelliousHeroTemplates;
      List<Hero> heroList = new List<Hero>()
      {
        this.CreateRebelLeader(rebelliousHeroTemplates.GetRandomElement<CharacterObject>(), settlement),
        this.CreateRebelGovernor(rebelliousHeroTemplates.GetRandomElement<CharacterObject>(), settlement),
        this.CreateRebelSupporterHero(rebelliousHeroTemplates.GetRandomElement<CharacterObject>(), settlement),
        this.CreateRebelSupporterHero(rebelliousHeroTemplates.GetRandomElement<CharacterObject>(), settlement)
      };
      int idForNewRebelClan = this.GetClanIdForNewRebelClan(settlement.Culture);
      Clan settlementRebelClan = Clan.CreateSettlementRebelClan(settlement, heroList[0], idForNewRebelClan);
      settlementRebelClan.IsNoble = true;
      settlementRebelClan.AddRenown((float) MBRandom.RandomInt(200, 300));
      foreach (Hero hero in heroList)
        hero.Clan = settlementRebelClan;
      this._rebelClansAndDaysPassedAfterCreation.Add(settlementRebelClan, 1);
      MobileParty mobileParty = MobilePartyHelper.SpawnLordParty(heroList[0], settlement);
      MobilePartyHelper.SpawnLordParty(heroList[2], settlement);
      MobilePartyHelper.SpawnLordParty(heroList[3], settlement);
      IFaction mapFaction = settlement.MapFaction;
      DeclareWarAction.ApplyByRebellion((IFaction) settlementRebelClan, mapFaction);
      foreach (Hero hero in heroList)
      {
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(mapFaction.Leader, hero, MBRandom.RandomInt(-85, -75));
        foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
        {
          if (!kingdom.IsEliminated && kingdom.Culture != mapFaction.Culture)
          {
            int num1 = 0;
            foreach (Town fief in (List<Town>) kingdom.Fiefs)
              num1 += fief.IsTown ? 2 : 1;
            int num2 = (int) ((double) MBRandom.RandomFloat * (double) MBRandom.RandomFloat * 30.0 - (double) num1);
            int num3 = kingdom.Culture == settlementRebelClan.Culture ? num2 + MBRandom.RandomInt(55, 65) : num2;
            kingdom.Leader.SetPersonalRelation(hero, num3);
          }
        }
        foreach (Hero gainedRelationWith in heroList)
        {
          if (hero != gainedRelationWith)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(hero, gainedRelationWith, MBRandom.RandomInt(5, 15));
        }
        hero.ChangeState(Hero.CharacterStates.Active);
      }
      ChangeOwnerOfSettlementAction.ApplyByRebellion(mobileParty.LeaderHero, settlement);
      ChangeGovernorAction.Apply(settlement.Town, heroList[1]);
      EnterSettlementAction.ApplyForParty(mobileParty, settlement);
      mobileParty.Ai.DisableForHours(5);
      heroList[0].ChangeHeroGold(50000);
    }

    private Hero CreateRebelLeader(CharacterObject templateCharacter, Settlement settlement)
    {
      return this.CreateRebelHeroInternal(templateCharacter, settlement, new Dictionary<SkillObject, int>()
      {
        {
          DefaultSkills.Steward,
          MBRandom.RandomInt(100, 175)
        },
        {
          DefaultSkills.Leadership,
          MBRandom.RandomInt(125, 175)
        },
        {
          DefaultSkills.OneHanded,
          MBRandom.RandomInt(125, 175)
        }
      });
    }

    private Hero CreateRebelGovernor(CharacterObject templateCharacter, Settlement settlement)
    {
      return this.CreateRebelHeroInternal(templateCharacter, settlement, new Dictionary<SkillObject, int>()
      {
        {
          DefaultSkills.Steward,
          MBRandom.RandomInt(125, 200)
        },
        {
          DefaultSkills.Leadership,
          MBRandom.RandomInt(100, 125)
        },
        {
          DefaultSkills.OneHanded,
          MBRandom.RandomInt(60, 90)
        }
      });
    }

    private Hero CreateRebelSupporterHero(CharacterObject templateCharacter, Settlement settlement)
    {
      return this.CreateRebelHeroInternal(templateCharacter, settlement, new Dictionary<SkillObject, int>()
      {
        {
          DefaultSkills.Steward,
          MBRandom.RandomInt(100, 175)
        },
        {
          DefaultSkills.Leadership,
          MBRandom.RandomInt(100, 175)
        },
        {
          DefaultSkills.OneHanded,
          MBRandom.RandomInt(125, 175)
        }
      });
    }

    private Hero CreateRebelHeroInternal(
      CharacterObject templateCharacter,
      Settlement settlement,
      Dictionary<SkillObject, int> startingSkills)
    {
      Hero specialHero = HeroCreator.CreateSpecialHero(templateCharacter, settlement, age: MBRandom.RandomInt(25, 40));
      foreach (KeyValuePair<SkillObject, int> startingSkill in startingSkills)
        specialHero.HeroDeveloper.SetInitialSkillLevel(startingSkill.Key, startingSkill.Value);
      foreach (PerkObject allPerk in (List<PerkObject>) Campaign.Current.AllPerks)
      {
        if (specialHero.GetPerkValue(allPerk) && (double) specialHero.GetSkillValue(allPerk.Skill) < (double) allPerk.RequiredSkillValue)
          specialHero.SetPerkValueInternal(allPerk, false);
      }
      return specialHero;
    }

    private int GetClanIdForNewRebelClan(CultureObject culture)
    {
      int num1 = int.MaxValue;
      int num2 = int.MaxValue;
      Dictionary<int, int> dictionary;
      if (!this._cultureIconIdAndFrequencies.TryGetValue(culture, out dictionary))
      {
        dictionary = new Dictionary<int, int>();
        this._cultureIconIdAndFrequencies.Add(culture, dictionary);
      }
      MBList<int> mbList = culture.PossibleClanBannerIconsIDs.ToMBList<int>();
      mbList.Shuffle<int>();
      foreach (int key in (List<int>) mbList)
      {
        int num3;
        if (!dictionary.TryGetValue(key, out num3))
        {
          num3 = 0;
          dictionary.Add(key, num3);
        }
        if (num3 < num2)
        {
          num1 = key;
          num2 = num3;
        }
      }
      if (num1 == int.MaxValue)
      {
        foreach (KeyValuePair<CultureObject, Dictionary<int, int>> iconIdAndFrequency in this._cultureIconIdAndFrequencies)
        {
          foreach (KeyValuePair<int, int> keyValuePair in iconIdAndFrequency.Value)
          {
            if (keyValuePair.Value < num2)
            {
              num1 = keyValuePair.Key;
              num2 = keyValuePair.Value;
            }
          }
        }
      }
      int key1 = num1;
      int num4;
      if (this._cultureIconIdAndFrequencies[culture].TryGetValue(key1, out num4))
        this._cultureIconIdAndFrequencies[culture][key1] = num4 + 1;
      else
        this._cultureIconIdAndFrequencies[culture].Add(key1, 1);
      return key1;
    }

    private void InitializeIconIdAndFrequencies()
    {
      if (this._cultureIconIdAndFrequencies == null)
        this._cultureIconIdAndFrequencies = new Dictionary<CultureObject, Dictionary<int, int>>();
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (!this._cultureIconIdAndFrequencies.ContainsKey(kingdom.Culture))
          this._cultureIconIdAndFrequencies.Add(kingdom.Culture, new Dictionary<int, int>());
      }
      foreach (CultureObject objectType in (List<CultureObject>) MBObjectManager.Instance.GetObjectTypeList<CultureObject>())
      {
        if (!this._cultureIconIdAndFrequencies.ContainsKey(objectType))
          this._cultureIconIdAndFrequencies.Add(objectType, new Dictionary<int, int>());
      }
      foreach (CultureObject key in this._cultureIconIdAndFrequencies.Keys)
      {
        foreach (int clanBannerIconsId in (List<int>) key.PossibleClanBannerIconsIDs)
        {
          if (!this._cultureIconIdAndFrequencies[key].ContainsKey(clanBannerIconsId))
            this._cultureIconIdAndFrequencies[key].Add(clanBannerIconsId, 0);
        }
      }
    }
  }
}
