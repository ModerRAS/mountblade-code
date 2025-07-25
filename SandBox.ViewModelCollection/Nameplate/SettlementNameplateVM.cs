// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.SettlementNameplateVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class SettlementNameplateVM : NameplateVM
  {
    private readonly Camera _mapCamera;
    private float _latestX;
    private float _latestY;
    private float _latestW;
    private float _heightOffset;
    private bool _latestIsInsideWindow;
    private TaleWorlds.Core.Banner _latestBanner;
    private int _latestBannerVersionNo;
    private bool _isTrackedManually;
    private readonly GameEntity _entity;
    private Vec3 _worldPos;
    private Vec3 _worldPosWithHeight;
    private IFaction _currentFaction;
    private readonly Action<Vec2> _fastMoveCameraToPosition;
    private readonly bool _isVillage;
    private readonly bool _isCastle;
    private readonly bool _isTown;
    private float _wPosAfterPositionCalculation;
    private string _bindFactionColor;
    private bool _bindIsTracked;
    private ImageIdentifierVM _bindBanner;
    private int _bindRelation;
    private float _bindWPos;
    private float _bindDistanceToCamera;
    private int _bindWSign;
    private bool _bindIsInside;
    private Vec2 _bindPosition;
    private bool _bindIsVisibleOnMap;
    private bool _bindIsInRange;
    private List<Clan> _rebelliousClans;
    private string _name;
    private int _settlementType = -1;
    private ImageIdentifierVM _banner;
    private int _relation;
    private int _wSign;
    private float _wPos;
    private bool _isTracked;
    private bool _isInside;
    private bool _isInRange;
    private int _mapEventVisualType;
    private SettlementNameplateNotificationsVM _settlementNotifications;
    private SettlementNameplatePartyMarkersVM _settlementParties;
    private SettlementNameplateEventsVM _settlementEvents;

    public Settlement Settlement { get; }

    public SettlementNameplateVM(
      Settlement settlement,
      GameEntity entity,
      Camera mapCamera,
      Action<Vec2> fastMoveCameraToPosition)
    {
      this.Settlement = settlement;
      this._mapCamera = mapCamera;
      this._entity = entity;
      this._fastMoveCameraToPosition = fastMoveCameraToPosition;
      this.SettlementNotifications = new SettlementNameplateNotificationsVM(settlement);
      this.SettlementParties = new SettlementNameplatePartyMarkersVM(settlement);
      this.SettlementEvents = new SettlementNameplateEventsVM(settlement);
      this.Name = this.Settlement.Name.ToString();
      this.IsTracked = Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) settlement);
      if (this.Settlement.IsCastle)
      {
        this.SettlementType = 1;
        this._isCastle = true;
      }
      else if (this.Settlement.IsVillage)
      {
        this.SettlementType = 0;
        this._isVillage = true;
      }
      else if (this.Settlement.IsTown)
      {
        this.SettlementType = 2;
        this._isTown = true;
      }
      else
      {
        this.SettlementType = 0;
        this._isTown = true;
      }
      this._worldPos = !((NativeObject) this._entity != (NativeObject) null) ? this.Settlement.GetLogicalPosition() : this._entity.GlobalPosition;
      this.RefreshDynamicProperties(false);
      this.SizeType = 1;
      this._rebelliousClans = new List<Clan>();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Name = this.Settlement.Name.ToString();
      this.RefreshDynamicProperties(true);
    }

    public override void RefreshDynamicProperties(bool forceUpdate)
    {
      base.RefreshDynamicProperties(forceUpdate);
      if (((!this._bindIsVisibleOnMap ? 0 : (this._currentFaction != this.Settlement.MapFaction ? 1 : 0)) | (forceUpdate ? 1 : 0)) != 0)
      {
        IFaction mapFaction1 = this.Settlement.MapFaction;
        this._bindFactionColor = "#" + Color.UIntToColorString(mapFaction1 != null ? mapFaction1.Color : uint.MaxValue);
        TaleWorlds.Core.Banner banner = (TaleWorlds.Core.Banner) null;
        if (this.Settlement.OwnerClan != null)
        {
          banner = this.Settlement.OwnerClan.Banner;
          IFaction mapFaction2 = this.Settlement.MapFaction;
          if ((mapFaction2 != null ? (mapFaction2.IsKingdomFaction ? 1 : 0) : 0) != 0 && ((Kingdom) this.Settlement.MapFaction).RulingClan == this.Settlement.OwnerClan)
            banner = this.Settlement.OwnerClan.Kingdom.Banner;
        }
        int versionNo = banner != null ? banner.GetVersionNo() : 0;
        if (!this._latestBanner.IsContentsSameWith(banner) || this._latestBannerVersionNo != versionNo)
        {
          this._bindBanner = banner != null ? new ImageIdentifierVM(BannerCode.CreateFrom(banner), true) : new ImageIdentifierVM(ImageIdentifierType.Null);
          this._latestBannerVersionNo = banner.GetVersionNo();
          this._latestBanner = banner;
        }
        this._currentFaction = this.Settlement.MapFaction;
      }
      this._bindIsTracked = Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) this.Settlement);
      if (this.Settlement.IsHideout)
      {
        ISpottable settlementComponent = (ISpottable) this.Settlement.SettlementComponent;
        this._bindIsInRange = settlementComponent != null && settlementComponent.IsSpotted;
      }
      else
        this._bindIsInRange = this.Settlement.IsInspected;
    }

    public override void RefreshRelationStatus()
    {
      this._bindRelation = 0;
      if (this.Settlement.OwnerClan == null)
        return;
      if (FactionManager.IsAtWarAgainstFaction(this.Settlement.MapFaction, Hero.MainHero.MapFaction))
      {
        this._bindRelation = 2;
      }
      else
      {
        if (!FactionManager.IsAlliedWithFaction(this.Settlement.MapFaction, Hero.MainHero.MapFaction))
          return;
        this._bindRelation = 1;
      }
    }

    public override void RefreshPosition()
    {
      base.RefreshPosition();
      this._bindWPos = this._wPosAfterPositionCalculation;
      this._bindWSign = (int) this._bindWPos;
      this._bindIsInside = this._latestIsInsideWindow;
      if (this._bindIsVisibleOnMap)
        this._bindPosition = new Vec2(this._latestX, this._latestY);
      else
        this._bindPosition = new Vec2(-1000f, -1000f);
    }

    public override void RefreshTutorialStatus(string newTutorialHighlightElementID)
    {
      base.RefreshTutorialStatus(newTutorialHighlightElementID);
      if (this.Settlement?.Party?.Id == null)
        Debug.FailedAssert("Settlement party id is null when refreshing tutorial status", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\Nameplate\\SettlementNameplateVM.cs", nameof (RefreshTutorialStatus), 229);
      else
        this._bindIsTargetedByTutorial = this.Settlement.Party.Id == newTutorialHighlightElementID;
    }

    public void OnSiegeEventStartedOnSettlement(SiegeEvent siegeEvent)
    {
      this.MapEventVisualType = 2;
      if (this.Settlement.MapFaction != Hero.MainHero.MapFaction)
        return;
      switch (BannerlordConfig.AutoTrackAttackedSettlements)
      {
        case 0:
          this.Track();
          break;
        case 1:
          if (this.Settlement.MapFaction.Leader != Hero.MainHero)
            break;
          goto case 0;
      }
    }

    public void OnSiegeEventEndedOnSettlement(SiegeEvent siegeEvent)
    {
      if (this.Settlement?.Party?.MapEvent != null && !this.Settlement.Party.MapEvent.IsFinished)
        this.OnMapEventStartedOnSettlement(this.Settlement.Party.MapEvent);
      else
        this.OnMapEventEndedOnSettlement();
      if (this._isTrackedManually || BannerlordConfig.AutoTrackAttackedSettlements >= 2 || this.Settlement.MapFaction != Hero.MainHero.MapFaction)
        return;
      this.Untrack();
    }

    public void OnMapEventStartedOnSettlement(MapEvent mapEvent)
    {
      this.MapEventVisualType = (int) SandBoxUIHelper.GetMapEventVisualTypeFromMapEvent(mapEvent);
      if (this.Settlement.MapFaction != Hero.MainHero.MapFaction || !this.Settlement.IsUnderRaid && !this.Settlement.IsUnderSiege && !this.Settlement.InRebelliousState)
        return;
      switch (BannerlordConfig.AutoTrackAttackedSettlements)
      {
        case 0:
          this.Track();
          break;
        case 1:
          if (this.Settlement.MapFaction.Leader != Hero.MainHero)
            break;
          goto case 0;
      }
    }

    public void OnMapEventEndedOnSettlement()
    {
      this.MapEventVisualType = 0;
      if (this._isTrackedManually || BannerlordConfig.AutoTrackAttackedSettlements >= 2 || this.Settlement.IsUnderSiege || this.Settlement.IsUnderRaid || this.Settlement.InRebelliousState)
        return;
      this.Untrack();
    }

    public void OnRebelliousClanFormed(Clan clan)
    {
      this.MapEventVisualType = 4;
      this._rebelliousClans.Add(clan);
      if (this.Settlement.MapFaction != Hero.MainHero.MapFaction)
        return;
      switch (BannerlordConfig.AutoTrackAttackedSettlements)
      {
        case 0:
          this.Track();
          break;
        case 1:
          if (this.Settlement.MapFaction.Leader != Hero.MainHero)
            break;
          goto case 0;
      }
    }

    public void OnRebelliousClanDisbanded(Clan clan)
    {
      this._rebelliousClans.Remove(clan);
      if (!this._rebelliousClans.IsEmpty<Clan>())
        return;
      if (this.Settlement.IsUnderSiege)
      {
        this.MapEventVisualType = 2;
      }
      else
      {
        this.MapEventVisualType = 0;
        if (this._isTrackedManually || BannerlordConfig.AutoTrackAttackedSettlements >= 2)
          return;
        this.Untrack();
      }
    }

    public void CalculatePosition(in Vec3 cameraPosition)
    {
      this._worldPosWithHeight = this._worldPos;
      this._heightOffset = !this._isVillage ? (!this._isCastle ? (!this._isTown ? 1f : (float) (0.5 + (double) MathF.Clamp(cameraPosition.z / 30f, 0.0f, 1f) * 6.0)) : (float) (0.5 + (double) MathF.Clamp(cameraPosition.z / 30f, 0.0f, 1f) * 3.0)) : (float) (0.5 + (double) MathF.Clamp(cameraPosition.z / 30f, 0.0f, 1f) * 2.5);
      this._worldPosWithHeight += new Vec3(z: this._heightOffset);
      this._latestX = 0.0f;
      this._latestY = 0.0f;
      this._latestW = 0.0f;
      double insideUsableArea = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._mapCamera, this._worldPosWithHeight, ref this._latestX, ref this._latestY, ref this._latestW);
      this._wPosAfterPositionCalculation = (double) this._latestW < 0.0 ? -1f : 1.1f;
    }

    public void DetermineIsVisibleOnMap(in Vec3 cameraPosition)
    {
      this._bindIsVisibleOnMap = this.IsVisible(in cameraPosition);
    }

    public void DetermineIsInsideWindow() => this._latestIsInsideWindow = this.IsInsideWindow();

    public void RefreshBindValues()
    {
      this.FactionColor = this._bindFactionColor;
      this.Banner = this._bindBanner;
      this.Relation = this._bindRelation;
      this.WPos = this._bindWPos;
      this.WSign = this._bindWSign;
      this.IsInside = this._bindIsInside;
      this.Position = this._bindPosition;
      this.IsVisibleOnMap = this._bindIsVisibleOnMap;
      this.IsInRange = this._bindIsInRange;
      this.IsTargetedByTutorial = this._bindIsTargetedByTutorial;
      this.IsTracked = this._bindIsTracked;
      this.DistanceToCamera = this._bindDistanceToCamera;
      if (this.SettlementNotifications.IsEventsRegistered)
        this.SettlementNotifications.Tick();
      if (!this.SettlementEvents.IsEventsRegistered)
        return;
      this.SettlementEvents.Tick();
    }

    private bool IsVisible(in Vec3 cameraPosition)
    {
      this._bindDistanceToCamera = this._worldPos.Distance(cameraPosition);
      if (this.IsTracked)
        return true;
      if ((double) this.WPos < 0.0 || !this._latestIsInsideWindow)
        return false;
      if ((double) cameraPosition.z > 400.0)
        return this.Settlement.IsTown;
      return (double) cameraPosition.z > 200.0 ? this.Settlement.IsFortification : (double) this._bindDistanceToCamera < (double) cameraPosition.z + 60.0;
    }

    private bool IsInsideWindow()
    {
      return (double) this._latestX <= (double) Screen.RealScreenResolutionWidth && (double) this._latestY <= (double) Screen.RealScreenResolutionHeight && (double) this._latestX + 200.0 >= 0.0 && (double) this._latestY + 100.0 >= 0.0;
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.SettlementNotifications.UnloadEvents();
      this.SettlementParties.UnloadEvents();
    }

    public void ExecuteTrack()
    {
      if (this.IsTracked)
      {
        this.Untrack();
        this._isTrackedManually = false;
      }
      else
      {
        this.Track();
        this._isTrackedManually = true;
      }
    }

    private void Track()
    {
      this.IsTracked = true;
      if (Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) this.Settlement))
        return;
      Campaign.Current.VisualTrackerManager.RegisterObject((ITrackableCampaignObject) this.Settlement);
    }

    private void Untrack()
    {
      this.IsTracked = false;
      if (!Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) this.Settlement))
        return;
      Campaign.Current.VisualTrackerManager.RemoveTrackedObject((ITrackableBase) this.Settlement);
    }

    public void ExecuteSetCameraPosition()
    {
      this._fastMoveCameraToPosition(this.Settlement.Position2D);
    }

    public void ExecuteOpenEncyclopedia()
    {
      Campaign.Current.EncyclopediaManager.GoToLink(this.Settlement.EncyclopediaLink);
    }

    public SettlementNameplateNotificationsVM SettlementNotifications
    {
      get => this._settlementNotifications;
      set
      {
        if (value == this._settlementNotifications)
          return;
        this._settlementNotifications = value;
        this.OnPropertyChangedWithValue<SettlementNameplateNotificationsVM>(value, nameof (SettlementNotifications));
      }
    }

    public SettlementNameplatePartyMarkersVM SettlementParties
    {
      get => this._settlementParties;
      set
      {
        if (value == this._settlementParties)
          return;
        this._settlementParties = value;
        this.OnPropertyChangedWithValue<SettlementNameplatePartyMarkersVM>(value, nameof (SettlementParties));
      }
    }

    public SettlementNameplateEventsVM SettlementEvents
    {
      get => this._settlementEvents;
      set
      {
        if (value == this._settlementEvents)
          return;
        this._settlementEvents = value;
        this.OnPropertyChangedWithValue<SettlementNameplateEventsVM>(value, nameof (SettlementEvents));
      }
    }

    public int Relation
    {
      get => this._relation;
      set
      {
        if (value == this._relation)
          return;
        this._relation = value;
        this.OnPropertyChangedWithValue(value, nameof (Relation));
      }
    }

    public int MapEventVisualType
    {
      get => this._mapEventVisualType;
      set
      {
        if (value == this._mapEventVisualType)
          return;
        this._mapEventVisualType = value;
        this.OnPropertyChangedWithValue(value, nameof (MapEventVisualType));
      }
    }

    public int WSign
    {
      get => this._wSign;
      set
      {
        if (value == this._wSign)
          return;
        this._wSign = value;
        this.OnPropertyChangedWithValue(value, nameof (WSign));
      }
    }

    public float WPos
    {
      get => this._wPos;
      set
      {
        if ((double) value == (double) this._wPos)
          return;
        this._wPos = value;
        this.OnPropertyChangedWithValue(value, nameof (WPos));
      }
    }

    public ImageIdentifierVM Banner
    {
      get => this._banner;
      set
      {
        if (value == this._banner)
          return;
        this._banner = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (Banner));
      }
    }

    public string Name
    {
      get => this._name;
      set
      {
        if (!(value != this._name))
          return;
        this._name = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Name));
      }
    }

    public bool IsTracked
    {
      get => this._isTracked || this._bindIsTargetedByTutorial;
      set
      {
        if (value == this._isTracked)
          return;
        this._isTracked = value;
        this.OnPropertyChangedWithValue(value, nameof (IsTracked));
      }
    }

    public bool IsInside
    {
      get => this._isInside;
      set
      {
        if (value == this._isInside)
          return;
        this._isInside = value;
        this.OnPropertyChangedWithValue(value, nameof (IsInside));
      }
    }

    public bool IsInRange
    {
      get => this._isInRange;
      set
      {
        if (value == this._isInRange)
          return;
        this._isInRange = value;
        this.OnPropertyChangedWithValue(value, nameof (IsInRange));
        if (this.IsInRange)
        {
          this.SettlementNotifications.RegisterEvents();
          this.SettlementParties.RegisterEvents();
          this.SettlementEvents?.RegisterEvents();
        }
        else
        {
          this.SettlementNotifications.UnloadEvents();
          this.SettlementParties.UnloadEvents();
          this.SettlementEvents?.UnloadEvents();
        }
      }
    }

    public int SettlementType
    {
      get => this._settlementType;
      set
      {
        if (value == this._settlementType)
          return;
        this._settlementType = value;
        this.OnPropertyChangedWithValue(value, nameof (SettlementType));
      }
    }

    public enum Type
    {
      Village,
      Castle,
      Town,
    }

    public enum RelationType
    {
      Neutral,
      Ally,
      Enemy,
    }

    public enum IssueTypes
    {
      None,
      Possible,
      Active,
    }

    public enum MainQuestTypes
    {
      None,
      Possible,
      Active,
    }
  }
}
