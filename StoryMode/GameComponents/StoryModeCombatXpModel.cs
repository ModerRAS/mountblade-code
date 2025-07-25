// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeCombatXpModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeCombatXpModel : DefaultCombatXpModel
  {
    public override void GetXpFromHit(
      CharacterObject attackerTroop,
      CharacterObject captain,
      CharacterObject attackedTroop,
      PartyBase party,
      int damage,
      bool isFatal,
      CombatXpModel.MissionTypeEnum missionType,
      out int xpAmount)
    {
      if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.IsTrainingField())
        xpAmount = 0;
      else
        base.GetXpFromHit(attackerTroop, captain, attackedTroop, party, damage, isFatal, missionType, out xpAmount);
    }
  }
}
