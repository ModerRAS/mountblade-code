// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.HeroAgentSpawnCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class HeroAgentSpawnCampaignBehavior : CampaignBehaviorBase
  {
    [NonSerialized]
    private bool _addNotableHelperCharacters;

    private static Location Prison => LocationComplex.Current.GetLocationWithId("prison");

    private static Location LordsHall => LocationComplex.Current.GetLocationWithId("lordshall");

    private static Location Tavern => LocationComplex.Current.GetLocationWithId("tavern");

    private static Location Alley => LocationComplex.Current.GetLocationWithId("alley");

    private static Location Center => LocationComplex.Current.GetLocationWithId("center");

    private static Location VillageCenter
    {
      get => LocationComplex.Current.GetLocationWithId("village_center");
    }

    public override void RegisterEvents()
    {
      CampaignEvents.PrisonersChangeInSettlement.AddNonSerializedListener((object) this, new Action<Settlement, FlattenedTroopRoster, Hero, bool>(this.OnPrisonersChangeInSettlement));
      CampaignEvents.OnGovernorChangedEvent.AddNonSerializedListener((object) this, new Action<Town, Hero, Hero>(this.OnGovernorChanged));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
      CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnded));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnGovernorChanged(Town town, Hero oldGovernor, Hero newGovernor)
    {
      if (oldGovernor != null && oldGovernor.IsAlive)
      {
        LocationCharacter locationCharacterOfHero = town.Settlement.LocationComplex.GetLocationCharacterOfHero(oldGovernor);
        if (locationCharacterOfHero != null)
        {
          SettlementAccessModel.AccessDetails accessDetails;
          Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterLordsHall(town.Settlement, out accessDetails);
          Location locationOfCharacter = town.Settlement.LocationComplex.GetLocationOfCharacter(oldGovernor);
          if (LocationComplex.Current != null)
          {
            Location toLocation = accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.FullAccess ? HeroAgentSpawnCampaignBehavior.LordsHall : (town.IsTown ? HeroAgentSpawnCampaignBehavior.Tavern : HeroAgentSpawnCampaignBehavior.Center);
            if (toLocation != locationOfCharacter)
              town.Settlement.LocationComplex.ChangeLocation(locationCharacterOfHero, locationOfCharacter, toLocation);
          }
          else
          {
            Debug.Print("LocationComplex is null");
            Debug.FailedAssert("LocationComplex is null", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\HeroAgentSpawnCampaignBehavior.cs", nameof (OnGovernorChanged), 67);
          }
        }
      }
      if (newGovernor == null)
        return;
      LocationCharacter locationCharacterOfHero1 = town.Settlement.LocationComplex.GetLocationCharacterOfHero(newGovernor);
      if (locationCharacterOfHero1 == null)
        return;
      Location locationOfCharacter1 = town.Settlement.LocationComplex.GetLocationOfCharacter(newGovernor);
      if (LocationComplex.Current != null)
      {
        if (locationOfCharacter1 == HeroAgentSpawnCampaignBehavior.LordsHall)
          return;
        town.Settlement.LocationComplex.ChangeLocation(locationCharacterOfHero1, locationOfCharacter1, HeroAgentSpawnCampaignBehavior.LordsHall);
      }
      else
      {
        Debug.Print("LocationComplex is null");
        Debug.FailedAssert("LocationComplex is null", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\HeroAgentSpawnCampaignBehavior.cs", nameof (OnGovernorChanged), 88);
      }
    }

    private void OnMissionEnded(IMission mission)
    {
      if (LocationComplex.Current == null || PlayerEncounter.LocationEncounter == null || Settlement.CurrentSettlement == null || Hero.MainHero.IsPrisoner || Settlement.CurrentSettlement.IsUnderSiege)
        return;
      this.AddSettlementLocationCharacters(Settlement.CurrentSettlement);
      this._addNotableHelperCharacters = true;
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (LocationComplex.Current == null || PlayerEncounter.LocationEncounter == null)
        return;
      if (mobileParty != null)
      {
        if (mobileParty == MobileParty.MainParty)
        {
          this.AddSettlementLocationCharacters(settlement);
          this._addNotableHelperCharacters = true;
        }
        else
        {
          if (MobileParty.MainParty.CurrentSettlement != settlement || !settlement.IsFortification && !settlement.IsVillage)
            return;
          this.AddPartyHero(mobileParty, settlement);
        }
      }
      else
      {
        if (MobileParty.MainParty.CurrentSettlement != settlement || hero == null)
          return;
        if (hero.IsNotable)
        {
          this.AddNotableLocationCharacter(hero, settlement);
        }
        else
        {
          if (!hero.IsWanderer)
            return;
          this.AddWandererLocationCharacter(hero, settlement);
        }
      }
    }

    public void OnSettlementLeft(MobileParty mobileParty, Settlement settlement)
    {
      if (mobileParty == MobileParty.MainParty || MobileParty.MainParty.CurrentSettlement != settlement || mobileParty.LeaderHero == null || LocationComplex.Current == null)
        return;
      LocationComplex.Current.GetLocationOfCharacter(mobileParty.LeaderHero)?.RemoveCharacter(mobileParty.LeaderHero);
    }

    private void OnGameLoadFinished()
    {
      if (Settlement.CurrentSettlement == null || Hero.MainHero.IsPrisoner || LocationComplex.Current == null || PlayerEncounter.LocationEncounter == null || Settlement.CurrentSettlement.IsUnderSiege)
        return;
      this.AddSettlementLocationCharacters(Settlement.CurrentSettlement);
    }

    private void AddSettlementLocationCharacters(Settlement settlement)
    {
      if (!settlement.IsFortification && !settlement.IsVillage)
        return;
      List<MobileParty> list = Settlement.CurrentSettlement.Parties.ToList<MobileParty>();
      if (settlement.IsFortification)
      {
        this.AddLordsHallCharacters(settlement, ref list);
        this.RefreshPrisonCharacters(settlement);
        this.AddCompanionsAndClanMembersToSettlement(settlement);
        if (settlement.IsFortification)
          this.AddNotablesAndWanderers(settlement);
      }
      else if (settlement.IsVillage)
      {
        this.AddHeroesWithoutPartyCharactersToVillage(settlement);
        this.AddCompanionsAndClanMembersToSettlement(settlement);
      }
      foreach (MobileParty mobileParty in list)
        this.AddPartyHero(mobileParty, settlement);
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (!this._addNotableHelperCharacters || CampaignMission.Current.Location != HeroAgentSpawnCampaignBehavior.Center && CampaignMission.Current.Location != HeroAgentSpawnCampaignBehavior.VillageCenter)
        return;
      this.SpawnNotableHelperCharacters(settlement);
      this._addNotableHelperCharacters = false;
    }

    private void AddCompanionsAndClanMembersToSettlement(Settlement settlement)
    {
      if (!settlement.IsFortification && !settlement.IsVillage)
        return;
      foreach (Hero lord in (List<Hero>) Clan.PlayerClan.Lords)
      {
        int heroComesOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
        if (lord != Hero.MainHero && (double) lord.Age >= (double) heroComesOfAge && !lord.IsPrisoner && lord.CurrentSettlement == settlement && (lord.GovernorOf == null || lord.GovernorOf != settlement.Town))
        {
          Location location;
          if (settlement.IsFortification)
          {
            SettlementAccessModel.AccessDetails accessDetails;
            Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterLordsHall(settlement, out accessDetails);
            location = accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.FullAccess ? HeroAgentSpawnCampaignBehavior.LordsHall : (settlement.IsTown ? HeroAgentSpawnCampaignBehavior.Tavern : HeroAgentSpawnCampaignBehavior.Center);
          }
          else
            location = HeroAgentSpawnCampaignBehavior.VillageCenter;
          IFaction mapFaction1 = lord.MapFaction;
          uint color1 = mapFaction1 != null ? mapFaction1.Color : 4291609515U;
          IFaction mapFaction2 = lord.MapFaction;
          uint color2 = mapFaction2 != null ? mapFaction2.Color : 4291609515U;
          Monster baseMonsterFromRace = FaceGen.GetBaseMonsterFromRace(lord.CharacterObject.Race);
          AgentData agentData = new AgentData((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, lord.CharacterObject)).Monster(baseMonsterFromRace).NoHorses(true).ClothingColor1(color1).ClothingColor2(color2);
          location.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddCompanionBehaviors), "sp_notable", true, LocationCharacter.CharacterRelations.Friendly, (string) null, !PlayerEncounter.LocationEncounter.Settlement.IsVillage, isVisualTracked: true));
        }
      }
      foreach (Hero hero in Hero.MainHero.CompanionsInParty)
      {
        Hero companion = hero;
        if (!companion.IsWounded && !PlayerEncounter.LocationEncounter.CharactersAccompanyingPlayer.Exists((Predicate<AccompanyingCharacter>) (x => x.LocationCharacter.Character.HeroObject == companion)))
        {
          IFaction mapFaction3 = companion.MapFaction;
          uint color3 = mapFaction3 != null ? mapFaction3.Color : 4291609515U;
          IFaction mapFaction4 = companion.MapFaction;
          uint color4 = mapFaction4 != null ? mapFaction4.Color : 4291609515U;
          Monster baseMonsterFromRace = FaceGen.GetBaseMonsterFromRace(companion.CharacterObject.Race);
          (settlement.IsFortification ? HeroAgentSpawnCampaignBehavior.Center : HeroAgentSpawnCampaignBehavior.VillageCenter).AddCharacter(new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, companion.CharacterObject)).Monster(baseMonsterFromRace).NoHorses(true).ClothingColor1(color3).ClothingColor2(color4), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddCompanionBehaviors), "sp_notable", true, LocationCharacter.CharacterRelations.Friendly, (string) null, !PlayerEncounter.LocationEncounter.Settlement.IsVillage, isVisualTracked: true));
        }
      }
    }

    private void AddPartyHero(MobileParty mobileParty, Settlement settlement)
    {
      Hero leaderHero = mobileParty.LeaderHero;
      if (leaderHero == null || leaderHero == Hero.MainHero)
        return;
      IFaction mapFaction1 = leaderHero.MapFaction;
      uint color1 = mapFaction1 != null ? mapFaction1.Color : 4291609515U;
      IFaction mapFaction2 = leaderHero.MapFaction;
      uint color2 = mapFaction2 != null ? mapFaction2.Color : 4291609515U;
      Tuple<string, Monster> actionSetAndMonster = HeroAgentSpawnCampaignBehavior.GetActionSetAndMonster(leaderHero.CharacterObject);
      AgentData agentData = new AgentData((IAgentOriginBase) new PartyAgentOrigin(mobileParty.Party, leaderHero.CharacterObject)).Monster(actionSetAndMonster.Item2).NoHorses(true).ClothingColor1(color1).ClothingColor2(color2);
      string spawnTag = "sp_notable";
      (!settlement.IsFortification ? (!settlement.IsVillage ? HeroAgentSpawnCampaignBehavior.Center : HeroAgentSpawnCampaignBehavior.VillageCenter) : HeroAgentSpawnCampaignBehavior.LordsHall)?.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), spawnTag, true, LocationCharacter.CharacterRelations.Neutral, actionSetAndMonster.Item1, !settlement.IsVillage));
    }

    private void OnHeroPrisonerTaken(PartyBase capturerParty, Hero prisoner)
    {
      if (!capturerParty.IsSettlement)
        return;
      this.OnPrisonersChangeInSettlement(capturerParty.Settlement, (FlattenedTroopRoster) null, prisoner, false);
    }

    public void OnPrisonersChangeInSettlement(
      Settlement settlement,
      FlattenedTroopRoster prisonerRoster,
      Hero prisonerHero,
      bool takenFromDungeon)
    {
      if (settlement == null || !settlement.IsFortification || LocationComplex.Current != settlement.LocationComplex)
        return;
      if (prisonerHero != null)
        this.SendPrisonerHeroToNextLocation(settlement, prisonerHero, takenFromDungeon);
      if (prisonerRoster == null)
        return;
      foreach (FlattenedTroopRosterElement troopRosterElement in prisonerRoster)
      {
        if (troopRosterElement.Troop.IsHero)
          this.SendPrisonerHeroToNextLocation(settlement, troopRosterElement.Troop.HeroObject, takenFromDungeon);
      }
    }

    private void SendPrisonerHeroToNextLocation(
      Settlement settlement,
      Hero hero,
      bool takenFromDungeon)
    {
      Location locationOfCharacter = LocationComplex.Current.GetLocationOfCharacter(hero);
      Location location = this.DecideNewLocationOnPrisonerChange(settlement, hero, takenFromDungeon);
      LocationCharacter locationCharacterOfHero = LocationComplex.Current.GetLocationCharacterOfHero(hero);
      if (locationCharacterOfHero == null)
      {
        if (location == null)
          return;
        this.AddHeroToDecidedLocation(location, hero, settlement);
      }
      else
      {
        if (locationOfCharacter == location)
          return;
        LocationComplex.Current.ChangeLocation(locationCharacterOfHero, locationOfCharacter, location);
      }
    }

    private Location DecideNewLocationOnPrisonerChange(
      Settlement settlement,
      Hero hero,
      bool takenFromDungeon)
    {
      if (hero.IsPrisoner)
        return !takenFromDungeon ? HeroAgentSpawnCampaignBehavior.Prison : (Location) null;
      if (!settlement.IsFortification)
        return HeroAgentSpawnCampaignBehavior.VillageCenter;
      if (hero.IsWanderer && settlement.IsTown)
        return HeroAgentSpawnCampaignBehavior.Tavern;
      return hero.CharacterObject.Occupation == Occupation.Lord ? HeroAgentSpawnCampaignBehavior.LordsHall : HeroAgentSpawnCampaignBehavior.Center;
    }

    private void AddHeroToDecidedLocation(Location location, Hero hero, Settlement settlement)
    {
      if (location == HeroAgentSpawnCampaignBehavior.Prison)
      {
        Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(hero.CharacterObject.Race, "_settlement");
        AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) hero.CharacterObject)).NoWeapons(true).Monster(monsterWithSuffix).NoHorses(true);
        location.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "sp_prisoner", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_villager"), true));
      }
      else if (location == HeroAgentSpawnCampaignBehavior.VillageCenter)
      {
        Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(hero.CharacterObject.Race, "_settlement");
        AgentData agentData = new AgentData((IAgentOriginBase) new PartyAgentOrigin((PartyBase) null, hero.CharacterObject)).Monster(monsterWithSuffix);
        location.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "sp_notable_rural_notable", false, LocationCharacter.CharacterRelations.Neutral, (string) null, true));
      }
      else if (location == HeroAgentSpawnCampaignBehavior.Tavern)
      {
        Monster baseMonsterFromRace = FaceGen.GetBaseMonsterFromRace(hero.CharacterObject.Race);
        AgentData agentData = new AgentData((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, hero.CharacterObject)).Monster(baseMonsterFromRace).NoHorses(true);
        location.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddCompanionBehaviors), (string) null, true, LocationCharacter.CharacterRelations.Friendly, (string) null, !PlayerEncounter.LocationEncounter.Settlement.IsVillage, isVisualTracked: true));
      }
      else if (location == HeroAgentSpawnCampaignBehavior.LordsHall)
      {
        Tuple<string, Monster> actionSetAndMonster = HeroAgentSpawnCampaignBehavior.GetActionSetAndMonster(hero.CharacterObject);
        AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) hero.CharacterObject)).Monster(actionSetAndMonster.Item2).NoHorses(true);
        location.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), (string) null, true, LocationCharacter.CharacterRelations.Neutral, actionSetAndMonster.Item1, true));
      }
      else
      {
        if (location != HeroAgentSpawnCampaignBehavior.Center)
          return;
        if (hero.IsNotable)
        {
          this.AddNotableLocationCharacter(hero, settlement);
        }
        else
        {
          Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(hero.CharacterObject.Race, "_settlement");
          AgentData agentData = new AgentData((IAgentOriginBase) new PartyAgentOrigin((PartyBase) null, hero.CharacterObject)).Monster(monsterWithSuffix);
          location.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "sp_notable_rural_notable", false, LocationCharacter.CharacterRelations.Neutral, (string) null, true));
        }
      }
    }

    private void AddLordsHallCharacters(
      Settlement settlement,
      ref List<MobileParty> partiesToBeSpawn)
    {
      Hero hero1 = (Hero) null;
      Hero hero2 = (Hero) null;
      if (settlement.MapFaction.IsKingdomFaction)
      {
        Hero leader = ((Kingdom) settlement.MapFaction).Leader;
        if (leader.CurrentSettlement == settlement)
          hero1 = leader;
        if (leader.Spouse != null && leader.Spouse.CurrentSettlement == settlement)
          hero2 = leader.Spouse;
      }
      if (hero1 == null && settlement.OwnerClan.Leader.CurrentSettlement == settlement)
        hero1 = settlement.OwnerClan.Leader;
      if (hero2 == null && settlement.OwnerClan.Leader.Spouse != null && settlement.OwnerClan.Leader.Spouse.CurrentSettlement == settlement)
        hero2 = settlement.OwnerClan.Leader.Spouse;
      bool flag = false;
      if (hero1 != null && hero1 != Hero.MainHero)
      {
        IFaction mapFaction1 = hero1.MapFaction;
        uint color1 = mapFaction1 != null ? mapFaction1.Color : 4291609515U;
        IFaction mapFaction2 = hero1.MapFaction;
        uint color2 = mapFaction2 != null ? mapFaction2.Color : 4291609515U;
        flag = true;
        Tuple<string, Monster> actionSetAndMonster = HeroAgentSpawnCampaignBehavior.GetActionSetAndMonster(hero1.CharacterObject);
        HeroAgentSpawnCampaignBehavior.LordsHall.AddCharacter(new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin((PartyBase) null, hero1.CharacterObject)).Monster(actionSetAndMonster.Item2).NoHorses(true).ClothingColor1(color1).ClothingColor2(color2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "sp_throne", true, LocationCharacter.CharacterRelations.Neutral, actionSetAndMonster.Item1, true));
        if (hero1.PartyBelongedTo != null && partiesToBeSpawn.Contains(hero1.PartyBelongedTo))
          partiesToBeSpawn.Remove(hero1.PartyBelongedTo);
      }
      if (hero2 != null && hero2 != Hero.MainHero)
      {
        IFaction mapFaction3 = hero2.MapFaction;
        uint color3 = mapFaction3 != null ? mapFaction3.Color : 4291609515U;
        IFaction mapFaction4 = hero2.MapFaction;
        uint color4 = mapFaction4 != null ? mapFaction4.Color : 4291609515U;
        Tuple<string, Monster> actionSetAndMonster = HeroAgentSpawnCampaignBehavior.GetActionSetAndMonster(hero2.CharacterObject);
        HeroAgentSpawnCampaignBehavior.LordsHall.AddCharacter(new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin((PartyBase) null, hero2.CharacterObject)).Monster(actionSetAndMonster.Item2).NoHorses(true).ClothingColor1(color3).ClothingColor2(color4), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), flag ? "sp_notable" : "sp_throne", true, LocationCharacter.CharacterRelations.Neutral, actionSetAndMonster.Item1, true));
        if (hero2.PartyBelongedTo != null && partiesToBeSpawn.Contains(hero2.PartyBelongedTo))
          partiesToBeSpawn.Remove(hero2.PartyBelongedTo);
      }
      int heroComesOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
      foreach (Hero hero3 in (List<Hero>) settlement.HeroesWithoutParty)
      {
        if (hero3 != hero1 && hero3 != hero2 && (double) hero3.Age >= (double) heroComesOfAge && !hero3.IsPrisoner && (hero3.Clan != Clan.PlayerClan || hero3.GovernorOf != null && hero3.GovernorOf == settlement.Town))
        {
          Tuple<string, Monster> actionSetAndMonster = HeroAgentSpawnCampaignBehavior.GetActionSetAndMonster(hero3.CharacterObject);
          IFaction mapFaction5 = hero3.MapFaction;
          uint color5 = mapFaction5 != null ? mapFaction5.Color : 4291609515U;
          IFaction mapFaction6 = hero3.MapFaction;
          uint color6 = mapFaction6 != null ? mapFaction6.Color : 4291609515U;
          HeroAgentSpawnCampaignBehavior.LordsHall.AddCharacter(new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) hero3.CharacterObject)).Monster(actionSetAndMonster.Item2).NoHorses(true).ClothingColor1(color5).ClothingColor2(color6), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "sp_notable", true, LocationCharacter.CharacterRelations.Neutral, actionSetAndMonster.Item1, true));
        }
      }
    }

    private void RefreshPrisonCharacters(Settlement settlement)
    {
      HeroAgentSpawnCampaignBehavior.Prison.RemoveAllHeroCharactersFromPrison();
      List<CharacterObject> prisonerHeroes = settlement.SettlementComponent.GetPrisonerHeroes();
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
      {
        for (int index = 0; index < 5; ++index)
          prisonerHeroes.Add(Game.Current.ObjectManager.GetObject<CharacterObject>("townsman_empire"));
      }
      foreach (CharacterObject troop in prisonerHeroes)
      {
        uint? color1 = troop.HeroObject?.MapFaction?.Color;
        uint color2 = (uint) ((int) color1 ?? -3357781);
        color1 = troop.HeroObject?.MapFaction?.Color;
        uint color3 = (uint) ((int) color1 ?? -3357781);
        Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(troop.Race, "_settlement");
        AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) troop)).NoWeapons(true).Monster(monsterWithSuffix).NoHorses(true).ClothingColor1(color2).ClothingColor2(color3);
        HeroAgentSpawnCampaignBehavior.Prison.AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "sp_prisoner", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_villager"), true));
      }
    }

    private void AddNotablesAndWanderers(Settlement settlement)
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        return;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
        this.AddNotableLocationCharacter(notable, settlement);
      foreach (Hero wanderer in settlement.HeroesWithoutParty.Where<Hero>((Func<Hero, bool>) (x => x.IsWanderer || x.IsPlayerCompanion)))
      {
        if (wanderer.GovernorOf == null || wanderer.GovernorOf != settlement.Town)
          this.AddWandererLocationCharacter(wanderer, settlement);
      }
    }

    private void AddWandererLocationCharacter(Hero wanderer, Settlement settlement)
    {
      int num = settlement.Culture.StringId.ToLower() == "aserai" ? 1 : (settlement.Culture.StringId.ToLower() == "khuzait" ? 1 : 0);
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(wanderer.CharacterObject.Race, "_settlement");
      string actionSetCode = num != 0 ? ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, wanderer.IsFemale, "_warrior_in_aserai_tavern") : ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, wanderer.IsFemale, "_warrior_in_tavern");
      LocationCharacter locationCharacter = new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin((PartyBase) null, wanderer.CharacterObject)).Monster(monsterWithSuffix).NoHorses(true), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "npc_common", true, LocationCharacter.CharacterRelations.Neutral, actionSetCode, true);
      if (settlement.IsCastle)
        HeroAgentSpawnCampaignBehavior.Center.AddCharacter(locationCharacter);
      else if (settlement.IsTown)
      {
        IAlleyCampaignBehavior campaignBehavior = CampaignBehaviorBase.GetCampaignBehavior<IAlleyCampaignBehavior>();
        (campaignBehavior == null || !campaignBehavior.IsHeroAlleyLeaderOfAnyPlayerAlley(wanderer) ? HeroAgentSpawnCampaignBehavior.Tavern : HeroAgentSpawnCampaignBehavior.Alley).AddCharacter(locationCharacter);
      }
      else
        HeroAgentSpawnCampaignBehavior.VillageCenter.AddCharacter(locationCharacter);
    }

    private void AddNotableLocationCharacter(Hero notable, Settlement settlement)
    {
      string suffix = notable.IsArtisan ? "_villager_artisan" : (notable.IsMerchant ? "_villager_merchant" : (notable.IsPreacher ? "_villager_preacher" : (notable.IsGangLeader ? "_villager_gangleader" : (notable.IsRuralNotable ? "_villager_ruralnotable" : (notable.IsFemale ? "_lord" : "_villager_merchant")))));
      string spawnTag = notable.IsArtisan ? "sp_notable_artisan" : (notable.IsMerchant ? "sp_notable_merchant" : (notable.IsPreacher ? "sp_notable_preacher" : (notable.IsGangLeader ? "sp_notable_gangleader" : (notable.IsRuralNotable ? "sp_notable_rural_notable" : (notable.GovernorOf == notable.CurrentSettlement.Town ? "sp_governor" : "sp_notable")))));
      MBReadOnlyList<Workshop> ownedWorkshops = notable.OwnedWorkshops;
      if (ownedWorkshops.Count != 0)
      {
        for (int index = 0; index < ownedWorkshops.Count; ++index)
        {
          if (!ownedWorkshops[index].WorkshopType.IsHidden)
          {
            spawnTag = spawnTag + "_" + ownedWorkshops[index].Tag;
            break;
          }
        }
      }
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(notable.CharacterObject.Race, "_settlement");
      AgentData agentData = new AgentData((IAgentOriginBase) new PartyAgentOrigin((PartyBase) null, notable.CharacterObject)).Monster(monsterWithSuffix).NoHorses(true);
      LocationCharacter locationCharacter = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), spawnTag, true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, notable.IsFemale, suffix), true);
      if (settlement.IsVillage)
        HeroAgentSpawnCampaignBehavior.VillageCenter.AddCharacter(locationCharacter);
      else
        HeroAgentSpawnCampaignBehavior.Center.AddCharacter(locationCharacter);
    }

    private void AddHeroesWithoutPartyCharactersToVillage(Settlement settlement)
    {
      foreach (Hero hero in (List<Hero>) settlement.HeroesWithoutParty)
      {
        Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(hero.CharacterObject.Race, "_settlement");
        HeroAgentSpawnCampaignBehavior.VillageCenter.AddCharacter(new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin((PartyBase) null, hero.CharacterObject)).Monster(monsterWithSuffix), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "sp_notable_rural_notable", false, LocationCharacter.CharacterRelations.Neutral, (string) null, true));
      }
    }

    private void SpawnNotableHelperCharacters(Settlement settlement)
    {
      int num = settlement.Notables.Count<Hero>((Func<Hero, bool>) (x => x.IsGangLeader));
      int characterToSpawnCount1 = settlement.Notables.Count<Hero>((Func<Hero, bool>) (x => x.IsPreacher));
      int characterToSpawnCount2 = settlement.Notables.Count<Hero>((Func<Hero, bool>) (x => x.IsArtisan));
      int characterToSpawnCount3 = settlement.Notables.Count<Hero>((Func<Hero, bool>) (x => x.IsRuralNotable || x.IsHeadman));
      int characterToSpawnCount4 = settlement.Notables.Count<Hero>((Func<Hero, bool>) (x => x.IsMerchant));
      this.SpawnNotableHelperCharacter(settlement.Culture.GangleaderBodyguard, "_gangleader_bodyguard", "sp_gangleader_bodyguard", num * 2);
      this.SpawnNotableHelperCharacter(settlement.Culture.PreacherNotary, "_merchant_notary", "sp_preacher_notary", characterToSpawnCount1);
      this.SpawnNotableHelperCharacter(settlement.Culture.ArtisanNotary, "_merchant_notary", "sp_artisan_notary", characterToSpawnCount2);
      this.SpawnNotableHelperCharacter(settlement.Culture.RuralNotableNotary, "_merchant_notary", "sp_rural_notable_notary", characterToSpawnCount3);
      this.SpawnNotableHelperCharacter(settlement.Culture.MerchantNotary, "_merchant_notary", "sp_merchant_notary", characterToSpawnCount4);
    }

    private void SpawnNotableHelperCharacter(
      CharacterObject character,
      string actionSetSuffix,
      string tag,
      int characterToSpawnCount)
    {
      Location location = HeroAgentSpawnCampaignBehavior.Center ?? HeroAgentSpawnCampaignBehavior.VillageCenter;
      for (; characterToSpawnCount > 0; --characterToSpawnCount)
      {
        Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(character.Race, "_settlement");
        int minimumAge;
        int maximumAge;
        Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(character, out minimumAge, out maximumAge, "Notary");
        AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character)).Monster(monsterWithSuffix).NoHorses(true).Age(MBRandom.RandomInt(minimumAge, maximumAge));
        LocationCharacter locationCharacter = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), tag, true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, actionSetSuffix), true);
        location.AddCharacter(locationCharacter);
      }
    }

    private static Tuple<string, Monster> GetActionSetAndMonster(CharacterObject character)
    {
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(character.Race, "_settlement");
      return new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, character.IsFemale, "_lord"), monsterWithSuffix);
    }
  }
}
