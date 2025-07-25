// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapEventVisualCreator
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.MapEvents;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  public class GauntletMapEventVisualCreator : IMapEventVisualCreator
  {
    public List<IGauntletMapEventVisualHandler> Handlers = new List<IGauntletMapEventVisualHandler>();
    private readonly List<GauntletMapEventVisual> _listOfEvents = new List<GauntletMapEventVisual>();

    public IMapEventVisual CreateMapEventVisual(MapEvent mapEvent)
    {
      GauntletMapEventVisual newEventVisual = new GauntletMapEventVisual(mapEvent, new Action<GauntletMapEventVisual>(this.OnMapEventInitialized), new Action<GauntletMapEventVisual>(this.OnMapEventVisibilityChanged), new Action<GauntletMapEventVisual>(this.OnMapEventOver));
      this.Handlers?.ForEach((Action<IGauntletMapEventVisualHandler>) (h => h.OnNewEventStarted(newEventVisual)));
      this._listOfEvents.Add(newEventVisual);
      return (IMapEventVisual) newEventVisual;
    }

    private void OnMapEventOver(GauntletMapEventVisual overEvent)
    {
      this._listOfEvents.Remove(overEvent);
      this.Handlers?.ForEach((Action<IGauntletMapEventVisualHandler>) (h => h.OnEventEnded(overEvent)));
    }

    private void OnMapEventInitialized(GauntletMapEventVisual initializedEvent)
    {
      this.Handlers?.ForEach((Action<IGauntletMapEventVisualHandler>) (h => h.OnInitialized(initializedEvent)));
    }

    private void OnMapEventVisibilityChanged(GauntletMapEventVisual visibilityChangedEvent)
    {
      this.Handlers?.ForEach((Action<IGauntletMapEventVisualHandler>) (h => h.OnEventVisibilityChanged(visibilityChangedEvent)));
    }

    public IEnumerable<GauntletMapEventVisual> GetCurrentEvents()
    {
      return this._listOfEvents.AsEnumerable<GauntletMapEventVisual>();
    }
  }
}
