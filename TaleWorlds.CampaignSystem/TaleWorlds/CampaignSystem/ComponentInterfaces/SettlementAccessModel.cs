// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.SettlementAccessModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class SettlementAccessModel : GameModel
  {
    public abstract void CanMainHeroEnterSettlement(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails);

    public abstract void CanMainHeroEnterLordsHall(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails);

    public abstract void CanMainHeroEnterDungeon(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails);

    public abstract bool CanMainHeroAccessLocation(
      Settlement settlement,
      string locationId,
      out bool disableOption,
      out TextObject disabledText);

    public abstract bool CanMainHeroDoSettlementAction(
      Settlement settlement,
      SettlementAccessModel.SettlementAction settlementAction,
      out bool disableOption,
      out TextObject disabledText);

    public abstract bool IsRequestMeetingOptionAvailable(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText);

    public enum AccessLevel
    {
      NoAccess,
      LimitedAccess,
      FullAccess,
    }

    public enum AccessMethod
    {
      None,
      Direct,
      ByRequest,
    }

    public enum AccessLimitationReason
    {
      None,
      HostileFaction,
      RelationshipWithOwner,
      CrimeRating,
      VillageIsLooted,
      Disguised,
      ClanTier,
      LocationEmpty,
    }

    public enum LimitedAccessSolution
    {
      None,
      Bribe,
      Disguise,
    }

    public enum PreliminaryActionObligation
    {
      None,
      Optional,
    }

    public enum PreliminaryActionType
    {
      None,
      FaceCharges,
    }

    public enum SettlementAction
    {
      RecruitTroops,
      Craft,
      WalkAroundTheArena,
      JoinTournament,
      WatchTournament,
      Trade,
      WaitInSettlement,
      ManageTown,
    }

    public struct AccessDetails
    {
      public SettlementAccessModel.AccessLevel AccessLevel;
      public SettlementAccessModel.AccessMethod AccessMethod;
      public SettlementAccessModel.AccessLimitationReason AccessLimitationReason;
      public SettlementAccessModel.LimitedAccessSolution LimitedAccessSolution;
      public SettlementAccessModel.PreliminaryActionObligation PreliminaryActionObligation;
      public SettlementAccessModel.PreliminaryActionType PreliminaryActionType;
    }
  }
}
