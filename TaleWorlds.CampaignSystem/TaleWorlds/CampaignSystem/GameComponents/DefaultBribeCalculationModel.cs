// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBribeCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBribeCalculationModel : BribeCalculationModel
  {
    public override bool IsBribeNotNeededToEnterKeep(Settlement settlement)
    {
      SettlementAccessModel.AccessDetails accessDetails;
      Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterLordsHall(settlement, out accessDetails);
      if (accessDetails.AccessLevel != SettlementAccessModel.AccessLevel.LimitedAccess)
        return true;
      return accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.LimitedAccess && accessDetails.LimitedAccessSolution != SettlementAccessModel.LimitedAccessSolution.Bribe;
    }

    public override bool IsBribeNotNeededToEnterDungeon(Settlement settlement)
    {
      SettlementAccessModel.AccessDetails accessDetails;
      Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterDungeon(settlement, out accessDetails);
      if (accessDetails.AccessLevel != SettlementAccessModel.AccessLevel.LimitedAccess)
        return true;
      return accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.LimitedAccess && accessDetails.LimitedAccessSolution != SettlementAccessModel.LimitedAccessSolution.Bribe;
    }

    private float GetSkillFactor()
    {
      return (float) ((1.0 - (double) Hero.MainHero.GetSkillValue(DefaultSkills.Roguery) / 300.0) * 0.64999997615814209 + 0.34999999403953552);
    }

    private int GetBribeForCriminalRating(IFaction faction)
    {
      return MathF.Round(Campaign.Current.Models.CrimeModel.GetCost(faction, CrimeModel.PaymentMethod.Gold, 0.0f)) / 5;
    }

    private int GetBaseBribeValue(IFaction faction)
    {
      if (faction.IsAtWarWith((IFaction) Clan.PlayerClan))
        return 5000;
      if (faction.IsAtWarWith(Hero.MainHero.MapFaction))
        return 3000;
      if (FactionManager.IsNeutralWithFaction(faction, (IFaction) Clan.PlayerClan))
        return 100;
      if (Hero.MainHero.Clan == faction || Hero.MainHero.MapFaction == faction || !(faction is Clan))
        return 0;
      IFaction mapFaction = Hero.MainHero.MapFaction;
      Kingdom kingdom = (faction as Clan).Kingdom;
      return 0;
    }

    public override int GetBribeToEnterLordsHall(Settlement settlement)
    {
      return this.IsBribeNotNeededToEnterKeep(settlement) ? 0 : this.GetBribeInternal(settlement);
    }

    public override int GetBribeToEnterDungeon(Settlement settlement)
    {
      return this.GetBribeToEnterLordsHall(settlement);
    }

    private int GetBribeInternal(Settlement settlement)
    {
      int num = this.GetBaseBribeValue(settlement.MapFaction) + this.GetBribeForCriminalRating(settlement.MapFaction);
      if ((double) Clan.PlayerClan.Renown < 500.0)
        num = MathF.Max(num + (500 - (int) Clan.PlayerClan.Renown) * 15 / 10, 50);
      return MathF.Max((int) ((double) num * (double) this.GetSkillFactor() / 25.0) * 25 - settlement.BribePaid, 0);
    }
  }
}
