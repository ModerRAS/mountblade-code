// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.MapSiege.MapSiegePOIVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.MapSiege
{
  public class MapSiegePOIVM : ViewModel
  {
    private readonly Vec3 _mapSceneLocation;
    private readonly Camera _mapCamera;
    private readonly BattleSideEnum _thisSide;
    private readonly Action<MapSiegePOIVM> _onSelection;
    private float _latestX;
    private float _latestY;
    private float _latestW;
    private float _bindCurrentHitpoints;
    private float _bindMaxHitpoints;
    private float _bindWPos;
    private int _bindWSign;
    private int _bindMachineType = -1;
    private int _bindQueueIndex;
    private bool _bindIsInside;
    private bool _bindHasItem;
    private bool _bindIsConstructing;
    private Vec2 _bindPosition;
    private bool _bindIsInVisibleRange;
    private Color _sidePrimaryColor;
    private Color _sideSecondaryColor;
    private Vec2 _position;
    private float _currentHitpoints;
    private int _machineType = -1;
    private float _maxHitpoints;
    private int _queueIndex;
    private bool _isInside;
    private bool _hasItem;
    private bool _isConstructing;
    private bool _isPlayerSidePOI;
    private bool _isFireVersion;
    private bool _isInVisibleRange;
    private bool _isSelected;

    private SiegeEvent Siege => PlayerSiege.PlayerSiegeEvent;

    private BattleSideEnum PlayerSide => PlayerSiege.PlayerSide;

    private Settlement Settlement => this.Siege.BesiegedSettlement;

    public MapSiegePOIVM.POIType Type { get; }

    public int MachineIndex { get; }

    public float LatestW => this._latestW;

    public SiegeEvent.SiegeEngineConstructionProgress Machine { get; private set; }

    public MatrixFrame MapSceneLocationFrame { get; private set; }

    public MapSiegePOIVM(
      MapSiegePOIVM.POIType type,
      MatrixFrame mapSceneLocation,
      Camera mapCamera,
      int machineIndex,
      Action<MapSiegePOIVM> onSelection)
    {
      this.Type = type;
      this._onSelection = onSelection;
      this._thisSide = this.Type == MapSiegePOIVM.POIType.AttackerRamSiegeMachine || this.Type == MapSiegePOIVM.POIType.AttackerTowerSiegeMachine || this.Type == MapSiegePOIVM.POIType.AttackerRangedSiegeMachine ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
      this.MapSceneLocationFrame = mapSceneLocation;
      this._mapSceneLocation = this.MapSceneLocationFrame.origin;
      this._mapCamera = mapCamera;
      this.MachineIndex = machineIndex;
      Color color1;
      if (this._thisSide != BattleSideEnum.Attacker)
      {
        IFaction mapFaction = this.Siege.BesiegedSettlement.MapFaction;
        color1 = Color.FromUint(mapFaction != null ? mapFaction.Color : 0U);
      }
      else
      {
        IFaction mapFaction = this.Siege.BesiegerCamp.LeaderParty.MapFaction;
        color1 = Color.FromUint(mapFaction != null ? mapFaction.Color : 0U);
      }
      this.SidePrimaryColor = color1;
      Color color2;
      if (this._thisSide != BattleSideEnum.Attacker)
      {
        IFaction mapFaction = this.Siege.BesiegedSettlement.MapFaction;
        color2 = Color.FromUint(mapFaction != null ? mapFaction.Color2 : 0U);
      }
      else
      {
        IFaction mapFaction = this.Siege.BesiegerCamp.LeaderParty.MapFaction;
        color2 = Color.FromUint(mapFaction != null ? mapFaction.Color2 : 0U);
      }
      this.SideSecondaryColor = color2;
      this.IsPlayerSidePOI = this.DetermineIfPOIIsPlayerSide();
    }

    public void ExecuteSelection()
    {
      this._onSelection(this);
      this.IsSelected = true;
    }

    public void UpdateProperties()
    {
      this.Machine = this.GetDesiredMachine();
      this._bindHasItem = this.Type == MapSiegePOIVM.POIType.WallSection || this.Machine != null;
      SiegeEvent.SiegeEngineConstructionProgress machine = this.Machine;
      this._bindIsConstructing = machine != null && !machine.IsActive;
      this.RefreshMachineType();
      this.RefreshHitpoints();
      this.RefreshQueueIndex();
    }

    public void RefreshDistanceValue(float newDistance)
    {
      this._bindIsInVisibleRange = (double) newDistance <= 20.0;
    }

    public void RefreshPosition()
    {
      this._latestX = 0.0f;
      this._latestY = 0.0f;
      this._latestW = 0.0f;
      double insideUsableArea = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._mapCamera, this._mapSceneLocation, ref this._latestX, ref this._latestY, ref this._latestW);
      this._bindWPos = this._latestW;
      this._bindWSign = (int) this._bindWPos;
      this._bindIsInside = this.IsInsideWindow();
      if (!this._bindIsInside)
        this._bindPosition = new Vec2(-1000f, -1000f);
      else
        this._bindPosition = new Vec2(this._latestX, this._latestY);
    }

    public void RefreshBinding()
    {
      this.Position = this._bindPosition;
      this.IsInside = this._bindIsInside;
      this.CurrentHitpoints = this._bindCurrentHitpoints;
      this.MaxHitpoints = this._bindMaxHitpoints;
      this.HasItem = this._bindHasItem;
      this.IsConstructing = this._bindIsConstructing;
      this.MachineType = this._bindMachineType;
      this.QueueIndex = this._bindQueueIndex;
      this.IsInVisibleRange = this._bindIsInVisibleRange;
    }

    private void RefreshHitpoints()
    {
      if (this.Siege != null)
      {
        switch (this.Type)
        {
          case MapSiegePOIVM.POIType.WallSection:
            MBReadOnlyList<float> hitPointsRatioList = this.Settlement.SettlementWallSectionHitPointsRatioList;
            this._bindMaxHitpoints = this.Settlement.MaxWallHitPoints / (float) this.Settlement.WallSectionCount;
            this._bindCurrentHitpoints = hitPointsRatioList[this.MachineIndex] * this._bindMaxHitpoints;
            this._bindMachineType = (double) this._bindCurrentHitpoints <= 0.0 ? 1 : 0;
            break;
          case MapSiegePOIVM.POIType.DefenderSiegeMachine:
          case MapSiegePOIVM.POIType.AttackerRamSiegeMachine:
          case MapSiegePOIVM.POIType.AttackerTowerSiegeMachine:
          case MapSiegePOIVM.POIType.AttackerRangedSiegeMachine:
            if (this.Machine != null)
            {
              if (this.Machine.IsActive)
              {
                this._bindCurrentHitpoints = this.Machine.Hitpoints;
                this._bindMaxHitpoints = this.Machine.MaxHitPoints;
                break;
              }
              if (this.Machine.IsBeingRedeployed)
              {
                this._bindCurrentHitpoints = this.Machine.RedeploymentProgress;
                this._bindMaxHitpoints = 1f;
                break;
              }
              this._bindCurrentHitpoints = this.Machine.Progress;
              this._bindMaxHitpoints = 1f;
              break;
            }
            this._bindCurrentHitpoints = 0.0f;
            this._bindMaxHitpoints = 0.0f;
            break;
        }
      }
      else
      {
        this._bindCurrentHitpoints = 0.0f;
        this._bindMaxHitpoints = 0.0f;
      }
    }

    private void RefreshMachineType()
    {
      if (this.Siege != null)
      {
        switch (this.Type)
        {
          case MapSiegePOIVM.POIType.WallSection:
            this._bindMachineType = 0;
            break;
          case MapSiegePOIVM.POIType.DefenderSiegeMachine:
          case MapSiegePOIVM.POIType.AttackerRamSiegeMachine:
          case MapSiegePOIVM.POIType.AttackerTowerSiegeMachine:
          case MapSiegePOIVM.POIType.AttackerRangedSiegeMachine:
            this._bindMachineType = this.Machine != null ? (int) this.GetMachineTypeFromId(this.Machine.SiegeEngine.StringId) : -1;
            break;
        }
      }
      else
        this._bindMachineType = -1;
    }

    private void RefreshQueueIndex()
    {
      this._bindQueueIndex = this.Machine != null ? this.Siege.GetSiegeEventSide(this.PlayerSide).SiegeEngines.DeployedSiegeEngines.Where<SiegeEvent.SiegeEngineConstructionProgress>((Func<SiegeEvent.SiegeEngineConstructionProgress, bool>) (e => !e.IsActive)).ToList<SiegeEvent.SiegeEngineConstructionProgress>().IndexOf(this.Machine) : -1;
    }

    private bool DetermineIfPOIIsPlayerSide()
    {
      switch (this.Type)
      {
        case MapSiegePOIVM.POIType.WallSection:
        case MapSiegePOIVM.POIType.DefenderSiegeMachine:
          return this.PlayerSide == BattleSideEnum.Defender;
        case MapSiegePOIVM.POIType.AttackerRamSiegeMachine:
        case MapSiegePOIVM.POIType.AttackerTowerSiegeMachine:
        case MapSiegePOIVM.POIType.AttackerRangedSiegeMachine:
          return this.PlayerSide == BattleSideEnum.Attacker;
        default:
          return false;
      }
    }

    private bool IsInsideWindow()
    {
      return (double) this._latestX <= (double) Screen.RealScreenResolutionWidth && (double) this._latestY <= (double) Screen.RealScreenResolutionHeight && (double) this._latestX + 200.0 >= 0.0 && (double) this._latestY + 100.0 >= 0.0;
    }

    public void ExecuteShowTooltip()
    {
      InformationManager.ShowTooltip(typeof (List<TooltipProperty>), (object) SandBoxUIHelper.GetSiegeEngineInProgressTooltip(this.Machine));
    }

    public void ExecuteHideTooltip() => MBInformationManager.HideInformations();

    private MapSiegePOIVM.MachineTypes GetMachineTypeFromId(string id)
    {
      switch (id.ToLower())
      {
        case "ballista":
        case "fire_ballista":
          return MapSiegePOIVM.MachineTypes.Ballista;
        case "bricole":
        case "trebuchet":
          return MapSiegePOIVM.MachineTypes.Trebuchet;
        case "catapult":
        case "fire_catapult":
        case "fire_mangonel":
        case "fire_onager":
        case "mangonel":
        case "onager":
          return MapSiegePOIVM.MachineTypes.Mangonel;
        case "ladder":
          return MapSiegePOIVM.MachineTypes.Ladder;
        case "ram":
          return MapSiegePOIVM.MachineTypes.Ram;
        case "siege_tower_level1":
        case "siege_tower_level2":
        case "siege_tower_level3":
          return MapSiegePOIVM.MachineTypes.SiegeTower;
        default:
          return MapSiegePOIVM.MachineTypes.None;
      }
    }

    private SiegeEvent.SiegeEngineConstructionProgress GetDesiredMachine()
    {
      if (this.Siege == null)
        return (SiegeEvent.SiegeEngineConstructionProgress) null;
      switch (this.Type)
      {
        case MapSiegePOIVM.POIType.DefenderSiegeMachine:
          return this.Siege.GetSiegeEventSide(BattleSideEnum.Defender).SiegeEngines.DeployedRangedSiegeEngines[this.MachineIndex];
        case MapSiegePOIVM.POIType.AttackerRamSiegeMachine:
        case MapSiegePOIVM.POIType.AttackerTowerSiegeMachine:
          return this.Siege.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedMeleeSiegeEngines[this.MachineIndex];
        case MapSiegePOIVM.POIType.AttackerRangedSiegeMachine:
          return this.Siege.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedRangedSiegeEngines[this.MachineIndex];
        default:
          return (SiegeEvent.SiegeEngineConstructionProgress) null;
      }
    }

    public Vec2 Position
    {
      get => this._position;
      set
      {
        if (!(this._position != value))
          return;
        this._position = value;
        this.OnPropertyChangedWithValue(value, nameof (Position));
      }
    }

    public Color SidePrimaryColor
    {
      get => this._sidePrimaryColor;
      set
      {
        if (!(this._sidePrimaryColor != value))
          return;
        this._sidePrimaryColor = value;
        this.OnPropertyChangedWithValue(value, nameof (SidePrimaryColor));
      }
    }

    public Color SideSecondaryColor
    {
      get => this._sideSecondaryColor;
      set
      {
        if (!(this._sideSecondaryColor != value))
          return;
        this._sideSecondaryColor = value;
        this.OnPropertyChangedWithValue(value, nameof (SideSecondaryColor));
      }
    }

    public int QueueIndex
    {
      get => this._queueIndex;
      set
      {
        if (this._queueIndex == value)
          return;
        this._queueIndex = value;
        this.OnPropertyChangedWithValue(value, nameof (QueueIndex));
      }
    }

    public int MachineType
    {
      get => this._machineType;
      set
      {
        if (this._machineType == value)
          return;
        this._machineType = value;
        this.OnPropertyChangedWithValue(value, nameof (MachineType));
      }
    }

    public float CurrentHitpoints
    {
      get => this._currentHitpoints;
      set
      {
        if ((double) this._currentHitpoints == (double) value)
          return;
        this._currentHitpoints = value;
        this.OnPropertyChangedWithValue(value, nameof (CurrentHitpoints));
      }
    }

    public float MaxHitpoints
    {
      get => this._maxHitpoints;
      set
      {
        if ((double) this._maxHitpoints == (double) value)
          return;
        this._maxHitpoints = value;
        this.OnPropertyChangedWithValue(value, nameof (MaxHitpoints));
      }
    }

    public bool IsPlayerSidePOI
    {
      get => this._isPlayerSidePOI;
      set
      {
        if (this._isPlayerSidePOI == value)
          return;
        this._isPlayerSidePOI = value;
        this.OnPropertyChangedWithValue(value, nameof (IsPlayerSidePOI));
      }
    }

    public bool IsFireVersion
    {
      get => this._isFireVersion;
      set
      {
        if (this._isFireVersion == value)
          return;
        this._isFireVersion = value;
        this.OnPropertyChangedWithValue(value, nameof (IsFireVersion));
      }
    }

    public bool IsInVisibleRange
    {
      get => this._isInVisibleRange;
      set
      {
        if (this._isInVisibleRange == value)
          return;
        this._isInVisibleRange = value;
        this.OnPropertyChangedWithValue(value, nameof (IsInVisibleRange));
      }
    }

    public bool IsConstructing
    {
      get => this._isConstructing;
      set
      {
        if (this._isConstructing == value)
          return;
        this._isConstructing = value;
        this.OnPropertyChangedWithValue(value, nameof (IsConstructing));
      }
    }

    public bool IsSelected
    {
      get => this._isSelected;
      set
      {
        if (this._isSelected == value)
          return;
        this._isSelected = value;
        this.OnPropertyChangedWithValue(value, nameof (IsSelected));
      }
    }

    public bool HasItem
    {
      get => this._hasItem;
      set
      {
        if (this._hasItem == value)
          return;
        this._hasItem = value;
        this.OnPropertyChangedWithValue(value, nameof (HasItem));
      }
    }

    public bool IsInside
    {
      get => this._isInside;
      set
      {
        if (this._isInside == value)
          return;
        this._isInside = value;
        this.OnPropertyChangedWithValue(value, nameof (IsInside));
      }
    }

    public enum POIType
    {
      WallSection,
      DefenderSiegeMachine,
      AttackerRamSiegeMachine,
      AttackerTowerSiegeMachine,
      AttackerRangedSiegeMachine,
    }

    public enum MachineTypes
    {
      None = -1, // 0xFFFFFFFF
      Wall = 0,
      BrokenWall = 1,
      Ballista = 2,
      Trebuchet = 3,
      Ladder = 4,
      Ram = 5,
      SiegeTower = 6,
      Mangonel = 7,
    }
  }
}
