// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Siege.PlayerSiege
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Siege
{
  public static class PlayerSiege
  {
    public static SiegeEvent PlayerSiegeEvent
    {
      get
      {
        SiegeEvent siegeEvent = MobileParty.MainParty.SiegeEvent;
        if (siegeEvent != null)
          return siegeEvent;
        return MobileParty.MainParty.CurrentSettlement?.SiegeEvent;
      }
    }

    public static Settlement BesiegedSettlement => PlayerSiege.PlayerSiegeEvent?.BesiegedSettlement;

    public static BattleSideEnum PlayerSide
    {
      get
      {
        return MobileParty.MainParty.BesiegerCamp == null ? BattleSideEnum.Defender : BattleSideEnum.Attacker;
      }
    }

    public static bool IsRebellion
    {
      get
      {
        return PlayerSiege.BesiegedSettlement != null && PlayerSiege.BesiegedSettlement.IsUnderRebellionAttack();
      }
    }

    private static void SetPlayerSiegeEvent()
    {
    }

    public static void StartSiegePreparation()
    {
      if (Campaign.Current.CurrentMenuContext != null)
        GameMenu.ExitToLast();
      GameMenu.ActivateGameMenu("menu_siege_strategies");
    }

    public static void OnSiegeEventFinalized(bool besiegerPartyDefeated)
    {
      MapState activeState = Game.Current.GameStateManager.ActiveState as MapState;
      if (PlayerSiege.IsRebellion)
      {
        if (activeState == null || !activeState.AtMenu)
          return;
        GameMenu.ExitToLast();
      }
      else if (PlayerSiege.PlayerSide == BattleSideEnum.Defender && !PlayerSiege.IsRebellion)
      {
        if (Settlement.CurrentSettlement == null)
          return;
        if (activeState != null && !activeState.AtMenu)
          GameMenu.ActivateGameMenu(besiegerPartyDefeated ? "siege_attacker_defeated" : "siege_attacker_left");
        else
          GameMenu.SwitchToMenu(besiegerPartyDefeated ? "siege_attacker_defeated" : "siege_attacker_left");
      }
      else
      {
        if (Hero.MainHero.PartyBelongedTo == null || Hero.MainHero.PartyBelongedTo.Army == null || Hero.MainHero.PartyBelongedTo.Army.LeaderParty == MobileParty.MainParty)
          return;
        if (MobileParty.MainParty.CurrentSettlement != null)
          LeaveSettlementAction.ApplyForParty(MobileParty.MainParty);
        if (PlayerEncounter.Battle != null)
          return;
        if (activeState != null)
        {
          if (activeState.AtMenu)
            GameMenu.SwitchToMenu("army_wait");
          else
            GameMenu.ActivateGameMenu("army_wait");
        }
        else
          Campaign.Current.GameMenuManager.SetNextMenu("army_wait");
      }
    }

    public static void StartPlayerSiege(
      BattleSideEnum playerSide,
      bool isSimulation = false,
      Settlement settlement = null)
    {
      if (MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty)
        MobileParty.MainParty.Ai.SetMoveModeHold();
      PlayerSiege.SetPlayerSiegeEvent();
      if (!isSimulation)
      {
        TaleWorlds.Core.GameState gameState = Game.Current.GameStateManager.GameStates.FirstOrDefault<TaleWorlds.Core.GameState>((Func<TaleWorlds.Core.GameState, bool>) (s => s is MapState));
        if (gameState != null && gameState is MapState mapState)
          mapState.OnPlayerSiegeActivated();
      }
      CampaignEventDispatcher.Instance.OnPlayerSiegeStarted();
    }

    public static void ClosePlayerSiege()
    {
      if (PlayerSiege.PlayerSiegeEvent == null)
        return;
      PlayerSiege.BesiegedSettlement.Party.SetVisualAsDirty();
      Campaign.Current.autoEnterTown = (PartyBase) null;
      if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty)
        MobileParty.MainParty.Army.AiBehaviorObject = (IMapPoint) null;
      MobileParty.MainParty.Ai.SetMoveModeHold();
      TaleWorlds.Core.GameState gameState = Game.Current.GameStateManager.GameStates.FirstOrDefault<TaleWorlds.Core.GameState>((Func<TaleWorlds.Core.GameState, bool>) (s => s is MapState));
      if (gameState == null || !(gameState is MapState mapState))
        return;
      mapState.OnPlayerSiegeDeactivated();
    }

    public static void StartSiegeMission(Settlement settlement = null)
    {
      Settlement besiegedSettlement = PlayerSiege.BesiegedSettlement;
      switch (besiegedSettlement.CurrentSiegeState)
      {
        case Settlement.SiegeState.OnTheWalls:
          List<MissionSiegeWeapon> activeSiegeEngines1 = PlayerSiege.PlayerSiegeEvent.GetPreparedAndActiveSiegeEngines(PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker));
          List<MissionSiegeWeapon> activeSiegeEngines2 = PlayerSiege.PlayerSiegeEvent.GetPreparedAndActiveSiegeEngines(PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Defender));
          bool hasAnySiegeTower = activeSiegeEngines1.Exists((Predicate<MissionSiegeWeapon>) (data => data.Type == DefaultSiegeEngineTypes.SiegeTower));
          int wallLevel = besiegedSettlement.Town.GetWallLevel();
          CampaignMission.OpenSiegeMissionWithDeployment(besiegedSettlement.LocationComplex.GetLocationWithId("center").GetSceneName(wallLevel), besiegedSettlement.SettlementWallSectionHitPointsRatioList.ToArray(), hasAnySiegeTower, activeSiegeEngines1, activeSiegeEngines2, PlayerEncounter.Current.PlayerSide == BattleSideEnum.Attacker, wallLevel);
          break;
        case Settlement.SiegeState.Invalid:
          Debug.FailedAssert("Siege state is invalid!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Siege\\PlayerSiege.cs", nameof (StartSiegeMission), 189);
          break;
      }
    }
  }
}
