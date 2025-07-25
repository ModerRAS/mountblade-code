// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.SecondPhase.AssembleEmpireQuestBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.SecondPhase
{
  public class AssembleEmpireQuestBehavior : CampaignBehaviorBase
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
      if (side != MainStoryLineSide.CreateImperialKingdom && side != MainStoryLineSide.SupportImperialKingdom)
        return;
      new AssembleEmpireQuestBehavior.AssembleEmpireQuest(StoryModeHeroes.ImperialMentor).StartQuest();
    }

    public class AssembleEmpireQuestBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public AssembleEmpireQuestBehaviorTypeDefiner()
        : base(1002000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (AssembleEmpireQuestBehavior.AssembleEmpireQuest), 1);
      }
    }

    public class AssembleEmpireQuest : StoryModeQuestBase
    {
      private int _imperialCultureTowns;
      private int _ownedByPlayerImperialTowns;
      private bool _assembledEmpire;
      [SaveableField(1)]
      private JournalLog _numberOfCapturedSettlementsLog;

      public override TextObject Title => new TextObject("{=ya8eMCpj}Unify the Empire");

      private TextObject _questCanceledLogText
      {
        get => new TextObject("{=tVlZTOst}You have chosen a different path.");
      }

      public AssembleEmpireQuest(Hero questGiver)
        : base("assemble_empire_quest", questGiver, CampaignTime.Never)
      {
        this._assembledEmpire = false;
        this.CacheSettlementCounts();
        this.SetDialogs();
        this.InitializeQuestOnCreation();
        this._numberOfCapturedSettlementsLog = this.AddDiscreteLog(new TextObject("{=3deb2lMd}To restore the Empire you should capture two thirds of settlements with imperial culture."), new TextObject("{=Dp6newHS}Conquered Settlements"), this._ownedByPlayerImperialTowns, MathF.Ceiling((float) this._imperialCultureTowns * 0.66f));
      }

      protected override void SetDialogs()
      {
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=mxKhvbn7}You have decided to unify the Empire.")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).CloseDialog();
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this.CacheSettlementCounts();
        this.SetDialogs();
        if (this._numberOfCapturedSettlementsLog != null)
          return;
        this._numberOfCapturedSettlementsLog = this.AddDiscreteLog(new TextObject("{=3deb2lMd}To restore the Empire you should capture two thirds of settlements with imperial culture."), new TextObject("{=Dp6newHS}Conquered Settlements"), this._ownedByPlayerImperialTowns, MathF.Ceiling((float) this._imperialCultureTowns * 0.66f));
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
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

      private void OnSettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        if (!settlement.IsTown || !(settlement.Culture.StringId == "empire"))
          return;
        if (settlement.OwnerClan.Kingdom == Clan.PlayerClan.Kingdom)
          ++this._ownedByPlayerImperialTowns;
        if (oldOwner.Clan.Kingdom == Clan.PlayerClan.Kingdom && newOwner.Clan.Kingdom != Clan.PlayerClan.Kingdom)
          --this._ownedByPlayerImperialTowns;
        this._numberOfCapturedSettlementsLog.UpdateCurrentProgress((int) MathF.Clamp((float) this._ownedByPlayerImperialTowns, 0.0f, (float) this._imperialCultureTowns));
      }

      protected override void HourlyTick()
      {
        if (!this.QuestConditionsHold())
          return;
        this.SuccessQuest();
      }

      private void OnConspiracyActivated()
      {
        if (this._assembledEmpire)
          return;
        this.CompleteQuestWithFail(new TextObject("{=80NOk1Ee}You could not unify the Empire."));
      }

      private void CacheSettlementCounts()
      {
        this._imperialCultureTowns = 0;
        this._ownedByPlayerImperialTowns = 0;
        foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        {
          if (settlement.IsTown && settlement.Culture.StringId == "empire")
          {
            ++this._imperialCultureTowns;
            if (settlement.OwnerClan.Kingdom == Clan.PlayerClan.Kingdom)
              ++this._ownedByPlayerImperialTowns;
          }
        }
      }

      private bool QuestConditionsHold()
      {
        return (double) this._ownedByPlayerImperialTowns >= (double) this._imperialCultureTowns * 0.6600000262260437;
      }

      private void SuccessQuest()
      {
        this.AddLog(new TextObject("{=sJeYHMGG}You have unified the Empire."));
        this.CompleteQuestWithSuccess();
        this._assembledEmpire = true;
        StoryMode.StoryModePhases.SecondPhase.Instance.ActivateConspiracy();
      }

      internal static void AutoGeneratedStaticCollectObjectsAssembleEmpireQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._numberOfCapturedSettlementsLog);
      }

      internal static object AutoGeneratedGetMemberValue_numberOfCapturedSettlementsLog(object o)
      {
        return (object) ((AssembleEmpireQuestBehavior.AssembleEmpireQuest) o)._numberOfCapturedSettlementsLog;
      }
    }
  }
}
