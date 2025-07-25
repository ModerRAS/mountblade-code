// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.ClanTierModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class ClanTierModel : GameModel
  {
    public abstract int MinClanTier { get; }

    public abstract int MaxClanTier { get; }

    public abstract int MercenaryEligibleTier { get; }

    public abstract int VassalEligibleTier { get; }

    public abstract int BannerEligibleTier { get; }

    public abstract int RebelClanStartingTier { get; }

    public abstract int CompanionToLordClanStartingTier { get; }

    public abstract int CalculateInitialRenown(Clan clan);

    public abstract int CalculateInitialInfluence(Clan clan);

    public abstract int CalculateTier(Clan clan);

    public abstract (ExplainedNumber, bool) HasUpcomingTier(
      Clan clan,
      out TextObject extraExplanation,
      bool includeDescriptions = false);

    public abstract int GetRequiredRenownForTier(int tier);

    public abstract int GetPartyLimitForTier(Clan clan, int clanTierToCheck);

    public abstract int GetCompanionLimit(Clan clan);
  }
}
