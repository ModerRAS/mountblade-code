// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.GatherArmyAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class GatherArmyAction
  {
    private static void ApplyInternal(
      MobileParty leaderParty,
      Settlement targetSettlement,
      float playerInvolvement = 0.0f)
    {
      Army army = leaderParty.Army;
      army.AIBehavior = Army.AIBehaviorFlags.Gathering;
      CampaignEventDispatcher.Instance.OnArmyGathered(army, targetSettlement);
    }

    public static void Apply(MobileParty leaderParty, Settlement targetSettlement)
    {
      GatherArmyAction.ApplyInternal(leaderParty, targetSettlement, leaderParty == MobileParty.MainParty ? 1f : 0.0f);
    }
  }
}
