// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.MapEventVisualsVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Map
{
  public class MapEventVisualsVM : ViewModel
  {
    private readonly Camera _mapCamera;
    private readonly Dictionary<MapEvent, MapEventVisualItemVM> _eventToVisualMap = new Dictionary<MapEvent, MapEventVisualItemVM>();
    private readonly Func<Vec2, Vec3> _getRealPositionOfEvent;
    private readonly TWParallel.ParallelForAuxPredicate UpdateMapEventsAuxPredicate;
    private MBBindingList<MapEventVisualItemVM> _mapEvents;

    public MapEventVisualsVM(Camera mapCamera, Func<Vec2, Vec3> getRealPositionOfEvent)
    {
      this._mapCamera = mapCamera;
      this._getRealPositionOfEvent = getRealPositionOfEvent;
      this.MapEvents = new MBBindingList<MapEventVisualItemVM>();
      this.UpdateMapEventsAuxPredicate = new TWParallel.ParallelForAuxPredicate(this.UpdateMapEventsAux);
    }

    private void UpdateMapEventsAux(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        this.MapEvents[index].ParallelUpdatePosition();
        this.MapEvents[index].DetermineIsVisibleOnMap();
      }
    }

    public void Update(float dt)
    {
      TWParallel.For(0, this.MapEvents.Count, this.UpdateMapEventsAuxPredicate);
      for (int index = 0; index < this.MapEvents.Count; ++index)
        this.MapEvents[index].UpdateBindingProperties();
    }

    public void OnMapEventVisibilityChanged(MapEvent mapEvent)
    {
      if (!this._eventToVisualMap.ContainsKey(mapEvent))
        return;
      this._eventToVisualMap[mapEvent].UpdateProperties();
    }

    public void OnMapEventStarted(MapEvent mapEvent)
    {
      if (this._eventToVisualMap.ContainsKey(mapEvent))
      {
        if (!this.IsMapEventSettlementRelated(mapEvent))
        {
          this._eventToVisualMap[mapEvent].UpdateProperties();
        }
        else
        {
          this.MapEvents.Remove(this._eventToVisualMap[mapEvent]);
          this._eventToVisualMap.Remove(mapEvent);
        }
      }
      else
      {
        if (this.IsMapEventSettlementRelated(mapEvent))
          return;
        MapEventVisualItemVM eventVisualItemVm = new MapEventVisualItemVM(this._mapCamera, mapEvent, this._getRealPositionOfEvent);
        this._eventToVisualMap.Add(mapEvent, eventVisualItemVm);
        this.MapEvents.Add(eventVisualItemVm);
        eventVisualItemVm.UpdateProperties();
      }
    }

    public void OnMapEventEnded(MapEvent mapEvent)
    {
      if (!this._eventToVisualMap.ContainsKey(mapEvent))
        return;
      this.MapEvents.Remove(this._eventToVisualMap[mapEvent]);
      this._eventToVisualMap.Remove(mapEvent);
    }

    private bool IsMapEventSettlementRelated(MapEvent mapEvent)
    {
      return mapEvent.MapEventSettlement != null;
    }

    public MBBindingList<MapEventVisualItemVM> MapEvents
    {
      get => this._mapEvents;
      set
      {
        if (this._mapEvents == value)
          return;
        this._mapEvents = value;
        this.OnPropertyChangedWithValue<MBBindingList<MapEventVisualItemVM>>(value, nameof (MapEvents));
      }
    }
  }
}
