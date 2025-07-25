// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementAccessModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementAccessModel : SettlementAccessModel
  {
    public override void CanMainHeroEnterSettlement(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails)
    {
      if (settlement.IsFortification && Hero.MainHero.MapFaction == settlement.MapFaction && (settlement.Town.GarrisonParty == null || settlement.Town.GarrisonParty.Party.NumberOfAllMembers == 0))
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
      else if (settlement.IsTown)
        this.CanMainHeroEnterTown(settlement, out accessDetails);
      else if (settlement.IsCastle)
        this.CanMainHeroEnterCastle(settlement, out accessDetails);
      else if (settlement.IsVillage)
      {
        this.CanMainHeroEnterVillage(settlement, out accessDetails);
      }
      else
      {
        Debug.FailedAssert("Invalid type of settlement", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameComponents\\DefaultSettlementAccessModel.cs", nameof (CanMainHeroEnterSettlement), 41);
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
      }
    }

    public override void CanMainHeroEnterDungeon(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails)
    {
      accessDetails = new SettlementAccessModel.AccessDetails();
      this.CanMainHeroEnterKeepInternal(settlement, out accessDetails);
    }

    public override void CanMainHeroEnterLordsHall(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails)
    {
      accessDetails = new SettlementAccessModel.AccessDetails();
      this.CanMainHeroEnterKeepInternal(settlement, out accessDetails);
    }

    private void CanMainHeroEnterKeepInternal(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails)
    {
      accessDetails = new SettlementAccessModel.AccessDetails();
      Hero mainHero = Hero.MainHero;
      if (settlement.OwnerClan == mainHero.Clan)
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
      else if (FactionManager.IsAlliedWithFaction(mainHero.MapFaction, settlement.MapFaction))
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
      else if (FactionManager.IsNeutralWithFaction(mainHero.MapFaction, settlement.MapFaction))
      {
        if (Campaign.Current.IsMainHeroDisguised)
          accessDetails = new SettlementAccessModel.AccessDetails()
          {
            AccessLevel = SettlementAccessModel.AccessLevel.LimitedAccess,
            LimitedAccessSolution = SettlementAccessModel.LimitedAccessSolution.Disguise,
            AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.Disguised
          };
        else if (Campaign.Current.Models.CrimeModel.DoesPlayerHaveAnyCrimeRating(settlement.MapFaction))
          accessDetails = new SettlementAccessModel.AccessDetails()
          {
            AccessLevel = SettlementAccessModel.AccessLevel.LimitedAccess,
            LimitedAccessSolution = SettlementAccessModel.LimitedAccessSolution.Bribe,
            AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.CrimeRating
          };
        else if (mainHero.Clan.Tier < 3)
          accessDetails = new SettlementAccessModel.AccessDetails()
          {
            AccessLevel = SettlementAccessModel.AccessLevel.LimitedAccess,
            LimitedAccessSolution = SettlementAccessModel.LimitedAccessSolution.Bribe,
            AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.ClanTier
          };
        else
          accessDetails = new SettlementAccessModel.AccessDetails()
          {
            AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
            AccessMethod = SettlementAccessModel.AccessMethod.Direct
          };
      }
      else if (FactionManager.IsAtWarAgainstFaction(mainHero.MapFaction, settlement.MapFaction))
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.LimitedAccess,
          LimitedAccessSolution = SettlementAccessModel.LimitedAccessSolution.Disguise,
          AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.Disguised
        };
      if (accessDetails.AccessLevel != SettlementAccessModel.AccessLevel.LimitedAccess || accessDetails.LimitedAccessSolution != SettlementAccessModel.LimitedAccessSolution.Bribe && accessDetails.LimitedAccessSolution != SettlementAccessModel.LimitedAccessSolution.Disguise || !settlement.LocationComplex.GetListOfCharactersInLocation("lordshall").IsEmpty<LocationCharacter>() || !settlement.LocationComplex.GetListOfCharactersInLocation("prison").IsEmpty<LocationCharacter>())
        return;
      accessDetails.AccessLevel = SettlementAccessModel.AccessLevel.NoAccess;
      accessDetails.AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.LocationEmpty;
    }

    public override bool CanMainHeroAccessLocation(
      Settlement settlement,
      string locationId,
      out bool disableOption,
      out TextObject disabledText)
    {
      disabledText = TextObject.Empty;
      disableOption = false;
      bool flag = true;
      switch (locationId)
      {
        case "center":
          flag = this.CanMainHeroWalkAroundTownCenter(settlement, out disableOption, out disabledText);
          break;
        case "arena":
          flag = this.CanMainHeroGoToArena(settlement, out disableOption, out disabledText);
          break;
        case "tavern":
          flag = this.CanMainHeroGoToTavern(settlement, out disableOption, out disabledText);
          break;
        case "lordshall":
          SettlementAccessModel.AccessDetails accessDetails1;
          this.CanMainHeroEnterLordsHall(settlement, out accessDetails1);
          flag = accessDetails1.AccessLevel != SettlementAccessModel.AccessLevel.LimitedAccess || accessDetails1.LimitedAccessSolution != SettlementAccessModel.LimitedAccessSolution.Bribe ? accessDetails1.AccessLevel == SettlementAccessModel.AccessLevel.FullAccess : Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterLordsHall(settlement) == 0;
          break;
        case "prison":
          SettlementAccessModel.AccessDetails accessDetails2;
          this.CanMainHeroEnterDungeon(settlement, out accessDetails2);
          flag = accessDetails2.AccessLevel != SettlementAccessModel.AccessLevel.LimitedAccess || accessDetails2.LimitedAccessSolution != SettlementAccessModel.LimitedAccessSolution.Bribe ? accessDetails2.AccessLevel == SettlementAccessModel.AccessLevel.FullAccess : Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterDungeon(settlement) == 0;
          break;
        case "house_1":
        case "house_2":
        case "house_3":
          Location locationWithId = settlement.LocationComplex.GetLocationWithId(locationId);
          flag = locationWithId.IsReserved && (locationWithId.SpecialItems.Count > 0 || locationWithId.GetCharacterList().Any<LocationCharacter>());
          break;
        default:
          Debug.FailedAssert("invalid location which is not supported by DefaultSettlementAccessModel", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameComponents\\DefaultSettlementAccessModel.cs", nameof (CanMainHeroAccessLocation), 199);
          break;
      }
      return flag;
    }

    public override bool IsRequestMeetingOptionAvailable(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      bool flag = true;
      disableOption = false;
      disabledText = TextObject.Empty;
      SettlementAccessModel.AccessDetails accessDetails;
      this.CanMainHeroEnterSettlement(settlement, out accessDetails);
      if (settlement.OwnerClan == Clan.PlayerClan)
        flag = false;
      else if (FactionManager.IsAlliedWithFaction(settlement.MapFaction, Clan.PlayerClan.MapFaction) && accessDetails.AccessLevel == SettlementAccessModel.AccessLevel.NoAccess)
        flag = TownHelpers.IsThereAnyoneToMeetInTown(settlement);
      else if (settlement.IsTown && FactionManager.IsNeutralWithFaction(Hero.MainHero.MapFaction, settlement.MapFaction) && Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingMild(settlement.MapFaction))
        flag = false;
      else if (Clan.PlayerClan.Tier < 3)
      {
        disableOption = true;
        disabledText = new TextObject("{=bdzZUVxf}Your clan tier is not high enough to request a meeting.");
        flag = true;
      }
      else if (TownHelpers.IsThereAnyoneToMeetInTown(settlement))
      {
        flag = true;
      }
      else
      {
        disableOption = true;
        disabledText = new TextObject("{=196tGVIm}There are no nobles to meet.");
      }
      return flag;
    }

    public override bool CanMainHeroDoSettlementAction(
      Settlement settlement,
      SettlementAccessModel.SettlementAction settlementAction,
      out bool disableOption,
      out TextObject disabledText)
    {
      switch (settlementAction)
      {
        case SettlementAccessModel.SettlementAction.RecruitTroops:
          return this.CanMainHeroRecruitTroops(settlement, out disableOption, out disabledText);
        case SettlementAccessModel.SettlementAction.Craft:
          return this.CanMainHeroCraft(settlement, out disableOption, out disabledText);
        case SettlementAccessModel.SettlementAction.WalkAroundTheArena:
          return this.CanMainHeroEnterArena(settlement, out disableOption, out disabledText);
        case SettlementAccessModel.SettlementAction.JoinTournament:
          return this.CanMainHeroJoinTournament(settlement, out disableOption, out disabledText);
        case SettlementAccessModel.SettlementAction.WatchTournament:
          return this.CanMainHeroWatchTournament(settlement, out disableOption, out disabledText);
        case SettlementAccessModel.SettlementAction.Trade:
          return this.CanMainHeroTrade(settlement, out disableOption, out disabledText);
        case SettlementAccessModel.SettlementAction.WaitInSettlement:
          return this.CanMainHeroWaitInSettlement(settlement, out disableOption, out disabledText);
        case SettlementAccessModel.SettlementAction.ManageTown:
          return this.CanMainHeroManageTown(settlement, out disableOption, out disabledText);
        default:
          Debug.FailedAssert("Invalid Settlement Action", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameComponents\\DefaultSettlementAccessModel.cs", nameof (CanMainHeroDoSettlementAction), 268);
          disableOption = false;
          disabledText = TextObject.Empty;
          return true;
      }
    }

    private bool CanMainHeroGoToArena(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      if (Campaign.Current.IsMainHeroDisguised)
      {
        disabledText = new TextObject("{=brzz79Je}You cannot enter arena while in disguise.");
        disableOption = true;
        return false;
      }
      if (Campaign.Current.IsDay)
      {
        disabledText = TextObject.Empty;
        disableOption = false;
        return true;
      }
      disabledText = new TextObject("{=wsbkjJhz}Arena is closed at night.");
      disableOption = true;
      return false;
    }

    private bool CanMainHeroGoToTavern(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disabledText = TextObject.Empty;
      disableOption = false;
      return true;
    }

    private bool CanMainHeroEnterArena(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disableOption = false;
      disabledText = TextObject.Empty;
      return true;
    }

    private void CanMainHeroEnterVillage(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails)
    {
      Hero mainHero = Hero.MainHero;
      accessDetails = new SettlementAccessModel.AccessDetails()
      {
        AccessLevel = SettlementAccessModel.AccessLevel.NoAccess,
        AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.None,
        PreliminaryActionObligation = SettlementAccessModel.PreliminaryActionObligation.None,
        PreliminaryActionType = SettlementAccessModel.PreliminaryActionType.None
      };
      MobileParty partyBelongedTo = mainHero.PartyBelongedTo;
      if (partyBelongedTo != null && (partyBelongedTo.Army == null || partyBelongedTo.Army.LeaderParty == partyBelongedTo))
      {
        accessDetails.AccessLevel = SettlementAccessModel.AccessLevel.FullAccess;
        accessDetails.AccessMethod = SettlementAccessModel.AccessMethod.Direct;
      }
      if (settlement.Village.VillageState != Village.VillageStates.Looted)
        return;
      accessDetails.AccessLevel = SettlementAccessModel.AccessLevel.NoAccess;
      accessDetails.AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.VillageIsLooted;
    }

    private bool CanMainHeroManageTown(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disabledText = TextObject.Empty;
      disableOption = false;
      return settlement.IsTown && settlement.OwnerClan.Leader == Hero.MainHero;
    }

    private void CanMainHeroEnterCastle(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails)
    {
      Hero mainHero = Hero.MainHero;
      accessDetails = new SettlementAccessModel.AccessDetails();
      if (settlement.OwnerClan == mainHero.Clan)
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
      else if (FactionManager.IsAlliedWithFaction(mainHero.MapFaction, settlement.MapFaction))
      {
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.ByRequest
        };
        if (settlement.Town.IsOwnerUnassigned || (double) settlement.OwnerClan.Leader.GetRelationWithPlayer() >= -4.0 || Hero.MainHero.MapFaction.Leader == Hero.MainHero)
          return;
        accessDetails.AccessLevel = SettlementAccessModel.AccessLevel.NoAccess;
        accessDetails.AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.RelationshipWithOwner;
      }
      else if (FactionManager.IsNeutralWithFaction(mainHero.MapFaction, settlement.MapFaction))
      {
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.ByRequest
        };
        if (Campaign.Current.Models.CrimeModel.DoesPlayerHaveAnyCrimeRating(settlement.MapFaction))
        {
          accessDetails.AccessLevel = SettlementAccessModel.AccessLevel.NoAccess;
          accessDetails.AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.CrimeRating;
        }
        else
        {
          if ((double) settlement.OwnerClan.Leader.GetRelationWithPlayer() >= 0.0)
            return;
          accessDetails.AccessLevel = SettlementAccessModel.AccessLevel.NoAccess;
          accessDetails.AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.RelationshipWithOwner;
        }
      }
      else
      {
        if (!FactionManager.IsAtWarAgainstFaction(mainHero.MapFaction, settlement.MapFaction))
          return;
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.NoAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.ByRequest,
          AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.HostileFaction
        };
      }
    }

    private void CanMainHeroEnterTown(
      Settlement settlement,
      out SettlementAccessModel.AccessDetails accessDetails)
    {
      Hero mainHero = Hero.MainHero;
      accessDetails = new SettlementAccessModel.AccessDetails();
      if (settlement.OwnerClan == mainHero.Clan)
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
      else if (FactionManager.IsAlliedWithFaction(mainHero.MapFaction, settlement.MapFaction))
      {
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
        if (!Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(settlement.MapFaction) && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(settlement.MapFaction))
          return;
        accessDetails.PreliminaryActionType = SettlementAccessModel.PreliminaryActionType.FaceCharges;
        accessDetails.PreliminaryActionObligation = SettlementAccessModel.PreliminaryActionObligation.Optional;
      }
      else if (FactionManager.IsNeutralWithFaction(mainHero.MapFaction, settlement.MapFaction))
      {
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.FullAccess,
          AccessMethod = SettlementAccessModel.AccessMethod.Direct
        };
        if (!Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(settlement.MapFaction) && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(settlement.MapFaction))
          return;
        accessDetails.AccessLevel = SettlementAccessModel.AccessLevel.LimitedAccess;
        accessDetails.AccessMethod = SettlementAccessModel.AccessMethod.None;
        accessDetails.LimitedAccessSolution = SettlementAccessModel.LimitedAccessSolution.Disguise;
        accessDetails.AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.CrimeRating;
      }
      else
      {
        if (!FactionManager.IsAtWarAgainstFaction(mainHero.MapFaction, settlement.MapFaction))
          return;
        accessDetails = new SettlementAccessModel.AccessDetails()
        {
          AccessLevel = SettlementAccessModel.AccessLevel.LimitedAccess,
          LimitedAccessSolution = SettlementAccessModel.LimitedAccessSolution.Disguise,
          AccessLimitationReason = SettlementAccessModel.AccessLimitationReason.HostileFaction
        };
      }
    }

    private bool CanMainHeroWalkAroundTownCenter(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disabledText = TextObject.Empty;
      disableOption = false;
      return settlement.IsTown || settlement.IsCastle;
    }

    private bool CanMainHeroRecruitTroops(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disabledText = TextObject.Empty;
      disableOption = false;
      return true;
    }

    private bool CanMainHeroCraft(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disableOption = false;
      disabledText = TextObject.Empty;
      return Campaign.Current.IsCraftingEnabled;
    }

    private bool CanMainHeroJoinTournament(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      int num = !settlement.Town.HasTournament ? 0 : (Campaign.Current.IsDay ? 1 : 0);
      disableOption = false;
      disabledText = TextObject.Empty;
      if (num == 0)
        return false;
      if (Campaign.Current.IsMainHeroDisguised)
      {
        disableOption = true;
        disabledText = new TextObject("{=mu6Xl4RS}You cannot enter the tournament while disguised.");
        return false;
      }
      if (!Hero.MainHero.IsWounded)
        return true;
      disableOption = true;
      disabledText = new TextObject("{=68rmPu7Z}Your health is too low to fight.");
      return false;
    }

    private bool CanMainHeroWatchTournament(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disableOption = false;
      disabledText = TextObject.Empty;
      return settlement.Town.HasTournament && Campaign.Current.IsDay;
    }

    private bool CanMainHeroTrade(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      if (Campaign.Current.IsMainHeroDisguised)
      {
        disableOption = true;
        disabledText = new TextObject("{=shU7OlQT}You cannot trade while in disguise.");
        return false;
      }
      disableOption = false;
      disabledText = TextObject.Empty;
      return true;
    }

    private bool CanMainHeroWaitInSettlement(
      Settlement settlement,
      out bool disableOption,
      out TextObject disabledText)
    {
      disableOption = false;
      disabledText = TextObject.Empty;
      if (Campaign.Current.IsMainHeroDisguised)
      {
        disableOption = true;
        disabledText = new TextObject("{=dN5Qc9vN}You cannot wait in town while disguised.");
        return false;
      }
      if (settlement.IsVillage && settlement.Party.MapEvent != null)
      {
        disableOption = true;
        disabledText = new TextObject("{=dN5Qc7vN}You cannot wait in village while it is being raided.");
        return false;
      }
      return MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty;
    }
  }
}
