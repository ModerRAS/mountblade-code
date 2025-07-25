// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Party.PartyScreenData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Party
{
  public class PartyScreenData : IEnumerable<(TroopRosterElement, bool)>, IEnumerable
  {
    public TroopRoster RightMemberRoster;
    public TroopRoster LeftMemberRoster;
    public TroopRoster RightPrisonerRoster;
    public TroopRoster LeftPrisonerRoster;
    public ItemRoster RightItemRoster;
    public Dictionary<CharacterObject, int> RightRecruitableData;
    public int PartyGoldChangeAmount;
    public (int, int, int) PartyInfluenceChangeAmount;
    public int PartyMoraleChangeAmount;
    public int PartyHorseChangeAmount;
    public List<Tuple<CharacterObject, CharacterObject, int>> UpgradedTroopsHistory;
    public List<Tuple<CharacterObject, int>> TransferredPrisonersHistory;
    public List<Tuple<CharacterObject, int>> RecruitedPrisonersHistory;
    public List<Tuple<EquipmentElement, int>> UsedUpgradeHorsesHistory;

    public PartyBase RightParty { get; private set; }

    public PartyBase LeftParty { get; private set; }

    public Hero RightPartyLeaderHero { get; private set; }

    public Hero LeftPartyLeaderHero { get; private set; }

    public override int GetHashCode() => base.GetHashCode();

    public PartyScreenData()
    {
      this.PartyGoldChangeAmount = 0;
      this.PartyInfluenceChangeAmount = (0, 0, 0);
      this.PartyMoraleChangeAmount = 0;
      this.PartyHorseChangeAmount = 0;
      this.RightRecruitableData = new Dictionary<CharacterObject, int>();
      this.UpgradedTroopsHistory = new List<Tuple<CharacterObject, CharacterObject, int>>();
      this.TransferredPrisonersHistory = new List<Tuple<CharacterObject, int>>();
      this.RecruitedPrisonersHistory = new List<Tuple<CharacterObject, int>>();
      this.UsedUpgradeHorsesHistory = new List<Tuple<EquipmentElement, int>>();
    }

    public void InitializeCopyFrom(PartyBase rightParty, PartyBase leftParty)
    {
      if (rightParty != null)
      {
        this.RightParty = rightParty;
        this.RightPartyLeaderHero = rightParty.LeaderHero;
      }
      if (leftParty != null)
      {
        this.LeftParty = leftParty;
        this.LeftPartyLeaderHero = leftParty.LeaderHero;
      }
      this.RightMemberRoster = TroopRoster.CreateDummyTroopRoster();
      this.LeftMemberRoster = TroopRoster.CreateDummyTroopRoster();
      this.RightPrisonerRoster = TroopRoster.CreateDummyTroopRoster();
      this.LeftPrisonerRoster = TroopRoster.CreateDummyTroopRoster();
      this.RightItemRoster = new ItemRoster();
    }

    public void CopyFromPartyAndRoster(
      TroopRoster rightPartyMemberRoster,
      TroopRoster rightPartyPrisonerRoster,
      TroopRoster leftPartyMemberRoster,
      TroopRoster leftPartyPrisonerRoster,
      PartyBase rightParty)
    {
      PrisonerRecruitmentCalculationModel calculationModel = Campaign.Current.Models.PrisonerRecruitmentCalculationModel;
      for (int index = 0; index < rightPartyMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = rightPartyMemberRoster.GetElementCopyAtIndex(index);
        this.RightMemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      for (int index = 0; index < leftPartyMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = leftPartyMemberRoster.GetElementCopyAtIndex(index);
        this.LeftMemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      this.RightRecruitableData.Clear();
      for (int index = 0; index < rightPartyPrisonerRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = rightPartyPrisonerRoster.GetElementCopyAtIndex(index);
        this.RightPrisonerRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
        if (rightParty != null)
        {
          bool? isMainParty = rightParty.MobileParty?.IsMainParty;
          bool flag = true;
          if (isMainParty.GetValueOrDefault() == flag & isMainParty.HasValue)
          {
            int recruitableNumber = calculationModel.CalculateRecruitableNumber(PartyBase.MainParty, elementCopyAtIndex.Character);
            if (!this.RightRecruitableData.ContainsKey(elementCopyAtIndex.Character))
              this.RightRecruitableData.Add(elementCopyAtIndex.Character, recruitableNumber);
          }
        }
      }
      for (int index = 0; index < leftPartyPrisonerRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = leftPartyPrisonerRoster.GetElementCopyAtIndex(index);
        this.LeftPrisonerRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      if (rightParty == null)
        return;
      for (int index = 0; index < rightParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = rightParty.ItemRoster.GetElementCopyAtIndex(index);
        this.RightItemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, elementCopyAtIndex.Amount);
      }
    }

    public void CopyFromScreenData(PartyScreenData data)
    {
      this.RightMemberRoster.Clear();
      for (int index = 0; index < data.RightMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = data.RightMemberRoster.GetElementCopyAtIndex(index);
        this.RightMemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      this.RightPrisonerRoster.Clear();
      for (int index = 0; index < data.RightPrisonerRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = data.RightPrisonerRoster.GetElementCopyAtIndex(index);
        this.RightPrisonerRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      this.RightItemRoster.Clear();
      if (data.RightItemRoster != null)
      {
        for (int index = 0; index < data.RightItemRoster.Count; ++index)
        {
          ItemRosterElement elementCopyAtIndex = data.RightItemRoster.GetElementCopyAtIndex(index);
          this.RightItemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, elementCopyAtIndex.Amount);
        }
      }
      this.LeftMemberRoster.Clear();
      for (int index = 0; index < data.LeftMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = data.LeftMemberRoster.GetElementCopyAtIndex(index);
        this.LeftMemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      this.LeftPrisonerRoster.Clear();
      for (int index = 0; index < data.LeftPrisonerRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = data.LeftPrisonerRoster.GetElementCopyAtIndex(index);
        this.LeftPrisonerRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      this.PartyGoldChangeAmount = data.PartyGoldChangeAmount;
      this.PartyInfluenceChangeAmount = data.PartyInfluenceChangeAmount;
      this.PartyMoraleChangeAmount = data.PartyMoraleChangeAmount;
      this.PartyHorseChangeAmount = data.PartyHorseChangeAmount;
      this.RightRecruitableData = new Dictionary<CharacterObject, int>((IDictionary<CharacterObject, int>) data.RightRecruitableData);
      this.UpgradedTroopsHistory = new List<Tuple<CharacterObject, CharacterObject, int>>((IEnumerable<Tuple<CharacterObject, CharacterObject, int>>) data.UpgradedTroopsHistory);
      this.TransferredPrisonersHistory = new List<Tuple<CharacterObject, int>>((IEnumerable<Tuple<CharacterObject, int>>) data.TransferredPrisonersHistory);
      this.RecruitedPrisonersHistory = new List<Tuple<CharacterObject, int>>((IEnumerable<Tuple<CharacterObject, int>>) data.RecruitedPrisonersHistory);
      this.UsedUpgradeHorsesHistory = new List<Tuple<EquipmentElement, int>>((IEnumerable<Tuple<EquipmentElement, int>>) data.UsedUpgradeHorsesHistory);
    }

    public void BindRostersFrom(
      TroopRoster rightPartyMemberRoster,
      TroopRoster rightPartyPrisonerRoster,
      TroopRoster leftPartyMemberRoster,
      TroopRoster leftPartyPrisonerRoster,
      PartyBase rightParty,
      PartyBase leftParty)
    {
      this.RightParty = rightParty;
      this.LeftParty = leftParty;
      if (rightParty != null)
      {
        this.RightItemRoster = rightParty.ItemRoster;
        this.RightPartyLeaderHero = rightParty.LeaderHero;
      }
      if (leftParty != null)
        this.LeftPartyLeaderHero = leftParty.LeaderHero;
      this.RightMemberRoster = rightPartyMemberRoster;
      this.LeftMemberRoster = leftPartyMemberRoster;
      this.RightPrisonerRoster = rightPartyPrisonerRoster;
      this.LeftPrisonerRoster = leftPartyPrisonerRoster;
      if (rightParty == null)
        return;
      bool? isMainParty = rightParty.MobileParty?.IsMainParty;
      bool flag = true;
      if (!(isMainParty.GetValueOrDefault() == flag & isMainParty.HasValue))
        return;
      this.RightRecruitableData = new Dictionary<CharacterObject, int>();
      PrisonerRecruitmentCalculationModel calculationModel = Campaign.Current.Models.PrisonerRecruitmentCalculationModel;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) rightParty.PrisonRoster.GetTroopRoster())
      {
        int recruitableNumber = calculationModel.CalculateRecruitableNumber(PartyBase.MainParty, troopRosterElement.Character);
        if (!this.RightRecruitableData.ContainsKey(troopRosterElement.Character))
          this.RightRecruitableData.Add(troopRosterElement.Character, recruitableNumber);
      }
    }

    private List<Tuple<Hero, SkillEffect.PerkRole>> GetPartyHeroesWithPerks(TroopRoster roster)
    {
      MobileParty mobileParty = roster?.OwnerParty?.MobileParty;
      if (mobileParty == null)
        return (List<Tuple<Hero, SkillEffect.PerkRole>>) null;
      List<Tuple<Hero, SkillEffect.PerkRole>> partyHeroesWithPerks = new List<Tuple<Hero, SkillEffect.PerkRole>>();
      for (int index = 0; index < roster.Count; ++index)
      {
        Hero heroObject = roster.GetCharacterAtIndex(index)?.HeroObject;
        if (heroObject != null)
        {
          SkillEffect.PerkRole heroPerkRole = mobileParty.GetHeroPerkRole(heroObject);
          if (heroPerkRole != SkillEffect.PerkRole.None)
            partyHeroesWithPerks.Add(new Tuple<Hero, SkillEffect.PerkRole>(heroObject, heroPerkRole));
        }
      }
      return partyHeroesWithPerks;
    }

    public void ResetUsing(PartyScreenData partyScreenData)
    {
      List<Tuple<Hero, SkillEffect.PerkRole>> partyHeroesWithPerks1 = this.GetPartyHeroesWithPerks(this.LeftMemberRoster);
      List<Tuple<Hero, SkillEffect.PerkRole>> partyHeroesWithPerks2 = this.GetPartyHeroesWithPerks(this.RightMemberRoster);
      this.RightMemberRoster.Clear();
      this.RightMemberRoster.RemoveZeroCounts();
      for (int index = 0; index < partyScreenData.RightMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = partyScreenData.RightMemberRoster.GetElementCopyAtIndex(index);
        this.RightMemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      if (this.RightParty?.MobileParty != null)
        this.RightParty.MobileParty.ChangePartyLeader(partyScreenData.RightPartyLeaderHero);
      this.LeftMemberRoster.Clear();
      this.LeftMemberRoster.RemoveZeroCounts();
      for (int index = 0; index < partyScreenData.LeftMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = partyScreenData.LeftMemberRoster.GetElementCopyAtIndex(index);
        this.LeftMemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      if (this.LeftParty?.MobileParty != null)
        this.LeftParty.MobileParty.ChangePartyLeader(partyScreenData.LeftPartyLeaderHero);
      this.RightPrisonerRoster.Clear();
      this.LeftPrisonerRoster.Clear();
      this.RightPrisonerRoster.RemoveZeroCounts();
      for (int index = 0; index < partyScreenData.RightPrisonerRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = partyScreenData.RightPrisonerRoster.GetElementCopyAtIndex(index);
        this.RightPrisonerRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      this.LeftPrisonerRoster.RemoveZeroCounts();
      for (int index = 0; index < partyScreenData.LeftPrisonerRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = partyScreenData.LeftPrisonerRoster.GetElementCopyAtIndex(index);
        this.LeftPrisonerRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number, woundedCount: elementCopyAtIndex.WoundedNumber, xpChange: elementCopyAtIndex.Xp);
      }
      if (this.RightItemRoster != null)
      {
        this.RightItemRoster.Clear();
        for (int index = 0; index < partyScreenData.RightItemRoster.Count; ++index)
        {
          ItemRosterElement elementCopyAtIndex = partyScreenData.RightItemRoster.GetElementCopyAtIndex(index);
          this.RightItemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, elementCopyAtIndex.Amount);
        }
      }
      this.PartyGoldChangeAmount = partyScreenData.PartyGoldChangeAmount;
      this.PartyInfluenceChangeAmount = partyScreenData.PartyInfluenceChangeAmount;
      this.PartyMoraleChangeAmount = partyScreenData.PartyMoraleChangeAmount;
      this.PartyHorseChangeAmount = partyScreenData.PartyHorseChangeAmount;
      this.RightRecruitableData = new Dictionary<CharacterObject, int>((IDictionary<CharacterObject, int>) partyScreenData.RightRecruitableData);
      this.UpgradedTroopsHistory = new List<Tuple<CharacterObject, CharacterObject, int>>((IEnumerable<Tuple<CharacterObject, CharacterObject, int>>) partyScreenData.UpgradedTroopsHistory);
      this.TransferredPrisonersHistory = new List<Tuple<CharacterObject, int>>((IEnumerable<Tuple<CharacterObject, int>>) partyScreenData.TransferredPrisonersHistory);
      this.RecruitedPrisonersHistory = new List<Tuple<CharacterObject, int>>((IEnumerable<Tuple<CharacterObject, int>>) partyScreenData.RecruitedPrisonersHistory);
      this.UsedUpgradeHorsesHistory = new List<Tuple<EquipmentElement, int>>((IEnumerable<Tuple<EquipmentElement, int>>) partyScreenData.UsedUpgradeHorsesHistory);
      if (partyHeroesWithPerks1 != null && this.LeftParty?.MobileParty != null)
      {
        for (int index = 0; index < partyHeroesWithPerks1.Count; ++index)
          this.LeftParty.MobileParty.SetHeroPerkRole(partyHeroesWithPerks1[index].Item1, partyHeroesWithPerks1[index].Item2);
      }
      if (partyHeroesWithPerks2 == null || this.RightParty?.MobileParty == null)
        return;
      for (int index = 0; index < partyHeroesWithPerks2.Count; ++index)
        this.RightParty.MobileParty.SetHeroPerkRole(partyHeroesWithPerks2[index].Item1, partyHeroesWithPerks2[index].Item2);
    }

    public bool IsThereAnyTroopTradeDifferenceBetween(PartyScreenData other)
    {
      MBList<TroopRosterElement> troopRoster1 = this.RightMemberRoster.GetTroopRoster();
      MBList<TroopRosterElement> troopRoster2 = other.RightMemberRoster.GetTroopRoster();
      if (troopRoster1.Count != troopRoster2.Count)
        return true;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) troopRoster1)
      {
        TroopRosterElement elem = troopRosterElement;
        if (troopRoster2.FindIndex((Predicate<TroopRosterElement>) (x => x.Character == elem.Character && x.Number == elem.Number)) == -1)
          return true;
      }
      MBList<TroopRosterElement> troopRoster3 = this.RightPrisonerRoster.GetTroopRoster();
      MBList<TroopRosterElement> troopRoster4 = other.RightPrisonerRoster.GetTroopRoster();
      if (troopRoster3.Count != troopRoster4.Count)
        return true;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) troopRoster3)
      {
        TroopRosterElement elem = troopRosterElement;
        if (troopRoster4.FindIndex((Predicate<TroopRosterElement>) (x => x.Character == elem.Character && x.Number == elem.Number)) == -1)
          return true;
      }
      return false;
    }

    public List<TroopTradeDifference> GetTroopTradeDifferencesFromTo(
      PartyScreenData toPartyScreenData)
    {
      List<TroopTradeDifference> differencesFromTo = new List<TroopTradeDifference>();
      Debug.Print("Current settlement: " + Settlement.CurrentSettlement?.StringId);
      Debug.Print("Left party id: " + toPartyScreenData.LeftParty?.MobileParty?.StringId);
      Debug.Print("Right party id: " + toPartyScreenData.RightParty?.MobileParty?.StringId);
      foreach ((TroopRosterElement, bool) tuple1 in this)
      {
        TroopRosterElement troopRosterElement = tuple1.Item1;
        int number1 = troopRosterElement.Number;
        int num1 = 0;
        foreach ((TroopRosterElement, bool) tuple2 in toPartyScreenData)
        {
          if (tuple2.Item1.Character == tuple1.Item1.Character && tuple2.Item2 == tuple1.Item2)
          {
            int num2 = num1;
            troopRosterElement = tuple2.Item1;
            int number2 = troopRosterElement.Number;
            num1 = num2 + number2;
          }
        }
        if (number1 != num1)
        {
          TroopTradeDifference troopTradeDifference = new TroopTradeDifference()
          {
            Troop = tuple1.Item1.Character,
            ToCount = num1,
            FromCount = number1,
            IsPrisoner = tuple1.Item2
          };
          differencesFromTo.Add(troopTradeDifference);
        }
        Debug.Print("currently owned: " + (object) number1 + ", previously owned: " + (object) num1 + " name: " + tuple1.Item1.Character.StringId);
      }
      foreach ((TroopRosterElement, bool) tuple3 in toPartyScreenData)
      {
        TroopRosterElement troopRosterElement = tuple3.Item1;
        int number3 = troopRosterElement.Number;
        int num3 = 0;
        foreach ((TroopRosterElement, bool) tuple4 in this)
        {
          if (tuple3.Item1.Character == tuple4.Item1.Character && tuple3.Item2 == tuple4.Item2)
          {
            int num4 = num3;
            troopRosterElement = tuple3.Item1;
            int number4 = troopRosterElement.Number;
            num3 = num4 + number4;
          }
        }
        if (num3 != number3)
        {
          TroopTradeDifference troopTradeDifference = new TroopTradeDifference()
          {
            Troop = tuple3.Item1.Character,
            ToCount = number3,
            FromCount = num3,
            IsPrisoner = tuple3.Item2
          };
          if (!differencesFromTo.Contains(troopTradeDifference))
          {
            differencesFromTo.Add(troopTradeDifference);
            Debug.Print("currently owned: " + (object) num3 + ", previously owned: " + (object) number3 + " name: " + tuple3.Item1.Character.StringId);
          }
        }
      }
      return differencesFromTo;
    }

    private IEnumerator<(TroopRosterElement, bool)> EnumerateElements()
    {
      int i;
      for (i = 0; i < this.RightMemberRoster.Count; ++i)
        yield return (this.RightMemberRoster.GetElementCopyAtIndex(i), false);
      for (i = 0; i < this.RightPrisonerRoster.Count; ++i)
        yield return (this.RightPrisonerRoster.GetElementCopyAtIndex(i), true);
    }

    public IEnumerator<(TroopRosterElement, bool)> GetEnumerator() => this.EnumerateElements();

    IEnumerator IEnumerable.GetEnumerator() => (IEnumerator) this.EnumerateElements();

    public override bool Equals(object obj) => (object) this == obj;

    public static bool operator ==(PartyScreenData a, PartyScreenData b)
    {
      if ((object) a == (object) b)
        return true;
      if ((object) a == null || (object) b == null || a.PartyGoldChangeAmount != b.PartyGoldChangeAmount || a.PartyInfluenceChangeAmount.Item1 != b.PartyInfluenceChangeAmount.Item1 || a.PartyInfluenceChangeAmount.Item2 != b.PartyInfluenceChangeAmount.Item2 || a.PartyInfluenceChangeAmount.Item3 != b.PartyInfluenceChangeAmount.Item3 || a.PartyMoraleChangeAmount != b.PartyMoraleChangeAmount || a.PartyHorseChangeAmount != b.PartyHorseChangeAmount || a.RightMemberRoster.Count != b.RightMemberRoster.Count || a.RightPrisonerRoster.Count != b.RightPrisonerRoster.Count || a.RightRecruitableData.Count != b.RightRecruitableData.Count || a.UpgradedTroopsHistory.Count != b.UpgradedTroopsHistory.Count || a.TransferredPrisonersHistory.Count != b.TransferredPrisonersHistory.Count || a.RecruitedPrisonersHistory.Count != b.RecruitedPrisonersHistory.Count || a.UsedUpgradeHorsesHistory.Count != b.UsedUpgradeHorsesHistory.Count || a.RightMemberRoster != b.RightMemberRoster || a.RightPrisonerRoster != b.RightPrisonerRoster)
        return false;
      foreach (CharacterObject key in a.RightRecruitableData.Keys)
      {
        if (!b.RightRecruitableData.ContainsKey(key) || a.RightRecruitableData[key] != b.RightRecruitableData[key])
          return false;
      }
      for (int index = 0; index < a.UpgradedTroopsHistory.Count; ++index)
      {
        if (a.UpgradedTroopsHistory[index].Item1 != b.UpgradedTroopsHistory[index].Item1 || a.UpgradedTroopsHistory[index].Item2 != b.UpgradedTroopsHistory[index].Item2 || a.UpgradedTroopsHistory[index].Item3 != b.UpgradedTroopsHistory[index].Item3)
          return false;
      }
      for (int index = 0; index < a.TransferredPrisonersHistory.Count; ++index)
      {
        if (a.TransferredPrisonersHistory[index].Item1 != b.TransferredPrisonersHistory[index].Item1 || a.TransferredPrisonersHistory[index].Item2 != b.TransferredPrisonersHistory[index].Item2)
          return false;
      }
      for (int index = 0; index < a.RecruitedPrisonersHistory.Count; ++index)
      {
        if (a.RecruitedPrisonersHistory[index].Item1 != b.RecruitedPrisonersHistory[index].Item1 || a.RecruitedPrisonersHistory[index].Item2 != b.RecruitedPrisonersHistory[index].Item2)
          return false;
      }
      for (int index = 0; index < a.UsedUpgradeHorsesHistory.Count; ++index)
      {
        EquipmentElement equipmentElement = a.UsedUpgradeHorsesHistory[index].Item1;
        ItemObject itemObject1 = equipmentElement.Item;
        equipmentElement = b.UsedUpgradeHorsesHistory[index].Item1;
        ItemObject itemObject2 = equipmentElement.Item;
        if (itemObject1 != itemObject2 || a.UsedUpgradeHorsesHistory[index].Item2 != b.UsedUpgradeHorsesHistory[index].Item2)
          return false;
      }
      return true;
    }

    public static bool operator !=(PartyScreenData first, PartyScreenData second)
    {
      return !(first == second);
    }
  }
}
