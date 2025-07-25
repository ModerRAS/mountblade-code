// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultInformationRestrictionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultInformationRestrictionModel : InformationRestrictionModel
  {
    public bool IsDisabledByCheat;

    public override bool DoesPlayerKnowDetailsOf(Settlement settlement)
    {
      if (settlement.MapFaction == PartyBase.MainParty.MapFaction || settlement.IsInspected)
        return true;
      Settlement settlement1 = settlement.IsVillage ? settlement.Village.Bound : settlement;
      if (!settlement1.IsFortification)
        return true;
      EmissaryModel emissaryModel = Campaign.Current.Models.EmissaryModel;
      foreach (Hero hero in (List<Hero>) Clan.PlayerClan.Heroes)
      {
        if (emissaryModel.IsEmissary(hero) && hero.CurrentSettlement == settlement1)
          return true;
      }
      foreach (SettlementArea ownedWorkshop in (List<Workshop>) Hero.MainHero.OwnedWorkshops)
      {
        if (ownedWorkshop.Settlement == settlement1)
          return true;
      }
      foreach (SettlementArea ownedAlley in Hero.MainHero.OwnedAlleys)
      {
        if (ownedAlley.Settlement == settlement1)
          return true;
      }
      return this.IsDisabledByCheat;
    }

    public override bool DoesPlayerKnowDetailsOf(Hero hero)
    {
      return hero.Clan == Clan.PlayerClan || hero.IsDead || hero.MapFaction != null && hero.MapFaction.IsKingdomFaction && hero.MapFaction.Leader == hero || hero.IsKnownToPlayer || this.IsDisabledByCheat;
    }
  }
}
