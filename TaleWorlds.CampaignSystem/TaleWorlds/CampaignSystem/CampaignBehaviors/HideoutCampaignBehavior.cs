// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.HideoutCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class HideoutCampaignBehavior : CampaignBehaviorBase
  {
    private const int MaxDistanceSquaredBetweenHideoutAndBoundVillage = 1600;
    private const int HideoutClearRelationEffect = 2;
    private readonly int CanAttackHideoutStart = 23;
    private readonly int CanAttackHideoutEnd = 2;
    private float _hideoutWaitProgressHours;
    private float _hideoutWaitTargetHours;

    public void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
    }

    public void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.HourlyTickSettlement));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.OnHideoutSpottedEvent.AddNonSerializedListener((object) this, new Action<PartyBase, PartyBase>(this.OnHideoutSpotted));
    }

    private void OnHideoutSpotted(PartyBase party, PartyBase hideout)
    {
      SkillLevelingManager.OnHideoutSpotted(party.MobileParty, hideout);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<float>("_hideoutWaitProgressHours", ref this._hideoutWaitProgressHours);
      dataStore.SyncData<float>("_hideoutWaitTargetHours", ref this._hideoutWaitTargetHours);
    }

    public void HourlyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsHideout || !settlement.Hideout.IsInfested || settlement.Hideout.IsSpotted)
        return;
      float spottingDistance = Campaign.Current.Models.MapVisibilityModel.GetHideoutSpottingDistance();
      float num = (float) (1.0 - (double) MobileParty.MainParty.Position2D.DistanceSquared(settlement.Position2D) / ((double) spottingDistance * (double) spottingDistance));
      if ((double) num <= 0.0 || settlement.Parties.Count <= 0 || (double) MBRandom.RandomFloat >= (double) num || settlement.Hideout.IsSpotted)
        return;
      settlement.Hideout.IsSpotted = true;
      settlement.IsVisible = true;
      CampaignEventDispatcher.Instance.OnHideoutSpotted(MobileParty.MainParty.Party, settlement.Party);
    }

    protected void AddGameMenus(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddGameMenu("hideout_place", "{=!}{HIDEOUT_TEXT}", new OnInitDelegate(this.game_menu_hideout_place_on_init));
      campaignGameStarter.AddGameMenuOption("hideout_place", "wait", "{=4Sb0d8FY}Wait until nightfall to attack", new GameMenuOption.OnConditionDelegate(this.game_menu_wait_until_nightfall_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_wait_until_nightfall_on_consequence));
      campaignGameStarter.AddGameMenuOption("hideout_place", "attack", "{=zxMOqlhs}Attack", new GameMenuOption.OnConditionDelegate(this.game_menu_attack_hideout_parties_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_attack_on_consequence));
      campaignGameStarter.AddGameMenuOption("hideout_place", "leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_hideout_leave_on_consequence), true);
      campaignGameStarter.AddWaitGameMenu("hideout_wait", "{=VLLAOXve}Waiting until nightfall to ambush", (OnInitDelegate) null, new TaleWorlds.CampaignSystem.GameMenus.OnConditionDelegate(this.hideout_wait_menu_on_condition), new TaleWorlds.CampaignSystem.GameMenus.OnConsequenceDelegate(this.hideout_wait_menu_on_consequence), new OnTickDelegate(this.hideout_wait_menu_on_tick), GameMenu.MenuAndOptionType.WaitMenuShowOnlyProgressOption, targetWaitHours: this._hideoutWaitTargetHours);
      campaignGameStarter.AddGameMenuOption("hideout_wait", "leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_hideout_leave_on_consequence), true);
      campaignGameStarter.AddGameMenu("hideout_after_wait", "{=!}{HIDEOUT_TEXT}", new OnInitDelegate(this.hideout_after_wait_menu_on_init));
      campaignGameStarter.AddGameMenuOption("hideout_after_wait", "attack", "{=zxMOqlhs}Attack", new GameMenuOption.OnConditionDelegate(this.game_menu_attack_hideout_parties_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_encounter_attack_on_consequence));
      campaignGameStarter.AddGameMenuOption("hideout_after_wait", "leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_hideout_leave_on_consequence), true);
      campaignGameStarter.AddGameMenu("hideout_after_defeated_and_saved", "{=1zLZf5rw}The rest of your men rushed to your help, dragging you out to safety and driving the bandits back into hiding.", new OnInitDelegate(this.game_menu_hideout_after_defeated_and_saved_on_init));
      campaignGameStarter.AddGameMenuOption("hideout_after_defeated_and_saved", "leave", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_hideout_leave_on_consequence), true);
    }

    private bool IsHideoutAttackableNow()
    {
      float currentHourInDay = CampaignTime.Now.CurrentHourInDay;
      if (this.CanAttackHideoutStart > this.CanAttackHideoutEnd && ((double) currentHourInDay >= (double) this.CanAttackHideoutStart || (double) currentHourInDay <= (double) this.CanAttackHideoutEnd))
        return true;
      return this.CanAttackHideoutStart < this.CanAttackHideoutEnd && (double) currentHourInDay >= (double) this.CanAttackHideoutStart && (double) currentHourInDay <= (double) this.CanAttackHideoutEnd;
    }

    public bool hideout_wait_menu_on_condition(MenuCallbackArgs args) => true;

    public void hideout_wait_menu_on_tick(MenuCallbackArgs args, CampaignTime campaignTime)
    {
      this._hideoutWaitProgressHours += (float) campaignTime.ToHours;
      if (this._hideoutWaitTargetHours.ApproximatelyEqualsTo(0.0f))
        this.CalculateHideoutAttackTime();
      args.MenuContext.GameMenu.SetProgressOfWaitingInMenu(this._hideoutWaitProgressHours / this._hideoutWaitTargetHours);
    }

    public void hideout_wait_menu_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("hideout_after_wait");
    }

    private bool leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    [GameMenuInitializationHandler("hideout_wait")]
    [GameMenuInitializationHandler("hideout_after_wait")]
    [GameMenuInitializationHandler("hideout_after_defeated_and_saved")]
    private static void game_menu_hideout_ui_place_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      args.MenuContext.SetBackgroundMeshName(currentSettlement.Hideout.WaitMeshName);
    }

    [GameMenuInitializationHandler("hideout_place")]
    private static void game_menu_hideout_sound_place_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetPanelSound("event:/ui/panels/settlement_hideout");
      Settlement currentSettlement = Settlement.CurrentSettlement;
      args.MenuContext.SetBackgroundMeshName(currentSettlement.Hideout.WaitMeshName);
    }

    private void game_menu_hideout_after_defeated_and_saved_on_init(MenuCallbackArgs args)
    {
      if (!Settlement.CurrentSettlement.IsHideout || MobileParty.MainParty.CurrentSettlement != null)
        return;
      PlayerEncounter.EnterSettlement();
    }

    private void game_menu_hideout_place_on_init(MenuCallbackArgs args)
    {
      if (!Settlement.CurrentSettlement.IsHideout)
        return;
      this._hideoutWaitProgressHours = 0.0f;
      if (!this.IsHideoutAttackableNow())
        this.CalculateHideoutAttackTime();
      else
        this._hideoutWaitTargetHours = 0.0f;
      Settlement currentSettlement1 = Settlement.CurrentSettlement;
      int num1 = 0;
      foreach (MobileParty party in (List<MobileParty>) currentSettlement1.Parties)
        num1 += party.MemberRoster.TotalManCount - party.MemberRoster.TotalWounded;
      GameTexts.SetVariable("HIDEOUT_DESCRIPTION", "{=DOmb81Mu}(Undefined hideout type)");
      if (currentSettlement1.Culture.StringId.Equals("forest_bandits"))
        GameTexts.SetVariable("HIDEOUT_DESCRIPTION", "{=cu2cLT5r}You spy though the trees what seems to be a clearing in the forest with what appears to be the outlines of a camp.");
      if (currentSettlement1.Culture.StringId.Equals("sea_raiders"))
        GameTexts.SetVariable("HIDEOUT_DESCRIPTION", "{=bJ6ygV3P}As you travel along the coast, you see a sheltered cove with what appears to the outlines of a camp.");
      if (currentSettlement1.Culture.StringId.Equals("mountain_bandits"))
        GameTexts.SetVariable("HIDEOUT_DESCRIPTION", "{=iyWUDSm8}Passing by the slopes of the mountains, you see an outcrop crowned with the ruins of an ancient fortress.");
      if (currentSettlement1.Culture.StringId.Equals("desert_bandits"))
        GameTexts.SetVariable("HIDEOUT_DESCRIPTION", "{=b3iBOVXN}Passing by a wadi, you see what looks like a camouflaged well to tap the groundwater left behind by rare rainfalls.");
      if (currentSettlement1.Culture.StringId.Equals("steppe_bandits"))
        GameTexts.SetVariable("HIDEOUT_DESCRIPTION", "{=5JaGVr0U}While traveling by a low range of hills, you see what appears to be the remains of a campsite in a stream gully.");
      int num2 = !currentSettlement1.Hideout.NextPossibleAttackTime.IsPast ? 1 : 0;
      if (num2 != 0)
        GameTexts.SetVariable("HIDEOUT_TEXT", "{=KLWn6yZQ}{HIDEOUT_DESCRIPTION} The remains of a fire suggest that it's been recently occupied, but its residents - whoever they are - are well-hidden for now.");
      else if (num1 > 0)
        GameTexts.SetVariable("HIDEOUT_TEXT", "{=prcBBqMR}{HIDEOUT_DESCRIPTION} You see armed men moving about. As you listen quietly, you hear scraps of conversation about raids, ransoms, and the best places to waylay travellers.");
      else
        GameTexts.SetVariable("HIDEOUT_TEXT", "{=gywyEgZa}{HIDEOUT_DESCRIPTION} There seems to be no one inside.");
      if (num2 == 0 && num1 > 0 && Hero.MainHero.IsWounded)
        GameTexts.SetVariable("HIDEOUT_TEXT", "{=fMekM2UH}{HIDEOUT_DESCRIPTION} You can not attack since your wounds do not allow you.");
      if (MobileParty.MainParty.CurrentSettlement == null)
        PlayerEncounter.EnterSettlement();
      int num3 = Settlement.CurrentSettlement.Hideout.IsInfested ? 1 : 0;
      Settlement currentSettlement2 = Settlement.CurrentSettlement.IsHideout ? Settlement.CurrentSettlement : (Settlement) null;
      if (PlayerEncounter.Battle == null)
        return;
      int num4 = PlayerEncounter.Battle.WinningSide == PlayerEncounter.Current.PlayerSide ? 1 : 0;
      PlayerEncounter.Update();
      if (num4 == 0 || PlayerEncounter.Battle != null || currentSettlement2 == null)
        return;
      this.SetCleanHideoutRelations(currentSettlement2);
    }

    private void CalculateHideoutAttackTime()
    {
      this._hideoutWaitTargetHours = (double) this.CanAttackHideoutStart > (double) CampaignTime.Now.CurrentHourInDay ? (float) this.CanAttackHideoutStart - CampaignTime.Now.CurrentHourInDay : 24f - CampaignTime.Now.CurrentHourInDay + (float) this.CanAttackHideoutStart;
    }

    private void SetCleanHideoutRelations(Settlement hideout)
    {
      List<Settlement> settlementList = new List<Settlement>();
      foreach (Village allVillage in (List<Village>) Campaign.Current.AllVillages)
      {
        if ((double) allVillage.Settlement.Position2D.DistanceSquared(hideout.Position2D) <= 1600.0)
          settlementList.Add(allVillage.Settlement);
      }
      foreach (Settlement settlement in settlementList)
      {
        if (settlement.Notables.Count > 0)
          ChangeRelationAction.ApplyPlayerRelation(settlement.Notables.GetRandomElement<Hero>(), 2, showQuickNotification: false);
      }
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Charm.EffortForThePeople))
      {
        Town town = SettlementHelper.FindNearestTown(toMapPoint: (IMapPoint) hideout).Town;
        Hero leader = town.OwnerClan.Leader;
        if (leader == Hero.MainHero)
          ++town.Loyalty;
        else
          ChangeRelationAction.ApplyPlayerRelation(leader, (int) DefaultPerks.Charm.EffortForThePeople.PrimaryBonus);
      }
      MBTextManager.SetTextVariable("RELATION_VALUE", (int) DefaultPerks.Charm.EffortForThePeople.PrimaryBonus);
      MBInformationManager.AddQuickInformation(new TextObject("{=o0qwDa0q}Your relation increased by {RELATION_VALUE} with nearby notables."));
    }

    private void hideout_after_wait_menu_on_init(MenuCallbackArgs args)
    {
      TextObject textObject = new TextObject("{=VbU8Ue0O}After waiting for a while you find a good opportunity to close in undetected beneath the shroud of the night.");
      if (Hero.MainHero.IsWounded)
      {
        TextObject text = new TextObject("{=fMekM2UH}{HIDEOUT_DESCRIPTION}. You can not attack since your wounds do not allow you.");
        text.SetTextVariable("HIDEOUT_DESCRIPTION", textObject);
        MBTextManager.SetTextVariable("HIDEOUT_TEXT", text, false);
      }
      else
        MBTextManager.SetTextVariable("HIDEOUT_TEXT", textObject, false);
    }

    private bool game_menu_attack_hideout_parties_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      Hideout hideout = Settlement.CurrentSettlement.Hideout;
      return !Hero.MainHero.IsWounded && Settlement.CurrentSettlement.MapFaction != PartyBase.MainParty.MapFaction && Settlement.CurrentSettlement.Parties.Any<MobileParty>((Func<MobileParty, bool>) (x => x.IsBandit)) && hideout.NextPossibleAttackTime.IsPast && this.IsHideoutAttackableNow();
    }

    private void game_menu_encounter_attack_on_consequence(MenuCallbackArgs args)
    {
      int forHideoutMission1 = Campaign.Current.Models.BanditDensityModel.GetPlayerMaximumTroopCountForHideoutMission(MobileParty.MainParty);
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      TroopRoster strongestAndPriorTroops = MobilePartyHelper.GetStrongestAndPriorTroops(MobileParty.MainParty, forHideoutMission1, true);
      dummyTroopRoster.Add(strongestAndPriorTroops);
      Campaign current = Campaign.Current;
      int forHideoutMission2 = current != null ? current.Models.BanditDensityModel.GetPlayerMaximumTroopCountForHideoutMission(MobileParty.MainParty) : 0;
      args.MenuContext.OpenTroopSelection(MobileParty.MainParty.MemberRoster, dummyTroopRoster, new Func<CharacterObject, bool>(this.CanChangeStatusOfTroop), new Action<TroopRoster>(this.OnTroopRosterManageDone), forHideoutMission2);
    }

    private void ArrangeHideoutTroopCountsForMission()
    {
      int inHideoutMission = Campaign.Current.Models.BanditDensityModel.NumberOfMinimumBanditTroopsInHideoutMission;
      int num1 = Campaign.Current.Models.BanditDensityModel.NumberOfMaximumTroopCountForFirstFightInHideout + Campaign.Current.Models.BanditDensityModel.NumberOfMaximumTroopCountForBossFightInHideout;
      MBList<MobileParty> mbList = Settlement.CurrentSettlement.Parties.Where<MobileParty>((Func<MobileParty, bool>) (x => x.IsBandit || x.IsBanditBossParty)).ToMBList<MobileParty>();
      int num2 = mbList.Sum<MobileParty>((Func<MobileParty, int>) (x => x.MemberRoster.TotalHealthyCount));
      if (num2 > num1)
      {
        int num3 = num2 - num1;
        mbList.RemoveAll((Predicate<MobileParty>) (x => x.IsBanditBossParty || x.MemberRoster.TotalHealthyCount == 1));
        while (num3 > 0 && mbList.Count > 0)
        {
          MobileParty randomElement = mbList.GetRandomElement<MobileParty>();
          MBList<TroopRosterElement> troopRoster = randomElement.MemberRoster.GetTroopRoster();
          List<(TroopRosterElement, float)> weightList = new List<(TroopRosterElement, float)>();
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) troopRoster)
            weightList.Add((troopRosterElement, (float) (troopRosterElement.Number - troopRosterElement.WoundedNumber)));
          TroopRosterElement troopRosterElement1 = MBRandom.ChooseWeighted<TroopRosterElement>((IReadOnlyList<(TroopRosterElement, float)>) weightList);
          randomElement.MemberRoster.AddToCounts(troopRosterElement1.Character, -1);
          --num3;
          if (randomElement.MemberRoster.TotalHealthyCount == 1)
            mbList.Remove(randomElement);
        }
      }
      else
      {
        if (num2 >= inHideoutMission)
          return;
        int num4 = inHideoutMission - num2;
        mbList.RemoveAll((Predicate<MobileParty>) (x => x.MemberRoster.GetTroopRoster().All<TroopRosterElement>((Func<TroopRosterElement, bool>) (y => y.Number == 0 || y.Character.Culture.BanditBoss == y.Character || y.Character.IsHero))));
        for (; num4 > 0 && mbList.Count > 0; --num4)
        {
          MobileParty randomElement = mbList.GetRandomElement<MobileParty>();
          MBList<TroopRosterElement> troopRoster = randomElement.MemberRoster.GetTroopRoster();
          List<(TroopRosterElement, float)> weightList = new List<(TroopRosterElement, float)>();
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) troopRoster)
            weightList.Add((troopRosterElement, (float) (troopRosterElement.Number * (troopRosterElement.Character.Culture.BanditBoss == troopRosterElement.Character || troopRosterElement.Character.IsHero ? 0 : 1))));
          TroopRosterElement troopRosterElement2 = MBRandom.ChooseWeighted<TroopRosterElement>((IReadOnlyList<(TroopRosterElement, float)>) weightList);
          randomElement.MemberRoster.AddToCounts(troopRosterElement2.Character, 1);
        }
      }
    }

    private void OnTroopRosterManageDone(TroopRoster hideoutTroops)
    {
      this.ArrangeHideoutTroopCountsForMission();
      GameMenu.SwitchToMenu("hideout_place");
      Settlement.CurrentSettlement.Hideout.UpdateNextPossibleAttackTime();
      if (PlayerEncounter.IsActive)
      {
        PlayerEncounter.LeaveEncounter = false;
      }
      else
      {
        PlayerEncounter.Start();
        PlayerEncounter.Current.SetupFields(PartyBase.MainParty, Settlement.CurrentSettlement.Party);
      }
      if (PlayerEncounter.Battle == null)
      {
        PlayerEncounter.StartBattle();
        PlayerEncounter.Update();
      }
      CampaignMission.OpenHideoutBattleMission(Settlement.CurrentSettlement.Hideout.SceneName, hideoutTroops?.ToFlattenedRoster());
    }

    private bool CanChangeStatusOfTroop(CharacterObject character)
    {
      return !character.IsPlayerCharacter && !character.IsNotTransferableInHideouts;
    }

    private bool game_menu_talk_to_leader_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      PartyBase party = Settlement.CurrentSettlement.Parties[0].Party;
      return party != null && party.LeaderHero != null && party.LeaderHero != Hero.MainHero;
    }

    private void game_menu_talk_to_leader_on_consequence(MenuCallbackArgs args)
    {
      PartyBase party = Settlement.CurrentSettlement.Parties[0].Party;
      CampaignMission.OpenConversationMission(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty), new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(party), party));
    }

    private bool game_menu_wait_until_nightfall_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Wait;
      return Settlement.CurrentSettlement.Parties.Any<MobileParty>((Func<MobileParty, bool>) (t => t != MobileParty.MainParty)) && !this.IsHideoutAttackableNow();
    }

    private void game_menu_wait_until_nightfall_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("hideout_wait");
    }

    private void game_menu_hideout_leave_on_consequence(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (MobileParty.MainParty.CurrentSettlement != null)
        PlayerEncounter.LeaveSettlement();
      PlayerEncounter.Finish();
    }
  }
}
