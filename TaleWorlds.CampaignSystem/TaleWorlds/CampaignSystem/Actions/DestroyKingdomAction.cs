// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.DestroyKingdomAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Linq;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class DestroyKingdomAction
  {
    private static void ApplyInternal(Kingdom destroyedKingdom, bool isKingdomLeaderDeath = false)
    {
      destroyedKingdom.DeactivateKingdom();
      foreach (Clan clan in destroyedKingdom.Clans.ToList<Clan>())
      {
        if (!clan.IsEliminated)
        {
          if (isKingdomLeaderDeath)
            DestroyClanAction.ApplyByClanLeaderDeath(clan);
          else
            DestroyClanAction.Apply(clan);
          destroyedKingdom.RemoveClanInternal(clan);
        }
      }
      Campaign.Current.FactionManager.RemoveFactionsFromCampaignWars((IFaction) destroyedKingdom);
      CampaignEventDispatcher.Instance.OnKingdomDestroyed(destroyedKingdom);
    }

    public static void Apply(Kingdom destroyedKingdom)
    {
      DestroyKingdomAction.ApplyInternal(destroyedKingdom);
    }

    public static void ApplyByKingdomLeaderDeath(Kingdom destroyedKingdom)
    {
      DestroyKingdomAction.ApplyInternal(destroyedKingdom, true);
    }
  }
}
