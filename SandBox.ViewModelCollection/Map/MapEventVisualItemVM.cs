// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.MapEventVisualItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Map
{
  public class MapEventVisualItemVM : ViewModel
  {
    private Camera _mapCamera;
    private bool _isAVisibleEvent;
    private Func<Vec2, Vec3> _getRealPositionOfEvent;
    private Vec2 _mapEventPositionCache;
    private Vec3 _mapEventRealPosition;
    private const float CameraDistanceCutoff = 200f;
    private Vec2 _bindPosition;
    private bool _bindIsVisibleOnMap;
    private float _latestX;
    private float _latestY;
    private float _latestW;
    private Vec2 _position;
    private int _eventType;
    private bool _isVisibleOnMap;

    public MapEvent MapEvent { get; private set; }

    public MapEventVisualItemVM(
      Camera mapCamera,
      MapEvent mapEvent,
      Func<Vec2, Vec3> getRealPositionOfEvent)
    {
      this._mapCamera = mapCamera;
      this._getRealPositionOfEvent = getRealPositionOfEvent;
      this.MapEvent = mapEvent;
      this._mapEventPositionCache = mapEvent.Position;
      this._mapEventRealPosition = this._getRealPositionOfEvent(this._mapEventPositionCache);
    }

    public void UpdateProperties()
    {
      this.EventType = (int) SandBoxUIHelper.GetMapEventVisualTypeFromMapEvent(this.MapEvent);
      this._isAVisibleEvent = this.MapEvent.IsVisible;
    }

    public void ParallelUpdatePosition()
    {
      this._latestX = 0.0f;
      this._latestY = 0.0f;
      this._latestW = 0.0f;
      if (this._mapEventPositionCache != this.MapEvent.Position)
      {
        this._mapEventPositionCache = this.MapEvent.Position;
        this._mapEventRealPosition = this._getRealPositionOfEvent(this._mapEventPositionCache);
      }
      double insideUsableArea = (double) MBWindowManager.WorldToScreenInsideUsableArea(this._mapCamera, this._mapEventRealPosition + new Vec3(z: 1.5f), ref this._latestX, ref this._latestY, ref this._latestW);
      this._bindPosition = new Vec2(this._latestX, this._latestY);
    }

    public void DetermineIsVisibleOnMap()
    {
      this._bindIsVisibleOnMap = (double) this._latestW > 0.0 && (double) this._mapCamera.Position.z < 200.0 && this._isAVisibleEvent;
    }

    public void UpdateBindingProperties()
    {
      this.Position = this._bindPosition;
      this.IsVisibleOnMap = this._bindIsVisibleOnMap;
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

    public int EventType
    {
      get => this._eventType;
      set
      {
        if (this._eventType == value)
          return;
        this._eventType = value;
        this.OnPropertyChangedWithValue(value, nameof (EventType));
      }
    }

    public bool IsVisibleOnMap
    {
      get => this._isVisibleOnMap;
      set
      {
        if (this._isVisibleOnMap == value)
          return;
        this._isVisibleOnMap = value;
        this.OnPropertyChangedWithValue(value, nameof (IsVisibleOnMap));
      }
    }
  }
}
