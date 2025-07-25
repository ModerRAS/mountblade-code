// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleTroopSupplier
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleTroopSupplier : IMissionTroopSupplier
  {
    private readonly CustomBattleCombatant _customBattleCombatant;
    private PriorityQueue<float, BasicCharacterObject> _characters;
    private int _numAllocated;
    private int _numWounded;
    private int _numKilled;
    private int _numRouted;
    private Func<BasicCharacterObject, bool> _customAllocationConditions;
    private bool _anyTroopRemainsToBeSupplied = true;
    private readonly bool _isPlayerSide;
    private readonly bool _isPlayerGeneral;
    private readonly bool _isSallyOut;

    public CustomBattleTroopSupplier(
      CustomBattleCombatant customBattleCombatant,
      bool isPlayerSide,
      bool isPlayerGeneral,
      bool isSallyOut,
      Func<BasicCharacterObject, bool> customAllocationConditions = null)
    {
      this._customBattleCombatant = customBattleCombatant;
      this._customAllocationConditions = customAllocationConditions;
      this._isPlayerSide = isPlayerSide;
      this._isPlayerGeneral = isPlayerSide & isPlayerGeneral;
      this._isSallyOut = isSallyOut;
      this.ArrangePriorities();
    }

    private void ArrangePriorities()
    {
      this._characters = new PriorityQueue<float, BasicCharacterObject>((IComparer<float>) new GenericComparer<float>());
      int[] troopCountByFormationType = new int[8];
      int[] enqueuedTroopCountByFormationType = new int[8];
      for (int i = 0; i < 8; i++)
        troopCountByFormationType[i] = this._customBattleCombatant.Characters.Count<BasicCharacterObject>((Func<BasicCharacterObject, bool>) (character => character.DefaultFormationClass == (FormationClass) i));
      UnitSpawnPrioritizations unitSpawnPrioritization = this._isPlayerSide ? Game.Current.UnitSpawnPrioritization : UnitSpawnPrioritizations.HighLevel;
      int troopCountTotal = ((IEnumerable<int>) troopCountByFormationType).Sum();
      float heroProbability = 1000f;
      foreach (BasicCharacterObject character in this._customBattleCombatant.Characters)
      {
        FormationClass formationClass = character.GetFormationClass();
        float priority = !this._isSallyOut ? this.GetDefaultProbabilityOfTroop(character, troopCountTotal, unitSpawnPrioritization, ref heroProbability, ref troopCountByFormationType, ref enqueuedTroopCountByFormationType) : this.GetSallyOutAmbushProbabilityOfTroop(character, troopCountTotal, ref heroProbability);
        --troopCountByFormationType[(int) formationClass];
        ++enqueuedTroopCountByFormationType[(int) formationClass];
        this._characters.Enqueue(priority, character);
      }
    }

    private float GetSallyOutAmbushProbabilityOfTroop(
      BasicCharacterObject character,
      int troopCountTotal,
      ref float heroProbability)
    {
      float num = 0.0f;
      float probabilityOfTroop;
      if (character.IsHero)
      {
        probabilityOfTroop = heroProbability--;
      }
      else
      {
        probabilityOfTroop = num + (float) character.Level;
        if (character.HasMount())
          probabilityOfTroop += 100f;
      }
      return probabilityOfTroop;
    }

    private float GetDefaultProbabilityOfTroop(
      BasicCharacterObject character,
      int troopCountTotal,
      UnitSpawnPrioritizations unitSpawnPrioritization,
      ref float heroProbability,
      ref int[] troopCountByFormationType,
      ref int[] enqueuedTroopCountByFormationType)
    {
      FormationClass formationClass = character.GetFormationClass();
      float num = (float) troopCountByFormationType[(int) formationClass] / (unitSpawnPrioritization == UnitSpawnPrioritizations.Homogeneous ? (float) (enqueuedTroopCountByFormationType[(int) formationClass] + 1) : (float) troopCountTotal);
      float probabilityOfTroop = character.IsHero ? heroProbability-- : num;
      if (!character.IsHero && (unitSpawnPrioritization == UnitSpawnPrioritizations.HighLevel || unitSpawnPrioritization == UnitSpawnPrioritizations.LowLevel))
      {
        probabilityOfTroop += (float) character.Level;
        if (unitSpawnPrioritization == UnitSpawnPrioritizations.LowLevel)
          probabilityOfTroop *= -1f;
      }
      return probabilityOfTroop;
    }

    public IEnumerable<IAgentOriginBase> SupplyTroops(int numberToAllocate)
    {
      List<BasicCharacterObject> basicCharacterObjectList = this.AllocateTroops(numberToAllocate);
      CustomBattleAgentOrigin[] battleAgentOriginArray = new CustomBattleAgentOrigin[basicCharacterObjectList.Count];
      this._numAllocated += basicCharacterObjectList.Count;
      for (int index = 0; index < battleAgentOriginArray.Length; ++index)
      {
        UniqueTroopDescriptor uniqueNo = new UniqueTroopDescriptor(Game.Current.NextUniqueTroopSeed);
        battleAgentOriginArray[index] = new CustomBattleAgentOrigin(this._customBattleCombatant, basicCharacterObjectList[index], this, this._isPlayerSide, index, uniqueNo);
      }
      if (battleAgentOriginArray.Length < numberToAllocate)
        this._anyTroopRemainsToBeSupplied = false;
      return (IEnumerable<IAgentOriginBase>) battleAgentOriginArray;
    }

    public IEnumerable<IAgentOriginBase> GetAllTroops()
    {
      CustomBattleAgentOrigin[] allTroops = new CustomBattleAgentOrigin[this._customBattleCombatant.Characters.Count<BasicCharacterObject>()];
      int index = 0;
      foreach (BasicCharacterObject character in this._customBattleCombatant.Characters)
      {
        allTroops[index] = new CustomBattleAgentOrigin(this._customBattleCombatant, character, this, this._isPlayerSide);
        ++index;
      }
      return (IEnumerable<IAgentOriginBase>) allTroops;
    }

    public BasicCharacterObject GetGeneralCharacter() => this._customBattleCombatant.General;

    private List<BasicCharacterObject> AllocateTroops(int numberToAllocate)
    {
      if (numberToAllocate > this._characters.Count)
        numberToAllocate = this._characters.Count;
      List<BasicCharacterObject> basicCharacterObjectList = new List<BasicCharacterObject>();
      while (numberToAllocate > 0 && this._characters.Count > 0)
      {
        BasicCharacterObject basicCharacterObject = this._characters.DequeueValue();
        if (this._customAllocationConditions == null || this._customAllocationConditions(basicCharacterObject))
        {
          basicCharacterObjectList.Add(basicCharacterObject);
          --numberToAllocate;
        }
      }
      return basicCharacterObjectList;
    }

    public void OnTroopWounded() => ++this._numWounded;

    public void OnTroopKilled() => ++this._numKilled;

    public void OnTroopRouted() => ++this._numRouted;

    public int NumRemovedTroops => this._numWounded + this._numKilled + this._numRouted;

    public int NumTroopsNotSupplied => this._characters.Count - this._numAllocated;

    public int GetNumberOfPlayerControllableTroops() => this._numAllocated;

    public bool AnyTroopRemainsToBeSupplied => this._anyTroopRemainsToBeSupplied;
  }
}
