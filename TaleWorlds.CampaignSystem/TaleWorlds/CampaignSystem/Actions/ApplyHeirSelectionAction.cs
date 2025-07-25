// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ApplyHeirSelectionAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ApplyHeirSelectionAction
  {
    private static void ApplyInternal(Hero heir, bool isRetirement = false)
    {
      if (heir.PartyBelongedTo != null && heir.PartyBelongedTo.IsCaravan)
      {
        Settlement targetSettlement = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (s => (s.IsTown || s.IsCastle) && !FactionManager.IsAtWarAgainstFaction(s.MapFaction, heir.MapFaction))) ?? SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (s =>
        {
          if (s.IsVillage)
            return true;
          return !s.IsHideout && !s.IsFortification;
        }));
        DestroyPartyAction.Apply((PartyBase) null, heir.PartyBelongedTo);
        TeleportHeroAction.ApplyImmediateTeleportToSettlement(heir, targetSettlement);
      }
      ApplyHeirSelectionAction.TransferCaravanOwnerships(heir);
      ChangeClanLeaderAction.ApplyWithSelectedNewLeader(Clan.PlayerClan, heir);
      if (isRetirement)
      {
        DisableHeroAction.Apply(Hero.MainHero);
        if (heir.PartyBelongedTo != MobileParty.MainParty)
          MobileParty.MainParty.MemberRoster.RemoveTroop(CharacterObject.PlayerCharacter);
        LogEntry.AddLogEntry((LogEntry) new PlayerRetiredLogEntry(Hero.MainHero));
        TextObject to = new TextObject("{=0MTzaxau}{?CHARACTER.GENDER}She{?}He{\\?} retired from adventuring, and was last seen with a group of mountain hermits living a life of quiet contemplation.");
        to.SetCharacterProperties("CHARACTER", Hero.MainHero.CharacterObject);
        Hero.MainHero.EncyclopediaText = to;
      }
      else
        KillCharacterAction.ApplyByDeathMarkForced(Hero.MainHero, true);
      if (heir.CurrentSettlement != null && heir.PartyBelongedTo != null)
      {
        LeaveSettlementAction.ApplyForCharacterOnly(heir);
        LeaveSettlementAction.ApplyForParty(heir.PartyBelongedTo);
      }
      for (int index = Hero.MainHero.OwnedWorkshops.Count - 1; index >= 0; --index)
        ChangeOwnerOfWorkshopAction.ApplyByDeath(Hero.MainHero.OwnedWorkshops[index], heir);
      if (heir.PartyBelongedTo != MobileParty.MainParty)
      {
        for (int index = MobileParty.MainParty.MemberRoster.Count - 1; index >= 0; --index)
        {
          TroopRosterElement elementCopyAtIndex = MobileParty.MainParty.MemberRoster.GetElementCopyAtIndex(index);
          if (elementCopyAtIndex.Character.IsHero && elementCopyAtIndex.Character.HeroObject != Hero.MainHero)
            MakeHeroFugitiveAction.Apply(elementCopyAtIndex.Character.HeroObject);
        }
      }
      if (MobileParty.MainParty.Army != null)
        DisbandArmyAction.ApplyByUnknownReason(MobileParty.MainParty.Army);
      ChangePlayerCharacterAction.Apply(heir);
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
    }

    public static void ApplyByDeath(Hero heir) => ApplyHeirSelectionAction.ApplyInternal(heir);

    public static void ApplyByRetirement(Hero heir)
    {
      ApplyHeirSelectionAction.ApplyInternal(heir, true);
    }

    private static void TransferCaravanOwnerships(Hero newLeader)
    {
      foreach (Hero hero in (List<Hero>) Clan.PlayerClan.Heroes)
      {
        if (hero.PartyBelongedTo != null && hero.PartyBelongedTo.IsCaravan)
          CaravanPartyComponent.TransferCaravanOwnership(hero.PartyBelongedTo, newLeader, hero.PartyBelongedTo.HomeSettlement);
      }
    }
  }
}
