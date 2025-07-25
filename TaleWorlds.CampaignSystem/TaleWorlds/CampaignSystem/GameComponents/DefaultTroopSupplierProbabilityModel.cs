// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultTroopSupplierProbabilityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultTroopSupplierProbabilityModel : TroopSupplierProbabilityModel
  {
    public override void EnqueueTroopSpawnProbabilitiesAccordingToUnitSpawnPrioritization(
      MapEventParty battleParty,
      FlattenedTroopRoster priorityTroops,
      bool includePlayer,
      int sizeOfSide,
      bool forcePriorityTroops,
      List<(FlattenedTroopRosterElement, MapEventParty, float)> priorityList)
    {
      UnitSpawnPrioritizations spawnPrioritizations = UnitSpawnPrioritizations.HighLevel;
      MapEvent battle = PlayerEncounter.Battle;
      bool flag = battle != null && battle.IsSiegeAmbush;
      if (battleParty.Party == PartyBase.MainParty && !flag)
        spawnPrioritizations = Game.Current.UnitSpawnPrioritization;
      if (spawnPrioritizations != UnitSpawnPrioritizations.Default && !forcePriorityTroops)
      {
        StackArray.StackArray8Int stackArray8Int1 = new StackArray.StackArray8Int();
        int num1 = 0;
        foreach (FlattenedTroopRosterElement troop in battleParty.Troops)
        {
          if (this.CanTroopJoinBattle(troop, includePlayer))
          {
            stackArray8Int1[(int) troop.Troop.DefaultFormationClass]++;
            ++num1;
          }
        }
        StackArray.StackArray8Int stackArray8Int2 = new StackArray.StackArray8Int();
        float num2 = 1000f;
        foreach (FlattenedTroopRosterElement troop1 in battleParty.Troops)
        {
          if (this.CanTroopJoinBattle(troop1, includePlayer))
          {
            CharacterObject troop2 = troop1.Troop;
            FormationClass formationClass = troop2.GetFormationClass();
            float num3;
            if (priorityTroops != null && this.IsPriorityTroop(troop1, priorityTroops))
            {
              num3 = num2--;
            }
            else
            {
              float num4 = (float) stackArray8Int1[(int) formationClass] / (spawnPrioritizations == UnitSpawnPrioritizations.Homogeneous ? (float) (stackArray8Int2[(int) formationClass] + 1) : (float) num1);
              num3 = troop2.IsHero ? num2-- : num4;
              if (!troop2.IsHero && (spawnPrioritizations == UnitSpawnPrioritizations.HighLevel || spawnPrioritizations == UnitSpawnPrioritizations.LowLevel))
              {
                num3 += (float) troop2.Level;
                if (spawnPrioritizations == UnitSpawnPrioritizations.LowLevel)
                  num3 *= -1f;
              }
            }
            stackArray8Int1[(int) formationClass]--;
            stackArray8Int2[(int) formationClass]++;
            priorityList.Add((troop1, battleParty, num3));
          }
        }
      }
      else
      {
        int ofHealthyMembers = battleParty.Party.NumberOfHealthyMembers;
        foreach (FlattenedTroopRosterElement troop in battleParty.Troops)
        {
          if (this.CanTroopJoinBattle(troop, includePlayer))
          {
            float num5 = 1f;
            if (troop.Troop.IsHero)
            {
              float num6 = num5 * 150f;
              if (priorityTroops != null)
              {
                UniqueTroopDescriptor indexOfCharacter = priorityTroops.FindIndexOfCharacter(troop.Troop);
                if (indexOfCharacter.IsValid)
                {
                  num6 *= 100f;
                  priorityTroops.Remove(indexOfCharacter);
                }
              }
              if (troop.Troop.HeroObject.IsHumanPlayerCharacter)
                num6 *= 10f;
              priorityList.Add((troop, battleParty, num6));
            }
            else
            {
              int y = 0;
              int num7 = 0;
              for (int index = 0; index < battleParty.Party.MemberRoster.Count; ++index)
              {
                TroopRosterElement elementCopyAtIndex = battleParty.Party.MemberRoster.GetElementCopyAtIndex(index);
                if (!elementCopyAtIndex.Character.IsHero)
                {
                  if (elementCopyAtIndex.Character == troop.Troop)
                  {
                    y = index - num7;
                    break;
                  }
                }
                else
                  ++num7;
              }
              int num8 = (int) (100.0 / (double) MathF.Pow(1.2f, (float) y));
              if (num8 < 10)
                num8 = 10;
              int num9 = ofHealthyMembers / sizeOfSide * 100;
              if (num9 < 10)
                num9 = 10;
              int num10 = 0;
              if (priorityTroops != null)
              {
                UniqueTroopDescriptor indexOfCharacter = priorityTroops.FindIndexOfCharacter(troop.Troop);
                if (indexOfCharacter.IsValid)
                {
                  num10 = 20000;
                  priorityTroops.Remove(indexOfCharacter);
                }
              }
              float num11 = (float) (num10 + MBRandom.RandomInt((int) ((double) num8 * 0.5 + (double) num9 * 0.5)));
              priorityList.Add((troop, battleParty, num11));
            }
          }
        }
      }
    }

    private bool IsPriorityTroop(
      FlattenedTroopRosterElement troop,
      FlattenedTroopRoster priorityTroops)
    {
      foreach (FlattenedTroopRosterElement priorityTroop in priorityTroops)
      {
        if (priorityTroop.Troop == troop.Troop)
          return true;
      }
      return false;
    }

    private bool CanTroopJoinBattle(FlattenedTroopRosterElement troopRoster, bool includePlayer)
    {
      if (troopRoster.IsWounded || troopRoster.IsRouted || troopRoster.IsKilled)
        return false;
      return includePlayer || !troopRoster.Troop.IsPlayerCharacter;
    }
  }
}
