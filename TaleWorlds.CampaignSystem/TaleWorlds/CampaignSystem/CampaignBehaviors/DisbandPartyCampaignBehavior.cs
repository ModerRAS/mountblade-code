// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.DisbandPartyCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class DisbandPartyCampaignBehavior : 
    CampaignBehaviorBase,
    IDisbandPartyCampaignBehavior,
    ICampaignBehavior
  {
    private const int DisbandDelayTimeAsHours = 24;
    private const int RemoveDisbandingPartyAfterHoldForHours = 3;
    private const int DisbandPartySizeLimitForAIParties = 10;
    private Dictionary<MobileParty, CampaignTime> _partiesThatWaitingToDisband = new Dictionary<MobileParty, CampaignTime>();

    public override void RegisterEvents()
    {
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
      CampaignEvents.OnPartyDisbandStartedEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyDisbandStarted));
      CampaignEvents.OnPartyDisbandCanceledEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyDisbandCanceled));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
      CampaignEvents.OnHeroTeleportationRequestedEvent.AddNonSerializedListener((object) this, new Action<Hero, Settlement, MobileParty, TeleportHeroAction.TeleportationDetail>(this.OnHeroTeleportationRequested));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
      CampaignEvents.OnPartyDisbandedEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnPartyDisbanded));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.HourlyTickParty));
    }

    public bool IsPartyWaitingForDisband(MobileParty party)
    {
      return this._partiesThatWaitingToDisband.ContainsKey(party);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<MobileParty, CampaignTime>>("_partiesThatWaitingToDisband", ref this._partiesThatWaitingToDisband);
    }

    private void OnGameLoadFinished()
    {
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        for (int index1 = kingdom.Armies.Count - 1; index1 >= 0; --index1)
        {
          Army army = kingdom.Armies[index1];
          for (int index2 = army.Parties.Count - 1; index2 >= 0; --index2)
          {
            MobileParty party = army.Parties[index2];
            if (army.LeaderParty != party && party.LeaderHero == null)
            {
              DisbandPartyAction.StartDisband(party);
              party.Army = (Army) null;
            }
          }
          if (army.LeaderParty.LeaderHero == null)
            DisbandPartyAction.StartDisband(army.LeaderParty);
        }
      }
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private void OnPartyDisbandStarted(MobileParty party)
    {
      if (party.ActualClan != Clan.PlayerClan && party.MemberRoster.Count >= 10)
      {
        Hero heroToBeMoved = (Hero) null;
        foreach (Hero hero in (List<Hero>) party.ActualClan.Heroes)
        {
          if (hero.PartyBelongedTo == null && hero.IsActive && hero.DeathMark == KillCharacterAction.KillCharacterActionDetail.None && hero.CurrentSettlement != null && hero.GovernorOf == null && (!hero.CurrentSettlement.IsUnderSiege || !hero.CurrentSettlement.IsUnderRaid))
          {
            heroToBeMoved = hero;
            break;
          }
        }
        if (heroToBeMoved != null)
          TeleportHeroAction.ApplyDelayedTeleportToPartyAsPartyLeader(heroToBeMoved, party);
        else
          this._partiesThatWaitingToDisband.Add(party, CampaignTime.HoursFromNow(24f));
      }
      else
      {
        if (party.IsCaravan && party.ActualClan == Clan.PlayerClan)
        {
          party.Ai.SetDoNotMakeNewDecisions(true);
          Settlement targetSettlement;
          this.GetTargetSettlementForDisbandingPlayerClanCaravan(party, out targetSettlement);
          if (targetSettlement != null)
            party.Ai.SetMoveGoToSettlement(targetSettlement);
        }
        this._partiesThatWaitingToDisband.Add(party, CampaignTime.HoursFromNow(24f));
      }
    }

    private void OnPartyDisbandCanceled(MobileParty party)
    {
      if (!this._partiesThatWaitingToDisband.ContainsKey(party))
        return;
      this._partiesThatWaitingToDisband.Remove(party);
    }

    private void HourlyTick()
    {
      List<MobileParty> mobilePartyList = new List<MobileParty>();
      foreach (KeyValuePair<MobileParty, CampaignTime> keyValuePair in this._partiesThatWaitingToDisband)
      {
        if (keyValuePair.Value.IsPast)
        {
          keyValuePair.Key.IsDisbanding = true;
          mobilePartyList.Add(keyValuePair.Key);
        }
      }
      foreach (MobileParty key in mobilePartyList)
        this._partiesThatWaitingToDisband.Remove(key);
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (!this._partiesThatWaitingToDisband.ContainsKey(mobileParty))
        return;
      this._partiesThatWaitingToDisband.Remove(mobileParty);
    }

    private void OnHeroTeleportationRequested(
      Hero hero,
      Settlement targetSettlement,
      MobileParty targetParty,
      TeleportHeroAction.TeleportationDetail detail)
    {
      if (targetParty == null || detail != TeleportHeroAction.TeleportationDetail.DelayedTeleportToPartyAsPartyLeader || !this._partiesThatWaitingToDisband.ContainsKey(targetParty))
        return;
      this._partiesThatWaitingToDisband.Remove(targetParty);
    }

    private void OnHeroPrisonerTaken(PartyBase capturer, Hero prisoner)
    {
      if (prisoner != Hero.MainHero)
        return;
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) Clan.PlayerClan.WarPartyComponents)
      {
        if (warPartyComponent.MobileParty != null && warPartyComponent.MobileParty.LeaderHero == null)
          CampaignEventDispatcher.Instance.OnPartyLeaderChangeOfferCanceled(warPartyComponent.MobileParty);
      }
    }

    private void DailyTickParty(MobileParty mobileParty)
    {
      if (!mobileParty.IsDisbanding || mobileParty.MapEvent != null || !mobileParty.IsActive || mobileParty.TargetSettlement == null)
        return;
      this.CheckDisbandedPartyDaily(mobileParty, mobileParty.TargetSettlement);
    }

    private void OnSettlementLeft(MobileParty mobileParty, Settlement settlement)
    {
      if (!mobileParty.IsCaravan || mobileParty.ActualClan != Clan.PlayerClan || mobileParty.IsDisbanding || !this._partiesThatWaitingToDisband.ContainsKey(mobileParty) || mobileParty.CurrentSettlement != null || mobileParty.TargetSettlement == null)
        return;
      Settlement targetSettlement;
      this.GetTargetSettlementForDisbandingPlayerClanCaravan(mobileParty, out targetSettlement);
      mobileParty.Ai.SetMoveGoToSettlement(targetSettlement);
    }

    private void HourlyTickParty(MobileParty party)
    {
      if (party.Ai.DefaultBehavior != AiBehavior.Hold || !party.Ai.DoNotMakeNewDecisions || !party.IsDisbanding && !this._partiesThatWaitingToDisband.ContainsKey(party))
        return;
      Settlement targetSettlement;
      this.GetTargetSettlementForDisbandingPlayerClanCaravan(party, out targetSettlement);
      if (targetSettlement == null)
        return;
      party.Ai.SetMoveGoToSettlement(targetSettlement);
    }

    private void GetTargetSettlementForDisbandingPlayerClanCaravan(
      MobileParty mobileParty,
      out Settlement targetSettlement)
    {
      float num1 = 0.0f;
      targetSettlement = (Settlement) null;
      foreach (Settlement settlement in (List<Settlement>) mobileParty.MapFaction.Settlements)
      {
        if (settlement.IsFortification)
        {
          float targetSettlementScore = DisbandPartyCampaignBehavior.CalculateTargetSettlementScore(mobileParty, settlement);
          if ((double) targetSettlementScore > (double) num1)
          {
            targetSettlement = settlement;
            num1 = targetSettlementScore;
          }
        }
      }
      if (targetSettlement != null)
        return;
      int num2 = -1;
      do
      {
        num2 = SettlementHelper.FindNextSettlementAroundMapPoint((IMapPoint) mobileParty, 40f, num2);
        if (num2 >= 0)
        {
          Settlement settlement = Settlement.All[num2];
          if (settlement.OwnerClan != null && !settlement.OwnerClan.IsAtWarWith(mobileParty.MapFaction) && settlement.IsFortification)
          {
            float targetSettlementScore = DisbandPartyCampaignBehavior.CalculateTargetSettlementScore(mobileParty, settlement);
            if ((double) targetSettlementScore > (double) num1)
            {
              targetSettlement = settlement;
              num1 = targetSettlementScore;
            }
          }
          if (targetSettlement == null)
            targetSettlement = SettlementHelper.FindNearestFortification((Func<Settlement, bool>) (s => s.OwnerClan != null && !s.OwnerClan.IsAtWarWith(mobileParty.MapFaction)));
        }
      }
      while (num2 >= 0);
    }

    private static float CalculateTargetSettlementScore(
      MobileParty disbandParty,
      Settlement settlement)
    {
      double num1 = (double) MathF.Pow((float) (1.0 - 0.949999988079071 * ((double) MathF.Min(Campaign.MapDiagonal, Campaign.Current.Models.MapDistanceModel.GetDistance(disbandParty, settlement)) / (double) Campaign.MapDiagonal)), 3f);
      float num2 = disbandParty.Party.Owner?.Clan == settlement.OwnerClan ? 1f : (disbandParty.Party.Owner?.MapFaction == settlement.MapFaction ? 0.1f : 0.01f);
      float num3 = disbandParty.DefaultBehavior != AiBehavior.GoToSettlement || disbandParty.TargetSettlement != settlement ? 0.3f : 1f;
      double num4 = (double) num2;
      return (float) (num1 * num4) * num3;
    }

    private void OnPartyDisbanded(MobileParty disbandParty, Settlement relatedSettlement)
    {
      if (relatedSettlement == null)
        return;
      if (relatedSettlement.IsFortification)
      {
        if (relatedSettlement.Town.GarrisonParty == null || relatedSettlement.Town.GarrisonParty.MapEvent != null)
          return;
        this.MergeDisbandPartyToFortification(disbandParty, relatedSettlement.Town.GarrisonParty.Party, relatedSettlement);
      }
      else
      {
        if (!relatedSettlement.IsVillage || relatedSettlement.Village.VillageState == Village.VillageStates.BeingRaided)
          return;
        this.MergeDisbandPartyToVillage(disbandParty, relatedSettlement);
      }
    }

    private void MergeDisbandPartyToFortification(
      MobileParty disbandParty,
      PartyBase mergeToParty,
      Settlement settlement)
    {
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) disbandParty.PrisonRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero)
        {
          if (!mergeToParty.MapFaction.IsAtWarWith(troopRosterElement.Character.HeroObject.MapFaction))
            EndCaptivityAction.ApplyByPeace(troopRosterElement.Character.HeroObject);
          else
            TransferPrisonerAction.Apply(troopRosterElement.Character, disbandParty.Party, settlement.Party);
        }
        else
          mergeToParty.AddPrisoner(troopRosterElement.Character, troopRosterElement.Number);
      }
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) disbandParty.MemberRoster.GetTroopRoster())
      {
        disbandParty.MemberRoster.RemoveTroop(troopRosterElement.Character, troopRosterElement.Number);
        if (troopRosterElement.Character.IsHero && troopRosterElement.Character.HeroObject.IsAlive)
          EnterSettlementAction.ApplyForCharacterOnly(troopRosterElement.Character.HeroObject, settlement);
        else
          mergeToParty.MemberRoster.AddToCounts(troopRosterElement.Character, troopRosterElement.Number, woundedCount: troopRosterElement.WoundedNumber, xpChange: troopRosterElement.Xp);
      }
    }

    private void MergeDisbandPartyToVillage(MobileParty disbandParty, Settlement settlement)
    {
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) disbandParty.PrisonRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero)
          EndCaptivityAction.ApplyByEscape(troopRosterElement.Character.HeroObject);
      }
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) disbandParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero && troopRosterElement.Character.HeroObject.IsAlive)
        {
          disbandParty.MemberRoster.RemoveTroop(troopRosterElement.Character);
          EnterSettlementAction.ApplyForCharacterOnly(troopRosterElement.Character.HeroObject, settlement);
        }
      }
      float num = (float) disbandParty.MemberRoster.TotalManCount * 0.5f;
      settlement.Militia += num;
    }

    private void CheckDisbandedPartyDaily(MobileParty disbandParty, Settlement settlement)
    {
      if (disbandParty.MemberRoster.Count == 0)
        DestroyPartyAction.Apply((PartyBase) null, disbandParty);
      else if (settlement == null && (double) disbandParty.StationaryStartTime.ElapsedHoursUntilNow >= 3.0)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) disbandParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character.IsHero && !troopRosterElement.Character.IsPlayerCharacter && !troopRosterElement.Character.HeroObject.IsDead)
            MakeHeroFugitiveAction.Apply(troopRosterElement.Character.HeroObject);
        }
        DestroyPartyAction.Apply((PartyBase) null, disbandParty);
      }
      else
      {
        if (settlement == null || settlement != disbandParty.CurrentSettlement)
          return;
        DestroyPartyAction.ApplyForDisbanding(disbandParty, settlement);
      }
    }

    private void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("disbanding_leaderless_party_start", "start", "disbanding_leaderless_party_start_response", "{=!}{EXPLANATION}", new ConversationSentence.OnConditionDelegate(this.disbanding_leaderless_party_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 500);
      campaignGameStarter.AddPlayerLine("disbanding_leaderless_party_answer_take_party", "disbanding_leaderless_party_start_response", "close_window", "{=eyZo8ZTk}Let me inspect the party troops.", new ConversationSentence.OnConditionDelegate(this.disbanding_leaderless_party_join_main_party_answer_condition), new ConversationSentence.OnConsequenceDelegate(this.disbanding_leaderless_party_join_main_party_answer_on_consequence));
      campaignGameStarter.AddPlayerLine("disbanding_leaderless_party_answer_attack_neutral", "disbanding_leaderless_party_start_response", "attack_disbanding_party_neutral_response", "{=SXgm2b1M}You're not going anywhere. Not with your valuables, anyway.", new ConversationSentence.OnConditionDelegate(this.attack_neutral_disbanding_party_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("disbanding_leaderless_party_answer_attack_neutral_di", "attack_disbanding_party_neutral_response", "attack_disbanding_party_neutral_player_response", "{=CgS44dOE}Are you mad? We're not your enemy.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("disbanding_leaderless_party_answer_attack_neutral_2", "attack_disbanding_party_neutral_player_response", "close_window", "{=Mt5F4wE2}No, you're my prey. Prepare to fight!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.attack_disbanding_party_consequence));
      campaignGameStarter.AddPlayerLine("disbanding_leaderless_party_answer_attack_neutral_3", "attack_disbanding_party_neutral_player_response", "close_window", "{=XrQBTVis}I don't know what I was thinking. Go on, then...", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.disbanding_leaderless_party_answer_on_consequence));
      campaignGameStarter.AddPlayerLine("disbanding_leaderless_party_answer_attack_enemy", "disbanding_leaderless_party_start_response", "attack_disbanding_enemy_response", "{=WwLy9Src}You know we're at war. I can't just let you go.", new ConversationSentence.OnConditionDelegate(this.attack_enemy_disbanding_party_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("disbanding_leaderless_party_answer", "attack_disbanding_enemy_response", "close_window", "{=jBN2LlgF}We'll fight to our last drop of blood!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.attack_disbanding_party_consequence));
      campaignGameStarter.AddPlayerLine("disbanding_leaderless_party_answer_2", "disbanding_leaderless_party_start_response", "close_window", "{=disband_party_campaign_behaviorbdisbanding_leaderless_party_answer}Well... Go on, then.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.disbanding_leaderless_party_answer_on_consequence));
    }

    private bool disbanding_leaderless_party_start_on_condition()
    {
      int num = MobileParty.ConversationParty == null || !MobileParty.ConversationParty.IsLordParty ? 0 : (MobileParty.ConversationParty.LeaderHero == null || MobileParty.ConversationParty.IsDisbanding ? 1 : (this.IsPartyWaitingForDisband(MobileParty.ConversationParty) ? 1 : 0));
      if (num == 0)
        return num != 0;
      if (MobileParty.ConversationParty.LeaderHero == null)
      {
        if (MobileParty.ConversationParty.TargetSettlement != null)
        {
          TextObject text = new TextObject("{=9IwzVbJf}We recently lost our leader, now we are traveling to {TARGET_SETTLEMENT}. We will rejoin the garrison unless we are assigned a new leader.");
          text.SetTextVariable("TARGET_SETTLEMENT", MobileParty.ConversationParty.TargetSettlement.EncyclopediaLinkWithName);
          MBTextManager.SetTextVariable("EXPLANATION", text, false);
          return num != 0;
        }
        MBTextManager.SetTextVariable("EXPLANATION", new TextObject("{=COEifaao}We recently lost our leader. We are now waiting for new orders."), false);
        return num != 0;
      }
      if (MobileParty.ConversationParty.TargetSettlement != null)
      {
        TextObject text = new TextObject("{=uZIlfFa2}We're disbanding. We're all going to {TARGET_SETTLEMENT_LINK}, then we're going our separate ways.");
        text.SetTextVariable("TARGET_SETTLEMENT_LINK", MobileParty.ConversationParty.TargetSettlement.EncyclopediaLinkWithName);
        MBTextManager.SetTextVariable("EXPLANATION", text, false);
        return num != 0;
      }
      MBTextManager.SetTextVariable("EXPLANATION", new TextObject("{=G1PN6ku4}We're disbanding."), false);
      return num != 0;
    }

    private bool disbanding_leaderless_party_join_main_party_answer_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.Party.Owner != null && MobileParty.ConversationParty.Party.Owner.Clan == Clan.PlayerClan;
    }

    private void disbanding_leaderless_party_join_main_party_answer_on_consequence()
    {
      PlayerEncounter.LeaveEncounter = true;
      PartyScreenManager.OpenScreenAsManageTroopsAndPrisoners(MobileParty.ConversationParty, new PartyScreenClosedDelegate(this.OnPartyScreenClosed));
    }

    private void OnPartyScreenClosed(
      PartyBase leftOwnerParty,
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      PartyBase rightOwnerParty,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      bool fromCancel)
    {
      if (leftOwnerParty.MemberRoster.TotalManCount > 0)
        return;
      DestroyPartyAction.Apply((PartyBase) null, leftOwnerParty.MobileParty);
    }

    private void disbanding_leaderless_party_answer_on_consequence()
    {
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool attack_neutral_disbanding_party_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.MapFaction != Clan.PlayerClan.MapFaction && !FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, MobileParty.ConversationParty.MapFaction);
    }

    private bool attack_enemy_disbanding_party_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.MapFaction != Clan.PlayerClan.MapFaction && FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, MobileParty.ConversationParty.MapFaction);
    }

    private void attack_disbanding_party_consequence()
    {
      PlayerEncounter.Current.IsEnemy = true;
      BeHostileAction.ApplyEncounterHostileAction(PartyBase.MainParty, MobileParty.ConversationParty.Party);
    }
  }
}
