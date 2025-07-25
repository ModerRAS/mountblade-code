// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ClaimSettlementAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ClaimSettlementAction
  {
    private static void ApplyInternal(Hero claimant, Settlement claimedSettlement)
    {
      ClaimSettlementAction.ImpactRelations(claimant, claimedSettlement);
    }

    private static void ImpactRelations(Hero claimant, Settlement claimedSettlement)
    {
      if (claimedSettlement.OwnerClan.Leader == null)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(claimant, claimedSettlement.OwnerClan.Leader, -50, false);
      if (claimedSettlement.OwnerClan.IsMapFaction)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(claimant, claimedSettlement.OwnerClan.Leader, -20, false);
    }

    public static void Apply(Hero claimant, Settlement claimedSettlement)
    {
      ClaimSettlementAction.ApplyInternal(claimant, claimedSettlement);
    }
  }
}
