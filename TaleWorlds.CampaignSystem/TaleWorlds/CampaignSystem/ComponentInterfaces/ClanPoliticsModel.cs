// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.ClanPoliticsModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class ClanPoliticsModel : GameModel
  {
    public abstract ExplainedNumber CalculateInfluenceChange(Clan clan, bool includeDescriptions = false);

    public abstract float CalculateSupportForPolicyInClan(Clan clan, PolicyObject policy);

    public abstract float CalculateRelationshipChangeWithSponsor(Clan clan, Clan sponsorClan);

    public abstract int GetInfluenceRequiredToOverrideKingdomDecision(
      DecisionOutcome popularOption,
      DecisionOutcome overridingOption,
      KingdomDecision decision);

    public abstract bool CanHeroBeGovernor(Hero hero);
  }
}
