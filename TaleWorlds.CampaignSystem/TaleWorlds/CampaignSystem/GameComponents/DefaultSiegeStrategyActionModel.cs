// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSiegeStrategyActionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSiegeStrategyActionModel : SiegeStrategyActionModel
  {
    private List<(SiegeEngineType, int)> _prepareAssaultEngineList;
    private List<(SiegeEngineType, int)> _breachWallsEngineList;
    private List<(SiegeEngineType, int)> _wearOutDefendersEngineList;
    private List<(SiegeEngineType, int)> _prepareAgainstAssaultEngineList;
    private List<(SiegeEngineType, int)> _counterBombardmentEngineList;

    public override void GetLogicalActionForStrategy(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex)
    {
      siegeAction = SiegeStrategyActionModel.SiegeAction.Hold;
      siegeEngineType = (SiegeEngineType) null;
      deploymentIndex = -1;
      reserveIndex = -1;
      SiegeStrategy siegeStrategy = side.SiegeStrategy;
      if (siegeStrategy == DefaultSiegeStrategies.Custom)
        return;
      if (siegeStrategy == DefaultSiegeStrategies.PreserveStrength)
        this.GetLogicalActionForPreserveStrengthStrategy(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex);
      else if (side.BattleSide == BattleSideEnum.Attacker)
      {
        if (siegeStrategy == DefaultSiegeStrategies.PrepareAssault)
          this.GetLogicalActionForPrepareAssaultStrategy(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex);
        else if (siegeStrategy == DefaultSiegeStrategies.BreachWalls)
        {
          this.GetLogicalActionForBreachWallsStrategy(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex);
        }
        else
        {
          if (siegeStrategy != DefaultSiegeStrategies.WearOutDefenders)
            return;
          this.GetLogicalActionForWearOutDefendersStrategy(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex);
        }
      }
      else
      {
        if (side.BattleSide != BattleSideEnum.Defender)
          return;
        if (siegeStrategy == DefaultSiegeStrategies.PrepareAgainstAssault)
        {
          this.GetLogicalActionForPrepareAgainstAssaultStrategy(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex);
        }
        else
        {
          if (siegeStrategy != DefaultSiegeStrategies.CounterBombardment)
            return;
          this.GetLogicalActionForCounterBombardmentStrategy(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex);
        }
      }
    }

    private bool CheckIfStrategyListSatisfied(
      ISiegeEventSide side,
      List<(SiegeEngineType, int)> engineList)
    {
      SiegeEvent.SiegeEnginesContainer siegeEngines = side.SiegeEngines;
      foreach ((SiegeEngineType, int) engine in engineList)
      {
        int num;
        siegeEngines.DeployedSiegeEngineTypesCount.TryGetValue(engine.Item1, out num);
        if (num != engine.Item2)
          return false;
      }
      return true;
    }

    private void GetLogicalActionToCompleteEngineList(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex,
      List<(SiegeEngineType, int)> engineList)
    {
      siegeAction = SiegeStrategyActionModel.SiegeAction.Hold;
      siegeEngineType = (SiegeEngineType) null;
      deploymentIndex = -1;
      reserveIndex = -1;
      if (this.CheckIfStrategyListSatisfied(side, engineList))
        return;
      SiegeEvent.SiegeEnginesContainer siegeEngines = side.SiegeEngines;
      int num1 = -1;
      int num2 = -1;
      foreach (KeyValuePair<SiegeEngineType, int> keyValuePair in siegeEngines.DeployedSiegeEngineTypesCount)
      {
        int num3 = -1;
        foreach ((SiegeEngineType, int) engine in engineList)
        {
          if (keyValuePair.Key == engine.Item1)
          {
            num3 = engine.Item2;
            break;
          }
        }
        if (num3 < 0 || num3 < keyValuePair.Value)
        {
          SiegeEngineType excessSiegeEngineType = keyValuePair.Key;
          Func<SiegeEvent.SiegeEngineConstructionProgress, bool> predicate = (Func<SiegeEvent.SiegeEngineConstructionProgress, bool>) (engine => engine != null && engine.SiegeEngine == excessSiegeEngineType && engine.IsActive && (double) engine.Hitpoints > 0.0);
          if (num2 == -1 && excessSiegeEngineType.IsRanged)
            num2 = ((IReadOnlyList<SiegeEvent.SiegeEngineConstructionProgress>) siegeEngines.DeployedRangedSiegeEngines).FindIndex<SiegeEvent.SiegeEngineConstructionProgress>(predicate);
          else if (num1 == -1 && !excessSiegeEngineType.IsRanged)
            num1 = ((IReadOnlyList<SiegeEvent.SiegeEngineConstructionProgress>) siegeEngines.DeployedMeleeSiegeEngines).FindIndex<SiegeEvent.SiegeEngineConstructionProgress>(predicate);
        }
      }
      int index1 = ((IReadOnlyList<SiegeEvent.SiegeEngineConstructionProgress>) siegeEngines.DeployedMeleeSiegeEngines).FindIndex<SiegeEvent.SiegeEngineConstructionProgress>((Func<SiegeEvent.SiegeEngineConstructionProgress, bool>) (engine => engine == null));
      int index2 = ((IReadOnlyList<SiegeEvent.SiegeEngineConstructionProgress>) siegeEngines.DeployedRangedSiegeEngines).FindIndex<SiegeEvent.SiegeEngineConstructionProgress>((Func<SiegeEvent.SiegeEngineConstructionProgress, bool>) (engine => engine == null));
      if (index1 == -1 && index2 == -1 && num1 == -1 && num2 == -1)
        return;
      int num4 = index2 != -1 ? index2 : num2;
      int num5 = index1 != -1 ? index1 : num1;
      if (!siegeEngines.ReservedSiegeEngines.IsEmpty<SiegeEvent.SiegeEngineConstructionProgress>())
      {
        foreach ((SiegeEngineType, int) engine in engineList)
        {
          int num6;
          siegeEngines.DeployedSiegeEngineTypesCount.TryGetValue(engine.Item1, out num6);
          if (num6 < engine.Item2)
          {
            SiegeEngineType slackEngineType = engine.Item1;
            int num7;
            siegeEngines.ReservedSiegeEngineTypesCount.TryGetValue(slackEngineType, out num7);
            if (num7 > 0)
            {
              int num8 = slackEngineType.IsRanged ? num4 : num5;
              if (num8 != -1)
              {
                siegeAction = SiegeStrategyActionModel.SiegeAction.DeploySiegeEngineFromReserve;
                siegeEngineType = slackEngineType;
                reserveIndex = siegeEngines.ReservedSiegeEngines.FindIndex((Predicate<SiegeEvent.SiegeEngineConstructionProgress>) (reservedEngine => reservedEngine.SiegeEngine == slackEngineType));
                deploymentIndex = num8;
                return;
              }
            }
          }
        }
      }
      if (side.BattleSide == BattleSideEnum.Defender || (side as BesiegerCamp).IsPreparationComplete)
      {
        bool flag = false;
        foreach (SiegeEvent.SiegeEngineConstructionProgress deployedSiegeEngine in (List<SiegeEvent.SiegeEngineConstructionProgress>) siegeEngines.DeployedSiegeEngines)
        {
          if ((double) deployedSiegeEngine.Progress < 1.0)
          {
            flag = true;
            break;
          }
        }
        if (!flag)
        {
          foreach ((SiegeEngineType, int) engine in engineList)
          {
            int num9;
            siegeEngines.DeployedSiegeEngineTypesCount.TryGetValue(engine.Item1, out num9);
            if (num9 < engine.Item2)
            {
              SiegeEngineType siegeEngineType1 = engine.Item1;
              int num10 = siegeEngineType1.IsRanged ? num4 : num5;
              if (num10 != -1)
              {
                siegeAction = SiegeStrategyActionModel.SiegeAction.ConstructNewSiegeEngine;
                siegeEngineType = siegeEngineType1;
                deploymentIndex = num10;
                return;
              }
            }
          }
        }
      }
      if (index1 != -1)
      {
        int index3 = siegeEngines.ReservedSiegeEngines.FindIndex((Predicate<SiegeEvent.SiegeEngineConstructionProgress>) (engine => !engine.SiegeEngine.IsRanged));
        if (index3 != -1)
        {
          siegeAction = SiegeStrategyActionModel.SiegeAction.DeploySiegeEngineFromReserve;
          siegeEngineType = siegeEngines.ReservedSiegeEngines[index3].SiegeEngine;
          reserveIndex = index3;
          deploymentIndex = index1;
          return;
        }
      }
      if (index2 == -1)
        return;
      int index4 = siegeEngines.ReservedSiegeEngines.FindIndex((Predicate<SiegeEvent.SiegeEngineConstructionProgress>) (engine => engine.SiegeEngine.IsRanged));
      if (index4 == -1)
        return;
      siegeAction = SiegeStrategyActionModel.SiegeAction.DeploySiegeEngineFromReserve;
      siegeEngineType = siegeEngines.ReservedSiegeEngines[index4].SiegeEngine;
      reserveIndex = index4;
      deploymentIndex = index2;
    }

    private void GetLogicalActionForPreserveStrengthStrategy(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex)
    {
      SiegeEvent.SiegeEnginesContainer siegeEngines = side.SiegeEngines;
      for (int index = 0; index < side.SiegeEngines.DeployedRangedSiegeEngines.Length; ++index)
      {
        SiegeEvent.SiegeEngineConstructionProgress rangedSiegeEngine = siegeEngines.DeployedRangedSiegeEngines[index];
        if (rangedSiegeEngine != null && rangedSiegeEngine.IsActive && (double) rangedSiegeEngine.Hitpoints > 0.0)
        {
          siegeAction = SiegeStrategyActionModel.SiegeAction.MoveSiegeEngineToReserve;
          siegeEngineType = rangedSiegeEngine.SiegeEngine;
          deploymentIndex = index;
          reserveIndex = -1;
          return;
        }
      }
      for (int index = 0; index < side.SiegeEngines.DeployedMeleeSiegeEngines.Length; ++index)
      {
        SiegeEvent.SiegeEngineConstructionProgress meleeSiegeEngine = siegeEngines.DeployedMeleeSiegeEngines[index];
        if (meleeSiegeEngine != null && meleeSiegeEngine.IsActive && (double) meleeSiegeEngine.Hitpoints > 0.0)
        {
          siegeAction = SiegeStrategyActionModel.SiegeAction.MoveSiegeEngineToReserve;
          siegeEngineType = meleeSiegeEngine.SiegeEngine;
          deploymentIndex = index;
          reserveIndex = -1;
          return;
        }
      }
      siegeAction = SiegeStrategyActionModel.SiegeAction.Hold;
      siegeEngineType = (SiegeEngineType) null;
      deploymentIndex = -1;
      reserveIndex = -1;
    }

    private void GetLogicalActionForPrepareAssaultStrategy(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex)
    {
      if (this._prepareAssaultEngineList == null)
        this._prepareAssaultEngineList = new List<(SiegeEngineType, int)>()
        {
          (DefaultSiegeEngineTypes.Ram, 1),
          (DefaultSiegeEngineTypes.SiegeTower, 2),
          (DefaultSiegeEngineTypes.Ballista, 2),
          (DefaultSiegeEngineTypes.Onager, 2)
        };
      this.GetLogicalActionToCompleteEngineList(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex, this._prepareAssaultEngineList);
    }

    private void GetLogicalActionForBreachWallsStrategy(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex)
    {
      if (this._breachWallsEngineList == null)
        this._breachWallsEngineList = new List<(SiegeEngineType, int)>()
        {
          (DefaultSiegeEngineTypes.Ram, 1),
          (DefaultSiegeEngineTypes.SiegeTower, 1),
          (DefaultSiegeEngineTypes.Onager, 4)
        };
      this.GetLogicalActionToCompleteEngineList(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex, this._breachWallsEngineList);
    }

    private void GetLogicalActionForWearOutDefendersStrategy(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex)
    {
      if (this._wearOutDefendersEngineList == null)
        this._wearOutDefendersEngineList = new List<(SiegeEngineType, int)>()
        {
          (DefaultSiegeEngineTypes.Ram, 1),
          (DefaultSiegeEngineTypes.SiegeTower, 1),
          (DefaultSiegeEngineTypes.Trebuchet, 4)
        };
      this.GetLogicalActionToCompleteEngineList(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex, this._wearOutDefendersEngineList);
    }

    private void GetLogicalActionForPrepareAgainstAssaultStrategy(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex)
    {
      if (this._prepareAgainstAssaultEngineList == null)
        this._prepareAgainstAssaultEngineList = new List<(SiegeEngineType, int)>()
        {
          (DefaultSiegeEngineTypes.FireCatapult, 1),
          (DefaultSiegeEngineTypes.Catapult, 2),
          (DefaultSiegeEngineTypes.FireBallista, 1)
        };
      this.GetLogicalActionToCompleteEngineList(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex, this._prepareAgainstAssaultEngineList);
    }

    private void GetLogicalActionForCounterBombardmentStrategy(
      ISiegeEventSide side,
      out SiegeStrategyActionModel.SiegeAction siegeAction,
      out SiegeEngineType siegeEngineType,
      out int deploymentIndex,
      out int reserveIndex)
    {
      if (this._counterBombardmentEngineList == null)
        this._counterBombardmentEngineList = new List<(SiegeEngineType, int)>()
        {
          (DefaultSiegeEngineTypes.FireCatapult, 2),
          (DefaultSiegeEngineTypes.Catapult, 2)
        };
      this.GetLogicalActionToCompleteEngineList(side, out siegeAction, out siegeEngineType, out deploymentIndex, out reserveIndex, this._counterBombardmentEngineList);
    }
  }
}
