// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultDelayedTeleportationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultDelayedTeleportationModel : DelayedTeleportationModel
  {
    private const float MaximumDistanceForDelay = 300f;

    public override float DefaultTeleportationSpeed => 0.24f;

    public override ExplainedNumber GetTeleportationDelayAsHours(
      Hero teleportingHero,
      PartyBase target)
    {
      float distance = 300f;
      IMapPoint mapPoint = teleportingHero.GetMapPoint();
      if (mapPoint != null)
      {
        if (target.IsSettlement)
        {
          if (teleportingHero.CurrentSettlement != null && teleportingHero.CurrentSettlement == target.Settlement)
            distance = 0.0f;
          else
            Campaign.Current.Models.MapDistanceModel.GetDistance(mapPoint, target.Settlement, 300f, out distance);
        }
        else if (target.IsMobile)
          Campaign.Current.Models.MapDistanceModel.GetDistance(mapPoint, target.MobileParty, 300f, out distance);
      }
      return new ExplainedNumber(distance * this.DefaultTeleportationSpeed);
    }
  }
}
