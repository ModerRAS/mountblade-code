// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.SiegeAftermathAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class SiegeAftermathAction
  {
    private static void ApplyInternal(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType,
      Clan previousSettlementOwner,
      Dictionary<MobileParty, float> partyContributions)
    {
      CampaignEventDispatcher.Instance.OnSiegeAftermathApplied(attackerParty, settlement, aftermathType, previousSettlementOwner, partyContributions);
    }

    public static void ApplyAftermath(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType,
      Clan previousSettlementOwner,
      Dictionary<MobileParty, float> partyContributions)
    {
      SiegeAftermathAction.ApplyInternal(attackerParty, settlement, aftermathType, previousSettlementOwner, partyContributions);
    }

    public enum SiegeAftermath
    {
      Devastate,
      Pillage,
      ShowMercy,
    }
  }
}
