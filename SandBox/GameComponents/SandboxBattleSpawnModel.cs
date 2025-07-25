// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxBattleSpawnModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxBattleSpawnModel : BattleSpawnModel
  {
    public override void OnMissionStart() => MissionReinforcementsHelper.OnMissionStart();

    public override void OnMissionEnd() => MissionReinforcementsHelper.OnMissionEnd();

    public override List<(IAgentOriginBase origin, int formationIndex)> GetInitialSpawnAssignments(
      BattleSideEnum battleSide,
      List<IAgentOriginBase> troopOrigins)
    {
      List<(IAgentOriginBase, int)> spawnAssignments = new List<(IAgentOriginBase, int)>();
      SandboxBattleSpawnModel.FormationOrderOfBattleConfiguration[] formationOrderOfBattleConfigurations;
      if (SandboxBattleSpawnModel.GetOrderOfBattleConfigurationsForFormations(battleSide, troopOrigins, out formationOrderOfBattleConfigurations))
      {
        foreach (IAgentOriginBase troopOrigin in troopOrigins)
        {
          SandboxBattleSpawnModel.OrderOfBattleInnerClassType bestClassInnerClassType;
          FormationClass assignmentForTroop = SandboxBattleSpawnModel.FindBestOrderOfBattleFormationClassAssignmentForTroop(battleSide, troopOrigin, formationOrderOfBattleConfigurations, out bestClassInnerClassType);
          (IAgentOriginBase, int) valueTuple = (troopOrigin, (int) assignmentForTroop);
          spawnAssignments.Add(valueTuple);
          switch (bestClassInnerClassType)
          {
            case SandboxBattleSpawnModel.OrderOfBattleInnerClassType.PrimaryClass:
              ++formationOrderOfBattleConfigurations[(int) assignmentForTroop].PrimaryClassTroopCount;
              continue;
            case SandboxBattleSpawnModel.OrderOfBattleInnerClassType.SecondaryClass:
              ++formationOrderOfBattleConfigurations[(int) assignmentForTroop].SecondaryClassTroopCount;
              continue;
            default:
              continue;
          }
        }
      }
      else
      {
        foreach (IAgentOriginBase troopOrigin in troopOrigins)
        {
          (IAgentOriginBase, int) valueTuple = (troopOrigin, (int) Mission.Current.GetAgentTroopClass(battleSide, troopOrigin.Troop));
          spawnAssignments.Add(valueTuple);
        }
      }
      return spawnAssignments;
    }

    public override List<(IAgentOriginBase origin, int formationIndex)> GetReinforcementAssignments(
      BattleSideEnum battleSide,
      List<IAgentOriginBase> troopOrigins)
    {
      return MissionReinforcementsHelper.GetReinforcementAssignments(battleSide, troopOrigins);
    }

    private static bool GetOrderOfBattleConfigurationsForFormations(
      BattleSideEnum battleSide,
      List<IAgentOriginBase> troopOrigins,
      out SandboxBattleSpawnModel.FormationOrderOfBattleConfiguration[] formationOrderOfBattleConfigurations)
    {
      formationOrderOfBattleConfigurations = new SandboxBattleSpawnModel.FormationOrderOfBattleConfiguration[8];
      OrderOfBattleCampaignBehavior campaignBehavior = Campaign.Current?.GetCampaignBehavior<OrderOfBattleCampaignBehavior>();
      if (campaignBehavior == null)
        return false;
      for (int formationIndex = 0; formationIndex < 8; ++formationIndex)
      {
        if (campaignBehavior.GetFormationDataAtIndex(formationIndex, Mission.Current.IsSiegeBattle) == null)
          return false;
      }
      int[] defaultFormation = SandboxBattleSpawnModel.CalculateTroopCountsPerDefaultFormation(battleSide, troopOrigins);
      for (int formationIndex = 0; formationIndex < 8; ++formationIndex)
      {
        OrderOfBattleCampaignBehavior.OrderOfBattleFormationData formationDataAtIndex = campaignBehavior.GetFormationDataAtIndex(formationIndex, Mission.Current.IsSiegeBattle);
        formationOrderOfBattleConfigurations[formationIndex].OOBFormationClass = formationDataAtIndex.FormationClass;
        formationOrderOfBattleConfigurations[formationIndex].Commander = formationDataAtIndex.Commander;
        FormationClass index1 = FormationClass.NumberOfAllFormations;
        FormationClass index2 = FormationClass.NumberOfAllFormations;
        switch (formationDataAtIndex.FormationClass)
        {
          case DeploymentFormationClass.Infantry:
            index1 = FormationClass.Infantry;
            break;
          case DeploymentFormationClass.Ranged:
            index1 = FormationClass.Ranged;
            break;
          case DeploymentFormationClass.Cavalry:
            index1 = FormationClass.Cavalry;
            break;
          case DeploymentFormationClass.HorseArcher:
            index1 = FormationClass.HorseArcher;
            break;
          case DeploymentFormationClass.InfantryAndRanged:
            index1 = FormationClass.Infantry;
            index2 = FormationClass.Ranged;
            break;
          case DeploymentFormationClass.CavalryAndHorseArcher:
            index1 = FormationClass.Cavalry;
            index2 = FormationClass.HorseArcher;
            break;
        }
        formationOrderOfBattleConfigurations[formationIndex].PrimaryFormationClass = index1;
        if (index1 != FormationClass.NumberOfAllFormations)
          formationOrderOfBattleConfigurations[formationIndex].PrimaryClassDesiredTroopCount = (int) Math.Ceiling((double) defaultFormation[(int) index1] * ((double) formationDataAtIndex.PrimaryClassWeight / 100.0));
        formationOrderOfBattleConfigurations[formationIndex].SecondaryFormationClass = index2;
        if (index2 != FormationClass.NumberOfAllFormations)
          formationOrderOfBattleConfigurations[formationIndex].SecondaryClassDesiredTroopCount = (int) Math.Ceiling((double) defaultFormation[(int) index2] * ((double) formationDataAtIndex.SecondaryClassWeight / 100.0));
      }
      return true;
    }

    private static int[] CalculateTroopCountsPerDefaultFormation(
      BattleSideEnum battleSide,
      List<IAgentOriginBase> troopOrigins)
    {
      int[] defaultFormation = new int[4];
      foreach (IAgentOriginBase troopOrigin in troopOrigins)
      {
        FormationClass index = Mission.Current.GetAgentTroopClass(battleSide, troopOrigin.Troop).DefaultClass();
        ++defaultFormation[(int) index];
      }
      return defaultFormation;
    }

    private static FormationClass FindBestOrderOfBattleFormationClassAssignmentForTroop(
      BattleSideEnum battleSide,
      IAgentOriginBase origin,
      SandboxBattleSpawnModel.FormationOrderOfBattleConfiguration[] formationOrderOfBattleConfigurations,
      out SandboxBattleSpawnModel.OrderOfBattleInnerClassType bestClassInnerClassType)
    {
      FormationClass formationClass = Mission.Current.GetAgentTroopClass(battleSide, origin.Troop).DefaultClass();
      FormationClass assignmentForTroop = formationClass;
      float num1 = float.MinValue;
      bestClassInnerClassType = SandboxBattleSpawnModel.OrderOfBattleInnerClassType.None;
      for (int index = 0; index < 8; ++index)
      {
        if (origin.Troop.IsHero && origin.Troop is CharacterObject troop && troop.HeroObject == formationOrderOfBattleConfigurations[index].Commander)
        {
          assignmentForTroop = (FormationClass) index;
          bestClassInnerClassType = SandboxBattleSpawnModel.OrderOfBattleInnerClassType.None;
          break;
        }
        if (formationClass == formationOrderOfBattleConfigurations[index].PrimaryFormationClass)
        {
          float desiredTroopCount = (float) formationOrderOfBattleConfigurations[index].PrimaryClassDesiredTroopCount;
          float num2 = (float) (1.0 - (double) formationOrderOfBattleConfigurations[index].PrimaryClassTroopCount / ((double) desiredTroopCount + 1.0));
          if ((double) num2 > (double) num1)
          {
            assignmentForTroop = (FormationClass) index;
            bestClassInnerClassType = SandboxBattleSpawnModel.OrderOfBattleInnerClassType.PrimaryClass;
            num1 = num2;
          }
        }
        else if (formationClass == formationOrderOfBattleConfigurations[index].SecondaryFormationClass)
        {
          float desiredTroopCount = (float) formationOrderOfBattleConfigurations[index].SecondaryClassDesiredTroopCount;
          float num3 = (float) (1.0 - (double) formationOrderOfBattleConfigurations[index].SecondaryClassTroopCount / ((double) desiredTroopCount + 1.0));
          if ((double) num3 > (double) num1)
          {
            assignmentForTroop = (FormationClass) index;
            bestClassInnerClassType = SandboxBattleSpawnModel.OrderOfBattleInnerClassType.SecondaryClass;
            num1 = num3;
          }
        }
      }
      return assignmentForTroop;
    }

    private enum OrderOfBattleInnerClassType
    {
      None,
      PrimaryClass,
      SecondaryClass,
    }

    private struct FormationOrderOfBattleConfiguration
    {
      public DeploymentFormationClass OOBFormationClass;
      public FormationClass PrimaryFormationClass;
      public int PrimaryClassTroopCount;
      public int PrimaryClassDesiredTroopCount;
      public FormationClass SecondaryFormationClass;
      public int SecondaryClassTroopCount;
      public int SecondaryClassDesiredTroopCount;
      public Hero Commander;
    }
  }
}
