// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.LiftSiegeAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class LiftSiegeAction
  {
    private static void ApplyInternal(MobileParty side1Party, Settlement settlement)
    {
      settlement.SiegeEvent.BesiegerCamp.RemoveAllSiegeParties();
    }

    public static void GetGameAction(MobileParty side1Party)
    {
      LiftSiegeAction.ApplyInternal(side1Party, side1Party.BesiegedSettlement);
    }
  }
}
