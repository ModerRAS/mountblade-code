// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyImpairmentModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyImpairmentModel : PartyImpairmentModel
  {
    private const float BaseDisorganizedStateDuration = 6f;
    private static readonly TextObject _settlementInvolvedMapEvent = new TextObject("{=KVlPhPSD}Settlement involved map event");

    public override float GetSiegeExpectedVulnerabilityTime()
    {
      float num1 = (float) ((2.0 + (double) MBRandom.RandomFloatNormal + 24.0 - (double) CampaignTime.Now.CurrentHourInDay) % 24.0);
      float num2 = MathF.Pow(MBRandom.RandomFloat, 6f);
      return (float) ((((double) MBRandom.RandomFloatNormal > 0.0 ? (double) num2 : 1.0 - (double) num2) * 24.0 + (double) num1) % 24.0);
    }

    public override float GetDisorganizedStateDuration(MobileParty party)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(6f);
      if ((party.MapEvent == null ? 0 : (party.MapEvent.IsRaid ? 1 : (party.MapEvent.IsSiegeAssault ? 1 : 0))) != 0 && party.HasPerk(DefaultPerks.Tactics.SwiftRegroup))
        explainedNumber.AddFactor(DefaultPerks.Tactics.SwiftRegroup.PrimaryBonus, DefaultPerks.Tactics.SwiftRegroup.Description);
      if (party.HasPerk(DefaultPerks.Scouting.Foragers))
        explainedNumber.AddFactor(DefaultPerks.Scouting.Foragers.SecondaryBonus, DefaultPerks.Scouting.Foragers.Description);
      return explainedNumber.ResultNumber;
    }

    public override bool CanGetDisorganized(PartyBase party)
    {
      if (!party.IsActive || !party.IsMobile || party.MobileParty.MemberRoster.TotalManCount < 10)
        return false;
      return party.MobileParty.Army == null || party.MobileParty == party.MobileParty.Army.LeaderParty || party.MobileParty.AttachedTo != null;
    }

    public override float GetVulnerabilityStateDuration(PartyBase party)
    {
      return MBRandom.RandomFloatNormal + 4f;
    }
  }
}
