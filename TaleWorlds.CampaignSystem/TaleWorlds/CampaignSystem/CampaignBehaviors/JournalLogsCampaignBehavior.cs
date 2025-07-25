// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.JournalLogsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class JournalLogsCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnQuestStartedEvent.AddNonSerializedListener((object) this, new Action<QuestBase>(this.OnQuestStarted));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      CampaignEvents.OnIssueUpdatedEvent.AddNonSerializedListener((object) this, new Action<IssueBase, IssueBase.IssueUpdateDetails, Hero>(this.OnIssueUpdated));
      CampaignEvents.IssueLogAddedEvent.AddNonSerializedListener((object) this, new Action<IssueBase, bool>(this.OnIssueLogAdded));
      CampaignEvents.QuestLogAddedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, bool>(this.OnQuestLogAdded));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnIssueLogAdded(IssueBase issue, bool hideInformation)
    {
      JournalLogEntry relatedLog = this.GetRelatedLog(issue);
      if (relatedLog == null)
      {
        relatedLog = this.CreateRelatedLog(issue);
        LogEntry.AddLogEntry((LogEntry) relatedLog);
      }
      relatedLog.Update(this.GetEntries(issue));
    }

    private void OnQuestLogAdded(QuestBase quest, bool hideInformation)
    {
      JournalLogEntry relatedLog = this.GetRelatedLog(quest);
      if (relatedLog == null)
      {
        relatedLog = this.CreateRelatedLog(quest);
        LogEntry.AddLogEntry((LogEntry) relatedLog);
      }
      relatedLog.Update(this.GetEntries(quest));
    }

    private void OnQuestStarted(QuestBase quest)
    {
      JournalLogEntry relatedLog = this.GetRelatedLog(quest);
      if (relatedLog == null)
      {
        relatedLog = this.CreateRelatedLog(quest);
        LogEntry.AddLogEntry((LogEntry) relatedLog);
      }
      relatedLog.Update(this.GetEntries(quest));
      LogEntry.AddLogEntry((LogEntry) new IssueQuestStartLogEntry(relatedLog.RelatedHero));
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      JournalLogEntry relatedLog = this.GetRelatedLog(quest);
      if (relatedLog == null)
      {
        relatedLog = this.CreateRelatedLog(quest);
        LogEntry.AddLogEntry((LogEntry) relatedLog);
      }
      relatedLog.Update(this.GetEntries(quest), detail);
      LogEntry.AddLogEntry((LogEntry) new IssueQuestLogEntry(relatedLog.RelatedHero, relatedLog.Antagonist, detail));
    }

    private void OnIssueUpdated(
      IssueBase issue,
      IssueBase.IssueUpdateDetails details,
      Hero issueSolver)
    {
      if (issueSolver != Hero.MainHero)
        return;
      JournalLogEntry relatedLog = this.GetRelatedLog(issue);
      if (relatedLog == null)
      {
        relatedLog = this.CreateRelatedLog(issue);
        LogEntry.AddLogEntry((LogEntry) relatedLog);
      }
      relatedLog.Update(this.GetEntries(issue), details);
    }

    private JournalLogEntry CreateRelatedLog(IssueBase issue)
    {
      return issue.IssueQuest != null ? new JournalLogEntry(issue.IssueQuest.Title, issue.IssueQuest.QuestGiver, (Hero) null, (issue.IssueQuest.IsSpecialQuest ? 1 : 0) != 0, new MBObjectBase[2]
      {
        (MBObjectBase) issue,
        (MBObjectBase) issue.IssueQuest
      }) : new JournalLogEntry(issue.Title, issue.IssueOwner, issue.CounterOfferHero, false, new MBObjectBase[1]
      {
        (MBObjectBase) issue
      });
    }

    private JournalLogEntry CreateRelatedLog(QuestBase quest)
    {
      IssueBase issueOfQuest = IssueManager.GetIssueOfQuest(quest);
      if (issueOfQuest != null)
        return this.CreateRelatedLog(issueOfQuest);
      return new JournalLogEntry(quest.Title, quest.QuestGiver, (Hero) null, (quest.IsSpecialQuest ? 1 : 0) != 0, new MBObjectBase[1]
      {
        (MBObjectBase) quest
      });
    }

    private JournalLogEntry GetRelatedLog(IssueBase issue)
    {
      return Campaign.Current.LogEntryHistory.FindLastGameActionLog<JournalLogEntry>((Func<JournalLogEntry, bool>) (x => x.IsRelatedTo((MBObjectBase) issue)));
    }

    private JournalLogEntry GetRelatedLog(QuestBase quest)
    {
      IssueBase issueOfQuest = IssueManager.GetIssueOfQuest(quest);
      return issueOfQuest != null ? this.GetRelatedLog(issueOfQuest) : Campaign.Current.LogEntryHistory.FindLastGameActionLog<JournalLogEntry>((Func<JournalLogEntry, bool>) (x => x.IsRelatedTo((MBObjectBase) quest)));
    }

    private MBReadOnlyList<JournalLog> GetEntries(IssueBase issue)
    {
      if (issue.IssueQuest == null)
        return issue.JournalEntries;
      MBList<JournalLog> mbList = issue.JournalEntries.ToMBList<JournalLog>();
      JournalLog journalLog = issue.IssueQuest.JournalEntries.FirstOrDefault<JournalLog>();
      if (journalLog != null)
      {
        int index;
        for (index = 0; index < mbList.Count; ++index)
        {
          if (mbList[index].LogTime > journalLog.LogTime)
          {
            --index;
            break;
          }
        }
        mbList.InsertRange(index, (IEnumerable<JournalLog>) issue.IssueQuest.JournalEntries);
      }
      return (MBReadOnlyList<JournalLog>) mbList;
    }

    private MBReadOnlyList<JournalLog> GetEntries(QuestBase quest)
    {
      IssueBase issueOfQuest = IssueManager.GetIssueOfQuest(quest);
      return issueOfQuest != null ? this.GetEntries(issueOfQuest) : quest.JournalEntries;
    }
  }
}
