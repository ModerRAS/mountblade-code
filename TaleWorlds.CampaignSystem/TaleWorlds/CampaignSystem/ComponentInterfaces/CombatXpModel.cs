// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.CombatXpModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class CombatXpModel : GameModel
  {
    public abstract SkillObject GetSkillForWeapon(WeaponComponentData weapon, bool isSiegeEngineHit);

    public abstract void GetXpFromHit(
      CharacterObject attackerTroop,
      CharacterObject captain,
      CharacterObject attackedTroop,
      PartyBase attackerParty,
      int damage,
      bool isFatal,
      CombatXpModel.MissionTypeEnum missionType,
      out int xpAmount);

    public abstract float GetXpMultiplierFromShotDifficulty(float shotDifficulty);

    public abstract float CaptainRadius { get; }

    public enum MissionTypeEnum
    {
      Battle,
      PracticeFight,
      Tournament,
      SimulationBattle,
      NoXp,
    }
  }
}
