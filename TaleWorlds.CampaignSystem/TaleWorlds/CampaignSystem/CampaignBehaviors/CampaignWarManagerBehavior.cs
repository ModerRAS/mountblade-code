// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CampaignWarManagerBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CampaignWarManagerBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.MapEventEnded));
    }

    private void MapEventEnded(MapEvent mapEvent)
    {
      if (mapEvent.AttackerSide.LeaderParty.MapFaction == null || mapEvent.AttackerSide.LeaderParty.MapFaction.IsBanditFaction || mapEvent.DefenderSide.LeaderParty.MapFaction == null || mapEvent.DefenderSide.LeaderParty.MapFaction.IsBanditFaction)
        return;
      IFaction mapFaction1 = mapEvent.AttackerSide.MapFaction;
      IFaction mapFaction2 = mapEvent.DefenderSide.MapFaction;
      if (mapFaction1.MapFaction == mapFaction2.MapFaction)
        return;
      StanceLink stanceWith = mapFaction1.GetStanceWith(mapFaction2);
      stanceWith.Casualties1 += stanceWith.Faction1 == mapFaction1 ? mapEvent.AttackerSide.Casualties : mapEvent.DefenderSide.Casualties;
      stanceWith.Casualties2 += stanceWith.Faction2 == mapFaction1 ? mapEvent.AttackerSide.Casualties : mapEvent.DefenderSide.Casualties;
      if (mapEvent.MapEventSettlement == null || mapEvent.BattleState != BattleState.AttackerVictory)
        return;
      if (mapEvent.MapEventSettlement.IsVillage && mapEvent.MapEventSettlement.Village.VillageState == Village.VillageStates.Looted)
      {
        if (mapFaction1 == stanceWith.Faction1)
          ++stanceWith.SuccessfulRaids1;
        else
          ++stanceWith.SuccessfulRaids2;
      }
      else
      {
        if (!mapEvent.MapEventSettlement.IsFortification || mapEvent.EventType != MapEvent.BattleTypes.Siege)
          return;
        if (mapFaction1 == stanceWith.Faction1)
          ++stanceWith.SuccessfulSieges1;
        else
          ++stanceWith.SuccessfulSieges2;
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
