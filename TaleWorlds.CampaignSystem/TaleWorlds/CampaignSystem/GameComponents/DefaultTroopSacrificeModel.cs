// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultTroopSacrificeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultTroopSacrificeModel : TroopSacrificeModel
  {
    public override int BreakOutArmyLeaderRelationPenalty => -5;

    public override int BreakOutArmyMemberRelationPenalty => -1;

    public override int GetLostTroopCountForBreakingInBesiegedSettlement(
      MobileParty party,
      SiegeEvent siegeEvent)
    {
      return this.GetLostTroopCount(party, siegeEvent);
    }

    public override int GetLostTroopCountForBreakingOutOfBesiegedSettlement(
      MobileParty party,
      SiegeEvent siegeEvent)
    {
      return this.GetLostTroopCount(party, siegeEvent);
    }

    public override int GetNumberOfTroopsSacrificedForTryingToGetAway(
      BattleSideEnum battleSide,
      MapEvent mapEvent)
    {
      mapEvent.RecalculateStrengthOfSides();
      MapEventSide mapEventSide = mapEvent.GetMapEventSide(battleSide);
      float num1 = mapEvent.StrengthOfSide[(int) battleSide] + 1f;
      float a = mapEvent.StrengthOfSide[(int) battleSide.GetOppositeSide()] / num1;
      int ofRegularMembers = PartyBase.MainParty.NumberOfRegularMembers;
      if (MobileParty.MainParty.Army != null)
      {
        foreach (MobileParty attachedParty in (List<MobileParty>) MobileParty.MainParty.Army.LeaderParty.AttachedParties)
          ofRegularMembers += attachedParty.Party.NumberOfRegularMembers;
      }
      int num2 = mapEventSide.CountTroops((Func<FlattenedTroopRosterElement, bool>) (x => x.State == RosterTroopState.Active && !x.Troop.IsHero));
      ExplainedNumber stat1 = new ExplainedNumber(1f);
      SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Tactics, DefaultSkillEffects.TacticsTroopSacrificeReduction, CharacterObject.PlayerCharacter, ref stat1, isBonusPositive: false);
      ExplainedNumber stat2 = new ExplainedNumber((float) MathF.Max(MathF.Round((float) ((double) ofRegularMembers * (double) MathF.Pow(MathF.Min(a, 3f), 1.3f) * 0.10000000149011612 + 5.0) * stat1.ResultNumber), 1));
      if (MobileParty.MainParty.HasPerk(DefaultPerks.Tactics.SwiftRegroup, true))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.SwiftRegroup, MobileParty.MainParty, false, ref stat2);
      return (double) stat2.ResultNumber <= (double) num2 ? MathF.Round(stat2.ResultNumber) : -1;
    }

    private int GetLostTroopCount(MobileParty party, SiegeEvent siegeEvent)
    {
      int num1 = 5;
      ExplainedNumber stat1 = new ExplainedNumber(1f);
      SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Tactics, DefaultSkillEffects.TacticsTroopSacrificeReduction, CharacterObject.PlayerCharacter, ref stat1);
      float num2 = stat1.ResultNumber - 1f;
      float num3 = 0.0f;
      foreach (PartyBase partyBase in siegeEvent.BesiegerCamp.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.Siege))
        num3 += partyBase.TotalStrength;
      float totalStrength;
      int num4;
      if (party.Army != null)
      {
        totalStrength = party.Army.LeaderParty.Party.TotalStrength;
        foreach (MobileParty attachedParty in (List<MobileParty>) party.Army.LeaderParty.AttachedParties)
          totalStrength += attachedParty.Party.TotalStrength;
        num4 = party.Army.TotalRegularCount;
      }
      else
      {
        totalStrength = party.Party.TotalStrength;
        num4 = party.MemberRoster.TotalRegulars;
      }
      float num5 = MathF.Clamp(0.12f * MathF.Pow((float) (((double) num3 + 1.0) / ((double) totalStrength + 1.0)), 0.25f), 0.12f, 0.24f);
      ExplainedNumber stat2 = new ExplainedNumber((float) (num1 + (int) ((double) num5 * (double) MathF.Max(0.0f, 1f - num2) * (double) num4)));
      if (MobileParty.MainParty.HasPerk(DefaultPerks.Tactics.Improviser, true))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.Improviser, MobileParty.MainParty, false, ref stat2);
      return MathF.Round(stat2.ResultNumber);
    }
  }
}
