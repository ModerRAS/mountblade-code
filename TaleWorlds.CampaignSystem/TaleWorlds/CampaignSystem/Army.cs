// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Army
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class Army
  {
    private const float MaximumWaitTime = 72f;
    private const float ArmyGatheringConcludingTickFrequency = 1f;
    private const float GatheringDistance = 3.5f;
    private const float DefaultGatheringWaitTime = 24f;
    private const float MinimumDistanceWhileGatheringAsAttackerArmy = 40f;
    private const float CheckingForBoostingCohesionThreshold = 50f;
    private const float DisbandCohesionThreshold = 30f;
    private const float StrengthThresholdRatioForGathering = 0.7f;
    [SaveableField(1)]
    private readonly MBList<MobileParty> _parties;
    [SaveableField(19)]
    private CampaignTime _creationTime;
    [SaveableField(7)]
    private float _armyGatheringTime;
    [SaveableField(9)]
    private float _waitTimeStart;
    [SaveableField(10)]
    private bool _armyIsDispersing;
    [SaveableField(11)]
    private int _numberOfBoosts;
    [SaveableField(15)]
    private Kingdom _kingdom;
    [SaveableField(16)]
    private IMapPoint _aiBehaviorObject;
    [CachedData]
    private MBCampaignEvent _hourlyTickEvent;
    [CachedData]
    private MBCampaignEvent _tickEvent;

    public MBReadOnlyList<MobileParty> Parties => (MBReadOnlyList<MobileParty>) this._parties;

    public TextObject EncyclopediaLinkWithName => this.ArmyOwner.EncyclopediaLinkWithName;

    [SaveableProperty(2)]
    public Army.AIBehaviorFlags AIBehavior { get; set; }

    [SaveableProperty(3)]
    public Army.ArmyTypes ArmyType { get; set; }

    [SaveableProperty(4)]
    public Hero ArmyOwner { get; set; }

    [SaveableProperty(5)]
    public float Cohesion { get; set; }

    public float DailyCohesionChange
    {
      get
      {
        return Campaign.Current.Models.ArmyManagementCalculationModel.CalculateDailyCohesionChange(this).ResultNumber;
      }
    }

    public ExplainedNumber DailyCohesionChangeExplanation
    {
      get
      {
        return Campaign.Current.Models.ArmyManagementCalculationModel.CalculateDailyCohesionChange(this, true);
      }
    }

    public int CohesionThresholdForDispersion
    {
      get => Campaign.Current.Models.ArmyManagementCalculationModel.CohesionThresholdForDispersion;
    }

    [SaveableProperty(13)]
    public float Morale { get; private set; }

    [SaveableProperty(14)]
    public MobileParty LeaderParty { get; private set; }

    public int LeaderPartyAndAttachedPartiesCount => this.LeaderParty.AttachedParties.Count + 1;

    public override string ToString() => this.Name.ToString();

    public float TotalStrength
    {
      get
      {
        float totalStrength = this.LeaderParty.Party.TotalStrength;
        foreach (MobileParty attachedParty in (List<MobileParty>) this.LeaderParty.AttachedParties)
          totalStrength += attachedParty.Party.TotalStrength;
        return totalStrength;
      }
    }

    public Kingdom Kingdom
    {
      get => this._kingdom;
      set
      {
        if (value == this._kingdom)
          return;
        this._kingdom?.RemoveArmyInternal(this);
        this._kingdom = value;
        this._kingdom?.AddArmyInternal(this);
      }
    }

    public IMapPoint AiBehaviorObject
    {
      get => this._aiBehaviorObject;
      set
      {
        if (value != this._aiBehaviorObject && this.Parties.Contains(MobileParty.MainParty) && this.LeaderParty != MobileParty.MainParty)
        {
          this.StopTrackingTargetSettlement();
          this.StartTrackingTargetSettlement(value);
        }
        if (value == null)
          this.AIBehavior = Army.AIBehaviorFlags.Unassigned;
        this._aiBehaviorObject = value;
      }
    }

    [SaveableProperty(17)]
    public TextObject Name { get; private set; }

    public int TotalHealthyMembers
    {
      get
      {
        return this.LeaderParty.Party.NumberOfHealthyMembers + this.LeaderParty.AttachedParties.Sum<MobileParty>((Func<MobileParty, int>) (mobileParty => mobileParty.Party.NumberOfHealthyMembers));
      }
    }

    public int TotalManCount
    {
      get
      {
        return this.LeaderParty.Party.MemberRoster.TotalManCount + this.LeaderParty.AttachedParties.Sum<MobileParty>((Func<MobileParty, int>) (mobileParty => mobileParty.Party.MemberRoster.TotalManCount));
      }
    }

    public int TotalRegularCount
    {
      get
      {
        return this.LeaderParty.Party.MemberRoster.TotalRegulars + this.LeaderParty.AttachedParties.Sum<MobileParty>((Func<MobileParty, int>) (mobileParty => mobileParty.Party.MemberRoster.TotalRegulars));
      }
    }

    public Army(Kingdom kingdom, MobileParty leaderParty, Army.ArmyTypes armyType)
    {
      this.Kingdom = kingdom;
      this._parties = new MBList<MobileParty>();
      this._armyGatheringTime = 0.0f;
      this._creationTime = CampaignTime.Now;
      this.LeaderParty = leaderParty;
      this.LeaderParty.Army = this;
      this.ArmyOwner = this.LeaderParty.LeaderHero;
      this.UpdateName();
      this.ArmyType = armyType;
      this.AddEventHandlers();
      this.Cohesion = 100f;
    }

    public void UpdateName()
    {
      this.Name = new TextObject("{=nbmctMLk}{LEADER_NAME}{.o} Army");
      this.Name.SetTextVariable("LEADER_NAME", this.ArmyOwner != null ? this.ArmyOwner.Name : (this.LeaderParty.Owner != null ? this.LeaderParty.Owner.Name : TextObject.Empty));
    }

    private void AddEventHandlers()
    {
      if (this._creationTime == new CampaignTime())
        this._creationTime = CampaignTime.HoursFromNow(MBRandom.RandomFloat - 2f);
      CampaignTime campaignTime = CampaignTime.Now - this._creationTime;
      CampaignTime initialWait = CampaignTime.Hours(1f + (float) (int) campaignTime.ToHours) - campaignTime;
      this._hourlyTickEvent = CampaignPeriodicEventManager.CreatePeriodicEvent(CampaignTime.Hours(1f), initialWait);
      this._hourlyTickEvent.AddHandler(new MBCampaignEvent.CampaignEventDelegate(this.HourlyTick));
      this._tickEvent = CampaignPeriodicEventManager.CreatePeriodicEvent(CampaignTime.Hours(0.1f), CampaignTime.Hours(1f));
      this._tickEvent.AddHandler(new MBCampaignEvent.CampaignEventDelegate(this.Tick));
    }

    internal void OnAfterLoad() => this.AddEventHandlers();

    [LoadInitializationCallback]
    private void OnLoad(MetaData metaData)
    {
      if (this.AiBehaviorObject != null)
        return;
      this.AIBehavior = Army.AIBehaviorFlags.Unassigned;
    }

    public bool DoesLeaderPartyAndAttachedPartiesContain(MobileParty party)
    {
      return this.LeaderParty == party || this.LeaderParty.AttachedParties.IndexOf(party) >= 0;
    }

    public void BoostCohesionWithInfluence(float cohesionToGain, int cost)
    {
      if ((double) this.LeaderParty.LeaderHero.Clan.Influence < (double) cost)
        return;
      ChangeClanInfluenceAction.Apply(this.LeaderParty.LeaderHero.Clan, (float) -cost);
      this.Cohesion += cohesionToGain;
      ++this._numberOfBoosts;
    }

    private void ThinkAboutCohesionBoost()
    {
      float num1 = 0.0f;
      foreach (MobileParty party in (List<MobileParty>) this.Parties)
      {
        float partySizeRatio = party.PartySizeRatio;
        num1 += partySizeRatio;
      }
      float num2 = MathF.Min(1f, num1 / (float) this.Parties.Count);
      float num3 = Campaign.Current.Models.TargetScoreCalculatingModel.CurrentObjectiveValue(this.LeaderParty);
      if ((double) num3 <= 0.0099999997764825821)
        return;
      float num4 = num3 * num2 * (this._numberOfBoosts == 0 ? 1f : 1f / MathF.Pow(1f + (float) this._numberOfBoosts, 0.7f));
      ArmyManagementCalculationModel calculationModel = Campaign.Current.Models.ArmyManagementCalculationModel;
      float cohesionToGain = MathF.Min(100f, 100f - this.Cohesion);
      double percentage = (double) cohesionToGain;
      int totalInfluenceCost = calculationModel.CalculateTotalInfluenceCost(this, (float) percentage);
      if ((double) this.LeaderParty.Party.Owner.Clan.Influence <= (double) totalInfluenceCost)
        return;
      float num5 = MathF.Min(9f, MathF.Sqrt(this.LeaderParty.Party.Owner.Clan.Influence / (float) totalInfluenceCost));
      float num6 = this.LeaderParty.BesiegedSettlement != null ? 2f : 1f;
      if (this.LeaderParty.BesiegedSettlement == null && this.LeaderParty.DefaultBehavior == AiBehavior.BesiegeSettlement)
      {
        float num7 = this.LeaderParty.Position2D.Distance(this.LeaderParty.TargetSettlement.Position2D);
        if ((double) num7 < 125.0)
          num6 += (float) ((1.0 - (double) num7 / 125.0) * (1.0 - (double) num7 / 125.0));
      }
      if ((double) MBRandom.RandomFloat >= (double) ((float) ((double) num4 * (double) num6 * 0.25) * num5))
        return;
      this.BoostCohesionWithInfluence(cohesionToGain, totalInfluenceCost);
    }

    public void RecalculateArmyMorale()
    {
      float num = 0.0f;
      foreach (MobileParty party in (List<MobileParty>) this.Parties)
        num += party.Morale;
      this.Morale = num / (float) this.Parties.Count;
    }

    private void HourlyTick(MBCampaignEvent campaignEvent, object[] delegateParams)
    {
      if (this.LeaderParty.MapEvent != null | (this.LeaderParty.CurrentSettlement != null && this.LeaderParty.CurrentSettlement.SiegeEvent != null))
        return;
      this.RecalculateArmyMorale();
      this.Cohesion += this.DailyCohesionChange / 24f;
      if (this.LeaderParty == MobileParty.MainParty)
      {
        this.CheckMainPartyGathering();
        this.CheckMainPartyTravelingToAssignment();
      }
      else
      {
        this.MoveLeaderToGatheringLocationIfNeeded();
        if ((double) this.Cohesion < 50.0)
        {
          this.ThinkAboutCohesionBoost();
          if ((double) this.Cohesion < 30.0 && this.LeaderParty.MapEvent == null && this.LeaderParty.SiegeEvent == null)
          {
            DisbandArmyAction.ApplyByCohesionDepleted(this);
            return;
          }
        }
        switch (this.AIBehavior)
        {
          case Army.AIBehaviorFlags.Gathering:
            this.ThinkAboutConcludingArmyGathering();
            break;
          case Army.AIBehaviorFlags.WaitingForArmyMembers:
            this.ThinkAboutTravelingToAssignment();
            break;
          case Army.AIBehaviorFlags.TravellingToAssignment:
            if (this.ArmyType == Army.ArmyTypes.Besieger)
            {
              this.IsAtSiegeLocation();
              break;
            }
            break;
          case Army.AIBehaviorFlags.Defending:
            switch (this.ArmyType)
            {
              case Army.ArmyTypes.Besieger:
                if (this.AnyoneBesiegingTarget())
                {
                  this.FinishArmyObjective();
                  break;
                }
                this.IsAtSiegeLocation();
                break;
              case Army.ArmyTypes.Raider:
              case Army.ArmyTypes.Defender:
              case Army.ArmyTypes.Patrolling:
              case Army.ArmyTypes.NumberOfArmyTypes:
                break;
              default:
                throw new ArgumentOutOfRangeException();
            }
            break;
        }
      }
      this.CheckArmyDispersion();
      this.CallArmyMembersToArmyIfNeeded();
      this.ApplyHostileActionInfluenceAwards();
    }

    private void Tick(MBCampaignEvent campaignevent, object[] delegateparams)
    {
      foreach (MobileParty party in (List<MobileParty>) this._parties)
      {
        if (party.AttachedTo == null && party.Army != null && party.ShortTermTargetParty == this.LeaderParty && party.MapEvent == null && (double) (party.Position2D - this.LeaderParty.Position2D).LengthSquared < (double) Campaign.Current.Models.EncounterModel.NeededMaximumDistanceForEncounteringMobileParty)
        {
          this.AddPartyToMergedParties(party);
          if (party.IsMainParty)
            Campaign.Current.CameraFollowParty = this.LeaderParty.Party;
          CampaignEventDispatcher.Instance.OnArmyOverlaySetDirty();
        }
      }
    }

    private void CheckArmyDispersion()
    {
      if (this.LeaderParty == MobileParty.MainParty)
      {
        if ((double) this.Cohesion > 0.10000000149011612)
          return;
        DisbandArmyAction.ApplyByCohesionDepleted(this);
        GameMenu.ActivateGameMenu("army_dispersed");
        MBTextManager.SetTextVariable("ARMY_DISPERSE_REASON", new TextObject("{=rJBgDaxe}Your army has disbanded due to lack of cohesion."), false);
      }
      else
      {
        int num = this.LeaderParty.Party.IsStarving ? 1 : 0;
        foreach (MobileParty attachedParty in (List<MobileParty>) this.LeaderParty.AttachedParties)
        {
          if (attachedParty.Party.IsStarving)
            ++num;
        }
        if ((double) num / (double) this.LeaderPartyAndAttachedPartiesCount > 0.5)
          DisbandArmyAction.ApplyByFoodProblem(this);
        else if ((double) MBRandom.RandomFloat < 0.25 && !FactionManager.GetEnemyFactions((IFaction) (this.LeaderParty.MapFaction as Kingdom)).AnyQ<IFaction>((Func<IFaction, bool>) (x => x.Fiefs.Any<Town>())))
          DisbandArmyAction.ApplyByNoActiveWar(this);
        else if ((double) this.Cohesion <= 0.10000000149011612)
        {
          DisbandArmyAction.ApplyByCohesionDepleted(this);
        }
        else
        {
          if (this.LeaderParty.IsActive)
            return;
          DisbandArmyAction.ApplyByUnknownReason(this);
        }
      }
    }

    private void MoveLeaderToGatheringLocationIfNeeded()
    {
      if (this.AiBehaviorObject == null || this.AIBehavior != Army.AIBehaviorFlags.Gathering && this.AIBehavior != Army.AIBehaviorFlags.WaitingForArmyMembers || this.LeaderParty.MapEvent != null || this.LeaderParty.ShortTermBehavior != AiBehavior.Hold)
        return;
      Settlement aiBehaviorObject = this.AiBehaviorObject as Settlement;
      Vec2 centerPosition = aiBehaviorObject.IsFortification ? aiBehaviorObject.GatePosition : aiBehaviorObject.Position2D;
      if (aiBehaviorObject.IsUnderSiege || aiBehaviorObject.IsUnderRaid)
        return;
      this.LeaderParty.SendPartyToReachablePointAroundPosition(centerPosition, 6f, 3f);
    }

    private void CheckMainPartyTravelingToAssignment()
    {
      if (this.AIBehavior != Army.AIBehaviorFlags.Gathering || this.AiBehaviorObject == null || Campaign.Current.Models.MapDistanceModel.GetDistance(this.AiBehaviorObject, MobileParty.MainParty, 3.5f, out float _))
        return;
      this.AIBehavior = Army.AIBehaviorFlags.TravellingToAssignment;
    }

    private void CallArmyMembersToArmyIfNeeded()
    {
      for (int index = this.Parties.Count - 1; index >= 0; --index)
      {
        MobileParty party = this.Parties[index];
        if (party != this.LeaderParty && !this.DoesLeaderPartyAndAttachedPartiesContain(party) && party != MobileParty.MainParty)
        {
          if (party.MapEvent == null && party.TargetParty != this.LeaderParty && (party.CurrentSettlement == null || !party.CurrentSettlement.IsUnderSiege))
            party.Ai.SetMoveEscortParty(this.LeaderParty);
          if (party.Party.IsStarving)
            party.Army = (Army) null;
        }
      }
    }

    private void ApplyHostileActionInfluenceAwards()
    {
      if (this.LeaderParty.LeaderHero == null || this.LeaderParty.MapEvent == null)
        return;
      if (this.LeaderParty.MapEvent.IsRaid && this.LeaderParty.MapEvent.DefenderSide.TroopCount == 0)
      {
        GainKingdomInfluenceAction.ApplyForRaidingEnemyVillage(this.LeaderParty, Campaign.Current.Models.DiplomacyModel.GetHourlyInfluenceAwardForRaidingEnemyVillage(this.LeaderParty));
      }
      else
      {
        if (this.LeaderParty.BesiegedSettlement == null || !this.LeaderParty.MapFaction.IsAtWarWith(this.LeaderParty.BesiegedSettlement.MapFaction))
          return;
        GainKingdomInfluenceAction.ApplyForBesiegingEnemySettlement(this.LeaderParty, Campaign.Current.Models.DiplomacyModel.GetHourlyInfluenceAwardForBesiegingEnemyFortification(this.LeaderParty));
      }
    }

    private void CheckMainPartyGathering()
    {
      if (this.AIBehavior != Army.AIBehaviorFlags.PreGathering || this.AiBehaviorObject == null || !Campaign.Current.Models.MapDistanceModel.GetDistance(this.AiBehaviorObject, MobileParty.MainParty, 3.5f, out float _))
        return;
      this.AIBehavior = Army.AIBehaviorFlags.Gathering;
    }

    private Army.MainPartyCurrentAction GetMainPartyCurrentAction()
    {
      if (PlayerEncounter.EncounterSettlement == null)
        return Army.MainPartyCurrentAction.PatrolAroundSettlement;
      Settlement encounterSettlement = PlayerEncounter.EncounterSettlement;
      if (MobileParty.MainParty.IsActive)
      {
        if (encounterSettlement.IsUnderSiege)
          return encounterSettlement.MapFaction.IsAtWarWith(MobileParty.MainParty.MapFaction) ? Army.MainPartyCurrentAction.BesiegeSettlement : Army.MainPartyCurrentAction.DefendingSettlement;
        if (encounterSettlement.IsUnderRaid)
          return encounterSettlement.MapFaction.IsAtWarWith(MobileParty.MainParty.MapFaction) ? Army.MainPartyCurrentAction.RaidSettlement : Army.MainPartyCurrentAction.DefendingSettlement;
      }
      return Army.MainPartyCurrentAction.GoToSettlement;
    }

    public static Army.ArmyLeaderThinkReason GetBehaviorChangeExplanation(
      Army.AIBehaviorFlags previousBehavior,
      Army.AIBehaviorFlags currentBehavior)
    {
      switch (previousBehavior)
      {
        case Army.AIBehaviorFlags.Unassigned:
          if (currentBehavior == Army.AIBehaviorFlags.TravellingToAssignment)
            return Army.ArmyLeaderThinkReason.FromUnassignedToTravelling;
          if (currentBehavior == Army.AIBehaviorFlags.Patrolling)
            return Army.ArmyLeaderThinkReason.FromUnassignedToPatrolling;
          break;
        case Army.AIBehaviorFlags.Gathering:
          if (currentBehavior == Army.AIBehaviorFlags.WaitingForArmyMembers)
            return Army.ArmyLeaderThinkReason.FromGatheringToWaiting;
          break;
        case Army.AIBehaviorFlags.WaitingForArmyMembers:
          if (currentBehavior == Army.AIBehaviorFlags.TravellingToAssignment)
            return Army.ArmyLeaderThinkReason.FromWaitingToTravelling;
          break;
        case Army.AIBehaviorFlags.TravellingToAssignment:
          switch (currentBehavior)
          {
            case Army.AIBehaviorFlags.TravellingToAssignment:
              return Army.ArmyLeaderThinkReason.ChangingTarget;
            case Army.AIBehaviorFlags.Besieging:
              return Army.ArmyLeaderThinkReason.FromTravellingToBesieging;
            case Army.AIBehaviorFlags.Raiding:
              return Army.ArmyLeaderThinkReason.FromTravellingToRaiding;
            case Army.AIBehaviorFlags.Defending:
              return Army.ArmyLeaderThinkReason.FromTravellingToDefending;
          }
          break;
        case Army.AIBehaviorFlags.Besieging:
          if (currentBehavior == Army.AIBehaviorFlags.TravellingToAssignment)
            return Army.ArmyLeaderThinkReason.FromBesiegingToTravelling;
          if (currentBehavior == Army.AIBehaviorFlags.Defending)
            return Army.ArmyLeaderThinkReason.FromBesiegingToDefending;
          break;
        case Army.AIBehaviorFlags.Raiding:
          if (currentBehavior == Army.AIBehaviorFlags.TravellingToAssignment)
            return Army.ArmyLeaderThinkReason.FromRaidingToTravelling;
          break;
        case Army.AIBehaviorFlags.Defending:
          switch (currentBehavior)
          {
            case Army.AIBehaviorFlags.TravellingToAssignment:
              return Army.ArmyLeaderThinkReason.FromDefendingToTravelling;
            case Army.AIBehaviorFlags.Besieging:
              return Army.ArmyLeaderThinkReason.FromDefendingToBesieging;
            case Army.AIBehaviorFlags.Patrolling:
              return Army.ArmyLeaderThinkReason.FromDefendingToPatrolling;
          }
          break;
        case Army.AIBehaviorFlags.Patrolling:
          if (currentBehavior == Army.AIBehaviorFlags.Defending)
            return Army.ArmyLeaderThinkReason.FromPatrollingToDefending;
          if (currentBehavior == Army.AIBehaviorFlags.Patrolling)
            return Army.ArmyLeaderThinkReason.ChangingTarget;
          break;
      }
      return Army.ArmyLeaderThinkReason.Unknown;
    }

    public TextObject GetNotificationText()
    {
      if (this.LeaderParty == MobileParty.MainParty)
        return (TextObject) null;
      TextObject text = GameTexts.FindText("str_army_gather");
      StringHelpers.SetCharacterProperties("ARMY_LEADER", this.LeaderParty.LeaderHero.CharacterObject, text);
      text.SetTextVariable("SETTLEMENT_NAME", this.AiBehaviorObject.Name);
      return text;
    }

    public TextObject GetBehaviorText(bool setWithLink = false)
    {
      if (this.LeaderParty == MobileParty.MainParty)
      {
        Army.MainPartyCurrentAction partyCurrentAction = this.GetMainPartyCurrentAction();
        TextObject variable1 = setWithLink ? PlayerEncounter.EncounterSettlement?.EncyclopediaLinkWithName : PlayerEncounter.EncounterSettlement?.Name;
        TextObject behaviorText;
        switch (partyCurrentAction)
        {
          case Army.MainPartyCurrentAction.Idle:
            return new TextObject("{=sBahcJcl}Idle.");
          case Army.MainPartyCurrentAction.GatherAroundHero:
            behaviorText = GameTexts.FindText("str_army_gathering_around_hero");
            behaviorText.SetTextVariable("PARTY_NAME", MobileParty.MainParty.Name);
            break;
          case Army.MainPartyCurrentAction.GatherAroundSettlement:
            behaviorText = GameTexts.FindText("str_army_gathering");
            break;
          case Army.MainPartyCurrentAction.GoToSettlement:
            behaviorText = Settlement.CurrentSettlement == null ? GameTexts.FindText("str_army_going_to_settlement") : GameTexts.FindText("str_army_waiting_in_settlement");
            break;
          case Army.MainPartyCurrentAction.RaidSettlement:
            behaviorText = GameTexts.FindText("str_army_raiding_settlement");
            float? settlementHitPoints = PlayerEncounter.EncounterSettlement?.SettlementHitPoints;
            TextObject textObject = behaviorText;
            float num1 = 100f;
            float num2 = 1f;
            float? nullable1 = settlementHitPoints;
            float? nullable2 = nullable1.HasValue ? new float?(num2 - nullable1.GetValueOrDefault()) : new float?();
            int variable2 = (int) (nullable2.HasValue ? new float?(num1 * nullable2.GetValueOrDefault()) : new float?()).Value;
            textObject.SetTextVariable("RAIDING_PROCESS", variable2);
            break;
          case Army.MainPartyCurrentAction.BesiegeSettlement:
            behaviorText = GameTexts.FindText("str_army_besieging_settlement");
            break;
          case Army.MainPartyCurrentAction.PatrolAroundSettlement:
            Settlement settlement = (Settlement) null;
            float num3 = Campaign.MapDiagonalSquared;
            foreach (Settlement toSettlement in (List<Settlement>) Settlement.All)
            {
              if (!toSettlement.IsHideout)
              {
                float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(MobileParty.MainParty, toSettlement);
                if ((double) distance < (double) num3)
                {
                  num3 = distance;
                  settlement = toSettlement;
                }
              }
            }
            variable1 = setWithLink ? settlement.EncyclopediaLinkWithName : settlement.Name;
            behaviorText = GameTexts.FindText("str_army_patrolling_travelling");
            break;
          case Army.MainPartyCurrentAction.DefendingSettlement:
            behaviorText = GameTexts.FindText("str_army_defending");
            behaviorText.SetTextVariable("SETTLEMENT_NAME", variable1);
            break;
          default:
            return new TextObject("{=av14a64q}Thinking");
        }
        behaviorText.SetTextVariable("SETTLEMENT_NAME", variable1);
        return behaviorText;
      }
      float distance1;
      switch (this.AIBehavior)
      {
        case Army.AIBehaviorFlags.PreGathering:
        case Army.AIBehaviorFlags.Gathering:
        case Army.AIBehaviorFlags.WaitingForArmyMembers:
          TextObject text1;
          if (this.LeaderParty != MobileParty.MainParty)
          {
            text1 = GameTexts.FindText("str_army_gathering");
            text1.SetTextVariable("SETTLEMENT_NAME", setWithLink ? ((Settlement) this.AiBehaviorObject).EncyclopediaLinkWithName : this.AiBehaviorObject.Name);
          }
          else
          {
            text1 = GameTexts.FindText("str_army_gathering_around_hero");
            text1.SetTextVariable("PARTY_NAME", MobileParty.MainParty.Name);
          }
          return text1;
        case Army.AIBehaviorFlags.TravellingToAssignment:
          if (this.LeaderParty.MapEvent != null && this.LeaderParty.MapEvent.MapEventSettlement != null && this.AiBehaviorObject != null && this.LeaderParty.MapEvent.MapEventSettlement == this.AiBehaviorObject)
          {
            TextObject text2;
            switch (this.ArmyType)
            {
              case Army.ArmyTypes.Besieger:
                text2 = GameTexts.FindText("str_army_besieging_settlement");
                break;
              case Army.ArmyTypes.Raider:
                Settlement aiBehaviorObject = (Settlement) this.AiBehaviorObject;
                text2 = GameTexts.FindText("str_army_raiding_settlement");
                text2.SetTextVariable("RAIDING_PROCESS", (int) (100.0 * (1.0 - (double) aiBehaviorObject.SettlementHitPoints)));
                break;
              case Army.ArmyTypes.Defender:
                text2 = GameTexts.FindText("str_army_defending_travelling");
                break;
              case Army.ArmyTypes.Patrolling:
                text2 = GameTexts.FindText("str_army_patrolling_travelling");
                break;
              default:
                return new TextObject("{=av14a64q}Thinking");
            }
            text2.SetTextVariable("SETTLEMENT_NAME", setWithLink ? ((Settlement) this.AiBehaviorObject).EncyclopediaLinkWithName : this.AiBehaviorObject.Name);
            return text2;
          }
          TextObject text3;
          switch (this.ArmyType)
          {
            case Army.ArmyTypes.Besieger:
              text3 = GameTexts.FindText("str_army_besieging_travelling");
              break;
            case Army.ArmyTypes.Raider:
              text3 = GameTexts.FindText("str_army_raiding_travelling");
              break;
            case Army.ArmyTypes.Defender:
              text3 = GameTexts.FindText("str_army_defending_travelling");
              break;
            case Army.ArmyTypes.Patrolling:
              text3 = GameTexts.FindText("str_army_patrolling_travelling");
              break;
            default:
              return new TextObject("{=av14a64q}Thinking");
          }
          text3.SetTextVariable("SETTLEMENT_NAME", setWithLink ? ((Settlement) this.AiBehaviorObject).EncyclopediaLinkWithName : this.AiBehaviorObject.Name);
          return text3;
        case Army.AIBehaviorFlags.Besieging:
          TextObject behaviorText1 = !Campaign.Current.Models.MapDistanceModel.GetDistance(this.AiBehaviorObject, MobileParty.MainParty, 15f, out distance1) ? GameTexts.FindText("str_army_besieging_travelling") : GameTexts.FindText("str_army_besieging");
          Settlement aiBehaviorObject1 = (Settlement) this.AiBehaviorObject;
          if (aiBehaviorObject1.IsVillage)
            behaviorText1 = GameTexts.FindText("str_army_patrolling_travelling");
          behaviorText1.SetTextVariable("SETTLEMENT_NAME", setWithLink ? aiBehaviorObject1.EncyclopediaLinkWithName : this.AiBehaviorObject.Name);
          return behaviorText1;
        case Army.AIBehaviorFlags.Raiding:
          TextObject behaviorText2 = !Campaign.Current.Models.MapDistanceModel.GetDistance(this.AiBehaviorObject, MobileParty.MainParty, 15f, out distance1) ? GameTexts.FindText("str_army_raiding_travelling") : GameTexts.FindText("str_army_raiding");
          behaviorText2.SetTextVariable("SETTLEMENT_NAME", setWithLink ? ((Settlement) this.AiBehaviorObject).EncyclopediaLinkWithName : this.AiBehaviorObject.Name);
          return behaviorText2;
        case Army.AIBehaviorFlags.Defending:
          TextObject behaviorText3 = !Campaign.Current.Models.MapDistanceModel.GetDistance(this.AiBehaviorObject, MobileParty.MainParty, 15f, out distance1) ? GameTexts.FindText("str_army_defending_travelling") : GameTexts.FindText("str_army_defending");
          behaviorText3.SetTextVariable("SETTLEMENT_NAME", setWithLink ? ((Settlement) this.AiBehaviorObject).EncyclopediaLinkWithName : this.AiBehaviorObject.Name);
          return behaviorText3;
        case Army.AIBehaviorFlags.Patrolling:
          TextObject text4 = GameTexts.FindText("str_army_patrolling_travelling");
          text4.SetTextVariable("SETTLEMENT_NAME", setWithLink ? ((Settlement) this.AiBehaviorObject).EncyclopediaLinkWithName : this.AiBehaviorObject.Name);
          return text4;
        case Army.AIBehaviorFlags.GoToSettlement:
          TextObject behaviorText4 = this.LeaderParty.CurrentSettlement == null ? GameTexts.FindText("str_army_going_to_settlement") : GameTexts.FindText("str_army_waiting_in_settlement");
          behaviorText4.SetTextVariable("SETTLEMENT_NAME", !setWithLink || !(this.AiBehaviorObject is Settlement) ? this.AiBehaviorObject.Name ?? this.LeaderParty.Ai.AiBehaviorPartyBase.Name : ((Settlement) this.AiBehaviorObject).EncyclopediaLinkWithName);
          return behaviorText4;
        default:
          return new TextObject("{=av14a64q}Thinking");
      }
    }

    public void Gather(Settlement initialHostileSettlement)
    {
      this._armyGatheringTime = Campaign.CurrentTime;
      if (this.LeaderParty != MobileParty.MainParty)
      {
        Settlement gatheringSettlement = this.FindBestInitialGatheringSettlement(initialHostileSettlement);
        this.AiBehaviorObject = (IMapPoint) gatheringSettlement;
        this.LeaderParty.SendPartyToReachablePointAroundPosition(gatheringSettlement.IsFortification ? gatheringSettlement.GatePosition : gatheringSettlement.Position2D, 6f, 3f);
        this.CallPartiesToArmy();
      }
      else
        this.AiBehaviorObject = (IMapPoint) SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (x => x.IsFortification || x.IsVillage));
      GatherArmyAction.Apply(this.LeaderParty, (Settlement) this.AiBehaviorObject);
    }

    private Settlement FindBestInitialGatheringSettlement(Settlement initialHostileTargetSettlement)
    {
      Settlement gatheringSettlement = (Settlement) null;
      Hero leaderHero = this.LeaderParty.LeaderHero;
      float num1 = 0.0f;
      if (leaderHero != null && leaderHero.IsActive)
      {
        foreach (Settlement settlement in (List<Settlement>) this.Kingdom.Settlements)
        {
          if (settlement.IsVillage || settlement.IsFortification)
          {
            float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(initialHostileTargetSettlement, settlement);
            if ((double) distance > 40.0)
            {
              float num2 = 0.0f;
              if (gatheringSettlement == null)
                num2 += 1f / 1000f;
              if (settlement != initialHostileTargetSettlement && settlement.Party.MapEvent == null)
              {
                if (settlement.MapFaction == this.Kingdom)
                  num2 += 10f;
                else if (!FactionManager.IsAtWarAgainstFaction(settlement.MapFaction, (IFaction) this.Kingdom))
                  num2 += 2f;
                bool flag = false;
                foreach (Army army in (List<Army>) this.Kingdom.Armies)
                {
                  if (army != this && army.AiBehaviorObject == settlement)
                    flag = true;
                }
                if (!flag)
                  num2 += 10f;
                float num3 = (float) (20.0 * (1.0 - (double) (distance / (Campaign.MapDiagonal * 0.1f))));
                float num4 = (float) (5.0 * (1.0 - (double) ((settlement.Position2D - this.LeaderParty.Position2D).Length / (Campaign.MapDiagonal * 0.1f))));
                float num5 = (float) ((double) num2 + (double) num3 * 0.5 + (double) num4 * 0.10000000149011612);
                if ((double) num5 < 0.0)
                  num5 = 0.0f;
                if ((double) num5 > (double) num1)
                {
                  num1 = num5;
                  gatheringSettlement = settlement;
                }
              }
            }
          }
        }
      }
      else
        gatheringSettlement = (Settlement) this.AiBehaviorObject;
      if (gatheringSettlement == null)
        gatheringSettlement = this.Kingdom.Settlements.FirstOrDefault<Settlement>() ?? this.LeaderParty.HomeSettlement;
      return gatheringSettlement;
    }

    private void CallPartiesToArmy()
    {
      foreach (MobileParty owner in Campaign.Current.Models.ArmyManagementCalculationModel.GetMobilePartiesToCallToArmy(this.LeaderParty))
        SetPartyAiAction.GetActionForEscortingParty(owner, this.LeaderParty);
    }

    public void ThinkAboutConcludingArmyGathering()
    {
      double currentTime = (double) Campaign.CurrentTime;
      float num1 = 0.0f;
      float num2 = this.ArmyType == Army.ArmyTypes.Defender ? 1f : 2f;
      double armyGatheringTime = (double) this._armyGatheringTime;
      float num3 = (float) (currentTime - armyGatheringTime);
      if ((double) num3 > 24.0)
        num1 = (float) (1.0 * (((double) num3 - 24.0) / ((double) num2 * 24.0)));
      else if ((double) num3 > ((double) num2 + 1.0) * 24.0)
        num1 = 1f;
      if ((double) MBRandom.RandomFloat >= (double) num1)
        return;
      this._waitTimeStart = Campaign.CurrentTime;
      this.AIBehavior = Army.AIBehaviorFlags.WaitingForArmyMembers;
      if (this.Parties.Count > 1)
        return;
      DisbandArmyAction.ApplyByNotEnoughParty(this);
    }

    public void ThinkAboutTravelingToAssignment()
    {
      bool flag = false;
      if ((double) Campaign.CurrentTime - (double) this._waitTimeStart < 72.0)
      {
        if ((double) this.LeaderParty.Position2D.DistanceSquared(this.AiBehaviorObject.Position2D) < 100.0)
          flag = (double) this.TotalStrength / (double) this.Parties.SumQ<MobileParty>((Func<MobileParty, float>) (x => x.Party.TotalStrength)) > 0.699999988079071;
      }
      else
        flag = true;
      if (!flag)
        return;
      this.AIBehavior = Army.AIBehaviorFlags.TravellingToAssignment;
    }

    private bool AnyoneBesiegingTarget()
    {
      Settlement aiBehaviorObject = (Settlement) this.AiBehaviorObject;
      return this.ArmyType == Army.ArmyTypes.Besieger && aiBehaviorObject.IsUnderSiege && !aiBehaviorObject.SiegeEvent.BesiegerCamp.IsBesiegerSideParty(this.LeaderParty);
    }

    private void IsAtSiegeLocation()
    {
      if ((double) this.LeaderParty.Position2D.DistanceSquared(this.AiBehaviorObject.Position2D) >= 100.0 || this.AIBehavior == Army.AIBehaviorFlags.Besieging)
        return;
      if (this.LeaderParty.Army.Parties.ContainsQ<MobileParty>(MobileParty.MainParty))
        Debug.Print(this.LeaderParty.LeaderHero.StringId + ": " + (object) this.LeaderParty.LeaderHero.Name + " is besieging " + (object) this.AiBehaviorObject.Name + " of " + this.AiBehaviorObject.MapFaction.StringId + ": " + (object) this.AiBehaviorObject.MapFaction.Name + "\n", color: Debug.DebugColor.Cyan);
      this.AIBehavior = Army.AIBehaviorFlags.Besieging;
    }

    public void FinishArmyObjective()
    {
      this.AIBehavior = Army.AIBehaviorFlags.Unassigned;
      this.AiBehaviorObject = (IMapPoint) null;
    }

    internal void DisperseInternal(Army.ArmyDispersionReason reason = Army.ArmyDispersionReason.Unknown)
    {
      if (this._armyIsDispersing)
        return;
      CampaignEventDispatcher.Instance.OnArmyDispersed(this, reason, this.Parties.Contains(MobileParty.MainParty));
      this._armyIsDispersing = true;
      int num1 = 0;
      for (int index = this.Parties.Count - 1; index >= num1; --index)
      {
        MobileParty party = this.Parties[index];
        int num2 = party.AttachedTo == this.LeaderParty ? 1 : 0;
        party.Army = (Army) null;
        if (num2 != 0 && party.CurrentSettlement == null && party.IsActive)
          party.Position2D = MobilePartyHelper.FindReachablePointAroundPosition(this.LeaderParty.Position2D, 1f);
      }
      this._parties.Clear();
      this.Kingdom = (Kingdom) null;
      if (this.LeaderParty == MobileParty.MainParty && Game.Current.GameStateManager.ActiveState is MapState activeState)
        activeState.OnDispersePlayerLeadedArmy();
      this._hourlyTickEvent.DeletePeriodicEvent();
      this._tickEvent.DeletePeriodicEvent();
      this._armyIsDispersing = false;
    }

    public Vec2 GetRelativePositionForParty(MobileParty mobileParty, Vec2 armyFacing)
    {
      float num1 = 0.5f;
      float num2 = (float) ((double) MathF.Ceiling(MathF.Sqrt((float) (1.0 + 8.0 * (double) (this.LeaderParty.AttachedParties.Count - 1))) - 1f) / 4.0 * (double) num1 * 0.5) + num1;
      int num3 = -1;
      for (int index = 0; index < this.LeaderParty.AttachedParties.Count; ++index)
      {
        if (this.LeaderParty.AttachedParties[index] == mobileParty)
        {
          num3 = index;
          break;
        }
      }
      int num4 = MathF.Ceiling((float) (((double) MathF.Sqrt((float) (1.0 + 8.0 * (double) (num3 + 2))) - 1.0) / 2.0)) - 1;
      int num5 = num3 + 1 - num4 * (num4 + 1) / 2;
      bool flag = (num4 & 1) != 0;
      int num6 = (((num5 & 1) != 0 ? -1 - num5 : num5) >> 1) * (flag ? -1 : 1);
      float num7 = 1.25f;
      Vec2 position = this.LeaderParty.VisualPosition2DWithoutError + -armyFacing * 0.1f * (float) this.LeaderParty.AttachedParties.Count;
      Vec2 destination = position - (float) MathF.Sign((float) num6 - ((num4 & 1) != 0 ? 0.5f : 0.0f)) * armyFacing.LeftVec() * num2;
      PathFaceRecord faceIndex = Campaign.Current.MapSceneWrapper.GetFaceIndex(position);
      if (position != destination)
      {
        Vec2 positionToDestination = Campaign.Current.MapSceneWrapper.GetLastPointOnNavigationMeshFromPositionToDestination(faceIndex, position, destination);
        if ((double) (destination - positionToDestination).LengthSquared > 2.2500000795844244E-06)
        {
          num1 = num1 * (position - positionToDestination).Length / num2;
          num7 = (float) ((double) num7 * (double) (position - positionToDestination).Length / ((double) num2 / 1.5));
        }
      }
      return new Vec2((float) ((flag ? -(double) num1 * 0.5 : 0.0) + (double) num6 * (double) num1 + (double) mobileParty.Party.RandomFloat(-0.25f, 0.25f) * 0.60000002384185791 * (double) num1), (float) (((double) -num4 + (double) mobileParty.Party.RandomFloatWithSeed(1U, -0.25f, 0.25f)) * (double) num7 * 0.30000001192092896));
    }

    public void AddPartyToMergedParties(MobileParty mobileParty)
    {
      mobileParty.AttachedTo = this.LeaderParty;
      if (!mobileParty.IsMainParty)
        return;
      if (GameStateManager.Current.ActiveState is MapState activeState)
        activeState.OnJoinArmy();
      Hero leaderHero = this.LeaderParty.LeaderHero;
      if (leaderHero == null || leaderHero == Hero.MainHero || leaderHero.HasMet)
        return;
      leaderHero.SetHasMet();
    }

    internal void OnRemovePartyInternal(MobileParty mobileParty)
    {
      mobileParty.Ai.SetInitiative(1f, 1f, 24f);
      this._parties.Remove(mobileParty);
      CampaignEventDispatcher.Instance.OnPartyRemovedFromArmy(mobileParty);
      if (this == MobileParty.MainParty.Army)
        CampaignEventDispatcher.Instance.OnArmyOverlaySetDirty();
      mobileParty.AttachedTo = (MobileParty) null;
      if (this.LeaderParty == mobileParty && !this._armyIsDispersing)
        DisbandArmyAction.ApplyByLeaderPartyRemoved(this);
      mobileParty.OnRemovedFromArmyInternal();
      if (mobileParty == MobileParty.MainParty)
      {
        Campaign.Current.CameraFollowParty = MobileParty.MainParty.Party;
        this.StopTrackingTargetSettlement();
      }
      if (mobileParty.Army?.LeaderParty == mobileParty)
      {
        this.FinishArmyObjective();
        if (!this._armyIsDispersing)
        {
          if (mobileParty.Army?.LeaderParty.LeaderHero == null)
            DisbandArmyAction.ApplyByArmyLeaderIsDead(mobileParty.Army);
          else
            DisbandArmyAction.ApplyByObjectiveFinished(mobileParty.Army);
        }
      }
      else if (this.Parties.Count == 0 && !this._armyIsDispersing)
      {
        if (mobileParty.Army != null && MobileParty.MainParty.Army != null && mobileParty.Army == MobileParty.MainParty.Army && Hero.MainHero.IsPrisoner)
          DisbandArmyAction.ApplyByPlayerTakenPrisoner(this);
        else
          DisbandArmyAction.ApplyByNotEnoughParty(this);
      }
      mobileParty.Party.SetVisualAsDirty();
      mobileParty.Party.UpdateVisibilityAndInspected();
    }

    internal void OnAddPartyInternal(MobileParty mobileParty)
    {
      this._parties.Add(mobileParty);
      CampaignEventDispatcher.Instance.OnPartyJoinedArmy(mobileParty);
      if (this == MobileParty.MainParty.Army && this.LeaderParty != MobileParty.MainParty)
      {
        this.StartTrackingTargetSettlement(this.AiBehaviorObject);
        CampaignEventDispatcher.Instance.OnArmyOverlaySetDirty();
      }
      if (mobileParty == MobileParty.MainParty || this.LeaderParty == MobileParty.MainParty || this.LeaderParty.LeaderHero == null)
        return;
      ChangeClanInfluenceAction.Apply(this.LeaderParty.LeaderHero.Clan, (float) -Campaign.Current.Models.ArmyManagementCalculationModel.CalculatePartyInfluenceCost(this.LeaderParty, mobileParty));
    }

    private void StartTrackingTargetSettlement(IMapPoint targetObject)
    {
      if (!(targetObject is Settlement settlement))
        return;
      Campaign.Current.VisualTrackerManager.RegisterObject((ITrackableCampaignObject) settlement);
    }

    private void StopTrackingTargetSettlement()
    {
      if (!(this.AiBehaviorObject is Settlement aiBehaviorObject))
        return;
      Campaign.Current.VisualTrackerManager.RemoveTrackedObject((ITrackableBase) aiBehaviorObject);
    }

    internal static void AutoGeneratedStaticCollectObjectsArmy(
      object o,
      List<object> collectedObjects)
    {
      ((Army) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      collectedObjects.Add((object) this._parties);
      CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this._creationTime, collectedObjects);
      collectedObjects.Add((object) this._kingdom);
      collectedObjects.Add((object) this._aiBehaviorObject);
      collectedObjects.Add((object) this.ArmyOwner);
      collectedObjects.Add((object) this.LeaderParty);
      collectedObjects.Add((object) this.Name);
    }

    internal static object AutoGeneratedGetMemberValueAIBehavior(object o)
    {
      return (object) ((Army) o).AIBehavior;
    }

    internal static object AutoGeneratedGetMemberValueArmyType(object o)
    {
      return (object) ((Army) o).ArmyType;
    }

    internal static object AutoGeneratedGetMemberValueArmyOwner(object o)
    {
      return (object) ((Army) o).ArmyOwner;
    }

    internal static object AutoGeneratedGetMemberValueCohesion(object o)
    {
      return (object) ((Army) o).Cohesion;
    }

    internal static object AutoGeneratedGetMemberValueMorale(object o)
    {
      return (object) ((Army) o).Morale;
    }

    internal static object AutoGeneratedGetMemberValueLeaderParty(object o)
    {
      return (object) ((Army) o).LeaderParty;
    }

    internal static object AutoGeneratedGetMemberValueName(object o) => (object) ((Army) o).Name;

    internal static object AutoGeneratedGetMemberValue_parties(object o)
    {
      return (object) ((Army) o)._parties;
    }

    internal static object AutoGeneratedGetMemberValue_creationTime(object o)
    {
      return (object) ((Army) o)._creationTime;
    }

    internal static object AutoGeneratedGetMemberValue_armyGatheringTime(object o)
    {
      return (object) ((Army) o)._armyGatheringTime;
    }

    internal static object AutoGeneratedGetMemberValue_waitTimeStart(object o)
    {
      return (object) ((Army) o)._waitTimeStart;
    }

    internal static object AutoGeneratedGetMemberValue_armyIsDispersing(object o)
    {
      return (object) ((Army) o)._armyIsDispersing;
    }

    internal static object AutoGeneratedGetMemberValue_numberOfBoosts(object o)
    {
      return (object) ((Army) o)._numberOfBoosts;
    }

    internal static object AutoGeneratedGetMemberValue_kingdom(object o)
    {
      return (object) ((Army) o)._kingdom;
    }

    internal static object AutoGeneratedGetMemberValue_aiBehaviorObject(object o)
    {
      return (object) ((Army) o)._aiBehaviorObject;
    }

    public enum AIBehaviorFlags
    {
      Unassigned,
      PreGathering,
      Gathering,
      WaitingForArmyMembers,
      TravellingToAssignment,
      Besieging,
      AssaultingTown,
      Raiding,
      Defending,
      Patrolling,
      GoToSettlement,
      NumberOfAIBehaviorFlags,
    }

    public enum ArmyTypes
    {
      Besieger,
      Raider,
      Defender,
      Patrolling,
      NumberOfArmyTypes,
    }

    private enum MainPartyCurrentAction
    {
      Idle,
      GatherAroundHero,
      GatherAroundSettlement,
      GoToSettlement,
      RaidSettlement,
      BesiegeSettlement,
      PatrolAroundSettlement,
      DefendingSettlement,
    }

    public enum ArmyDispersionReason
    {
      Unknown,
      DismissalRequestedWithInfluence,
      NotEnoughParty,
      KingdomChanged,
      CohesionDepleted,
      ObjectiveFinished,
      LeaderPartyRemoved,
      PlayerTakenPrisoner,
      CannotElectNewLeader,
      LeaderCannotArrivePointOnTime,
      ArmyLeaderIsDead,
      FoodProblem,
      NotEnoughTroop,
      NoActiveWar,
    }

    public enum ArmyLeaderThinkReason
    {
      Unknown,
      FromGatheringToWaiting,
      FromTravellingToBesieging,
      FromWaitingToTravelling,
      ChangingTarget,
      FromTravellingToRaiding,
      FromTravellingToDefending,
      FromRaidingToTravelling,
      FromBesiegingToTravelling,
      FromDefendingToTravelling,
      FromPatrollingToDefending,
      FromBesiegingToDefending,
      FromDefendingToBesieging,
      FromDefendingToPatrolling,
      FromUnassignedToPatrolling,
      FromUnassignedToTravelling,
    }
  }
}
