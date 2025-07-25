// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.ITeleportationCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Map;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface ITeleportationCampaignBehavior : ICampaignBehavior
  {
    bool GetTargetOfTeleportingHero(
      Hero teleportingHero,
      out bool isGovernor,
      out bool isPartyLeader,
      out IMapPoint target);

    CampaignTime GetHeroArrivalTimeToDestination(Hero teleportingHero);
  }
}
