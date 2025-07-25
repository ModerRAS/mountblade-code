// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.SiegeAmbushCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class SiegeAmbushCampaignBehavior : CampaignBehaviorBase
  {
    private const int SiegeAmbushCooldownPeriodAsHours = 24;
    private CampaignTime _lastAmbushTime = CampaignTime.Never;

    public override void RegisterEvents()
    {
      CampaignEvents.OnAfterSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnAfterSessionLaunched));
      CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
      CampaignEvents.OnSiegeEventEndedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventEnded));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnded));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<CampaignTime>("_lastAmbushTime", ref this._lastAmbushTime);
    }

    private void OnAfterSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
    }

    private void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (!mapEvent.IsSiegeAmbush)
        return;
      this._lastAmbushTime = CampaignTime.Now;
    }

    private void OnSiegeEventEnded(SiegeEvent siegeEvent)
    {
      if (siegeEvent != PlayerSiege.PlayerSiegeEvent)
        return;
      this._lastAmbushTime = CampaignTime.Never;
    }

    private void HourlyTick()
    {
      if (PlayerSiege.PlayerSiegeEvent == null || !(this._lastAmbushTime == CampaignTime.Never) || !PlayerSiege.PlayerSiegeEvent.BesiegerCamp.IsPreparationComplete)
        return;
      this._lastAmbushTime = CampaignTime.Now;
    }

    private void OnMissionEnded(IMission mission)
    {
      MapEvent battle = PlayerEncounter.Battle;
      if ((battle != null ? (battle.IsSiegeAmbush ? 1 : 0) : 0) == 0)
        return;
      PlayerEncounter.Current.FinalizeBattle();
      PlayerEncounter.Current.SetIsSallyOutAmbush(false);
    }

    private bool CanMainHeroAmbush(out TextObject reason)
    {
      if ((double) this._lastAmbushTime.ElapsedHoursUntilNow < 24.0)
      {
        reason = new TextObject("{=lCYPxuWN}The enemy is alert, you cannot ambush right now.");
        return false;
      }
      if (Hero.MainHero.IsWounded)
      {
        reason = new TextObject("{=pQaQW1As}You cannot ambush right now due to your wounds.");
        return false;
      }
      SiegeEvent playerSiegeEvent = PlayerSiege.PlayerSiegeEvent;
      if (playerSiegeEvent.BesiegerCamp.LeaderParty.MapEvent != null && MobileParty.MainParty.MapEvent == null)
      {
        reason = new TextObject("{=GAh1gNYn}Enemies are already engaged in battle.");
        return false;
      }
      if (playerSiegeEvent.GetPreparedSiegeEnginesAsDictionary(playerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker)).Count <= 0)
      {
        reason = new TextObject("{=f4g7r0xF}The enemy does not have any vulnerabilities.");
        return false;
      }
      if (playerSiegeEvent.BesiegedSettlement.SettlementWallSectionHitPointsRatioList.AnyQ<float>((Func<float, bool>) (r => (double) r <= 0.0)))
      {
        reason = new TextObject("{=Nzt8Xkro}You cannot ambush because the settlement walls are breached.");
        return false;
      }
      reason = TextObject.Empty;
      return true;
    }

    private void AddGameMenus(CampaignGameStarter campaignGameSystemStarter)
    {
      campaignGameSystemStarter.AddGameMenuOption("menu_siege_strategies", "menu_siege_strategies_ambush", "{=LEKzuGzi}Ambush", new GameMenuOption.OnConditionDelegate(this.menu_siege_strategies_ambush_condition), new GameMenuOption.OnConsequenceDelegate(this.menu_siege_strategies_ambush_on_consequence));
    }

    private bool menu_siege_strategies_ambush_condition(MenuCallbackArgs args)
    {
      if (PlayerSiege.PlayerSiegeEvent == null || PlayerSiege.PlayerSide != BattleSideEnum.Defender)
        return false;
      args.optionLeaveType = GameMenuOption.LeaveType.SiegeAmbush;
      TextObject reason;
      if (!this.CanMainHeroAmbush(out reason))
      {
        args.IsEnabled = false;
        args.Tooltip = reason;
      }
      return true;
    }

    private void menu_siege_strategies_ambush_on_consequence(MenuCallbackArgs args)
    {
      this._lastAmbushTime = CampaignTime.Now;
      if (PlayerEncounter.EncounterSettlement != null && PlayerEncounter.EncounterSettlement.SiegeEvent != null && !PlayerEncounter.EncounterSettlement.MapFaction.IsAtWarWith(MobileParty.MainParty.MapFaction))
        PlayerEncounter.RestartPlayerEncounter(PartyBase.MainParty, PlayerEncounter.EncounterSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Party, false);
      PlayerEncounter.Current.SetIsSallyOutAmbush(true);
      PlayerEncounter.StartBattle();
      MenuHelper.EncounterAttackConsequence(args);
    }
  }
}
