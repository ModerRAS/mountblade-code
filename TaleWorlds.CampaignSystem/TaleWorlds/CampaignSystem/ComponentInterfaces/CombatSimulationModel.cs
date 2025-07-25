// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.CombatSimulationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class CombatSimulationModel : GameModel
  {
    public abstract int SimulateHit(
      CharacterObject strikerTroop,
      CharacterObject struckTroop,
      PartyBase strikerParty,
      PartyBase struckParty,
      float strikerAdvantage,
      MapEvent battle);

    public abstract (int defenderRounds, int attackerRounds) GetSimulationRoundsForBattle(
      MapEvent mapEvent,
      int numDefenders,
      int numAttackers);

    public abstract int GetNumberOfEquipmentsBuilt(Settlement settlement);

    public abstract float GetMaximumSiegeEquipmentProgress(Settlement settlement);

    public abstract float GetSettlementAdvantage(Settlement settlement);

    public abstract (float defenderAdvantage, float attackerAdvantage) GetBattleAdvantage(
      PartyBase defenderParty,
      PartyBase attackerParty,
      MapEvent.BattleTypes mapEventType,
      Settlement settlement);
  }
}
