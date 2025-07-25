// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.PartyNameplateVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.ViewModelCollection.Missions.NameMarker;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class PartyNameplateVM : NameplateVM
  {
    public static string PositiveIndicator = Color.FromUint(4285650500U).ToString();
    public static string PositiveArmyIndicator = Color.FromUint(4288804731U).ToString();
    public static string NegativeIndicator = Color.FromUint(4292232774U).ToString();
    public static string NegativeArmyIndicator = Color.FromUint(4294931829U).ToString();
    public static string NeutralIndicator = Color.FromUint(4291877096U).ToString();
    public static string NeutralArmyIndicator = Color.FromUint(4294573055U).ToString();
    public static string MainPartyIndicator = Color.FromUint(4287421380U).ToString();
    public static string MainPartyArmyIndicator = Color.FromUint(4289593317U).ToString();
    private float _latestX;
    private float _latestY;
    private float _latestW;
    private float _cachedSpeed;
    private readonly Camera _mapCamera;
    private readonly Action _resetCamera;
    private readonly Func<bool> _getShouldShowFullName;
    private int _latestPrisonerAmount = -1;
    private int _latestWoundedAmount = -1;
    private int _latestTotalCount = -1;
    private bool _isPartyBannerDirty;
    private bool _isPartyHeroVisualDirty;
    private float _latestMainHeroAge = -1f;
    private TextObject _latestNameTextObject;
    private SandBoxUIHelper.IssueQuestFlags _questsBind;
    private Vec2 _partyPositionBind;
    private Vec2 _headPositionBind;
    private ImageIdentifierVM _mainHeroVisualBind;
    private bool _isMainPartyBind;
    private bool _isHighBind;
    private bool _isBehindBind;
    private bool _isInArmyBind;
    private bool _isInSettlementBind;
    private bool _isVisibleOnMapBind;
    private bool _shouldShowFullNameBind;
    private bool _isArmyBind;
    private bool _isPrisonerBind;
    private bool _isDisorganizedBind;
    private string _factionColorBind;
    private string _countBind;
    private string _woundedBind;
    private string _prisonerBind;
    private string _extraInfoTextBind;
    private string _fullNameBind;
    private string _movementSpeedTextBind;
    private string _count;
    private string _wounded;
    private string _prisoner;
    private MBBindingList<QuestMarkerVM> _quests;
    private string _fullName;
    private string _extraInfoText;
    private string _movementSpeedText;
    private bool _isMainParty;
    private bool _isBehind;
    private bool _isHigh;
    private bool _shouldShowFullName;
    private bool _isInArmy;
    private bool _isArmy;
    private bool _isPrisoner;
    private bool _isInSettlement;
    private bool _isDisorganized;
    private ImageIdentifierVM _mainHeroVisual;
    private ImageIdentifierVM _partyBanner;
    private Vec2 _headPosition;

    public bool GetIsMainParty => this._isMainPartyBind || this.IsMainParty;

    public MobileParty Party { get; }

    private IFaction _mainFaction => Hero.MainHero.MapFaction;

    public PartyNameplateVM(
      MobileParty party,
      Camera mapCamera,
      Action resetCamera,
      Func<bool> getShouldShowFullName)
    {
      this._resetCamera = resetCamera;
      this._mapCamera = mapCamera;
      this._getShouldShowFullName = getShouldShowFullName;
      this.Party = party;
      this._isMainPartyBind = party.IsMainParty;
      this.MainHeroVisual = this._isMainPartyBind ? new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(Hero.MainHero.CharacterObject)) : (ImageIdentifierVM) null;
      this._isPartyHeroVisualDirty = true;
      this._isPartyBannerDirty = true;
      this.Quests = new MBBindingList<QuestMarkerVM>();
      this.RegisterEvents();
    }

    public override void OnFinalize()
    {
      this.UnregisterEvents();
      base.OnFinalize();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.RefreshDynamicProperties(true);
    }

    private void AddQuestBindFlagsForParty(MobileParty party)
    {
      if (party == MobileParty.MainParty || party == this.Party)
        return;
      if (party.LeaderHero?.Issue != null && (this._questsBind & SandBoxUIHelper.IssueQuestFlags.TrackedIssue) == SandBoxUIHelper.IssueQuestFlags.None && ((this._questsBind & SandBoxUIHelper.IssueQuestFlags.AvailableIssue) == SandBoxUIHelper.IssueQuestFlags.None || (this._questsBind & SandBoxUIHelper.IssueQuestFlags.ActiveIssue) == SandBoxUIHelper.IssueQuestFlags.None))
        this._questsBind |= SandBoxUIHelper.GetIssueType(party.LeaderHero.Issue);
      if (((this._questsBind & SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest) != SandBoxUIHelper.IssueQuestFlags.None || (this._questsBind & SandBoxUIHelper.IssueQuestFlags.ActiveIssue) != SandBoxUIHelper.IssueQuestFlags.None) && (this._questsBind & SandBoxUIHelper.IssueQuestFlags.ActiveStoryQuest) != SandBoxUIHelper.IssueQuestFlags.None)
        return;
      foreach (QuestBase questBase in SandBoxUIHelper.GetQuestsRelatedToParty(party))
      {
        if (party.LeaderHero != null && questBase.QuestGiver == party.LeaderHero)
        {
          if (questBase.IsSpecialQuest && (this._questsBind & SandBoxUIHelper.IssueQuestFlags.ActiveStoryQuest) == SandBoxUIHelper.IssueQuestFlags.None)
            this._questsBind |= SandBoxUIHelper.IssueQuestFlags.ActiveStoryQuest;
          else if (!questBase.IsSpecialQuest && (this._questsBind & SandBoxUIHelper.IssueQuestFlags.ActiveIssue) == SandBoxUIHelper.IssueQuestFlags.None)
            this._questsBind |= SandBoxUIHelper.IssueQuestFlags.ActiveIssue;
        }
        else if (questBase.IsSpecialQuest && (this._questsBind & SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest) == SandBoxUIHelper.IssueQuestFlags.None)
          this._questsBind |= SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest;
        else if (!questBase.IsSpecialQuest && (this._questsBind & SandBoxUIHelper.IssueQuestFlags.TrackedIssue) == SandBoxUIHelper.IssueQuestFlags.None)
          this._questsBind |= SandBoxUIHelper.IssueQuestFlags.TrackedIssue;
      }
    }

    public override void RefreshDynamicProperties(bool forceUpdate)
    {
      base.RefreshDynamicProperties(forceUpdate);
      if (((!this.IsMainParty ? 0 : ((double) MathF.Abs(Hero.MainHero.Age - this._latestMainHeroAge) >= 1.0 ? 1 : 0)) | (forceUpdate ? 1 : 0)) != 0)
      {
        this._latestMainHeroAge = Hero.MainHero.Age;
        this._isPartyHeroVisualDirty = true;
      }
      if (this._isPartyHeroVisualDirty | forceUpdate)
      {
        this._mainHeroVisualBind = this._isMainPartyBind ? new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(Hero.MainHero.CharacterObject)) : (ImageIdentifierVM) null;
        this._isPartyHeroVisualDirty = false;
      }
      if (this._isVisibleOnMapBind | forceUpdate)
      {
        IssueBase issue = this.Party?.LeaderHero?.Issue;
        this._questsBind = SandBoxUIHelper.IssueQuestFlags.None;
        if (this.Party != MobileParty.MainParty)
        {
          if (issue != null)
            this._questsBind |= SandBoxUIHelper.GetIssueType(issue);
          foreach (QuestBase questBase in SandBoxUIHelper.GetQuestsRelatedToParty(this.Party))
          {
            if (questBase.QuestGiver != null && questBase.QuestGiver == this.Party.LeaderHero)
              this._questsBind |= questBase.IsSpecialQuest ? SandBoxUIHelper.IssueQuestFlags.ActiveStoryQuest : SandBoxUIHelper.IssueQuestFlags.ActiveIssue;
            else
              this._questsBind |= questBase.IsSpecialQuest ? SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest : SandBoxUIHelper.IssueQuestFlags.TrackedIssue;
          }
        }
      }
      this._isInArmyBind = this.Party.Army != null && this.Party.AttachedTo != null;
      this._isArmyBind = this.Party.Army != null && this.Party.Army.LeaderParty == this.Party;
      this._isInSettlementBind = this.Party?.CurrentSettlement != null;
      if (this._isArmyBind && this._isVisibleOnMapBind | forceUpdate)
      {
        this.AddQuestBindFlagsForParty(this.Party.Army.LeaderParty);
        foreach (MobileParty attachedParty in (List<MobileParty>) this.Party.Army.LeaderParty.AttachedParties)
          this.AddQuestBindFlagsForParty(attachedParty);
      }
      if (((this._isArmyBind ? 1 : (!this._isInArmy ? 1 : 0)) | (forceUpdate ? 1 : 0)) != 0)
      {
        int partyHealthyCount = SandBoxUIHelper.GetPartyHealthyCount(this.Party);
        if (partyHealthyCount != this._latestTotalCount)
        {
          this._latestTotalCount = partyHealthyCount;
          this._countBind = partyHealthyCount.ToString();
        }
        int woundedMembersAmount = SandBoxUIHelper.GetAllWoundedMembersAmount(this.Party);
        int prisonerMembersAmount = SandBoxUIHelper.GetAllPrisonerMembersAmount(this.Party);
        if (this._latestWoundedAmount != woundedMembersAmount || this._latestPrisonerAmount != prisonerMembersAmount)
        {
          if (this._latestWoundedAmount != woundedMembersAmount)
          {
            this._woundedBind = woundedMembersAmount == 0 ? "" : SandBoxUIHelper.GetPartyWoundedText(woundedMembersAmount);
            this._latestWoundedAmount = woundedMembersAmount;
          }
          if (this._latestPrisonerAmount != prisonerMembersAmount)
          {
            this._prisonerBind = prisonerMembersAmount == 0 ? "" : SandBoxUIHelper.GetPartyPrisonerText(prisonerMembersAmount);
            this._latestPrisonerAmount = prisonerMembersAmount;
          }
          this._extraInfoTextBind = this._woundedBind + this._prisonerBind;
        }
      }
      if (!this.Party.IsMainParty)
      {
        Army army = this.Party.Army;
        if ((army != null ? (army.LeaderParty.AttachedParties.Contains(MobileParty.MainParty) ? 1 : 0) : 0) == 0 || !this.Party.Army.LeaderParty.AttachedParties.Contains(this.Party))
        {
          this._factionColorBind = !FactionManager.IsAtWarAgainstFaction(this.Party.MapFaction, this._mainFaction) ? (!FactionManager.IsAlliedWithFaction(this.Party.MapFaction, Hero.MainHero.MapFaction) ? (this.Party.Army == null || this.Party.Army.LeaderParty != this.Party ? PartyNameplateVM.NeutralIndicator : PartyNameplateVM.NeutralArmyIndicator) : (this.Party.Army == null || this.Party.Army.LeaderParty != this.Party ? PartyNameplateVM.PositiveIndicator : PartyNameplateVM.PositiveArmyIndicator)) : (this.Party.Army == null || this.Party.Army.LeaderParty != this.Party ? PartyNameplateVM.NegativeIndicator : PartyNameplateVM.NegativeArmyIndicator);
          goto label_35;
        }
      }
      this._factionColorBind = this.Party.Army == null || this.Party.Army.LeaderParty != this.Party ? PartyNameplateVM.MainPartyIndicator : PartyNameplateVM.MainPartyArmyIndicator;
