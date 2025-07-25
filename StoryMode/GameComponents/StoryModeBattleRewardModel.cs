// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeBattleRewardModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModePhases;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeBattleRewardModel : DefaultBattleRewardModel
  {
    public override ExplainedNumber CalculateRenownGain(
      PartyBase party,
      float renownValueOfBattle,
      float contributionShare)
    {
      return TutorialPhase.Instance != null && !TutorialPhase.Instance.IsCompleted && party == PartyBase.MainParty ? new ExplainedNumber() : base.CalculateRenownGain(party, renownValueOfBattle, contributionShare);
    }
  }
}
