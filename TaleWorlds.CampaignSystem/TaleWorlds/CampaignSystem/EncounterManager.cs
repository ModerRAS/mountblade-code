// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.EncounterManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public static class EncounterManager
  {
    public static EncounterModel EncounterModel => Campaign.Current.Models.EncounterModel;

    public static void Tick(float dt) => EncounterManager.HandleEncounters(dt);

    private static void HandleEncounters(float dt)
    {
      if (Campaign.Current.TimeControlMode == CampaignTimeControlMode.Stop)
        return;
      for (int index = 0; index < Campaign.Current.MobileParties.Count; ++index)
        EncounterManager.HandleEncounterForMobileParty(Campaign.Current.MobileParties[index], dt);
    }

    public static void HandleEncounterForMobileParty(MobileParty mobileParty, float dt)
    {
      if (!mobileParty.IsActive || mobileParty.AttachedTo != null || mobileParty.MapEventSide != null || mobileParty.CurrentSettlement != null && !mobileParty.IsGarrison || mobileParty.BesiegedSettlement != null && mobileParty.ShortTermBehavior != AiBehavior.AssaultSettlement || !mobileParty.IsCurrentlyEngagingParty && !mobileParty.IsCurrentlyEngagingSettlement && (mobileParty.Ai.AiBehaviorMapEntity == null || mobileParty.ShortTermBehavior != AiBehavior.GoToPoint || mobileParty.Ai.AiBehaviorMapEntity is Settlement || mobileParty.Ai.AiBehaviorMapEntity is MobileParty || mobileParty.Party == PartyBase.MainParty && PlayerEncounter.Current != null) || mobileParty.IsCurrentlyEngagingSettlement && mobileParty.ShortTermTargetSettlement != null && mobileParty.ShortTermTargetSettlement == mobileParty.CurrentSettlement || mobileParty.IsCurrentlyEngagingParty && (!mobileParty.ShortTermTargetParty.IsActive || mobileParty.ShortTermTargetParty.CurrentSettlement != null && (mobileParty.ShortTermTargetParty.MapEvent == null || mobileParty.ShortTermTargetParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker).MapFaction != mobileParty.MapFaction && mobileParty.ShortTermTargetParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender).MapFaction != mobileParty.MapFaction)))
        return;
      Vec2 targetPoint;
      float neededMaximumDistanceForEncountering;
      EncounterManager.GetEncounterTargetPoint(dt, mobileParty, out targetPoint, out neededMaximumDistanceForEncountering);
      float length = (mobileParty.Position2D - targetPoint).Length;
      if ((mobileParty.BesiegedSettlement == null || mobileParty.BesiegedSettlement != mobileParty.TargetSettlement) && (double) length >= (double) neededMaximumDistanceForEncountering)
        return;
      mobileParty.Ai.AiBehaviorMapEntity.OnPartyInteraction(mobileParty);
    }

    public static void StartPartyEncounter(PartyBase attackerParty, PartyBase defenderParty)
    {
      bool flag = PartyBase.MainParty.MapEvent != null && (PartyBase.MainParty.MapEvent.InvolvedParties.Contains<PartyBase>(attackerParty) || PartyBase.MainParty.MapEvent.InvolvedParties.Contains<PartyBase>(defenderParty));
      if (defenderParty == PartyBase.MainParty && PlayerSiege.PlayerSiegeEvent != null)
        Debug.Print("\nPlayerSiege is interrupted\n", color: Debug.DebugColor.DarkGreen, debugFilter: 64UL);
      if (((attackerParty == PartyBase.MainParty ? 1 : (defenderParty == PartyBase.MainParty ? 1 : 0)) | (flag ? 1 : 0)) != 0)
      {
        if (PartyBase.MainParty.MapEvent != null && PlayerEncounter.IsActive && (PartyBase.MainParty.MapEvent.AttackerSide.TroopCount > 0 && PartyBase.MainParty.MapEvent.DefenderSide.TroopCount > 0 || PartyBase.MainParty.MapEvent.PartiesOnSide(PlayerEncounter.Current.OpponentSide).FindIndex((Predicate<MapEventParty>) (party => party.Party == defenderParty)) >= 0 || PartyBase.MainParty.MapEvent.AttackerSide.LeaderParty != MobileParty.MainParty.Party && PartyBase.MainParty.MapEvent.DefenderSide.LeaderParty != MobileParty.MainParty.Party))
          PlayerEncounter.Current.OnPartyJoinEncounter(attackerParty.MobileParty);
        else if ((attackerParty == PartyBase.MainParty || defenderParty == PartyBase.MainParty) && !PlayerEncounter.IsActive || PlayerEncounter.EncounterSettlement != null && Settlement.CurrentSettlement != null && PlayerEncounter.EncounterSettlement == Settlement.CurrentSettlement)
          EncounterManager.RestartPlayerEncounter(attackerParty, defenderParty);
      }
      else if (attackerParty.IsActive && defenderParty.IsActive)
      {
        if ((attackerParty.MobileParty.Army == null ? 0 : (defenderParty == PartyBase.MainParty ? 1 : 0)) != 0)
          MergePartiesAction.Apply(defenderParty, attackerParty);
        else
          StartBattleAction.Apply(attackerParty, defenderParty);
      }
      if (defenderParty.SiegeEvent != null && defenderParty != PartyBase.MainParty && defenderParty.SiegeEvent.BesiegerCamp != null && defenderParty.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(PartyBase.MainParty, MapEvent.BattleTypes.Siege) && (MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty))
        EncounterManager.StartPartyEncounter(PartyBase.MainParty, attackerParty);
      if (attackerParty == PartyBase.MainParty || attackerParty.MapEvent == null || !attackerParty.MapEvent.IsSallyOut || attackerParty.MapEvent.MapEventSettlement != MobileParty.MainParty.CurrentSettlement || MobileParty.MainParty.Army != null)
        return;
      GameMenu.SwitchToMenu("join_sally_out");
    }

    public static void StartSettlementEncounter(MobileParty attackerParty, Settlement settlement)
    {
      if (attackerParty.DefaultBehavior == AiBehavior.BesiegeSettlement && attackerParty.TargetSettlement == settlement && attackerParty.ShortTermBehavior != AiBehavior.AssaultSettlement)
      {
        if (attackerParty.BesiegedSettlement == null)
        {
          if (settlement.SiegeEvent == null)
          {
            Campaign.Current.SiegeEventManager.StartSiegeEvent(settlement, attackerParty);
          }
          else
          {
            MapEventSide mapEventSide = settlement.SiegeEvent.BesiegerCamp.LeaderParty.MapEventSide;
            attackerParty.BesiegerCamp = settlement.SiegeEvent.BesiegerCamp;
            if (mapEventSide != null)
              attackerParty.MapEventSide = mapEventSide;
          }
        }
        if (settlement.Party.MapEvent == null)
          return;
      }
      if (!attackerParty.IsVillager && attackerParty != MobileParty.MainParty && settlement.IsVillage && settlement.Village.VillageState == Village.VillageStates.Looted)
        attackerParty.Ai.SetMoveModeHold();
      else if (attackerParty == MobileParty.MainParty)
      {
        PlayerEncounter.Start();
        PlayerEncounter.Current.Init(attackerParty.Party, settlement.Party, settlement);
      }
      else
      {
        if (((double) attackerParty.Aggressiveness <= 0.0099999997764825821 || PartyBase.MainParty.MapEvent == null ? 0 : (PartyBase.MainParty.MapEvent.MapEventSettlement == settlement ? 1 : 0)) != 0)
        {
          if (PlayerEncounter.IsActive)
          {
            if (attackerParty.MapFaction == MobileParty.MainParty.MapFaction || PartyBase.MainParty.MapEvent.AttackerSide.LeaderParty != PartyBase.MainParty && PartyBase.MainParty.MapEvent.DefenderSide.LeaderParty != PartyBase.MainParty)
            {
              PlayerEncounter.Current.OnPartyJoinEncounter(attackerParty);
            }
            else
            {
              if (PlayerEncounter.IsActive)
                PlayerEncounter.Finish();
              EncounterManager.RestartPlayerEncounter(attackerParty.Party, PartyBase.MainParty);
            }
          }
        }
        else
        {
          bool flag1 = MobileParty.MainParty.CurrentSettlement == settlement;
          MapEvent mapEvent = settlement.Party.MapEvent;
          if (mapEvent != null && !mapEvent.IsFinalized && (mapEvent.AttackerSide.MapFaction == attackerParty.MapFaction || mapEvent.DefenderSide.MapFaction == attackerParty.MapFaction))
          {
            if (flag1 && attackerParty.AttachedTo == null)
              PlayerEncounter.Finish();
            settlement.Party.MapEventSide = mapEvent.AttackerSide.MapFaction == attackerParty.MapFaction ? mapEvent.DefenderSide : mapEvent.AttackerSide;
          }
          else if (settlement.Party.MapEvent == null && attackerParty != MobileParty.MainParty && attackerParty.ShortTermBehavior == AiBehavior.RaidSettlement && attackerParty.ShortTermTargetSettlement == settlement && FactionManager.IsAtWarAgainstFaction(attackerParty.MapFaction, settlement.MapFaction))
          {
            if (flag1)
              PlayerEncounter.Finish(false);
            if ((double) settlement.SettlementHitPoints > 1.0 / 1000.0)
              StartBattleAction.ApplyStartRaid(attackerParty, settlement);
            if (flag1)
            {
              if (MobileParty.MainParty.MapFaction == settlement.MapFaction)
              {
                PlayerEncounter.Start();
                PlayerEncounter.Current.Init(attackerParty.Party, settlement.Party, settlement);
              }
              else
                LeaveSettlementAction.ApplyForParty(MobileParty.MainParty);
            }
          }
          else if (attackerParty != MobileParty.MainParty && attackerParty.ShortTermBehavior == AiBehavior.AssaultSettlement && attackerParty.ShortTermTargetSettlement == settlement && FactionManager.IsAtWarAgainstFaction(attackerParty.MapFaction, settlement.MapFaction))
          {
            if (flag1)
              PlayerEncounter.Finish(false);
            bool flag2 = settlement.Party.MapEvent == null;
            StartBattleAction.ApplyStartAssaultAgainstWalls(attackerParty, settlement);
            if (attackerParty.MapEvent.DefenderSide.TroopCount == 0 && (PlayerSiege.PlayerSiegeEvent == null || PlayerSiege.PlayerSide != BattleSideEnum.Defender || MobileParty.MainParty.CurrentSettlement != settlement))
            {
              int num = MobileParty.MainParty.BesiegedSettlement == settlement ? 1 : 0;
              if (num != 0 && PlayerEncounter.Current == null)
                EncounterManager.StartSettlementEncounter(MobileParty.MainParty.Army != null ? MobileParty.MainParty.Army.LeaderParty : MobileParty.MainParty, settlement);
              attackerParty.MapEvent.SetOverrideWinner(BattleSideEnum.Attacker);
              attackerParty.MapEvent.FinalizeEvent();
              if (num == 0)
                return;
              GameMenu.SwitchToMenu("menu_settlement_taken");
              return;
            }
            if (attackerParty.ShortTermBehavior == AiBehavior.AssaultSettlement & flag2 && attackerParty != MobileParty.MainParty && PlayerEncounter.Current != null && PlayerEncounter.EncounterSettlement == settlement && MobileParty.MainParty.CurrentSettlement == null)
              PlayerEncounter.Finish();
            if (MobileParty.MainParty.BesiegedSettlement == settlement && (MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty))
              EncounterManager.StartSettlementEncounter(MobileParty.MainParty, settlement);
            else if (flag1)
            {
              if (attackerParty.MapEvent.CanPartyJoinBattle(PartyBase.MainParty, settlement.BattleSide))
              {
                PlayerEncounter.Start();
                PlayerEncounter.Current.Init(attackerParty.Party, settlement.Party, settlement);
              }
              else
                LeaveSettlementAction.ApplyForParty(MobileParty.MainParty);
            }
          }
          else if (attackerParty.ShortTermBehavior == AiBehavior.GoToSettlement && attackerParty.ShortTermTargetSettlement == settlement || attackerParty.Ai.IsDisabled || attackerParty.Army != null && attackerParty.Army.LeaderParty.AttachedParties.Contains(attackerParty) && attackerParty.Army.LeaderParty.CurrentSettlement == settlement)
            EnterSettlementAction.ApplyForParty(attackerParty, settlement);
        }
        bool flag = attackerParty != null && (attackerParty.Army == null || attackerParty.Army.LeaderParty == attackerParty) && attackerParty.CurrentSettlement == settlement && !attackerParty.IsVillager && !attackerParty.IsMilitia && attackerParty != MobileParty.MainParty && attackerParty.MapEvent == null && settlement != null && settlement.IsVillage;
        if (attackerParty.Army != null && attackerParty.Army.LeaderParty == attackerParty && attackerParty != MobileParty.MainParty && !flag)
        {
          foreach (MobileParty attachedParty in (List<MobileParty>) attackerParty.Army.LeaderParty.AttachedParties)
          {
            if (attachedParty.MapEvent == null)
              EncounterManager.StartSettlementEncounter(attachedParty, settlement);
          }
        }
        if (!flag)
          return;
        LeaveSettlementAction.ApplyForParty(attackerParty);
        attackerParty.Ai.SetMoveModeHold();
        if (attackerParty == MobileParty.MainParty || MobileParty.MainParty.Army != null && attackerParty == MobileParty.MainParty.Army.LeaderParty)
          return;
        attackerParty.Ai.RethinkAtNextHourlyTick = true;
      }
    }

    private static void GetEncounterTargetPoint(
      float dt,
      MobileParty mobileParty,
      out Vec2 targetPoint,
      out float neededMaximumDistanceForEncountering)
    {
      neededMaximumDistanceForEncountering = mobileParty.Army == null ? MathF.Max(EncounterManager.EncounterModel.NeededMaximumDistanceForEncounteringMobileParty, dt * EncounterManager.EncounterModel.EstimatedMaximumMobilePartySpeedExceptPlayer) : MathF.Clamp(EncounterManager.EncounterModel.NeededMaximumDistanceForEncounteringMobileParty * MathF.Sqrt((float) (mobileParty.Army.LeaderParty.AttachedParties.Count + 1)), MathF.Max(EncounterManager.EncounterModel.NeededMaximumDistanceForEncounteringMobileParty, dt * EncounterManager.EncounterModel.EstimatedMaximumMobilePartySpeedExceptPlayer), MathF.Max(EncounterManager.EncounterModel.MaximumAllowedDistanceForEncounteringMobilePartyInArmy, dt * (EncounterManager.EncounterModel.EstimatedMaximumMobilePartySpeedExceptPlayer + 0.01f)));
      if (mobileParty.IsCurrentlyEngagingSettlement)
      {
        targetPoint = mobileParty.ShortTermTargetSettlement.GatePosition;
        neededMaximumDistanceForEncountering = mobileParty.ShortTermTargetSettlement.IsTown ? EncounterManager.EncounterModel.NeededMaximumDistanceForEncounteringTown : EncounterManager.EncounterModel.NeededMaximumDistanceForEncounteringVillage;
      }
      else if (mobileParty.Army != null && mobileParty.Army.LeaderParty != mobileParty && mobileParty.ShortTermTargetParty.MapEvent != null && mobileParty.ShortTermTargetParty.MapEvent == mobileParty.Army.LeaderParty.MapEvent && mobileParty.Army.LeaderParty.AttachedParties.Contains(mobileParty))
        targetPoint = mobileParty.Position2D;
      else if (mobileParty.CurrentSettlement != null && mobileParty.ShortTermTargetParty.BesiegedSettlement == mobileParty.CurrentSettlement)
        targetPoint = mobileParty.CurrentSettlement.GatePosition;
      else
        targetPoint = mobileParty.Ai.AiBehaviorMapEntity.InteractionPosition;
    }

    private static void RestartPlayerEncounter(PartyBase attackerParty, PartyBase defenderParty)
    {
      Settlement settlement = (Settlement) null;
      if (MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.IsRaid)
        settlement = MobileParty.MainParty.MapEvent.MapEventSettlement;
      if (PlayerEncounter.Current != null && (PlayerEncounter.EncounteredParty != attackerParty || PartyBase.MainParty != defenderParty) && (PlayerEncounter.EncounteredParty != defenderParty || PartyBase.MainParty != attackerParty))
        PlayerEncounter.Finish(false);
      if (PlayerEncounter.Current == null)
        PlayerEncounter.Start();
      if (attackerParty == PartyBase.MainParty && defenderParty.IsMobile && defenderParty.MobileParty.IsCurrentlyEngagingParty && defenderParty.MobileParty.ShortTermTargetParty == MobileParty.MainParty)
      {
        attackerParty = defenderParty;
        defenderParty = PartyBase.MainParty;
      }
      PlayerEncounter.Current.Init(attackerParty, defenderParty, settlement);
    }
  }
}
