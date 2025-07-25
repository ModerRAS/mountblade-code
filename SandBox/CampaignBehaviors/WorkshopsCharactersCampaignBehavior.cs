﻿// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.WorkshopsCharactersCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class WorkshopsCharactersCampaignBehavior : CampaignBehaviorBase
  {
    public const float WorkerSpawnPercentage = 0.33f;
    private WorkshopType _lastSelectedWorkshopType;
    private Workshop _lastSelectedWorkshop;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddShopWorkerDialogs(campaignGameStarter);
      this.AddWorkshopOwnerDialogs(campaignGameStarter);
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      if (CampaignMission.Current.Location != Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("center") || !CampaignTime.Now.IsDayTime)
        return;
      this.AddShopWorkersToTownCenter(unusedUsablePointCount);
    }

    private void AddShopWorkersToTownCenter(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      CharacterObject shopWorker = settlement.Culture.ShopWorker;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(shopWorker.Race, "_settlement");
      Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("center");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(shopWorker, out minimumAge, out maximumAge);
      foreach (Workshop workshop in settlement.Town.Workshops)
      {
        int num1;
        unusedUsablePointCount.TryGetValue(workshop.Tag, out num1);
        float num2 = (float) num1 * 0.33f;
        if ((double) num2 > 0.0)
        {
          for (int index = 0; (double) index < (double) num2; ++index)
          {
            LocationCharacter locationCharacter = new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) shopWorker)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), workshop.Tag, true, LocationCharacter.CharacterRelations.Neutral, (string) null, true);
            locationWithId.AddCharacter(locationCharacter);
          }
        }
      }
    }

    private Workshop FindCurrentWorkshop(Agent agent)
    {
      if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.IsTown)
      {
        AgentNavigator agentNavigator = agent.GetComponent<CampaignAgentComponent>()?.AgentNavigator;
        if (agentNavigator != null)
        {
          foreach (Workshop workshop in Settlement.CurrentSettlement.Town.Workshops)
          {
            if (workshop.Tag == agentNavigator.SpecialTargetTag)
              return workshop;
          }
        }
      }
      return (Workshop) null;
    }

    private void AddWorkshopOwnerDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddPlayerLine("workshop_notable_owner_begin_1", "hero_main_options", "workshop_owner_notable_single_response", "{=ug5E8FCZ}I wish to buy your {.%}{WORKSHOP_NAME}{.%}.", new ConversationSentence.OnConditionDelegate(this.workshop_notable_owner_begin_single_on_condition), new ConversationSentence.OnConsequenceDelegate(this.workshop_notable_owner_begin_single_on_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.player_war_status_clickable_condition));
      campaignGameStarter.AddPlayerLine("workshop_notable_owner_begin_2", "hero_main_options", "workshop_owner_notable_multiple_response", "{=LuLttpc5}I wish to buy one of your workshops.", new ConversationSentence.OnConditionDelegate(this.workshop_notable_owner_begin_multiple_on_condition), new ConversationSentence.OnConsequenceDelegate(this.workshop_notable_owner_answer_list_workshops_on_condition), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.player_war_status_clickable_condition));
      campaignGameStarter.AddDialogLine("workshop_notable_owner_answer_1_single", "workshop_owner_notable_single_response", "workshop_notable_player_buy_options", "{=IdvcaDMu}I'm willing to sell. But it will cost you {COST} {GOLD_ICON}. Are you willing to pay?", new ConversationSentence.OnConditionDelegate(this.workshop_notable_owner_answer_single_workshop_cost_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_notable_player_buy_positive", "workshop_notable_player_buy_options", "workshop_notable_player_buy_positive_end", "{=kB65SzbF}Yes.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.workshop_notable_owner_player_buys_workshop_on_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.workshop_notable_owner_player_buys_workshop_on_clickable_condition));
      campaignGameStarter.AddPlayerLine("workshop_notable_player_buy_negative", "workshop_notable_player_buy_options", "workshop_notable_player_buy_negative_end", "{=znDzVxVJ}No.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_notable_player_buy_negative_end", "workshop_notable_player_buy_negative_end", "hero_main_options", "{=Hj25CLlZ}As you wish. Let me know if you change your mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_notable_player_buy_positive_end", "workshop_notable_player_buy_positive_end", "hero_main_options", "{=ZtULAKGb}Well then, we have a deal. I will instruct my workers that they are now working for you. Good luck!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_notable_owner_answer_1_multiple", "workshop_owner_notable_multiple_response", "workshop_player_select_workshop", "{=j78hz3Qc}Hmm. That's possible. Which one?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddRepeatablePlayerLine("workshop_player_select_workshop", "workshop_player_select_workshop", "workshop_owner_notable_single_response", "{=!}{WORKSHOP_NAME}", "{=5z4hEq68}I am thinking of a different kind of workshop.", "workshop_owner_notable_multiple_response", new ConversationSentence.OnConditionDelegate(this.workshop_notable_owner_player_select_workshop_multiple_on_condition), new ConversationSentence.OnConsequenceDelegate(this.workshop_notable_owner_player_select_workshop_multiple_on_consequence));
    }

    private bool workshop_notable_owner_begin_single_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || !Hero.OneToOneConversationHero.IsNotable || Hero.OneToOneConversationHero.CurrentSettlement != Settlement.CurrentSettlement || Hero.OneToOneConversationHero.OwnedWorkshops.Count<Workshop>((Func<Workshop, bool>) (x => !x.WorkshopType.IsHidden)) != 1)
        return false;
      MBTextManager.SetTextVariable("WORKSHOP_NAME", Hero.OneToOneConversationHero.OwnedWorkshops.First<Workshop>((Func<Workshop, bool>) (x => !x.WorkshopType.IsHidden)).Name, false);
      return true;
    }

    private void workshop_notable_owner_begin_single_on_consequence()
    {
      this._lastSelectedWorkshop = Hero.OneToOneConversationHero.OwnedWorkshops.First<Workshop>((Func<Workshop, bool>) (x => !x.WorkshopType.IsHidden));
    }

    private bool workshop_notable_owner_begin_multiple_on_condition()
    {
      return Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero.IsNotable && Hero.OneToOneConversationHero.CurrentSettlement == Settlement.CurrentSettlement && Hero.OneToOneConversationHero.OwnedWorkshops.Count<Workshop>((Func<Workshop, bool>) (x => !x.WorkshopType.IsHidden)) > 1;
    }

    private bool workshop_notable_owner_answer_single_workshop_cost_on_condition()
    {
      if (this._lastSelectedWorkshop == null)
        return false;
      MBTextManager.SetTextVariable("COST", Campaign.Current.Models.WorkshopModel.GetCostForPlayer(this._lastSelectedWorkshop));
      return true;
    }

    private void workshop_notable_owner_answer_list_workshops_on_condition()
    {
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) Hero.OneToOneConversationHero.OwnedWorkshops.Where<Workshop>((Func<Workshop, bool>) (x => !x.WorkshopType.IsHidden)).ToList<Workshop>());
    }

    private bool workshop_notable_owner_player_select_workshop_multiple_on_condition()
    {
      if (!(ConversationSentence.CurrentProcessedRepeatObject is Workshop processedRepeatObject))
        return false;
      ConversationSentence.SelectedRepeatLine.SetTextVariable("WORKSHOP_NAME", processedRepeatObject.Name);
      return true;
    }

    private void workshop_notable_owner_player_select_workshop_multiple_on_consequence()
    {
      this._lastSelectedWorkshop = ConversationSentence.SelectedRepeatObject as Workshop;
    }

    private void workshop_notable_owner_player_buys_workshop_on_consequence()
    {
      ChangeOwnerOfWorkshopAction.ApplyByPlayerBuying(this._lastSelectedWorkshop);
    }

    private bool workshop_notable_owner_player_buys_workshop_on_clickable_condition(
      out TextObject explanation)
    {
      return this.can_player_buy_workshop_clickable_condition(this._lastSelectedWorkshop, out explanation);
    }

    private bool can_player_buy_workshop_clickable_condition(
      Workshop workshop,
      out TextObject explanation)
    {
      int num = Hero.MainHero.Gold < Campaign.Current.Models.WorkshopModel.GetCostForPlayer(workshop) ? 1 : 0;
      bool flag1 = Campaign.Current.Models.WorkshopModel.GetMaxWorkshopCountForClanTier(Clan.PlayerClan.Tier) <= Hero.MainHero.OwnedWorkshops.Count;
      bool flag2 = false;
      if (num != 0)
        explanation = new TextObject("{=B2jpmFh6}You don't have enough money to buy this workshop.");
      else if (flag1)
      {
        explanation = new TextObject("{=Mzs39I2G}You have reached the maximum amount of workshops you can have.");
      }
      else
      {
        explanation = TextObject.Empty;
        flag2 = true;
      }
      return flag2;
    }

    private bool player_war_status_clickable_condition(out TextObject explanation)
    {
      if (Hero.MainHero.MapFaction.IsAtWarWith(Settlement.CurrentSettlement.MapFaction))
      {
        explanation = new TextObject("{=QkiqdcKa}You cannot own a workshop in an enemy town.");
        return false;
      }
      explanation = TextObject.Empty;
      return true;
    }

    private void AddShopWorkerDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("workshop_npc_owner_begin", "start", "shopworker_npc_player", "{=DGKgQycl}{WORKSHOP_INTRO_LINE}", new ConversationSentence.OnConditionDelegate(this.workshop_npc_owner_begin_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_1", "start_2", "shopworker_npc_player", "{=XZgD99ol}Anything else I can do for you?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_2", "shopworker_npc_player", "player_ask_questions", "{=HbaziRMP}I have some questions.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_3", "shopworker_npc_player", "workshop_buy_result", "{=p3a44dQN}I would like to buy this workshop.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.workshop_buy_clickable_condition));
      campaignGameStarter.AddPlayerLine("workshop_buy_result", "workshop_buy_result", "start_2", "{=icmr0jSa}This workshop belongs to {OWNER.LINK}. You need to talk to {?OWNER.GENDER}her{?}him{\\?}.", new ConversationSentence.OnConditionDelegate(this.workshop_12_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_4", "shopworker_npc_player", "workshop_end_dialog", "{=90YOVmcG}Good day to you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_5", "workshop_end_dialog", "close_window", "{=QwAyt4aW}Have a nice day, {?PLAYER.GENDER}madam{?}sir{\\?}.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_6", "player_ask_questions", "player_ask_questions2", "{=!}{NPC_ANSWER}", new ConversationSentence.OnConditionDelegate(this.player_ask_questions_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_7", "player_ask_questions_return", "player_ask_questions2", "{=1psOym3y}Any other questions?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_8", "player_ask_questions2", "player_ask_questions3", "{=hmmoXy0E}Whose workshop is this?", new ConversationSentence.OnConditionDelegate(this.workshop_player_not_owner_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_9", "player_ask_questions2", "player_ask_questions4", "{=5siWBRk8}What do you produce here?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_10", "player_ask_questions2", "player_ask_questions5", "{=v0HhVu4z}How do workshops work in general?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_11", "player_ask_questions2", "start_2", "{=rXbL9mhQ}I want to talk about other things.", new ConversationSentence.OnConditionDelegate(this.workshop_player_not_owner_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_12", "player_ask_questions3", "player_ask_questions_return", "{=aE0kPqcT}This workshop belongs to {OWNER.LINK}, {?PLAYER.GENDER}madam{?}sir{\\?}.", new ConversationSentence.OnConditionDelegate(this.workshop_12_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_13", "player_ask_questions4", "player_ask_questions_return", "{=LXtebqEF}This a {.%}{WORKSHOP_TYPE}{.%}, {?PLAYER.GENDER}madam{?}sir{\\?}. {WORKSHOP_DESCRIPTION}", new ConversationSentence.OnConditionDelegate(this.workshop_13_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_14", "player_ask_questions5", "player_ask_questions_return", "{=QKsaPj6w}We take raw materials and produce goods and sell them at the local market. After paying the workers their wages we transfer the profits to the owner.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_player_owner_begin", "start", "player_options", "{=VO8qBWrv}Hey boss, come to check on the business?", new ConversationSentence.OnConditionDelegate(this.workshop_player_owner_begin_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_26", "shopkeeper_start", "player_options", "{=XZgD99ol}Anything else I can do for you?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_27", "player_options", "player_ask_questions", "{=uotflvH2}I would like to ask some questions.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_28", "player_options", "player_change_production", "{=b92969l9}I would like to change what you are producing here.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_29", "player_options", "player_sell_workshop", "{=z3BeN9ro}I would like to sell this workshop.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_30", "player_options", "player_workshop_end_dialog", "{=90YOVmcG}Good day to you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_31", "player_workshop_end_dialog", "close_window", "{=NyxcGLxf}At your service.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_32", "player_workshop_questions", "player_workshop_questions_start", "{=Y4LhmAdi}Sure, boss. Go ahead.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_33", "player_workshop_questions_return", "player_workshop_questions_start", "{=1psOym3y}Any other questions?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_34", "player_ask_questions2", "shopkeeper_start", "{=rXbL9mhQ}I want to talk about other things.", new ConversationSentence.OnConditionDelegate(this.workshop_player_is_owner_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_35", "player_sell_workshop", "player_sell_price", "{=XQa48r6e}If you say so, boss. So, if I sell everything and transfer you the money we have on hand, you can get {PRICE}{GOLD_ICON}. You sure you want to sell?", new ConversationSentence.OnConditionDelegate(this.conversation_shopworker_sell_player_workshop_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_37", "player_sell_price", "player_sell_warehouse_done", "{=tc4DyxaL}Yes, I would like to sell.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_38", "player_sell_price", "player_sell_decline", "{=bi7ZhwNO}No, we are doing fine.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_41", "player_sell_warehouse_done", "player_sell_warehouse_done_2", "{=eemYX2d4}I will transfer the goods from your warehouse to your party immediately.", new ConversationSentence.OnConditionDelegate(this.conversation_shopworker_sell_player_and_workshop_warehouse_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_42", "player_sell_warehouse_done_2", "player_sell_warehouse_done", "{=eALf5d30}Thanks!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_shopworker_player_sell_workshop_on_consequence));
      campaignGameStarter.AddDialogLine("workshop_39", "player_sell_warehouse_done", "close_window", "{=EPb2BDuo}We had a good run, boss. Maybe we can work together again in the future. For now, it will take some time to pack things up.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_shopworker_player_sell_workshop_on_consequence));
      campaignGameStarter.AddDialogLine("workshop_40", "player_sell_decline", "shopkeeper_start", "{=DBTOhVl0}I'm glad you reconsidered, boss. Maybe it's not my place to say, but I think you should never let go of a good investment.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_41_1", "player_change_production", "player_change_production_1", "{=9eLyeU7M}Sure, boss. It will cost us {COST}{GOLD_ICON} for new equipment. Shall we go ahead?", new ConversationSentence.OnConditionDelegate(this.conversation_player_workshop_change_production_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_42_2", "player_change_production_1", "player_change_production_2", "{=kB65SzbF}Yes.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_player_workshop_change_production_on_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.workshop_42_on_clickable_condition));
      campaignGameStarter.AddPlayerLine("workshop_43", "player_change_production_1", "shopkeeper_start", "{=8OkPHu4f}No", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_44", "player_change_production_2", "player_change_production_2_1", "{=WAa4yaTo}What do you want us to make?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddRepeatablePlayerLine("workshop_45", "player_change_production_2_1", "player_change_production_3", "{=!}{BUILDING}", "{=5z4hEq68}I am thinking of a different kind of workshop.", "player_change_production_2", new ConversationSentence.OnConditionDelegate(this.conversation_player_workshop_player_decision_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_workshop_player_decision_on_consequence));
      campaignGameStarter.AddPlayerLine("workshop_cancel", "player_change_production_2_1", "shopkeeper_start", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_46", "player_change_production_3", "player_change_production_5", "{=8d7y1IHp}All right. Just to confirm - {.%}{.a} {WORKSHOP_TYPE}{.%} is what you want?", new ConversationSentence.OnConditionDelegate(this.workshop_46_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_50", "player_change_production_5", "player_change_production_end", "{=aeouhelq}Yes", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_47", "player_change_production_end", "close_window", "{=Imes09et}Okay, then. We'll take that silver and buy some tools and and hire some workers with the proper skills.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_player_workshop_player_changed_production_on_consequence));
      campaignGameStarter.AddPlayerLine("workshop_48", "player_change_production_5", "player_change_production_2", "{=EAb4hSDP}Let me think again.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("workshop_49", "player_change_production_5", "shopkeeper_start", "{=QHbcFrPX}On second thought, I don't want to change what we are producing. Go on like this.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool conversation_shopworker_sell_player_and_workshop_warehouse_on_condition()
    {
      return Hero.MainHero.OwnedWorkshops.Count<Workshop>((Func<Workshop, bool>) (x => x.Settlement == Settlement.CurrentSettlement)) == 1;
    }

    private bool workshop_npc_owner_begin_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.ShopWorker)
      {
        Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
        if (currentWorkshop != null && currentWorkshop.Owner != Hero.MainHero && currentWorkshop.WorkshopType != null)
        {
          if (currentWorkshop.WorkshopType.StringId == "smithy" || currentWorkshop.WorkshopType.StringId == "silversmithy")
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=KTgOXBPN}Hot around here, eh {?PLAYER.GENDER}madame{?}sir{\\?}? I need to get back to the forges in a minute, but how can I help you?", false);
          else if (currentWorkshop.WorkshopType.StringId == "tannery")
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=4pkfkSbe}Sorry about the smell around here, {?PLAYER.GENDER}madame{?}sir{\\?}. Tanning's like that, sorry to say. How can I help you?", false);
          else if (currentWorkshop.WorkshopType.StringId == "pottery_shop")
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=lUjCslGK}Hope you don't mind the smoke around here, {?PLAYER.GENDER}madame{?}sir{\\?}. Got to keep the kilns hot. How can I help you?", false);
          else if (currentWorkshop.WorkshopType.StringId == "brewery")
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=keLJvk37}I just have a minute, {?PLAYER.GENDER}madame{?}sir{\\?}. I need to check on a batch that's brewing. How can I help you?", false);
          else if (currentWorkshop.WorkshopType.StringId == "wool_weavery" || currentWorkshop.WorkshopType.StringId == "linen_weavery" || currentWorkshop.WorkshopType.StringId == "velvet_weavery")
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=1xyj3HW0}I just have a minute here, {?PLAYER.GENDER}madame{?}sir{\\?}. I need to get back to the loom. How can I help you?", false);
          else if (currentWorkshop.WorkshopType.StringId == "olive_press" || currentWorkshop.WorkshopType.StringId == "wine_press")
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=PRiOVcO9}Careful around here, {?PLAYER.GENDER}madame{?}sir{\\?}. Don't want to get your hands caught in one of the presses. How can I help you?", false);
          else if (currentWorkshop.WorkshopType.StringId == "wood_WorkshopType")
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=kMdBpDu1}Hope you don't mind all the sawdust around here, {?PLAYER.GENDER}madame{?}sir{\\?}. How can I help you?", false);
          else
            MBTextManager.SetTextVariable("WORKSHOP_INTRO_LINE", "{=TnZ9Mynm}Right... So, {?PLAYER.GENDER}madame{?}sir{\\?}, how can I help you?", false);
          MBTextManager.SetTextVariable("WORKSHOP_TYPE", currentWorkshop.WorkshopType.Name, false);
          return true;
        }
      }
      return false;
    }

    private bool workshop_buy_clickable_condition(out TextObject explanation)
    {
      return this.player_war_status_clickable_condition(out explanation);
    }

    private bool workshop_12_on_condition()
    {
      StringHelpers.SetCharacterProperties("OWNER", this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent).Owner.CharacterObject);
      return true;
    }

    private bool player_ask_questions_on_condition()
    {
      if (this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent).Owner == Hero.MainHero)
        MBTextManager.SetTextVariable("NPC_ANSWER", new TextObject("{=Hw4mTZxm}Sure, boss. Ask me anything."), false);
      else
        MBTextManager.SetTextVariable("NPC_ANSWER", new TextObject("{=AbIUjOLZ}Sure. What do you want to know?"), false);
      return true;
    }

    private bool workshop_13_on_condition()
    {
      Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
      MBTextManager.SetTextVariable("WORKSHOP_TYPE", currentWorkshop.WorkshopType.Name, false);
      MBTextManager.SetTextVariable("WORKSHOP_DESCRIPTION", currentWorkshop.WorkshopType.Description, false);
      return true;
    }

    private bool workshop_player_owner_begin_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.ShopWorker)
        return false;
      Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
      return currentWorkshop != null && currentWorkshop.Owner == Hero.MainHero;
    }

    private bool workshop_player_not_owner_on_condition()
    {
      Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
      return currentWorkshop != null && currentWorkshop.Owner != Hero.MainHero;
    }

    private bool workshop_player_is_owner_on_condition()
    {
      Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
      return currentWorkshop != null && currentWorkshop.Owner == Hero.MainHero;
    }

    private bool workshop_42_on_clickable_condition(out TextObject explanation)
    {
      if (Hero.MainHero.Gold < Campaign.Current.Models.WorkshopModel.GetConvertProductionCost(this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent).WorkshopType))
      {
        explanation = new TextObject("{=EASiM8NU}You haven't got enough denars to change production.");
        return false;
      }
      explanation = TextObject.Empty;
      return true;
    }

    private bool workshop_46_on_condition()
    {
      MBTextManager.SetTextVariable("WORKSHOP_DESCRIPTION", this._lastSelectedWorkshopType.Description, false);
      MBTextManager.SetTextVariable("WORKSHOP_TYPE", this._lastSelectedWorkshopType.Name, false);
      return true;
    }

    private bool conversation_shopworker_sell_player_workshop_on_condition()
    {
      MBTextManager.SetTextVariable("PRICE", Campaign.Current.Models.WorkshopModel.GetCostForNotable(this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent)));
      return true;
    }

    private void conversation_shopworker_player_sell_workshop_on_consequence()
    {
      Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
      if (currentWorkshop.Owner != Hero.MainHero)
        return;
      Hero ownerForWorkshop = Campaign.Current.Models.WorkshopModel.GetNotableOwnerForWorkshop(currentWorkshop);
      ChangeOwnerOfWorkshopAction.ApplyByPlayerSelling(currentWorkshop, ownerForWorkshop, currentWorkshop.WorkshopType);
    }

    private bool conversation_player_workshop_change_production_on_condition()
    {
      MBTextManager.SetTextVariable("COST", Campaign.Current.Models.WorkshopModel.GetConvertProductionCost(this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent).WorkshopType));
      return true;
    }

    private void conversation_player_workshop_change_production_on_consequence()
    {
      Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) WorkshopType.All.Where<WorkshopType>((Func<WorkshopType, bool>) (x => x != currentWorkshop.WorkshopType && !x.IsHidden)).ToList<WorkshopType>());
    }

    private bool conversation_player_workshop_player_decision_on_condition()
    {
      if (!(ConversationSentence.CurrentProcessedRepeatObject is WorkshopType processedRepeatObject))
        return false;
      ConversationSentence.SelectedRepeatLine.SetTextVariable("BUILDING", processedRepeatObject.Name);
      return true;
    }

    private void conversation_player_workshop_player_decision_on_consequence()
    {
      this._lastSelectedWorkshopType = ConversationSentence.SelectedRepeatObject as WorkshopType;
    }

    private void conversation_player_workshop_player_changed_production_on_consequence()
    {
      Workshop currentWorkshop = this.FindCurrentWorkshop(ConversationMission.OneToOneConversationAgent);
      if (currentWorkshop.WorkshopType == this._lastSelectedWorkshopType)
        return;
      ChangeProductionTypeOfWorkshopAction.Apply(currentWorkshop, this._lastSelectedWorkshopType);
    }
  }
}
