// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.MainStorylineCampaignBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.Quests.PlayerClanQuests;
using StoryMode.StoryModeObjects;
using StoryMode.StoryModePhases;
using System;
using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class MainStorylineCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.CanHeroDieEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.CanHeroDie));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
    }

    private void OnGameLoadFinished()
    {
      if (Clan.PlayerClan.Kingdom != null && !Clan.PlayerClan.IsUnderMercenaryService)
        Clan.PlayerClan.IsNoble = true;
      int heroComesOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
      if ((double) StoryModeHeroes.LittleSister.Age < (double) heroComesOfAge)
      {
        if (!StoryModeHeroes.LittleSister.IsDisabled && !StoryModeHeroes.LittleSister.IsNotSpawned)
        {
          DisableHeroAction.Apply(StoryModeHeroes.LittleSister);
          StoryModeHeroes.LittleSister.ChangeState(Hero.CharacterStates.NotSpawned);
        }
        if (MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.6"))
        {
          AgingCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<AgingCampaignBehavior>();
          if (campaignBehavior != null)
          {
            FieldInfo field = typeof (AgingCampaignBehavior).GetField("_heroesYoungerThanHeroComesOfAge", BindingFlags.Instance | BindingFlags.NonPublic);
            Dictionary<Hero, int> dictionary = (Dictionary<Hero, int>) field.GetValue((object) campaignBehavior);
            if (!dictionary.ContainsKey(StoryModeHeroes.LittleSister))
            {
              dictionary.Add(StoryModeHeroes.LittleSister, (int) StoryModeHeroes.LittleSister.Age);
              field.SetValue((object) campaignBehavior, (object) dictionary);
            }
          }
        }
      }
      else if (MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.6") && StoryModeManager.Current.MainStoryLine.FamilyRescued && StoryModeHeroes.LittleSister.IsNotSpawned)
        HeroHelper.SpawnHeroForTheFirstTime(StoryModeHeroes.LittleSister, this.GetSettlementForRelativeSpawn(StoryModeHeroes.LittleSister));
      if ((double) StoryModeHeroes.LittleBrother.Age < (double) heroComesOfAge)
      {
        if (!StoryModeHeroes.LittleBrother.IsDisabled && !StoryModeHeroes.LittleBrother.IsNotSpawned)
        {
          DisableHeroAction.Apply(StoryModeHeroes.LittleBrother);
          StoryModeHeroes.LittleBrother.ChangeState(Hero.CharacterStates.NotSpawned);
        }
        if (MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.6"))
        {
          AgingCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<AgingCampaignBehavior>();
          if (campaignBehavior != null)
          {
            FieldInfo field = typeof (AgingCampaignBehavior).GetField("_heroesYoungerThanHeroComesOfAge", BindingFlags.Instance | BindingFlags.NonPublic);
            Dictionary<Hero, int> dictionary = (Dictionary<Hero, int>) field.GetValue((object) campaignBehavior);
            if (!dictionary.ContainsKey(StoryModeHeroes.LittleBrother))
            {
              dictionary.Add(StoryModeHeroes.LittleBrother, (int) StoryModeHeroes.LittleBrother.Age);
              field.SetValue((object) campaignBehavior, (object) dictionary);
            }
          }
        }
      }
      else if (MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.6") && StoryModeManager.Current.MainStoryLine.FamilyRescued && StoryModeHeroes.LittleBrother.IsNotSpawned)
        HeroHelper.SpawnHeroForTheFirstTime(StoryModeHeroes.LittleBrother, this.GetSettlementForRelativeSpawn(StoryModeHeroes.LittleBrother));
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.0")))
        return;
      FirstPhase instance = FirstPhase.Instance;
      if ((instance != null ? (instance.AllPiecesCollected ? 1 : 0) : 0) == 0)
        return;
      ItemObject itemObject = Campaign.Current.ObjectManager.GetObject<ItemObject>("dragon_banner");
      bool flag = false;
      foreach (ItemRosterElement itemRosterElement in MobileParty.MainParty.ItemRoster)
      {
        if (itemRosterElement.EquipmentElement.Item == itemObject)
        {
          flag = true;
          break;
        }
      }
      if (flag)
        return;
      StoryModeManager.Current.MainStoryLine.FirstPhase?.MergeDragonBanner();
    }

    private Settlement GetSettlementForRelativeSpawn(Hero hero)
    {
      if (!hero.HomeSettlement.OwnerClan.IsAtWarWith(Clan.PlayerClan.MapFaction))
        return hero.HomeSettlement;
      if (!Clan.PlayerClan.MapFaction.Settlements.IsEmpty<Settlement>())
        return Clan.PlayerClan.MapFaction.Settlements.GetRandomElement<Settlement>();
      foreach (Settlement forRelativeSpawn in (List<Settlement>) Settlement.All)
      {
        if (!forRelativeSpawn.MapFaction.IsAtWarWith(Clan.PlayerClan.MapFaction))
          return forRelativeSpawn;
      }
      return Village.All.GetRandomElement<Village>().Settlement;
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      if (clan != Clan.PlayerClan || newKingdom == null || detail != ChangeKingdomAction.ChangeKingdomActionDetail.CreateKingdom && detail != ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdom)
        return;
      Clan.PlayerClan.IsNoble = true;
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void CanHeroDie(
      Hero hero,
      KillCharacterAction.KillCharacterActionDetail causeOfDeath,
      ref bool result)
    {
      if (hero == StoryModeHeroes.Radagos && StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted && !Campaign.Current.QuestManager.IsThereActiveQuestWithType(typeof (RescueFamilyQuestBehavior.RescueFamilyQuest)) && !Campaign.Current.QuestManager.IsThereActiveQuestWithType(typeof (RebuildPlayerClanQuest)) && causeOfDeath == KillCharacterAction.KillCharacterActionDetail.Executed)
      {
        result = true;
      }
      else
      {
        if (!hero.IsSpecial || hero == StoryModeHeroes.RadagosHencman || StoryModeManager.Current.MainStoryLine.IsCompleted)
          return;
        result = false;
      }
    }
  }
}
