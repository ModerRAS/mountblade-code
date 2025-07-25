// Decompiled with JetBrains decompiler
// Type: Helpers.MenuHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class MenuHelper
  {
    public static bool SetOptionProperties(
      MenuCallbackArgs args,
      bool canPlayerDo,
      bool shouldBeDisabled,
      TextObject disabledText)
    {
      if (canPlayerDo)
        return true;
      if (!shouldBeDisabled)
        return false;
      args.IsEnabled = false;
      args.Tooltip = disabledText;
      return true;
    }

    public static void SetIssueAndQuestDataForHero(MenuCallbackArgs args, Hero hero)
    {
      if (hero.Issue != null && hero.Issue.IssueQuest == null)
        args.OptionQuestData |= GameMenuOption.IssueQuestFlags.AvailableIssue;
      List<QuestBase> questBaseList1;
      Campaign.Current.QuestManager.TrackedObjects.TryGetValue((ITrackableCampaignObject) hero, out questBaseList1);
      if (questBaseList1 != null)
      {
        for (int index = 0; index < questBaseList1.Count; ++index)
        {
          if (questBaseList1[index].IsTrackEnabled)
          {
            if (questBaseList1[index].IsSpecialQuest)
            {
              if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.TrackedStoryQuest) == GameMenuOption.IssueQuestFlags.None && questBaseList1[index].QuestGiver != hero)
                args.OptionQuestData |= GameMenuOption.IssueQuestFlags.TrackedStoryQuest;
              else if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.ActiveStoryQuest) == GameMenuOption.IssueQuestFlags.None && questBaseList1[index].QuestGiver == hero)
                args.OptionQuestData |= GameMenuOption.IssueQuestFlags.ActiveStoryQuest;
            }
            else if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.TrackedIssue) == GameMenuOption.IssueQuestFlags.None && questBaseList1[index].QuestGiver != hero)
              args.OptionQuestData |= GameMenuOption.IssueQuestFlags.TrackedIssue;
            else if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.ActiveIssue) == GameMenuOption.IssueQuestFlags.None && questBaseList1[index].QuestGiver == hero)
              args.OptionQuestData |= GameMenuOption.IssueQuestFlags.ActiveIssue;
          }
        }
      }
      if (hero.PartyBelongedTo != null && ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.ActiveStoryQuest) == GameMenuOption.IssueQuestFlags.None || (args.OptionQuestData & GameMenuOption.IssueQuestFlags.ActiveIssue) == GameMenuOption.IssueQuestFlags.None || (args.OptionQuestData & GameMenuOption.IssueQuestFlags.TrackedIssue) == GameMenuOption.IssueQuestFlags.None || (args.OptionQuestData & GameMenuOption.IssueQuestFlags.TrackedStoryQuest) == GameMenuOption.IssueQuestFlags.None))
      {
        List<QuestBase> questBaseList2;
        Campaign.Current.QuestManager.TrackedObjects.TryGetValue((ITrackableCampaignObject) hero.PartyBelongedTo, out questBaseList2);
        if (questBaseList2 != null)
        {
          for (int index = 0; index < questBaseList2.Count; ++index)
          {
            if (questBaseList2[index].IsTrackEnabled)
            {
              if (questBaseList2[index].IsSpecialQuest)
              {
                if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.TrackedStoryQuest) == GameMenuOption.IssueQuestFlags.None && questBaseList2[index].QuestGiver != hero)
                  args.OptionQuestData |= GameMenuOption.IssueQuestFlags.TrackedStoryQuest;
                else if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.ActiveStoryQuest) == GameMenuOption.IssueQuestFlags.None && questBaseList2[index].QuestGiver == hero)
                  args.OptionQuestData |= GameMenuOption.IssueQuestFlags.ActiveStoryQuest;
              }
              else if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.TrackedIssue) == GameMenuOption.IssueQuestFlags.None && questBaseList2[index].QuestGiver != hero)
                args.OptionQuestData |= GameMenuOption.IssueQuestFlags.TrackedIssue;
              else if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.ActiveIssue) == GameMenuOption.IssueQuestFlags.None && questBaseList2[index].QuestGiver == hero)
                args.OptionQuestData |= GameMenuOption.IssueQuestFlags.ActiveIssue;
            }
          }
        }
      }
      if ((args.OptionQuestData & GameMenuOption.IssueQuestFlags.ActiveIssue) != GameMenuOption.IssueQuestFlags.None || hero.Issue?.IssueQuest == null || !hero.Issue.IssueQuest.IsTrackEnabled)
        return;
      args.OptionQuestData |= GameMenuOption.IssueQuestFlags.ActiveIssue;
    }

    public static void SetIssueAndQuestDataForLocations(
      MenuCallbackArgs args,
      List<Location> locations)
    {
      GameMenuOption.IssueQuestFlags issueQuestFlags = Campaign.Current.IssueManager.CheckIssueForMenuLocations(locations, true);
      args.OptionQuestData |= issueQuestFlags;
      args.OptionQuestData |= Campaign.Current.QuestManager.CheckQuestForMenuLocations(locations);
    }

    public static void DecideMenuState()
    {
      string genericStateMenu = Campaign.Current.Models.EncounterGameMenuModel.GetGenericStateMenu();
      if (!string.IsNullOrEmpty(genericStateMenu))
        GameMenu.SwitchToMenu(genericStateMenu);
      else
        GameMenu.ExitToLast();
    }

    public static bool EncounterAttackCondition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      if (MapEvent.PlayerMapEvent == null)
        return false;
      MapEvent battle = PlayerEncounter.Battle;
      Settlement mapEventSettlement = battle?.MapEventSettlement;
      if (battle != null && mapEventSettlement != null && mapEventSettlement.IsFortification && battle.IsSiegeAssault && PlayerSiege.PlayerSiegeEvent != null && !PlayerSiege.PlayerSiegeEvent.BesiegerCamp.IsPreparationComplete)
        return false;
      int num = battle == null || !battle.HasTroopsOnBothSides() && !battle.IsSiegeAssault ? 0 : (MapEvent.PlayerMapEvent.GetLeaderParty(PartyBase.MainParty.OpponentSide) != null ? 1 : 0);
      if (!Hero.MainHero.IsWounded)
        return num != 0;
      args.Tooltip = new TextObject("{=UL8za0AO}You are wounded.");
      args.IsEnabled = false;
      return num != 0;
    }

    public static bool EncounterCaptureEnemyCondition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Surrender;
      MapEvent battle = PlayerEncounter.Battle;
      return battle != null && battle.PartiesOnSide(battle.GetOtherSide(battle.PlayerSide)).All<MapEventParty>((Func<MapEventParty, bool>) (party => !party.Party.IsSettlement && party.Party.NumberOfHealthyMembers == 0));
    }

    public static void EncounterAttackConsequence(MenuCallbackArgs args)
    {
      MapEvent battle = PlayerEncounter.Battle;
      BeHostileAction.ApplyEncounterHostileAction(PartyBase.MainParty, battle.GetLeaderParty(PartyBase.MainParty.OpponentSide));
      if (PlayerEncounter.Current == null)
        return;
      Settlement mapEventSettlement = MobileParty.MainParty.MapEvent.MapEventSettlement;
      if (mapEventSettlement != null && !battle.IsSallyOut && !battle.IsSiegeOutside)
      {
        if (mapEventSettlement.IsFortification)
        {
          if (battle.IsRaid)
            PlayerEncounter.StartVillageBattleMission();
          else if (battle.IsSiegeAmbush)
            PlayerEncounter.StartSiegeAmbushMission();
          else if (battle.IsSiegeAssault)
          {
            if (PlayerSiege.PlayerSiegeEvent == null && PartyBase.MainParty.Side == BattleSideEnum.Attacker)
            {
              PlayerSiege.StartPlayerSiege(MobileParty.MainParty.Party.Side, settlement: mapEventSettlement);
            }
            else
            {
              if (PlayerSiege.PlayerSiegeEvent != null && !PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(PlayerSiege.PlayerSide.GetOppositeSide()).GetInvolvedPartiesForEventType().Any<PartyBase>((Func<PartyBase, bool>) (party => party.NumberOfHealthyMembers > 0)))
              {
                PlayerEncounter.Update();
                return;
              }
              if ((PlayerSiege.BesiegedSettlement == null ? 0 : (PlayerSiege.BesiegedSettlement.CurrentSiegeState == Settlement.SiegeState.InTheLordsHall ? 1 : 0)) != 0)
              {
                int num = MathF.Max(1, MathF.Min(Campaign.Current.Models.SiegeLordsHallFightModel.MaxAttackerSideTroopCount, MathF.Round((float) Campaign.Current.Models.SiegeLordsHallFightModel.GetPriorityListForLordsHallFightMission(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, Campaign.Current.Models.SiegeLordsHallFightModel.MaxDefenderSideTroopCount).Troops.Count<CharacterObject>() * Campaign.Current.Models.SiegeLordsHallFightModel.AttackerDefenderTroopCountRatio)));
                TroopRoster dummyTroopRoster1 = TroopRoster.CreateDummyTroopRoster();
                MobileParty mobileParty = MobileParty.MainParty.Army != null ? MobileParty.MainParty.Army.LeaderParty : MobileParty.MainParty;
                dummyTroopRoster1.Add(mobileParty.MemberRoster);
                foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.AttachedParties)
                  dummyTroopRoster1.Add(attachedParty.MemberRoster);
                TroopRoster dummyTroopRoster2 = TroopRoster.CreateDummyTroopRoster();
                FlattenedTroopRoster flattenedRoster = dummyTroopRoster1.ToFlattenedRoster();
                flattenedRoster.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => x.IsWounded));
                dummyTroopRoster2.Add(MobilePartyHelper.GetStrongestAndPriorTroops(flattenedRoster, num, true));
                args.MenuContext.OpenTroopSelection(dummyTroopRoster1, dummyTroopRoster2, (Func<CharacterObject, bool>) (character => !character.IsPlayerCharacter), new Action<TroopRoster>(MenuHelper.LordsHallTroopRosterManageDone), num, num);
              }
              else
                PlayerSiege.StartSiegeMission(mapEventSettlement);
            }
          }
        }
        else if (mapEventSettlement.IsVillage)
          PlayerEncounter.StartVillageBattleMission();
        else if (mapEventSettlement.IsHideout)
          CampaignMission.OpenHideoutBattleMission("sea_bandit_a", (FlattenedTroopRoster) null);
      }
      else
      {
        MapPatchData mapPatchAtPosition = Campaign.Current.MapSceneWrapper.GetMapPatchAtPosition(MobileParty.MainParty.Position2D);
        MissionInitializerRecord rec = new MissionInitializerRecord(PlayerEncounter.GetBattleSceneForMapPatch(mapPatchAtPosition));
        rec.TerrainType = (int) Campaign.Current.MapSceneWrapper.GetFaceTerrainType(MobileParty.MainParty.CurrentNavigationFace);
        rec.DamageToPlayerMultiplier = Campaign.Current.Models.DifficultyModel.GetDamageToPlayerMultiplier();
        rec.DamageToFriendsMultiplier = Campaign.Current.Models.DifficultyModel.GetPlayerTroopsReceivedDamageMultiplier();
        rec.DamageFromPlayerToFriendsMultiplier = Campaign.Current.Models.DifficultyModel.GetPlayerTroopsReceivedDamageMultiplier();
        rec.NeedsRandomTerrain = false;
        rec.PlayingInCampaignMode = true;
        rec.RandomTerrainSeed = MBRandom.RandomInt(10000);
        rec.AtmosphereOnCampaign = Campaign.Current.Models.MapWeatherModel.GetAtmosphereModel(MobileParty.MainParty.GetLogicalPosition());
        rec.SceneHasMapPatch = true;
        rec.DecalAtlasGroup = 2;
        rec.PatchCoordinates = mapPatchAtPosition.normalizedCoordinates;
        rec.PatchEncounterDir = (battle.AttackerSide.LeaderParty.Position2D - battle.DefenderSide.LeaderParty.Position2D).Normalized();
        float num = Campaign.CurrentTime % 24f;
        if (Campaign.Current != null)
          rec.TimeOfDay = num;
        bool isCaravan = MapEvent.PlayerMapEvent.PartiesOnSide(BattleSideEnum.Defender).Any<MapEventParty>((Func<MapEventParty, bool>) (involvedParty => involvedParty.Party.IsMobile && involvedParty.Party.MobileParty.IsCaravan));
        bool flag = MapEvent.PlayerMapEvent.MapEventSettlement == null && MapEvent.PlayerMapEvent.PartiesOnSide(BattleSideEnum.Defender).Any<MapEventParty>((Func<MapEventParty, bool>) (involvedParty => involvedParty.Party.IsMobile && involvedParty.Party.MobileParty.IsVillager));
        if (isCaravan | flag)
          CampaignMission.OpenCaravanBattleMission(rec, isCaravan);
        else
          CampaignMission.OpenBattleMission(rec);
      }
      PlayerEncounter.StartAttackMission();
      MapEvent.PlayerMapEvent.BeginWait();
    }

    private static void LordsHallTroopRosterManageDone(TroopRoster selectedTroops)
    {
      MapEvent.PlayerMapEvent.ResetBattleState();
      int wallLevel = PlayerSiege.BesiegedSettlement.Town.GetWallLevel();
      CampaignMission.OpenSiegeLordsHallFightMission(PlayerSiege.BesiegedSettlement.LocationComplex.GetLocationWithId("lordshall").GetSceneName(wallLevel), selectedTroops.ToFlattenedRoster());
    }

    private static void LordsHallTroopRosterManageDoneForSimulation(TroopRoster selectedTroops)
    {
      MenuHelper.EncounterOrderAttack(selectedTroops);
    }

    private static void EncounterOrderAttack(TroopRoster selectedTroopsForPlayerSide)
    {
      MapEvent battle = PlayerEncounter.Battle;
      if (PlayerSiege.PlayerSiegeEvent != null)
      {
        ISiegeEventSide siegeEventSide = PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(PlayerSiege.PlayerSide.GetOppositeSide());
        if (siegeEventSide != null && !siegeEventSide.GetInvolvedPartiesForEventType().Any<PartyBase>((Func<PartyBase, bool>) (party => party.NumberOfHealthyMembers > 0)) && (battle == null ? 1 : (!battle.GetMapEventSide(battle.GetOtherSide(battle.PlayerSide)).Parties.Any<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party.NumberOfHealthyMembers > 0)) ? 1 : 0)) != 0)
        {
          PlayerEncounter.Update();
          return;
        }
      }
      PartyBase leaderParty = battle.GetLeaderParty(PartyBase.MainParty.OpponentSide);
      if (leaderParty.SiegeEvent?.BesiegerCamp != null && !leaderParty.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(leaderParty, MapEvent.BattleTypes.Siege) && MobileParty.MainParty.BesiegerCamp == null)
        MobileParty.MainParty.BesiegerCamp = leaderParty.SiegeEvent.BesiegerCamp;
      BeHostileAction.ApplyEncounterHostileAction(PartyBase.MainParty, leaderParty);
      if (PlayerEncounter.Current == null)
        return;
      GameMenu.ExitToLast();
      if (selectedTroopsForPlayerSide != (TroopRoster) null && PlayerSiege.BesiegedSettlement != null && PlayerSiege.BesiegedSettlement.CurrentSiegeState == Settlement.SiegeState.InTheLordsHall)
      {
        FlattenedTroopRoster hallFightMission = Campaign.Current.Models.SiegeLordsHallFightModel.GetPriorityListForLordsHallFightMission(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, Campaign.Current.Models.SiegeLordsHallFightModel.MaxDefenderSideTroopCount);
        PlayerEncounter.InitSimulation(selectedTroopsForPlayerSide.ToFlattenedRoster(), hallFightMission);
      }
      else
        PlayerEncounter.InitSimulation((FlattenedTroopRoster) null, (FlattenedTroopRoster) null);
      if (PlayerEncounter.Current == null || PlayerEncounter.Current.BattleSimulation == null)
        return;
      ((MapState) Game.Current.GameStateManager.ActiveState).StartBattleSimulation();
    }

    public static void EncounterOrderAttackConsequence(MenuCallbackArgs args)
    {
      if ((PlayerSiege.BesiegedSettlement == null ? 0 : (PlayerSiege.BesiegedSettlement.CurrentSiegeState == Settlement.SiegeState.InTheLordsHall ? 1 : 0)) != 0)
      {
        int num = MathF.Max(1, MathF.Min(Campaign.Current.Models.SiegeLordsHallFightModel.MaxAttackerSideTroopCount, MathF.Round((float) Campaign.Current.Models.SiegeLordsHallFightModel.GetPriorityListForLordsHallFightMission(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, Campaign.Current.Models.SiegeLordsHallFightModel.MaxDefenderSideTroopCount).Troops.Count<CharacterObject>() * Campaign.Current.Models.SiegeLordsHallFightModel.AttackerDefenderTroopCountRatio)));
        TroopRoster dummyTroopRoster1 = TroopRoster.CreateDummyTroopRoster();
        MobileParty mobileParty = MobileParty.MainParty.Army != null ? MobileParty.MainParty.Army.LeaderParty : MobileParty.MainParty;
        dummyTroopRoster1.Add(mobileParty.MemberRoster);
        foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.AttachedParties)
          dummyTroopRoster1.Add(attachedParty.MemberRoster);
        TroopRoster dummyTroopRoster2 = TroopRoster.CreateDummyTroopRoster();
        FlattenedTroopRoster flattenedRoster = dummyTroopRoster1.ToFlattenedRoster();
        flattenedRoster.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => x.IsWounded));
        dummyTroopRoster2.Add(MobilePartyHelper.GetStrongestAndPriorTroops(flattenedRoster, num, false));
        args.MenuContext.OpenTroopSelection(dummyTroopRoster1, dummyTroopRoster2, (Func<CharacterObject, bool>) (character => !character.IsPlayerCharacter), new Action<TroopRoster>(MenuHelper.LordsHallTroopRosterManageDoneForSimulation), num, num);
      }
      else
        MenuHelper.EncounterOrderAttack((TroopRoster) null);
    }

    public static void EncounterCaptureTheEnemyOnConsequence(MenuCallbackArgs args)
    {
      MapEvent.PlayerMapEvent.SetOverrideWinner(MapEvent.PlayerMapEvent.PlayerSide);
      PlayerEncounter.Update();
    }

    public static void EncounterLeaveConsequence()
    {
      Settlement currentSettlement = MobileParty.MainParty.CurrentSettlement;
      MapEvent mapEvent = PlayerEncounter.Battle != null ? PlayerEncounter.Battle : PlayerEncounter.EncounteredBattle;
      int numberOfInvolvedMen = mapEvent.GetNumberOfInvolvedMen(PartyBase.MainParty.Side);
      PlayerEncounter.Finish(MobileParty.MainParty.CurrentSettlement?.SiegeEvent == null || MobileParty.MainParty.CurrentSettlement?.MapFaction != MobileParty.MainParty.MapFaction);
      if (MobileParty.MainParty.BesiegerCamp != null)
        MobileParty.MainParty.BesiegerCamp = (BesiegerCamp) null;
      if (mapEvent != null && !mapEvent.IsRaid && numberOfInvolvedMen == PartyBase.MainParty.NumberOfHealthyMembers)
      {
        mapEvent.SimulateBattleSetup(PlayerEncounter.Current?.BattleSimulation?.SelectedTroops);
        mapEvent.SimulateBattleForRounds(PartyBase.MainParty.Side == BattleSideEnum.Attacker ? 1 : 0, PartyBase.MainParty.Side == BattleSideEnum.Attacker ? 0 : 1);
      }
      if (currentSettlement == null)
        return;
      EncounterManager.StartSettlementEncounter(MobileParty.MainParty, currentSettlement);
    }
  }
}
