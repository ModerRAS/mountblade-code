// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.DefaultLogsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class DefaultLogsCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.AlleyOwnerChanged.AddNonSerializedListener((object) this, new Action<Alley, Hero, Hero>(this.OnAlleyOwnerChanged));
      CampaignEvents.ArmyGathered.AddNonSerializedListener((object) this, new Action<Army, Settlement>(this.OnArmyGathered));
      CampaignEvents.BattleStarted.AddNonSerializedListener((object) this, new Action<PartyBase, PartyBase, object, bool>(this.OnBattleStarted));
      CampaignEvents.CharacterBecameFugitive.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCharacterBecameFugitive));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.ClanChangedKingdom));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnPrisonerTaken));
      CampaignEvents.HeroPrisonerReleased.AddNonSerializedListener((object) this, new Action<Hero, PartyBase, IFaction, EndCaptivityDetail>(this.OnHeroPrisonerReleased));
      CampaignEvents.HeroesMarried.AddNonSerializedListener((object) this, new Action<Hero, Hero, bool>(this.OnHeroesMarried));
      CampaignEvents.ArmyDispersed.AddNonSerializedListener((object) this, new Action<Army, Army.ArmyDispersionReason, bool>(this.OnArmyDispersed));
      CampaignEvents.ArmyCreated.AddNonSerializedListener((object) this, new Action<Army>(this.OnArmyCreated));
      CampaignEvents.RebellionFinished.AddNonSerializedListener((object) this, new Action<Settlement, Clan>(this.OnRebellionFinished));
      CampaignEvents.KingdomDecisionAdded.AddNonSerializedListener((object) this, new Action<KingdomDecision, bool>(this.OnKingdomDecisionAdded));
      CampaignEvents.KingdomDecisionConcluded.AddNonSerializedListener((object) this, new Action<KingdomDecision, DecisionOutcome, bool>(this.OnKingdomDecisionConcluded));
      CampaignEvents.TournamentFinished.AddNonSerializedListener((object) this, new Action<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>(this.OnTournamentFinished));
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStarted));
      CampaignEvents.PlayerTraitChangedEvent.AddNonSerializedListener((object) this, new Action<TraitObject, int>(this.OnPlayerTraitChanged));
      CampaignEvents.OnPlayerCharacterChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, MobileParty, bool>(this.OnPlayerCharacterChanged));
      CampaignEvents.OnSiegeAftermathAppliedEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, SiegeAftermathAction.SiegeAftermath, Clan, Dictionary<MobileParty, float>>(this.OnSiegeAftermathApplied));
    }

    private void OnSiegeAftermathApplied(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType,
      Clan previousSettlementOwner,
      Dictionary<MobileParty, float> partyContributions)
    {
      LogEntry.AddLogEntry((LogEntry) new SiegeAftermathLogEntry(attackerParty, (IEnumerable<MobileParty>) partyContributions.Keys, settlement, aftermathType));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnPlayerCharacterChanged(
      Hero oldPlayer,
      Hero newPlayer,
      MobileParty newMobileParty,
      bool isMainPartyChanged)
    {
      LogEntry.AddLogEntry((LogEntry) new PlayerCharacterChangedLogEntry(oldPlayer, newPlayer));
    }

    private void OnPrisonerTaken(PartyBase party, Hero hero)
    {
      LogEntry.AddLogEntry((LogEntry) new TakePrisonerLogEntry(party, hero));
    }

    private void OnHeroPrisonerReleased(
      Hero hero,
      PartyBase party,
      IFaction captuererFaction,
      EndCaptivityDetail detail)
    {
      LogEntry.AddLogEntry((LogEntry) new EndCaptivityLogEntry(hero, captuererFaction, detail));
    }

    private void OnCommonAreaFightOccured(
      MobileParty attackerParty,
      MobileParty defenderParty,
      Hero attackerHero,
      Settlement settlement)
    {
      LogEntry.AddLogEntry((LogEntry) new CommonAreaFightLogEntry(attackerParty, defenderParty, attackerHero, settlement));
    }

    private void ClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotifications)
    {
      if (detail != ChangeKingdomAction.ChangeKingdomActionDetail.JoinAsMercenary && detail != ChangeKingdomAction.ChangeKingdomActionDetail.LeaveAsMercenary)
        return;
      LogEntry.AddLogEntry((LogEntry) new MercenaryClanChangedKingdomLogEntry(clan, oldKingdom, newKingdom));
    }

    private void OnCharacterBecameFugitive(Hero hero)
    {
      LogEntry.AddLogEntry((LogEntry) new CharacterBecameFugitiveLogEntry(hero));
    }

    private void OnBattleStarted(
      PartyBase attackerParty,
      PartyBase defenderParty,
      object subject,
      bool showNotification)
    {
      if (!showNotification)
        return;
      LogEntry.AddLogEntry((LogEntry) new BattleStartedLogEntry(attackerParty, defenderParty, subject));
    }

    public void OnArmyDispersed(Army army, Army.ArmyDispersionReason reason, bool isPlayersArmy)
    {
      if (!isPlayersArmy)
        return;
      ArmyDispersionLogEntry dispersionLogEntry = new ArmyDispersionLogEntry(army, reason);
      LogEntry.AddLogEntry((LogEntry) dispersionLogEntry);
      if (army.LeaderParty.MapFaction != Hero.MainHero.MapFaction || army.Parties.IndexOf(MobileParty.MainParty) >= 0)
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new ArmyDispersionMapNotification(army, reason, dispersionLogEntry.GetEncyclopediaText()));
    }

    private void OnArmyGathered(Army army, Settlement targetSettlement)
    {
      LogEntry.AddLogEntry((LogEntry) new GatherArmyLogEntry(army, targetSettlement));
    }

    private void OnArmyCreated(Army army)
    {
      ArmyCreationLogEntry creationLogEntry = new ArmyCreationLogEntry(army);
      LogEntry.AddLogEntry((LogEntry) creationLogEntry);
      if (army.LeaderParty.MapFaction != MobileParty.MainParty.MapFaction || army.LeaderParty == MobileParty.MainParty)
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new ArmyCreationMapNotification(army, creationLogEntry.GetEncyclopediaText()));
    }

    private void OnRebellionFinished(Settlement settlement, Clan oldOwnerClan)
    {
      RebellionStartedLogEntry rebellionStartedLogEntry = new RebellionStartedLogEntry(settlement, oldOwnerClan);
      LogEntry.AddLogEntry((LogEntry) rebellionStartedLogEntry);
      if (oldOwnerClan != Clan.PlayerClan)
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new SettlementRebellionMapNotification(settlement, rebellionStartedLogEntry.GetNotificationText()));
    }

    private void OnKingdomDecisionAdded(KingdomDecision decision, bool isPlayerInvolved)
    {
      LogEntry.AddLogEntry((LogEntry) new KingdomDecisionAddedLogEntry(decision, isPlayerInvolved));
      if (!(decision.NotifyPlayer & isPlayerInvolved) || decision.IsEnforced)
        return;
      TextObject descriptionText = decision.DetermineChooser().Leader.IsHumanPlayerCharacter ? decision.GetChooseTitle() : decision.GetSupportTitle();
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new KingdomDecisionMapNotification(decision.Kingdom, decision, descriptionText));
    }

    private void OnKingdomDecisionConcluded(
      KingdomDecision decision,
      DecisionOutcome chosenOutcome,
      bool isPlayerInvolved)
    {
      KingdomDecisionConcludedLogEntry concludedLogEntry = new KingdomDecisionConcludedLogEntry(decision, chosenOutcome, isPlayerInvolved);
      LogEntry.AddLogEntry((LogEntry) concludedLogEntry);
      if (decision.Kingdom != Hero.MainHero.MapFaction || !decision.NotifyPlayer || decision.IsEnforced || isPlayerInvolved)
        return;
      MBInformationManager.AddQuickInformation(concludedLogEntry.GetNotificationText(), soundEventPath: "event:/ui/notification/kingdom_decision");
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new KingdomDecisionMapNotification(decision.Kingdom, decision, concludedLogEntry.GetNotificationText()));
    }

    private void OnAlleyOwnerChanged(Alley alley, Hero newOwner, Hero oldOwner)
    {
      LogEntry.AddLogEntry((LogEntry) new ChangeAlleyOwnerLogEntry(alley, newOwner, oldOwner));
    }

    private void OnHeroesMarried(Hero marriedHero, Hero marriedTo, bool showNotification)
    {
      CharacterMarriedLogEntry characterMarriedLogEntry = new CharacterMarriedLogEntry(marriedHero, marriedTo);
      LogEntry.AddLogEntry((LogEntry) characterMarriedLogEntry);
      if (marriedHero.Clan != Clan.PlayerClan && marriedTo.Clan != Clan.PlayerClan)
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new MarriageMapNotification(marriedHero, marriedTo, characterMarriedLogEntry.GetEncyclopediaText(), CampaignTime.Now));
    }

    private void OnSiegeEventStarted(SiegeEvent siegeEvent)
    {
      BesiegeSettlementLogEntry settlementLogEntry = new BesiegeSettlementLogEntry(siegeEvent.BesiegerCamp.LeaderParty, siegeEvent.BesiegedSettlement);
      LogEntry.AddLogEntry((LogEntry) settlementLogEntry);
      if (siegeEvent.BesiegedSettlement.OwnerClan != Clan.PlayerClan)
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new SettlementUnderSiegeMapNotification(siegeEvent, settlementLogEntry.GetEncyclopediaText()));
    }

    private void OnTournamentFinished(
      CharacterObject character,
      MBReadOnlyList<CharacterObject> participants,
      Town town,
      ItemObject prize)
    {
      if (!character.IsHero)
        return;
      LogEntry.AddLogEntry((LogEntry) new TournamentWonLogEntry(character.HeroObject, town, participants));
    }

    private void OnPlayerTraitChanged(TraitObject trait, int previousLevel)
    {
      int traitLevel = Hero.MainHero.GetTraitLevel(trait);
      TextObject traitChangedText = DefaultLogsCampaignBehavior.GetTraitChangedText(trait, traitLevel, previousLevel);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new TraitChangedMapNotification(trait, traitLevel != 0, previousLevel, traitChangedText));
    }

    private static TextObject GetTraitChangedText(
      TraitObject traitObject,
      int level,
      int previousLevel)
    {
      TextObject text1;
      TextObject text2;
      if (level != 0)
      {
        text1 = GameTexts.FindText("str_trait_name_" + traitObject.StringId.ToLower(), (level + MathF.Abs(traitObject.MinValue)).ToString());
        text2 = GameTexts.FindText("str_trait_gained_text");
      }
      else
      {
        text1 = GameTexts.FindText("str_trait_name_" + traitObject.StringId.ToLower(), (previousLevel + MathF.Abs(traitObject.MinValue)).ToString());
        text2 = GameTexts.FindText("str_trait_lost_text");
      }
      text2.SetCharacterProperties("HERO", Hero.MainHero.CharacterObject);
      text2.SetTextVariable("TRAIT_NAME", text1);
      return text2;
    }
  }
}
