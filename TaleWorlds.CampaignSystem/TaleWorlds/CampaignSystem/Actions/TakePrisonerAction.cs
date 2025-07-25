// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.TakePrisonerAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class TakePrisonerAction
  {
    private static void ApplyInternal(
      PartyBase capturerParty,
      Hero prisonerCharacter,
      bool isEventCalled = true)
    {
      if (prisonerCharacter.PartyBelongedTo != null)
      {
        if (prisonerCharacter.PartyBelongedTo.LeaderHero == prisonerCharacter)
          prisonerCharacter.PartyBelongedTo.RemovePartyLeader();
        prisonerCharacter.PartyBelongedTo.MemberRoster.RemoveTroop(prisonerCharacter.CharacterObject);
      }
      prisonerCharacter.CaptivityStartTime = CampaignTime.Now;
      prisonerCharacter.ChangeState(Hero.CharacterStates.Prisoner);
      capturerParty.AddPrisoner(prisonerCharacter.CharacterObject, 1);
      if (prisonerCharacter == Hero.MainHero)
        PlayerCaptivity.StartCaptivity(capturerParty);
      if (capturerParty.IsSettlement && prisonerCharacter.StayingInSettlement != null)
        prisonerCharacter.StayingInSettlement = (Settlement) null;
      if (!isEventCalled)
        return;
      CampaignEventDispatcher.Instance.OnHeroPrisonerTaken(capturerParty, prisonerCharacter);
    }

    public static void Apply(PartyBase capturerParty, Hero prisonerCharacter)
    {
      TakePrisonerAction.ApplyInternal(capturerParty, prisonerCharacter);
    }

    public static void ApplyByTakenFromPartyScreen(FlattenedTroopRoster roster)
    {
      foreach (FlattenedTroopRosterElement troopRosterElement in roster)
      {
        if (troopRosterElement.Troop.IsHero)
          TakePrisonerAction.ApplyInternal(PartyBase.MainParty, troopRosterElement.Troop.HeroObject);
      }
      CampaignEventDispatcher.Instance.OnPrisonerTaken(roster);
    }
  }
}
