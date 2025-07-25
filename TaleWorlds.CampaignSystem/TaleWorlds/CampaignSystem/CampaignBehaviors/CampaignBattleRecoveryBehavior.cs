// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CampaignBattleRecoveryBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CampaignBattleRecoveryBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
    }

    private void DailyTickParty(MobileParty party)
    {
      if (!party.HasPerk(DefaultPerks.Medicine.Veterinarian) || (double) MBRandom.RandomFloat >= (double) DefaultPerks.Medicine.Veterinarian.PrimaryBonus)
        return;
      ItemModifier itemModifier = MBObjectManager.Instance.GetObject<ItemModifier>("lame_horse");
      int num = MBRandom.RandomInt(party.ItemRoster.Count);
      for (int index1 = num; index1 < party.ItemRoster.Count + num; ++index1)
      {
        int index2 = index1 % party.ItemRoster.Count;
        ItemObject itemAtIndex = party.ItemRoster.GetItemAtIndex(index2);
        ItemRosterElement elementCopyAtIndex = party.ItemRoster.GetElementCopyAtIndex(index2);
        if (elementCopyAtIndex.EquipmentElement.ItemModifier == itemModifier)
        {
          party.ItemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, -1);
          party.ItemRoster.Add(new ItemRosterElement(itemAtIndex, 1));
          break;
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      this.CheckRecoveryForMapEventSide(mapEvent.AttackerSide);
      this.CheckRecoveryForMapEventSide(mapEvent.DefenderSide);
    }

    private void CheckRecoveryForMapEventSide(MapEventSide mapEventSide)
    {
      if ((mapEventSide.MapEvent.EventType == MapEvent.BattleTypes.FieldBattle || mapEventSide.MapEvent.EventType == MapEvent.BattleTypes.Siege ? 1 : (mapEventSide.MapEvent.EventType == MapEvent.BattleTypes.SiegeOutside ? 1 : 0)) == 0)
        return;
      foreach (MapEventParty party1 in (List<MapEventParty>) mapEventSide.Parties)
      {
        PartyBase party2 = party1.Party;
        if (party2.IsMobile)
        {
          MobileParty mobileParty = party2.MobileParty;
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party1.WoundedInBattle.GetTroopRoster())
          {
            int indexOfTroop = party1.WoundedInBattle.FindIndexOfTroop(troopRosterElement.Character);
            int elementNumber = party1.WoundedInBattle.GetElementNumber(indexOfTroop);
            if (mobileParty.HasPerk(DefaultPerks.Medicine.BattleHardened))
              this.GiveTroopXp(troopRosterElement, elementNumber, party2, (int) DefaultPerks.Medicine.BattleHardened.PrimaryBonus);
          }
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party1.DiedInBattle.GetTroopRoster())
          {
            int indexOfTroop = party1.DiedInBattle.FindIndexOfTroop(troopRosterElement.Character);
            int elementNumber = party1.DiedInBattle.GetElementNumber(indexOfTroop);
            if (mobileParty.HasPerk(DefaultPerks.Medicine.Veterinarian) && troopRosterElement.Character.IsMounted)
              this.RecoverMountWithChance(troopRosterElement, elementNumber, party2);
          }
        }
      }
    }

    private void RecoverMountWithChance(
      TroopRosterElement troopRosterElement,
      int count,
      PartyBase party)
    {
      EquipmentElement equipmentElement = troopRosterElement.Character.Equipment[10];
      if (equipmentElement.Item == null)
        return;
      for (int index = 0; index < count; ++index)
      {
        if ((double) MBRandom.RandomFloat < (double) DefaultPerks.Medicine.Veterinarian.SecondaryBonus)
          party.ItemRoster.AddToCounts(equipmentElement.Item, 1);
      }
    }

    private void GiveTroopXp(
      TroopRosterElement troopRosterElement,
      int count,
      PartyBase partyBase,
      int xp)
    {
      partyBase.MemberRoster.AddXpToTroop(xp * count, troopRosterElement.Character);
    }
  }
}
