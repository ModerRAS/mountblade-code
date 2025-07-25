// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBanditDensityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBanditDensityModel : BanditDensityModel
  {
    public override int NumberOfMaximumLooterParties => 150;

    public override int NumberOfMinimumBanditPartiesInAHideoutToInfestIt => 2;

    public override int NumberOfMaximumBanditPartiesInEachHideout => 4;

    public override int NumberOfMaximumBanditPartiesAroundEachHideout => 8;

    public override int NumberOfMaximumHideoutsAtEachBanditFaction => 10;

    public override int NumberOfInitialHideoutsAtEachBanditFaction => 3;

    public override int NumberOfMinimumBanditTroopsInHideoutMission => 10;

    public override int NumberOfMaximumTroopCountForFirstFightInHideout
    {
      get => MathF.Floor((float) (6.0 * (2.0 + (double) Campaign.Current.PlayerProgress)));
    }

    public override int NumberOfMaximumTroopCountForBossFightInHideout
    {
      get => MathF.Floor((float) (1.0 + 5.0 * (1.0 + (double) Campaign.Current.PlayerProgress)));
    }

    public override float SpawnPercentageForFirstFightInHideoutMission => 0.75f;

    public override int GetPlayerMaximumTroopCountForHideoutMission(MobileParty party)
    {
      float f = 10f;
      if (party.HasPerk(DefaultPerks.Tactics.SmallUnitTactics))
        f += DefaultPerks.Tactics.SmallUnitTactics.PrimaryBonus;
      return MathF.Round(f);
    }
  }
}
