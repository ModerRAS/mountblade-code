// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.LeaveSettlementAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class LeaveSettlementAction
  {
    public static void ApplyForParty(MobileParty mobileParty)
    {
      Settlement currentSettlement = mobileParty.CurrentSettlement;
      if (mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty)
      {
        foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.Army.LeaderParty.AttachedParties)
        {
          if (attachedParty == MobileParty.MainParty && PlayerEncounter.Current != null)
            PlayerEncounter.Finish();
          else if (attachedParty.CurrentSettlement == currentSettlement)
            LeaveSettlementAction.ApplyForParty(attachedParty);
        }
        foreach (MobileParty party in (List<MobileParty>) mobileParty.Army.Parties)
        {
          if (party != mobileParty && party.MapEvent == null && party.CurrentSettlement == null)
          {
            party.Ai.SetMoveModeHold();
            party.Ai.SetMoveEscortParty(mobileParty);
          }
        }
      }
      if (mobileParty == MobileParty.MainParty && (MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty))
        mobileParty.Ai.SetMoveModeHold();
      mobileParty.CurrentSettlement = (Settlement) null;
      currentSettlement.SettlementComponent.OnPartyLeft(mobileParty);
      CampaignEventDispatcher.Instance.OnSettlementLeft(mobileParty, currentSettlement);
    }

    public static void ApplyForCharacterOnly(Hero hero)
    {
      Settlement currentSettlement = hero.CurrentSettlement;
      if (hero != null)
        hero.StayingInSettlement = (Settlement) null;
      Location locationOfCharacter = currentSettlement.LocationComplex?.GetLocationOfCharacter(hero);
      if (locationOfCharacter == null || locationOfCharacter.GetLocationCharacter(hero) == null)
        return;
      currentSettlement.LocationComplex.RemoveCharacterIfExists(hero);
      PlayerEncounter.LocationEncounter?.RemoveAccompanyingCharacter(hero);
    }
  }
}
