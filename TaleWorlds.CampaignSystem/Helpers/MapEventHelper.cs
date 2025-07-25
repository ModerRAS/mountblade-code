// Decompiled with JetBrains decompiler
// Type: Helpers.MapEventHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace Helpers
{
  public static class MapEventHelper
  {
    public static PartyBase GetSallyOutDefenderLeader()
    {
      return MobileParty.MainParty.CurrentSettlement.Town.GarrisonParty == null ? (MobileParty.MainParty.CurrentSettlement.Party?.MapEvent == null ? MobileParty.MainParty.CurrentSettlement.SiegeEvent.BesiegerCamp.LeaderParty.Party : MobileParty.MainParty.CurrentSettlement.Party.MapEvent.DefenderSide.LeaderParty) : MobileParty.MainParty.CurrentSettlement.Town.GarrisonParty.MapEvent.DefenderSide.LeaderParty;
    }

    public static bool CanLeaveBattle(MobileParty mobileParty)
    {
      if (mobileParty.MapEvent.DefenderSide.LeaderParty == mobileParty.Party || mobileParty.MapEvent.DefenderSide.LeaderParty.IsSettlement && mobileParty.CurrentSettlement == mobileParty.MapEvent.DefenderSide.LeaderParty.Settlement && mobileParty.MapFaction == mobileParty.MapEvent.DefenderSide.LeaderParty.MapFaction || mobileParty.MapEvent.PartiesOnSide(BattleSideEnum.Attacker).FindIndexQ<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party == mobileParty.Party)) >= 0 && mobileParty.MapEvent.IsRaid && mobileParty.Army != null && mobileParty.Army.LeaderParty != mobileParty)
        return false;
      return mobileParty.MapEvent.PartiesOnSide(BattleSideEnum.Defender).FindIndexQ<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party == mobileParty.Party)) < 0 || mobileParty.Army == null || mobileParty.Army.LeaderParty == mobileParty;
    }

    public static void OnConversationEnd()
    {
      if (PlayerEncounter.Current == null || (PlayerEncounter.EncounteredMobileParty == null || PlayerEncounter.EncounteredMobileParty.MapFaction == null || PlayerEncounter.EncounteredMobileParty.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction)) && (PlayerEncounter.EncounteredParty == null || PlayerEncounter.EncounteredParty.MapFaction == null || PlayerEncounter.EncounteredParty.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction)))
        return;
      PlayerEncounter.LeaveEncounter = true;
    }
  }
}