label_35:
      if (this._isPartyBannerDirty | forceUpdate)
      {
        this.PartyBanner = this.Party.Party.Banner == null ? new ImageIdentifierVM(BannerCode.CreateFrom(this.Party.MapFaction?.Banner), true) : new ImageIdentifierVM(BannerCode.CreateFrom(this.Party.Party.Banner), true);
        this._isPartyBannerDirty = false;
      }
      if (this._isVisibleOnMapBind && (this._isInArmyBind || this._isInSettlementBind))
        this._isVisibleOnMapBind = false;
      Army army1 = this.Party.Army;
      TextObject textObject = (army1 != null ? (army1.DoesLeaderPartyAndAttachedPartiesContain(this.Party) ? 1 : 0) : 0) == 0 ? (this.Party.LeaderHero == null ? this.Party.Name : this.Party.LeaderHero.Name) : this.Party.ArmyName;
      int num;
      if (this.IsMainParty && this.Party.LeaderHero == null)
      {
        Hero mainHero = Hero.MainHero;
        num = mainHero != null ? (mainHero.IsAlive ? 1 : 0) : 0;
      }
      else
        num = 0;
      this._isPrisonerBind = num != 0;
      this._isDisorganizedBind = this.Party.IsDisorganized;
      this._shouldShowFullNameBind = this._getShouldShowFullName != null && this._getShouldShowFullName();
      if (this._latestNameTextObject != textObject | forceUpdate)
      {
        this._latestNameTextObject = textObject;
        this._fullNameBind = this._latestNameTextObject.ToString();
      }
      if (this._cachedSpeed.ApproximatelyEqualsTo(this.Party.Speed, 0.01f))
        return;
      this._cachedSpeed = this.Party.Speed;
      this._movementSpeedTextBind = this._cachedSpeed.ToString("F1");
    }

    public override void RefreshPosition()
    {
      base.RefreshPosition();
      float height = 0.0f;
      Campaign.Current.MapSceneWrapper.GetHeightAtPoint(this.Party.VisualPosition2DWithoutError, ref height);
      Vec3 vec3 = this.Party.VisualPosition2DWithoutError.ToVec3(height);
      Vec3 worldSpacePosition = vec3 + new Vec3(z: 0.8f);
      if (this._isMainPartyBind)
      {
        this.RefreshMainPartyScreenPosition(vec3);
        double insideUsableArea = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._mapCamera, worldSpacePosition, ref this._latestX, ref this._latestY, ref this._latestW);
        this._headPositionBind = new Vec2(this._latestX, this._latestY);
      }
      else
      {
        this._latestX = 0.0f;
        this._latestY = 0.0f;
        this._latestW = 0.0f;
        double insideUsableArea1 = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._mapCamera, vec3, ref this._latestX, ref this._latestY, ref this._latestW);
        this._partyPositionBind = new Vec2(this._latestX, this._latestY);
        double insideUsableArea2 = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._mapCamera, worldSpacePosition, ref this._latestX, ref this._latestY, ref this._latestW);
        this._headPositionBind = new Vec2(this._latestX, this._latestY);
      }
      this.DistanceToCamera = vec3.Distance(this._mapCamera.Position);
    }

    public override void RefreshTutorialStatus(string newTutorialHighlightElementID)
    {
      base.RefreshTutorialStatus(newTutorialHighlightElementID);
      if (this.Party?.Party?.Id == null)
        Debug.FailedAssert("Mobile party id is null when refreshing tutorial status", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\Nameplate\\PartyNameplateVM.cs", nameof (RefreshTutorialStatus), 344);
      else
        this._bindIsTargetedByTutorial = this.Party.Party.Id == newTutorialHighlightElementID;
    }

    private void RefreshMainPartyScreenPosition(Vec3 partyWorldPosition)
    {
      Vec3 vec3_1 = partyWorldPosition;
      this._latestX = 0.0f;
      this._latestY = 0.0f;
      this._latestW = 0.0f;
      MatrixFrame identity = MatrixFrame.Identity;
      this._mapCamera.GetViewProjMatrix(ref identity);
      Vec3 v = vec3_1 with { w = 1f };
      Vec3 vec3_2 = v * identity;
      this._isBehindBind = (double) vec3_2.w < 0.0;
      vec3_2.w = MathF.Abs(vec3_2.w);
      vec3_2.x /= vec3_2.w;
      vec3_2.y /= vec3_2.w;
      vec3_2.z /= vec3_2.w;
      vec3_2.w /= vec3_2.w;
      Vec3 vec3_3 = vec3_2 * 0.5f;
      vec3_3.x += 0.5f;
      vec3_3.y += 0.5f;
      vec3_3.y = 1f - vec3_3.y;
      if (this._isBehindBind)
        vec3_3.y = 1f;
      double screenResolutionWidth = (double) Screen.RealScreenResolutionWidth;
      Vec2 usableArea = ScreenManager.UsableArea;
      double x = (double) usableArea.X;
      int num1 = (int) (screenResolutionWidth * x);
      double resolutionHeight = (double) Screen.RealScreenResolutionHeight;
      usableArea = ScreenManager.UsableArea;
      double y = (double) usableArea.Y;
      int num2 = (int) (resolutionHeight * y);
      this._latestX = vec3_3.x * (float) num1;
      this._latestY = vec3_3.y * (float) num2;
      this._latestW = this.IsBehind ? -vec3_3.w : vec3_3.w;
      this._isHighBind = (double) this._mapCamera.Position.Distance(v) >= 110.0;
      this._partyPositionBind = new Vec2(this._latestX, this._latestY);
    }

    public void DetermineIsVisibleOnMap()
    {
      this._isVisibleOnMapBind = (double) this._latestW < 100.0 && (double) this._latestW > 0.0 && (double) this._mapCamera.Position.z < 200.0;
    }

    public void OnPlayerCharacterChanged(Hero newPlayer)
    {
      if (this.IsMainParty && this.Party.LeaderHero != newPlayer)
      {
        this._isMainPartyBind = false;
        this._mainHeroVisualBind = new ImageIdentifierVM(ImageIdentifierType.Null);
      }
      else if (this.Party.LeaderHero == newPlayer)
      {
        this._isMainPartyBind = true;
        this._mainHeroVisualBind = new ImageIdentifierVM(CharacterCode.CreateFrom((BasicCharacterObject) Hero.MainHero.CharacterObject));
      }
      this._isPartyHeroVisualDirty = true;
    }

    private bool IsInsideWindow()
    {
      return (double) this._latestX <= (double) Screen.RealScreenResolutionWidth && (double) this._latestY <= (double) Screen.RealScreenResolutionHeight && (double) this._latestX + 100.0 >= 0.0 && (double) this._latestY + 30.0 >= 0.0;
    }

    public void RefreshBinding()
    {
      this.Position = this._partyPositionBind;
      this.HeadPosition = this._headPositionBind;
      this.IsVisibleOnMap = this._isVisibleOnMapBind;
      this.IsInSettlement = this._isInSettlementBind;
      this.IsMainParty = this._isMainPartyBind;
      this.FactionColor = this._factionColorBind;
      this.MainHeroVisual = this._mainHeroVisualBind;
      this.IsHigh = this._isHighBind;
      this.Count = this._countBind;
      this.Prisoner = this._prisonerBind;
      this.Wounded = this._woundedBind;
      this.IsBehind = this._isBehindBind;
      this.FullName = this._fullNameBind;
      this.IsTargetedByTutorial = this._bindIsTargetedByTutorial;
      this.ShouldShowFullName = this._shouldShowFullNameBind;
      this.IsInArmy = this._isInArmyBind;
      this.IsArmy = this._isArmyBind;
      this.ExtraInfoText = this._extraInfoTextBind;
      this.IsPrisoner = this._isPrisonerBind;
      this.IsDisorganized = this._isDisorganizedBind;
      this.MovementSpeedText = this._movementSpeedTextBind;
      this.Quests.Clear();
      foreach (SandBoxUIHelper.IssueQuestFlags issueQuestFlagsValue in SandBoxUIHelper.IssueQuestFlagsValues)
      {
        if (issueQuestFlagsValue != SandBoxUIHelper.IssueQuestFlags.None && (this._questsBind & issueQuestFlagsValue) != SandBoxUIHelper.IssueQuestFlags.None)
          this.Quests.Add(new QuestMarkerVM(issueQuestFlagsValue));
      }
    }

    public void ExecuteSetCameraPosition()
    {
      if (!this.IsMainParty)
        return;
      this._resetCamera();
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      bool flag = this.Party.HomeSettlement != null && (this.Party.HomeSettlement.IsVillage ? settlement.BoundVillages.Contains(this.Party.HomeSettlement.Village) : this.Party.HomeSettlement == settlement);
      if (((this.Party.IsCaravan ? 1 : (this.Party.IsVillager ? 1 : 0)) & (flag ? 1 : 0)) == 0)
        return;
      this._isPartyBannerDirty = true;
    }

    private void OnClanChangeKingdom(
      Clan arg1,
      Kingdom arg2,
      Kingdom arg3,
      ChangeKingdomAction.ChangeKingdomActionDetail arg4,
      bool showNotification)
    {
      if (this.Party.LeaderHero?.Clan != arg1)
        return;
      this._isPartyBannerDirty = true;
    }

    private void OnClanLeaderChanged(Hero arg1, Hero arg2)
    {
      if (arg2.MapFaction != this.Party.MapFaction)
        return;
      this._isPartyBannerDirty = true;
    }

    public void RegisterEvents()
    {
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangeKingdom));
      CampaignEvents.OnClanLeaderChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnClanLeaderChanged));
    }

    public void UnregisterEvents()
    {
      CampaignEvents.OnSettlementOwnerChangedEvent.ClearListeners((object) this);
      CampaignEvents.OnClanChangedKingdomEvent.ClearListeners((object) this);
      CampaignEvents.OnClanLeaderChangedEvent.ClearListeners((object) this);
    }

    public Vec2 HeadPosition
    {
      get => this._headPosition;
      set
      {
        if (!(value != this._headPosition))
          return;
        this._headPosition = value;
        this.OnPropertyChangedWithValue(value, nameof (HeadPosition));
      }
    }

    public string Count
    {
      get => this._count;
      set
      {
        if (!(value != this._count))
          return;
        this._count = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Count));
      }
    }

    public string Prisoner
    {
      get => this._prisoner;
      set
      {
        if (!(value != this._prisoner))
          return;
        this._prisoner = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Prisoner));
      }
    }

    public MBBindingList<QuestMarkerVM> Quests
    {
      get => this._quests;
      set
      {
        if (value == this._quests)
          return;
        this._quests = value;
        this.OnPropertyChangedWithValue<MBBindingList<QuestMarkerVM>>(value, nameof (Quests));
      }
    }

    public string Wounded
    {
      get => this._wounded;
      set
      {
        if (!(value != this._wounded))
          return;
        this._wounded = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Wounded));
      }
    }

    public string ExtraInfoText
    {
      get => this._extraInfoText;
      set
      {
        if (!(value != this._extraInfoText))
          return;
        this._extraInfoText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ExtraInfoText));
      }
    }

    public string MovementSpeedText
    {
      get => this._movementSpeedText;
      set
      {
        if (!(value != this._movementSpeedText))
          return;
        this._movementSpeedText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (MovementSpeedText));
      }
    }

    public string FullName
    {
      get => this._fullName;
      set
      {
        if (!(value != this._fullName))
          return;
        this._fullName = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (FullName));
      }
    }

    public bool IsMainParty
    {
      get => this._isMainParty;
      set
      {
        if (value == this._isMainParty)
          return;
        this._isMainParty = value;
        this.OnPropertyChangedWithValue(value, nameof (IsMainParty));
      }
    }

    public bool IsInArmy
    {
      get => this._isInArmy;
      set
      {
        if (value == this._isInArmy)
          return;
        this._isInArmy = value;
        this.OnPropertyChangedWithValue(value, nameof (IsInArmy));
      }
    }

    public bool IsInSettlement
    {
      get => this._isInSettlement;
      set
      {
        if (value == this._isInSettlement)
          return;
        this._isInSettlement = value;
        this.OnPropertyChangedWithValue(value, nameof (IsInSettlement));
      }
    }

    public bool IsDisorganized
    {
      get => this._isDisorganized;
      set
      {
        if (value == this._isDisorganized)
          return;
        this._isDisorganized = value;
        this.OnPropertyChangedWithValue(value, nameof (IsDisorganized));
      }
    }

    public bool IsArmy
    {
      get => this._isArmy;
      set
      {
        if (value == this._isArmy)
          return;
        this._isArmy = value;
        this.OnPropertyChangedWithValue(value, nameof (IsArmy));
      }
    }

    public bool IsBehind
    {
      get => this._isBehind;
      set
      {
        if (value == this._isBehind)
          return;
        this._isBehind = value;
        this.OnPropertyChangedWithValue(value, nameof (IsBehind));
      }
    }

    public bool IsHigh
    {
      get => this._isHigh;
      set
      {
        if (value == this._isHigh)
          return;
        this._isHigh = value;
        this.OnPropertyChangedWithValue(value, nameof (IsHigh));
      }
    }

    public bool IsPrisoner
    {
      get => this._isPrisoner;
      set
      {
        if (value == this._isPrisoner)
          return;
        this._isPrisoner = value;
        this.OnPropertyChangedWithValue(value, nameof (IsPrisoner));
      }
    }

    public bool ShouldShowFullName
    {
      get => this._shouldShowFullName || this._bindIsTargetedByTutorial;
      set
      {
        if (value == this._shouldShowFullName)
          return;
        this._shouldShowFullName = value;
        this.OnPropertyChangedWithValue(value, nameof (ShouldShowFullName));
      }
    }

    public ImageIdentifierVM MainHeroVisual
    {
      get => this._mainHeroVisual;
      set
      {
        if (value == this._mainHeroVisual)
          return;
        this._mainHeroVisual = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (MainHeroVisual));
      }
    }

    public ImageIdentifierVM PartyBanner
    {
      get => this._partyBanner;
      set
      {
        if (value == this._partyBanner)
          return;
        this._partyBanner = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (PartyBanner));
      }
    }
  }
}
