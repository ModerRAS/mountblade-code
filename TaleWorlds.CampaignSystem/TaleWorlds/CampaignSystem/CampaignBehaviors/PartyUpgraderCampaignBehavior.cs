// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartyUpgraderCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PartyUpgraderCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.MapEventEnded));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
    }

    private void MapEventEnded(MapEvent mapEvent)
    {
      foreach (PartyBase involvedParty in mapEvent.InvolvedParties)
        this.UpgradeReadyTroops(involvedParty);
    }

    public void DailyTickParty(MobileParty party)
    {
      if (party.MapEvent != null)
        return;
      this.UpgradeReadyTroops(party.Party);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private PartyUpgraderCampaignBehavior.TroopUpgradeArgs SelectPossibleUpgrade(
      List<PartyUpgraderCampaignBehavior.TroopUpgradeArgs> possibleUpgrades)
    {
      PartyUpgraderCampaignBehavior.TroopUpgradeArgs troopUpgradeArgs = possibleUpgrades[0];
      if (possibleUpgrades.Count > 1)
      {
        float num1 = 0.0f;
        foreach (PartyUpgraderCampaignBehavior.TroopUpgradeArgs possibleUpgrade in possibleUpgrades)
          num1 += possibleUpgrade.UpgradeChance;
        float num2 = num1 * MBRandom.RandomFloat;
        foreach (PartyUpgraderCampaignBehavior.TroopUpgradeArgs possibleUpgrade in possibleUpgrades)
        {
          num2 -= possibleUpgrade.UpgradeChance;
          if ((double) num2 <= 0.0)
          {
            troopUpgradeArgs = possibleUpgrade;
            break;
          }
        }
      }
      return troopUpgradeArgs;
    }

    private List<PartyUpgraderCampaignBehavior.TroopUpgradeArgs> GetPossibleUpgradeTargets(
      PartyBase party,
      TroopRosterElement element)
    {
      PartyWageModel partyWageModel = Campaign.Current.Models.PartyWageModel;
      List<PartyUpgraderCampaignBehavior.TroopUpgradeArgs> possibleUpgradeTargets = new List<PartyUpgraderCampaignBehavior.TroopUpgradeArgs>();
      CharacterObject character = element.Character;
      int num = element.Number - element.WoundedNumber;
      if (num > 0)
      {
        PartyTroopUpgradeModel troopUpgradeModel = Campaign.Current.Models.PartyTroopUpgradeModel;
        for (int index = 0; index < character.UpgradeTargets.Length; ++index)
        {
          CharacterObject upgradeTarget = character.UpgradeTargets[index];
          int upgradeXpCost = character.GetUpgradeXpCost(party, index);
          if (upgradeXpCost > 0)
          {
            num = MathF.Min(num, element.Xp / upgradeXpCost);
            if (num == 0)
              continue;
          }
          if (upgradeTarget.Tier > character.Tier && party.MobileParty.HasLimitedWage() && party.MobileParty.TotalWage + num * (partyWageModel.GetCharacterWage(upgradeTarget) - partyWageModel.GetCharacterWage(character)) > party.MobileParty.PaymentLimit)
          {
            num = MathF.Max(0, MathF.Min(num, (party.MobileParty.PaymentLimit - party.MobileParty.TotalWage) / (partyWageModel.GetCharacterWage(upgradeTarget) - partyWageModel.GetCharacterWage(character))));
            if (num == 0)
              continue;
          }
          int upgradeGoldCost = character.GetUpgradeGoldCost(party, index);
          if (party.LeaderHero != null && upgradeGoldCost != 0 && num * upgradeGoldCost > party.LeaderHero.Gold)
          {
            num = party.LeaderHero.Gold / upgradeGoldCost;
            if (num == 0)
              continue;
          }
          if ((!party.Culture.IsBandit || upgradeTarget.Culture.IsBandit) && (character.Occupation != Occupation.Bandit || troopUpgradeModel.CanPartyUpgradeTroopToTarget(party, character, upgradeTarget)))
          {
            float chanceForTroopUpgrade = Campaign.Current.Models.PartyTroopUpgradeModel.GetUpgradeChanceForTroopUpgrade(party, character, index);
            possibleUpgradeTargets.Add(new PartyUpgraderCampaignBehavior.TroopUpgradeArgs(character, upgradeTarget, num, upgradeGoldCost, upgradeXpCost, chanceForTroopUpgrade));
          }
        }
      }
      return possibleUpgradeTargets;
    }

    private void ApplyEffects(
      PartyBase party,
      PartyUpgraderCampaignBehavior.TroopUpgradeArgs upgradeArgs)
    {
      if (party.Owner != null && party.Owner.IsAlive)
      {
        SkillLevelingManager.OnUpgradeTroops(party, upgradeArgs.Target, upgradeArgs.UpgradeTarget, upgradeArgs.PossibleUpgradeCount);
        GiveGoldAction.ApplyBetweenCharacters(party.Owner, (Hero) null, upgradeArgs.UpgradeGoldCost * upgradeArgs.PossibleUpgradeCount, true);
      }
      else
      {
        if (party.LeaderHero == null || !party.LeaderHero.IsAlive)
          return;
        SkillLevelingManager.OnUpgradeTroops(party, upgradeArgs.Target, upgradeArgs.UpgradeTarget, upgradeArgs.PossibleUpgradeCount);
        GiveGoldAction.ApplyBetweenCharacters(party.LeaderHero, (Hero) null, upgradeArgs.UpgradeGoldCost * upgradeArgs.PossibleUpgradeCount, true);
      }
    }

    private void UpgradeTroop(
      PartyBase party,
      int rosterIndex,
      PartyUpgraderCampaignBehavior.TroopUpgradeArgs upgradeArgs)
    {
      TroopRoster memberRoster = party.MemberRoster;
      CharacterObject upgradeTarget = upgradeArgs.UpgradeTarget;
      int possibleUpgradeCount = upgradeArgs.PossibleUpgradeCount;
      int num = upgradeArgs.UpgradeXpCost * possibleUpgradeCount;
      memberRoster.SetElementXp(rosterIndex, memberRoster.GetElementXp(rosterIndex) - num);
      memberRoster.AddToCounts(upgradeArgs.Target, -possibleUpgradeCount);
      memberRoster.AddToCounts(upgradeTarget, possibleUpgradeCount);
      if (possibleUpgradeCount <= 0)
        return;
      this.ApplyEffects(party, upgradeArgs);
    }

    public void UpgradeReadyTroops(PartyBase party)
    {
      if (party == PartyBase.MainParty || !party.IsActive)
        return;
      TroopRoster memberRoster = party.MemberRoster;
      PartyTroopUpgradeModel troopUpgradeModel = Campaign.Current.Models.PartyTroopUpgradeModel;
      for (int index = 0; index < memberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = memberRoster.GetElementCopyAtIndex(index);
        if (troopUpgradeModel.IsTroopUpgradeable(party, elementCopyAtIndex.Character))
        {
          List<PartyUpgraderCampaignBehavior.TroopUpgradeArgs> possibleUpgradeTargets = this.GetPossibleUpgradeTargets(party, elementCopyAtIndex);
          if (possibleUpgradeTargets.Count > 0)
          {
            PartyUpgraderCampaignBehavior.TroopUpgradeArgs upgradeArgs = this.SelectPossibleUpgrade(possibleUpgradeTargets);
            this.UpgradeTroop(party, index, upgradeArgs);
          }
        }
      }
    }

    private readonly struct TroopUpgradeArgs
    {
      public readonly CharacterObject Target;
      public readonly CharacterObject UpgradeTarget;
      public readonly int PossibleUpgradeCount;
      public readonly int UpgradeGoldCost;
      public readonly int UpgradeXpCost;
      public readonly float UpgradeChance;

      public TroopUpgradeArgs(
        CharacterObject target,
        CharacterObject upgradeTarget,
        int possibleUpgradeCount,
        int upgradeGoldCost,
        int upgradeXpCost,
        float upgradeChance)
      {
        this.Target = target;
        this.UpgradeTarget = upgradeTarget;
        this.PossibleUpgradeCount = possibleUpgradeCount;
        this.UpgradeGoldCost = upgradeGoldCost;
        this.UpgradeXpCost = upgradeXpCost;
        this.UpgradeChance = upgradeChance;
      }
    }
  }
}
