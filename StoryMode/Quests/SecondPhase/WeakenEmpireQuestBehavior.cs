// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.SecondPhase.WeakenEmpireQuestBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.SecondPhase
{
  public class WeakenEmpireQuestBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      StoryModeEvents.OnMainStoryLineSideChosenEvent.AddNonSerializedListener((object) this, new Action<MainStoryLineSide>(this.OnMainStoryLineSideChosen));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnMainStoryLineSideChosen(MainStoryLineSide side)
    {
      if (side != MainStoryLineSide.CreateAntiImperialKingdom && side != MainStoryLineSide.SupportAntiImperialKingdom)
        return;
      new WeakenEmpireQuestBehavior.WeakenEmpireQuest(StoryModeHeroes.AntiImperialMentor).StartQuest();
    }

    public class WeakenEmpireQuestBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public WeakenEmpireQuestBehaviorTypeDefiner()
        : base(1005000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (WeakenEmpireQuestBehavior.WeakenEmpireQuest), 1);
      }
    }

    public class WeakenEmpireQuest : StoryModeQuestBase
    {
      private const int EmpireDefeatSettlementCount = 4;
      private bool _weakenedEmpire;

      private TextObject _startQuestLog
      {
        get
        {
          TextObject startQuestLog = new TextObject("{=0wQlpbtL}In order for the Empire to go into its final decline, there should be fewer than {NUMBER} imperial-owned settlements. If this happens, another kingdom can become the dominant power in Calradia.");
          startQuestLog.SetTextVariable("NUMBER", 4);
          return startQuestLog;
        }
      }

      public override TextObject Title => new TextObject("{=iR4QCTxv}Weaken Empire");

      private TextObject _questCanceledLogText
      {
        get => new TextObject("{=tVlZTOst}You have chosen a different path.");
      }

      public WeakenEmpireQuest(Hero questGiver)
        : base("weaken_empire_quest", questGiver, CampaignTime.Never)
      {
        this._weakenedEmpire = false;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
        this.AddLog(this._startQuestLog);
      }

      protected override void SetDialogs()
      {
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=VeY3PQFL}You chose to defeat the Empire.")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).CloseDialog();
      }

      protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

      protected override void RegisterEvents()
      {
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

      protected override void HourlyTick()
      {
        if (!this.QuestConditionsHold())
          return;
        this.SuccessComplete();
      }

      private void OnConspiracyActivated()
      {
        if (this._weakenedEmpire)
          return;
        this.CompleteQuestWithFail(new TextObject("{=JVkPkbdg}You could not weaken the Empire."));
      }

      private bool QuestConditionsHold()
      {
        return StoryModeData.NorthernEmpireKingdom.Fiefs.Count<Town>((Func<Town, bool>) (f => f.IsTown)) + StoryModeData.WesternEmpireKingdom.Fiefs.Count<Town>((Func<Town, bool>) (f => f.IsTown)) + StoryModeData.SouthernEmpireKingdom.Fiefs.Count<Town>((Func<Town, bool>) (f => f.IsTown)) < 4;
      }

      private void SuccessComplete()
      {
        this.AddLog(new TextObject("{=wO19nK2y}You have weakened the Empire."));
        this.CompleteQuestWithSuccess();
        this._weakenedEmpire = true;
        StoryMode.StoryModePhases.SecondPhase.Instance.ActivateConspiracy();
      }

      internal static void AutoGeneratedStaticCollectObjectsWeakenEmpireQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      }
    }
  }
}
