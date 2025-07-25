// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.GainKingdomInfluenceAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class GainKingdomInfluenceAction
  {
    private static void ApplyInternal(
      Hero hero,
      MobileParty party,
      float gainedInfluence,
      GainKingdomInfluenceAction.InfluenceGainingReason detail)
    {
      Clan clan = (Clan) null;
      if (hero != null)
      {
        if (hero.CompanionOf != null)
          clan = hero.CompanionOf;
        else if (hero.Clan != null)
          clan = hero.Clan;
      }
      else if (party.ActualClan != null)
        clan = party.ActualClan;
      else if (party.Owner != null)
        clan = party.Owner.Clan;
      if (clan == null || clan.Kingdom == null)
        return;
      MobileParty party1 = party ?? hero.PartyBelongedTo;
      if (detail != GainKingdomInfluenceAction.InfluenceGainingReason.BeingAtArmy && detail == GainKingdomInfluenceAction.InfluenceGainingReason.ClanSupport)
        gainedInfluence = 0.5f;
      if (detail != GainKingdomInfluenceAction.InfluenceGainingReason.Default && detail != GainKingdomInfluenceAction.InfluenceGainingReason.GivingFood && detail != GainKingdomInfluenceAction.InfluenceGainingReason.JoinFaction && detail != GainKingdomInfluenceAction.InfluenceGainingReason.ClanSupport && ((Kingdom) clan.MapFaction).ActivePolicies.Contains(DefaultPolicies.MilitaryCoronae))
        gainedInfluence *= 1.2f;
      ExplainedNumber explainedNumber = new ExplainedNumber(gainedInfluence);
      if (detail == GainKingdomInfluenceAction.InfluenceGainingReason.Battle && (double) gainedInfluence > 0.0)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Tactics.PreBattleManeuvers, party1, true, ref explainedNumber);
      if (detail == GainKingdomInfluenceAction.InfluenceGainingReason.CaptureSettlement && (hero != null || party1.LeaderHero != null))
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Tactics.Besieged, (hero ?? party1.LeaderHero).CharacterObject, false, ref explainedNumber);
      ChangeClanInfluenceAction.Apply(clan, explainedNumber.ResultNumber);
      if (detail == GainKingdomInfluenceAction.InfluenceGainingReason.Battle && hero == Hero.MainHero)
      {
        MBTextManager.SetTextVariable("INFLUENCE", (int) gainedInfluence);
        MBTextManager.SetTextVariable("NEW_INFLUENCE", (int) clan.Influence);
        InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_influence_gain_message").ToString()));
      }
      if (detail != GainKingdomInfluenceAction.InfluenceGainingReason.SiegeSafePassage || hero != Hero.MainHero)
        return;
      MBTextManager.SetTextVariable("INFLUENCE", -(int) gainedInfluence);
      InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_leave_siege_lose_influence_message").ToString()));
    }

    public static void ApplyForBattle(Hero hero, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal(hero, (MobileParty) null, value, GainKingdomInfluenceAction.InfluenceGainingReason.Battle);
    }

    public static void ApplyForGivingFood(Hero hero1, Hero hero2, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal(hero1, (MobileParty) null, value, GainKingdomInfluenceAction.InfluenceGainingReason.GivingFood);
      GainKingdomInfluenceAction.ApplyInternal(hero2, (MobileParty) null, -value, GainKingdomInfluenceAction.InfluenceGainingReason.GivingFood);
    }

    public static void ApplyForDefault(Hero hero, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal(hero, (MobileParty) null, value, GainKingdomInfluenceAction.InfluenceGainingReason.Default);
    }

    public static void ApplyForJoiningFaction(Hero hero, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal(hero, (MobileParty) null, value, GainKingdomInfluenceAction.InfluenceGainingReason.JoinFaction);
    }

    public static void ApplyForDonatePrisoners(MobileParty donatingParty, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal((Hero) null, donatingParty, value, GainKingdomInfluenceAction.InfluenceGainingReason.DonatePrisoners);
    }

    public static void ApplyForRaidingEnemyVillage(MobileParty side1Party, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal((Hero) null, side1Party, value, GainKingdomInfluenceAction.InfluenceGainingReason.Raiding);
    }

    public static void ApplyForBesiegingEnemySettlement(MobileParty side1Party, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal((Hero) null, side1Party, value, GainKingdomInfluenceAction.InfluenceGainingReason.Besieging);
    }

    public static void ApplyForSiegeSafePassageBarter(MobileParty side1Party, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal((Hero) null, side1Party, value, GainKingdomInfluenceAction.InfluenceGainingReason.SiegeSafePassage);
    }

    public static void ApplyForCapturingEnemySettlement(MobileParty side1Party, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal((Hero) null, side1Party, value, GainKingdomInfluenceAction.InfluenceGainingReason.CaptureSettlement);
    }

    public static void ApplyForLeavingTroopToGarrison(Hero hero, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal(hero, (MobileParty) null, value, GainKingdomInfluenceAction.InfluenceGainingReason.LeaveGarrison);
    }

    public static void ApplyForBoardGameWon(Hero hero, float value)
    {
      GainKingdomInfluenceAction.ApplyInternal(hero, (MobileParty) null, value, GainKingdomInfluenceAction.InfluenceGainingReason.BoardGameWon);
    }

    private enum InfluenceGainingReason
    {
      Default,
      BeingAtArmy,
      Battle,
      Raiding,
      Besieging,
      CaptureSettlement,
      JoinFaction,
      GivingFood,
      LeaveGarrison,
      BoardGameWon,
      ClanSupport,
      DonatePrisoners,
      SiegeSafePassage,
    }
  }
}
