// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BattleCampaignBehavior
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
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class BattleCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnHeroCombatHitEvent.AddNonSerializedListener((object) this, new Action<CharacterObject, CharacterObject, PartyBase, WeaponComponentData, bool, int>(this.OnHeroCombatHit));
      CampaignEvents.CollectLootsEvent.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>, ItemRoster, MBList<TroopRosterElement>, float>(this.CollectLoots));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void CollectLoots(
      MapEvent mapEvent,
      PartyBase winnerParty,
      Dictionary<PartyBase, ItemRoster> lootedItems,
      ItemRoster lootedItemsForParty,
      ICollection<TroopRosterElement> shareFromCasualties,
      float lootAmount)
    {
      foreach (KeyValuePair<PartyBase, ItemRoster> lootedItem in lootedItems)
      {
        ItemRoster itemRoster = lootedItem.Value;
        for (int index1 = itemRoster.Count - 1; index1 >= 0; --index1)
        {
          ItemRosterElement elementCopyAtIndex = itemRoster.GetElementCopyAtIndex(index1);
          ItemModifier itemModifier = elementCopyAtIndex.EquipmentElement.ItemModifier;
          bool flag = itemModifier != null && winnerParty.IsMobile && winnerParty.MobileParty.HasPerk(DefaultPerks.Engineering.Metallurgy) && (double) itemModifier.PriceMultiplier < 1.0;
          for (int index2 = 0; index2 < elementCopyAtIndex.Amount; ++index2)
          {
            if ((double) MBRandom.RandomFloat < (double) lootAmount)
            {
              if ((!flag ? 0 : ((double) MBRandom.RandomFloat < (double) DefaultPerks.Engineering.Metallurgy.PrimaryBonus ? 1 : 0)) != 0)
              {
                ItemRosterElement itemRosterElement = new ItemRosterElement(elementCopyAtIndex.EquipmentElement.Item, 1);
                lootedItemsForParty.Add(itemRosterElement);
              }
              else
                lootedItemsForParty.AddToCounts(elementCopyAtIndex.EquipmentElement, 1);
            }
          }
        }
      }
    }

    private void OnHeroCombatHit(
      CharacterObject attacker,
      CharacterObject attacked,
      PartyBase party,
      WeaponComponentData attackerWeapon,
      bool isFatal,
      int xpGained)
    {
      if (((!attacker.HeroObject.GetPerkValue(DefaultPerks.TwoHanded.BaptisedInBlood) ? 0 : (attackerWeapon != null ? 1 : 0)) & (isFatal ? 1 : 0)) == 0 || party.MemberRoster.TotalRegulars <= 0 || attackerWeapon.WeaponClass != WeaponClass.TwoHandedSword && attackerWeapon.WeaponClass != WeaponClass.TwoHandedPolearm && attackerWeapon.WeaponClass != WeaponClass.TwoHandedAxe && attackerWeapon.WeaponClass != WeaponClass.TwoHandedMace)
        return;
      for (int index = 0; index < party.MemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = party.MemberRoster.GetElementCopyAtIndex(index);
        if (!elementCopyAtIndex.Character.IsHero && elementCopyAtIndex.Character.IsInfantry)
          party.MemberRoster.AddXpToTroopAtIndex((int) DefaultPerks.TwoHanded.BaptisedInBlood.PrimaryBonus * elementCopyAtIndex.Number, index);
      }
    }
  }
}
