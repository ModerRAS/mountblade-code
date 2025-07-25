// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.DestroyClanAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class DestroyClanAction
  {
    private static void ApplyInternal(
      Clan destroyedClan,
      DestroyClanAction.DestroyClanActionDetails details)
    {
      destroyedClan.DeactivateClan();
      foreach (WarPartyComponent warPartyComponent in destroyedClan.WarPartyComponents.ToList<WarPartyComponent>())
      {
        PartyBase destroyerParty = (PartyBase) null;
        if (warPartyComponent.MobileParty.MapEvent != null)
        {
          destroyerParty = warPartyComponent.MobileParty.MapEventSide.OtherSide.LeaderParty;
          if (warPartyComponent.MobileParty.MapEvent != MobileParty.MainParty.MapEvent)
            warPartyComponent.MobileParty.MapEventSide = (MapEventSide) null;
        }
        DestroyPartyAction.Apply(destroyerParty, warPartyComponent.MobileParty);
      }
      List<Hero> list = destroyedClan.Heroes.Where<Hero>((Func<Hero, bool>) (x => x.IsAlive)).ToList<Hero>();
      for (int index = 0; index < list.Count; ++index)
      {
        Hero victim = list[index];
        if (details != DestroyClanAction.DestroyClanActionDetails.ClanLeaderDeath || victim != destroyedClan.Leader)
          KillCharacterAction.ApplyByRemove(victim);
      }
      if (details != DestroyClanAction.DestroyClanActionDetails.ClanLeaderDeath && destroyedClan.Leader != null && destroyedClan.Leader.IsAlive && destroyedClan.Leader.DeathMark == KillCharacterAction.KillCharacterActionDetail.None)
        KillCharacterAction.ApplyByRemove(destroyedClan.Leader);
      if (!destroyedClan.Settlements.IsEmpty<Settlement>())
      {
        Clan clan = FactionHelper.ChooseHeirClanForFiefs(destroyedClan);
        foreach (Settlement settlement in destroyedClan.Settlements.ToList<Settlement>())
        {
          if (settlement.IsTown || settlement.IsCastle)
          {
            Hero elementWithPredicate = clan.Lords.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => !x.IsChild && x.IsAlive));
            ChangeOwnerOfSettlementAction.ApplyByDestroyClan(settlement, elementWithPredicate);
          }
        }
      }
      FactionManager.Instance.RemoveFactionsFromCampaignWars((IFaction) destroyedClan);
      if (destroyedClan.Kingdom != null)
        ChangeKingdomAction.ApplyByLeaveKingdomByClanDestruction(destroyedClan);
      if (destroyedClan.IsRebelClan)
        Campaign.Current.CampaignObjectManager.RemoveClan(destroyedClan);
      CampaignEventDispatcher.Instance.OnClanDestroyed(destroyedClan);
    }

    public static void Apply(Clan destroyedClan)
    {
      DestroyClanAction.ApplyInternal(destroyedClan, DestroyClanAction.DestroyClanActionDetails.Default);
    }

    public static void ApplyByFailedRebellion(Clan failedRebellionClan)
    {
      DestroyClanAction.ApplyInternal(failedRebellionClan, DestroyClanAction.DestroyClanActionDetails.RebellionFailure);
    }

    public static void ApplyByClanLeaderDeath(Clan destroyedClan)
    {
      DestroyClanAction.ApplyInternal(destroyedClan, DestroyClanAction.DestroyClanActionDetails.ClanLeaderDeath);
    }

    private enum DestroyClanActionDetails
    {
      Default,
      RebellionFailure,
      ClanLeaderDeath,
    }
  }
}
