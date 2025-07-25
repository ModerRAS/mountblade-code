// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.LordConversationsStoryModeBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class LordConversationsStoryModeBehavior : CampaignBehaviorBase
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

    private void AddDialogs(CampaignGameStarter starter)
    {
      starter.AddDialogLine("anti_imperial_mentor_introduction", "lord_introduction", "lord_start", "{=TB20aFsf}You probably are aware that I am {CONVERSATION_HERO.FIRSTNAME}. I am not sure why you have sought me out, but know that my old life, as imperial lap-dog, is over.", new ConversationSentence.OnConditionDelegate(this.conversation_anti_imperial_mentor_introduction_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 150);
      starter.AddDialogLine("imperial_mentor_introduction", "lord_introduction", "lord_start", "{=6aDiS9eP}I am {CONVERSATION_HERO.FIRSTNAME}. You probably already know that, though. Once I wielded great power, but now... Anyway, I am most curious what you might want with me.", new ConversationSentence.OnConditionDelegate(this.conversation_imperial_mentor_introduction_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 150);
      starter.AddDialogLine("start_default_for_mentors", "start", "lord_start", "{=!}{PLAYER.NAME}...", new ConversationSentence.OnConditionDelegate(this.start_default_for_mentors_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 150);
    }

    private bool conversation_imperial_mentor_introduction_on_condition()
    {
      if (!Campaign.Current.ConversationManager.CurrentConversationIsFirst || Hero.OneToOneConversationHero != StoryModeHeroes.ImperialMentor)
        return false;
      StringHelpers.SetCharacterProperties("CONVERSATION_HERO", CharacterObject.OneToOneConversationCharacter);
      return true;
    }

    private bool conversation_anti_imperial_mentor_introduction_on_condition()
    {
      if (!Campaign.Current.ConversationManager.CurrentConversationIsFirst || Hero.OneToOneConversationHero != StoryModeHeroes.AntiImperialMentor)
        return false;
      StringHelpers.SetCharacterProperties("CONVERSATION_HERO", CharacterObject.OneToOneConversationCharacter);
      return true;
    }

    private bool start_default_for_mentors_on_condition()
    {
      return Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero.HasMet && (Hero.OneToOneConversationHero == StoryModeHeroes.AntiImperialMentor || Hero.OneToOneConversationHero == StoryModeHeroes.ImperialMentor);
    }
  }
}
