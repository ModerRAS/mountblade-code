// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.DefaultCutscenesCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.SceneInformationPopupTypes;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class DefaultCutscenesCampaignBehavior : CampaignBehaviorBase
  {
    private bool _heroWonLastMapEVent;
    private CultureObject _lastEnemyCulture;

    public override void RegisterEvents()
    {
      CampaignEvents.HeroesMarried.AddNonSerializedListener((object) this, new Action<Hero, Hero, bool>(DefaultCutscenesCampaignBehavior.OnHeroesMarried));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnd));
      CampaignEvents.HeroComesOfAgeEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroComesOfAge));
      CampaignEvents.KingdomCreatedEvent.AddNonSerializedListener((object) this, new Action<Kingdom>(this.OnKingdomCreated));
      CampaignEvents.KingdomDestroyedEvent.AddNonSerializedListener((object) this, new Action<Kingdom>(this.OnKingdomDestroyed));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.KingdomDecisionConcluded.AddNonSerializedListener((object) this, new Action<KingdomDecision, DecisionOutcome, bool>(this.OnKingdomDecisionConcluded));
      CampaignEvents.OnBeforeMainCharacterDiedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnBeforeMainCharacterDied));
    }

    private void OnBeforeMainCharacterDied(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      SceneNotificationData data = (SceneNotificationData) null;
      if (victim == Hero.MainHero)
      {
        switch (detail)
        {
          case KillCharacterAction.KillCharacterActionDetail.DiedOfOldAge:
            data = (SceneNotificationData) new DeathOldAgeSceneNotificationItem(victim);
            break;
          case KillCharacterAction.KillCharacterActionDetail.DiedInBattle:
            if (this._heroWonLastMapEVent)
            {
              int num = !victim.CompanionsInParty.Any<Hero>() ? 1 : 0;
              List<CharacterObject> encounterAllyCharacters = new List<CharacterObject>();
              ref List<CharacterObject> local = ref encounterAllyCharacters;
              DefaultCutscenesCampaignBehavior.FillAllyCharacters(num != 0, ref local);
              data = (SceneNotificationData) new MainHeroBattleVictoryDeathNotificationItem(victim, encounterAllyCharacters);
              break;
            }
            data = (SceneNotificationData) new MainHeroBattleDeathNotificationItem(victim, this._lastEnemyCulture);
            break;
          case KillCharacterAction.KillCharacterActionDetail.Executed:
            TextObject to = new TextObject("{=uYjEknNX}{VICTIM.NAME}'s execution by {EXECUTER.NAME}");
            to.SetCharacterProperties("VICTIM", victim.CharacterObject);
            to.SetCharacterProperties("EXECUTER", killer.CharacterObject);
            data = (SceneNotificationData) HeroExecutionSceneNotificationData.CreateForInformingPlayer(killer, victim, SceneNotificationData.RelevantContextType.Map);
            break;
        }
      }
      if (data == null)
        return;
      MBInformationManager.ShowSceneNotification(data);
    }

    private void OnKingdomDecisionConcluded(
      KingdomDecision decision,
      DecisionOutcome chosenOutcome,
      bool isPlayerInvolved)
    {
      if (!(chosenOutcome is KingSelectionKingdomDecision.KingSelectionDecisionOutcome selectionDecisionOutcome & isPlayerInvolved) || selectionDecisionOutcome.King != Hero.MainHero)
        return;
      MBInformationManager.ShowSceneNotification((SceneNotificationData) new BecomeKingSceneNotificationItem(selectionDecisionOutcome.King));
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      SceneNotificationData data = (SceneNotificationData) null;
      if (clan == Clan.PlayerClan && detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdom)
        data = (SceneNotificationData) new JoinKingdomSceneNotificationItem(clan, newKingdom);
      else if (Clan.PlayerClan.Kingdom == newKingdom && detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdomByDefection)
        data = (SceneNotificationData) new JoinKingdomSceneNotificationItem(clan, newKingdom);
      if (data == null)
        return;
      MBInformationManager.ShowSceneNotification(data);
    }

    private void OnKingdomDestroyed(Kingdom kingdom)
    {
      if (kingdom.IsRebelClan)
        return;
      if (kingdom.Leader == Hero.MainHero)
        MBInformationManager.ShowSceneNotification(Campaign.Current.Models.CutsceneSelectionModel.GetKingdomDestroyedSceneNotification(kingdom));
      else
        Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new KingdomDestroyedMapNotification(kingdom, CampaignTime.Now));
    }

    private void OnKingdomCreated(Kingdom kingdom)
    {
      if (Hero.MainHero.Clan.Kingdom != kingdom)
        return;
      MBInformationManager.ShowSceneNotification((SceneNotificationData) new KingdomCreatedSceneNotificationItem(kingdom));
    }

    private void OnHeroComesOfAge(Hero hero)
    {
      if (hero.Mother?.Clan != Clan.PlayerClan && hero.Father?.Clan != Clan.PlayerClan)
        return;
      Hero heroForComeOfAge = this.GetMentorHeroForComeOfAge(hero);
      TextObject textObject = new TextObject("{=t4KwQOB7}{HERO.NAME} is now of age.");
      textObject.SetCharacterProperties("HERO", hero.CharacterObject);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new HeirComeOfAgeMapNotification(hero, heroForComeOfAge, textObject, CampaignTime.Now));
    }

    private void OnMapEventEnd(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent)
        return;
      this._heroWonLastMapEVent = mapEvent.WinningSide != BattleSideEnum.None && mapEvent.WinningSide == mapEvent.PlayerSide;
      this._lastEnemyCulture = mapEvent.PlayerSide == BattleSideEnum.Attacker ? mapEvent.DefenderSide.MapFaction.Culture : mapEvent.AttackerSide.MapFaction.Culture;
    }

    private static void OnHeroesMarried(Hero firstHero, Hero secondHero, bool showNotification)
    {
      if (firstHero != Hero.MainHero && secondHero != Hero.MainHero)
        return;
      Hero groomHero = firstHero.IsFemale ? secondHero : firstHero;
      MBInformationManager.ShowSceneNotification((SceneNotificationData) new MarriageSceneNotificationItem(groomHero, groomHero.Spouse, CampaignTime.Now));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private static void FillAllyCharacters(
      bool noCompanions,
      ref List<CharacterObject> allyCharacters)
    {
      if (noCompanions)
      {
        allyCharacters.Add(Hero.MainHero.MapFaction.Culture.RangedEliteMilitiaTroop);
      }
      else
      {
        List<CharacterObject> list = MobileParty.MainParty.MemberRoster.GetTroopRoster().Where<TroopRosterElement>((Func<TroopRosterElement, bool>) (c => c.Character != CharacterObject.PlayerCharacter && c.Character.IsHero)).Select<TroopRosterElement, CharacterObject>((Func<TroopRosterElement, CharacterObject>) (t => t.Character)).ToList<CharacterObject>();
        allyCharacters.AddRange(list.Take<CharacterObject>(3));
        int count = allyCharacters.Count;
        for (int index = 0; index < 3 - count; ++index)
          allyCharacters.Add(Hero.AllAliveHeroes.GetRandomElement<Hero>().CharacterObject);
      }
    }

    private Hero GetMentorHeroForComeOfAge(Hero hero)
    {
      Hero heroForComeOfAge = Hero.MainHero;
      if (hero.IsFemale)
      {
        if (hero.Mother != null && hero.Mother.IsAlive)
          heroForComeOfAge = hero.Mother;
        else if (hero.Father != null && hero.Father.IsAlive)
          heroForComeOfAge = hero.Father;
      }
      else if (hero.Father != null && hero.Father.IsAlive)
        heroForComeOfAge = hero.Father;
      else if (hero.Mother != null && hero.Mother.IsAlive)
        heroForComeOfAge = hero.Mother;
      if (hero.Mother == Hero.MainHero || hero.Father == Hero.MainHero)
        heroForComeOfAge = Hero.MainHero;
      return heroForComeOfAge;
    }
  }
}
