// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TroopSuppliers.PartyGroupTroopSupplier
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.TroopSuppliers
{
  public class PartyGroupTroopSupplier : IMissionTroopSupplier
  {
    private readonly int _initialTroopCount;
    private int _numAllocated;
    private int _numWounded;
    private int _numKilled;
    private int _numRouted;
    private Func<UniqueTroopDescriptor, MapEventParty, bool> _customAllocationConditions;
    private bool _anyTroopRemainsToBeSupplied = true;

    internal MapEventSide PartyGroup { get; private set; }

    public PartyGroupTroopSupplier(
      MapEvent mapEvent,
      BattleSideEnum side,
      FlattenedTroopRoster priorTroops = null,
      Func<UniqueTroopDescriptor, MapEventParty, bool> customAllocationConditions = null)
    {
      this._customAllocationConditions = customAllocationConditions;
      this.PartyGroup = mapEvent.GetMapEventSide(side);
      this._initialTroopCount = this.PartyGroup.TroopCount;
      this.PartyGroup.MakeReadyForMission(priorTroops);
    }

    public IEnumerable<IAgentOriginBase> SupplyTroops(int numberToAllocate)
    {
      List<UniqueTroopDescriptor> troopsList = (List<UniqueTroopDescriptor>) null;
      this.PartyGroup.AllocateTroops(ref troopsList, numberToAllocate, this._customAllocationConditions);
      PartyGroupAgentOrigin[] groupAgentOriginArray = new PartyGroupAgentOrigin[troopsList.Count];
      this._numAllocated += troopsList.Count;
      for (int index = 0; index < groupAgentOriginArray.Length; ++index)
        groupAgentOriginArray[index] = new PartyGroupAgentOrigin(this, troopsList[index], index);
      if (groupAgentOriginArray.Length < numberToAllocate)
        this._anyTroopRemainsToBeSupplied = false;
      return (IEnumerable<IAgentOriginBase>) groupAgentOriginArray;
    }

    public IEnumerable<IAgentOriginBase> GetAllTroops()
    {
      List<UniqueTroopDescriptor> troopsList = (List<UniqueTroopDescriptor>) null;
      this.PartyGroup.GetAllTroops(ref troopsList);
      PartyGroupAgentOrigin[] allTroops = new PartyGroupAgentOrigin[troopsList.Count];
      for (int index = 0; index < allTroops.Length; ++index)
        allTroops[index] = new PartyGroupAgentOrigin(this, troopsList[index], index);
      return (IEnumerable<IAgentOriginBase>) allTroops;
    }

    public BasicCharacterObject GetGeneralCharacter() => this.PartyGroup.LeaderParty.General;

    public int NumRemovedTroops => this._numWounded + this._numKilled + this._numRouted;

    public int NumTroopsNotSupplied => this._initialTroopCount - this._numAllocated;

    public bool AnyTroopRemainsToBeSupplied => this._anyTroopRemainsToBeSupplied;

    public int GetNumberOfPlayerControllableTroops()
    {
      int controllableTroops = 0;
      foreach (MapEventParty party1 in (List<MapEventParty>) this.PartyGroup.Parties)
      {
        PartyBase party2 = party1.Party;
        if (PartyGroupAgentOrigin.IsPartyUnderPlayerCommand(party2) || party2.Side == PartyBase.MainParty.Side && this.PartyGroup.MapEvent.IsPlayerSergeant())
          controllableTroops += party2.NumberOfHealthyMembers;
      }
      return controllableTroops;
    }

    public void OnTroopWounded(UniqueTroopDescriptor troopDescriptor)
    {
      ++this._numWounded;
      this.PartyGroup.OnTroopWounded(troopDescriptor);
    }

    public void OnTroopKilled(UniqueTroopDescriptor troopDescriptor)
    {
      ++this._numKilled;
      this.PartyGroup.OnTroopKilled(troopDescriptor);
    }

    public void OnTroopRouted(UniqueTroopDescriptor troopDescriptor)
    {
      ++this._numRouted;
      this.PartyGroup.OnTroopRouted(troopDescriptor);
    }

    internal CharacterObject GetTroop(UniqueTroopDescriptor troopDescriptor)
    {
      return this.PartyGroup.GetAllocatedTroop(troopDescriptor) ?? this.PartyGroup.GetReadyTroop(troopDescriptor);
    }

    public PartyBase GetParty(UniqueTroopDescriptor troopDescriptor)
    {
      return this.PartyGroup.GetAllocatedTroopParty(troopDescriptor) ?? this.PartyGroup.GetReadyTroopParty(troopDescriptor);
    }

    public void OnTroopScoreHit(
      UniqueTroopDescriptor descriptor,
      BasicCharacterObject attackedCharacter,
      int damage,
      bool isFatal,
      bool isTeamKill,
      WeaponComponentData attackerWeapon)
    {
      this.PartyGroup.OnTroopScoreHit(descriptor, (CharacterObject) attackedCharacter, damage, isFatal, isTeamKill, attackerWeapon, false);
    }
  }
}
