// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapSettlementNameplateView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection.Nameplate;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapSettlementNameplateView))]
  public class GauntletMapSettlementNameplateView : MapView, IGauntletMapEventVisualHandler
  {
    private GauntletLayer _layerAsGauntletLayer;
    private IGauntletMovie _movie;
    private SettlementNameplatesVM _dataSource;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new SettlementNameplatesVM(this.MapScreen._mapCameraView.Camera, new Action<Vec2>(this.MapScreen.FastMoveCameraToPosition));
      this.Layer = (ScreenLayer) this.MapScreen.GetMapView<GauntletMapBasicView>().GauntletNameplateLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._movie = this._layerAsGauntletLayer.LoadMovie("SettlementNameplate", (ViewModel) this._dataSource);
      List<Tuple<Settlement, GameEntity>> settlements = new List<Tuple<Settlement, GameEntity>>();
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        GameEntity strategicEntity = PartyVisualManager.Current.GetVisualOfParty(settlement.Party).StrategicEntity;
        Tuple<Settlement, GameEntity> tuple = new Tuple<Settlement, GameEntity>(settlement, strategicEntity);
        settlements.Add(tuple);
      }
      CampaignEvents.OnHideoutSpottedEvent.AddNonSerializedListener((object) this, new Action<PartyBase, PartyBase>(this.OnHideoutSpotted));
      this._dataSource.Initialize((IEnumerable<Tuple<Settlement, GameEntity>>) settlements);
      if (!(Campaign.Current.VisualCreator.MapEventVisualCreator is GauntletMapEventVisualCreator eventVisualCreator))
        return;
      eventVisualCreator.Handlers.Add((IGauntletMapEventVisualHandler) this);
      foreach (GauntletMapEventVisual currentEvent in eventVisualCreator.GetCurrentEvents())
        this.GetNameplateOfMapEvent(currentEvent)?.OnMapEventStartedOnSettlement(currentEvent.MapEvent);
    }

    protected override void OnResume()
    {
      base.OnResume();
      foreach (NameplateVM nameplate in (Collection<SettlementNameplateVM>) this._dataSource.Nameplates)
        nameplate.RefreshDynamicProperties(true);
    }

    protected override void OnMapScreenUpdate(float dt)
    {
      base.OnMapScreenUpdate(dt);
      this._dataSource.Update();
    }

    protected override void OnFinalize()
    {
      if (Campaign.Current.VisualCreator.MapEventVisualCreator is GauntletMapEventVisualCreator eventVisualCreator)
        eventVisualCreator.Handlers.Remove((IGauntletMapEventVisualHandler) this);
      CampaignEvents.OnHideoutSpottedEvent.ClearListeners((object) this);
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this._dataSource.OnFinalize();
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.Layer = (ScreenLayer) null;
      this._movie = (IGauntletMovie) null;
      this._dataSource = (SettlementNameplatesVM) null;
      base.OnFinalize();
    }

    private void OnHideoutSpotted(PartyBase party, PartyBase hideoutParty)
    {
      MBSoundEvent.PlaySound(SoundEvent.GetEventIdFromString("event:/ui/notification/hideout_found"), hideoutParty.Settlement.GetPosition());
    }

    private SettlementNameplateVM GetNameplateOfMapEvent(GauntletMapEventVisual mapEvent)
    {
      int num1;
      if (mapEvent.MapEvent.EventType == MapEvent.BattleTypes.Raid)
      {
        Settlement mapEventSettlement = mapEvent.MapEvent.MapEventSettlement;
        if ((mapEventSettlement != null ? (mapEventSettlement.IsUnderRaid ? 1 : 0) : 0) == 0)
        {
          GauntletMapEventVisual gauntletMapEventVisual = mapEvent;
          num1 = gauntletMapEventVisual != null ? (gauntletMapEventVisual.MapEvent.IsFinished ? 1 : 0) : 0;
        }
        else
          num1 = 1;
      }
      else
        num1 = 0;
      bool flag1 = num1 != 0;
      int num2;
      if (mapEvent.MapEvent.EventType == MapEvent.BattleTypes.Siege)
      {
        Settlement mapEventSettlement = mapEvent.MapEvent.MapEventSettlement;
        if ((mapEventSettlement != null ? (mapEventSettlement.IsUnderSiege ? 1 : 0) : 0) == 0)
        {
          GauntletMapEventVisual gauntletMapEventVisual = mapEvent;
          num2 = gauntletMapEventVisual != null ? (gauntletMapEventVisual.MapEvent.IsFinished ? 1 : 0) : 0;
        }
        else
          num2 = 1;
      }
      else
        num2 = 0;
      bool flag2 = num2 != 0;
      int num3;
      if (mapEvent.MapEvent.EventType == MapEvent.BattleTypes.SallyOut)
      {
        Settlement mapEventSettlement = mapEvent.MapEvent.MapEventSettlement;
        if ((mapEventSettlement != null ? (mapEventSettlement.IsUnderSiege ? 1 : 0) : 0) == 0)
        {
          GauntletMapEventVisual gauntletMapEventVisual = mapEvent;
          num3 = gauntletMapEventVisual != null ? (gauntletMapEventVisual.MapEvent.IsFinished ? 1 : 0) : 0;
        }
        else
          num3 = 1;
      }
      else
        num3 = 0;
      bool flag3 = num3 != 0;
      return mapEvent.MapEvent.MapEventSettlement != null && flag2 | flag1 | flag3 ? this._dataSource.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == mapEvent.MapEvent.MapEventSettlement)) : (SettlementNameplateVM) null;
    }

    void IGauntletMapEventVisualHandler.OnNewEventStarted(GauntletMapEventVisual newEvent)
    {
      this.GetNameplateOfMapEvent(newEvent)?.OnMapEventStartedOnSettlement(newEvent.MapEvent);
    }

    void IGauntletMapEventVisualHandler.OnInitialized(GauntletMapEventVisual newEvent)
    {
      this.GetNameplateOfMapEvent(newEvent)?.OnMapEventStartedOnSettlement(newEvent.MapEvent);
    }

    void IGauntletMapEventVisualHandler.OnEventEnded(GauntletMapEventVisual newEvent)
    {
      this.GetNameplateOfMapEvent(newEvent)?.OnMapEventEndedOnSettlement();
    }

    void IGauntletMapEventVisualHandler.OnEventVisibilityChanged(
      GauntletMapEventVisual visibilityChangedEvent)
    {
    }
  }
}
