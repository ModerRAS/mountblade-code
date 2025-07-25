// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CrimeCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CrimeCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnDailyTick));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnAfterGameCreated));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnAfterGameCreated));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroDeath));
      CampaignEvents.MakePeace.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnMakePeace));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnDailyTick()
    {
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        float crimeRatingChange = nonBanditFaction.DailyCrimeRatingChange;
        if (!nonBanditFaction.IsEliminated && !crimeRatingChange.ApproximatelyEqualsTo(0.0f))
          ChangeCrimeRatingAction.Apply((IFaction) nonBanditFaction, crimeRatingChange, false);
      }
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        float crimeRatingChange = kingdom.DailyCrimeRatingChange;
        if (!kingdom.IsEliminated && !crimeRatingChange.ApproximatelyEqualsTo(0.0f))
          ChangeCrimeRatingAction.Apply((IFaction) kingdom, crimeRatingChange, false);
      }
    }

    private void OnAfterGameCreated(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
    }

    private void AddGameMenus(CampaignGameStarter campaignGameSystemStarter)
    {
      campaignGameSystemStarter.AddGameMenu("town_inside_criminal", "{=XgA2JgVR}You are brought to the town square to face judgment.", new OnInitDelegate(CrimeCampaignBehavior.town_inside_criminal_on_init));
      campaignGameSystemStarter.AddGameMenuOption("town_inside_criminal", "criminal_inside_menu_pay_by_punishment", "{=8iDpmu0L}Accept corporal punishment", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_pay_by_punishment_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_pay_by_punishment_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_inside_criminal", "criminal_inside_menu_give_punishment_and_money", "{=Xi1wpR2L}Accept corporal punishment and pay {FINE}{GOLD_ICON}", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_punishment_and_money_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_punishment_and_money_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_inside_criminal", "criminal_inside_menu_give_your_life", "{=bVi0JKSx}You will be executed. You must face it as bravely as you can", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_your_life_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_your_life_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_inside_criminal", "criminal_inside_menu_pay_by_influence", "{=1cMS6415}Pay {FINE}{INFLUENCE_ICON}", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_influence_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_influence_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_inside_criminal", "criminal_inside_menu_pay_by_money", "{=870ZCp1J}Pay {FINE}{GOLD_ICON}", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_money_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_money_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_inside_criminal", "criminal_inside_menu_ignore_charges", "{=UQhRKJb9}Ignore the charges", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_ignore_charges_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_ignore_charges_on_consequence));
      campaignGameSystemStarter.AddGameMenu("town_discuss_criminal_surrender", "{=lwVwe4qU}You are discussing the terms of your surrender.", new OnInitDelegate(CrimeCampaignBehavior.town_discuss_criminal_surrender_on_init));
      campaignGameSystemStarter.AddGameMenuOption("town_discuss_criminal_surrender", "town_discuss_criminal_surrender_pay_by_punishment", "{=8iDpmu0L}Accept corporal punishment", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_pay_by_punishment_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_pay_by_punishment_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_discuss_criminal_surrender", "town_discuss_criminal_surrender_give_punishment_and_money", "{=Xi1wpR2L}Accept corporal punishment and pay {FINE}{GOLD_ICON}", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_punishment_and_money_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_punishment_and_money_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_discuss_criminal_surrender", "town_discuss_criminal_surrender_give_your_life", "{=VSzwMDJ2}You will be put to death", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_your_life_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_your_life_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_discuss_criminal_surrender", "town_discuss_criminal_surrender_pay_by_influence", "{=1cMS6415}Pay {FINE}{INFLUENCE_ICON}", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_influence_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_influence_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_discuss_criminal_surrender", "town_discuss_criminal_surrender_pay_by_money", "{=870ZCp1J}Pay {FINE}{GOLD_ICON}", new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_money_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.criminal_inside_menu_give_money_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("town_discuss_criminal_surrender", "town_discuss_criminal_surrender_back", GameTexts.FindText("str_back").ToString(), new GameMenuOption.OnConditionDelegate(CrimeCampaignBehavior.town_discuss_criminal_surrender_on_condition), new GameMenuOption.OnConsequenceDelegate(CrimeCampaignBehavior.town_discuss_criminal_surrender_back_on_consequence), true);
    }

    private void OnHeroDeath(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification)
    {
      if (victim != Hero.MainHero)
        return;
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        if (!nonBanditFaction.IsEliminated)
          ChangeCrimeRatingAction.Apply((IFaction) nonBanditFaction, -nonBanditFaction.MainHeroCrimeRating);
      }
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (!kingdom.IsEliminated)
          ChangeCrimeRatingAction.Apply((IFaction) kingdom, -kingdom.MainHeroCrimeRating);
      }
    }

    private void OnMakePeace(
      IFaction side1Faction,
      IFaction side2Faction,
      MakePeaceAction.MakePeaceDetail detail)
    {
      if (side1Faction != Hero.MainHero.MapFaction && side2Faction != Hero.MainHero.MapFaction)
        return;
      IFaction faction = side1Faction == Hero.MainHero.MapFaction ? side2Faction : side1Faction;
      float num = (float) Campaign.Current.Models.CrimeModel.DeclareWarCrimeRatingThreshold * 0.5f;
      if ((double) faction.MainHeroCrimeRating <= (double) num)
        return;
      ChangeCrimeRatingAction.Apply(faction, num - faction.MainHeroCrimeRating);
    }

    private static bool CanPayCriminalRatingValueWith(
      IFaction faction,
      CrimeModel.PaymentMethod paymentMethod)
    {
      if (Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(Settlement.CurrentSettlement.MapFaction))
      {
        if (paymentMethod == CrimeModel.PaymentMethod.Gold)
          return true;
        if (CrimeCampaignBehavior.IsCriminalPlayerInSameKingdomOf(faction))
        {
          if (paymentMethod == CrimeModel.PaymentMethod.Influence)
            return true;
        }
        else if (paymentMethod == CrimeModel.PaymentMethod.Punishment)
          return true;
      }
      else if (Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(Settlement.CurrentSettlement.MapFaction))
      {
        if (CrimeCampaignBehavior.IsCriminalPlayerInSameKingdomOf(faction))
        {
          if (paymentMethod == CrimeModel.PaymentMethod.Gold || paymentMethod == CrimeModel.PaymentMethod.Influence)
            return true;
        }
        else
        {
          if (paymentMethod.HasAnyFlag<CrimeModel.PaymentMethod>(CrimeModel.PaymentMethod.Execution))
            return Hero.MainHero.Gold < (int) PayForCrimeAction.GetClearCrimeCost(faction, CrimeModel.PaymentMethod.Gold);
          if (paymentMethod.HasAllFlags<CrimeModel.PaymentMethod>(CrimeModel.PaymentMethod.Gold | CrimeModel.PaymentMethod.Punishment))
            return true;
        }
      }
      return false;
    }

    private static bool IsCriminalPlayerInSameKingdomOf(IFaction faction)
    {
      Clan clan = faction as Clan;
      if (Hero.MainHero.Clan == faction || Hero.MainHero.Clan.Kingdom == faction)
        return true;
      return clan != null && Hero.MainHero.Clan.Kingdom == clan.Kingdom;
    }

    [GameMenuInitializationHandler("town_discuss_criminal_surrender")]
    [GameMenuInitializationHandler("town_inside_criminal")]
    public static void game_menu_town_criminal_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.Town.WaitMeshName);
    }

    public static void town_inside_criminal_on_init(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.CurrentSettlement != null)
        return;
      PlayerEncounter.EnterSettlement();
    }

    public static void town_discuss_criminal_surrender_on_init(MenuCallbackArgs args)
    {
    }

    public static bool criminal_inside_menu_pay_by_punishment_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Surrender;
      return CrimeCampaignBehavior.CanPayCriminalRatingValueWith(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Punishment);
    }

    public static void criminal_inside_menu_pay_by_punishment_on_consequence(MenuCallbackArgs args)
    {
      PayForCrimeAction.Apply(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Punishment);
      if (Hero.MainHero.DeathMark == KillCharacterAction.KillCharacterActionDetail.Murdered)
        return;
      if (Campaign.Current.CurrentMenuContext != null)
      {
        if (Settlement.CurrentSettlement.IsCastle)
          GameMenu.SwitchToMenu("castle_outside");
        else
          GameMenu.SwitchToMenu("town_outside");
      }
      else
        PlayerEncounter.Finish();
    }

    public static bool criminal_inside_menu_give_money_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Trade;
      int clearCrimeCost = (int) PayForCrimeAction.GetClearCrimeCost(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Gold);
      args.Text.SetTextVariable("FINE", clearCrimeCost);
      args.Text.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      if (Hero.MainHero.Gold < clearCrimeCost)
      {
        args.Tooltip = new TextObject("{=d0kbtGYn}You don't have enough gold.");
        args.IsEnabled = false;
      }
      return CrimeCampaignBehavior.CanPayCriminalRatingValueWith(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Gold);
    }

    public static void criminal_inside_menu_give_money_on_consequence(MenuCallbackArgs args)
    {
      PayForCrimeAction.Apply(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Gold);
      if (Settlement.CurrentSettlement.IsCastle)
        GameMenu.SwitchToMenu("castle_outside");
      else
        GameMenu.SwitchToMenu("town_outside");
    }

    public static bool criminal_inside_menu_give_influence_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Bribe;
      float clearCrimeCost = PayForCrimeAction.GetClearCrimeCost(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Influence);
      args.Text.SetTextVariable("FINE", clearCrimeCost.ToString("F1"));
      args.Text.SetTextVariable("INFLUENCE_ICON", "{=!}<img src=\"General\\Icons\\Influence@2x\" extend=\"7\">");
      if ((double) Clan.PlayerClan.Influence < (double) clearCrimeCost)
      {
        args.Tooltip = new TextObject("{=rMagXCrI}You don't have enough influence to get the charges dropped.");
        args.IsEnabled = false;
      }
      return CrimeCampaignBehavior.CanPayCriminalRatingValueWith(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Influence);
    }

    public static void criminal_inside_menu_give_influence_on_consequence(MenuCallbackArgs args)
    {
      PayForCrimeAction.Apply(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Influence);
      if (Settlement.CurrentSettlement.IsCastle)
        GameMenu.SwitchToMenu("castle_outside");
      else
        GameMenu.SwitchToMenu("town_outside");
    }

    public static bool criminal_inside_menu_give_punishment_and_money_on_condition(
      MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      int clearCrimeCost = (int) PayForCrimeAction.GetClearCrimeCost(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Gold);
      args.Text.SetTextVariable("FINE", clearCrimeCost);
      args.Text.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      if (Hero.MainHero.Gold < clearCrimeCost)
      {
        args.Tooltip = new TextObject("{=ETKyjOkJ}You don't have enough denars to pay the fine.");
        args.IsEnabled = false;
      }
      return CrimeCampaignBehavior.CanPayCriminalRatingValueWith(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Gold | CrimeModel.PaymentMethod.Punishment);
    }

    public static void criminal_inside_menu_give_punishment_and_money_on_consequence(
      MenuCallbackArgs args)
    {
      PayForCrimeAction.Apply(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Gold | CrimeModel.PaymentMethod.Punishment);
      if (Hero.MainHero.DeathMark == KillCharacterAction.KillCharacterActionDetail.Murdered)
        return;
      if (Campaign.Current.CurrentMenuContext != null)
      {
        if (Settlement.CurrentSettlement.IsCastle)
          GameMenu.SwitchToMenu("castle_outside");
        else
          GameMenu.SwitchToMenu("town_outside");
      }
      else
        PlayerEncounter.Finish();
    }

    public static bool criminal_inside_menu_give_your_life_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Surrender;
      return CrimeCampaignBehavior.CanPayCriminalRatingValueWith(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Execution);
    }

    public static void criminal_inside_menu_give_your_life_on_consequence(MenuCallbackArgs args)
    {
      PayForCrimeAction.Apply(Settlement.CurrentSettlement.MapFaction, CrimeModel.PaymentMethod.Execution);
    }

    public static bool criminal_inside_menu_ignore_charges_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return CrimeCampaignBehavior.IsCriminalPlayerInSameKingdomOf(Settlement.CurrentSettlement.MapFaction);
    }

    public static void criminal_inside_menu_ignore_charges_on_consequence(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement.IsCastle)
        GameMenu.SwitchToMenu("castle");
      else
        GameMenu.SwitchToMenu("town");
    }

    public static void town_discuss_criminal_surrender_back_on_consequence(MenuCallbackArgs args)
    {
      if (Settlement.CurrentSettlement.IsCastle)
        GameMenu.SwitchToMenu("castle_guard");
      else
        GameMenu.SwitchToMenu("town_guard");
    }

    public static bool town_discuss_criminal_surrender_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Submenu;
      return true;
    }
  }
}
