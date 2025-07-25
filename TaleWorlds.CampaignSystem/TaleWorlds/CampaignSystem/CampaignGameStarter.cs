// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignGameStarter
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class CampaignGameStarter : IGameStarter
  {
    private readonly GameMenuManager _gameMenuManager;
    private readonly GameTextManager _gameTextManager;
    private readonly ConversationManager _conversationManager;
    private readonly List<CampaignBehaviorBase> _campaignBehaviors = new List<CampaignBehaviorBase>();
    private readonly List<GameModel> _models = new List<GameModel>();

    public ICollection<CampaignBehaviorBase> CampaignBehaviors
    {
      get => (ICollection<CampaignBehaviorBase>) this._campaignBehaviors;
    }

    public IEnumerable<GameModel> Models => (IEnumerable<GameModel>) this._models;

    public CampaignGameStarter(
      GameMenuManager gameMenuManager,
      ConversationManager conversationManager,
      GameTextManager gameTextManager)
    {
      this._conversationManager = conversationManager;
      this._gameTextManager = gameTextManager;
      this._gameMenuManager = gameMenuManager;
    }

    public void UnregisterNonReadyObjects()
    {
      Game.Current.ObjectManager.UnregisterNonReadyObjects();
      this._gameMenuManager.UnregisterNonReadyObjects();
    }

    public void AddBehavior(CampaignBehaviorBase campaignBehavior)
    {
      if (campaignBehavior == null)
        return;
      this._campaignBehaviors.Add(campaignBehavior);
    }

    public void RemoveBehaviors<T>() where T : CampaignBehaviorBase
    {
      for (int index = this._campaignBehaviors.Count - 1; index >= 0; --index)
      {
        if (this._campaignBehaviors[index] is T)
          this._campaignBehaviors.RemoveAt(index);
      }
    }

    public bool RemoveBehavior<T>(T behavior) where T : CampaignBehaviorBase
    {
      return this._campaignBehaviors.Remove((CampaignBehaviorBase) behavior);
    }

    public void AddModel(GameModel model)
    {
      if (model == null)
        return;
      if (this._models.FindIndex((Predicate<GameModel>) (x => x.GetType() == model.GetType())) >= 0)
        throw new ArgumentException();
      this._models.Add(model);
    }

    public void AddGameMenu(
      string menuId,
      string menuText,
      OnInitDelegate initDelegate,
      GameOverlays.MenuOverlayType overlay = GameOverlays.MenuOverlayType.None,
      GameMenu.MenuFlags menuFlags = GameMenu.MenuFlags.None,
      object relatedObject = null)
    {
      this.GetPresumedGameMenu(menuId).Initialize(new TextObject(menuText), initDelegate, overlay, menuFlags, relatedObject);
    }

    public void AddWaitGameMenu(
      string idString,
      string text,
      OnInitDelegate initDelegate,
      TaleWorlds.CampaignSystem.GameMenus.OnConditionDelegate condition,
      TaleWorlds.CampaignSystem.GameMenus.OnConsequenceDelegate consequence,
      OnTickDelegate tick,
      GameMenu.MenuAndOptionType type,
      GameOverlays.MenuOverlayType overlay = GameOverlays.MenuOverlayType.None,
      float targetWaitHours = 0.0f,
      GameMenu.MenuFlags flags = GameMenu.MenuFlags.None,
      object relatedObject = null)
    {
      this.GetPresumedGameMenu(idString).Initialize(new TextObject(text), initDelegate, condition, consequence, tick, type, overlay, targetWaitHours, flags, relatedObject);
    }

    public void AddGameMenuOption(
      string menuId,
      string optionId,
      string optionText,
      GameMenuOption.OnConditionDelegate condition,
      GameMenuOption.OnConsequenceDelegate consequence,
      bool isLeave = false,
      int index = -1,
      bool isRepeatable = false,
      object relatedObject = null)
    {
      this.GetPresumedGameMenu(menuId).AddOption(optionId, new TextObject(optionText), condition, consequence, index, isLeave, isRepeatable, relatedObject);
    }

    public GameMenu GetPresumedGameMenu(string stringId)
    {
      GameMenu gameMenu = this._gameMenuManager.GetGameMenu(stringId);
      if (gameMenu == null)
      {
        gameMenu = new GameMenu(stringId);
        this._gameMenuManager.AddGameMenu(gameMenu);
      }
      return gameMenu;
    }

    private ConversationSentence AddDialogLine(ConversationSentence dialogLine)
    {
      this._conversationManager.AddDialogLine(dialogLine);
      return dialogLine;
    }

    public ConversationSentence AddPlayerLine(
      string id,
      string inputToken,
      string outputToken,
      string text,
      ConversationSentence.OnConditionDelegate conditionDelegate,
      ConversationSentence.OnConsequenceDelegate consequenceDelegate,
      int priority = 100,
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate = null,
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate = null)
    {
      return this.AddDialogLine(new ConversationSentence(id, new TextObject(text), inputToken, outputToken, conditionDelegate, clickableConditionDelegate, consequenceDelegate, 1U, priority, persuasionOptionDelegate: persuasionOptionDelegate));
    }

    public ConversationSentence AddRepeatablePlayerLine(
      string id,
      string inputToken,
      string outputToken,
      string text,
      string continueListingRepeatedObjectsText,
      string continueListingOptionOutputToken,
      ConversationSentence.OnConditionDelegate conditionDelegate,
      ConversationSentence.OnConsequenceDelegate consequenceDelegate,
      int priority = 100,
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate = null)
    {
      ConversationSentence conversationSentence = this.AddDialogLine(new ConversationSentence(id, new TextObject(text), inputToken, outputToken, conditionDelegate, clickableConditionDelegate, consequenceDelegate, 3U, priority));
      this.AddDialogLine(new ConversationSentence(id + "_continue", new TextObject(continueListingRepeatedObjectsText), inputToken, continueListingOptionOutputToken, new ConversationSentence.OnConditionDelegate(ConversationManager.IsThereMultipleRepeatablePages), (ConversationSentence.OnClickableConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(ConversationManager.DialogRepeatContinueListing), 1U, priority));
      return conversationSentence;
    }

    public ConversationSentence AddDialogLineWithVariation(
      string id,
      string inputToken,
      string outputToken,
      ConversationSentence.OnConditionDelegate conditionDelegate,
      ConversationSentence.OnConsequenceDelegate consequenceDelegate,
      int priority = 100,
      string idleActionId = "",
      string idleFaceAnimId = "",
      string reactionId = "",
      string reactionFaceAnimId = "",
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate = null)
    {
      return this.AddDialogLine(new ConversationSentence(id, new TextObject("{=7AyjDt96}{VARIATION_TEXT_TAGGED_LINE}"), inputToken, outputToken, conditionDelegate, clickableConditionDelegate, consequenceDelegate, priority: priority, withVariation: true));
    }

    public ConversationSentence AddDialogLine(
      string id,
      string inputToken,
      string outputToken,
      string text,
      ConversationSentence.OnConditionDelegate conditionDelegate,
      ConversationSentence.OnConsequenceDelegate consequenceDelegate,
      int priority = 100,
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate = null)
    {
      return this.AddDialogLine(new ConversationSentence(id, new TextObject(text), inputToken, outputToken, conditionDelegate, clickableConditionDelegate, consequenceDelegate, priority: priority));
    }

    public ConversationSentence AddDialogLineMultiAgent(
      string id,
      string inputToken,
      string outputToken,
      TextObject text,
      ConversationSentence.OnConditionDelegate conditionDelegate,
      ConversationSentence.OnConsequenceDelegate consequenceDelegate,
      int agentIndex,
      int nextAgentIndex,
      int priority = 100,
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate = null)
    {
      return this.AddDialogLine(new ConversationSentence(id, text, inputToken, outputToken, conditionDelegate, clickableConditionDelegate, consequenceDelegate, priority: priority, agentIndex: agentIndex, nextAgentIndex: nextAgentIndex));
    }
  }
}
