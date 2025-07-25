// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.EncounterModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class EncounterModel : GameModel
  {
    public abstract float EstimatedMaximumMobilePartySpeedExceptPlayer { get; }

    public abstract float NeededMaximumDistanceForEncounteringMobileParty { get; }

    public abstract float MaximumAllowedDistanceForEncounteringMobilePartyInArmy { get; }

    public abstract float NeededMaximumDistanceForEncounteringTown { get; }

    public abstract float NeededMaximumDistanceForEncounteringVillage { get; }

    public abstract bool IsEncounterExemptFromHostileActions(PartyBase side1, PartyBase side2);

    public abstract Hero GetLeaderOfSiegeEvent(SiegeEvent siegeEvent, BattleSideEnum side);

    public abstract Hero GetLeaderOfMapEvent(MapEvent mapEvent, BattleSideEnum side);

    public abstract int GetCharacterSergeantScore(Hero hero);

    public abstract IEnumerable<PartyBase> GetDefenderPartiesOfSettlement(
      Settlement settlement,
      MapEvent.BattleTypes mapEventType);

    public abstract PartyBase GetNextDefenderPartyOfSettlement(
      Settlement settlement,
      ref int partyIndex,
      MapEvent.BattleTypes mapEventType);

    public abstract MapEventComponent CreateMapEventComponentForEncounter(
      PartyBase attackerParty,
      PartyBase defenderParty,
      MapEvent.BattleTypes battleType);
  }
}
