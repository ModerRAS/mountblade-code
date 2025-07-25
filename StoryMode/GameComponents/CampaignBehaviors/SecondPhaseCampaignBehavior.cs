// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.SecondPhaseCampaignBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.Quests.SecondPhase;
using StoryMode.Quests.SecondPhase.ConspiracyQuests;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class SecondPhaseCampaignBehavior : CampaignBehaviorBase
  {
    private int _conspiracyQuestTriggerDayCounter;
    private bool _isConspiracySetUpStarted;

    public SecondPhaseCampaignBehavior()
    {
      this._conspiracyQuestTriggerDayCounter = 0;
      this._isConspiracySetUpStarted = false;
    }

    public override void RegisterEvents()
    {
      CampaignEvents.WeeklyTickEvent.AddNonSerializedListener((object) this, new Action(this.WeeklyTick));
      CampaignEvents.OnQuestStartedEvent.AddNonSerializedListener((object) this, new Action<QuestBase>(this.OnQuestStarted));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      StoryModeEvents.OnConspiracyActivatedEvent.AddNonSerializedListener((object) this, new Action(this.OnConspiracyActivated));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<int>("_conspiracyQuestTriggerDayCounter", ref this._conspiracyQuestTriggerDayCounter);
      dataStore.SyncData<bool>("_isConspiracySetUpStarted", ref this._isConspiracySetUpStarted);
    }

    private void WeeklyTick()
    {
      StoryMode.StoryModePhases.SecondPhase instance = StoryMode.StoryModePhases.SecondPhase.Instance;
      int num = 14 + MBRandom.RandomIntWithSeed(instance != null ? (uint) instance.LastConspiracyQuestCreationTime.ToMilliseconds : 53U, 2000U) % 8;
      if (!this._isConspiracySetUpStarted || StoryModeManager.Current.MainStoryLine.ThirdPhase != null || (double) StoryMode.StoryModePhases.SecondPhase.Instance.ConspiracyStrength >= 2000.0 || (double) StoryMode.StoryModePhases.SecondPhase.Instance.LastConspiracyQuestCreationTime.ElapsedDaysUntilNow < (double) num || this.IsThereActiveConspiracyQuest())
        return;
      StoryMode.StoryModePhases.SecondPhase.Instance.CreateNextConspiracyQuest();
    }

    private void OnQuestStarted(QuestBase quest)
    {
      switch (quest)
      {
        case AssembleEmpireQuestBehavior.AssembleEmpireQuest _:
        case WeakenEmpireQuestBehavior.WeakenEmpireQuest _:
          StoryModeManager.Current.MainStoryLine.CompleteFirstPhase();
          this._isConspiracySetUpStarted = true;
          break;
      }
    }

    private void DailyTick()
    {
      if (!this._isConspiracySetUpStarted || this._conspiracyQuestTriggerDayCounter >= 10)
        return;
      ++this._conspiracyQuestTriggerDayCounter;
      if (this._conspiracyQuestTriggerDayCounter < 10)
        return;
      new ConspiracyProgressQuest().StartQuest();
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      StoryMode.StoryModePhases.SecondPhase.Instance?.OnSessionLaunched();
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      foreach (MobileParty destroyedParty in Campaign.Current.CustomParties.ToList<MobileParty>())
      {
        if (destroyedParty.Name.HasSameValue(new TextObject("{=eVzg5Mtl}Conspiracy Caravan")))
        {
          bool flag = true;
          foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
          {
            if (quest.GetType() == typeof (DisruptSupplyLinesConspiracyQuest) && ((DisruptSupplyLinesConspiracyQuest) quest).ConspiracyCaravan == destroyedParty)
            {
              flag = false;
              break;
            }
          }
          if (flag)
            DestroyPartyAction.Apply((PartyBase) null, destroyedParty);
        }
      }
    }

    private void OnConspiracyActivated()
    {
      CampaignEventDispatcher.Instance.RemoveListeners((object) this);
    }

    private bool IsThereActiveConspiracyQuest()
    {
      foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
      {
        if (quest.IsOngoing && typeof (ConspiracyQuestBase) == quest.GetType().BaseType)
          return true;
      }
      return false;
    }
  }
}
