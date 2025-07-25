// Decompiled with JetBrains decompiler
// Type: StoryMode.SaveableStoryModeTypeDefiner
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.Quests.FirstPhase;
using StoryMode.Quests.PlayerClanQuests;
using StoryMode.Quests.QuestTasks;
using StoryMode.Quests.SecondPhase;
using StoryMode.Quests.SecondPhase.ConspiracyQuests;
using StoryMode.Quests.TutorialPhase;
using StoryMode.StoryModePhases;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode
{
  public class SaveableStoryModeTypeDefiner : SaveableTypeDefiner
  {
    public SaveableStoryModeTypeDefiner()
      : base(320000)
    {
    }

    protected override void DefineClassTypes()
    {
      this.AddClassDefinition(typeof (CampaignStoryMode), 1);
      this.AddClassDefinition(typeof (StoryModeManager), 2);
      this.AddClassDefinition(typeof (MainStoryLine), 3);
      this.AddClassDefinition(typeof (TrainingField), 4);
      this.AddClassDefinition(typeof (TrainingFieldEncounter), 5);
      this.AddClassDefinition(typeof (PurchaseItemTutorialQuestTask), 6);
      this.AddClassDefinition(typeof (RecruitTroopTutorialQuestTask), 7);
      this.AddClassDefinition(typeof (StoryMode.StoryModePhases.TutorialPhase), 8);
      this.AddClassDefinition(typeof (StoryMode.StoryModePhases.FirstPhase), 9);
      this.AddClassDefinition(typeof (StoryMode.StoryModePhases.SecondPhase), 10);
      this.AddClassDefinition(typeof (ThirdPhase), 11);
      this.AddClassDefinition(typeof (ConspiracyQuestBase), 12);
      this.AddClassDefinition(typeof (ConspiracyQuestMapNotification), 13);
      this.AddClassDefinition(typeof (ConspiracyBaseOfOperationsDiscoveredConspiracyQuest), 14);
      this.AddClassDefinition(typeof (DestroyRaidersConspiracyQuest), 15);
      this.AddClassDefinition(typeof (DisruptSupplyLinesConspiracyQuest), 17);
      this.AddClassDefinition(typeof (TravelToVillageTutorialQuest), 694001);
      this.AddClassDefinition(typeof (TalkToTheHeadmanTutorialQuest), 693001);
      this.AddClassDefinition(typeof (PurchaseGrainTutorialQuest), 691001);
      this.AddClassDefinition(typeof (RecruitTroopsTutorialQuest), 692001);
      this.AddClassDefinition(typeof (LocateAndRescueTravellerTutorialQuest), 688001);
      this.AddClassDefinition(typeof (FindHideoutTutorialQuest), 686001);
      this.AddClassDefinition(typeof (BannerInvestigationQuest), 684001);
      this.AddClassDefinition(typeof (AssembleTheBannerQuest), 683001);
      this.AddClassDefinition(typeof (MeetWithIstianaQuest), 690001);
      this.AddClassDefinition(typeof (MeetWithArzagosQuest), 689001);
      this.AddClassDefinition(typeof (IstianasBannerPieceQuest), 687001);
      this.AddClassDefinition(typeof (ArzagosBannerPieceQuest), 681001);
      this.AddClassDefinition(typeof (SupportKingdomQuest), 680001);
      this.AddClassDefinition(typeof (CreateKingdomQuest), 580001);
      this.AddClassDefinition(typeof (ConspiracyProgressQuest), 695001);
      this.AddClassDefinition(typeof (RebuildPlayerClanQuest), 3780001);
    }

    protected override void DefineStructTypes()
    {
    }

    protected override void DefineEnumTypes()
    {
      this.AddEnumDefinition(typeof (MainStoryLineSide), 2001);
      this.AddEnumDefinition(typeof (TutorialQuestPhase), 2002);
      this.AddEnumDefinition(typeof (FindHideoutTutorialQuest.HideoutBattleEndState), 686010);
      this.AddEnumDefinition(typeof (IstianasBannerPieceQuest.HideoutBattleEndState), 687010);
      this.AddEnumDefinition(typeof (ArzagosBannerPieceQuest.HideoutBattleEndState), 681010);
    }

    protected override void DefineInterfaceTypes()
    {
    }

    protected override void DefineRootClassTypes()
    {
    }

    protected override void DefineGenericClassDefinitions()
    {
    }

    protected override void DefineGenericStructDefinitions()
    {
    }

    protected override void DefineContainerDefinitions()
    {
      this.ConstructContainerDefinition(typeof (List<TrainingField>));
      this.ConstructContainerDefinition(typeof (Dictionary<string, TrainingField>));
      this.ConstructContainerDefinition(typeof (Dictionary<MBGUID, TrainingField>));
      this.ConstructContainerDefinition(typeof (Dictionary<int, CampaignTime>));
    }
  }
}
