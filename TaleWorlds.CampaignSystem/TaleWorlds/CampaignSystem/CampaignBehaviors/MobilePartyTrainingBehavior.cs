// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.MobilePartyTrainingBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class MobilePartyTrainingBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.HourlyTickParty));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnDailyTickParty));
      CampaignEvents.PlayerUpgradedTroopsEvent.AddNonSerializedListener((object) this, new Action<CharacterObject, CharacterObject, int>(this.OnPlayerUpgradedTroops));
    }

    private void OnPlayerUpgradedTroops(CharacterObject troop, CharacterObject upgrade, int number)
    {
      SkillLevelingManager.OnUpgradeTroops(PartyBase.MainParty, troop, upgrade, number);
    }

    private void HourlyTickParty(MobileParty mobileParty)
    {
      if (mobileParty.LeaderHero == null)
        return;
      if (mobileParty.BesiegerCamp != null)
        SkillLevelingManager.OnSieging(mobileParty);
      if (mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty && mobileParty.AttachedParties.Count > 0)
        SkillLevelingManager.OnLeadingArmy(mobileParty);
      if (!mobileParty.IsActive)
        return;
      this.WorkSkills(mobileParty);
    }

    private void OnDailyTickParty(MobileParty mobileParty)
    {
      foreach (TroopRosterElement troop in (List<TroopRosterElement>) mobileParty.MemberRoster.GetTroopRoster())
      {
        ExplainedNumber effectiveDailyExperience = Campaign.Current.Models.PartyTrainingModel.GetEffectiveDailyExperience(mobileParty, troop);
        if (!troop.Character.IsHero)
          mobileParty.Party.MemberRoster.AddXpToTroop(MathF.Round(effectiveDailyExperience.ResultNumber * (float) troop.Number), troop.Character);
      }
      if (!mobileParty.HasPerk(DefaultPerks.Bow.Trainer) || mobileParty.IsDisbanding)
        return;
      Hero hero = (Hero) null;
      int num = int.MaxValue;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero)
        {
          int skillValue = troopRosterElement.Character.HeroObject.GetSkillValue(DefaultSkills.Bow);
          if (skillValue < num)
          {
            num = skillValue;
            hero = troopRosterElement.Character.HeroObject;
          }
        }
      }
      hero?.AddSkillXp(DefaultSkills.Bow, DefaultPerks.Bow.Trainer.PrimaryBonus);
    }

    private void CheckScouting(MobileParty mobileParty)
    {
      if (mobileParty.EffectiveScout == null || !mobileParty.IsMoving)
        return;
      TerrainType faceTerrainType = Campaign.Current.MapSceneWrapper.GetFaceTerrainType(mobileParty.CurrentNavigationFace);
      if (mobileParty != MobileParty.MainParty)
        SkillLevelingManager.OnAIPartiesTravel(mobileParty.EffectiveScout, mobileParty.IsCaravan, faceTerrainType);
      SkillLevelingManager.OnTraverseTerrain(mobileParty, faceTerrainType);
    }

    private void WorkSkills(MobileParty mobileParty)
    {
      if (!mobileParty.IsMoving)
        return;
      this.CheckScouting(mobileParty);
      if (CampaignTime.Now.GetHourOfDay % 4 != 1)
        return;
      this.CheckMovementSkills(mobileParty);
    }

    private void CheckMovementSkills(MobileParty mobileParty)
    {
      if (mobileParty == MobileParty.MainParty)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character.IsHero)
          {
            if (troopRosterElement.Character.Equipment.Horse.IsEmpty)
              SkillLevelingManager.OnTravelOnFoot(troopRosterElement.Character.HeroObject, mobileParty.Speed);
            else
              SkillLevelingManager.OnTravelOnHorse(troopRosterElement.Character.HeroObject, mobileParty.Speed);
          }
        }
      }
      else
      {
        if (mobileParty.LeaderHero == null)
          return;
        if (mobileParty.LeaderHero.CharacterObject.Equipment.Horse.IsEmpty)
          SkillLevelingManager.OnTravelOnFoot(mobileParty.LeaderHero, mobileParty.Speed);
        else
          SkillLevelingManager.OnTravelOnHorse(mobileParty.LeaderHero, mobileParty.Speed);
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
