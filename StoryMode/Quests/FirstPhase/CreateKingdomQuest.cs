// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.FirstPhase.CreateKingdomQuest
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
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.FirstPhase
{
  public class CreateKingdomQuest : StoryModeQuestBase
  {
    [SaveableField(1)]
    private readonly bool _isImperial;
    private const int PartySizeRequirement = 100;
    private const int SettlementCountRequirement = 1;
    [SaveableField(2)]
    private bool _hasPlayerCreatedKingdom;
    [SaveableField(9)]
    private JournalLog _leftKingdomLog;
    [SaveableField(10)]
    private Kingdom _playerCreatedKingdom;
    [SaveableField(4)]
    private readonly JournalLog _clanTierRequirementLog;
    [SaveableField(5)]
    private readonly JournalLog _partySizeRequirementLog;
    [SaveableField(6)]
    private readonly JournalLog _settlementOwnershipRequirementLog;
    [SaveableField(7)]
    private readonly JournalLog _clanIndependenceRequirementLog;

    private TextObject _onQuestStartedImperialLogText
    {
      get
      {
        TextObject parent = new TextObject("{=N5Qg5ick}You told {MENTOR.LINK} that you will create your own imperial faction. You can do that by speaking to one of your governors once you fulfill the requirements. {?MENTOR.GENDER}She{?}He{\\?} expects to talk to you once you succeed.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _onQuestStartedAntiImperialLogText
    {
      get
      {
        TextObject parent = new TextObject("{=AxKDQJ4G}You told {MENTOR.LINK} that you will create your own kingdom to defeat the Empire. You can do that by speaking to one of your governors once you fulfill the requirements. {?MENTOR.GENDER}She{?}He{\\?} expects to talk to you once you succeed.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _imperialKingdomCreatedLogText
    {
      get
      {
        TextObject parent = new TextObject("{=UnjgFmnE}Heeding the advice of {MENTOR.LINK}, you have created an imperial faction. You can tell {?MENTOR.GENDER}her{?}him{\\?} that you will support your own kingdom.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.ImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _antiImperialKingdomCreatedLogText
    {
      get
      {
        TextObject parent = new TextObject("{=BekWpXmR}Heeding the advice of {MENTOR.LINK}, you have created a kingdom to oppose the Empire. You can tell {?MENTOR.GENDER}her{?}him{\\?} that you will support your own kingdom.");
        StringHelpers.SetCharacterProperties("MENTOR", StoryModeHeroes.AntiImperialMentor.CharacterObject, parent);
        return parent;
      }
    }

    private TextObject _leftKingdomAfterCreatingLogText
    {
      get
      {
        return new TextObject("{=nNavD2NO}You left the kingdom you have created. You can only support kingdoms that you are a part of.");
      }
    }

    private TextObject _clanTierRequirementLogText
    {
      get
      {
        TextObject requirementLogText = new TextObject("{=QxeKZ3nE}Reach Clan Tier {CLAN_TIER}");
        requirementLogText.SetTextVariable("CLAN_TIER", Campaign.Current.Models.KingdomCreationModel.MinimumClanTierToCreateKingdom);
        return requirementLogText;
      }
    }

    private TextObject _partySizeRequirementLogText
    {
      get
      {
        TextObject requirementLogText = new TextObject("{=NzQq2qp1}Gather {PARTY_SIZE} Troops");
        requirementLogText.SetTextVariable("PARTY_SIZE", 100);
        return requirementLogText;
      }
    }

    private TextObject _settlementOwnershipRequirementLogText
    {
      get
      {
        TextObject requirementLogText = new TextObject("{=Bo66bfTh}Own {?IS_IMPERIAL}an Imperial Settlement{?}a Settlement{\\?} ");
        requirementLogText.SetTextVariable("IS_IMPERIAL", this._isImperial ? 1 : 0);
        return requirementLogText;
      }
    }

    private TextObject _clanIndependenceRequirementLogText
    {
      get => new TextObject("{=a0ZKBj6P}Be an independent clan");
    }

    private TextObject _questFailedLogText
    {
      get => new TextObject("{=tVlZTOst}You have chosen a different path.");
    }

    public override TextObject Title
    {
      get
      {
        TextObject title = new TextObject("{=HhFHRs7N}Create {?IS_IMPERIAL}an imperial faction{?}a non-imperial kingdom{\\?}");
        title.SetTextVariable("IS_IMPERIAL", this._isImperial ? 1 : 0);
        return title;
      }
    }

    public override bool IsRemainingTimeHidden => false;

    public CreateKingdomQuest(Hero questGiver)
      : base("main_storyline_create_kingdom_quest_" + (StoryModeHeroes.ImperialMentor == questGiver ? "1" : "0"), questGiver, StoryModeManager.Current.MainStoryLine.FirstPhase.FirstPhaseEndTime)
    {
      this._isImperial = StoryModeHeroes.ImperialMentor == questGiver;
      this.SetDialogs();
      if (this._isImperial)
        this.AddLog(this._onQuestStartedImperialLogText);
      else
        this.AddLog(this._onQuestStartedAntiImperialLogText);
      int tierToCreateKingdom = Campaign.Current.Models.KingdomCreationModel.MinimumClanTierToCreateKingdom;
      this._clanTierRequirementLog = this.AddDiscreteLog(this._clanTierRequirementLogText, new TextObject("{=tTLvo8sM}Clan Tier"), (int) MathF.Clamp((float) Clan.PlayerClan.Tier, 0.0f, (float) tierToCreateKingdom), tierToCreateKingdom);
      this._partySizeRequirementLog = this.AddDiscreteLog(this._partySizeRequirementLogText, new TextObject("{=aClquusd}Troop Count"), (int) MathF.Clamp((float) (MobileParty.MainParty.MemberRoster.TotalManCount - MobileParty.MainParty.MemberRoster.TotalWounded), 0.0f, 100f), 100);
      this._clanIndependenceRequirementLog = this.AddDiscreteLog(this._clanIndependenceRequirementLogText, new TextObject("{=qa0o7xaj}Clan Independence"), Clan.PlayerClan.Kingdom == null ? 1 : 0, 1);
      this._settlementOwnershipRequirementLog = this.AddDiscreteLog(this._settlementOwnershipRequirementLogText, new TextObject("{=gL3WCqM5}Settlement Count"), (int) MathF.Clamp(this._isImperial ? (float) Clan.PlayerClan.Settlements.Count<Settlement>((Func<Settlement, bool>) (t => t.IsFortification && t.Culture == StoryModeData.ImperialCulture)) : (float) Clan.PlayerClan.Settlements.Count<Settlement>((Func<Settlement, bool>) (t => t.IsFortification)), 0.0f, 1f), 1);
      this.InitializeQuestOnCreation();
      this.CheckPlayerClanDiplomaticState(Clan.PlayerClan.Kingdom);
    }

    protected override void SetDialogs() => this.DiscussDialogFlow = this.GetMentorDialogueFlow();

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void HourlyTick()
    {
    }

    private DialogFlow GetMentorDialogueFlow()
    {
      return DialogFlow.CreateDialogFlow("quest_discuss", 300).NpcLine("{=kbyqtszZ}I'm listening..").Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).PlayerLine("{=wErSpkjy}I'm still working on it.").CloseDialog();
    }

    private void OnClanTierIncreased(Clan clan, bool showNotification)
    {
      if (this._hasPlayerCreatedKingdom || clan != Clan.PlayerClan)
        return;
      this.UpdateQuestTaskStage(this._clanTierRequirementLog, (int) MathF.Clamp((float) Clan.PlayerClan.Tier, 0.0f, (float) Campaign.Current.Models.KingdomCreationModel.MinimumClanTierToCreateKingdom));
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification)
    {
      if (clan != Clan.PlayerClan)
        return;
      this.CheckPlayerClanDiplomaticState(newKingdom);
    }

    private void CheckPlayerClanDiplomaticState(Kingdom newKingdom)
    {
      if (newKingdom == null)
      {
        if (this._hasPlayerCreatedKingdom)
        {
          this._leftKingdomLog = this.AddLog(this._leftKingdomAfterCreatingLogText);
          this._hasPlayerCreatedKingdom = false;
        }
        this.UpdateQuestTaskStage(this._clanIndependenceRequirementLog, 1);
      }
      else if (newKingdom.RulingClan == Clan.PlayerClan)
      {
        this._playerCreatedKingdom = newKingdom;
        if (StoryModeData.IsKingdomImperial(newKingdom))
        {
          if (this._isImperial)
          {
            this._hasPlayerCreatedKingdom = true;
            if (this._leftKingdomLog != null)
              this.RemoveLog(this._leftKingdomLog);
            else
              this.AddLog(this._imperialKingdomCreatedLogText);
          }
          else
            this.UpdateQuestTaskStage(this._clanIndependenceRequirementLog, 0);
        }
        else if (!this._isImperial)
        {
          this._hasPlayerCreatedKingdom = true;
          if (this._leftKingdomLog != null)
            this.RemoveLog(this._leftKingdomLog);
          else
            this.AddLog(this._antiImperialKingdomCreatedLogText);
        }
        else
          this.UpdateQuestTaskStage(this._clanIndependenceRequirementLog, 0);
      }
      else
      {
        if (this._playerCreatedKingdom != newKingdom || this._isImperial != StoryModeData.IsKingdomImperial(newKingdom))
          return;
        this.RemoveLog(this._leftKingdomLog);
      }
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (this._hasPlayerCreatedKingdom || newOwner != Hero.MainHero && oldOwner != Hero.MainHero)
        return;
      int num = -1;
      if (this._isImperial && settlement.Culture == StoryModeData.ImperialCulture)
        num = Clan.PlayerClan.Settlements.Count<Settlement>((Func<Settlement, bool>) (t => t.IsFortification && t.Culture == StoryModeData.ImperialCulture));
      else if (!this._isImperial)
        num = Clan.PlayerClan.Settlements.Count<Settlement>((Func<Settlement, bool>) (t => t.IsFortification));
      if (num == -1)
        return;
      this.UpdateQuestTaskStage(this._settlementOwnershipRequirementLog, (int) MathF.Clamp((float) num, 0.0f, 1f));
    }

    private void OnPartySizeChanged(PartyBase party)
    {
      if (this._hasPlayerCreatedKingdom || party != PartyBase.MainParty)
        return;
      this.UpdateQuestTaskStage(this._partySizeRequirementLog, (int) MathF.Clamp((float) (MobileParty.MainParty.MemberRoster.TotalManCount - MobileParty.MainParty.MemberRoster.TotalWounded), 0.0f, 100f));
    }

    private void MainStoryLineChosen(MainStoryLineSide chosenSide)
    {
      if (this._hasPlayerCreatedKingdom && (chosenSide == MainStoryLineSide.CreateImperialKingdom && this._isImperial || chosenSide == MainStoryLineSide.CreateAntiImperialKingdom && !this._isImperial))
        this.CompleteQuestWithSuccess();
      else
        this.CompleteQuestWithCancel(this._questFailedLogText);
    }

    protected override void RegisterEvents()
    {
      CampaignEvents.ClanTierIncrease.AddNonSerializedListener((object) this, new Action<Clan, bool>(this.OnClanTierIncreased));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.OnPartySizeChangedEvent.AddNonSerializedListener((object) this, new Action<PartyBase>(this.OnPartySizeChanged));
      StoryModeEvents.OnMainStoryLineSideChosenEvent.AddNonSerializedListener((object) this, new Action<MainStoryLineSide>(this.MainStoryLineChosen));
    }

    internal static void AutoGeneratedStaticCollectObjectsCreateKingdomQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._leftKingdomLog);
      collectedObjects.Add((object) this._playerCreatedKingdom);
      collectedObjects.Add((object) this._clanTierRequirementLog);
      collectedObjects.Add((object) this._partySizeRequirementLog);
      collectedObjects.Add((object) this._settlementOwnershipRequirementLog);
      collectedObjects.Add((object) this._clanIndependenceRequirementLog);
    }

    internal static object AutoGeneratedGetMemberValue_isImperial(object o)
    {
      return (object) ((CreateKingdomQuest) o)._isImperial;
    }

    internal static object AutoGeneratedGetMemberValue_hasPlayerCreatedKingdom(object o)
    {
      return (object) ((CreateKingdomQuest) o)._hasPlayerCreatedKingdom;
    }

    internal static object AutoGeneratedGetMemberValue_leftKingdomLog(object o)
    {
      return (object) ((CreateKingdomQuest) o)._leftKingdomLog;
    }

    internal static object AutoGeneratedGetMemberValue_playerCreatedKingdom(object o)
    {
      return (object) ((CreateKingdomQuest) o)._playerCreatedKingdom;
    }

    internal static object AutoGeneratedGetMemberValue_clanTierRequirementLog(object o)
    {
      return (object) ((CreateKingdomQuest) o)._clanTierRequirementLog;
    }

    internal static object AutoGeneratedGetMemberValue_partySizeRequirementLog(object o)
    {
      return (object) ((CreateKingdomQuest) o)._partySizeRequirementLog;
    }

    internal static object AutoGeneratedGetMemberValue_settlementOwnershipRequirementLog(object o)
    {
      return (object) ((CreateKingdomQuest) o)._settlementOwnershipRequirementLog;
    }

    internal static object AutoGeneratedGetMemberValue_clanIndependenceRequirementLog(object o)
    {
      return (object) ((CreateKingdomQuest) o)._clanIndependenceRequirementLog;
    }
  }
}
