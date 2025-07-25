// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.SecondPhase.ConspiracyProgressQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.SecondPhase
{
  public class ConspiracyProgressQuest : StoryModeQuestBase
  {
    [SaveableField(2)]
    private JournalLog _startQuestLog;

    private bool _isImperialSide => StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine;

    private TextObject _startQuestLogText
    {
      get
      {
        TextObject parent = new TextObject("{=oX2aoilb}{MENTOR.NAME} knows of the rise of your {KINGDOM_NAME}. Rumors say {MENTOR.NAME} is planning to undo your progress. Be ready!");
        StringHelpers.SetCharacterProperties("MENTOR", this._isImperialSide ? StoryModeHeroes.AntiImperialMentor.CharacterObject : StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        parent.SetTextVariable("KINGDOM_NAME", Clan.PlayerClan.Kingdom != null ? Clan.PlayerClan.Kingdom.Name : Clan.PlayerClan.Name);
        return parent;
      }
    }

    private TextObject _questCanceledLogText
    {
      get => new TextObject("{=tVlZTOst}You have chosen a different path.");
    }

    public override TextObject Title
    {
      get
      {
        TextObject parent;
        if (this._isImperialSide)
        {
          parent = new TextObject("{=PJ5C3Dim}{ANTIIMPERIAL_MENTOR.NAME}'s Conspiracy");
          StringHelpers.SetCharacterProperties("ANTIIMPERIAL_MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        }
        else
        {
          parent = new TextObject("{=i3SSc0I4}{IMPERIAL_MENTOR.NAME}'s Plan");
          StringHelpers.SetCharacterProperties("IMPERIAL_MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        }
        return parent;
      }
    }

    public ConspiracyProgressQuest()
      : base("conspiracy_quest_campaign_behavior", (Hero) null, CampaignTime.Never)
    {
      StoryMode.StoryModePhases.SecondPhase.Instance.TriggerConspiracy();
    }

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void HourlyTick()
    {
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      StoryModeEvents.OnConspiracyActivatedEvent.AddNonSerializedListener((object) this, new Action(this.OnConspiracyActivated));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      if (clan != Clan.PlayerClan || oldKingdom != StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom)
        return;
      this.CompleteQuestWithCancel(this._questCanceledLogText);
      StoryModeManager.Current.MainStoryLine.CancelSecondAndThirdPhase();
    }

    protected override void OnStartQuest()
    {
      this._startQuestLog = this.AddDiscreteLog(this._startQuestLogText, new TextObject("{=1LrHV647}Conspiracy Strength"), (int) StoryMode.StoryModePhases.SecondPhase.Instance.ConspiracyStrength, 2000);
    }

    protected override void SetDialogs()
    {
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      foreach (QuestBase questBase in Campaign.Current.QuestManager.Quests.ToList<QuestBase>())
      {
        if (typeof (ConspiracyQuestBase) == questBase.GetType().BaseType && questBase.IsOngoing)
          questBase.CompleteQuestWithCancel(new TextObject("{=YJxCbbpd}Conspiracy is activated!"));
      }
    }

    private void DailyTick()
    {
      StoryModeManager.Current.MainStoryLine.SecondPhase.IncreaseConspiracyStrength();
      this._startQuestLog.UpdateCurrentProgress((int) StoryModeManager.Current.MainStoryLine.SecondPhase.ConspiracyStrength);
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      if (detail != QuestBase.QuestCompleteDetails.Success || !(typeof (ConspiracyQuestBase) == quest.GetType().BaseType))
        return;
      this._startQuestLog.UpdateCurrentProgress((int) StoryModeManager.Current.MainStoryLine.SecondPhase.ConspiracyStrength);
    }

    private void OnConspiracyActivated() => this.CompleteQuestWithTimeOut();

    internal static void AutoGeneratedStaticCollectObjectsConspiracyProgressQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._startQuestLog);
    }

    internal static object AutoGeneratedGetMemberValue_startQuestLog(object o)
    {
      return (object) ((ConspiracyProgressQuest) o)._startQuestLog;
    }
  }
}
