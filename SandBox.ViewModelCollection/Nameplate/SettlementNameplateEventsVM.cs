// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.SettlementNameplateEventsVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.ViewModelCollection.Missions.NameMarker;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class SettlementNameplateEventsVM : ViewModel
  {
    private List<QuestBase> _relatedQuests;
    private Settlement _settlement;
    private bool _areQuestsDirty;
    private MBBindingList<QuestMarkerVM> _trackQuests;
    private MBBindingList<SettlementNameplateEventItemVM> _eventsList;

    public bool IsEventsRegistered { get; private set; }

    public SettlementNameplateEventsVM(Settlement settlement)
    {
      this._settlement = settlement;
      this.EventsList = new MBBindingList<SettlementNameplateEventItemVM>();
      this.TrackQuests = new MBBindingList<QuestMarkerVM>();
      this._relatedQuests = new List<QuestBase>();
      if (!settlement.IsVillage)
        return;
      this.AddPrimaryProductionIcon();
    }

    public void Tick()
    {
      if (!this._areQuestsDirty)
        return;
      this.RefreshQuestCounts();
      this._areQuestsDirty = false;
    }

    private void PopulateEventList()
    {
      if (Campaign.Current.TournamentManager.GetTournamentGame(this._settlement.Town) == null)
        return;
      this.EventsList.Add(new SettlementNameplateEventItemVM(SettlementNameplateEventItemVM.SettlementEventType.Tournament));
    }

    public void RegisterEvents()
    {
      if (this.IsEventsRegistered)
        return;
      this.PopulateEventList();
      CampaignEvents.TournamentStarted.AddNonSerializedListener((object) this, new Action<Town>(this.OnTournamentStarted));
      CampaignEvents.TournamentFinished.AddNonSerializedListener((object) this, new Action<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>(this.OnTournamentFinished));
      CampaignEvents.TournamentCancelled.AddNonSerializedListener((object) this, new Action<Town>(this.OnTournamentCancelled));
      CampaignEvents.OnNewIssueCreatedEvent.AddNonSerializedListener((object) this, new Action<IssueBase>(this.OnNewIssueCreated));
      CampaignEvents.OnIssueUpdatedEvent.AddNonSerializedListener((object) this, new Action<IssueBase, IssueBase.IssueUpdateDetails, Hero>(this.OnIssueUpdated));
      CampaignEvents.OnQuestStartedEvent.AddNonSerializedListener((object) this, new Action<QuestBase>(this.OnQuestStarted));
      CampaignEvents.QuestLogAddedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, bool>(this.OnQuestLogAdded));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroTakenPrisoner));
      this.IsEventsRegistered = true;
      this.RefreshQuestCounts();
    }

    public void UnloadEvents()
    {
      if (!this.IsEventsRegistered)
        return;
      CampaignEvents.TournamentStarted.ClearListeners((object) this);
      CampaignEvents.TournamentFinished.ClearListeners((object) this);
      CampaignEvents.TournamentCancelled.ClearListeners((object) this);
      CampaignEvents.OnNewIssueCreatedEvent.ClearListeners((object) this);
      CampaignEvents.OnIssueUpdatedEvent.ClearListeners((object) this);
      CampaignEvents.OnQuestStartedEvent.ClearListeners((object) this);
      CampaignEvents.QuestLogAddedEvent.ClearListeners((object) this);
      CampaignEvents.OnQuestCompletedEvent.ClearListeners((object) this);
      CampaignEvents.SettlementEntered.ClearListeners((object) this);
      CampaignEvents.OnSettlementLeftEvent.ClearListeners((object) this);
      CampaignEvents.HeroPrisonerTaken.ClearListeners((object) this);
      int count = this.EventsList.Count;
      for (int index = 0; index < count; ++index)
      {
        if (this.EventsList[index].EventType != SettlementNameplateEventItemVM.SettlementEventType.Production)
        {
          this.EventsList.RemoveAt(index);
          --count;
          --index;
        }
      }
      this.IsEventsRegistered = false;
    }

    private void OnTournamentStarted(Town town)
    {
      if (this._settlement.Town == null || town != this._settlement.Town)
        return;
      bool flag = false;
      for (int index = 0; index < this.EventsList.Count; ++index)
      {
        if (this.EventsList[index].EventType == SettlementNameplateEventItemVM.SettlementEventType.Tournament)
        {
          flag = true;
          break;
        }
      }
      if (flag)
        return;
      this.EventsList.Add(new SettlementNameplateEventItemVM(SettlementNameplateEventItemVM.SettlementEventType.Tournament));
    }

    private void OnTournamentFinished(
      CharacterObject winner,
      MBReadOnlyList<CharacterObject> participants,
      Town town,
      ItemObject prize)
    {
      this.RemoveTournament(town);
    }

    private void OnTournamentCancelled(Town town) => this.RemoveTournament(town);

    private void RemoveTournament(Town town)
    {
      if (this._settlement.Town == null || town != this._settlement.Town || this.EventsList.Count<SettlementNameplateEventItemVM>((Func<SettlementNameplateEventItemVM, bool>) (e => e.EventType == SettlementNameplateEventItemVM.SettlementEventType.Tournament)) <= 0)
        return;
      int index1 = -1;
      for (int index2 = 0; index2 < this.EventsList.Count; ++index2)
      {
        if (this.EventsList[index2].EventType == SettlementNameplateEventItemVM.SettlementEventType.Tournament)
        {
          index1 = index2;
          break;
        }
      }
      if (index1 != -1)
        this.EventsList.RemoveAt(index1);
      else
        Debug.FailedAssert("There should be a tournament item to remove", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\Nameplate\\SettlementNameplateEventsVM.cs", nameof (RemoveTournament), 162);
    }

    private void RefreshQuestCounts()
    {
      this._relatedQuests.Clear();
      int count1 = 0;
      int count2 = 0;
      int count3 = 0;
      int issuesInSettlement1 = Campaign.Current.IssueManager.GetNumOfActiveIssuesInSettlement(this._settlement, false);
      int issuesInSettlement2 = Campaign.Current.IssueManager.GetNumOfAvailableIssuesInSettlement(this._settlement);
      this.TrackQuests.Clear();
      List<QuestBase> questBaseList;
      if (Campaign.Current.QuestManager.TrackedObjects.TryGetValue((ITrackableCampaignObject) this._settlement, out questBaseList))
      {
        foreach (QuestBase questBase in questBaseList)
        {
          if (questBase.IsSpecialQuest && !this.TrackQuests.Any<QuestMarkerVM>((Func<QuestMarkerVM, bool>) (x => x.IssueQuestFlag == SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest)))
          {
            this.TrackQuests.Add(new QuestMarkerVM(SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest));
            this._relatedQuests.Add(questBase);
          }
          else if (!this.TrackQuests.Any<QuestMarkerVM>((Func<QuestMarkerVM, bool>) (x => x.IssueQuestFlag == SandBoxUIHelper.IssueQuestFlags.TrackedIssue)))
          {
            this.TrackQuests.Add(new QuestMarkerVM(SandBoxUIHelper.IssueQuestFlags.TrackedIssue));
            this._relatedQuests.Add(questBase);
          }
        }
      }
      List<(bool, QuestBase)> relatedToSettlement = SandBoxUIHelper.GetQuestsRelatedToSettlement(this._settlement);
      for (int index = 0; index < relatedToSettlement.Count; ++index)
      {
        if (relatedToSettlement[index].Item1)
        {
          if (relatedToSettlement[index].Item2.IsSpecialQuest)
            ++count1;
          else
            ++issuesInSettlement1;
        }
        else if (relatedToSettlement[index].Item2.IsSpecialQuest)
          ++count3;
        else
          ++count2;
        this._relatedQuests.Add(relatedToSettlement[index].Item2);
      }
      this.HandleIssueCount(issuesInSettlement2, SettlementNameplateEventItemVM.SettlementEventType.AvailableIssue);
      this.HandleIssueCount(issuesInSettlement1, SettlementNameplateEventItemVM.SettlementEventType.ActiveQuest);
      this.HandleIssueCount(count1, SettlementNameplateEventItemVM.SettlementEventType.ActiveStoryQuest);
      this.HandleIssueCount(count2, SettlementNameplateEventItemVM.SettlementEventType.TrackedIssue);
      this.HandleIssueCount(count3, SettlementNameplateEventItemVM.SettlementEventType.TrackedStoryQuest);
    }

    private void OnNewIssueCreated(IssueBase issue)
    {
      if (issue.IssueSettlement != this._settlement && issue.IssueOwner?.CurrentSettlement != this._settlement)
        return;
      this._areQuestsDirty = true;
    }

    private void OnIssueUpdated(IssueBase issue, IssueBase.IssueUpdateDetails details, Hero hero)
    {
      if (issue.IssueSettlement != this._settlement || issue.IssueQuest != null)
        return;
      this._areQuestsDirty = true;
    }

    private void OnQuestStarted(QuestBase quest)
    {
      if (!this.IsQuestRelated(quest))
        return;
      this._areQuestsDirty = true;
    }

    private void OnQuestLogAdded(QuestBase quest, bool hideInformation)
    {
      if (!this.IsQuestRelated(quest))
        return;
      this._areQuestsDirty = true;
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails details)
    {
      if (!this.IsQuestRelated(quest))
        return;
      this._areQuestsDirty = true;
    }

    private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      if (settlement != this._settlement)
        return;
      this._areQuestsDirty = true;
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (settlement != this._settlement)
        return;
      this._areQuestsDirty = true;
    }

    private void OnHeroTakenPrisoner(PartyBase capturer, Hero prisoner)
    {
      if (prisoner.CurrentSettlement != this._settlement)
        return;
      this._areQuestsDirty = true;
    }

    private void AddPrimaryProductionIcon()
    {
      string stringId = this._settlement.Village.VillageType.PrimaryProduction.StringId;
      this.EventsList.Add(new SettlementNameplateEventItemVM(stringId.Contains("camel") ? "camel" : (stringId.Contains("horse") || stringId.Contains("mule") ? "horse" : stringId)));
    }

    private void HandleIssueCount(
      int count,
      SettlementNameplateEventItemVM.SettlementEventType eventType)
    {
      SettlementNameplateEventItemVM nameplateEventItemVm = this.EventsList.FirstOrDefault<SettlementNameplateEventItemVM>((Func<SettlementNameplateEventItemVM, bool>) (e => e.EventType == eventType));
      if (count > 0 && nameplateEventItemVm == null)
      {
        this.EventsList.Add(new SettlementNameplateEventItemVM(eventType));
      }
      else
      {
        if (count != 0 || nameplateEventItemVm == null)
          return;
        this.EventsList.Remove(nameplateEventItemVm);
      }
    }

    private bool IsQuestRelated(QuestBase quest)
    {
      IssueBase issueOfQuest = IssueManager.GetIssueOfQuest(quest);
      return issueOfQuest != null && issueOfQuest.IssueSettlement == this._settlement || this._relatedQuests.Contains(quest) || SandBoxUIHelper.IsQuestRelatedToSettlement(quest, this._settlement);
    }

    [DataSourceProperty]
    public MBBindingList<QuestMarkerVM> TrackQuests
    {
      get => this._trackQuests;
      set
      {
        if (value == this._trackQuests)
          return;
        this._trackQuests = value;
        this.OnPropertyChangedWithValue<MBBindingList<QuestMarkerVM>>(value, nameof (TrackQuests));
      }
    }

    public MBBindingList<SettlementNameplateEventItemVM> EventsList
    {
      get => this._eventsList;
      set
      {
        if (value == this._eventsList)
          return;
        this._eventsList = value;
        this.OnPropertyChangedWithValue<MBBindingList<SettlementNameplateEventItemVM>>(value, nameof (EventsList));
      }
    }
  }
}
