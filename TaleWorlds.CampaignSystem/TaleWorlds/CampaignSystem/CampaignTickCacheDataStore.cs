// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignTickCacheDataStore
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Threading;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class CampaignTickCacheDataStore
  {
    private CampaignTickCacheDataStore.PartyTickCachePerParty[] _cacheData;
    private MobileParty[] _gridChangeMobilePartyList;
    private MobileParty[] _exitingSettlementMobilePartyList;
    private int[] _movingPartyIndices;
    private int _currentFrameMovingPartyCount;
    private int[] _stationaryPartyIndices;
    private int _currentFrameStationaryPartyCount;
    private int[] _movingArmyLeaderPartyIndices;
    private int _currentFrameMovingArmyLeaderCount;
    private int _currentTotalMobilePartyCapacity;
    private int _gridChangeCount;
    private int _exitingSettlementCount;
    private float _currentDt;
    private float _currentRealDt;
    private readonly TWParallel.ParallelForAuxPredicate _parallelInitializeCachedPartyVariablesPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelCacheTargetPartyVariablesAtFrameStartPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelArrangePartyIndicesPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelTickArmiesPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelTickMovingPartiesPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelTickStationaryPartiesPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelCheckExitingSettlementsPredicate;
    private readonly CampaignTickCacheDataStore.MobilePartyComparer _mobilePartyComparer;

    internal CampaignTickCacheDataStore()
    {
      this._mobilePartyComparer = new CampaignTickCacheDataStore.MobilePartyComparer();
      this._parallelInitializeCachedPartyVariablesPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelInitializeCachedPartyVariables);
      this._parallelCacheTargetPartyVariablesAtFrameStartPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelCacheTargetPartyVariablesAtFrameStart);
      this._parallelArrangePartyIndicesPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelArrangePartyIndices);
      this._parallelTickArmiesPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelTickArmies);
      this._parallelTickMovingPartiesPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelTickMovingParties);
      this._parallelTickStationaryPartiesPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelTickStationaryParties);
      this._parallelCheckExitingSettlementsPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelCheckExitingSettlements);
    }

    internal void ValidateMobilePartyTickDataCache(int currentTotalMobilePartyCount)
    {
      if (this._currentTotalMobilePartyCapacity <= currentTotalMobilePartyCount)
        this.InitializeCacheArrays();
      this._currentFrameMovingPartyCount = -1;
      this._currentFrameStationaryPartyCount = -1;
      this._currentFrameMovingArmyLeaderCount = -1;
      this._gridChangeCount = -1;
      this._exitingSettlementCount = -1;
    }

    private void InitializeCacheArrays()
    {
      int length = (int) ((double) this._currentTotalMobilePartyCapacity * 2.0);
      this._cacheData = new CampaignTickCacheDataStore.PartyTickCachePerParty[length];
      this._gridChangeMobilePartyList = new MobileParty[length];
      this._exitingSettlementMobilePartyList = new MobileParty[length];
      this._currentTotalMobilePartyCapacity = length;
      this._movingPartyIndices = new int[length];
      this._stationaryPartyIndices = new int[length];
      this._movingArmyLeaderPartyIndices = new int[length];
    }

    internal void InitializeDataCache()
    {
      this._currentFrameMovingArmyLeaderCount = Campaign.Current.MobileParties.Count;
      this._currentTotalMobilePartyCapacity = Campaign.Current.MobileParties.Count;
      this._currentFrameStationaryPartyCount = Campaign.Current.MobileParties.Count;
      this.InitializeCacheArrays();
    }

    private void ParallelCheckExitingSettlements(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
        Campaign.Current.MobileParties[index].CheckExitingSettlementParallel(ref this._exitingSettlementCount, ref this._exitingSettlementMobilePartyList);
    }

    private void ParallelInitializeCachedPartyVariables(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        MobileParty mobileParty = Campaign.Current.MobileParties[index];
        this._cacheData[index].MobileParty = mobileParty;
        mobileParty.InitializeCachedPartyVariables(ref this._cacheData[index].LocalVariables);
      }
    }

    private void ParallelCacheTargetPartyVariablesAtFrameStart(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
        this._cacheData[index].MobileParty.Ai.CacheTargetPartyVariablesAtFrameStart(ref this._cacheData[index].LocalVariables);
    }

    private void ParallelArrangePartyIndices(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        MobileParty.CachedPartyVariables localVariables = this._cacheData[index].LocalVariables;
        if (localVariables.IsMoving)
        {
          if (localVariables.IsArmyLeader)
            this._movingArmyLeaderPartyIndices[Interlocked.Increment(ref this._currentFrameMovingArmyLeaderCount)] = index;
          else
            this._movingPartyIndices[Interlocked.Increment(ref this._currentFrameMovingPartyCount)] = index;
        }
        else
          this._stationaryPartyIndices[Interlocked.Increment(ref this._currentFrameStationaryPartyCount)] = index;
      }
    }

    private void ParallelTickArmies(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        CampaignTickCacheDataStore.PartyTickCachePerParty tickCachePerParty = this._cacheData[this._movingArmyLeaderPartyIndices[index]];
        MobileParty mobileParty = tickCachePerParty.MobileParty;
        MobileParty.CachedPartyVariables localVariables = tickCachePerParty.LocalVariables;
        mobileParty.TickForMovingArmyLeader(ref localVariables, this._currentDt, this._currentRealDt);
        mobileParty.TickForMobileParty2(ref localVariables, this._currentRealDt, ref this._gridChangeCount, ref this._gridChangeMobilePartyList);
        mobileParty.ValidateSpeed();
      }
    }

    private void ParallelTickMovingParties(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        CampaignTickCacheDataStore.PartyTickCachePerParty tickCachePerParty = this._cacheData[this._movingPartyIndices[index]];
        MobileParty mobileParty = tickCachePerParty.MobileParty;
        MobileParty.CachedPartyVariables localVariables = tickCachePerParty.LocalVariables;
        mobileParty.TickForMovingMobileParty(ref localVariables, this._currentDt, this._currentRealDt);
        mobileParty.TickForMobileParty2(ref localVariables, this._currentRealDt, ref this._gridChangeCount, ref this._gridChangeMobilePartyList);
      }
    }

    private void ParallelTickStationaryParties(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        CampaignTickCacheDataStore.PartyTickCachePerParty tickCachePerParty = this._cacheData[this._stationaryPartyIndices[index]];
        MobileParty mobileParty = tickCachePerParty.MobileParty;
        MobileParty.CachedPartyVariables localVariables = tickCachePerParty.LocalVariables;
        mobileParty.TickForStationaryMobileParty(ref localVariables, this._currentDt, this._currentRealDt);
        mobileParty.TickForMobileParty2(ref localVariables, this._currentRealDt, ref this._gridChangeCount, ref this._gridChangeMobilePartyList);
      }
    }

    internal void Tick()
    {
      TWParallel.For(0, Campaign.Current.MobileParties.Count, this._parallelCheckExitingSettlementsPredicate);
      Array.Sort<MobileParty>(this._exitingSettlementMobilePartyList, 0, this._exitingSettlementCount + 1, (IComparer<MobileParty>) this._mobilePartyComparer);
      for (int index = 0; index < this._exitingSettlementCount + 1; ++index)
        LeaveSettlementAction.ApplyForParty(this._exitingSettlementMobilePartyList[index]);
    }

    internal void RealTick(float dt, float realDt)
    {
      this._currentDt = dt;
      this._currentRealDt = realDt;
      this.ValidateMobilePartyTickDataCache(Campaign.Current.MobileParties.Count);
      int count = Campaign.Current.MobileParties.Count;
      TWParallel.For(0, count, this._parallelInitializeCachedPartyVariablesPredicate);
      TWParallel.For(0, count, this._parallelCacheTargetPartyVariablesAtFrameStartPredicate);
      TWParallel.For(0, count, this._parallelArrangePartyIndicesPredicate);
      TWParallel.For(0, this._currentFrameMovingArmyLeaderCount + 1, this._parallelTickArmiesPredicate);
      TWParallel.For(0, this._currentFrameMovingPartyCount + 1, this._parallelTickMovingPartiesPredicate);
      TWParallel.For(0, this._currentFrameStationaryPartyCount + 1, this._parallelTickStationaryPartiesPredicate);
      this.UpdateVisibilitiesAroundMainParty();
      Array.Sort<MobileParty>(this._gridChangeMobilePartyList, 0, this._gridChangeCount + 1, (IComparer<MobileParty>) this._mobilePartyComparer);
      Campaign current = Campaign.Current;
      for (int index = 0; index < this._gridChangeCount + 1; ++index)
        current.MobilePartyLocator.UpdateLocator(this._gridChangeMobilePartyList[index]);
    }

    private void UpdateVisibilitiesAroundMainParty()
    {
      if (!MobileParty.MainParty.CurrentNavigationFace.IsValid() || Campaign.Current.GetSimplifiedTimeControlMode() == CampaignTimeControlMode.Stop)
        return;
      float seeingRange = MobileParty.MainParty.SeeingRange;
      LocatableSearchData<MobileParty> data1 = MobileParty.StartFindingLocatablesAroundPosition(MobileParty.MainParty.Position2D, seeingRange + 25f);
      for (MobileParty nextLocatable = MobileParty.FindNextLocatable(ref data1); nextLocatable != null; nextLocatable = MobileParty.FindNextLocatable(ref data1))
      {
        if (!nextLocatable.IsMilitia && !nextLocatable.IsGarrison)
          nextLocatable.Party.UpdateVisibilityAndInspected(seeingRange);
      }
      LocatableSearchData<Settlement> data2 = Settlement.StartFindingLocatablesAroundPosition(MobileParty.MainParty.Position2D, seeingRange + 25f);
      for (Settlement nextLocatable = Settlement.FindNextLocatable(ref data2); nextLocatable != null; nextLocatable = Settlement.FindNextLocatable(ref data2))
        nextLocatable.Party.UpdateVisibilityAndInspected(seeingRange);
    }

    private struct PartyTickCachePerParty
    {
      internal MobileParty MobileParty;
      internal MobileParty.CachedPartyVariables LocalVariables;
    }

    private class MobilePartyComparer : IComparer<MobileParty>
    {
      public int Compare(MobileParty x, MobileParty y)
      {
        return x.Id.InternalValue.CompareTo(y.Id.InternalValue);
      }
    }
  }
}
