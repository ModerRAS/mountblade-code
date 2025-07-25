// Decompiled with JetBrains decompiler
// Type: Helpers.PartyBaseHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class PartyBaseHelper
  {
    public static TextObject GetPartySizeText(PartyBase party)
    {
      TextObject partySizeText;
      if (party.NumberOfHealthyMembers == party.NumberOfAllMembers)
      {
        partySizeText = new TextObject(party.NumberOfHealthyMembers.ToString());
      }
      else
      {
        MBTextManager.SetTextVariable("HEALTHY_NUM", party.NumberOfHealthyMembers);
        MBTextManager.SetTextVariable("WOUNDED_NUM", party.NumberOfAllMembers - party.NumberOfHealthyMembers);
        partySizeText = GameTexts.FindText("str_party_health");
      }
      return partySizeText;
    }

    public static TextObject GetPartySizeText(
      int healtyNumber,
      int woundedNumber,
      bool isInspected)
    {
      string seed = "";
      if (isInspected)
      {
        if (woundedNumber == 0)
          return new TextObject(healtyNumber, (Dictionary<string, object>) null);
        TextObject text = GameTexts.FindText("str_party_health");
        text.SetTextVariable("HEALTHY_NUM", healtyNumber);
        text.SetTextVariable("WOUNDED_NUM", woundedNumber);
        return text;
      }
      return new TextObject("{=!}" + ((IEnumerable<int>) new int[4]
      {
        0,
        10,
        100,
        1000
      }).Where<int>((Func<int, bool>) (t => t < healtyNumber + woundedNumber)).Aggregate<int, string>(seed, (Func<string, int, string>) ((current, t) => current + "?")));
    }

    public static float FindPartySizeNormalLimit(MobileParty mobileParty)
    {
      return MathF.Max(0.1f, (float) mobileParty.LimitedPartySize / (float) mobileParty.Party.PartySizeLimit);
    }

    public static Hero GetCaptainOfTroop(PartyBase affectorParty, CharacterObject affectorCharacter)
    {
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) affectorParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero && !troopRosterElement.Character.HeroObject.IsWounded && (double) MBRandom.RandomFloat < 0.20000000298023224)
          return troopRosterElement.Character.HeroObject;
      }
      return affectorParty.LeaderHero;
    }

    public static string PrintRosterContents(TroopRoster roster)
    {
      MBStringBuilder mbStringBuilder = new MBStringBuilder();
      mbStringBuilder.Initialize(callerMemberName: nameof (PrintRosterContents));
      for (int index = 0; index < roster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = roster.GetElementCopyAtIndex(index);
        TextObject textObject1;
        if (elementCopyAtIndex.Character.IsHero)
        {
          textObject1 = elementCopyAtIndex.Character.Name;
        }
        else
        {
          TextObject textObject2 = new TextObject("{=fW0XS9JC}{ELEMENT_NUMBER} {ELEMENT_CHAR_NAME}");
          textObject2.SetTextVariable("ELEMENT_NUMBER", elementCopyAtIndex.Number);
          textObject2.SetTextVariable("ELEMENT_CHAR_NAME", elementCopyAtIndex.Character.Name);
          textObject1 = textObject2;
        }
        mbStringBuilder.Append<TextObject>(textObject1);
        if (index < roster.Count - 1)
          mbStringBuilder.Append<string>(", ");
      }
      return mbStringBuilder.ToStringAndRelease();
    }

    public static TextObject PrintSummarisedItemRoster(ItemRoster items)
    {
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      int num5 = 0;
      int num6 = 0;
      int num7 = 0;
      int num8 = 0;
      ItemObject itemObject1 = (ItemObject) null;
      ItemObject itemObject2 = (ItemObject) null;
      ItemObject itemObject3 = (ItemObject) null;
      ItemObject itemObject4 = (ItemObject) null;
      for (int index = 0; index < items.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = items.GetElementCopyAtIndex(index);
        ItemObject itemObject5 = elementCopyAtIndex.EquipmentElement.Item;
        if (itemObject5.IsTradeGood)
        {
          int num9;
          if (itemObject3 == null)
          {
            num9 = 1;
          }
          else
          {
            int num10 = itemObject3.Value;
            num9 = 0;
          }
          int? nullable = num9 != 0 ? new int?(-1) : itemObject3?.Value;
          int num11 = itemObject5.Value;
          if (nullable.GetValueOrDefault() < num11 & nullable.HasValue)
          {
            num6 = elementCopyAtIndex.Amount;
            itemObject3 = itemObject5;
          }
          num5 += elementCopyAtIndex.Amount;
        }
        else if (itemObject5.HasArmorComponent)
        {
          int num12;
          if (itemObject2 == null)
          {
            num12 = 1;
          }
          else
          {
            int num13 = itemObject2.Value;
            num12 = 0;
          }
          int? nullable = num12 != 0 ? new int?(-1) : itemObject2?.Value;
          int num14 = itemObject5.Value;
          if (nullable.GetValueOrDefault() < num14 & nullable.HasValue)
          {
            num4 = elementCopyAtIndex.Amount;
            itemObject2 = itemObject5;
          }
          num3 += elementCopyAtIndex.Amount;
        }
        else if (itemObject5.WeaponComponent != null)
        {
          int num15;
          if (itemObject1 == null)
          {
            num15 = 1;
          }
          else
          {
            int num16 = itemObject1.Value;
            num15 = 0;
          }
          int? nullable = num15 != 0 ? new int?(-1) : itemObject1?.Value;
          int num17 = itemObject5.Value;
          if (nullable.GetValueOrDefault() < num17 & nullable.HasValue)
          {
            num2 = elementCopyAtIndex.Amount;
            itemObject1 = itemObject5;
          }
          num1 += elementCopyAtIndex.Amount;
        }
        else
        {
          int num18;
          if (itemObject4 == null)
          {
            num18 = 1;
          }
          else
          {
            int num19 = itemObject4.Value;
            num18 = 0;
          }
          int? nullable = num18 != 0 ? new int?(-1) : itemObject4?.Value;
          int num20 = itemObject5.Value;
          if (nullable.GetValueOrDefault() < num20 & nullable.HasValue)
          {
            num8 = elementCopyAtIndex.Amount;
            itemObject4 = itemObject5;
          }
          num7 += elementCopyAtIndex.Amount;
        }
      }
      int num21 = num5 - num6;
      int num22 = num3 - num4;
      int num23 = num1 - num2;
      int num24 = num7 - num8;
      int[] numArray1 = new int[4]{ num6, num4, num2, num8 };
      int[] numArray2 = new int[4]
      {
        num21,
        num22,
        num23,
        num24
      };
      ItemObject[] itemObjectArray = new ItemObject[4]
      {
        itemObject3,
        itemObject2,
        itemObject1,
        itemObject4
      };
      TextObject[,] textObjectArray = new TextObject[4, 2]
      {
        {
          new TextObject("{=nc9KELFA}trade goods"),
          new TextObject("{=eVcvaxz6}trade good")
        },
        {
          new TextObject("{=YJJwR5PB}pieces of armour"),
          new TextObject("{=pF47ldtJ}piece of armour")
        },
        {
          new TextObject("{=ADabRUeh}weapons"),
          new TextObject("{=Rs8xhY46}weapon")
        },
        {
          new TextObject("{=Py5jvZWL}type of items"),
          new TextObject("{=2HmzaFVK}type of item")
        }
      };
      List<TextObject> textObjects = new List<TextObject>();
      for (int index = 0; index < numArray1.Length; ++index)
      {
        if (numArray1[index] != 0)
        {
          TextObject textObject = new TextObject("{=eBea9Ext}{VALUABLE_ITEM_COUNT} {VALUABLE_ITEM_NAME}{?IS_THERE_OTHER_ITEMS} and {?PLURAL}{OTHER_ITEMS_COUNT}other {OTHER_ITEMS_CATEGORY_PLURAL}{?}an other {OTHER_ITEMS_CATEGORY_SINGULAR}{\\?}{?}{\\?}");
          textObject.SetTextVariable("OTHER_ITEMS_COUNT", numArray2[index]);
          textObject.SetTextVariable("OTHER_ITEMS_CATEGORY_PLURAL", textObjectArray[index, 0]);
          textObject.SetTextVariable("OTHER_ITEMS_CATEGORY_SINGULAR", textObjectArray[index, 1]);
          textObject.SetTextVariable("VALUABLE_ITEM_COUNT", numArray1[index]);
          textObject.SetTextVariable("VALUABLE_ITEM_NAME", itemObjectArray[index].Name);
          textObject.SetTextVariable("IS_THERE_OTHER_ITEMS", numArray2[index] > 0 ? 1 : 0);
          textObject.SetTextVariable("PLURAL", numArray2[index] == 1 ? 0 : 1);
          textObjects.Add(textObject);
        }
      }
      return textObjects.Count <= 0 ? TextObject.Empty : GameTexts.GameTextHelper.MergeTextObjectsWithComma(textObjects, false);
    }

    public static TextObject PrintRegularTroopCategories(TroopRoster roster)
    {
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      for (int index = 0; index < roster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = roster.GetElementCopyAtIndex(index);
        CharacterObject character = elementCopyAtIndex.Character;
        if (!character.IsHero && elementCopyAtIndex.Number != 0)
        {
          if (character.IsInfantry)
            num1 += elementCopyAtIndex.Number;
          else if (character.IsRanged)
          {
            if (character.IsMounted)
              num4 += elementCopyAtIndex.Number;
            else
              num2 += elementCopyAtIndex.Number;
          }
          else if (character.IsMounted)
            num3 += elementCopyAtIndex.Number;
        }
      }
      Dictionary<string, int> dictionary = new Dictionary<string, int>();
      if (num1 != 0)
        dictionary.Add("Infantry", num1);
      if (num2 != 0)
        dictionary.Add("Ranged", num2);
      if (num3 != 0)
        dictionary.Add("Cavalry", num3);
      if (num4 != 0)
        dictionary.Add("HorseArcher", num4);
      List<TextObject> textObjects = new List<TextObject>();
      foreach (KeyValuePair<string, int> keyValuePair in dictionary)
      {
        TextObject textObject = new TextObject("{=ksTDGuXs}{TROOP_TYPE_COUNT} {TROOP_TYPE} {?TROOP_TYPE_COUNT>1}troops{?}troop{\\?}");
        textObject.SetTextVariable("TROOP_TYPE_COUNT", keyValuePair.Value);
        textObject.SetTextVariable("TROOP_TYPE", GameTexts.FindText("str_troop_type_name", keyValuePair.Key));
        textObjects.Add(textObject);
      }
      return GameTexts.GameTextHelper.MergeTextObjectsWithComma(textObjects, true);
    }

    public static CharacterObject GetVisualPartyLeader(PartyBase party)
    {
      if (party == null)
        return (CharacterObject) null;
      if (party.LeaderHero != null)
        return party.LeaderHero.CharacterObject;
      TroopRoster memberRoster = party.MemberRoster;
      return ((object) memberRoster != null ? (memberRoster.TotalManCount > 0 ? 1 : 0) : 0) == 0 ? (CharacterObject) null : party.MemberRoster.GetCharacterAtIndex(0);
    }

    public static int GetSpeedLimitation(
      ItemRoster partyItemRoster,
      out ItemObject speedLimitationItem)
    {
      speedLimitationItem = (ItemObject) null;
      int speedLimitation = 100;
      foreach (ItemRosterElement itemRosterElement in partyItemRoster)
      {
        EquipmentElement equipmentElement = itemRosterElement.EquipmentElement;
        if (equipmentElement.Item != null)
        {
          equipmentElement = itemRosterElement.EquipmentElement;
          if (equipmentElement.Item.IsAnimal)
          {
            int num = speedLimitation;
            equipmentElement = itemRosterElement.EquipmentElement;
            int modifiedMountSpeed = equipmentElement.GetModifiedMountSpeed(in EquipmentElement.Invalid);
            if (num > modifiedMountSpeed)
            {
              equipmentElement = itemRosterElement.EquipmentElement;
              speedLimitation = equipmentElement.GetModifiedMountSpeed(in EquipmentElement.Invalid);
              ref ItemObject local = ref speedLimitationItem;
              equipmentElement = itemRosterElement.EquipmentElement;
              ItemObject itemObject = equipmentElement.Item;
              local = itemObject;
            }
          }
        }
      }
      return speedLimitation;
    }

    public static bool DoesSurrenderIsLogicalForParty(
      MobileParty ourParty,
      MobileParty enemyParty,
      float acceptablePowerRatio = 0.1f)
    {
      float totalStrength1 = enemyParty.Party.TotalStrength;
      float totalStrength2 = ourParty.Party.TotalStrength;
      LocatableSearchData<MobileParty> data = Campaign.Current.MobilePartyLocator.StartFindingLocatablesAroundPosition(enemyParty.Position2D, 6f);
      for (MobileParty nextLocatable = Campaign.Current.MobilePartyLocator.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = Campaign.Current.MobilePartyLocator.FindNextLocatable(ref data))
      {
        if (nextLocatable != enemyParty && nextLocatable != ourParty && (double) nextLocatable.Aggressiveness > 0.0099999997764825821 && nextLocatable.CurrentSettlement == null)
        {
          if (nextLocatable.MapFaction == enemyParty.MapFaction || nextLocatable.MapFaction.IsBanditFaction && enemyParty.MapFaction.IsBanditFaction)
            totalStrength1 += nextLocatable.Party.TotalStrength;
          else if (nextLocatable.MapFaction == ourParty.MapFaction || nextLocatable.MapFaction.IsBanditFaction && ourParty.MapFaction.IsBanditFaction)
            totalStrength2 += nextLocatable.Party.TotalStrength;
        }
      }
      int num1 = 0;
      foreach (ItemRosterElement itemRosterElement in ourParty.ItemRoster)
        num1 += itemRosterElement.EquipmentElement.GetBaseValue() * itemRosterElement.Amount;
      float num2 = (float) (0.75 + 0.25 * (double) MathF.Sqrt((float) (num1 + (ourParty.LeaderHero != null ? ourParty.LeaderHero.Gold : ourParty.PartyTradeGold)) / 1000f));
      float num3 = totalStrength1 * acceptablePowerRatio * MathF.Min(2f, 1f / num2) * ourParty.Party.RandomFloat(0.5f, 1f);
      return (double) totalStrength2 < (double) num3;
    }

    public static bool HasFeat(PartyBase party, FeatObject feat)
    {
      if (party == null)
        return false;
      if (party.LeaderHero != null)
        return party.LeaderHero.Culture.HasFeat(feat);
      if (party.Culture != null)
        return party.Culture.HasFeat(feat);
      if (party.Owner != null)
        return party.Owner.Culture.HasFeat(feat);
      return party.Settlement != null && party.Settlement.Culture.HasFeat(feat);
    }
  }
}
