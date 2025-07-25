// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.ClanFinanceModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class ClanFinanceModel : GameModel
  {
    public abstract int PartyGoldLowerThreshold { get; }

    public abstract ExplainedNumber CalculateClanGoldChange(
      Clan clan,
      bool includeDescriptions = false,
      bool applyWithdrawals = false,
      bool includeDetails = false);

    public abstract ExplainedNumber CalculateClanIncome(
      Clan clan,
      bool includeDescriptions = false,
      bool applyWithdrawals = false,
      bool includeDetails = false);

    public abstract ExplainedNumber CalculateClanExpenses(
      Clan clan,
      bool includeDescriptions = false,
      bool applyWithdrawals = false,
      bool includeDetails = false);

    public abstract ExplainedNumber CalculateTownIncomeFromTariffs(
      Clan clan,
      Town town,
      bool applyWithdrawals = false);

    public abstract int CalculateTownIncomeFromProjects(Town town);

    public abstract int CalculateVillageIncome(Clan clan, Village village, bool applyWithdrawals = false);

    public abstract int CalculateNotableDailyGoldChange(Hero hero, bool applyWithdrawals);

    public abstract int CalculateOwnerIncomeFromCaravan(MobileParty caravan);

    public abstract int CalculateOwnerIncomeFromWorkshop(Workshop workshop);

    public abstract float RevenueSmoothenFraction();
  }
}
