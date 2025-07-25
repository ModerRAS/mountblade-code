// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.BanditDensityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class BanditDensityModel : GameModel
  {
    public abstract int NumberOfMaximumLooterParties { get; }

    public abstract int NumberOfMinimumBanditPartiesInAHideoutToInfestIt { get; }

    public abstract int NumberOfMaximumBanditPartiesInEachHideout { get; }

    public abstract int NumberOfMaximumBanditPartiesAroundEachHideout { get; }

    public abstract int NumberOfMaximumHideoutsAtEachBanditFaction { get; }

    public abstract int NumberOfInitialHideoutsAtEachBanditFaction { get; }

    public abstract int NumberOfMinimumBanditTroopsInHideoutMission { get; }

    public abstract int NumberOfMaximumTroopCountForFirstFightInHideout { get; }

    public abstract int NumberOfMaximumTroopCountForBossFightInHideout { get; }

    public abstract float SpawnPercentageForFirstFightInHideoutMission { get; }

    public abstract int GetPlayerMaximumTroopCountForHideoutMission(MobileParty party);
  }
}
