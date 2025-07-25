// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.BattleRewardModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class BattleRewardModel : GameModel
  {
    public abstract float DestroyHideoutBannerLootChance { get; }

    public abstract float CaptureSettlementBannerLootChance { get; }

    public abstract float DefeatRegularHeroBannerLootChance { get; }

    public abstract float DefeatClanLeaderBannerLootChance { get; }

    public abstract float DefeatKingdomRulerBannerLootChance { get; }

    public abstract int GetPlayerGainedRelationAmount(MapEvent mapEvent, Hero hero);

    public abstract ExplainedNumber CalculateRenownGain(
      PartyBase party,
      float renownValueOfBattle,
      float contributionShare);

    public abstract ExplainedNumber CalculateInfluenceGain(
      PartyBase party,
      float influenceValueOfBattle,
      float contributionShare);

    public abstract ExplainedNumber CalculateMoraleGainVictory(
      PartyBase party,
      float renownValueOfBattle,
      float contributionShare);

    public abstract int CalculateGoldLossAfterDefeat(Hero partyLeaderHero);

    public abstract EquipmentElement GetLootedItemFromTroop(
      CharacterObject character,
      float targetValue);

    public abstract float GetPartySavePrisonerAsMemberShareProbability(
      PartyBase winnerParty,
      float lootAmount);

    public abstract float GetExpectedLootedItemValue(CharacterObject character);

    public abstract float GetAITradePenalty();
  }
}
