// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.SettlementGarrisonModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class SettlementGarrisonModel : GameModel
  {
    public abstract ExplainedNumber CalculateGarrisonChange(
      Settlement settlement,
      bool includeDescriptions = false);

    public abstract ExplainedNumber CalculateGarrisonChangeAutoRecruitment(
      Settlement settlement,
      bool includeDescriptions = false);

    public abstract int FindNumberOfTroopsToTakeFromGarrison(
      MobileParty mobileParty,
      Settlement settlement,
      float idealGarrisonStrengthPerWalledCenter = 0.0f);

    public abstract int FindNumberOfTroopsToLeaveToGarrison(
      MobileParty mobileParty,
      Settlement settlement);
  }
}
