// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.TradersCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class TradersCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("weaponsmith_talk_start_normal", "start", "weaponsmith_talk_player", "{=7IxFrati}Greetings my {?PLAYER.GENDER}lady{?}lord{\\?}, how may I help you?", new ConversationSentence.OnConditionDelegate(this.conversation_weaponsmith_talk_start_normal_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("weaponsmith_talk_start_to_player_in_disguise", "start", "close_window", "{=1auLEn9y}Look, my good {?PLAYER.GENDER}woman{?}man{\\?}, these are hard times for sure, but I need you to move along. You'll scare away my customers.", new ConversationSentence.OnConditionDelegate(this.conversation_weaponsmith_talk_start_to_player_in_disguise_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("weaponsmith_talk_initial", "weaponsmith_begin", "weaponsmith_talk_player", "{=jxw54Ijt}Okay, is there anything more I can help with?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("weaponsmith_talk_player_1", "weaponsmith_talk_player", "merchant_response_1", "{=ExltvaKo}Let me see what you have for sale...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("weaponsmith_talk_player_request_craft", "weaponsmith_talk_player", "merchant_response_crafting", "{=w1vzpCNi}I need you to craft a weapon for me", new ConversationSentence.OnConditionDelegate(this.conversation_open_crafting_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("weaponsmith_talk_player_3", "weaponsmith_talk_player", "merchant_response_3", "{=8hNYr2VX}I was just passing by.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("weaponsmith_talk_merchant_response_1", "merchant_response_1", "player_merchant_talk_close", "{=K5mG9nDv}With pleasure.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("weaponsmith_talk_merchant_response_2", "merchant_response_2", "player_merchant_talk_2", "{=5bRQ0gt7}How many men do you need for it? For each men I want 100{GOLD_ICON}.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("weaponsmith_talk_merchant_response_craft", "merchant_response_crafting", "player_merchant_craft_talk_close", "{=lF5HkBDy}As you wish.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("weaponsmith_talk_merchant_craft_opened", "player_merchant_craft_talk_close", "close_window", "{=TD8Jxn7U}Have a nice day my {?PLAYER.GENDER}lady{?}lord{\\?}.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_weaponsmith_craft_on_consequence));
      campaignGameStarter.AddDialogLine("weaponsmith_talk_merchant_response_3", "merchant_response_3", "close_window", "{=FpNWdIaT}Yes, of course. Just ask me if there is anything you need.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("weaponsmith_talk_end", "player_merchant_talk_close", "close_window", "{=Yh0danUf}Thank you and good day my {?PLAYER.GENDER}lady{?}lord{\\?}.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_weaponsmith_talk_player_on_consequence));
    }

    private bool conversation_open_crafting_on_condition()
    {
      return CharacterObject.OneToOneConversationCharacter != null && CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Blacksmith;
    }

    private bool conversation_weaponsmith_talk_start_normal_on_condition()
    {
      return !Campaign.Current.IsMainHeroDisguised && this.IsTrader();
    }

    private bool conversation_weaponsmith_talk_start_to_player_in_disguise_on_condition()
    {
      return Campaign.Current.IsMainHeroDisguised && this.IsTrader();
    }

    private bool IsTrader()
    {
      return CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Weaponsmith || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Armorer || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.HorseTrader || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.GoodsTrader || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Blacksmith;
    }

    private void conversation_weaponsmith_talk_player_on_consequence()
    {
      InventoryManager.InventoryCategoryType merchantItemType = InventoryManager.InventoryCategoryType.None;
      switch (CharacterObject.OneToOneConversationCharacter.Occupation)
      {
        case Occupation.GoodsTrader:
          merchantItemType = InventoryManager.InventoryCategoryType.Goods;
          break;
        case Occupation.Weaponsmith:
          merchantItemType = InventoryManager.InventoryCategoryType.Weapon;
          break;
        case Occupation.Armorer:
          merchantItemType = InventoryManager.InventoryCategoryType.Armors;
          break;
        case Occupation.HorseTrader:
          merchantItemType = InventoryManager.InventoryCategoryType.HorseCategory;
          break;
        case Occupation.Blacksmith:
          merchantItemType = InventoryManager.InventoryCategoryType.Weapon;
          break;
      }
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (Mission.Current != null)
        InventoryManager.OpenScreenAsTrade(currentSettlement.ItemRoster, (SettlementComponent) currentSettlement.Town, merchantItemType, new InventoryManager.DoneLogicExtrasDelegate(this.OnInventoryScreenDone));
      else
        InventoryManager.OpenScreenAsTrade(currentSettlement.ItemRoster, (SettlementComponent) currentSettlement.Town, merchantItemType);
    }

    private void conversation_weaponsmith_craft_on_consequence()
    {
      CraftingHelper.OpenCrafting(CraftingTemplate.All[0]);
    }

    private void OnInventoryScreenDone()
    {
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        CharacterObject character = (CharacterObject) agent.Character;
        if (agent.IsHuman && character != null && character.IsHero && character.HeroObject.PartyBelongedTo == MobileParty.MainParty)
          agent.UpdateSpawnEquipmentAndRefreshVisuals(Mission.Current.DoesMissionRequireCivilianEquipment ? character.FirstCivilianEquipment : character.FirstBattleEquipment);
      }
    }
  }
}
