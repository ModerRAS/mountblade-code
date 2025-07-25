// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.MapTrackModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class MapTrackModel : GameModel
  {
    public abstract float MaxTrackLife { get; }

    public abstract float GetSkipTrackChance(MobileParty mobileParty);

    public abstract float GetMaxTrackSpottingDistanceForMainParty();

    public abstract bool CanPartyLeaveTrack(MobileParty mobileParty);

    public abstract float GetTrackDetectionDifficultyForMainParty(
      Track track,
      float trackSpottingDistance);

    public abstract float GetSkillFromTrackDetected(Track track);

    public abstract int GetTrackLife(MobileParty mobileParty);

    public abstract TextObject TrackTitle(Track track);

    public abstract IEnumerable<(TextObject, string)> GetTrackDescription(Track track);

    public abstract uint GetTrackColor(Track track);

    public abstract float GetTrackScale(Track track);
  }
}
