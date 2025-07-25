// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartyHealCampaignBehavior
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
  public class PartyHealCampaignBehavior : CampaignBehaviorBase
  {
    private Dictionary<PartyBase, float> _overflowedHealingForRegulars = new Dictionary<PartyBase, float>();
    private Dictionary<PartyBase, float> _overflowedHealingForHeroes = new Dictionary<PartyBase, float>();

    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnClanHourlyTick));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnHourlyTick));
      CampaignEvents.WeeklyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnWeeklyTick));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.OnQuarterDailyPartyTick.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnQuarterDailyPartyTick));
    }

    private void OnQuarterDailyPartyTick(MobileParty mobileParty)
    {
      if (mobileParty.IsMainParty)
        return;
      this.TryHealOrWoundParty(mobileParty, false);
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (!this._overflowedHealingForRegulars.ContainsKey(mobileParty.Party))
        return;
      this._overflowedHealingForRegulars.Remove(mobileParty.Party);
      if (!this._overflowedHealingForHeroes.ContainsKey(mobileParty.Party))
        return;
      this._overflowedHealingForHeroes.Remove(mobileParty.Party);
    }

    private void OnWeeklyTick()
    {
      List<PartyBase> partyBaseList = new List<PartyBase>();
      foreach (KeyValuePair<PartyBase, float> healingForRegular in this._overflowedHealingForRegulars)
      {
        PartyBase key = healingForRegular.Key;
        if (!key.IsActive && !key.IsValid)
          partyBaseList.Add(key);
      }
      foreach (PartyBase key in partyBaseList)
      {
        this._overflowedHealingForRegulars.Remove(key);
        if (this._overflowedHealingForHeroes.ContainsKey(key))
          this._overflowedHealingForHeroes.Remove(key);
      }
    }

    public void OnMapEventEnded(MapEvent mapEvent) => this.OnBattleEndCheckPerkEffects(mapEvent);

    private void OnBattleEndCheckPerkEffects(MapEvent mapEvent)
    {
      if ((mapEvent.EventType == MapEvent.BattleTypes.IsForcingVolunteers ? 0 : (mapEvent.EventType != MapEvent.BattleTypes.IsForcingSupplies ? 1 : 0)) == 0 || !mapEvent.HasWinner)
        return;
      foreach (PartyBase involvedParty in mapEvent.InvolvedParties)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) involvedParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character.IsHero)
          {
            Hero heroObject = troopRosterElement.Character.HeroObject;
            int endHealingAmount = Campaign.Current.Models.PartyHealingModel.GetBattleEndHealingAmount(involvedParty.MobileParty, heroObject.CharacterObject);
            if (endHealingAmount > 0)
              heroObject.Heal(endHealingAmount);
          }
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<PartyBase, float>>("_overflowedHealingForRegulars", ref this._overflowedHealingForRegulars);
      dataStore.SyncData<Dictionary<PartyBase, float>>("_overflowedHealingForHeroes", ref this._overflowedHealingForHeroes);
    }

    private void OnClanHourlyTick(Clan clan)
    {
      foreach (Hero hero in (List<Hero>) clan.Heroes)
      {
        if (hero.PartyBelongedTo == null && hero.PartyBelongedToAsPrisoner == null)
        {
          int a = MBRandom.RoundRandomized(0.5f);
          if (hero.HitPoints < hero.MaxHitPoints)
          {
            int num = MathF.Min(a, hero.MaxHitPoints - hero.HitPoints);
            hero.HitPoints += num;
          }
        }
      }
    }

    private void OnHourlyTick() => this.TryHealOrWoundParty(MobileParty.MainParty, true);

    private void TryHealOrWoundParty(MobileParty mobileParty, bool isCheckingForPlayerRelatedParty)
    {
      if (!mobileParty.IsActive || mobileParty.MapEvent != null)
        return;
      float num1;
      if (!this._overflowedHealingForHeroes.TryGetValue(mobileParty.Party, out num1))
        this._overflowedHealingForHeroes.Add(mobileParty.Party, 0.0f);
      float num2;
      if (!this._overflowedHealingForRegulars.TryGetValue(mobileParty.Party, out num2))
        this._overflowedHealingForRegulars.Add(mobileParty.Party, 0.0f);
      float num3 = isCheckingForPlayerRelatedParty ? mobileParty.HealingRateForHeroes / 24f : mobileParty.HealingRateForHeroes;
      float num4 = isCheckingForPlayerRelatedParty ? mobileParty.HealingRateForRegulars / 24f : mobileParty.HealingRateForRegulars;
      float heroesHealingValue = num1 + num3;
      float regularsHealingValue = num2 + num4;
      if ((double) heroesHealingValue >= 1.0)
        PartyHealCampaignBehavior.HealHeroes(mobileParty, ref heroesHealingValue);
      else if ((double) heroesHealingValue <= -1.0)
        PartyHealCampaignBehavior.ReduceHpHeroes(mobileParty, ref heroesHealingValue);
      if ((double) regularsHealingValue >= 1.0)
        PartyHealCampaignBehavior.HealRegulars(mobileParty, ref regularsHealingValue);
      else if ((double) regularsHealingValue <= -1.0)
        PartyHealCampaignBehavior.ReduceHpRegulars(mobileParty, ref regularsHealingValue);
      this._overflowedHealingForHeroes[mobileParty.Party] = heroesHealingValue;
      this._overflowedHealingForRegulars[mobileParty.Party] = regularsHealingValue;
    }

    private static void HealHeroes(MobileParty mobileParty, ref float heroesHealingValue)
    {
      int healAmount = MathF.Floor(heroesHealingValue);
      heroesHealingValue -= (float) healAmount;
      TroopRoster memberRoster = mobileParty.MemberRoster;
      if (memberRoster.TotalHeroes > 0)
      {
        for (int index = 0; index < memberRoster.Count; ++index)
        {
          Hero heroObject = memberRoster.GetCharacterAtIndex(index).HeroObject;
          if (heroObject != null && !heroObject.IsHealthFull())
            heroObject.Heal(healAmount, true);
        }
      }
      TroopRoster prisonRoster = mobileParty.PrisonRoster;
      if (prisonRoster.TotalHeroes <= 0)
        return;
      for (int index = 0; index < prisonRoster.Count; ++index)
      {
        Hero heroObject = prisonRoster.GetCharacterAtIndex(index).HeroObject;
        if (heroObject != null && !heroObject.IsHealthFull())
          heroObject.Heal(1);
      }
    }

    private static void ReduceHpHeroes(MobileParty mobileParty, ref float heroesHealingValue)
    {
      int a = MathF.Ceiling(heroesHealingValue);
      heroesHealingValue = (float) -(-(double) heroesHealingValue % 1.0);
      for (int index = 0; index < mobileParty.MemberRoster.Count; ++index)
      {
        Hero heroObject = mobileParty.MemberRoster.GetCharacterAtIndex(index).HeroObject;
        if (heroObject != null && heroObject.HitPoints > 0)
        {
          int num = MathF.Min(a, heroObject.HitPoints);
          heroObject.HitPoints += num;
        }
      }
    }

    private static void HealRegulars(MobileParty mobileParty, ref float regularsHealingValue)
    {
      TroopRoster memberRoster = mobileParty.MemberRoster;
      if (memberRoster.TotalWoundedRegulars == 0)
      {
        regularsHealingValue = 0.0f;
      }
      else
      {
        int a = MathF.Floor(regularsHealingValue);
        regularsHealingValue -= (float) a;
        int healedTroopCount = 0;
        float num1 = 0.0f;
        int num2 = MBRandom.RandomInt(memberRoster.Count);
        for (int index1 = 0; index1 < memberRoster.Count && a > 0; ++index1)
        {
          int index2 = (num2 + index1) % memberRoster.Count;
          CharacterObject characterAtIndex = memberRoster.GetCharacterAtIndex(index2);
          if (characterAtIndex.IsRegular)
          {
            int num3 = MathF.Min(a, memberRoster.GetElementWoundedNumber(index2));
            if (num3 > 0)
            {
              memberRoster.AddToCountsAtIndex(index2, 0, -num3);
              a -= num3;
              healedTroopCount += num3;
              num1 += (float) (characterAtIndex.Tier * num3);
            }
          }
        }
        if (healedTroopCount <= 0)
          return;
        SkillLevelingManager.OnRegularTroopHealedWhileWaiting(mobileParty, healedTroopCount, num1 / (float) healedTroopCount);
      }
    }

    private static void ReduceHpRegulars(MobileParty mobileParty, ref float regularsHealingValue)
    {
      TroopRoster memberRoster = mobileParty.MemberRoster;
      if (memberRoster.TotalRegulars - memberRoster.TotalWoundedRegulars == 0)
      {
        regularsHealingValue = 0.0f;
      }
      else
      {
        int b = MathF.Floor(-regularsHealingValue);
        regularsHealingValue = (float) -(-(double) regularsHealingValue % 1.0);
        int num = MBRandom.RandomInt(memberRoster.Count);
        for (int index1 = 0; index1 < memberRoster.Count && b > 0; ++index1)
        {
          int index2 = (num + index1) % memberRoster.Count;
          if (memberRoster.GetCharacterAtIndex(index2).IsRegular)
          {
            int woundedCountChange = MathF.Min(memberRoster.GetElementNumber(index2) - memberRoster.GetElementWoundedNumber(index2), b);
            if (woundedCountChange > 0)
            {
              memberRoster.AddToCountsAtIndex(index2, 0, woundedCountChange);
              b -= woundedCountChange;
            }
          }
        }
      }
    }
  }
}
