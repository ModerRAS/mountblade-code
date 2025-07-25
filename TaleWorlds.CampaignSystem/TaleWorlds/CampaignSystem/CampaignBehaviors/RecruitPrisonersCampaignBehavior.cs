// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.RecruitPrisonersCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class RecruitPrisonersCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnMainPartyPrisonerRecruitedEvent.AddNonSerializedListener((object) this, new Action<FlattenedTroopRoster>(this.OnMainPartyPrisonerRecruited));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickAIMobileParty));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTickMainParty));
    }

    private void HourlyTickMainParty()
    {
      MobileParty mainParty = MobileParty.MainParty;
      TroopRoster memberRoster = mainParty.MemberRoster;
      TroopRoster prisonRoster = mainParty.PrisonRoster;
      if (memberRoster.Count == 0 || memberRoster.TotalManCount <= 0 || prisonRoster.Count == 0 || prisonRoster.TotalRegulars <= 0 || mainParty.MapEvent != null)
        return;
      int num = MBRandom.RandomInt(0, prisonRoster.Count);
      bool flag = false;
      for (int index1 = num; index1 < prisonRoster.Count + num; ++index1)
      {
        int index2 = index1 % prisonRoster.Count;
        CharacterObject characterAtIndex = prisonRoster.GetCharacterAtIndex(index2);
        if (characterAtIndex.IsRegular)
        {
          CharacterObject characterObject = characterAtIndex;
          int elementNumber = mainParty.PrisonRoster.GetElementNumber(index2);
          int recruitableNumber = Campaign.Current.Models.PrisonerRecruitmentCalculationModel.CalculateRecruitableNumber(mainParty.Party, characterObject);
          if (!flag && recruitableNumber < elementNumber)
            flag = this.GenerateConformityForTroop(mainParty, characterObject);
        }
        if (flag)
          break;
      }
    }

    private void DailyTickAIMobileParty(MobileParty mobileParty)
    {
      TroopRoster prisonRoster = mobileParty.PrisonRoster;
      if (mobileParty.IsMainParty || !mobileParty.IsLordParty || prisonRoster.Count == 0 || prisonRoster.TotalRegulars <= 0 || mobileParty.MapEvent != null)
        return;
      int num1 = MBRandom.RandomInt(0, prisonRoster.Count);
      bool flag = false;
      for (int index1 = num1; index1 < prisonRoster.Count + num1; ++index1)
      {
        int index2 = index1 % prisonRoster.Count;
        CharacterObject characterAtIndex = prisonRoster.GetCharacterAtIndex(index2);
        if (characterAtIndex.IsRegular)
        {
          CharacterObject characterObject = characterAtIndex;
          int elementNumber = mobileParty.PrisonRoster.GetElementNumber(index2);
          int recruitableNumber = Campaign.Current.Models.PrisonerRecruitmentCalculationModel.CalculateRecruitableNumber(mobileParty.Party, characterObject);
          if (!flag && recruitableNumber < elementNumber)
            flag = this.GenerateConformityForTroop(mobileParty, characterObject, 24);
          if (Campaign.Current.Models.PrisonerRecruitmentCalculationModel.ShouldPartyRecruitPrisoners(mobileParty.Party))
          {
            int conformityNeeded;
            if (this.IsPrisonerRecruitable(mobileParty, characterObject, out conformityNeeded))
            {
              int num2 = mobileParty.LimitedPartySize - mobileParty.MemberRoster.TotalManCount;
              int num3 = MathF.Min(num2 > 0 ? (num2 > recruitableNumber ? recruitableNumber : num2) : 0, prisonRoster.GetElementNumber(characterObject));
              if (num3 > 0)
                this.RecruitPrisonersAi(mobileParty, characterObject, num3, conformityNeeded);
            }
          }
          else if (flag)
            break;
        }
      }
    }

    private bool GenerateConformityForTroop(
      MobileParty mobileParty,
      CharacterObject troop,
      int hours = 1)
    {
      int xpAmount = Campaign.Current.Models.PrisonerRecruitmentCalculationModel.GetConformityChangePerHour(mobileParty.Party, troop) * hours;
      mobileParty.PrisonRoster.AddXpToTroop(xpAmount, troop);
      return true;
    }

    private void ApplyPrisonerRecruitmentEffects(
      MobileParty mobileParty,
      CharacterObject troop,
      int num)
    {
      int recruitmentMoraleEffect = Campaign.Current.Models.PrisonerRecruitmentCalculationModel.GetPrisonerRecruitmentMoraleEffect(mobileParty.Party, troop, num);
      mobileParty.RecentEventsMorale += (float) recruitmentMoraleEffect;
    }

    private void RecruitPrisonersAi(
      MobileParty mobileParty,
      CharacterObject troop,
      int num,
      int conformityCost)
    {
      mobileParty.PrisonRoster.GetElementNumber(troop);
      mobileParty.PrisonRoster.GetElementXp(troop);
      mobileParty.PrisonRoster.AddToCounts(troop, -num, xpChange: -conformityCost * num);
      mobileParty.MemberRoster.AddToCounts(troop, num);
      CampaignEventDispatcher.Instance.OnTroopRecruited(mobileParty.LeaderHero, (Settlement) null, (Hero) null, troop, num);
      this.ApplyPrisonerRecruitmentEffects(mobileParty, troop, num);
    }

    private bool IsPrisonerRecruitable(
      MobileParty mobileParty,
      CharacterObject character,
      out int conformityNeeded)
    {
      return Campaign.Current.Models.PrisonerRecruitmentCalculationModel.IsPrisonerRecruitable(mobileParty.Party, character, out conformityNeeded);
    }

    private void OnMainPartyPrisonerRecruited(FlattenedTroopRoster flattenedTroopRosters)
    {
      foreach (CharacterObject troop in flattenedTroopRosters.Troops)
      {
        CampaignEventDispatcher.Instance.OnUnitRecruited(troop, 1);
        this.ApplyPrisonerRecruitmentEffects(MobileParty.MainParty, troop, 1);
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
