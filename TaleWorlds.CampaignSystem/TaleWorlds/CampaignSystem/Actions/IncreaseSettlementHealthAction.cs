// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.IncreaseSettlementHealthAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class IncreaseSettlementHealthAction
  {
    private static void ApplyInternal(Settlement settlement, float percentage)
    {
      settlement.SettlementHitPoints += percentage;
      settlement.SettlementHitPoints = (double) settlement.SettlementHitPoints > 1.0 ? 1f : settlement.SettlementHitPoints;
      if ((double) settlement.SettlementHitPoints < 1.0 || !settlement.IsVillage || settlement.Village.VillageState == Village.VillageStates.Normal)
        return;
      ChangeVillageStateAction.ApplyBySettingToNormal(settlement);
      settlement.Militia += 20f;
    }

    public static void Apply(Settlement settlement, float percentage)
    {
      IncreaseSettlementHealthAction.ApplyInternal(settlement, percentage);
    }
  }
}
