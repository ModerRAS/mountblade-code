// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.AlleyCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation;
using SandBox.Missions.AgentBehaviors;
using SandBox.Missions.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class AlleyCampaignBehavior : 
    CampaignBehaviorBase,
    IAlleyCampaignBehavior,
    ICampaignBehavior
  {
    private const int DesiredOccupiedAlleyPerTownFrequency = 2;
    private const int RelationLossWithSettlementOwnerAfterOccupyingAnAlley = -2;
    private const int RelationLossWithOldOwnerUponClearingAlley = -5;
    private const int RelationGainWithOtherNotablesUponClearingAlley = 1;
    private const float SpawningNewAlleyFightDailyPercentage = 0.015f;
    private const float ConvertTroopsToThugsDailyPercentage = 0.01f;
    private const float GainOrLoseAlleyDailyBasePercentage = 0.02f;
    private CharacterObject _thug;
    private CharacterObject _expertThug;
    private CharacterObject _masterThug;
    private List<AlleyCampaignBehavior.PlayerAlleyData> _playerOwnedCommonAreaData = new List<AlleyCampaignBehavior.PlayerAlleyData>();
    private bool _battleWillStartInCurrentSettlement;
    private bool _waitForBattleResults;
    private bool _playerRetreatedFromMission;
    private bool _playerDiedInMission;
    private bool _playerIsInAlleyFightMission;
    private bool _playerAbandonedAlleyFromDialogRecently;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.AlleyOccupiedByPlayer.AddNonSerializedListener((object) this, new Action<Alley, TroopRoster>(this.OnAlleyOccupiedByPlayer));
      CampaignEvents.AlleyClearedByPlayer.AddNonSerializedListener((object) this, new Action<Alley>(this.OnAlleyClearedByPlayer));
      CampaignEvents.AlleyOwnerChanged.AddNonSerializedListener((object) this, new Action<Alley, Hero, Hero>(this.OnAlleyOwnerChanged));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.CanHeroLeadPartyEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.CommonAlleyLeaderRestriction));
      CampaignEvents.CanBeGovernorOrHavePartyRoleEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.CommonAlleyLeaderRestriction));
      CampaignEvents.AfterMissionStarted.AddNonSerializedListener((object) this, new Action<IMission>(this.OnAfterMissionStarted));
      CampaignEvents.CanHeroDieEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.CanHeroDie));
    }

    private void CanHeroDie(
      Hero hero,
      KillCharacterAction.KillCharacterActionDetail detail,
      ref bool result)
    {
      if (hero != Hero.MainHero || Mission.Current == null || !this._playerIsInAlleyFightMission)
        return;
      result = false;
    }

    private void OnAfterMissionStarted(IMission mission)
    {
      this._playerIsInAlleyFightMission = false;
    }

    private void OnAlleyOwnerChanged(Alley alley, Hero newOwner, Hero oldOwner)
    {
      if (oldOwner != Hero.MainHero)
        return;
      TextObject message = new TextObject("{=wAgfOHio}You have lost the ownership of the alley at {SETTLEMENT}.");
      message.SetTextVariable("SETTLEMENT", alley.Settlement.Name);
      MBInformationManager.AddQuickInformation(message);
    }

    private void CommonAlleyLeaderRestriction(Hero hero, ref bool result)
    {
      if (!this._playerOwnedCommonAreaData.Any<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.AssignedClanMember == hero)))
        return;
      result = false;
    }

    private void DailyTick()
    {
      for (int index = this._playerOwnedCommonAreaData.Count - 1; index >= 0; --index)
      {
        AlleyCampaignBehavior.PlayerAlleyData playerOwnedArea = this._playerOwnedCommonAreaData[index];
        this.CheckConvertTroopsToBandits(playerOwnedArea);
        SkillLevelingManager.OnDailyAlleyTick(playerOwnedArea.Alley, playerOwnedArea.AssignedClanMember);
        if (playerOwnedArea.AssignedClanMember.IsDead && playerOwnedArea.AssignedClanMember.DeathDay + Campaign.Current.Models.AlleyModel.DestroyAlleyAfterDaysWhenLeaderIsDeath < CampaignTime.Now)
        {
          this._playerOwnedCommonAreaData.Remove(playerOwnedArea);
          playerOwnedArea.DestroyAlley();
        }
        else if (!playerOwnedArea.IsUnderAttack && !playerOwnedArea.AssignedClanMember.IsDead)
          this.CheckSpawningNewAlleyFight(playerOwnedArea);
        else if (playerOwnedArea.IsUnderAttack && playerOwnedArea.AttackResponseDueDate.IsPast)
        {
          this._playerOwnedCommonAreaData.Remove(playerOwnedArea);
          playerOwnedArea.DestroyAlley();
        }
      }
    }

    private void CheckSpawningNewAlleyFight(
      AlleyCampaignBehavior.PlayerAlleyData playerOwnedArea)
    {
      if ((double) MBRandom.RandomFloat >= 0.014999999664723873 || !playerOwnedArea.Alley.Settlement.Alleys.Any<Alley>((Func<Alley, bool>) (x => x.State == Alley.AreaState.OccupiedByGangLeader)))
        return;
      this.StartNewAlleyAttack(playerOwnedArea);
    }

    private void StartNewAlleyAttack(
      AlleyCampaignBehavior.PlayerAlleyData playerOwnedArea)
    {
      playerOwnedArea.UnderAttackBy = playerOwnedArea.Alley.Settlement.Alleys.Where<Alley>((Func<Alley, bool>) (x => x.State == Alley.AreaState.OccupiedByGangLeader)).GetRandomElementInefficiently<Alley>();
      playerOwnedArea.UnderAttackBy.Owner.SetHasMet();
      float responseTimeInDays = Campaign.Current.Models.AlleyModel.GetAlleyAttackResponseTimeInDays(playerOwnedArea.TroopRoster);
      playerOwnedArea.AttackResponseDueDate = CampaignTime.DaysFromNow(responseTimeInDays);
      TextObject description = new TextObject("{=5bIpeW9X}Your alley in {SETTLEMENT} is under attack from neighboring gangs. Unless you go to their help, the alley will be lost in {RESPONSE_TIME} days.");
      description.SetTextVariable("SETTLEMENT", playerOwnedArea.Alley.Settlement.Name);
      description.SetTextVariable("RESPONSE_TIME", responseTimeInDays);
      ChangeRelationAction.ApplyPlayerRelation(playerOwnedArea.UnderAttackBy.Owner, -5);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new AlleyUnderAttackMapNotification(playerOwnedArea.Alley, description));
    }

    private void CheckConvertTroopsToBandits(
      AlleyCampaignBehavior.PlayerAlleyData playerOwnedArea)
    {
      foreach (FlattenedTroopRosterElement troopRosterElement in playerOwnedArea.TroopRoster.ToFlattenedRoster())
      {
        if ((double) MBRandom.RandomFloat < 0.0099999997764825821 && !troopRosterElement.Troop.IsHero && troopRosterElement.Troop.Occupation != Occupation.Gangster)
        {
          playerOwnedArea.TroopRoster.RemoveTroop(troopRosterElement.Troop);
          CharacterObject character = this._thug;
          if (character.Tier < troopRosterElement.Troop.Tier)
            character = this._expertThug;
          if (character.Tier < troopRosterElement.Troop.Tier)
            character = this._masterThug;
          playerOwnedArea.TroopRoster.AddToCounts(character, 1);
        }
      }
    }

    private void OnNewGameCreated(CampaignGameStarter gameStarter)
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        int num = MBRandom.RandomInt(0, allTown.Settlement.Alleys.Count);
        IEnumerable<Hero> source = allTown.Settlement.Notables.Where<Hero>((Func<Hero, bool>) (x => x.IsGangLeader));
        for (int index = num; index < num + 2; ++index)
          allTown.Settlement.Alleys[index % allTown.Settlement.Alleys.Count].SetOwner(source.ElementAt<Hero>(index % source.Count<Hero>()));
      }
    }

    private void DailyTickSettlement(Settlement settlement) => this.TickAlleyOwnerships(settlement);

    private void TickAlleyOwnerships(Settlement settlement)
    {
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.IsGangLeader)
        {
          int count = notable.OwnedAlleys.Count;
          float num1 = (float) (0.019999999552965164 - (double) count * 0.004999999888241291);
          float num2 = (float) count * 0.005f;
          if ((double) MBRandom.RandomFloat < (double) num1)
            settlement.Alleys.FirstOrDefault<Alley>((Func<Alley, bool>) (x => x.State == Alley.AreaState.Empty))?.SetOwner(notable);
          if ((double) MBRandom.RandomFloat < (double) num2)
            notable.OwnedAlleys.GetRandomElement<Alley>()?.SetOwner((Hero) null);
          if (!notable.IsHealthFull())
            notable.Heal(10);
        }
      }
    }

    private void OnAlleyOccupiedByPlayer(Alley alley, TroopRoster troopRoster)
    {
      alley.SetOwner(Hero.MainHero);
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = new AlleyCampaignBehavior.PlayerAlleyData(alley, troopRoster);
      this._playerOwnedCommonAreaData.Add(playerAlleyData);
      TeleportHeroAction.ApplyDelayedTeleportToSettlement(playerAlleyData.AssignedClanMember, alley.Settlement);
      if (alley.Settlement.OwnerClan != Clan.PlayerClan)
        ChangeRelationAction.ApplyPlayerRelation(alley.Settlement.Owner, -2);
      SkillLevelingManager.OnAlleyCleared(alley);
      this.AddPlayerAlleyCharacters(alley);
      Mission.Current.ClearCorpses(false);
    }

    private void OnAlleyClearedByPlayer(Alley alley)
    {
      ChangeRelationAction.ApplyPlayerRelation(alley.Owner, -5);
      foreach (Hero notable in (List<Hero>) alley.Settlement.Notables)
      {
        if (!notable.IsGangLeader)
          ChangeRelationAction.ApplyPlayerRelation(notable, 1);
      }
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      if (playerAlleyData?.UnderAttackBy == alley)
        playerAlleyData.UnderAttackBy = (Alley) null;
      alley.SetOwner((Hero) null);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<AlleyCampaignBehavior.PlayerAlleyData>>("_playerOwnedCommonAreaData", ref this._playerOwnedCommonAreaData);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this._thug = MBObjectManager.Instance.GetObject<CharacterObject>("gangster_1");
      this._expertThug = MBObjectManager.Instance.GetObject<CharacterObject>("gangster_2");
      this._masterThug = MBObjectManager.Instance.GetObject<CharacterObject>("gangster_3");
      this.AddGameMenus(campaignGameStarter);
      this.AddDialogs(campaignGameStarter);
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.0")))
        return;
      foreach (AlleyCampaignBehavior.PlayerAlleyData playerAlleyData in this._playerOwnedCommonAreaData)
      {
        if (playerAlleyData.IsUnderAttack && playerAlleyData.UnderAttackBy.Owner == null)
          playerAlleyData.UnderAttackBy = (Alley) null;
      }
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (!currentSettlement.IsTown)
        return;
      foreach (Alley alley in currentSettlement.Alleys)
      {
        if (alley.State == Alley.AreaState.OccupiedByGangLeader)
        {
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) Campaign.Current.Models.AlleyModel.GetTroopsOfAIOwnedAlley(alley).GetTroopRoster())
          {
            for (int index = 0; index < troopRosterElement.Number; ++index)
              this.AddCharacterToAlley(troopRosterElement.Character, alley);
          }
        }
        else if (alley.State == Alley.AreaState.OccupiedByPlayer)
          this.AddPlayerAlleyCharacters(alley);
      }
    }

    private void AddPlayerAlleyCharacters(Alley alley)
    {
      if (Mission.Current != null)
      {
        for (int index = Mission.Current.Agents.Count - 1; index >= 0; --index)
        {
          Agent agent = Mission.Current.Agents[index];
          if (agent.IsHuman && !agent.Character.IsHero && agent.GetComponent<CampaignAgentComponent>()?.AgentNavigator?.MemberOfAlley?.Owner == Hero.MainHero)
            agent.FadeOut(false, true);
        }
      }
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley == alley)).TroopRoster.GetTroopRoster())
      {
        if (!troopRosterElement.Character.IsHero || !troopRosterElement.Character.HeroObject.IsTraveling)
        {
          for (int index = 0; index < troopRosterElement.Number; ++index)
            this.AddCharacterToAlley(troopRosterElement.Character, alley);
        }
      }
    }

    private void AddCharacterToAlley(CharacterObject character, Alley alley)
    {
      Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("center");
      LocationCharacter locationCharacter = (LocationCharacter) null;
      if (character.IsHero)
      {
        Location locationOfCharacter = Settlement.CurrentSettlement.LocationComplex.GetLocationOfCharacter(character.HeroObject);
        if (locationOfCharacter != null && locationOfCharacter == locationWithId)
          return;
        locationCharacter = Settlement.CurrentSettlement.LocationComplex.GetLocationCharacterOfHero(character.HeroObject);
      }
      if (locationCharacter == null)
      {
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(character.Race, "_settlement");
        int minimumAge;
        int maximumAge;
        Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(character, out minimumAge, out maximumAge, "AlleyGangMember");
        AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character)).Monster(monsterWithSuffix).NoHorses(true).Age(MBRandom.RandomInt(minimumAge, maximumAge));
        locationCharacter = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(BehaviorSets.AddFixedCharacterBehaviors), alley.Tag, true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_villain"), true);
      }
      locationCharacter.SpecialTargetTag = alley.Tag;
      locationCharacter.SetAlleyOfCharacter(alley);
      Settlement.CurrentSettlement.LocationComplex.ChangeLocation(locationCharacter, Settlement.CurrentSettlement.LocationComplex.GetLocationOfCharacter(locationCharacter), locationWithId);
      if (!character.IsHero)
        return;
      CampaignEventDispatcher.Instance.OnHeroGetsBusy(character.HeroObject, HeroGetsBusyReasons.BecomeAlleyLeader);
    }

    protected void AddGameMenus(CampaignGameStarter campaignGameSystemStarter)
    {
      campaignGameSystemStarter.AddGameMenuOption("town", "manage_alley", "{=VkOtMe5a}Go to alley", new GameMenuOption.OnConditionDelegate(this.go_to_alley_on_condition), new GameMenuOption.OnConsequenceDelegate(this.go_to_alley_on_consequence), index: 5);
      campaignGameSystemStarter.AddGameMenu("manage_alley", "{=dWf6ztYu}You are in your alley by the {ALLEY_TYPE}, {FURTHER_INFO}", new OnInitDelegate(this.manage_alley_menu_on_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      campaignGameSystemStarter.AddGameMenuOption("manage_alley", "confront_hostile_alley_leader", "{=grhRXqen}Confront {HOSTILE_GANG_LEADER.NAME} about {?HOSTILE_GANG_LEADER.GENDER}her{?}his{\\?} attack on your alley.", new GameMenuOption.OnConditionDelegate(this.alley_under_attack_on_condition), new GameMenuOption.OnConsequenceDelegate(this.alley_under_attack_response_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("manage_alley", "change_leader_of_alley", "{=ClyaDhGU}Change the leader of the alley", new GameMenuOption.OnConditionDelegate(this.change_leader_of_alley_on_condition), new GameMenuOption.OnConsequenceDelegate(this.change_leader_of_the_alley_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("manage_alley", "manage_alley_troops", "{=QrBCe41Z}Manage alley troops", new GameMenuOption.OnConditionDelegate(this.manage_alley_on_condition), new GameMenuOption.OnConsequenceDelegate(this.manage_troops_of_alley));
      campaignGameSystemStarter.AddGameMenuOption("manage_alley", "abandon_alley", "{=ELfguvYD}Abandon the alley", new GameMenuOption.OnConditionDelegate(this.abandon_alley_on_condition), new GameMenuOption.OnConsequenceDelegate(this.abandon_alley_are_you_sure_consequence));
      campaignGameSystemStarter.AddGameMenu("manage_alley_abandon_are_you_sure", "{=awjomtnJ}Are you sure?", (OnInitDelegate) null, GameOverlays.MenuOverlayType.SettlementWithBoth);
      campaignGameSystemStarter.AddGameMenuOption("manage_alley_abandon_are_you_sure", "abandon_alley_yes", "{=aeouhelq}Yes", new GameMenuOption.OnConditionDelegate(this.alley_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.abandon_alley_consequence));
      campaignGameSystemStarter.AddGameMenuOption("manage_alley_abandon_are_you_sure", "abandon_alley_no", "{=8OkPHu4f}No", new GameMenuOption.OnConditionDelegate(this.alley_go_back_on_condition), new GameMenuOption.OnConsequenceDelegate(this.go_to_alley_on_consequence), true);
      campaignGameSystemStarter.AddGameMenuOption("manage_alley", "back", "{=4QNycK7T}Go back", new GameMenuOption.OnConditionDelegate(this.alley_go_back_on_condition), new GameMenuOption.OnConsequenceDelegate(this.leave_alley_menu_consequence), true);
      campaignGameSystemStarter.AddGameMenu("alley_fight_lost", "{=po79q14T}You have failed to defend your alley against the attack, you have lost the ownership of it.", (OnInitDelegate) null);
      campaignGameSystemStarter.AddGameMenuOption("alley_fight_lost", "continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.alley_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.alley_fight_continue_on_consequence));
      campaignGameSystemStarter.AddGameMenu("alley_fight_won", "{=i1sgAm0F}You have succeeded in defending your alley against the attack. You might want to leave some troops in order to compensate for your losses in the fight.", (OnInitDelegate) null);
      campaignGameSystemStarter.AddGameMenuOption("alley_fight_won", "continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.alley_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.alley_fight_continue_on_consequence));
    }

    private void abandon_alley_are_you_sure_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("manage_alley_abandon_are_you_sure");
    }

    private bool alley_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private void alley_fight_continue_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("town");
    }

    private bool alley_go_back_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private bool abandon_alley_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Surrender;
      return true;
    }

    private void alley_under_attack_response_on_consequence(MenuCallbackArgs args)
    {
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter), new ConversationCharacterData(this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement)).UnderAttackBy.Owner.CharacterObject));
    }

    private bool alley_under_attack_on_condition(MenuCallbackArgs args)
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Owner == Hero.MainHero && x.Alley.Settlement == Settlement.CurrentSettlement && x.IsUnderAttack));
      if (playerAlleyData == null)
        return false;
      args.optionLeaveType = GameMenuOption.LeaveType.DefendAction;
      StringHelpers.SetCharacterProperties("HOSTILE_GANG_LEADER", playerAlleyData.UnderAttackBy.Owner.CharacterObject);
      TextObject textObject = new TextObject("{=9t1LGNz6}{RESPONSE_TIME} {?RESPONSE_TIME>1}days{?}day{\\?} left.");
      textObject.SetTextVariable("RESPONSE_TIME", this.GetResponseTimeLeftForAttackInDays(playerAlleyData.Alley));
      args.Tooltip = textObject;
      return true;
    }

    private bool manage_alley_on_condition(MenuCallbackArgs args)
    {
      if (this.alley_under_attack_on_condition(args))
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=pdqi2qz1}You can not do this action while your alley is under attack.");
      }
      args.optionLeaveType = GameMenuOption.LeaveType.ManageGarrison;
      return true;
    }

    private bool change_leader_of_alley_on_condition(MenuCallbackArgs args)
    {
      if (this.alley_under_attack_on_condition(args))
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=pdqi2qz1}You can not do this action while your alley is under attack.");
      }
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private bool go_to_alley_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      return this._playerOwnedCommonAreaData.Any<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
    }

    private void go_to_alley_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("manage_alley");
    }

    private void leave_alley_menu_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("town_outside");
    }

    private void abandon_alley_consequence(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.LeaveTroopsAndFlee;
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      this._playerOwnedCommonAreaData.Remove(playerAlleyData);
      playerAlleyData.AbandonTheAlley();
      GameMenu.SwitchToMenu("town_outside");
    }

    private void manage_troops_of_alley(MenuCallbackArgs args)
    {
      AlleyHelper.OpenScreenForManagingAlley(this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement)).TroopRoster, new PartyPresentationDoneButtonDelegate(this.OnPartyScreenClosed), new TextObject("{=dQBArrqh}Manage Alley"));
    }

    private bool OnPartyScreenClosed(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty,
      PartyBase rightParty)
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      playerAlleyData.TroopRoster = leftMemberRoster;
      if (Mission.Current != null)
        this.AddPlayerAlleyCharacters(playerAlleyData.Alley);
      return true;
    }

    private void change_leader_of_the_alley_on_consequence(MenuCallbackArgs args)
    {
      AlleyHelper.CreateMultiSelectionInquiryForSelectingClanMemberToAlley(this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement)).Alley, new Action<List<InquiryElement>>(this.ChangeAssignedClanMemberOfAlley), (Action<List<InquiryElement>>) null);
    }

    private void ChangeAssignedClanMemberOfAlley(List<InquiryElement> newClanMemberInquiryElement)
    {
      this.ChangeTheLeaderOfAlleyInternal(this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement)), (newClanMemberInquiryElement.First<InquiryElement>().Identifier as CharacterObject).HeroObject);
    }

    private void manage_alley_menu_on_init(MenuCallbackArgs args)
    {
      Campaign.Current.GameMenuManager.MenuLocations.Clear();
      Campaign.Current.GameMenuManager.MenuLocations.Add(Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("alley"));
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      if (playerAlleyData == null)
      {
        GameMenu.SwitchToMenu(this._playerAbandonedAlleyFromDialogRecently ? "town" : "alley_fight_lost");
        this._playerAbandonedAlleyFromDialogRecently = false;
      }
      else
      {
        MBTextManager.SetTextVariable("ALLEY_TYPE", playerAlleyData.Alley.Name, false);
        TextObject empty = TextObject.Empty;
        if (playerAlleyData.AssignedClanMember.IsTraveling)
        {
          TextObject text = new TextObject("{=AjBYneFr}{CLAN_MEMBER.NAME} is in charge of the alley. {?CLAN_MEMBER.GENDER}She{?}He{\\?} is currently traveling to the alley and will arrive after {HOURS} {?HOURS > 1}hours{?}hour{\\?}.");
          int variable = MathF.Ceiling(TeleportationHelper.GetHoursLeftForTeleportingHeroToReachItsDestination(playerAlleyData.AssignedClanMember));
          text.SetTextVariable("HOURS", variable);
          MBTextManager.SetTextVariable("FURTHER_INFO", text, false);
        }
        else if (playerAlleyData.AssignedClanMember.IsDead)
        {
          TextObject text = new TextObject("{=P5UbgK4c}{CLAN_MEMBER.NAME} was in charge of the alley. {?CLAN_MEMBER.GENDER}She{?}He{\\?} is dead. Alley will be abandoned after {REMAINING_DAYS} {?REMAINING_DAYS>1}days{?}day{\\?} unless a new overseer is assigned.");
          text.SetTextVariable("REMAINING_DAYS", (int) Math.Ceiling((playerAlleyData.AssignedClanMember.DeathDay + Campaign.Current.Models.AlleyModel.DestroyAlleyAfterDaysWhenLeaderIsDeath - CampaignTime.Now).ToDays));
          MBTextManager.SetTextVariable("FURTHER_INFO", text, false);
        }
        else
          MBTextManager.SetTextVariable("FURTHER_INFO", new TextObject("{=fcqdfY09}{CLAN_MEMBER.NAME} is in charge of the alley."), false);
        StringHelpers.SetCharacterProperties("CLAN_MEMBER", playerAlleyData.AssignedClanMember.CharacterObject);
        if (this._waitForBattleResults)
        {
          this._waitForBattleResults = false;
          playerAlleyData.TroopRoster.AddToCounts(CharacterObject.PlayerCharacter, -1, true);
          if ((playerAlleyData.TroopRoster.TotalManCount != 0 || !this._playerDiedInMission ? (this._playerRetreatedFromMission ? 1 : 0) : 1) != 0)
          {
            this._playerOwnedCommonAreaData.Remove(playerAlleyData);
            playerAlleyData.AlleyFightLost();
          }
          else
            playerAlleyData.AlleyFightWon();
          this._playerRetreatedFromMission = false;
          this._playerDiedInMission = false;
        }
        if (!this._battleWillStartInCurrentSettlement)
          return;
        this.StartAlleyFightWithOtherAlley();
      }
    }

    private void StartAlleyFightWithOtherAlley()
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      TroopRoster troopRoster = playerAlleyData.TroopRoster;
      if (playerAlleyData.AssignedClanMember.IsTraveling)
        troopRoster.RemoveTroop(playerAlleyData.AssignedClanMember.CharacterObject);
      troopRoster.AddToCounts(CharacterObject.PlayerCharacter, 1, true);
      TroopRoster forBattleMission = Campaign.Current.Models.AlleyModel.GetTroopsOfAlleyForBattleMission(playerAlleyData.UnderAttackBy);
      int wallLevel = Settlement.CurrentSettlement.Town.GetWallLevel();
      string scene = Settlement.CurrentSettlement.LocationComplex.GetScene("center", wallLevel);
      Location locationWithId = LocationComplex.Current.GetLocationWithId("center");
      int upgradeLevel = wallLevel;
      Location location = locationWithId;
      TroopRoster playerSideTroops = troopRoster;
      TroopRoster rivalSideTroops = forBattleMission;
      CampaignMission.OpenAlleyFightMission(scene, upgradeLevel, location, playerSideTroops, rivalSideTroops);
      this._battleWillStartInCurrentSettlement = false;
      this._waitForBattleResults = true;
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_thug", "start", "alley_player_owned_start_thug", "{=!}{FURTHER_DETAIL}", new ConversationSentence.OnConditionDelegate(this.alley_talk_player_owned_thug_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_thug_answer", "alley_player_owned_start_thug", "close_window", "{=GvpvZEba}Very well, take care.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_alley_manager_not_under_attack", "start", "alley_player_owned_start", "{=cwqR0pp1}Greetings my {?PLAYER.GENDER}lady{?}lord{\\?}. It's good to see you here. How can I help you?", new ConversationSentence.OnConditionDelegate(this.alley_talk_player_owned_alley_managed_not_under_attack_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_alley_manager_under_attack", "start", "close_window", "{=jaFWM6sN}Good to have you here, my {?PLAYER.GENDER}lady{?}lord{\\?}. We shall raze them down now.", new ConversationSentence.OnConditionDelegate(this.alley_talk_player_owned_alley_managed_common_condition), (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_answer_1", "alley_player_owned_start", "alley_manager_general_answer", "{=xJJeXW6j}Let me inspect your troops.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.manage_troops_of_alley_from_dialog));
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_answer_2", "alley_player_owned_start", "player_asked_for_volunteers", "{=ah3WKIc8}I could use some more troops in my party. Have you found any volunteers?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_answer_3", "alley_player_owned_start", "alley_manager_general_answer", "{=ut26sd6p}I want somebody else to take charge of this place.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.change_leader_of_alley_from_dialog));
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_answer_4", "alley_player_owned_start", "abandon_alley_are_you_sure", "{=I8o7oarw}I want to abandon this area.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_alley_manager_answer_4_1", "abandon_alley_are_you_sure", "abandon_alley_are_you_sure_player", "{=6dDXb4iI}Are you sure? If you are, we can pack up and join you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_answer_4_2", "abandon_alley_are_you_sure_player", "start", "{=ALWqXMiP}Yes, I am sure.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.abandon_alley_from_dialog_consequence));
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_answer_4_3", "abandon_alley_are_you_sure_player", "start", "{=YJkiQ6nM}No, I have changed my mind. We will stay here.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_answer_5", "alley_player_owned_start", "close_window", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_alley_manager_volunteers_1", "player_asked_for_volunteers", "alley_player_owned_start", "{=nRVrXSbv}Not yet my {?PLAYER.GENDER}lady{?}lord{\\?}, but I am working on it. Better check back next week.", new ConversationSentence.OnConditionDelegate(this.alley_has_no_troops_to_recruit), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_alley_manager_volunteers_2", "player_asked_for_volunteers", "alley_player_ask_for_troops", "{=aLrK7Si7}Yes. I have {TROOPS_TO_RECRUIT} ready to join you.", new ConversationSentence.OnConditionDelegate(this.get_troops_to_recruit_from_alley), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_volunteers_3", "alley_player_ask_for_troops", "give_troops_to_player", "{=BNz4ZA6S}Very well. Have them join me now.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.player_recruited_troops_from_alley));
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_alley_manager_volunteers_4", "give_troops_to_player", "start", "{=PlIYRSIz}All right my {?PLAYER.GENDER}lady{?}lord{\\?}, they will be ready.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_talk_start_player_owned_alley_manager_volunteers_5", "alley_player_ask_for_troops", "start", "{=n1qrbQVa}I don't need them right now.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_talk_start_player_owned_alley_manager_answer_2_di", "alley_manager_general_answer", "start", "{=lF5HkBDy}As you wish.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_talk_start_normal", "start", "alley_talk_start", "{=qT4nbaAY}Oi, you, what are you doing here?", new ConversationSentence.OnConditionDelegate(this.alley_talk_start_normal_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 120);
      campaignGameStarter.AddDialogLine("alley_talk_start_normal_2", "start", "alley_talk_start_confront", "{=MzHbdTYe}Well well well, I wasn't expecting to see you there. There must be some little birds informing you about my plans. That won't change anything, though. I'll still crush you.", new ConversationSentence.OnConditionDelegate(this.alley_confront_dialog_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_talk_start_normal_3", "alley_talk_start_confront", "close_window", "{=GMsZZQzI}Bring it on.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.start_alley_fight_after_conversation));
      campaignGameStarter.AddPlayerLine("alley_talk_start_normal_4", "alley_talk_start_confront", "close_window", "{=QNpuyzc4}Take it easy. I have no interest in the place any more. Take it.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.abandon_alley_from_dialog_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.alley_abandon_while_under_attack_clickable_condition));
      campaignGameStarter.AddPlayerLine("alley_start_1", "alley_talk_start", "alley_activity", "{=1NSRPYZt}Just passing through. What goes on here?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_start_2", "alley_talk_start", "first_entry_to_alley_2", "{=HCmQmZbe}I'm just having a look. Do you mind?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_start_3", "alley_talk_start", "close_window", "{=iW9iKbb8}Nothing.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_entry_start_1", "alley_first_talk_start", "first_entry_to_alley_2", "{=X18yfvX7}Just passing through.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_entry_start_2", "alley_first_talk_start", "first_entry_to_alley_2", "{=Y1O5bPpJ}Having a look. Do you mind?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_entry_start_3", "alley_first_talk_start", "first_entry_to_alley_2", "{=eQfL2UmE}None of your business.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("first_entry_to_alley", "first_entry_to_alley_2", "alley_options", "{=Ll2wN2Gm}This is how it goes, friend. This is our turf. We answer to {ALLEY_BOSS.NAME}, and {?ALLEY_BOSS.GENDER}she's{?}he's{\\?} like the {?ALLEY_BOSS.GENDER}queen{?}king{\\?} here. So if you haven't got a good reason to be here, clear out.", new ConversationSentence.OnConditionDelegate(this.enter_alley_rude_on_occasion), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("first_entry_to_alley_friendly", "first_entry_to_alley_2", "alley_options", "{=Fo47BuSY}Fine, you know {ALLEY_BOSS.NAME}, you can be here. Just no trouble, you understand?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("ally_entry_start_fight", "alley_options", "alley_fight_start", "{=2Fxva3RY}I don't take orders from the likes of you.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.start_alley_fight_on_consequence));
      campaignGameStarter.AddPlayerLine("alley_entry_question_activity", "alley_options", "alley_activity", "{=aNZKqAAS}So what goes on here?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("alley_entry_end_conversation", "alley_options", "close_window", "{=Mk3Qfb4D}I don't want any trouble. Later.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_fight_start", "alley_fight_start", "close_window", "{=EN3Zqyx5}A mouthy one, eh? At him, lads![ib:aggressive][if:convo_angry]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_activity", "alley_activity", "alley_activity_2", "{=bZ5rXBY5}{ALLEY_ACTIVITY_STRING}", new ConversationSentence.OnConditionDelegate(this.alley_activity_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_activity_2", "alley_activity_2", "alley_options_player", "{=eZq11NVD}And by the way, we take orders from {ALLEY_BOSS.NAME}, and no one else.", new ConversationSentence.OnConditionDelegate(this.alley_activity_2_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_activity_back", "alley_options_decline", "alley_options", "{=pf4EIcBQ}Anything else? Because unless you've got business here, maybe you'd best move along.[if:convo_confused_annoyed][ib:closed]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_activity_end", "alley_options_player", "close_window", "{=xb1Ps6ZC}Now get lost...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("alley_meet_boss", "alley_meet_boss", "close_window", "{=NoxFbtEa}Wait here. We'll see if {?ALLEY_BOSS.GENDER}she{?}he{\\?} wants to talk to you. (NOT IMPLEMENTED)", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("gang_leader_bodyguard_start", "start", "close_window", "{=NVvfxdIc}You best talk to the boss.", new ConversationSentence.OnConditionDelegate(this.gang_leader_bodyguard_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 200);
    }

    private bool alley_abandon_while_under_attack_clickable_condition(out TextObject explanation)
    {
      explanation = new TextObject("{=3E1XVyGM}You will lose the ownership of the alley.");
      return true;
    }

    private bool alley_confront_dialog_on_condition()
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      return playerAlleyData != null && playerAlleyData.IsUnderAttack && playerAlleyData.UnderAttackBy.Owner == Hero.OneToOneConversationHero;
    }

    private void start_alley_fight_after_conversation()
    {
      this._battleWillStartInCurrentSettlement = true;
      Campaign.Current.GameMenuManager.SetNextMenu("manage_alley");
      if (Mission.Current == null)
        return;
      Mission.Current.EndMission();
    }

    private void player_recruited_troops_from_alley()
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) Campaign.Current.Models.AlleyModel.GetTroopsToRecruitFromAlleyDependingOnAlleyRandom(playerAlleyData.Alley, playerAlleyData.RandomFloatWeekly).GetTroopRoster())
        MobileParty.MainParty.MemberRoster.AddToCounts(troopRosterElement.Character, troopRosterElement.Number);
      MBInformationManager.AddQuickInformation(new TextObject("{=8CW2y0p3}Troops have been joined to your party"));
      playerAlleyData.LastRecruitTime = CampaignTime.Now;
    }

    private bool get_troops_to_recruit_from_alley()
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      TroopRoster dependingOnAlleyRandom = Campaign.Current.Models.AlleyModel.GetTroopsToRecruitFromAlleyDependingOnAlleyRandom(playerAlleyData.Alley, playerAlleyData.RandomFloatWeekly);
      List<TextObject> textObjects = new List<TextObject>();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) dependingOnAlleyRandom.GetTroopRoster())
      {
        TextObject textObject = new TextObject("{=!}{TROOP_COUNT} {?TROOP_COUNT > 1}{TROOP_NAME}{.s}{?}{TROOP_NAME}{\\?}");
        textObject.SetTextVariable("TROOP_COUNT", troopRosterElement.Number);
        textObject.SetTextVariable("TROOP_NAME", troopRosterElement.Character.Name);
        textObjects.Add(textObject);
      }
      MBTextManager.SetTextVariable("TROOPS_TO_RECRUIT", GameTexts.GameTextHelper.MergeTextObjectsWithComma(textObjects, true), false);
      return true;
    }

    private bool alley_has_no_troops_to_recruit()
    {
      return (double) this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement)).RandomFloatWeekly > 0.5;
    }

    private void change_leader_of_alley_from_dialog()
    {
      AlleyHelper.CreateMultiSelectionInquiryForSelectingClanMemberToAlley(this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement)).Alley, new Action<List<InquiryElement>>(this.ChangeAssignedClanMemberOfAlley), (Action<List<InquiryElement>>) null);
    }

    private void manage_troops_of_alley_from_dialog()
    {
      AlleyHelper.OpenScreenForManagingAlley(this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement)).TroopRoster, new PartyPresentationDoneButtonDelegate(this.OnPartyScreenClosed), new TextObject("{=dQBArrqh}Manage Alley"));
    }

    private void abandon_alley_from_dialog_consequence()
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      if (Mission.Current != null)
      {
        for (int index = Mission.Current.Agents.Count - 1; index >= 0; --index)
        {
          Agent agent = Mission.Current.Agents[index];
          if (agent.IsHuman && agent.GetComponent<CampaignAgentComponent>()?.AgentNavigator?.MemberOfAlley?.Owner == Hero.MainHero && Hero.OneToOneConversationHero.CharacterObject != agent.Character)
            agent.FadeOut(false, true);
        }
      }
      this._playerOwnedCommonAreaData.Remove(playerAlleyData);
      playerAlleyData.AbandonTheAlley();
      if (Mission.Current != null && playerAlleyData.Alley.Owner != null)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) Campaign.Current.Models.AlleyModel.GetTroopsOfAIOwnedAlley(playerAlleyData.Alley).GetTroopRoster())
        {
          for (int index = 0; index < troopRosterElement.Number; ++index)
            this.AddCharacterToAlley(troopRosterElement.Character, playerAlleyData.Alley);
        }
      }
      this._playerAbandonedAlleyFromDialogRecently = true;
    }

    private bool alley_talk_player_owned_alley_managed_not_under_attack_on_condition()
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      return playerAlleyData != null && !playerAlleyData.IsUnderAttack && this.alley_talk_player_owned_alley_managed_common_condition();
    }

    private bool alley_talk_player_owned_alley_managed_common_condition()
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
      return playerAlleyData != null && playerAlleyData.AssignedClanMember == Hero.OneToOneConversationHero;
    }

    private bool alley_talk_player_owned_thug_on_condition()
    {
      if (!CharacterObject.OneToOneConversationCharacter.IsHero)
      {
        AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley.Settlement == Settlement.CurrentSettlement));
        if (playerAlleyData != null)
        {
          CampaignAgentComponent component = ((Agent) Campaign.Current.ConversationManager.OneToOneConversationAgent).GetComponent<CampaignAgentComponent>();
          if (component != null && component.AgentNavigator.MemberOfAlley == playerAlleyData.Alley)
          {
            if (playerAlleyData.IsAssignedClanMemberDead)
            {
              TextObject text = new TextObject("{=SdKTUIVJ}Oi, my {?PLAYER.GENDER}lady{?}lord{\\?}. Sorry for your loss, {DEAD_ALLEY_LEADER.NAME} will be missed in these streets. We are waiting for you to appoint a new boss, whenever you’re ready.");
              StringHelpers.SetCharacterProperties("DEAD_ALLEY_LEADER", playerAlleyData.AssignedClanMember.CharacterObject);
              MBTextManager.SetTextVariable("FURTHER_DETAIL", text, false);
            }
            else if (playerAlleyData.AssignedClanMember.IsTraveling)
            {
              TextObject text = new TextObject("{=KKvOQAVa}We are waiting for {TRAVELING_ALLEY_LEADER.NAME} to come. Until {?TRAVELING_ALLEY_LEADER.GENDER}she{?}he{\\?} arrives, we'll be extra watchful.");
              StringHelpers.SetCharacterProperties("TRAVELING_ALLEY_LEADER", playerAlleyData.AssignedClanMember.CharacterObject);
              MBTextManager.SetTextVariable("FURTHER_DETAIL", text, false);
            }
            else
              MBTextManager.SetTextVariable("FURTHER_DETAIL", new TextObject("{=OPwO5RXC}Welcome, boss. We're honored to have you here. You can be sure we're keeping an eye on everything going on."), false);
            return true;
          }
        }
      }
      return false;
    }

    private bool alley_activity_on_condition()
    {
      List<TextObject> textObjectList = new List<TextObject>();
      Alley lastVisitedAlley = CampaignMission.Current.LastVisitedAlley;
      if (lastVisitedAlley.Owner.GetTraitLevel(DefaultTraits.Thug) > 0)
        textObjectList.Add(new TextObject("{=prJBRboS}we look after the honest folk here. Make sure no one smashes up their shops. And if they want to give us a coin or two as a way of saying thanks, well, who'd mind?"));
      if (lastVisitedAlley.Owner.GetTraitLevel(DefaultTraits.Smuggler) > 0)
        textObjectList.Add(new TextObject("{=CqnAGehj}suppose someone wanted to buy some goods and didn't want to pay the customs tax. We might be able to help that person out."));
      if (lastVisitedAlley.Owner.Gold > 100)
        textObjectList.Add(new TextObject("{=U8iyCXmF}we help out those who are down on their luck. Give 'em a purse of silver to tide them by. With a bit of speculative interest, naturally."));
      MBTextManager.SetTextVariable("ALLEY_ACTIVITY_STRING", "{=1rCk6xRa}Now then... If you're asking,[if:convo_normal][ib:normal]", false);
      for (int index = 0; index < textObjectList.Count; ++index)
      {
        MBTextManager.SetTextVariable("ALLEY_ACTIVITY_ADDITION", textObjectList[index].ToString(), false);
        MBTextManager.SetTextVariable("ALLEY_ACTIVITY_STRING", new TextObject("{=jVjIkODa}{ALLEY_ACTIVITY_STRING} {ALLEY_ACTIVITY_ADDITION}").ToString(), false);
        if (index + 1 != textObjectList.Count)
        {
          MBTextManager.SetTextVariable("ALLEY_ACTIVITY_ADDITION", "{=lbNl0a8t}Also,", false);
          MBTextManager.SetTextVariable("ALLEY_ACTIVITY_STRING", new TextObject("{=jVjIkODa}{ALLEY_ACTIVITY_STRING} {ALLEY_ACTIVITY_ADDITION}").ToString(), false);
        }
      }
      return true;
    }

    private bool alley_activity_2_on_condition()
    {
      StringHelpers.SetCharacterProperties("ALLEY_BOSS", CampaignMission.Current.LastVisitedAlley.Owner.CharacterObject);
      return true;
    }

    private bool alley_talk_start_normal_on_condition()
    {
      AgentNavigator agentNavigator = ConversationMission.OneToOneConversationAgent?.GetComponent<CampaignAgentComponent>().AgentNavigator;
      if (agentNavigator?.MemberOfAlley == null || agentNavigator.MemberOfAlley.State != Alley.AreaState.OccupiedByGangLeader || agentNavigator.MemberOfAlley.Owner == Hero.MainHero)
        return false;
      CampaignMission.Current.LastVisitedAlley = agentNavigator.MemberOfAlley;
      return true;
    }

    private bool enter_alley_rude_on_occasion()
    {
      Hero owner = ConversationMission.OneToOneConversationAgent?.GetComponent<CampaignAgentComponent>().AgentNavigator.MemberOfAlley.Owner;
      float relationWithPlayer = owner.GetRelationWithPlayer();
      StringHelpers.SetCharacterProperties("ALLEY_BOSS", owner.CharacterObject);
      return !owner.HasMet || (double) relationWithPlayer < -5.0;
    }

    private void start_alley_fight_on_consequence()
    {
      this._playerIsInAlleyFightMission = true;
      Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.GetMissionBehavior<MissionAlleyHandler>().StartCommonAreaBattle(CampaignMission.Current.LastVisitedAlley));
      LogEntry.AddLogEntry((LogEntry) new PlayerAttackAlleyLogEntry(CampaignMission.Current.LastVisitedAlley.Owner, Hero.MainHero.CurrentSettlement));
    }

    private bool gang_leader_bodyguard_on_condition()
    {
      return Settlement.CurrentSettlement != null && CharacterObject.OneToOneConversationCharacter == Settlement.CurrentSettlement.Culture.GangleaderBodyguard;
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification)
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData1 = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.AssignedClanMember == victim));
      if (playerAlleyData1 != null)
      {
        playerAlleyData1.TroopRoster.RemoveTroop(victim.CharacterObject);
        Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new AlleyLeaderDiedMapNotification(playerAlleyData1.Alley, new TextObject("{=EAPYyktd}One of your alleys has lost its leader or is lacking troops")));
      }
      foreach (AlleyCampaignBehavior.PlayerAlleyData playerAlleyData2 in this._playerOwnedCommonAreaData)
      {
        if (playerAlleyData2.IsUnderAttack && playerAlleyData2.UnderAttackBy.Owner == victim)
          playerAlleyData2.UnderAttackBy = (Alley) null;
      }
      if (victim.Clan == Clan.PlayerClan)
        return;
      foreach (Alley alley in victim.OwnedAlleys.ToList<Alley>())
        alley.SetOwner((Hero) null);
    }

    public bool GetIsAlleyUnderAttack(Alley alley)
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley == alley));
      return playerAlleyData != null && playerAlleyData.IsUnderAttack;
    }

    public int GetPlayerOwnedAlleyTroopCount(Alley alley)
    {
      return this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley == alley)).TroopRoster.TotalRegulars;
    }

    public int GetResponseTimeLeftForAttackInDays(Alley alley)
    {
      return (int) this._playerOwnedCommonAreaData.First<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley == alley)).AttackResponseDueDate.RemainingDaysFromNow;
    }

    public void AbandonAlleyFromClanMenu(Alley alley)
    {
      AlleyCampaignBehavior.PlayerAlleyData playerAlleyData = this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley == alley));
      this._playerOwnedCommonAreaData.Remove(playerAlleyData);
      playerAlleyData?.AbandonTheAlley(true);
    }

    public bool IsHeroAlleyLeaderOfAnyPlayerAlley(Hero hero)
    {
      return this._playerOwnedCommonAreaData.Any<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.AssignedClanMember == hero));
    }

    public List<Hero> GetAllAssignedClanMembersForOwnedAlleys()
    {
      return this._playerOwnedCommonAreaData.Select<AlleyCampaignBehavior.PlayerAlleyData, Hero>((Func<AlleyCampaignBehavior.PlayerAlleyData, Hero>) (x => x.AssignedClanMember)).ToList<Hero>();
    }

    public void ChangeAlleyMember(Alley alley, Hero newAlleyLead)
    {
      this.ChangeTheLeaderOfAlleyInternal(this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley == alley)), newAlleyLead);
    }

    public void OnPlayerRetreatedFromMission() => this._playerRetreatedFromMission = true;

    public void OnPlayerDiedInMission() => this._playerDiedInMission = true;

    public Hero GetAssignedClanMemberOfAlley(Alley alley)
    {
      return this._playerOwnedCommonAreaData.FirstOrDefault<AlleyCampaignBehavior.PlayerAlleyData>((Func<AlleyCampaignBehavior.PlayerAlleyData, bool>) (x => x.Alley == alley))?.AssignedClanMember;
    }

    private void ChangeTheLeaderOfAlleyInternal(
      AlleyCampaignBehavior.PlayerAlleyData alleyData,
      Hero newLeader)
    {
      Hero assignedClanMember = alleyData.AssignedClanMember;
      alleyData.AssignedClanMember = newLeader;
      if (!assignedClanMember.IsDead)
        alleyData.TroopRoster.RemoveTroop(assignedClanMember.CharacterObject);
      alleyData.TroopRoster.AddToCounts(newLeader.CharacterObject, 1, true);
      TeleportHeroAction.ApplyDelayedTeleportToSettlement(newLeader, alleyData.Alley.Settlement);
      if (Campaign.Current.CurrentMenuContext == null)
        return;
      Campaign.Current.CurrentMenuContext.Refresh();
    }

    [GameMenuInitializationHandler("manage_alley")]
    [GameMenuInitializationHandler("alley_fight_lost")]
    [GameMenuInitializationHandler("alley_fight_won")]
    [GameMenuInitializationHandler("manage_alley_abandon_are_you_sure")]
    public static void alley_related_menu_on_init(MenuCallbackArgs args)
    {
      string name = Settlement.CurrentSettlement.Culture.StringId + "_alley";
      args.MenuContext.SetBackgroundMeshName(name);
    }

    public class AlleyCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public AlleyCampaignBehaviorTypeDefiner()
        : base(515253)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (AlleyCampaignBehavior.PlayerAlleyData), 1);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (List<AlleyCampaignBehavior.PlayerAlleyData>));
      }
    }

    internal class PlayerAlleyData
    {
      [SaveableField(1)]
      internal readonly Alley Alley;
      [SaveableField(2)]
      internal Hero AssignedClanMember;
      [SaveableField(3)]
      internal Alley UnderAttackBy;
      [SaveableField(4)]
      internal TroopRoster TroopRoster;
      [SaveableField(5)]
      internal CampaignTime LastRecruitTime;
      [SaveableField(6)]
      internal CampaignTime AttackResponseDueDate;

      internal float RandomFloatWeekly
      {
        get
        {
          return (double) this.LastRecruitTime.ElapsedDaysUntilNow <= 7.0 ? 2f : MBRandom.RandomFloatWithSeed((uint) CampaignTime.Now.ToWeeks, (uint) this.Alley.Tag.GetHashCode());
        }
      }

      internal bool IsUnderAttack => this.UnderAttackBy != null;

      internal bool IsAssignedClanMemberDead => this.AssignedClanMember.IsDead;

      internal PlayerAlleyData(Alley alley, TroopRoster roster)
      {
        this.Alley = alley;
        this.TroopRoster = roster;
        this.AssignedClanMember = roster.GetTroopRoster().First<TroopRosterElement>().Character.HeroObject;
        this.UnderAttackBy = (Alley) null;
      }

      internal void AlleyFightWon()
      {
        this.UnderAttackBy.Owner.AddPower((float) -((double) this.UnderAttackBy.Owner.Power * 0.20000000298023224));
        this.UnderAttackBy.SetOwner((Hero) null);
        this.UnderAttackBy = (Alley) null;
        if (!this.TroopRoster.Contains(this.AssignedClanMember.CharacterObject))
          this.TroopRoster.AddToCounts(this.AssignedClanMember.CharacterObject, 1, true);
        Hero.MainHero.AddSkillXp(DefaultSkills.Roguery, Campaign.Current.Models.AlleyModel.GetXpGainAfterSuccessfulAlleyDefenseForMainHero());
        GameMenu.SwitchToMenu("alley_fight_won");
      }

      internal void AlleyFightLost()
      {
        this.DestroyAlley();
        Hero.MainHero.HitPoints = 1;
        GameMenu.SwitchToMenu("alley_fight_lost");
      }

      internal void AbandonTheAlley(bool fromClanScreen = false)
      {
        if (!fromClanScreen)
        {
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) this.TroopRoster.GetTroopRoster())
          {
            if (!troopRosterElement.Character.IsHero)
              MobileParty.MainParty.MemberRoster.AddToCounts(troopRosterElement.Character, troopRosterElement.Number);
          }
        }
        this.DestroyAlley(true);
      }

      internal void DestroyAlley(bool fromAbandoning = false)
      {
        if (!fromAbandoning && this.AssignedClanMember.IsAlive && this.AssignedClanMember.DeathMark == KillCharacterAction.KillCharacterActionDetail.None)
          MakeHeroFugitiveAction.Apply(this.AssignedClanMember);
        if (this.UnderAttackBy != null)
          this.Alley.SetOwner(this.UnderAttackBy.Owner);
        else
          this.Alley.SetOwner((Hero) null);
        this.TroopRoster.Clear();
        this.UnderAttackBy = (Alley) null;
      }

      internal static void AutoGeneratedStaticCollectObjectsPlayerAlleyData(
        object o,
        List<object> collectedObjects)
      {
        ((AlleyCampaignBehavior.PlayerAlleyData) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.Alley);
        collectedObjects.Add((object) this.AssignedClanMember);
        collectedObjects.Add((object) this.UnderAttackBy);
        collectedObjects.Add((object) this.TroopRoster);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this.LastRecruitTime, collectedObjects);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this.AttackResponseDueDate, collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValueAlley(object o)
      {
        return (object) ((AlleyCampaignBehavior.PlayerAlleyData) o).Alley;
      }

      internal static object AutoGeneratedGetMemberValueAssignedClanMember(object o)
      {
        return (object) ((AlleyCampaignBehavior.PlayerAlleyData) o).AssignedClanMember;
      }

      internal static object AutoGeneratedGetMemberValueUnderAttackBy(object o)
      {
        return (object) ((AlleyCampaignBehavior.PlayerAlleyData) o).UnderAttackBy;
      }

      internal static object AutoGeneratedGetMemberValueTroopRoster(object o)
      {
        return (object) ((AlleyCampaignBehavior.PlayerAlleyData) o).TroopRoster;
      }

      internal static object AutoGeneratedGetMemberValueLastRecruitTime(object o)
      {
        return (object) ((AlleyCampaignBehavior.PlayerAlleyData) o).LastRecruitTime;
      }

      internal static object AutoGeneratedGetMemberValueAttackResponseDueDate(object o)
      {
        return (object) ((AlleyCampaignBehavior.PlayerAlleyData) o).AttackResponseDueDate;
      }
    }
  }
}
