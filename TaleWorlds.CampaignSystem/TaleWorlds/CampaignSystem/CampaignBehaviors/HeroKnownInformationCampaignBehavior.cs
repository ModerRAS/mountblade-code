// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.HeroKnownInformationCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class HeroKnownInformationCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnDailyTickHero));
      CampaignEvents.ConversationEnded.AddNonSerializedListener((object) this, new Action<IEnumerable<CharacterObject>>(this.ConversationEnded));
      CampaignEvents.OnAgentJoinedConversationEvent.AddNonSerializedListener((object) this, new Action<IAgent>(this.OnAgentJoinedConversation));
      CampaignEvents.OnPlayerMetHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnPlayerMetHero));
      CampaignEvents.HeroesMarried.AddNonSerializedListener((object) this, new Action<Hero, Hero, bool>(this.OnHeroesMarried));
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinishedEvent));
      CampaignEvents.OnCharacterCreationIsOverEvent.AddNonSerializedListener((object) this, new Action(this.OnCharacterCreationIsOver));
      CampaignEvents.OnPlayerLearnsAboutHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnPlayerLearnsAboutHero));
      CampaignEvents.NearbyPartyAddedToPlayerMapEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnNearbyPartyAddedToPlayerMapEvent));
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuChanged));
      CampaignEvents.AfterMissionStarted.AddNonSerializedListener((object) this, new Action<IMission>(this.OnAfterMissionStarted));
      CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
      CampaignEvents.PartyAttachedAnotherParty.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyAttachedAnotherParty));
      CampaignEvents.OnPlayerJoinedTournamentEvent.AddNonSerializedListener((object) this, new Action<Town, bool>(this.OnPlayerJoinedTournament));
      CampaignEvents.OnMarriageOfferedToPlayerEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnMarriageOfferedToPlayer));
    }

    private void OnMarriageOfferedToPlayer(Hero suitor, Hero maiden)
    {
      if (suitor.Clan == Clan.PlayerClan)
        maiden.IsKnownToPlayer = true;
      else
        suitor.IsKnownToPlayer = true;
    }

    private void OnPlayerJoinedTournament(Town town, bool isParticipant)
    {
      foreach (CharacterObject participantCharacter in (List<CharacterObject>) Campaign.Current.TournamentManager.GetTournamentGame(town).GetParticipantCharacters(town.Settlement, false))
      {
        if (participantCharacter.IsHero && !participantCharacter.HeroObject.IsKnownToPlayer)
          participantCharacter.HeroObject.IsKnownToPlayer = true;
      }
    }

    private void OnNearbyPartyAddedToPlayerMapEvent(MobileParty mobileParty)
    {
      if (mobileParty.LeaderHero == null)
        return;
      mobileParty.LeaderHero.IsKnownToPlayer = true;
    }

    private void OnPartyAttachedAnotherParty(MobileParty party)
    {
      if (party == MobileParty.MainParty)
      {
        if (party.AttachedTo.LeaderHero != null)
          party.AttachedTo.LeaderHero.IsKnownToPlayer = true;
        foreach (MobileParty attachedParty in (List<MobileParty>) party.AttachedTo.AttachedParties)
        {
          if (attachedParty.LeaderHero != null)
            attachedParty.LeaderHero.IsKnownToPlayer = true;
        }
      }
      else
      {
        if (party.AttachedTo != MobileParty.MainParty && party.AttachedTo != MobileParty.MainParty.AttachedTo || party.LeaderHero == null)
          return;
        party.LeaderHero.IsKnownToPlayer = true;
      }
    }

    private void OnPartyAttachedToAnotherParty(MobileParty mobileParty)
    {
      if (mobileParty == MobileParty.MainParty)
      {
        if (mobileParty.AttachedTo.LeaderHero != null)
          mobileParty.AttachedTo.LeaderHero.IsKnownToPlayer = true;
        foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.AttachedTo.AttachedParties)
        {
          if (attachedParty.LeaderHero != null)
            attachedParty.LeaderHero.IsKnownToPlayer = true;
        }
      }
      else
      {
        if (mobileParty.AttachedTo != MobileParty.MainParty && mobileParty.AttachedTo != MobileParty.MainParty.AttachedTo || mobileParty.LeaderHero == null)
          return;
        mobileParty.LeaderHero.IsKnownToPlayer = true;
      }
    }

    private void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (MapEvent.PlayerMapEvent != mapEvent)
        return;
      foreach (PartyBase involvedParty in mapEvent.InvolvedParties)
      {
        if (involvedParty.LeaderHero != null)
          involvedParty.LeaderHero.IsKnownToPlayer = true;
      }
    }

    private void OnPlayerLearnsAboutHero(Hero hero)
    {
      if (hero.Clan == Clan.PlayerClan)
        return;
      TextObject to = new TextObject("{=lLMlPcl4}You have discovered {HERO.NAME}");
      to.SetCharacterProperties("HERO", hero.CharacterObject);
      InformationManager.DisplayMessage(new InformationMessage(to.ToString()));
    }

    private void OnAfterMissionStarted(IMission mission)
    {
      if (CampaignMission.Current.Location == null)
        return;
      this.LearnAboutLocationCharacters(CampaignMission.Current.Location);
    }

    private void OnGameMenuChanged(MenuCallbackArgs args)
    {
      foreach (Location menuLocation in Campaign.Current.GameMenuManager.MenuLocations)
        this.LearnAboutLocationCharacters(menuLocation);
    }

    private void LearnAboutLocationCharacters(Location location)
    {
      foreach (LocationCharacter character in location.GetCharacterList())
      {
        if (character.Character.IsHero && !character.IsHidden && character.Character.HeroObject.CurrentSettlement == Settlement.CurrentSettlement)
          character.Character.HeroObject.IsKnownToPlayer = true;
      }
    }

    private void OnPlayerMetHero(Hero hero)
    {
      this.UpdateHeroLocation(hero);
      hero.IsKnownToPlayer = true;
    }

    private void OnDailyTickHero(Hero hero) => this.UpdateHeroLocation(hero);

    private void OnAgentJoinedConversation(IAgent agent)
    {
      CharacterObject character = (CharacterObject) agent.Character;
      if (character.IsHero)
      {
        this.UpdateHeroLocation(character.HeroObject);
        character.HeroObject.IsKnownToPlayer = true;
      }
      Hero owner = MobileParty.ConversationParty?.CaravanPartyComponent?.Owner;
      if (owner == null)
        return;
      owner.IsKnownToPlayer = true;
    }

    private void UpdateHeroLocation(Hero hero)
    {
      if (!hero.IsActive && !hero.IsPrisoner)
        return;
      Settlement closestSettlement = HeroHelper.GetClosestSettlement(hero);
      if (closestSettlement == null)
        return;
      hero.UpdateLastKnownClosestSettlement(closestSettlement);
    }

    private void OnCharacterCreationIsOver()
    {
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
        this.UpdateHeroLocation(allAliveHero);
    }

    private void OnGameLoadFinishedEvent()
    {
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("e1.8.1.0")))
        return;
      foreach (Hero hero in (List<Hero>) Clan.PlayerClan.Heroes)
        hero.SetHasMet();
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.LastKnownClosestSettlement == null)
          this.UpdateHeroLocation(allAliveHero);
        if (allAliveHero.HasMet)
          allAliveHero.IsKnownToPlayer = true;
      }
    }

    private void OnHeroesMarried(Hero hero1, Hero hero2, bool showNotification)
    {
      if (hero1 == Hero.MainHero)
        hero2.SetHasMet();
      if (hero2 != Hero.MainHero)
        return;
      hero1.SetHasMet();
    }

    private void OnHeroCreated(Hero hero, bool isBornNaturally)
    {
      if (hero.Clan != Clan.PlayerClan)
        return;
      hero.SetHasMet();
    }

    private void ConversationEnded(
      IEnumerable<CharacterObject> conversationCharacters)
    {
      foreach (CharacterObject conversationCharacter in conversationCharacters)
      {
        if (conversationCharacter.IsHero)
          conversationCharacter.HeroObject.SetHasMet();
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
