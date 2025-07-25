// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.SetPartyAiAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class SetPartyAiAction
  {
    private static void ApplyInternal(
      MobileParty owner,
      IMapPoint subject,
      SetPartyAiAction.SetPartyAiActionDetail detail)
    {
      switch (detail)
      {
        case SetPartyAiAction.SetPartyAiActionDetail.GoToSettlement:
          if (owner.DefaultBehavior != AiBehavior.GoToSettlement || owner.TargetSettlement != subject)
            owner.Ai.SetMoveGoToSettlement((Settlement) subject);
          if (owner.Army == null)
            break;
          owner.Army.ArmyType = Army.ArmyTypes.Patrolling;
          owner.Army.AIBehavior = Army.AIBehaviorFlags.GoToSettlement;
          owner.Army.AiBehaviorObject = subject;
          break;
        case SetPartyAiAction.SetPartyAiActionDetail.PatrolAroundSettlement:
          if (owner.DefaultBehavior != AiBehavior.PatrolAroundPoint || owner.TargetSettlement != subject)
            owner.Ai.SetMovePatrolAroundSettlement((Settlement) subject);
          if (owner.Army == null)
            break;
          owner.Army.ArmyType = Army.ArmyTypes.Patrolling;
          owner.Army.AIBehavior = Army.AIBehaviorFlags.Patrolling;
          owner.Army.AiBehaviorObject = subject;
          break;
        case SetPartyAiAction.SetPartyAiActionDetail.RaidSettlement:
          if (owner.DefaultBehavior == AiBehavior.RaidSettlement && owner.TargetSettlement == subject)
            break;
          owner.Ai.SetMoveRaidSettlement((Settlement) subject);
          if (owner.Army == null)
            break;
          owner.Army.AIBehavior = Army.AIBehaviorFlags.TravellingToAssignment;
          owner.Army.ArmyType = Army.ArmyTypes.Raider;
          owner.Army.AiBehaviorObject = subject;
          break;
        case SetPartyAiAction.SetPartyAiActionDetail.BesiegeSettlement:
          if (owner.DefaultBehavior == AiBehavior.BesiegeSettlement && owner.TargetSettlement == subject)
            break;
          owner.Ai.SetMoveBesiegeSettlement((Settlement) subject);
          if (owner.Army == null)
            break;
          owner.Army.AIBehavior = Army.AIBehaviorFlags.TravellingToAssignment;
          owner.Army.ArmyType = Army.ArmyTypes.Besieger;
          owner.Army.AiBehaviorObject = subject;
          break;
        case SetPartyAiAction.SetPartyAiActionDetail.EngageParty:
          if (owner.DefaultBehavior == AiBehavior.EngageParty && owner == subject)
            break;
          owner.Ai.SetMoveEngageParty((MobileParty) subject);
          break;
        case SetPartyAiAction.SetPartyAiActionDetail.GoAroundParty:
          if (owner.DefaultBehavior == AiBehavior.GoAroundParty && owner == subject)
            break;
          owner.Ai.SetMoveGoAroundParty((MobileParty) subject);
          break;
        case SetPartyAiAction.SetPartyAiActionDetail.DefendParty:
          if (owner.DefaultBehavior == AiBehavior.DefendSettlement && owner == subject)
            break;
          owner.Ai.SetMoveDefendSettlement((Settlement) subject);
          if (owner.Army == null)
            break;
          owner.Army.AIBehavior = Army.AIBehaviorFlags.Defending;
          owner.Army.ArmyType = Army.ArmyTypes.Defender;
          owner.Army.AiBehaviorObject = subject;
          break;
        case SetPartyAiAction.SetPartyAiActionDetail.EscortParty:
          if (owner.DefaultBehavior == AiBehavior.EscortParty && owner.TargetParty == subject)
            break;
          MobileParty mobileParty = (MobileParty) subject;
          owner.Ai.SetMoveEscortParty(mobileParty);
          if (!owner.IsLordParty || !mobileParty.IsLordParty || owner == MobileParty.MainParty || owner.Army != null || mobileParty.Army == null)
            break;
          owner.Army = mobileParty.Army;
          break;
      }
    }

    public static void GetAction(MobileParty owner, Settlement settlement)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) settlement, SetPartyAiAction.SetPartyAiActionDetail.GoToSettlement);
    }

    public static void GetActionForVisitingSettlement(MobileParty owner, Settlement settlement)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) settlement, SetPartyAiAction.SetPartyAiActionDetail.GoToSettlement);
    }

    public static void GetActionForPatrollingAroundSettlement(
      MobileParty owner,
      Settlement settlement)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) settlement, SetPartyAiAction.SetPartyAiActionDetail.PatrolAroundSettlement);
    }

    public static void GetActionForRaidingSettlement(MobileParty owner, Settlement settlement)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) settlement, SetPartyAiAction.SetPartyAiActionDetail.RaidSettlement);
    }

    public static void GetActionForBesiegingSettlement(MobileParty owner, Settlement settlement)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) settlement, SetPartyAiAction.SetPartyAiActionDetail.BesiegeSettlement);
    }

    public static void GetActionForEngagingParty(MobileParty owner, MobileParty mobileParty)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) mobileParty, SetPartyAiAction.SetPartyAiActionDetail.EngageParty);
    }

    public static void GetActionForGoingAroundParty(MobileParty owner, MobileParty mobileParty)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) mobileParty, SetPartyAiAction.SetPartyAiActionDetail.GoAroundParty);
    }

    public static void GetActionForDefendingSettlement(MobileParty owner, Settlement settlement)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) settlement, SetPartyAiAction.SetPartyAiActionDetail.DefendParty);
    }

    public static void GetActionForEscortingParty(MobileParty owner, MobileParty mobileParty)
    {
      SetPartyAiAction.ApplyInternal(owner, (IMapPoint) mobileParty, SetPartyAiAction.SetPartyAiActionDetail.EscortParty);
    }

    private enum SetPartyAiActionDetail
    {
      GoToSettlement,
      PatrolAroundSettlement,
      RaidSettlement,
      BesiegeSettlement,
      EngageParty,
      GoAroundParty,
      DefendParty,
      EscortParty,
    }
  }
}
