// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleMoraleModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using MBHelpers;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleMoraleModel : BattleMoraleModel
  {
    public override (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentIncapacitated(
      Agent affectedAgent,
      AgentState affectedAgentState,
      Agent affectorAgent,
      in KillingBlow killingBlow)
    {
      float battleImportance = affectedAgent.GetBattleImportance();
      Team team = affectedAgent.Team;
      // ISSUE: explicit non-virtual call
      float casualtiesFactor = this.CalculateCasualtiesFactor(team != null ? __nonvirtual (team.Side) : BattleSideEnum.None);
      SkillObject skillFromWeaponClass = WeaponComponentData.GetRelevantSkillFromWeaponClass((WeaponClass) killingBlow.WeaponClass);
      bool flag = skillFromWeaponClass == DefaultSkills.Bow || skillFromWeaponClass == DefaultSkills.Crossbow || skillFromWeaponClass == DefaultSkills.Throwing;
      int num1 = killingBlow.WeaponRecordWeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.AffectsArea | WeaponFlags.AffectsAreaBig | WeaponFlags.MultiplePenetration) ? 1 : 0;
      float val2 = 0.75f;
      if (num1 != 0)
      {
        val2 = 0.25f;
        if (killingBlow.WeaponRecordWeaponFlags.HasAllFlags<WeaponFlags>(WeaponFlags.Burning | WeaponFlags.MultiplePenetration))
          val2 += val2 * 0.25f;
      }
      else if (flag)
        val2 = 0.5f;
      float num2 = Math.Max(0.0f, val2);
      FactoredNumber factoredNumber = new FactoredNumber(battleImportance * 3f * num2);
      FactoredNumber bonuses = new FactoredNumber(battleImportance * 4f * num2 * casualtiesFactor);
      BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(affectedAgent.Formation);
      if (activeBanner != null)
        BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedMoraleShock, activeBanner, ref bonuses);
      return (MathF.Max(bonuses.ResultNumber, 0.0f), MathF.Max(factoredNumber.ResultNumber, 0.0f));
    }

    public override (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentPanicked(
      Agent agent)
    {
      double battleImportance = (double) agent.GetBattleImportance();
      Team team = agent.Team;
      // ISSUE: explicit non-virtual call
      float casualtiesFactor = this.CalculateCasualtiesFactor(team != null ? __nonvirtual (team.Side) : BattleSideEnum.None);
      float a = (float) (battleImportance * 2.0);
      float num = (float) (battleImportance * (double) casualtiesFactor * 1.1000000238418579);
      if (agent.Character != null)
      {
        FactoredNumber bonuses = new FactoredNumber(num);
        BannerComponent activeBanner = MissionGameModels.Current.BattleBannerBearersModel.GetActiveBanner(agent.Formation);
        if (activeBanner != null)
          BannerHelper.AddBannerBonusForBanner(DefaultBannerEffects.DecreasedMoraleShock, activeBanner, ref bonuses);
        num = bonuses.ResultNumber;
      }
      return (MathF.Max(num, 0.0f), MathF.Max(a, 0.0f));
    }

    public override float CalculateMoraleChangeToCharacter(Agent agent, float maxMoraleChange)
    {
      return maxMoraleChange / MathF.Max(1f, agent.Character.GetMoraleResistance());
    }

    public override float GetEffectiveInitialMorale(Agent agent, float baseMorale) => baseMorale;

    public override bool CanPanicDueToMorale(Agent agent) => true;

    public override float CalculateCasualtiesFactor(BattleSideEnum battleSide)
    {
      float casualtiesFactor = 1f;
      if (Mission.Current != null && battleSide != BattleSideEnum.None)
      {
        float agentRatioForSide = Mission.Current.GetRemovedAgentRatioForSide(battleSide);
        casualtiesFactor = MathF.Max(0.0f, casualtiesFactor + agentRatioForSide * 2f);
      }
      return casualtiesFactor;
    }

    public override float GetAverageMorale(Formation formation)
    {
      float num1 = 0.0f;
      int num2 = 0;
      if (formation != null)
      {
        foreach (IFormationUnit allUnit in (List<IFormationUnit>) formation.Arrangement.GetAllUnits())
        {
          if (allUnit is Agent agent && agent.IsActive() && agent.IsHuman && agent.IsAIControlled)
          {
            ++num2;
            num1 += agent.GetMorale();
          }
        }
      }
      return num2 > 0 ? MBMath.ClampFloat(num1 / (float) num2, 0.0f, 100f) : 0.0f;
    }
  }
}
