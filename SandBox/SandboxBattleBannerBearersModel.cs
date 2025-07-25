// Decompiled with JetBrains decompiler
// Type: SandBox.SandboxBattleBannerBearersModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox
{
  public class SandboxBattleBannerBearersModel : BattleBannerBearersModel
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
      return agent.IsHuman && !agent.IsMainAgent && agent.IsAIControlled && agent.Character is CharacterObject character && !character.IsHero;
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
      int bannerBearingPriority = 0;
      if (agent.Character is CharacterObject character)
      {
        int index = Math.Min(character.Tier, SandboxBattleBannerBearersModel.BannerBearerPriorityPerTier.Length - 1);
        bannerBearingPriority += SandboxBattleBannerBearersModel.BannerBearerPriorityPerTier[index];
      }
      return bannerBearingPriority;
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
      if (!(agentCharacter is CharacterObject characterObject) || !(agentCharacter.Culture is CultureObject culture) || culture.BannerBearerReplacementWeapons.IsEmpty<ItemObject>())
        return (ItemObject) null;
      List<(int, ItemObject)> source = new List<(int, ItemObject)>();
      int minTierDifference = int.MaxValue;
      foreach (ItemObject replacementWeapon in (List<ItemObject>) culture.BannerBearerReplacementWeapons)
      {
        int num = MathF.Abs((int) (replacementWeapon.Tier + 1 - characterObject.Tier));
        if (num < minTierDifference)
          minTierDifference = num;
        source.Add((num, replacementWeapon));
      }
      return source.Where<(int, ItemObject)>((Func<(int, ItemObject), bool>) (tuple => tuple.TierDifference == minTierDifference)).GetRandomElementInefficiently<(int, ItemObject)>().Item2;
    }
  }
}
