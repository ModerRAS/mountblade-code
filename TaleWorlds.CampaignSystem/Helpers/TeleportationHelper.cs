// Decompiled with JetBrains decompiler
// Type: Helpers.TeleportationHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;

#nullable disable
namespace Helpers
{
  public static class TeleportationHelper
  {
    public static float GetHoursLeftForTeleportingHeroToReachItsDestination(Hero teleportingHero)
    {
      ITeleportationCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<ITeleportationCampaignBehavior>();
      return campaignBehavior != null ? campaignBehavior.GetHeroArrivalTimeToDestination(teleportingHero).RemainingHoursFromNow : 0.0f;
    }
  }
}
