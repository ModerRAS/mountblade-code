// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.RemoveCompanionAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class RemoveCompanionAction
  {
    private static void ApplyInternal(
      Clan clan,
      Hero companion,
      RemoveCompanionAction.RemoveCompanionDetail detail)
    {
      PartyBase partyBase = companion.PartyBelongedTo != null ? companion.PartyBelongedTo.Party : companion.CurrentSettlement?.Party;
      companion.CompanionOf = (Clan) null;
      if (partyBase != null && detail != RemoveCompanionAction.RemoveCompanionDetail.ByTurningToLord)
      {
        if (partyBase.LeaderHero != companion)
        {
          partyBase.MemberRoster.AddToCounts(companion.CharacterObject, -1);
        }
        else
        {
          partyBase.MemberRoster.AddToCounts(companion.CharacterObject, -1);
          partyBase.MobileParty.RemovePartyLeader();
          if (partyBase.MemberRoster.Count == 0)
            DestroyPartyAction.Apply((PartyBase) null, partyBase.MobileParty);
          else
            DisbandPartyAction.StartDisband(partyBase.MobileParty);
        }
      }
      if (detail == RemoveCompanionAction.RemoveCompanionDetail.Fire)
      {
        companion.CompanionOf = (Clan) null;
        if (companion.PartyBelongedToAsPrisoner != null)
          EndCaptivityAction.ApplyByEscape(companion);
        else
          MakeHeroFugitiveAction.Apply(companion);
        if (companion.IsWanderer)
          companion.ResetEquipments();
      }
      if (companion.GovernorOf != null)
        ChangeGovernorAction.RemoveGovernorOf(companion);
      CampaignEventDispatcher.Instance.OnCompanionRemoved(companion, detail);
    }

    public static void ApplyByFire(Clan clan, Hero companion)
    {
      RemoveCompanionAction.ApplyInternal(clan, companion, RemoveCompanionAction.RemoveCompanionDetail.Fire);
    }

    public static void ApplyAfterQuest(Clan clan, Hero companion)
    {
      RemoveCompanionAction.ApplyInternal(clan, companion, RemoveCompanionAction.RemoveCompanionDetail.AfterQuest);
    }

    public static void ApplyByDeath(Clan clan, Hero companion)
    {
      RemoveCompanionAction.ApplyInternal(clan, companion, RemoveCompanionAction.RemoveCompanionDetail.Death);
    }

    public static void ApplyByByTurningToLord(Clan clan, Hero companion)
    {
      RemoveCompanionAction.ApplyInternal(clan, companion, RemoveCompanionAction.RemoveCompanionDetail.ByTurningToLord);
    }

    public enum RemoveCompanionDetail
    {
      Fire,
      Death,
      AfterQuest,
      ByTurningToLord,
    }
  }
}
