// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PlayerCaptivityCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PlayerCaptivityCampaignBehavior : CampaignBehaviorBase, ICaptivityCampaignBehavior
  {
    private const float PlayerExecutionProbability = 0.02f;
    private const float PlayerExecutionRelationLimit = -30f;
    private const int MaxDaysOfImprisonment = 7;
    private bool _isMainHeroExecuted;
    private Hero _mainHeroExecuter;

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<bool>("_isPlayerExecuted", ref this._isMainHeroExecuted);
      dataStore.SyncData<Hero>("_mainHeroExecuter", ref this._mainHeroExecuter);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnPrisonerTaken));
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
    }

    private void OnGameMenuOpened(MenuCallbackArgs args)
    {
      if (!this._isMainHeroExecuted)
        return;
      this._isMainHeroExecuted = false;
      KillCharacterAction.ApplyByExecution(Hero.MainHero, this._mainHeroExecuter);
    }

    private void OnPrisonerTaken(PartyBase capturer, Hero prisoner)
    {
      if (prisoner != Hero.MainHero || capturer.LeaderHero == null || (double) capturer.LeaderHero.GetRelation(prisoner) >= -30.0 || (double) MBRandom.RandomFloat > 0.019999999552965164)
        return;
      this._isMainHeroExecuted = true;
      this._mainHeroExecuter = capturer.LeaderHero;
    }

    private Hero FindEnemyPrisonerToSwapWithPlayer()
    {
      IFaction mapFaction1 = Hero.MainHero.MapFaction;
      IFaction mapFaction2 = PlayerCaptivity.CaptorParty.MapFaction;
      foreach (Settlement settlement in (List<Settlement>) mapFaction1.Settlements)
      {
        foreach (CharacterObject prisonerHero in settlement.Party.PrisonerHeroes)
        {
          if (prisonerHero.HeroObject.MapFaction == mapFaction2)
            return prisonerHero.HeroObject;
        }
      }
      return (Hero) null;
    }

    private void AddGameMenus(CampaignGameStarter gameSystemInitializer)
    {
      gameSystemInitializer.AddGameMenu("menu_captivity_end_no_more_enemies", "{=gOsori1b}Your captors have no more use for you and aren't in a murderous mood, so they let you go.", new OnInitDelegate(this.game_menu_captivity_escape_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_no_more_enemies", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => PlayerCaptivity.EndCaptivity()));
      gameSystemInitializer.AddGameMenu("menu_captivity_end_by_ally_party_saved", "{=J2Iok9lT}An ally has paid your ransom.", new OnInitDelegate(this.game_menu_captivity_escape_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_by_ally_party_saved", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => PlayerCaptivity.EndCaptivity()));
      gameSystemInitializer.AddGameMenu("menu_captivity_end_by_party_removed", "{=8gF5qYw5}Your captors have been dispersed, and you are able to escape.", new OnInitDelegate(this.game_menu_captivity_escape_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_by_party_removed", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => PlayerCaptivity.EndCaptivity()));
      gameSystemInitializer.AddGameMenu("menu_captivity_end_wilderness_escape", "{=EVODEPGw}After painful days of being dragged about as a prisoner, you find a chance and escape from your captors!", new OnInitDelegate(this.game_menu_captivity_escape_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_wilderness_escape", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => PlayerCaptivity.EndCaptivity()));
      gameSystemInitializer.AddGameMenu("menu_escape_captivity_during_battle", "{=HYGKcgh6}Your captors engage in a battle. You take advantage of the confusion and escape.", new OnInitDelegate(this.game_menu_captivity_escape_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_escape_captivity_during_battle", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => PlayerCaptivity.EndCaptivity()));
      gameSystemInitializer.AddGameMenu("menu_released_after_battle", "{=GeoTk5b9}Your captors engage in a battle and they lost, you are released after battle.", new OnInitDelegate(this.game_menu_captivity_escape_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_released_after_battle", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args =>
      {
        Hero.MainHero.PartyBelongedToAsPrisoner.MobileParty.Ai.SetDoNotAttackMainParty(12);
        PlayerEncounter.ProtectPlayerSide();
        GameMenu.ExitToLast();
      }));
      gameSystemInitializer.AddGameMenu("menu_captivity_end_propose_ransom_wilderness", "{=j5OqFCa6}After painful days of being dragged about as a prisoner, suddenly one of your captors comes near you with an offer; he proposes to free you in return for {MONEY_AMOUNT}{GOLD_ICON} of your hidden wealth. You decide to...", new OnInitDelegate(this.menu_captivity_end_propose_ransom_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_propose_ransom_wilderness", "mno_captivity_end_ransom_accept", "{=buKXELE3}Accept the offer.", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Escape;
        return true;
      }), new GameMenuOption.OnConsequenceDelegate(this.game_menu_captivity_end_by_ransom_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_propose_ransom_wilderness", "captivity_end_ransom_deny", "{=L4Se89I6}Refuse him, wait for a better offer.", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Wait;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.ExitToLast()));
      gameSystemInitializer.AddGameMenu("menu_captivity_transfer_to_town", "{=ZEvChv7b}Your captors take you to {TOWN_NAME}. You are thrown into the dungeon there...", (OnInitDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        MBTextManager.SetTextVariable("TOWN_NAME", PlayerCaptivity.CaptorParty.Settlement.Name, false);
        PlayerCaptivity.CaptorParty.SetAsCameraFollowParty();
      }));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_transfer_to_town", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args =>
      {
        GameMenu.ExitToLast();
        GameMenu.ActivateGameMenu("settlement_wait");
        Campaign.Current.TimeControlMode = Campaign.Current.LastTimeControlMode;
      }));
      gameSystemInitializer.AddGameMenu("menu_captivity_end_exchanged_with_prisoner", "{=qoqbaHCE}After days of imprisonment, you are finally set free when your captors exchange you with {PRISONER_LORD.LINK}.", new OnInitDelegate(this.game_menu_captivity_end_by_deal_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_exchanged_with_prisoner", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args =>
      {
        Hero.MainHero.PartyBelongedToAsPrisoner.MobileParty.Ai.SetDoNotAttackMainParty(12);
        PlayerEncounter.ProtectPlayerSide();
        GameMenu.ExitToLast();
      }));
      gameSystemInitializer.AddGameMenu("menu_captivity_end_propose_ransom_in_prison", "{=pFzj52dE}You spend long hours in the sunless dank of the dungeon, more than you can count. Suddenly one of your captors enters your cell with an offer; he proposes to free you in return for {MONEY_AMOUNT}{GOLD_ICON} of your hidden wealth. You decide to...", new OnInitDelegate(this.menu_captivity_end_propose_ransom_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_propose_ransom_in_prison", "mno_captivity_end_ransom_accept", "{=buKXELE3}Accept the offer.", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Escape;
        return true;
      }), new GameMenuOption.OnConsequenceDelegate(this.game_menu_captivity_end_by_ransom_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_propose_ransom_in_prison", "captivity_end_ransom_deny", "{=L4Se89I6}Refuse him, wait for a better offer.", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Wait;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.ExitToLast()));
      gameSystemInitializer.AddGameMenu("menu_captivity_castle_remain", "{=BLrwIj7s}More days pass in the darkness of your cell. You get through them as best you can, enduring the kicks and curses of the guards, watching your underfed body waste away more and more...", (OnInitDelegate) null);
      gameSystemInitializer.AddGameMenuOption("menu_captivity_castle_remain", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.ExitToLast()));
      gameSystemInitializer.AddGameMenu("menu_captivity_end_prison_escape", "{=85kgOyBj}After painful days of being imprisoned in dungeon, you find a chance break free and escape from the settlement!", new OnInitDelegate(this.game_menu_captivity_escape_on_init));
      gameSystemInitializer.AddGameMenuOption("menu_captivity_end_prison_escape", "mno_continue", "{=veWOovVv}Continue...", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Continue;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => PlayerCaptivity.EndCaptivity()));
    }

    private void game_menu_captivity_escape_on_init(MenuCallbackArgs args)
    {
    }

    private void game_menu_captivity_end_by_deal_on_init(MenuCallbackArgs args)
    {
      StringHelpers.SetCharacterProperties("PRISONER_LORD", this.FindEnemyPrisonerToSwapWithPlayer().CharacterObject);
    }

    private void game_menu_captivity_end_by_ransom_on_init(MenuCallbackArgs args)
    {
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, Campaign.Current.PlayerCaptivity.CurrentRansomAmount);
      PlayerCaptivity.EndCaptivity();
    }

    private void menu_captivity_end_propose_ransom_on_init(MenuCallbackArgs args)
    {
      MBTextManager.SetTextVariable("MONEY_AMOUNT", Campaign.Current.PlayerCaptivity.CurrentRansomAmount);
    }

    public void CheckCaptivityChange(float dt)
    {
      if (PlayerCaptivity.CaptorParty.IsMobile && !PlayerCaptivity.CaptorParty.MobileParty.IsActive)
        GameMenu.SwitchToMenu("menu_captivity_end_by_party_removed");
      else if (PlayerCaptivity.CaptorParty.IsMobile && PlayerCaptivity.CaptorParty.MapFaction == Hero.MainHero.Clan)
        GameMenu.SwitchToMenu("menu_captivity_end_by_ally_party_saved");
      else if (!FactionManager.IsAtWarAgainstFaction(PlayerCaptivity.CaptorParty.MapFaction, MobileParty.MainParty.MapFaction) && (PlayerCaptivity.CaptorParty.MapFaction == MobileParty.MainParty.MapFaction || !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(PlayerCaptivity.CaptorParty.MapFaction) && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(PlayerCaptivity.CaptorParty.MapFaction)))
        GameMenu.SwitchToMenu("menu_captivity_end_no_more_enemies");
      else if (PlayerCaptivity.CaptorParty.IsMobile && PlayerCaptivity.CaptorParty.MobileParty.CurrentSettlement != null && PlayerCaptivity.CaptorParty.MobileParty.CurrentSettlement.IsTown && PlayerCaptivity.CaptorParty.MapFaction == PlayerCaptivity.CaptorParty.MobileParty.CurrentSettlement.MapFaction)
      {
        PlayerCaptivity.LastCheckTime = CampaignTime.Now;
        if (Game.Current.GameStateManager.ActiveState is MapState)
          Campaign.Current.LastTimeControlMode = Campaign.Current.TimeControlMode;
        PlayerCaptivity.CaptorParty = PlayerCaptivity.CaptorParty.MobileParty.CurrentSettlement.Party;
        GameMenu.SwitchToMenu("menu_captivity_transfer_to_town");
      }
      else if (PlayerCaptivity.CaptorParty.IsSettlement && PlayerCaptivity.CaptorParty.Settlement.IsVillage || PlayerCaptivity.CaptorParty.IsMobile && (PlayerCaptivity.CaptorParty.MobileParty.IsVillager || PlayerCaptivity.CaptorParty.MobileParty.IsCaravan))
      {
        GameMenu.SwitchToMenu("menu_captivity_end_no_more_enemies");
      }
      else
      {
        if (!this.CheckTimeElapsedMoreThanHours(PlayerCaptivity.LastCheckTime, (float) ((0.40000000596046448 + (double) Campaign.Current.PlayerProgress * 0.40000000596046448) * 24.0 * (Hero.MainHero.PartyBelongedToAsPrisoner.IsSettlement ? 2.0 : (!Hero.MainHero.PartyBelongedToAsPrisoner.IsMobile || Hero.MainHero.PartyBelongedToAsPrisoner.LeaderHero == null ? 1.0 : 1.5)))))
          return;
        PlayerCaptivity.LastCheckTime = CampaignTime.Now;
        if (Campaign.Current.PlayerCaptivity.CountOfOffers == 0)
          Campaign.Current.PlayerCaptivity.SetRansomAmount();
        else
          Campaign.Current.PlayerCaptivity.CurrentRansomAmount = MathF.Max((int) ((double) Campaign.Current.PlayerCaptivity.CurrentRansomAmount * 0.800000011920929 - (double) Campaign.Current.PlayerCaptivity.CountOfOffers * 0.05000000074505806), 1);
        float randomFloat = MBRandom.RandomFloat;
        float num1 = 0.0f;
        if (PlayerCaptivity.CaptorParty.IsMobile && PlayerCaptivity.CaptorParty.MapEvent != null)
        {
          int num2 = 0;
          int num3 = 0;
          foreach (PartyBase involvedParty in PlayerCaptivity.CaptorParty.MapEvent.InvolvedParties)
          {
            if (involvedParty.Side == PlayerCaptivity.CaptorParty.Side)
              num2 += involvedParty.MemberRoster.TotalManCount;
            else
              num3 += involvedParty.MemberRoster.TotalManCount;
          }
          if ((double) num2 < (double) num3 * 3.0 + 1.0)
            num1 = (float) (1.0 - (double) num2 / ((double) num3 * 3.0 + 1.0)) / 2f;
        }
        float x = (float) (((double) Campaign.Current.PlayerCaptivity.CountOfOffers + 1.0) / 8.0);
        if ((double) num1 > 0.0)
          x = MathF.Pow(x, 1f - num1);
        if (Hero.MainHero.PartyBelongedToAsPrisoner != null)
        {
          if (Hero.MainHero.PartyBelongedToAsPrisoner.IsMobile && Hero.MainHero.PartyBelongedToAsPrisoner.LeaderHero != null)
            x *= MathF.Sqrt(x);
          else if (Hero.MainHero.PartyBelongedToAsPrisoner.IsSettlement)
          {
            if (Hero.MainHero.PartyBelongedToAsPrisoner.Settlement.IsHideout)
              x *= MathF.Sqrt(x);
            else
              x *= x;
          }
          if (Hero.MainHero.PartyBelongedToAsPrisoner.IsMobile && Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.FleetFooted))
            x *= 1f + DefaultPerks.Roguery.FleetFooted.SecondaryBonus;
        }
        if ((double) randomFloat < (double) x)
        {
          if (PlayerCaptivity.CaptorParty.IsMobile && PlayerCaptivity.CaptorParty.MapEvent != null)
            GameMenu.SwitchToMenu("menu_escape_captivity_during_battle");
          else if (Hero.MainHero.CurrentSettlement == null)
            GameMenu.SwitchToMenu("menu_captivity_end_wilderness_escape");
          else
            GameMenu.SwitchToMenu("menu_captivity_end_prison_escape");
        }
        else
        {
          ++Campaign.Current.PlayerCaptivity.CountOfOffers;
          if ((double) randomFloat >= 0.5 || Campaign.Current.PlayerCaptivity.CurrentRansomAmount > Hero.MainHero.Gold || Hero.MainHero.PartyBelongedToAsPrisoner?.MapEvent != null)
            return;
          if (Hero.MainHero.CurrentSettlement != null)
            GameMenu.SwitchToMenu("menu_captivity_end_propose_ransom_in_prison");
          else
            GameMenu.SwitchToMenu("menu_captivity_end_propose_ransom_wilderness");
        }
      }
    }

    private bool CheckTimeElapsedMoreThanHours(CampaignTime eventBeginTime, float hoursToWait)
    {
      float elapsedHoursUntilNow = eventBeginTime.ElapsedHoursUntilNow;
      float randomNumber = PlayerCaptivity.RandomNumber;
      return (double) hoursToWait * (0.5 + (double) randomNumber) < (double) elapsedHoursUntilNow;
    }
  }
}
