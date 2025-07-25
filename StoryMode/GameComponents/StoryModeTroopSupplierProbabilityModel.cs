// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeTroopSupplierProbabilityModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeTroopSupplierProbabilityModel : DefaultTroopSupplierProbabilityModel
  {
    public override void EnqueueTroopSpawnProbabilitiesAccordingToUnitSpawnPrioritization(
      MapEventParty battleParty,
      FlattenedTroopRoster priorityTroops,
      bool includePlayers,
      int sizeOfSide,
      bool forcePriorityTroops,
      List<(FlattenedTroopRosterElement, MapEventParty, float)> priorityList)
    {
      int count = priorityList.Count;
      base.EnqueueTroopSpawnProbabilitiesAccordingToUnitSpawnPrioritization(battleParty, priorityTroops, includePlayers, sizeOfSide, forcePriorityTroops, priorityList);
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if ((currentSettlement != null ? (currentSettlement.IsHideout ? 1 : 0) : 0) == 0 || priorityTroops == null)
        return;
      if (!StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted)
      {
        for (int index = count; index < priorityList.Count; ++index)
        {
          CharacterObject character = priorityList[index].Item1.Troop;
          if (character == StoryModeHeroes.Radagos.CharacterObject && priorityTroops.All<FlattenedTroopRosterElement>((Func<FlattenedTroopRosterElement, bool>) (t => t.Troop != character)))
          {
            priorityList[index] = (priorityList[index].Item1, priorityList[index].Item2, 0.01f);
            break;
          }
        }
      }
      else
      {
        for (int index = 0; index < priorityList.Count; ++index)
        {
          CharacterObject character = priorityList[index].Item1.Troop;
          if (character == StoryModeHeroes.RadagosHencman.CharacterObject && priorityTroops.All<FlattenedTroopRosterElement>((Func<FlattenedTroopRosterElement, bool>) (t => t.Troop != character)))
          {
            priorityList[index] = (priorityList[index].Item1, priorityList[index].Item2, 0.01f);
            break;
          }
        }
      }
    }
  }
}
