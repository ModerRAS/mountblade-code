// Decompiled with JetBrains decompiler
// Type: Helpers.DiplomacyHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class DiplomacyHelper
  {
    public static bool IsWarCausedByPlayer(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail declareWarDetail)
    {
      switch (declareWarDetail)
      {
        case DeclareWarAction.DeclareWarDetail.CausedByPlayerHostility:
          return true;
        case DeclareWarAction.DeclareWarDetail.CausedByKingdomDecision:
          return faction1 == Hero.MainHero.MapFaction && Hero.MainHero.MapFaction.Leader == Hero.MainHero;
        case DeclareWarAction.DeclareWarDetail.CausedByCrimeRatingChange:
          return faction2 == Hero.MainHero.MapFaction && (double) faction2.MainHeroCrimeRating > (double) Campaign.Current.Models.CrimeModel.DeclareWarCrimeRatingThreshold;
        case DeclareWarAction.DeclareWarDetail.CausedByKingdomCreation:
          return faction1 == Hero.MainHero.MapFaction;
        default:
          return false;
      }
    }

    private static bool IsLogInTimeRange(LogEntry entry, CampaignTime time)
    {
      return entry.GameTime.NumTicks >= time.NumTicks;
    }

    public static List<(LogEntry, IFaction, IFaction)> GetLogsForWar(StanceLink stance)
    {
      CampaignTime warStartDate = stance.WarStartDate;
      List<(LogEntry, IFaction, IFaction)> logsForWar = new List<(LogEntry, IFaction, IFaction)>();
      for (int index = Campaign.Current.LogEntryHistory.GameActionLogs.Count - 1; index >= 0; --index)
      {
        LogEntry gameActionLog = Campaign.Current.LogEntryHistory.GameActionLogs[index];
        IFaction effector;
        IFaction effected;
        if (DiplomacyHelper.IsLogInTimeRange(gameActionLog, warStartDate) && gameActionLog is IWarLog warLog && warLog.IsRelatedToWar(stance, out effector, out effected))
          logsForWar.Add((gameActionLog, effector, effected));
      }
      return logsForWar;
    }

    public static List<Settlement> GetSuccessfullSiegesInWarForFaction(
      IFaction capturerFaction,
      StanceLink stance,
      Func<Settlement, bool> condition = null)
    {
      CampaignTime warStartDate = stance.WarStartDate;
      List<Settlement> siegesInWarForFaction = new List<Settlement>();
      for (int index = Campaign.Current.LogEntryHistory.GameActionLogs.Count - 1; index >= 0; --index)
      {
        LogEntry gameActionLog = Campaign.Current.LogEntryHistory.GameActionLogs[index];
        IFaction effector;
        if (DiplomacyHelper.IsLogInTimeRange(gameActionLog, warStartDate) && gameActionLog is ChangeSettlementOwnerLogEntry settlementOwnerLogEntry && (condition == null || condition(settlementOwnerLogEntry.Settlement)) && !siegesInWarForFaction.Contains(settlementOwnerLogEntry.Settlement) && settlementOwnerLogEntry.IsRelatedToWar(stance, out effector, out IFaction _) && effector == capturerFaction)
          siegesInWarForFaction.Add(settlementOwnerLogEntry.Settlement);
      }
      return siegesInWarForFaction;
    }

    public static List<Settlement> GetRaidsInWar(
      IFaction faction,
      StanceLink stance,
      Func<Settlement, bool> condition = null)
    {
      CampaignTime warStartDate = stance.WarStartDate;
      List<Settlement> raidsInWar = new List<Settlement>();
      for (int index = Campaign.Current.LogEntryHistory.GameActionLogs.Count - 1; index >= 0; --index)
      {
        LogEntry gameActionLog = Campaign.Current.LogEntryHistory.GameActionLogs[index];
        IFaction effector;
        if (DiplomacyHelper.IsLogInTimeRange(gameActionLog, warStartDate) && gameActionLog is VillageStateChangedLogEntry stateChangedLogEntry && (condition == null || condition(stateChangedLogEntry.Village.Settlement)) && stateChangedLogEntry.IsRelatedToWar(stance, out effector, out IFaction _) && effector == faction && !raidsInWar.Contains(stateChangedLogEntry.Village.Settlement))
          raidsInWar.Add(stateChangedLogEntry.Village.Settlement);
      }
      return raidsInWar;
    }

    public static List<Hero> GetPrisonersOfWarTakenByFaction(
      IFaction capturerFaction,
      IFaction prisonerFaction)
    {
      List<Hero> warTakenByFaction = new List<Hero>();
      foreach (Hero lord in (List<Hero>) prisonerFaction.Lords)
      {
        if (lord.IsPrisoner && lord.PartyBelongedToAsPrisoner?.MapFaction == capturerFaction)
          warTakenByFaction.Add(lord);
      }
      return warTakenByFaction;
    }

    public static bool DidMainHeroSwornNotToAttackFaction(
      IFaction faction,
      out TextObject explanation)
    {
      explanation = TextObject.Empty;
      if (!faction.NotAttackableByPlayerUntilTime.IsFuture)
        return false;
      explanation = GameTexts.FindText("str_enemy_not_attackable_tooltip");
      return true;
    }
  }
}
