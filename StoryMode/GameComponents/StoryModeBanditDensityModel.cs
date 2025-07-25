// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeBanditDensityModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem.GameComponents;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeBanditDensityModel : DefaultBanditDensityModel
  {
    public override int NumberOfMaximumLooterParties
    {
      get
      {
        return StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted ? 0 : base.NumberOfMaximumLooterParties;
      }
    }

    public override int NumberOfMaximumBanditPartiesAroundEachHideout
    {
      get
      {
        return StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted ? 0 : base.NumberOfMaximumBanditPartiesAroundEachHideout;
      }
    }

    public override int NumberOfMaximumBanditPartiesInEachHideout
    {
      get
      {
        return StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted ? 0 : base.NumberOfMaximumBanditPartiesInEachHideout;
      }
    }

    public override int NumberOfMaximumHideoutsAtEachBanditFaction
    {
      get
      {
        return StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted ? 0 : base.NumberOfMaximumHideoutsAtEachBanditFaction;
      }
    }
  }
}
