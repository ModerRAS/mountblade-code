// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PlayerArmyWaitBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PlayerArmyWaitBehavior : CampaignBehaviorBase
  {
    private readonly TextObject _leadingArmyDescriptionText;
    private readonly TextObject _armyDescriptionText;
    private readonly TextObject _disbandingArmyDescriptionText;

    public PlayerArmyWaitBehavior()
    {
      this._leadingArmyDescriptionText = GameTexts.FindText("str_you_are_leading_army");
      this._armyDescriptionText = GameTexts.FindText("str_army_of_HERO");
      this._disbandingArmyDescriptionText = new TextObject("{=Yan3ZG1w}Disbanding Army!");
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.ArmyDispersed.AddNonSerializedListener((object) this, new Action<Army, Army.ArmyDispersionReason, bool>(this.OnArmyDispersed));
      CampaignEvents.TickEvent.AddNonSerializedListener((object) this, new Action<float>(this.OnTick));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void AddMenus(CampaignGameStarter starter)
    {
      starter.AddWaitGameMenu("army_wait", "{=0gwQGnm4}{ARMY_OWNER_TEXT} {ARMY_BEHAVIOR}", new OnInitDelegate(this.wait_menu_army_wait_on_init), new OnConditionDelegate(this.wait_menu_army_wait_on_condition), (OnConsequenceDelegate) null, new OnTickDelegate(this.ArmyWaitMenuTick), GameMenu.MenuAndOptionType.WaitMenuHideProgressAndHoursOption);
      starter.AddGameMenuOption("army_wait", "leave_army", "{=hSdJ0UUv}Leave Army", new GameMenuOption.OnConditionDelegate(this.wait_menu_army_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.wait_menu_army_leave_on_consequence), true);
      starter.AddGameMenuOption("army_wait", "abandon_army", "{=0vnegjxf}Abandon Army", new GameMenuOption.OnConditionDelegate(this.wait_menu_army_abandon_on_condition), new GameMenuOption.OnConsequenceDelegate(this.wait_menu_army_abandon_on_consequence), true);
      starter.AddWaitGameMenu("army_wait_at_settlement", "{=0gwQGnm4}{ARMY_OWNER_TEXT} {ARMY_BEHAVIOR}", new OnInitDelegate(this.wait_menu_army_wait_at_settlement_on_init), new OnConditionDelegate(this.wait_menu_army_wait_on_condition), (OnConsequenceDelegate) null, new OnTickDelegate(this.wait_menu_army_wait_at_settlement_on_tick), GameMenu.MenuAndOptionType.WaitMenuHideProgressAndHoursOption);
      starter.AddGameMenuOption("army_wait_at_settlement", "enter_settlement", "{=!}{ENTER_SETTLEMENT}", new GameMenuOption.OnConditionDelegate(this.wait_menu_army_enter_settlement_on_condition), new GameMenuOption.OnConsequenceDelegate(this.wait_menu_army_enter_settlement_on_consequence));
      starter.AddGameMenuOption("army_wait_at_settlement", "leave_army", "{=hSdJ0UUv}Leave Army", new GameMenuOption.OnConditionDelegate(this.wait_menu_army_leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.wait_menu_army_leave_on_consequence), true);
      starter.AddGameMenu("army_dispersed", "{=!}{ARMY_DISPERSE_REASON}", (OnInitDelegate) null);
      starter.AddGameMenuOption("army_dispersed", "army_dispersed_continue", "{=DM6luo3c}Continue", new GameMenuOption.OnConditionDelegate(this.army_dispersed_continue_on_condition), new GameMenuOption.OnConsequenceDelegate(this.army_dispersed_continue_on_consequence));
    }

    private void ArmyWaitMenuTick(MenuCallbackArgs args, CampaignTime dt)
    {
      string genericStateMenu = Campaign.Current.Models.EncounterGameMenuModel.GetGenericStateMenu();
      if (genericStateMenu != "army_wait")
      {
        args.MenuContext.GameMenu.EndWait();
        if (!string.IsNullOrEmpty(genericStateMenu))
          GameMenu.SwitchToMenu(genericStateMenu);
        else
          GameMenu.ExitToLast();
      }
      else
        this.RefreshArmyTexts(args);
    }

    private void OnSessionLaunched(CampaignGameStarter starter) => this.AddMenus(starter);

    private void OnArmyDispersed(Army army, Army.ArmyDispersionReason reason, bool isPlayersArmy)
    {
      if (!isPlayersArmy || army.LeaderParty == MobileParty.MainParty || Campaign.Current.CurrentMenuContext == null)
        return;
      Campaign.Current.CurrentMenuContext.GameMenu.EndWait();
      GameMenu.SwitchToMenu("army_dispersed");
      TextObject empty = TextObject.Empty;
      TextObject text;
      switch (reason)
      {
        case Army.ArmyDispersionReason.CohesionDepleted:
          text = new TextObject("{=5wwO7ozf}{ARMY_LEADER}'s army has disbanded due to a lack of cohesion.");
          break;
        case Army.ArmyDispersionReason.FoodProblem:
          text = new TextObject("{=eVdUaG3x}{ARMY_LEADER}'s army has disbanded due to a lack of food.");
          break;
        case Army.ArmyDispersionReason.NoActiveWar:
          text = new TextObject("{=tvAdOGzc}{ARMY_LEADER}'s army has disbanded. The kingdom is now at peace.");
          break;
        default:
          text = new TextObject("{=FXPvGTEa}Army you are in is dispersed.");
          break;
      }
      text.SetTextVariable("ARMY_LEADER", army.LeaderParty.LeaderHero.Name);
      MBTextManager.SetTextVariable("ARMY_DISPERSE_REASON", text, false);
    }

    private void wait_menu_army_wait_on_init(MenuCallbackArgs args)
    {
      Army army = MobileParty.MainParty.Army;
      if (army?.LeaderParty?.LeaderHero != null)
      {
        this._armyDescriptionText.SetTextVariable("HERO", army.LeaderParty.LeaderHero.Name);
        args.MenuTitle = this._armyDescriptionText;
      }
      else
        args.MenuTitle = this._disbandingArmyDescriptionText;
      this.RefreshArmyTexts(args);
    }

    private void wait_menu_army_wait_at_settlement_on_init(MenuCallbackArgs args)
    {
      if (!PlayerEncounter.InsideSettlement && MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty)
        PlayerEncounter.EnterSettlement();
      this._armyDescriptionText.SetTextVariable("HERO", MobileParty.MainParty.Army.LeaderParty.LeaderHero.Name);
      args.MenuTitle = this._armyDescriptionText;
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Current.IsPlayerWaiting = true;
      this.RefreshArmyTexts(args);
    }

    private void wait_menu_army_wait_at_settlement_on_tick(MenuCallbackArgs args, CampaignTime dt)
    {
      string genericStateMenu = Campaign.Current.Models.EncounterGameMenuModel.GetGenericStateMenu();
      if (!(genericStateMenu != "army_wait_at_settlement"))
        return;
      args.MenuContext.GameMenu.EndWait();
      if (!string.IsNullOrEmpty(genericStateMenu))
        GameMenu.SwitchToMenu(genericStateMenu);
      else
        GameMenu.ExitToLast();
    }

    [GameMenuInitializationHandler("army_wait")]
    private static void wait_menu_ui_army_wait_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(Hero.MainHero.MapFaction.Culture.EncounterBackgroundMesh);
    }

    private void RefreshArmyTexts(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.Army == null)
        return;
      TextObject text1 = args.MenuContext.GameMenu.GetText();
      if (MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
      {
        TextObject text2 = GameTexts.FindText("str_you_are_following_army");
        text2.SetTextVariable("ARMY_LEADER", MobileParty.MainParty.Army.LeaderParty.LeaderHero.Name);
        text1.SetTextVariable("ARMY_OWNER_TEXT", text2);
        text1.SetTextVariable("ARMY_BEHAVIOR", MobileParty.MainParty.Army.GetBehaviorText());
      }
      else
      {
        text1.SetTextVariable("ARMY_OWNER_TEXT", this._leadingArmyDescriptionText);
        text1.SetTextVariable("ARMY_BEHAVIOR", "");
      }
    }

    private bool wait_menu_army_wait_on_condition(MenuCallbackArgs args) => true;

    private bool wait_menu_army_abandon_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      if ((MobileParty.MainParty.Army == null ? 0 : (MobileParty.MainParty.MapEvent != null ? 1 : (MobileParty.MainParty.BesiegedSettlement != null ? 1 : 0))) == 0)
        return false;
      args.Tooltip = GameTexts.FindText("str_abandon_army");
      args.Tooltip.SetTextVariable("INFLUENCE_COST", Campaign.Current.Models.DiplomacyModel.GetInfluenceCostOfAbandoningArmy());
      return true;
    }

    private bool wait_menu_army_enter_settlement_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty && MobileParty.MainParty.MapEvent == null && MobileParty.MainParty.BesiegedSettlement == null)
      {
        Settlement settlement = (Settlement) null;
        if (MobileParty.MainParty.CurrentSettlement != null)
          settlement = MobileParty.MainParty.CurrentSettlement;
        else if (MobileParty.MainParty.Army.LeaderParty.LastVisitedSettlement != null && (double) MobileParty.MainParty.Army.LeaderParty.LastVisitedSettlement.Position2D.Distance(MobileParty.MainParty.Army.LeaderParty.Position2D) < 1.0)
          settlement = MobileParty.MainParty.Army.LeaderParty.LastVisitedSettlement;
        if (settlement != null)
        {
          if (settlement.IsTown)
            MBTextManager.SetTextVariable("ENTER_SETTLEMENT", "{=bkoJ57h3}Enter the Town", false);
          else if (settlement.IsCastle)
            MBTextManager.SetTextVariable("ENTER_SETTLEMENT", "{=aa3kbW8j}Enter the Castle", false);
          else if (settlement.IsVillage)
            MBTextManager.SetTextVariable("ENTER_SETTLEMENT", "{=8UzRj1YW}Enter the Village", false);
          else
            MBTextManager.SetTextVariable("ENTER_SETTLEMENT", "{=eabR87ne}Enter the Settlement", false);
          return true;
        }
      }
      return false;
    }

    private void wait_menu_army_enter_settlement_on_consequence(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty && MobileParty.MainParty.CurrentSettlement == null)
      {
        EncounterManager.StartSettlementEncounter(MobileParty.MainParty, MobileParty.MainParty.Army.LeaderParty.LastVisitedSettlement);
      }
      else
      {
        Settlement currentSettlement = MobileParty.MainParty.CurrentSettlement;
        if (currentSettlement.IsTown)
          GameMenu.ActivateGameMenu("town");
        else if (currentSettlement.IsCastle)
          GameMenu.ActivateGameMenu("castle");
        else
          GameMenu.ActivateGameMenu("village");
      }
    }

    private bool wait_menu_army_leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return MobileParty.MainParty.Army != null && MobileParty.MainParty.MapEvent == null && MobileParty.MainParty.BesiegedSettlement == null;
    }

    private void wait_menu_army_leave_on_consequence(MenuCallbackArgs args)
    {
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Finish();
      else
        GameMenu.ExitToLast();
      if (Settlement.CurrentSettlement != null)
      {
        LeaveSettlementAction.ApplyForParty(MobileParty.MainParty);
        PartyBase.MainParty.SetVisualAsDirty();
      }
      MobileParty.MainParty.Army = (Army) null;
    }

    private void wait_menu_army_abandon_on_consequence(MenuCallbackArgs args)
    {
      ChangeClanInfluenceAction.Apply(Clan.PlayerClan, (float) -Campaign.Current.Models.DiplomacyModel.GetInfluenceCostOfAbandoningArmy());
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Finish();
      else
        GameMenu.ExitToLast();
      MobileParty.MainParty.Army = (Army) null;
    }

    private void OnTick(float dt)
    {
      if (MobileParty.MainParty.AttachedTo == null || !(Campaign.Current.CurrentMenuContext?.GameMenu?.StringId == "army_wait") || !(MobileParty.MainParty.AttachedTo.Army.AiBehaviorObject is Settlement aiBehaviorObject) || aiBehaviorObject.SiegeEvent == null || Hero.MainHero.PartyBelongedTo.Army.LeaderParty.BesiegedSettlement != aiBehaviorObject)
        return;
      PlayerSiege.StartPlayerSiege(BattleSideEnum.Attacker, settlement: aiBehaviorObject);
      PlayerSiege.StartSiegePreparation();
    }

    private void army_dispersed_continue_on_consequence(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.CurrentSettlement != null)
      {
        if (MobileParty.MainParty.CurrentSettlement.IsVillage)
          GameMenu.SwitchToMenu("village");
        else if (MobileParty.MainParty.CurrentSettlement.IsTown)
          GameMenu.SwitchToMenu(MobileParty.MainParty.CurrentSettlement.SiegeEvent != null ? "menu_siege_strategies" : "town");
        else if (MobileParty.MainParty.CurrentSettlement.IsCastle)
          GameMenu.SwitchToMenu(MobileParty.MainParty.CurrentSettlement.SiegeEvent != null ? "menu_siege_strategies" : "castle");
        else
          LeaveSettlementAction.ApplyForParty(MobileParty.MainParty);
      }
      else
        GameMenu.ExitToLast();
    }

    private bool army_dispersed_continue_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    [GameMenuInitializationHandler("army_wait_at_settlement")]
    private static void game_menu_army_wait_at_settlement_on_init(MenuCallbackArgs args)
    {
      Settlement settlement = Settlement.CurrentSettlement != null ? Settlement.CurrentSettlement : (MobileParty.MainParty.LastVisitedSettlement != null ? MobileParty.MainParty.LastVisitedSettlement : MobileParty.MainParty.AttachedTo.LastVisitedSettlement);
      args.MenuContext.SetBackgroundMeshName(settlement.SettlementComponent.WaitMeshName);
    }

    [GameMenuInitializationHandler("army_dispersed")]
    private static void game_menu_army_dispersed_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName("wait_fallback");
    }
  }
}
