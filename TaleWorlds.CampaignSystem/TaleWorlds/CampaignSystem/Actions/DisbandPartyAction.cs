// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.DisbandPartyAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class DisbandPartyAction
  {
    public static void StartDisband(MobileParty disbandParty)
    {
      if (disbandParty.IsDisbanding)
        return;
      if (disbandParty.MemberRoster.TotalManCount == 0)
      {
        DestroyPartyAction.Apply((PartyBase) null, disbandParty);
      }
      else
      {
        IDisbandPartyCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<IDisbandPartyCampaignBehavior>();
        if (campaignBehavior != null && campaignBehavior.IsPartyWaitingForDisband(disbandParty))
          return;
        if (disbandParty.Army != null)
        {
          if (disbandParty == disbandParty.Army.LeaderParty)
            DisbandArmyAction.ApplyByUnknownReason(disbandParty.Army);
          else
            disbandParty.Army = (Army) null;
        }
        TextObject name = new TextObject("{=ithcVNfA}{CLAN_NAME}{.o} Party");
        name.SetTextVariable("CLAN_NAME", disbandParty.ActualClan != null ? disbandParty.ActualClan.Name : CampaignData.NeutralFactionName);
        disbandParty.SetCustomName(name);
        CampaignEventDispatcher.Instance.OnPartyDisbandStarted(disbandParty);
      }
    }

    public static void CancelDisband(MobileParty disbandParty)
    {
      CampaignEventDispatcher.Instance.OnPartyDisbandCanceled(disbandParty);
      disbandParty.IsDisbanding = false;
      disbandParty.SetCustomName(TextObject.Empty);
      disbandParty.Ai.SetMoveModeHold();
    }
  }
}
