// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PartyHealingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PartyHealingModel : GameModel
  {
    public abstract float GetSurgeryChance(PartyBase party, CharacterObject character);

    public abstract float GetSurvivalChance(
      PartyBase party,
      CharacterObject agentCharacter,
      DamageTypes damageType,
      bool canDamageKillEvenIfBlunt,
      PartyBase enemyParty = null);

    public abstract int GetSkillXpFromHealingTroop(PartyBase party);

    public abstract ExplainedNumber GetDailyHealingForRegulars(
      MobileParty party,
      bool includeDescriptions = false);

    public abstract ExplainedNumber GetDailyHealingHpForHeroes(
      MobileParty party,
      bool includeDescriptions = false);

    public abstract int GetHeroesEffectedHealingAmount(Hero hero, float healingRate);

    public abstract float GetSiegeBombardmentHitSurgeryChance(PartyBase party);

    public abstract int GetBattleEndHealingAmount(MobileParty party, CharacterObject character);
  }
}
