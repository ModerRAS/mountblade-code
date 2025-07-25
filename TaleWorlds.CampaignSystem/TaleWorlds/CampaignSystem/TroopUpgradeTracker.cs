// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TroopUpgradeTracker
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class TroopUpgradeTracker
  {
    private Dictionary<Tuple<PartyBase, CharacterObject>, int> _upgradedRegulars = new Dictionary<Tuple<PartyBase, CharacterObject>, int>();
    private Dictionary<Hero, int[]> _heroSkills = new Dictionary<Hero, int[]>();

    public void AddTrackedTroop(PartyBase party, CharacterObject character)
    {
      if (character.IsHero)
      {
        int count = Skills.All.Count;
        int[] numArray = new int[count];
        for (int index = 0; index < count; ++index)
          numArray[index] = character.GetSkillValue(Skills.All[index]);
        this._heroSkills[character.HeroObject] = numArray;
      }
      else
      {
        int indexOfTroop = party.MemberRoster.FindIndexOfTroop(character);
        if (indexOfTroop < 0)
          return;
        TroopRosterElement elementCopyAtIndex = party.MemberRoster.GetElementCopyAtIndex(indexOfTroop);
        int readyToUpgradeSafe = this.CalculateReadyToUpgradeSafe(ref elementCopyAtIndex, party);
        this._upgradedRegulars[new Tuple<PartyBase, CharacterObject>(party, character)] = readyToUpgradeSafe;
      }
    }

    public IEnumerable<SkillObject> CheckSkillUpgrades(Hero hero)
    {
      if (!this._heroSkills.IsEmpty<KeyValuePair<Hero, int[]>>())
      {
        int[] oldSkillLevels = this._heroSkills[hero];
        for (int i = 0; i < Skills.All.Count; ++i)
        {
          SkillObject skill = Skills.All[i];
          int newSkillLevel = hero.CharacterObject.GetSkillValue(skill);
          while (newSkillLevel > oldSkillLevels[i])
          {
            ++oldSkillLevels[i];
            yield return skill;
          }
          skill = (SkillObject) null;
        }
        oldSkillLevels = (int[]) null;
      }
    }

    public int CheckUpgradedCount(PartyBase party, CharacterObject character)
    {
      int num1 = 0;
      if (!character.IsHero)
      {
        int indexOfTroop = party.MemberRoster.FindIndexOfTroop(character);
        if (indexOfTroop >= 0)
        {
          TroopRosterElement elementCopyAtIndex = party.MemberRoster.GetElementCopyAtIndex(indexOfTroop);
          int readyToUpgradeSafe = this.CalculateReadyToUpgradeSafe(ref elementCopyAtIndex, party);
          int b;
          if (this._upgradedRegulars.TryGetValue(new Tuple<PartyBase, CharacterObject>(party, character), out b) && readyToUpgradeSafe > b)
          {
            int num2 = MathF.Min(elementCopyAtIndex.Number, b);
            num1 = readyToUpgradeSafe - num2;
            this._upgradedRegulars[new Tuple<PartyBase, CharacterObject>(party, character)] = readyToUpgradeSafe;
          }
        }
        else
        {
          int num3;
          if (this._upgradedRegulars.TryGetValue(new Tuple<PartyBase, CharacterObject>(party, character), out num3) && num3 > 0)
            num1 = -num3;
        }
      }
      return num1;
    }

    private int CalculateReadyToUpgradeSafe(ref TroopRosterElement el, PartyBase owner)
    {
      int b = 0;
      CharacterObject character = el.Character;
      if (!character.IsHero && character.UpgradeTargets.Length != 0)
      {
        int num = 0;
        for (int index = 0; index < character.UpgradeTargets.Length; ++index)
        {
          int upgradeXpCost = character.GetUpgradeXpCost(owner, index);
          if (num < upgradeXpCost)
            num = upgradeXpCost;
        }
        if (num > 0)
          b = (el.Xp + el.DeltaXp) / num;
      }
      return MathF.Max(MathF.Min(el.Number, b), 0);
    }
  }
}
