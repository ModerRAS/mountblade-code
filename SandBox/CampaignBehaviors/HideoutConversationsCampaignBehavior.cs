// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.HideoutConversationsCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class HideoutConversationsCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("bandit_hideout_start_defender", "start", "bandit_hideout_defender", "{=nYCXzAYH}You! You've cut quite a swathe through my men there, damn you. How about we settle this, one-on-one?", new ConversationSentence.OnConditionDelegate(this.bandit_hideout_start_defender_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("bandit_hideout_start_defender_1", "bandit_hideout_defender", "close_window", "{=dzXaXKaC}Very well.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.bandit_hideout_start_duel_fight_on_consequence));
      campaignGameStarter.AddPlayerLine("bandit_hideout_start_defender_2", "bandit_hideout_defender", "close_window", "{=ukRZd2AA}I don't fight duels with brigands.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.bandit_hideout_continue_battle_on_consequence));
    }

    private bool bandit_hideout_start_defender_on_condition()
    {
      PartyBase encounteredParty = PlayerEncounter.EncounteredParty;
      return encounteredParty != null && !encounteredParty.IsMobile && encounteredParty.MapFaction.IsBanditFaction && encounteredParty.MapFaction.IsBanditFaction && encounteredParty.IsSettlement && encounteredParty.Settlement.IsHideout && Mission.Current != null && Mission.Current.GetMissionBehavior<HideoutMissionController>() != null;
    }

    private void bandit_hideout_start_duel_fight_on_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(HideoutMissionController.StartBossFightDuelMode);
    }

    private void bandit_hideout_continue_battle_on_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(HideoutMissionController.StartBossFightBattleMode);
    }
  }
}
