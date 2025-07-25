// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.MobilePartyTrackItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Map
{
  public class MobilePartyTrackItemVM : ViewModel
  {
    private float _latestX;
    private float _latestY;
    private float _latestW;
    private readonly Camera _mapCamera;
    private readonly Action<Vec2> _fastMoveCameraToPosition;
    private Vec2 _partyPositionBind;
    private ImageIdentifierVM _factionVisualBind;
    private bool _isVisibleOnMapBind;
    private bool _isBehindBind;
    private string _nameBind;
    private Vec2 _partyPosition;
    private ImageIdentifierVM _factionVisual;
    private string _name;
    private bool _isArmy;
    private bool _isTracked;
    private bool _isEnabled;
    private bool _isBehind;

    public MobileParty TrackedParty { get; private set; }

    public Army TrackedArmy { get; private set; }

    private MobileParty _concernedMobileParty => this.TrackedArmy?.LeaderParty ?? this.TrackedParty;

    public MobilePartyTrackItemVM(
      MobileParty trackedParty,
      Camera mapCamera,
      Action<Vec2> fastMoveCameraToPosition)
    {
      this._mapCamera = mapCamera;
      this._fastMoveCameraToPosition = fastMoveCameraToPosition;
      this.TrackedParty = trackedParty;
      this.IsTracked = Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) this._concernedMobileParty);
      this.UpdateProperties();
      this.IsArmy = false;
    }

    public MobilePartyTrackItemVM(
      Army trackedArmy,
      Camera mapCamera,
      Action<Vec2> fastMoveCameraToPosition)
    {
      this._mapCamera = mapCamera;
      this._fastMoveCameraToPosition = fastMoveCameraToPosition;
      this.TrackedArmy = trackedArmy;
      this.IsTracked = Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) this._concernedMobileParty);
      this.UpdateProperties();
      this.IsArmy = true;
    }

    internal void UpdateProperties()
    {
      this._nameBind = this.TrackedArmy == null ? (this.TrackedParty == null ? "" : (!this.TrackedParty.IsCaravan || this.TrackedParty.LeaderHero == null ? this.TrackedParty.Name.ToString() : this.TrackedParty.LeaderHero?.Name.ToString())) : this.TrackedArmy?.Name.ToString();
      this._isVisibleOnMapBind = this.GetIsVisibleOnMap();
      if (this._concernedMobileParty.LeaderHero?.Clan != null)
        this._factionVisualBind = new ImageIdentifierVM(BannerCode.CreateFrom(this._concernedMobileParty.LeaderHero.Clan.Banner), true);
      else
        this._factionVisualBind = new ImageIdentifierVM(BannerCode.CreateFrom(this._concernedMobileParty.MapFaction?.Banner), true);
    }

    private bool GetIsVisibleOnMap()
    {
      MobileParty concernedMobileParty = this._concernedMobileParty;
      if ((concernedMobileParty != null ? (concernedMobileParty.IsVisible ? 1 : 0) : 0) != 0)
        return false;
      if (this.TrackedArmy != null)
        return true;
      return this.TrackedParty != null && this.TrackedParty.IsActive && this.TrackedParty.AttachedTo == null;
    }

    internal void UpdatePosition()
    {
      if (this._concernedMobileParty == null)
        return;
      float height = 0.0f;
      Campaign.Current.MapSceneWrapper.GetHeightAtPoint(this._concernedMobileParty.VisualPosition2DWithoutError, ref height);
      Vec3 worldSpacePosition = this._concernedMobileParty.VisualPosition2DWithoutError.ToVec3(height) + new Vec3(z: 1f);
      this._latestX = 0.0f;
      this._latestY = 0.0f;
      this._latestW = 0.0f;
      double insideUsableArea = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._mapCamera, worldSpacePosition, ref this._latestX, ref this._latestY, ref this._latestW);
      this._partyPositionBind = new Vec2(this._latestX, this._latestY);
      this._isBehindBind = (double) this._latestW < 0.0;
    }

    public void ExecuteToggleTrack()
    {
      if (this.IsTracked)
        this.Untrack();
      else
        this.Track();
    }

    private void Track()
    {
      this.IsTracked = true;
      if (Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) this._concernedMobileParty))
        return;
      Campaign.Current.VisualTrackerManager.RegisterObject((ITrackableCampaignObject) this._concernedMobileParty);
    }

    private void Untrack()
    {
      this.IsTracked = false;
      if (!Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) this._concernedMobileParty))
        return;
      Campaign.Current.VisualTrackerManager.RemoveTrackedObject((ITrackableBase) this._concernedMobileParty);
    }

    public void ExecuteGoToPosition()
    {
      if (this._concernedMobileParty == null)
        return;
      Action<Vec2> cameraToPosition = this._fastMoveCameraToPosition;
      if (cameraToPosition == null)
        return;
      cameraToPosition(this._concernedMobileParty.GetLogicalPosition().AsVec2);
    }

    public void ExecuteShowTooltip()
    {
      if (this.TrackedArmy != null)
      {
        InformationManager.ShowTooltip(typeof (Army), (object) this.TrackedArmy, (object) true, (object) false);
      }
      else
      {
        if (this.TrackedParty == null)
          return;
        InformationManager.ShowTooltip(typeof (MobileParty), (object) this.TrackedParty, (object) true, (object) false);
      }
    }

    public void ExecuteHideTooltip() => MBInformationManager.HideInformations();

    public void RefreshBinding()
    {
      this.PartyPosition = this._partyPositionBind;
      this.Name = this._nameBind;
      this.IsEnabled = this._isVisibleOnMapBind;
      this.IsBehind = this._isBehindBind;
      this.FactionVisual = this._factionVisualBind;
    }

    public Vec2 PartyPosition
    {
      get => this._partyPosition;
      set
      {
        if (!(value != this._partyPosition))
          return;
        this._partyPosition = value;
        this.OnPropertyChangedWithValue(value, nameof (PartyPosition));
      }
    }

    public ImageIdentifierVM FactionVisual
    {
      get => this._factionVisual;
      set
      {
        if (value == this._factionVisual)
          return;
        this._factionVisual = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (FactionVisual));
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

    public bool IsTracked
    {
      get => this._isTracked;
      set
      {
        if (value == this._isTracked)
          return;
        this._isTracked = value;
        this.OnPropertyChangedWithValue(value, nameof (IsTracked));
      }
    }

    public bool IsEnabled
    {
      get => this._isEnabled;
      set
      {
        if (value == this._isEnabled)
          return;
        this._isEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsEnabled));
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
  }
}
