// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyTradeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyTradeModel : PartyTradeModel
  {
    public override int CaravanTransactionHighestValueItemCount => 3;

    public override int SmallCaravanFormingCostForPlayer
    {
      get
      {
        return CharacterObject.PlayerCharacter.Culture.HasFeat(DefaultCulturalFeats.AseraiTraderFeat) ? MathF.Round(15000f * DefaultCulturalFeats.AseraiTraderFeat.EffectBonus) : 15000;
      }
    }

    public override int LargeCaravanFormingCostForPlayer
    {
      get
      {
        return CharacterObject.PlayerCharacter.Culture.HasFeat(DefaultCulturalFeats.AseraiTraderFeat) ? MathF.Round(22500f * DefaultCulturalFeats.AseraiTraderFeat.EffectBonus) : 22500;
      }
    }

    public override float GetTradePenaltyFactor(MobileParty party)
    {
      ExplainedNumber stat = new ExplainedNumber(1f);
      SkillHelper.AddSkillBonusForParty(DefaultSkills.Trade, DefaultSkillEffects.TradePenaltyReduction, party, ref stat);
      return 1f / stat.ResultNumber;
    }
  }
}
