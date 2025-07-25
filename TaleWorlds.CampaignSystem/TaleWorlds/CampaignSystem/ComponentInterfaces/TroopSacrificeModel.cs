// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.TroopSacrificeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class TroopSacrificeModel : GameModel
  {
    public abstract int BreakOutArmyLeaderRelationPenalty { get; }

    public abstract int BreakOutArmyMemberRelationPenalty { get; }

    public abstract int GetLostTroopCountForBreakingInBesiegedSettlement(
      MobileParty party,
      SiegeEvent siegeEvent);

    public abstract int GetLostTroopCountForBreakingOutOfBesiegedSettlement(
      MobileParty party,
      SiegeEvent siegeEvent);

    public abstract int GetNumberOfTroopsSacrificedForTryingToGetAway(
      BattleSideEnum battleSide,
      MapEvent mapEvent);
  }
}
