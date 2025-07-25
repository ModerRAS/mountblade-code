// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PartyTroopUpgradeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PartyTroopUpgradeModel : GameModel
  {
    public abstract bool CanPartyUpgradeTroopToTarget(
      PartyBase party,
      CharacterObject character,
      CharacterObject target);

    public abstract bool IsTroopUpgradeable(PartyBase party, CharacterObject character);

    public abstract bool DoesPartyHaveRequiredItemsForUpgrade(
      PartyBase party,
      CharacterObject upgradeTarget);

    public abstract bool DoesPartyHaveRequiredPerksForUpgrade(
      PartyBase party,
      CharacterObject character,
      CharacterObject upgradeTarget,
      out PerkObject requiredPerk);

    public abstract int GetGoldCostForUpgrade(
      PartyBase party,
      CharacterObject characterObject,
      CharacterObject upgradeTarget);

    public abstract int GetXpCostForUpgrade(
      PartyBase party,
      CharacterObject characterObject,
      CharacterObject upgradeTarget);

    public abstract int GetSkillXpFromUpgradingTroops(
      PartyBase party,
      CharacterObject troop,
      int numberOfTroops);

    public abstract float GetUpgradeChanceForTroopUpgrade(
      PartyBase party,
      CharacterObject troop,
      int upgradeTargetIndex);
  }
}
