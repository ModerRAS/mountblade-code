// Decompiled with JetBrains decompiler
// Type: StoryMode.MainStoryLine
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.GameComponents.CampaignBehaviors;
using StoryMode.StoryModeObjects;
using StoryMode.StoryModePhases;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode
{
  public class MainStoryLine
  {
    public const int MainStoryLineDialogOptionPriority = 150;
    public const string DragonBannerItemStringId = "dragon_banner";
    public const string DragonBannerPart1ItemStringId = "dragon_banner_center";
    public const string DragonBannerPart2ItemStringId = "dragon_banner_dragonhead";
    public const string DragonBannerPart3ItemStringId = "dragon_banner_handle";
    [SaveableField(1)]
    public MainStoryLineSide MainStoryLineSide;
    [SaveableField(6)]
    public Settlement ImperialMentorSettlement;
    [SaveableField(7)]
    public Settlement AntiImperialMentorSettlement;
    [SaveableField(9)]
    private Dictionary<string, float> _tutorialScores;
    [SaveableField(10)]
    public bool FamilyRescued;

    public bool IsPlayerInteractionRestricted
    {
      get
      {
        return !this.TutorialPhase.IsCompleted && !this.IsOnImperialQuestLine && !this.IsOnAntiImperialQuestLine;
      }
    }

    public bool IsOnImperialQuestLine
    {
      get
      {
        return this.MainStoryLineSide == MainStoryLineSide.CreateImperialKingdom || this.MainStoryLineSide == MainStoryLineSide.SupportImperialKingdom;
      }
    }

    public bool IsOnAntiImperialQuestLine
    {
      get
      {
        return this.MainStoryLineSide == MainStoryLineSide.CreateAntiImperialKingdom || this.MainStoryLineSide == MainStoryLineSide.SupportAntiImperialKingdom;
      }
    }

    [SaveableProperty(2)]
    public TutorialPhase TutorialPhase { get; private set; }

    [SaveableProperty(3)]
    public FirstPhase FirstPhase { get; private set; }

    [SaveableProperty(4)]
    public SecondPhase SecondPhase { get; private set; }

    [SaveableProperty(5)]
    public ThirdPhase ThirdPhase { get; private set; }

    [SaveableProperty(8)]
    public Kingdom PlayerSupportedKingdom { get; private set; }

    public bool IsCompleted
    {
      get
      {
        return StoryModeManager.Current.MainStoryLine.ThirdPhase != null && StoryModeManager.Current.MainStoryLine.ThirdPhase.IsCompleted;
      }
    }

    public ItemObject DragonBanner { get; private set; }

    public bool IsFirstPhaseCompleted => this.SecondPhase != null;

    public bool IsSecondPhaseCompleted => this.ThirdPhase != null;

    public MainStoryLine()
    {
      this.MainStoryLineSide = MainStoryLineSide.None;
      this.TutorialPhase = new TutorialPhase();
      this._tutorialScores = new Dictionary<string, float>();
      this.FamilyRescued = false;
    }

    public void OnSessionLaunched()
    {
      this.DragonBanner = Campaign.Current.ObjectManager.GetObject<ItemObject>("dragon_banner");
    }

    public void SetTutorialScores(Dictionary<string, float> scores)
    {
      this._tutorialScores = new Dictionary<string, float>((IDictionary<string, float>) scores);
    }

    public Dictionary<string, float> GetTutorialScores()
    {
      return new Dictionary<string, float>((IDictionary<string, float>) this._tutorialScores);
    }

    public void SetStoryLineSide(MainStoryLineSide side)
    {
      this.MainStoryLineSide = side;
      this.PlayerSupportedKingdom = Clan.PlayerClan.Kingdom;
      StoryModeEvents.Instance.OnMainStoryLineSideChosen(this.MainStoryLineSide);
      DisableHeroAction.Apply(StoryModeHeroes.ImperialMentor);
      DisableHeroAction.Apply(StoryModeHeroes.AntiImperialMentor);
    }

    public void SetMentorSettlements(
      Settlement imperialMentorSettlement,
      Settlement antiImperialMentorSettlement)
    {
      this.ImperialMentorSettlement = imperialMentorSettlement;
      this.AntiImperialMentorSettlement = antiImperialMentorSettlement;
    }

    public void CompleteTutorialPhase(bool isSkipped)
    {
      this.TutorialPhase.CompleteTutorial(isSkipped);
      this.FirstPhase = new FirstPhase();
      StoryModeEvents.Instance.OnStoryModeTutorialEnded();
      StoryModeManager.Current.MainStoryLine.FirstPhase.CollectBannerPiece();
      Campaign.Current.CampaignBehaviorManager.RemoveBehavior<TutorialPhaseCampaignBehavior>();
    }

    public void CompleteFirstPhase()
    {
      this.SecondPhase = new SecondPhase();
      Campaign.Current.CampaignBehaviorManager.RemoveBehavior<FirstPhaseCampaignBehavior>();
    }

    public void CompleteSecondPhase()
    {
      this.ThirdPhase = new ThirdPhase();
      StoryModeEvents.Instance.OnConspiracyActivated();
      Campaign.Current.CampaignBehaviorManager.RemoveBehavior<SecondPhaseCampaignBehavior>();
    }

    public void CancelSecondAndThirdPhase()
    {
      if (this.SecondPhase != null)
        Campaign.Current.CampaignBehaviorManager.RemoveBehavior<SecondPhaseCampaignBehavior>();
      Campaign.Current.CampaignBehaviorManager.RemoveBehavior<ThirdPhaseCampaignBehavior>();
    }

    internal static void AutoGeneratedStaticCollectObjectsMainStoryLine(
      object o,
      List<object> collectedObjects)
    {
      ((MainStoryLine) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      collectedObjects.Add((object) this.ImperialMentorSettlement);
      collectedObjects.Add((object) this.AntiImperialMentorSettlement);
      collectedObjects.Add((object) this._tutorialScores);
      collectedObjects.Add((object) this.TutorialPhase);
      collectedObjects.Add((object) this.FirstPhase);
      collectedObjects.Add((object) this.SecondPhase);
      collectedObjects.Add((object) this.ThirdPhase);
      collectedObjects.Add((object) this.PlayerSupportedKingdom);
    }

    internal static object AutoGeneratedGetMemberValueTutorialPhase(object o)
    {
      return (object) ((MainStoryLine) o).TutorialPhase;
    }

    internal static object AutoGeneratedGetMemberValueFirstPhase(object o)
    {
      return (object) ((MainStoryLine) o).FirstPhase;
    }

    internal static object AutoGeneratedGetMemberValueSecondPhase(object o)
    {
      return (object) ((MainStoryLine) o).SecondPhase;
    }

    internal static object AutoGeneratedGetMemberValueThirdPhase(object o)
    {
      return (object) ((MainStoryLine) o).ThirdPhase;
    }

    internal static object AutoGeneratedGetMemberValuePlayerSupportedKingdom(object o)
    {
      return (object) ((MainStoryLine) o).PlayerSupportedKingdom;
    }

    internal static object AutoGeneratedGetMemberValueMainStoryLineSide(object o)
    {
      return (object) ((MainStoryLine) o).MainStoryLineSide;
    }

    internal static object AutoGeneratedGetMemberValueImperialMentorSettlement(object o)
    {
      return (object) ((MainStoryLine) o).ImperialMentorSettlement;
    }

    internal static object AutoGeneratedGetMemberValueAntiImperialMentorSettlement(object o)
    {
      return (object) ((MainStoryLine) o).AntiImperialMentorSettlement;
    }

    internal static object AutoGeneratedGetMemberValueFamilyRescued(object o)
    {
      return (object) ((MainStoryLine) o).FamilyRescued;
    }

    internal static object AutoGeneratedGetMemberValue_tutorialScores(object o)
    {
      return (object) ((MainStoryLine) o)._tutorialScores;
    }
  }
}
