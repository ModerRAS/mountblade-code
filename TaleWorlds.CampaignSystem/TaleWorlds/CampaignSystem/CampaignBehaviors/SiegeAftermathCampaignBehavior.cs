// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.SiegeAftermathCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class SiegeAftermathCampaignBehavior : CampaignBehaviorBase
  {
    private MobileParty _besiegerParty;
    private Clan _prevSettlementOwnerClan;
    private SiegeAftermathAction.SiegeAftermath _playerEncounterAftermath;
    private Dictionary<MobileParty, float> _siegeEventPartyContributions = new Dictionary<MobileParty, float>();
    private Dictionary<Building, int> _playerEncounterAftermathDamagedBuildings = new Dictionary<Building, int>();
    private bool _wasPlayerArmyMember;
    private float _settlementProsperityCache = -1f;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnSiegeAftermathAppliedEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, SiegeAftermathAction.SiegeAftermath, Clan, Dictionary<MobileParty, float>>(this.OnSiegeAftermathApplied));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.OnBuildingLevelChangedEvent.AddNonSerializedListener((object) this, new Action<Town, Building, int>(this.OnBuildingLevelChanged));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
    }

    private void AddGameMenus(CampaignGameStarter gameSystemInitializer)
    {
      gameSystemInitializer.AddGameMenu("menu_settlement_taken", "", new OnInitDelegate(this.menu_settlement_taken_on_init));
      gameSystemInitializer.AddGameMenu("menu_settlement_taken_player_leader", "{=!}{SETTLEMENT_TAKEN_TEXT}", new OnInitDelegate(this.menu_settlement_taken_player_leader_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_settlement_taken_player_leader", "menu_settlement_taken_devastate", "{=v0mZi3Zd}Devastate {DEVASTATE_INFLUENCE_COST_TEXT}", new GameMenuOption.OnConditionDelegate(this.menu_settlement_taken_devastate_on_condition), new GameMenuOption.OnConsequenceDelegate(this.menu_settlement_taken_devastate_on_consequence));
      gameSystemInitializer.AddGameMenuOption("menu_settlement_taken_player_leader", "menu_settlement_taken_pillage", "{=tZCLAkGZ}Pillage", new GameMenuOption.OnConditionDelegate(this.menu_settlement_taken_pillage_on_condition), new GameMenuOption.OnConsequenceDelegate(this.menu_settlement_taken_pillage_on_consequence));
      gameSystemInitializer.AddGameMenuOption("menu_settlement_taken_player_leader", "menu_settlement_taken_show_mercy", "{=EuwtMZGZ}Show Mercy {SHOW_MERCY_INFLUENCE_COST_TEXT}", new GameMenuOption.OnConditionDelegate(this.menu_settlement_taken_show_mercy_on_condition), new GameMenuOption.OnConsequenceDelegate(this.menu_settlement_taken_show_mercy_on_consequence));
      gameSystemInitializer.AddGameMenu("menu_settlement_taken_player_army_member", "{=!}{LEADER_DECISION_TEXT}", new OnInitDelegate(this.menu_settlement_taken_player_army_member_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_settlement_taken_player_army_member", "menu_settlement_taken_continue", "{=veWOovVv}Continue...", new GameMenuOption.OnConditionDelegate(this.continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.menu_settlement_taken_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("menu_settlement_taken_player_participant", "{=!}{PLAYER_PARTICIPANT_TEXT}", new OnInitDelegate(this.menu_settlement_taken_player_participant_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_settlement_taken_player_participant", "menu_settlement_taken_continue", "{=veWOovVv}Continue...", new GameMenuOption.OnConditionDelegate(this.continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.menu_settlement_taken_continue_on_consequence));
      gameSystemInitializer.AddGameMenu("siege_aftermath_contextual_summary", "{=!}{START_OF_EXPLANATION}{newline} {newline}{CONTEXTUAL_SUMMARY_TEXT}{newline} {newline}{END_OF_EXPLANATION}", new OnInitDelegate(this.siege_aftermath_contextual_summary_on_init));
      gameSystemInitializer.AddGameMenuOption("siege_aftermath_contextual_summary", "menu_settlement_taken_continue", "{=veWOovVv}Continue...", new GameMenuOption.OnConditionDelegate(this.continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.menu_settlement_taken_continue_on_consequence));
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      if (!mapEvent.IsSiegeAssault && !mapEvent.IsSiegeOutside || mapEvent.WinningSide != BattleSideEnum.Attacker || mapEvent.MapEventSettlement == null)
        return;
      this._siegeEventPartyContributions.Clear();
      foreach (MapEventParty mapEventParty in (List<MapEventParty>) mapEvent.PartiesOnSide(BattleSideEnum.Attacker))
      {
        float playerEarnedLootPercentage;
        mapEvent.GetBattleRewards(mapEventParty.Party, out float _, out float _, out float _, out float _, out playerEarnedLootPercentage);
        if (mapEventParty.Party.IsMobile && !this._siegeEventPartyContributions.ContainsKey(mapEventParty.Party.MobileParty))
          this._siegeEventPartyContributions.Add(mapEventParty.Party.MobileParty, playerEarnedLootPercentage);
      }
      if (mapEvent.AttackerSide.IsMainPartyAmongParties())
      {
        this._playerEncounterAftermathDamagedBuildings.Clear();
        this._wasPlayerArmyMember = false;
        this._besiegerParty = mapEvent.AttackerSide.LeaderParty.MobileParty;
        this._prevSettlementOwnerClan = mapEvent.MapEventSettlement.OwnerClan;
        if (this._besiegerParty == MobileParty.MainParty)
          return;
        if (this._besiegerParty.Army != null && this._besiegerParty.Army.Parties.Contains(MobileParty.MainParty))
          this._wasPlayerArmyMember = true;
        this._playerEncounterAftermath = this.DetermineAISiegeAftermath(this._besiegerParty, mapEvent.MapEventSettlement);
        SiegeAftermathAction.ApplyAftermath(this._besiegerParty, mapEvent.MapEventSettlement, this._playerEncounterAftermath, this._prevSettlementOwnerClan, this._siegeEventPartyContributions);
      }
      else if (mapEvent.MapEventSettlement.SiegeEvent != null)
      {
        MobileParty leaderParty = mapEvent.MapEventSettlement.SiegeEvent.BesiegerCamp.LeaderParty;
        SiegeAftermathAction.SiegeAftermath aiSiegeAftermath = this.DetermineAISiegeAftermath(leaderParty, mapEvent.MapEventSettlement);
        SiegeAftermathAction.ApplyAftermath(leaderParty, mapEvent.MapEventSettlement, aiSiegeAftermath, mapEvent.MapEventSettlement.OwnerClan, this._siegeEventPartyContributions);
      }
      else
        Debug.FailedAssert("Siege event is null in siege aftermath", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\SiegeAftermathCampaignBehavior.cs", nameof (OnMapEventEnded), 116);
    }

    private void OnSiegeAftermathApplied(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType,
      Clan previousSettlementOwner,
      Dictionary<MobileParty, float> partyContributions)
    {
      float aftermathInfluenceCost = this.GetSiegeAftermathInfluenceCost(attackerParty, settlement, aftermathType);
      if ((double) aftermathInfluenceCost > 0.0)
        ChangeClanInfluenceAction.Apply(attackerParty.ActualClan, -aftermathInfluenceCost);
      this._settlementProsperityCache = settlement.Town.Prosperity;
      settlement.Town.Prosperity += this.GetSiegeAftermathProsperityPenalty(attackerParty, settlement, aftermathType);
      if (aftermathType != SiegeAftermathAction.SiegeAftermath.ShowMercy)
      {
        int aftermathProjectsLoss = this.GetSiegeAftermathProjectsLoss(attackerParty, aftermathType);
        for (int index = 0; index < aftermathProjectsLoss; ++index)
          settlement.Town.Buildings.GetRandomElementWithPredicate<Building>((Func<Building, bool>) (x => !x.BuildingType.IsDefaultProject)).LevelDown();
        settlement.Town.Loyalty += this.GetSiegeAftermathLoyaltyPenalty(aftermathType);
        if (settlement.IsTown)
        {
          foreach (Hero notable in (List<Hero>) settlement.Notables)
            notable.AddPower(notable.Power * this.GetSiegeAftermathNotablePowerModifierForAftermath(aftermathType));
        }
        if (previousSettlementOwner.Leader == null)
        {
          Debug.Print(string.Format("{0}: {1} leader was null", (object) previousSettlementOwner.StringId, (object) previousSettlementOwner));
          Debug.FailedAssert(string.Format("{0}: {1} leader was null", (object) previousSettlementOwner.StringId, (object) previousSettlementOwner), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\SiegeAftermathCampaignBehavior.cs", nameof (OnSiegeAftermathApplied), 158);
        }
        if (attackerParty.LeaderHero != null)
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(attackerParty.LeaderHero, previousSettlementOwner.Leader, this.GetSiegeAftermathRelationPenaltyWithSettlementOwner(aftermathType));
      }
      float aftermathArmyGoldGain = (float) this.GetSiegeAftermathArmyGoldGain(attackerParty, settlement, aftermathType);
      foreach (KeyValuePair<MobileParty, float> partyContribution in partyContributions)
      {
        MobileParty key = partyContribution.Key;
        int aftermathPartyGoldGain = this.GetSiegeAftermathPartyGoldGain(aftermathArmyGoldGain, partyContribution.Value);
        if (key.LeaderHero != null)
          GiveGoldAction.ApplyForPartyToCharacter((PartyBase) null, key.LeaderHero, aftermathPartyGoldGain);
        else
          GiveGoldAction.ApplyForCharacterToParty((Hero) null, key.Party, aftermathPartyGoldGain);
        key.RecentEventsMorale += this.GetSiegeAftermathPartyMoraleBonus(attackerParty, settlement, aftermathType);
        if (attackerParty == MobileParty.MainParty && key != attackerParty && key.LeaderHero != null && aftermathType != SiegeAftermathAction.SiegeAftermath.Pillage && attackerParty.MapFaction.Culture != settlement.Culture)
        {
          int relationChangeWithLord = this.GetSiegeAftermathRelationChangeWithLord(key.LeaderHero, aftermathType);
          if (relationChangeWithLord != 0)
            ChangeRelationAction.ApplyPlayerRelation(key.LeaderHero, relationChangeWithLord);
        }
      }
      if (attackerParty != MobileParty.MainParty || aftermathType == SiegeAftermathAction.SiegeAftermath.Pillage)
        return;
      TraitLevelingHelper.OnSiegeAftermathApplied(settlement, aftermathType, new TraitObject[1]
      {
        DefaultTraits.Mercy
      });
    }

    private SiegeAftermathAction.SiegeAftermath DetermineSiegeAftermathOnEncounterLeaderDeath(
      MobileParty attackerParty,
      Settlement settlement)
    {
      return attackerParty.MapFaction.Culture != settlement.Culture ? SiegeAftermathAction.SiegeAftermath.Devastate : SiegeAftermathAction.SiegeAftermath.ShowMercy;
    }

    private bool IsMobilePartyLeaderAliveForSiegeAftermath(MobileParty attackerParty)
    {
      return attackerParty.LeaderHero != null && attackerParty.LeaderHero.IsAlive && attackerParty.LeaderHero.DeathMark != KillCharacterAction.KillCharacterActionDetail.DiedInBattle && attackerParty.LeaderHero.DeathMark != KillCharacterAction.KillCharacterActionDetail.WoundedInBattle;
    }

    private SiegeAftermathAction.SiegeAftermath DetermineAISiegeAftermath(
      MobileParty attackerParty,
      Settlement settlement)
    {
      if (!this.IsMobilePartyLeaderAliveForSiegeAftermath(attackerParty))
        return this.DetermineSiegeAftermathOnEncounterLeaderDeath(attackerParty, settlement);
      bool flag1 = false;
      bool flag2 = false;
      bool flag3 = false;
      float num1 = attackerParty.Army != null ? attackerParty.Army.Morale : attackerParty.Morale;
      if (attackerParty.MapFaction.Culture == settlement.Culture || (double) attackerParty.ActualClan.Influence > 2.0 * (double) this.GetSiegeAftermathInfluenceCost(attackerParty, settlement, SiegeAftermathAction.SiegeAftermath.ShowMercy) && (double) num1 > 60.0)
        flag1 = true;
      if (attackerParty.MapFaction.Culture != settlement.Culture)
        flag2 = true;
      if (attackerParty.MapFaction.Culture != settlement.Culture && (double) attackerParty.ActualClan.Influence > 2.0 * (double) this.GetSiegeAftermathInfluenceCost(attackerParty, settlement, SiegeAftermathAction.SiegeAftermath.Devastate) && (double) num1 < 90.0)
        flag3 = true;
      int traitLevel = attackerParty.LeaderHero.GetTraitLevel(DefaultTraits.Mercy);
      float num2;
      float num3;
      float num4;
      if (traitLevel > 0)
      {
        num2 = (float) (0.40000000596046448 + 0.20000000298023224 * (double) traitLevel);
        num3 = 1f - num2;
        num4 = 0.0f;
      }
      else if (traitLevel < 0)
      {
        num4 = (float) (0.40000000596046448 + 0.20000000298023224 * (double) MathF.Abs(traitLevel));
        num3 = 1f - num4;
        num2 = 0.0f;
      }
      else
      {
        num2 = 0.2f;
        num3 = 0.6f;
        num4 = 0.2f;
      }
      if (!flag1)
      {
        num3 += num2;
        num2 = 0.0f;
      }
      if (!flag3)
      {
        num3 += num4;
        num4 = 0.0f;
      }
      if (!flag2)
      {
        num2 += num3;
        num3 = 0.0f;
      }
      return MBRandom.ChooseWeighted<SiegeAftermathAction.SiegeAftermath>((IReadOnlyList<(SiegeAftermathAction.SiegeAftermath, float)>) new List<(SiegeAftermathAction.SiegeAftermath, float)>()
      {
        (SiegeAftermathAction.SiegeAftermath.ShowMercy, num2),
        (SiegeAftermathAction.SiegeAftermath.Pillage, num3),
        (SiegeAftermathAction.SiegeAftermath.Devastate, num4)
      });
    }

    private void OnBuildingLevelChanged(Town town, Building building, int level)
    {
      if (town.Settlement != PlayerEncounter.EncounterSettlement || level >= 0)
        return;
      if (!this._playerEncounterAftermathDamagedBuildings.ContainsKey(building))
        this._playerEncounterAftermathDamagedBuildings.Add(building, 0);
      this._playerEncounterAftermathDamagedBuildings[building] += -1;
    }

    private void HandlePlayerDeathDuringSiegeAftermath()
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      SiegeAftermathAction.SiegeAftermath encounterLeaderDeath = this.DetermineSiegeAftermathOnEncounterLeaderDeath(MobileParty.MainParty, currentSettlement);
      SiegeAftermathAction.ApplyAftermath(MobileParty.MainParty, currentSettlement, encounterLeaderDeath, this._prevSettlementOwnerClan, this._siegeEventPartyContributions);
      GameMenu.SwitchToMenu("siege_aftermath_contextual_summary");
    }

    private void menu_settlement_taken_on_init(MenuCallbackArgs args)
    {
      MobileParty besiegerParty = this._besiegerParty;
      if (besiegerParty == MobileParty.MainParty)
      {
        if (this.IsMobilePartyLeaderAliveForSiegeAftermath(besiegerParty))
          GameMenu.SwitchToMenu("menu_settlement_taken_player_leader");
        else
          this.HandlePlayerDeathDuringSiegeAftermath();
      }
      else if (this._wasPlayerArmyMember)
        GameMenu.SwitchToMenu("menu_settlement_taken_player_army_member");
      else
        GameMenu.SwitchToMenu("menu_settlement_taken_player_participant");
    }

    private void menu_settlement_taken_player_leader_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.GameMenu.GetText().SetTextVariable("SETTLEMENT_TAKEN_TEXT", new TextObject("{=QvyFYn1b}The defenders are routed, and it's clear that {TOWN_NAME} is yours. It's time for you to determine the fate of the {?IS_CITY}city{?}fortress{\\?}."));
      MBTextManager.SetTextVariable("TOWN_NAME", Settlement.CurrentSettlement.Name, false);
      MBTextManager.SetTextVariable("IS_CITY", Settlement.CurrentSettlement.IsTown ? 1 : 0);
      args.MenuContext.SetBackgroundMeshName("encounter_win");
    }

    private void menu_settlement_taken_player_army_member_on_init(MenuCallbackArgs args)
    {
      bool flag = this._besiegerParty.Army != null && this._besiegerParty.Army.Parties.Contains(MobileParty.MainParty);
      TextObject textObject = TextObject.Empty;
      if (this._playerEncounterAftermath == SiegeAftermathAction.SiegeAftermath.Devastate)
      {
        if (flag)
          textObject = new TextObject("{=peHCARhM}{DEFAULT_TEXT}{ARMY_LEADER.LINK} has ordered that {SETTLEMENT} to be laid waste. {?ARMY_LEADER.GENDER}Her{?}His{\\?} troops sweep through the {?IS_CITY}city{?}fortress{\\?} taking whatever loot they like and setting fire to the rest.");
        else if (this._wasPlayerArmyMember)
          textObject = new TextObject("{=qeRRWMfU}{DEFAULT_TEXT}{ARMY_LEADER.LINK} fell during the fighting. {?ARMY_LEADER.GENDER}Her{?}His{\\?} vengeful troops sweep through the {?IS_CITY}city{?}fortress{\\?} taking whatever loot they like and setting fire to the rest.");
        textObject.SetTextVariable("IS_CITY", Settlement.CurrentSettlement.IsTown ? 1 : 0);
      }
      else if (this._playerEncounterAftermath == SiegeAftermathAction.SiegeAftermath.Pillage)
      {
        if (flag)
          textObject = new TextObject("{=BXw5MwX7}{DEFAULT_TEXT}{ARMY_LEADER.LINK} grants {?ARMY_LEADER.GENDER}her{?}his{\\?} men their customary right of pillage after a successful siege. {?ARMY_LEADER.GENDER}She{?}He{\\?} tells them they may take property but must spare the townsfolk's lives.");
        else if (this._wasPlayerArmyMember)
        {
          Debug.FailedAssert("_wasPlayerArmyMember", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\SiegeAftermathCampaignBehavior.cs", nameof (menu_settlement_taken_player_army_member_on_init), 401);
          textObject = new TextObject("{=99v8GTTe}{DEFAULT_TEXT}Before {?ARMY_LEADER.GENDER}she{?}he{\\?} fell, {ARMY_LEADER.LINK} granted {?ARMY_LEADER.GENDER}her{?}his{\\?} men their customary right of pillage after a successful siege. They may take property but must spare the townsfolk's lives.");
        }
      }
      else if (this._besiegerParty.MapFaction.Culture == Settlement.CurrentSettlement.Culture)
      {
        if (flag)
        {
          textObject = new TextObject("{=Wmq47pvL}{DEFAULT_TEXT}{ARMY_LEADER.LINK} had to show mercy to the people of {SETTLEMENT} who were originally descendants of {FACTION}.");
          textObject.SetTextVariable("FACTION", Settlement.CurrentSettlement.Culture.GetName());
        }
        else if (this._wasPlayerArmyMember)
        {
          textObject = new TextObject("{=F5Xc0m5O}{DEFAULT_TEXT}{ARMY_LEADER.LINK} fell during the fighting. {?ARMY_LEADER.GENDER}Her{?}His{\\?} troops, reluctant to harm their {CULTURE_ADJ} kinfolk, forego their traditional right of pillage.");
          textObject.SetTextVariable("CULTURE_ADJ", FactionHelper.GetAdjectiveForFaction(this._besiegerParty.MapFaction));
        }
      }
      else if (flag)
        textObject = new TextObject("{=Bp0ZQbfp}{DEFAULT_TEXT}{ARMY_LEADER.LINK} has decided to show mercy to the people of {SETTLEMENT}. You can hear disgruntled murmuring among the troops, who have been denied their customary right of pillage.");
      else if (this._wasPlayerArmyMember)
      {
        Debug.FailedAssert("_wasPlayerArmyMember", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\SiegeAftermathCampaignBehavior.cs", nameof (menu_settlement_taken_player_army_member_on_init), 428);
        textObject = new TextObject("{=ULtzLvXi}{DEFAULT_TEXT}Before {?ARMY_LEADER.GENDER}she{?}he{\\?} fell, {ARMY_LEADER.LINK} gave orders that mercy should be shown to the people of {SETTLEMENT}.");
      }
      TextObject text = args.MenuContext.GameMenu.GetText();
      TextObject variable = new TextObject("{=hvQUqRSb}{SETTLEMENT} has been taken by an army of which you are a member. ");
      variable.SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.GetName());
      textObject.SetTextVariable("DEFAULT_TEXT", variable);
      StringHelpers.SetCharacterProperties("ARMY_LEADER", this._besiegerParty.LordPartyComponent.Owner.CharacterObject, textObject);
      textObject.SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.GetName());
      text.SetTextVariable("LEADER_DECISION_TEXT", textObject);
      text.SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.GetName());
      args.MenuContext.SetBackgroundMeshName("encounter_win");
    }

    private void menu_settlement_taken_player_participant_on_init(MenuCallbackArgs args)
    {
      TextObject textObject = new TextObject("{=C2KeQd0a}{ENCOUNTER_LEADER.LINK} thanks you for helping in the siege of {SETTLEMENT}. You were able to loot your fallen foes, but you do not participate in the sack of the {?IS_TOWN}town{?}castle{\\?} as you are not part of the army that took it.");
      StringHelpers.SetCharacterProperties("ENCOUNTER_LEADER", this._besiegerParty.LordPartyComponent.Owner.CharacterObject, textObject);
      textObject.SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.GetName());
      textObject.SetTextVariable("IS_TOWN", Settlement.CurrentSettlement.IsTown ? 1 : 0);
      args.MenuContext.GameMenu.GetText().SetTextVariable("PLAYER_PARTICIPANT_TEXT", textObject);
      args.MenuContext.SetBackgroundMeshName("encounter_win");
    }

    private void menu_settlement_taken_continue_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.ExitToLast();
    }

    private bool menu_settlement_taken_devastate_on_condition(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MobileParty attackerParty = this._besiegerParty;
      Army army = attackerParty.Army;
      MBList<MobileParty> mbList = (army != null ? army.Parties.WhereQ<MobileParty>((Func<MobileParty, bool>) (t => t != attackerParty && t.LeaderHero != null && t.LeaderHero.GetTraitLevel(DefaultTraits.Mercy) > 0)).ToMBList<MobileParty>() : (MBList<MobileParty>) null) ?? new MBList<MobileParty>();
      int aftermathInfluenceCost = (int) this.GetSiegeAftermathInfluenceCost(attackerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.Devastate);
      bool flag1 = (double) aftermathInfluenceCost > 0.0;
      bool flag2 = currentSettlement.Culture == attackerParty.MapFaction.Culture;
      TextObject textObject1 = new TextObject("{=FPPb7ur6}({INFLUENCE_AMOUNT}{INFLUENCE_ICON})");
      textObject1.SetTextVariable("INFLUENCE_AMOUNT", aftermathInfluenceCost);
      textObject1.SetTextVariable("INFLUENCE_ICON", "{=!}<img src=\"General\\Icons\\Influence@2x\" extend=\"7\">");
      MBTextManager.SetTextVariable("DEVASTATE_INFLUENCE_COST_TEXT", flag1 ? textObject1 : TextObject.Empty, false);
      TextObject textObject2 = new TextObject("{=0FxtNPvV}You cannot devastate a settlement that has your faction culture.{newline}");
      TextObject parent = new TextObject("{=Q9RXyDBz}{newline} • {HERO.NAME} must use {INFLUENCE_AMOUNT} influence to convince {MERCIFUL_LORD_COUNT} merciful leaders of this action:{newline} {MERCIFUL_LORDS}");
      StringHelpers.SetCharacterProperties("HERO", attackerParty.LeaderHero?.CharacterObject, parent);
      parent.SetTextVariable("INFLUENCE_AMOUNT", aftermathInfluenceCost);
      parent.SetTextVariable("MERCIFUL_LORD_COUNT", mbList.Count);
      List<TextObject> textObjects = new List<TextObject>();
      foreach (MobileParty mobileParty in (List<MobileParty>) mbList)
        textObjects.Add(mobileParty.LeaderHero.Name);
      parent.SetTextVariable("MERCIFUL_LORDS", GameTexts.GameTextHelper.MergeTextObjectsWithSymbol(textObjects, new TextObject("{=!}{newline}")));
      parent.SetTextVariable("INFLUENCE_AMOUNT", aftermathInfluenceCost);
      TextObject textObject3 = new TextObject("{=!}{CULTURE_CONDITION_TEXT}{STATIC_CONDITIONS_TEXT}{INFLUENCE_CONDITION_TEXT}");
      textObject3.SetTextVariable("CULTURE_CONDITION_TEXT", flag2 ? textObject2 : TextObject.Empty);
      textObject3.SetTextVariable("STATIC_CONDITIONS_TEXT", this.GetSiegeAftermathConsequencesText(attackerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.Devastate, true));
      textObject3.SetTextVariable("INFLUENCE_CONDITION_TEXT", flag1 ? parent : TextObject.Empty);
      args.IsEnabled = this.IsSiegeAftermathPossible(attackerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.Devastate);
      args.Tooltip = textObject3;
      args.optionLeaveType = GameMenuOption.LeaveType.Devastate;
      return true;
    }

    private void menu_settlement_taken_devastate_on_consequence(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MobileParty besiegerParty = this._besiegerParty;
      this._playerEncounterAftermath = SiegeAftermathAction.SiegeAftermath.Devastate;
      Settlement settlement = currentSettlement;
      int encounterAftermath = (int) this._playerEncounterAftermath;
      Clan settlementOwnerClan = this._prevSettlementOwnerClan;
      Dictionary<MobileParty, float> partyContributions = this._siegeEventPartyContributions;
      SiegeAftermathAction.ApplyAftermath(besiegerParty, settlement, (SiegeAftermathAction.SiegeAftermath) encounterAftermath, settlementOwnerClan, partyContributions);
      GameMenu.SwitchToMenu("siege_aftermath_contextual_summary");
    }

    private bool continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private bool menu_settlement_taken_pillage_on_condition(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MobileParty besiegerParty = this._besiegerParty;
      bool flag = currentSettlement.Culture == besiegerParty.MapFaction.Culture;
      TextObject textObject1 = new TextObject("{=!}{CULTURE_CONDITION_TEXT}{STATIC_CONDITIONS_TEXT}");
      TextObject textObject2 = new TextObject("{=uwmHjy7z}You cannot pillage a settlement that has your faction culture.{newline}");
      textObject1.SetTextVariable("CULTURE_CONDITION_TEXT", flag ? textObject2 : TextObject.Empty);
      textObject1.SetTextVariable("STATIC_CONDITIONS_TEXT", this.GetSiegeAftermathConsequencesText(besiegerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.Pillage, true));
      args.IsEnabled = this.IsSiegeAftermathPossible(besiegerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.Pillage);
      args.Tooltip = textObject1;
      args.optionLeaveType = GameMenuOption.LeaveType.Pillage;
      return true;
    }

    private void menu_settlement_taken_pillage_on_consequence(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MobileParty besiegerParty = this._besiegerParty;
      this._playerEncounterAftermath = SiegeAftermathAction.SiegeAftermath.Pillage;
      Settlement settlement = currentSettlement;
      int encounterAftermath = (int) this._playerEncounterAftermath;
      Clan settlementOwnerClan = this._prevSettlementOwnerClan;
      Dictionary<MobileParty, float> partyContributions = this._siegeEventPartyContributions;
      SiegeAftermathAction.ApplyAftermath(besiegerParty, settlement, (SiegeAftermathAction.SiegeAftermath) encounterAftermath, settlementOwnerClan, partyContributions);
      GameMenu.SwitchToMenu("siege_aftermath_contextual_summary");
    }

    private bool menu_settlement_taken_show_mercy_on_condition(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MobileParty attackerParty = this._besiegerParty;
      Army army = attackerParty.Army;
      MBList<MobileParty> mbList = (army != null ? army.Parties.WhereQ<MobileParty>((Func<MobileParty, bool>) (t => t != attackerParty && t.LeaderHero != null && t.LeaderHero.GetTraitLevel(DefaultTraits.Mercy) < 0)).ToMBList<MobileParty>() : (MBList<MobileParty>) null) ?? new MBList<MobileParty>();
      int aftermathInfluenceCost = (int) this.GetSiegeAftermathInfluenceCost(attackerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.ShowMercy);
      bool flag1 = currentSettlement.Culture == attackerParty.MapFaction.Culture;
      bool flag2 = (double) aftermathInfluenceCost > 0.0;
      TextObject textObject1 = new TextObject("{=FPPb7ur6}({INFLUENCE_AMOUNT}{INFLUENCE_ICON})");
      textObject1.SetTextVariable("INFLUENCE_AMOUNT", aftermathInfluenceCost);
      textObject1.SetTextVariable("INFLUENCE_ICON", "{=!}<img src=\"General\\Icons\\Influence@2x\" extend=\"7\">");
      MBTextManager.SetTextVariable("SHOW_MERCY_INFLUENCE_COST_TEXT", flag2 ? textObject1 : TextObject.Empty, false);
      TextObject textObject2 = new TextObject("{=aXFYyBEQ}Showing mercy to a settlement that shares your faction's culture requires no influence.{newline}");
      TextObject parent = new TextObject("{=bn5fpYx3}{newline} • {HERO.NAME} must use {INFLUENCE_AMOUNT} influence to convince {CRUEL_LORD_COUNT} non-merciful leaders of this action:{newline} {CRUEL_LORDS}");
      StringHelpers.SetCharacterProperties("HERO", attackerParty.LeaderHero?.CharacterObject, parent);
      parent.SetTextVariable("INFLUENCE_AMOUNT", aftermathInfluenceCost);
      parent.SetTextVariable("CRUEL_LORD_COUNT", mbList.Count);
      List<TextObject> textObjects = new List<TextObject>();
      foreach (MobileParty mobileParty in (List<MobileParty>) mbList)
        textObjects.Add(mobileParty.LeaderHero.Name);
      parent.SetTextVariable("CRUEL_LORDS", GameTexts.GameTextHelper.MergeTextObjectsWithSymbol(textObjects, new TextObject("{=!}{newline}")));
      TextObject textObject3 = new TextObject("{=!}{CULTURE_CONDITION_TEXT}{STATIC_CONDITIONS_TEXT}{INFLUENCE_CONDITION_TEXT}");
      textObject3.SetTextVariable("CULTURE_CONDITION_TEXT", flag1 ? textObject2 : TextObject.Empty);
      textObject3.SetTextVariable("STATIC_CONDITIONS_TEXT", this.GetSiegeAftermathConsequencesText(attackerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.ShowMercy, true));
      textObject3.SetTextVariable("INFLUENCE_CONDITION_TEXT", flag2 ? parent : TextObject.Empty);
      args.IsEnabled = this.IsSiegeAftermathPossible(attackerParty, currentSettlement, SiegeAftermathAction.SiegeAftermath.ShowMercy);
      args.Tooltip = textObject3;
      args.optionLeaveType = GameMenuOption.LeaveType.ShowMercy;
      return true;
    }

    private void menu_settlement_taken_show_mercy_on_consequence(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MobileParty besiegerParty = this._besiegerParty;
      this._playerEncounterAftermath = SiegeAftermathAction.SiegeAftermath.ShowMercy;
      Settlement settlement = currentSettlement;
      int encounterAftermath = (int) this._playerEncounterAftermath;
      Clan settlementOwnerClan = this._prevSettlementOwnerClan;
      Dictionary<MobileParty, float> partyContributions = this._siegeEventPartyContributions;
      SiegeAftermathAction.ApplyAftermath(besiegerParty, settlement, (SiegeAftermathAction.SiegeAftermath) encounterAftermath, settlementOwnerClan, partyContributions);
      GameMenu.SwitchToMenu("siege_aftermath_contextual_summary");
    }

    private TextObject GetSiegeAftermathConsequencesText(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermath,
      bool isTooltip)
    {
      TextObject consequencesText = new TextObject("{=!}{PROSPERITY_TEXT}{TOWN_PROJECTS_TEXT}{LOYALTY_TEXT}{NOTABLE_POWER_TEXT}{PARTY_MORALE_TEXT}{ARMY_GOLD_TEXT}{PARTY_GOLD_TEXT}{OWNER_RELATION_TEXT}");
      TextObject variable1 = new TextObject("{=ERh2DVEa} • Prosperity Lost: {PROSPERITY_LOST_AMOUNT}");
      variable1.SetTextVariable("PROSPERITY_LOST_AMOUNT", -1 * (int) this.GetSiegeAftermathProsperityPenalty(attackerParty, settlement, aftermath));
      consequencesText.SetTextVariable("PROSPERITY_TEXT", variable1);
      TextObject variable2 = new TextObject("{=HtHcEv7N}{newline} • Party Morale Change : {MORALE_CHANGE}");
      variable2.SetTextVariable("MORALE_CHANGE", this.GetSiegeAftermathPartyMoraleBonus(attackerParty, settlement, aftermath));
      consequencesText.SetTextVariable("PARTY_MORALE_TEXT", variable2);
      if (aftermath != SiegeAftermathAction.SiegeAftermath.ShowMercy)
      {
        TextObject empty = TextObject.Empty;
        if (isTooltip)
        {
          TextObject variable3 = new TextObject("{=tF1G5YLe}{newline} • Building Levels Reduced: {LEVELS_LOST}");
          variable3.SetTextVariable("LEVELS_LOST", this.GetSiegeAftermathProjectsLoss(attackerParty, aftermath));
          consequencesText.SetTextVariable("TOWN_PROJECTS_TEXT", variable3);
        }
        else
        {
          TextObject textObject1 = new TextObject("{=WDRTZ8se}{newline} • Town Projects Razed: {LEVELS_LOST}{PROJECTS_DESTROYED}");
          TextObject textObject2 = new TextObject("{=W1KJEvit}{newline}    Levels Lost: {BUILDINGS_LOST_LEVEL}");
          TextObject textObject3 = new TextObject("{=n1bQHmCk}{newline}    Projects Destroyed: {BUILDINGS_DESTROYED}");
          TextObject textObject4 = new TextObject("{=HDNedIxl}{newline}        {BUILDING_NAME}: {LEVEL_LOST}");
          TextObject textObject5 = new TextObject("{=jZmBbA5M}{newline}        {BUILDING_NAME}");
          List<KeyValuePair<Building, int>> source1 = new List<KeyValuePair<Building, int>>(this._playerEncounterAftermathDamagedBuildings.Where<KeyValuePair<Building, int>>((Func<KeyValuePair<Building, int>, bool>) (t => t.Key.CurrentLevel > 0)));
          List<Building> source2 = new List<Building>(this._playerEncounterAftermathDamagedBuildings.Where<KeyValuePair<Building, int>>((Func<KeyValuePair<Building, int>, bool>) (t => t.Key.CurrentLevel <= 0)).Select<KeyValuePair<Building, int>, Building>((Func<KeyValuePair<Building, int>, Building>) (t => t.Key)));
          string variable4 = "";
          foreach (KeyValuePair<Building, int> keyValuePair in source1)
          {
            TextObject textObject6 = textObject4.CopyTextObject();
            textObject6.SetTextVariable("BUILDING_NAME", keyValuePair.Key.Name);
            textObject6.SetTextVariable("LEVEL_LOST", keyValuePair.Value);
            variable4 += textObject6.ToString();
          }
          string variable5 = "";
          foreach (Building building in source2)
          {
            TextObject textObject7 = textObject5.CopyTextObject();
            textObject7.SetTextVariable("BUILDING_NAME", building.Name);
            variable5 += textObject7.ToString();
          }
          textObject2.SetTextVariable("BUILDINGS_LOST_LEVEL", variable4);
          textObject3.SetTextVariable("BUILDINGS_DESTROYED", variable5);
          textObject1.SetTextVariable("LEVELS_LOST", !source1.IsEmpty<KeyValuePair<Building, int>>() ? textObject2.ToString() : "");
          textObject1.SetTextVariable("PROJECTS_DESTROYED", !source2.IsEmpty<Building>() ? textObject3.ToString() : "");
          consequencesText.SetTextVariable("TOWN_PROJECTS_TEXT", !source2.IsEmpty<Building>() || !source1.IsEmpty<KeyValuePair<Building, int>>() ? textObject1.ToString() : "");
        }
        TextObject variable6 = new TextObject("{=EVxxKXmW}{newline} • Loyalty in {SETTLEMENT} : {LOYALTY_LOST_AMOUNT}");
        variable6.SetTextVariable("LOYALTY_LOST_AMOUNT", this.GetSiegeAftermathLoyaltyPenalty(aftermath));
        variable6.SetTextVariable("SETTLEMENT", settlement.GetName());
        consequencesText.SetTextVariable("LOYALTY_TEXT", variable6);
        if (settlement.Notables.Count > 0)
        {
          TextObject variable7 = new TextObject("{=38dcXWzq}{newline} • Notable Powers: {NOTABLE_POWER_LOST_AMOUNT}%");
          variable7.SetTextVariable("NOTABLE_POWER_LOST_AMOUNT", this.GetSiegeAftermathNotablePowerModifierForAftermath(aftermath) * 100f);
          consequencesText.SetTextVariable("NOTABLE_POWER_TEXT", variable7);
        }
        TextObject textObject = new TextObject("{=RO3Zv0K4}{newline} • Relation with Settlement Owner : {OWNER.LINK} : {RELATION_CHANGE}");
        textObject.SetTextVariable("RELATION_CHANGE", this.GetSiegeAftermathRelationPenaltyWithSettlementOwner(aftermath));
        StringHelpers.SetCharacterProperties("OWNER", this._prevSettlementOwnerClan.Leader.CharacterObject, textObject);
        consequencesText.SetTextVariable("OWNER_RELATION_TEXT", textObject);
        int aftermathArmyGoldGain = this.GetSiegeAftermathArmyGoldGain(attackerParty, settlement, aftermath);
        TextObject variable8 = new TextObject("{=2wwAyZdL}{newline} • Army Gold Gain : {ARMY_GOLD_GAIN}");
        variable8.SetTextVariable("ARMY_GOLD_GAIN", aftermathArmyGoldGain);
        consequencesText.SetTextVariable("ARMY_GOLD_TEXT", variable8);
        TextObject variable9 = new TextObject("{=RmW8Wf83}{newline} • Party Gold Gain : {PARTY_GOLD_GAIN}");
        variable9.SetTextVariable("PARTY_GOLD_GAIN", this.GetSiegeAftermathPartyGoldGain((float) aftermathArmyGoldGain, this._siegeEventPartyContributions[attackerParty]));
        consequencesText.SetTextVariable("PARTY_GOLD_TEXT", variable9);
      }
      else
      {
        consequencesText.SetTextVariable("TOWN_PROJECTS_TEXT", "");
        consequencesText.SetTextVariable("LOYALTY_TEXT", "");
        consequencesText.SetTextVariable("NOTABLE_POWER_TEXT", "");
        consequencesText.SetTextVariable("OWNER_RELATION_TEXT", "");
        consequencesText.SetTextVariable("ARMY_GOLD_TEXT", "");
        consequencesText.SetTextVariable("PARTY_GOLD_TEXT", "");
      }
      return consequencesText;
    }

    private void siege_aftermath_contextual_summary_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      MobileParty besiegerParty = this._besiegerParty;
      if (this._playerEncounterAftermath == SiegeAftermathAction.SiegeAftermath.Devastate)
      {
        TextObject text = new TextObject("{=VFVqjZwY}Your troops sweep through the {?IS_CITY}city{?}fortress{\\?}, taking whatever loot they like and setting fire to the rest.");
        text.SetTextVariable("IS_CITY", Settlement.CurrentSettlement.IsTown ? 1 : 0);
        MBTextManager.SetTextVariable("START_OF_EXPLANATION", text, false);
      }
      else if (this._playerEncounterAftermath == SiegeAftermathAction.SiegeAftermath.Pillage)
        MBTextManager.SetTextVariable("START_OF_EXPLANATION", new TextObject("{=oJUxWEwp}You grant your men their customary right of pillage after a successful siege. You tell them they may take property but must spare the townsfolk's lives."), false);
      else if (currentSettlement.Culture != besiegerParty.MapFaction.Culture)
      {
        TextObject text = new TextObject("{=x2dvXNQ0}You have decided to show mercy to the people of {SETTLEMENT_NAME}.{newline}You can hear disgruntled murmuring among the troops, who have been denied their customary right of pillage.");
        text.SetTextVariable("SETTLEMENT_NAME", currentSettlement.Name);
        MBTextManager.SetTextVariable("START_OF_EXPLANATION", text, false);
      }
      else
      {
        TextObject text = new TextObject("{=bXN2fbcv}Your men treat the residents of {SETTLEMENT_NAME} as wayward subjects of the {SETTLEMENT_CULTURE_NAME} rather than foes, and treat them relatively well.");
        text.SetTextVariable("SETTLEMENT_NAME", currentSettlement.Name);
        text.SetTextVariable("SETTLEMENT_CULTURE_NAME", FactionHelper.GetFormalNameForFactionCulture(currentSettlement.Culture));
        MBTextManager.SetTextVariable("START_OF_EXPLANATION", text, false);
      }
      MBTextManager.SetTextVariable("CONTEXTUAL_SUMMARY_TEXT", this.GetSiegeAftermathConsequencesText(besiegerParty, currentSettlement, this._playerEncounterAftermath, false), false);
      TextObject text1 = new TextObject("{=I0ZG4tIj}{TOWN_NAME} has fallen to your troops. You may station a garrison here to defend it against enemies who may try to recapture it.");
      MBTextManager.SetTextVariable("TOWN_NAME", Settlement.CurrentSettlement.Name, false);
      MBTextManager.SetTextVariable("END_OF_EXPLANATION", text1, false);
      args.MenuContext.SetBackgroundMeshName("encounter_win");
    }

    private float GetSiegeAftermathProsperityPenalty(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      int num1 = attackerParty.MemberRoster.TotalHealthyCount;
      if (attackerParty.Army != null)
        num1 = attackerParty.Army.TotalHealthyMembers;
      float num2 = (float) (-1.0 * (((double) MathF.Log((float) ((double) num1 * 0.039999999105930328 + 2.0), 2f) * 2.5 + 2.5) * 0.0099999997764825821 * ((double) this._settlementProsperityCache < 0.0 ? (double) settlement.Town.Prosperity : (double) this._settlementProsperityCache)));
      float prosperityPenalty = num2;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          prosperityPenalty = 1.5f * num2;
          break;
        case SiegeAftermathAction.SiegeAftermath.ShowMercy:
          prosperityPenalty = 0.5f * num2;
          break;
      }
      return prosperityPenalty;
    }

    private int GetSiegeAftermathProjectsLoss(
      MobileParty attackerParty,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      int num1 = attackerParty.MemberRoster.TotalHealthyCount;
      if (attackerParty.Army != null)
        num1 = attackerParty.Army.TotalHealthyMembers;
      int num2 = MathF.Floor(MathF.Log((float) ((double) num1 * 0.019999999552965164 + 2.0), 2f));
      int aftermathProjectsLoss = 0;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          aftermathProjectsLoss = MathF.Ceiling(1.5f * (float) num2);
          break;
        case SiegeAftermathAction.SiegeAftermath.Pillage:
          aftermathProjectsLoss = num2;
          break;
      }
      return aftermathProjectsLoss;
    }

    private float GetSiegeAftermathLoyaltyPenalty(SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      float aftermathLoyaltyPenalty = 0.0f;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          aftermathLoyaltyPenalty = -30f;
          break;
        case SiegeAftermathAction.SiegeAftermath.Pillage:
          aftermathLoyaltyPenalty = -15f;
          break;
      }
      return aftermathLoyaltyPenalty;
    }

    private float GetSiegeAftermathNotablePowerModifierForAftermath(
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      float modifierForAftermath = 0.0f;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          modifierForAftermath = -0.5f;
          break;
        case SiegeAftermathAction.SiegeAftermath.Pillage:
          modifierForAftermath = -0.25f;
          break;
      }
      return modifierForAftermath;
    }

    private float GetSiegeAftermathPartyMoraleBonus(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      int partyMoraleBonus = 0;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          partyMoraleBonus = 20;
          break;
        case SiegeAftermathAction.SiegeAftermath.Pillage:
          partyMoraleBonus = 10;
          break;
        case SiegeAftermathAction.SiegeAftermath.ShowMercy:
          if (attackerParty.MapFaction.Culture != settlement.Culture)
          {
            partyMoraleBonus = -15;
            break;
          }
          break;
      }
      return (float) partyMoraleBonus;
    }

    private int GetSiegeAftermathArmyGoldGain(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      float num = -1f * this.GetSiegeAftermathProsperityPenalty(attackerParty, settlement, aftermathType);
      float f = 0.0f;
      if (aftermathType == SiegeAftermathAction.SiegeAftermath.Devastate || aftermathType == SiegeAftermathAction.SiegeAftermath.Pillage)
        f = num * 15f;
      return MathF.Floor(f);
    }

    private int GetSiegeAftermathPartyGoldGain(
      float totalArmyGoldGain,
      float partyContributionPercentage)
    {
      return MathF.Floor((float) ((double) totalArmyGoldGain * (double) partyContributionPercentage / 100.0));
    }

    private int GetSiegeAftermathRelationChangeWithLord(
      Hero hero,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      if (hero.GetTraitLevel(DefaultTraits.Mercy) > 0)
        return this.GetSiegeAftermathRelationChangeWithMercifulLord(aftermathType);
      return hero.GetTraitLevel(DefaultTraits.Mercy) < 0 ? -1 * this.GetSiegeAftermathRelationChangeWithMercifulLord(aftermathType) : 0;
    }

    private int GetSiegeAftermathRelationChangeWithMercifulLord(
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      int withMercifulLord = 0;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          withMercifulLord = -10;
          break;
        case SiegeAftermathAction.SiegeAftermath.ShowMercy:
          withMercifulLord = 10;
          break;
      }
      return withMercifulLord;
    }

    private int GetSiegeAftermathRelationPenaltyWithSettlementOwner(
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      int withSettlementOwner = 0;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          withSettlementOwner = -30;
          break;
        case SiegeAftermathAction.SiegeAftermath.Pillage:
          withSettlementOwner = -15;
          break;
      }
      return withSettlementOwner;
    }

    private float GetSiegeAftermathInfluenceCost(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      float aftermathInfluenceCost = 0.0f;
      if (attackerParty.Army != null && aftermathType != SiegeAftermathAction.SiegeAftermath.Pillage)
      {
        int num1 = attackerParty.Army.Parties.Count<MobileParty>((Func<MobileParty, bool>) (t => t != attackerParty && t.LeaderHero != null && t.LeaderHero.GetTraitLevel(DefaultTraits.Mercy) > 0));
        int num2 = attackerParty.Army.Parties.Count<MobileParty>((Func<MobileParty, bool>) (t => t != attackerParty && t.LeaderHero != null && t.LeaderHero.GetTraitLevel(DefaultTraits.Mercy) < 0));
        if (aftermathType == SiegeAftermathAction.SiegeAftermath.Devastate)
          aftermathInfluenceCost = settlement.Town.Prosperity / 400f * (float) num1;
        else if (aftermathType == SiegeAftermathAction.SiegeAftermath.ShowMercy && attackerParty.MapFaction.Culture != settlement.Culture)
          aftermathInfluenceCost = settlement.Town.Prosperity / 400f * (float) num2;
      }
      return aftermathInfluenceCost;
    }

    private bool IsSiegeAftermathPossible(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      float aftermathInfluenceCost = this.GetSiegeAftermathInfluenceCost(attackerParty, settlement, aftermathType);
      bool flag1 = (double) attackerParty.ActualClan.Influence >= (double) aftermathInfluenceCost;
      bool flag2 = settlement.Culture == attackerParty.MapFaction.Culture;
      bool flag3;
      switch (aftermathType)
      {
        case SiegeAftermathAction.SiegeAftermath.Devastate:
          flag3 = flag1 && !flag2;
          break;
        case SiegeAftermathAction.SiegeAftermath.Pillage:
          flag3 = !flag2;
          break;
        default:
          flag3 = flag1 | flag2;
          break;
      }
      return flag3;
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (!settlement.IsFortification || detail != ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.BySiege || capturerHero == null || settlement.OwnerClan == null || settlement.OwnerClan == Clan.PlayerClan || oldOwner.IsDead)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(oldOwner, capturerHero, -10, capturerHero == Hero.MainHero);
      if (capturerHero.MapFaction.Leader == capturerHero || settlement.OwnerClan.Leader == capturerHero.MapFaction.Leader)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(oldOwner, capturerHero.MapFaction.Leader, -6, capturerHero.MapFaction.Leader == Hero.MainHero);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<MobileParty>("_besiegerParty", ref this._besiegerParty);
      dataStore.SyncData<Clan>("_prevSettlementOwnerClan", ref this._prevSettlementOwnerClan);
      dataStore.SyncData<SiegeAftermathAction.SiegeAftermath>("_playerEncounterAftermath", ref this._playerEncounterAftermath);
      dataStore.SyncData<Dictionary<MobileParty, float>>("_siegeEventPartyContributions", ref this._siegeEventPartyContributions);
      dataStore.SyncData<bool>("_wasPlayerArmyMember", ref this._wasPlayerArmyMember);
      dataStore.SyncData<Dictionary<Building, int>>("_playerEncounterAftermathDamagedBuildings", ref this._playerEncounterAftermathDamagedBuildings);
    }
  }
}
