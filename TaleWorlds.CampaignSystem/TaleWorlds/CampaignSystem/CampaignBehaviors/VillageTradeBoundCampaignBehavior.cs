// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.VillageTradeBoundCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  internal class VillageTradeBoundCampaignBehavior : CampaignBehaviorBase
  {
    public const float TradeBoundDistanceLimit = 150f;

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.WarDeclared));
      CampaignEvents.MakePeace.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnMakePeace));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.ClanChangedKingdom));
      CampaignEvents.OnClanDestroyedEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnClanDestroyed));
    }

    private void OnClanDestroyed(Clan obj) => this.UpdateTradeBounds();

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void ClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      this.UpdateTradeBounds();
    }

    private void OnGameLoaded(CampaignGameStarter obj) => this.UpdateTradeBounds();

    private void OnMakePeace(
      IFaction faction1,
      IFaction faction2,
      MakePeaceAction.MakePeaceDetail detail)
    {
      this.UpdateTradeBounds();
    }

    private void WarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail declareWarDetail)
    {
      this.UpdateTradeBounds();
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      this.UpdateTradeBounds();
    }

    public void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      this.UpdateTradeBounds();
    }

    private void UpdateTradeBounds()
    {
      foreach (Town allCastle in (List<Town>) Campaign.Current.AllCastles)
      {
        foreach (Village village in (List<Village>) allCastle.Villages)
          this.TryToAssignTradeBoundForVillage(village);
      }
    }

    private void TryToAssignTradeBoundForVillage(Village village)
    {
      Settlement nearestSettlement1 = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (x => x.IsTown && x.Town.MapFaction == village.Settlement.MapFaction), (IMapPoint) village.Settlement);
      if (nearestSettlement1 != null && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(nearestSettlement1, village.Settlement) < 150.0)
      {
        village.TradeBound = nearestSettlement1;
      }
      else
      {
        Settlement nearestSettlement2 = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (x => x.IsTown && x.Town.MapFaction != village.Settlement.MapFaction && !x.Town.MapFaction.IsAtWarWith(village.Settlement.MapFaction) && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(x, village.Settlement) <= 150.0), (IMapPoint) village.Settlement);
        if (nearestSettlement2 != null && (double) Campaign.Current.Models.MapDistanceModel.GetDistance(nearestSettlement2, village.Settlement) < 150.0)
          village.TradeBound = nearestSettlement2;
        else
          village.TradeBound = (Settlement) null;
      }
    }
  }
}
