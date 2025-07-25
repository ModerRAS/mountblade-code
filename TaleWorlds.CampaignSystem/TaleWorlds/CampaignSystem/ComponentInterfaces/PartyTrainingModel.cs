// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PartyTrainingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PartyTrainingModel : GameModel
  {
    public abstract int GenerateSharedXp(CharacterObject troop, int xp, MobileParty mobileParty);

    public abstract int CalculateXpGainFromBattles(
      FlattenedTroopRosterElement troopRosterElement,
      PartyBase party);

    public abstract int GetXpReward(CharacterObject character);

    public abstract ExplainedNumber GetEffectiveDailyExperience(
      MobileParty party,
      TroopRosterElement troop);
  }
}
