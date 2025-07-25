// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.OrderOfBattleFormationExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class OrderOfBattleFormationExtensions
  {
    public static void Refresh(this Formation formation)
    {
      formation?.SetMovementOrder(formation.GetReadonlyMovementOrderReference());
    }

    public static DeploymentFormationClass GetOrderOfBattleFormationClass(
      this FormationClass formationClass)
    {
      switch (formationClass)
      {
        case FormationClass.Infantry:
        case FormationClass.NumberOfDefaultFormations:
        case FormationClass.HeavyInfantry:
          return DeploymentFormationClass.Infantry;
        case FormationClass.Ranged:
          return DeploymentFormationClass.Ranged;
        case FormationClass.Cavalry:
        case FormationClass.LightCavalry:
        case FormationClass.HeavyCavalry:
          return DeploymentFormationClass.Cavalry;
        case FormationClass.HorseArcher:
          return DeploymentFormationClass.HorseArcher;
        default:
          return DeploymentFormationClass.Unset;
      }
    }

    public static List<FormationClass> GetFormationClasses(
      this DeploymentFormationClass orderOfBattleFormationClass)
    {
      List<FormationClass> formationClasses = new List<FormationClass>();
      switch (orderOfBattleFormationClass)
      {
        case DeploymentFormationClass.Infantry:
          formationClasses.Add(FormationClass.Infantry);
          break;
        case DeploymentFormationClass.Ranged:
          formationClasses.Add(FormationClass.Ranged);
          break;
        case DeploymentFormationClass.Cavalry:
          formationClasses.Add(FormationClass.Cavalry);
          break;
        case DeploymentFormationClass.HorseArcher:
          formationClasses.Add(FormationClass.HorseArcher);
          break;
        case DeploymentFormationClass.InfantryAndRanged:
          formationClasses.Add(FormationClass.Infantry);
          formationClasses.Add(FormationClass.Ranged);
          break;
        case DeploymentFormationClass.CavalryAndHorseArcher:
          formationClasses.Add(FormationClass.Cavalry);
          formationClasses.Add(FormationClass.HorseArcher);
          break;
      }
      return formationClasses;
    }

    public static TextObject GetFilterName(this FormationFilterType filterType)
    {
      switch (filterType)
      {
        case FormationFilterType.Shield:
          return new TextObject("{=PSN8IaIg}Shields");
        case FormationFilterType.Spear:
          return new TextObject("{=f83FU4X6}Polearms");
        case FormationFilterType.Thrown:
          return new TextObject("{=Ea3K1PVR}Thrown Weapons");
        case FormationFilterType.Heavy:
          return new TextObject("{=Jw0GMgzv}Heavy Armors");
        case FormationFilterType.HighTier:
          return new TextObject("{=DzAkCzwd}High Tier");
        case FormationFilterType.LowTier:
          return new TextObject("{=qaPgbwZv}Low Tier");
        default:
          return new TextObject("{=w7Yrbi5t}Unset");
      }
    }

    public static TextObject GetFilterDescription(this FormationFilterType filterType)
    {
      switch (filterType)
      {
        case FormationFilterType.Unset:
          return new TextObject("{=Q1Ga032B}Don't give preference to any type of troop.");
        case FormationFilterType.Shield:
          return new TextObject("{=MVOPbhNj}Give preference to troops with Shields");
        case FormationFilterType.Spear:
          return new TextObject("{=K3Cr70PY}Give preference to troops with Polearms");
        case FormationFilterType.Thrown:
          return new TextObject("{=DWWa3aIb}Give preference to troops with Thrown Weapons");
        case FormationFilterType.Heavy:
          return new TextObject("{=ush8OHIw}Give preference to troops with Heavy Armors");
        case FormationFilterType.HighTier:
          return new TextObject("{=DRNDtkP2}Give preference to troops at higher tiers");
        case FormationFilterType.LowTier:
          return new TextObject("{=zbpCRmuJ}Give preference to troops at lower tiers");
        default:
          return new TextObject("{=w7Yrbi5t}Unset");
      }
    }

    public static TextObject GetClassName(this DeploymentFormationClass formationClass)
    {
      switch (formationClass)
      {
        case DeploymentFormationClass.Infantry:
          return GameTexts.FindText("str_troop_type_name", "Infantry");
        case DeploymentFormationClass.Ranged:
          return GameTexts.FindText("str_troop_type_name", "Ranged");
        case DeploymentFormationClass.Cavalry:
          return GameTexts.FindText("str_troop_type_name", "Cavalry");
        case DeploymentFormationClass.HorseArcher:
          return GameTexts.FindText("str_troop_type_name", "HorseArcher");
        case DeploymentFormationClass.InfantryAndRanged:
          return new TextObject("{=mBDj5uG5}Infantry and Ranged");
        case DeploymentFormationClass.CavalryAndHorseArcher:
          return new TextObject("{=FNLfNWH3}Cavalry and Horse Archer");
        default:
          return new TextObject("{=w7Yrbi5t}Unset");
      }
    }

    public static List<Agent> GetHeroAgents(this Team team)
    {
      return team.ActiveAgents.Where<Agent>((Func<Agent, bool>) (a => a.IsHero)).ToList<Agent>();
    }
  }
}
