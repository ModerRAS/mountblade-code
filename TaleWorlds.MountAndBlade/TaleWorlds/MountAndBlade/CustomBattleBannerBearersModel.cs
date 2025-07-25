// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleBannerBearersModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleBannerBearersModel : BattleBannerBearersModel
  {
    private static readonly int[] BannerBearerPriorityPerTier = new int[7]
    {
      0,
      1,
      3,
      5,
      6,
      4,
      2
    };
    private static List<ItemObject> ReplacementWeapons = (List<ItemObject>) null;
    private static MissionAgentSpawnLogic _missionSpawnLogic;

    public override int GetMinimumFormationTroopCountToBearBanners() => 2;

    public override float GetBannerInteractionDistance(Agent interactingAgent)
    {
      return !interactingAgent.HasMount ? 1.5f : 3f;
    }

    public override bool CanBannerBearerProvideEffectToFormation(Agent agent, Formation formation)
    {
      if (agent.Formation == formation)
        return true;
      return agent.IsPlayerControlled && agent.Team == formation.Team;
    }

    public override bool CanAgentPickUpAnyBanner(Agent agent)
    {
      if (!agent.IsHuman || agent.Banner != null || !agent.CanBeAssignedForScriptedMovement() || agent.CommonAIComponent != null && agent.CommonAIComponent.IsPanicked)
        return false;
      return agent.HumanAIComponent == null || !agent.HumanAIComponent.IsInImportantCombatAction();
    }

    public override bool CanAgentBecomeBannerBearer(Agent agent)
    {
      if (CustomBattleBannerBearersModel._missionSpawnLogic == null)
        CustomBattleBannerBearersModel._missionSpawnLogic = Mission.Current.GetMissionBehavior<MissionAgentSpawnLogic>();
      if (CustomBattleBannerBearersModel._missionSpawnLogic != null)
      {
        Team team = agent.Formation?.Team;
        if (team != null)
        {
          BasicCharacterObject generalCharacterOfSide = CustomBattleBannerBearersModel._missionSpawnLogic.GetGeneralCharacterOfSide(team.Side);
          return agent.IsHuman && !agent.IsMainAgent && agent.IsAIControlled && agent.Character != generalCharacterOfSide;
        }
      }
      return false;
    }

    public override int GetAgentBannerBearingPriority(Agent agent)
    {
      if (!this.CanAgentBecomeBannerBearer(agent))
        return 0;
      if (agent.Formation != null)
      {
        bool significantNumberOfMounted = agent.Formation.CalculateHasSignificantNumberOfMounted;
        if (significantNumberOfMounted && !agent.HasMount || !significantNumberOfMounted && agent.HasMount)
          return 0;
      }
      int index = Math.Min(agent.Character.Level / 4 + 1, CustomBattleBannerBearersModel.BannerBearerPriorityPerTier.Length - 1);
      return CustomBattleBannerBearersModel.BannerBearerPriorityPerTier[index];
    }

    public override bool CanFormationDeployBannerBearers(Formation formation)
    {
      BannerBearerLogic bannerBearerLogic = this.BannerBearerLogic;
      return bannerBearerLogic != null && formation.CountOfUnits >= this.GetMinimumFormationTroopCountToBearBanners() && bannerBearerLogic.GetFormationBanner(formation) != null && formation.UnitsWithoutLooseDetachedOnes.Count<IFormationUnit>((Func<IFormationUnit, bool>) (unit => unit is Agent agent && this.CanAgentBecomeBannerBearer(agent))) > 0;
    }

    public override int GetDesiredNumberOfBannerBearersForFormation(Formation formation)
    {
      return !this.CanFormationDeployBannerBearers(formation) ? 0 : 1;
    }

    public override ItemObject GetBannerBearerReplacementWeapon(BasicCharacterObject agentCharacter)
    {
      if (CustomBattleBannerBearersModel.ReplacementWeapons == null)
        CustomBattleBannerBearersModel.ReplacementWeapons = MBObjectManager.Instance.GetObjectTypeList<ItemObject>().Where<ItemObject>((Func<ItemObject, bool>) (item => item.PrimaryWeapon != null && item.PrimaryWeapon.WeaponClass == WeaponClass.OneHandedSword)).ToList<ItemObject>();
      if (CustomBattleBannerBearersModel.ReplacementWeapons.IsEmpty<ItemObject>())
        return (ItemObject) null;
      IEnumerable<ItemObject> itemObjects = CustomBattleBannerBearersModel.ReplacementWeapons.Where<ItemObject>((Func<ItemObject, bool>) (item => item.Culture != null && item.Culture.GetCultureCode() == agentCharacter.Culture.GetCultureCode()));
      List<(int, ItemObject)> source = new List<(int, ItemObject)>();
      int minTierDifference = int.MaxValue;
      foreach (ItemObject itemObject in itemObjects)
      {
        int num1 = MathF.Min(MathF.Max(MathF.Ceiling((float) (((double) agentCharacter.Level - 5.0) / 5.0)), 0), 7);
        int num2 = MathF.Abs((int) (itemObject.Tier - num1));
        if (num2 < minTierDifference)
          minTierDifference = num2;
        source.Add((num2, itemObject));
      }
      return source.Where<(int, ItemObject)>((Func<(int, ItemObject), bool>) (tuple => tuple.TierDifference == minTierDifference)).GetRandomElementInefficiently<(int, ItemObject)>().Item2;
    }
  }
}
