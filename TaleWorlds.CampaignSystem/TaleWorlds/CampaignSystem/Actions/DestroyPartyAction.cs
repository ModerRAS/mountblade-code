// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.DestroyPartyAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class DestroyPartyAction
  {
    private static void ApplyInternal(PartyBase destroyerParty, MobileParty destroyedParty)
    {
      if (destroyedParty == MobileParty.MainParty)
        return;
      if (destroyedParty.IsCaravan && destroyedParty.Party.Owner != null && destroyedParty.Party.Owner.GetPerkValue(DefaultPerks.Trade.InsurancePlans))
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, destroyedParty.Party.Owner, (int) DefaultPerks.Trade.InsurancePlans.PrimaryBonus);
      destroyedParty.RemoveParty();
      CampaignEventDispatcher.Instance.OnMobilePartyDestroyed(destroyedParty, destroyerParty);
    }

    public static void Apply(PartyBase destroyerParty, MobileParty destroyedParty)
    {
      DestroyPartyAction.ApplyInternal(destroyerParty, destroyedParty);
    }

    public static void ApplyForDisbanding(MobileParty disbandedParty, Settlement relatedSettlement)
    {
      if (disbandedParty.CurrentSettlement != null)
        LeaveSettlementAction.ApplyForParty(disbandedParty);
      CampaignEventDispatcher.Instance.OnPartyDisbanded(disbandedParty, relatedSettlement);
      DestroyPartyAction.ApplyInternal((PartyBase) null, disbandedParty);
    }
  }
}
