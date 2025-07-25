// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.TroopSupplierProbabilityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class TroopSupplierProbabilityModel : GameModel
  {
    public abstract void EnqueueTroopSpawnProbabilitiesAccordingToUnitSpawnPrioritization(
      MapEventParty battleParty,
      FlattenedTroopRoster priorityTroops,
      bool includePlayers,
      int sizeOfSide,
      bool forcePriorityTroops,
      List<(FlattenedTroopRosterElement, MapEventParty, float)> priorityList);
  }
}
