// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultWorkshopModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultWorkshopModel : WorkshopModel
  {
    public override int WarehouseCapacity => 6000;

    public override int DaysForPlayerSaveWorkshopFromBankruptcy => 3;

    public override int CapitalLowLimit => 5000;

    public override int InitialCapital => 10000;

    public override int DailyExpense => 100;

    public override int DefaultWorkshopCountInSettlement => 4;

    public override int MaximumWorkshopsPlayerCanHave
    {
      get => this.GetMaxWorkshopCountForClanTier(Campaign.Current.Models.ClanTierModel.MaxClanTier);
    }

    public override ExplainedNumber GetEffectiveConversionSpeedOfProduction(
      Workshop workshop,
      float speed,
      bool includeDescription)
    {
      ExplainedNumber bonuses = new ExplainedNumber(speed, includeDescription, new TextObject("{=basevalue}Base"));
      Settlement settlement = workshop.Settlement;
      if (settlement.OwnerClan.Kingdom != null)
      {
        if (settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.ForgivenessOfDebts))
          bonuses.AddFactor(-0.05f, DefaultPolicies.ForgivenessOfDebts.Name);
        if (settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.StateMonopolies))
          bonuses.AddFactor(-0.1f, DefaultPolicies.StateMonopolies.Name);
      }
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Trade.MercenaryConnections, settlement.Town, ref bonuses);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Steward.Sweatshops, workshop.Owner.CharacterObject, true, ref bonuses);
      return bonuses;
    }

    public override int GetMaxWorkshopCountForClanTier(int tier) => tier + 1;

    public override int GetCostForPlayer(Workshop workshop)
    {
      return workshop.WorkshopType.EquipmentCost + (int) workshop.Settlement.Town.Prosperity * 3 + this.InitialCapital;
    }

    public override int GetCostForNotable(Workshop workshop)
    {
      return (workshop.WorkshopType.EquipmentCost + (int) workshop.Settlement.Town.Prosperity / 2 + workshop.Capital) / 2;
    }

    public override Hero GetNotableOwnerForWorkshop(Workshop workshop)
    {
      List<(Hero, float)> weightList = new List<(Hero, float)>();
      foreach (Hero notable in (List<Hero>) workshop.Settlement.Notables)
      {
        if (notable.IsAlive && notable != workshop.Owner)
        {
          int count = notable.OwnedWorkshops.Count;
          float num = Math.Max(notable.Power, 0.0f) / MathF.Pow(10f, (float) count);
          weightList.Add((notable, num));
        }
      }
      return MBRandom.ChooseWeighted<Hero>((IReadOnlyList<(Hero, float)>) weightList);
    }

    public override int GetConvertProductionCost(WorkshopType workshopType)
    {
      return workshopType.EquipmentCost;
    }

    public override bool CanPlayerSellWorkshop(Workshop workshop, out TextObject explanation)
    {
      Campaign.Current.Models.WorkshopModel.GetCostForNotable(workshop);
      Hero ownerForWorkshop = Campaign.Current.Models.WorkshopModel.GetNotableOwnerForWorkshop(workshop);
      explanation = ownerForWorkshop == null ? new TextObject("{=oqPf2Gdp}There isn't any prospective buyer in the town.") : TextObject.Empty;
      return ownerForWorkshop != null;
    }

    public override float GetTradeXpPerWarehouseProduction(EquipmentElement production)
    {
      return (float) production.GetBaseValue() * 0.1f;
    }
  }
}
