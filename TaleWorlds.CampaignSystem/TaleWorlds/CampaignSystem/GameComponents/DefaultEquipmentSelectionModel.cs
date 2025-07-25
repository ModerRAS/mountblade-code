// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultEquipmentSelectionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultEquipmentSelectionModel : EquipmentSelectionModel
  {
    public override MBList<MBEquipmentRoster> GetEquipmentRostersForHeroComeOfAge(
      Hero hero,
      bool isCivilian)
    {
      MBList<MBEquipmentRoster> forHeroComeOfAge = new MBList<MBEquipmentRoster>();
      bool flag = this.IsHeroCombatant(hero);
      foreach (MBEquipmentRoster equipmentRoster in (List<MBEquipmentRoster>) MBEquipmentRosterExtensions.All)
      {
        if (this.IsRosterAppropriateForHeroAsTemplate(equipmentRoster, hero, EquipmentFlags.IsNobleTemplate))
        {
          if (flag)
          {
            if (isCivilian)
            {
              if (equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsCombatantTemplate | EquipmentFlags.IsCivilianTemplate))
                forHeroComeOfAge.Add(equipmentRoster);
            }
            else if (equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsMediumTemplate))
              forHeroComeOfAge.Add(equipmentRoster);
          }
          else if (isCivilian)
          {
            if (equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsNoncombatantTemplate))
              forHeroComeOfAge.Add(equipmentRoster);
          }
          else if (equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsMediumTemplate))
            forHeroComeOfAge.Add(equipmentRoster);
        }
      }
      return forHeroComeOfAge;
    }

    public override MBList<MBEquipmentRoster> GetEquipmentRostersForHeroReachesTeenAge(Hero hero)
    {
      EquipmentFlags suitableFlags = EquipmentFlags.IsNobleTemplate | EquipmentFlags.IsTeenagerEquipmentTemplate;
      MBList<MBEquipmentRoster> roster = new MBList<MBEquipmentRoster>();
      this.AddEquipmentsToRoster(hero, suitableFlags, ref roster, true);
      return roster;
    }

    public override MBList<MBEquipmentRoster> GetEquipmentRostersForInitialChildrenGeneration(
      Hero hero)
    {
      EquipmentFlags suitableFlags = (EquipmentFlags) (64 | ((double) hero.Age < (double) Campaign.Current.Models.AgeModel.BecomeTeenagerAge ? 16384 : 32768));
      MBList<MBEquipmentRoster> roster = new MBList<MBEquipmentRoster>();
      this.AddEquipmentsToRoster(hero, suitableFlags, ref roster, true);
      return roster;
    }

    public override MBList<MBEquipmentRoster> GetEquipmentRostersForDeliveredOffspring(Hero hero)
    {
      EquipmentFlags suitableFlags = EquipmentFlags.IsNobleTemplate | EquipmentFlags.IsChildEquipmentTemplate;
      MBList<MBEquipmentRoster> roster = new MBList<MBEquipmentRoster>();
      this.AddEquipmentsToRoster(hero, suitableFlags, ref roster, true);
      return roster;
    }

    public override MBList<MBEquipmentRoster> GetEquipmentRostersForCompanion(
      Hero hero,
      bool isCivilian)
    {
      EquipmentFlags suitableFlags = isCivilian ? EquipmentFlags.IsCivilianTemplate | EquipmentFlags.IsNobleTemplate : EquipmentFlags.IsNobleTemplate | EquipmentFlags.IsMediumTemplate;
      MBList<MBEquipmentRoster> roster = new MBList<MBEquipmentRoster>();
      this.AddEquipmentsToRoster(hero, suitableFlags, ref roster, isCivilian);
      return roster;
    }

    private bool IsRosterAppropriateForHeroAsTemplate(
      MBEquipmentRoster equipmentRoster,
      Hero hero,
      EquipmentFlags customFlags = EquipmentFlags.None,
      bool shouldMatchGender = false)
    {
      bool flag1 = false;
      if (equipmentRoster.IsEquipmentTemplate() && (!shouldMatchGender || equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsFemaleTemplate) == hero.IsFemale) && equipmentRoster.EquipmentCulture == hero.Culture && (customFlags == EquipmentFlags.None || equipmentRoster.HasEquipmentFlags(customFlags)))
      {
        int num = equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsNomadTemplate) ? 1 : (equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsWoodlandTemplate) ? 1 : 0);
        bool flag2 = !hero.IsChild && (equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsChildEquipmentTemplate) || equipmentRoster.HasEquipmentFlags(EquipmentFlags.IsTeenagerEquipmentTemplate));
        if (num == 0 && !flag2)
          flag1 = true;
      }
      return flag1;
    }

    private bool IsHeroCombatant(Hero hero)
    {
      if (!hero.IsFemale || hero.Clan == Hero.MainHero.Clan || hero.Mother != null && !hero.Mother.IsNoncombatant)
        return true;
      return hero.RandomIntWithSeed(17U, 0, 1) == 0 && hero.GetTraitLevel(DefaultTraits.Valor) == 1;
    }

    private void AddEquipmentsToRoster(
      Hero hero,
      EquipmentFlags suitableFlags,
      ref MBList<MBEquipmentRoster> roster,
      bool shouldMatchGender = false)
    {
      foreach (MBEquipmentRoster equipmentRoster in (List<MBEquipmentRoster>) MBEquipmentRosterExtensions.All)
      {
        if (this.IsRosterAppropriateForHeroAsTemplate(equipmentRoster, hero, suitableFlags, shouldMatchGender))
          roster.Add(equipmentRoster);
      }
    }
  }
}
