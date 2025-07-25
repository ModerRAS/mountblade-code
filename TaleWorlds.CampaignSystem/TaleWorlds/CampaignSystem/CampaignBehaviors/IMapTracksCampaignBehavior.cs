// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.IMapTracksCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface IMapTracksCampaignBehavior : ICampaignBehavior
  {
    MBReadOnlyList<Track> DetectedTracks { get; }

    void AddTrack(MobileParty target, Vec2 trackPosition, Vec2 trackDirection);

    void AddMapArrow(TextObject pointerName, Vec2 trackPosition, Vec2 trackDirection, float life);
  }
}
