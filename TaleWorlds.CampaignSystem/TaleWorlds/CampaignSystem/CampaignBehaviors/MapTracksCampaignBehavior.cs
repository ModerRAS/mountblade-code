// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.MapTracksCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class MapTracksCampaignBehavior : 
    CampaignBehaviorBase,
    IMapTracksCampaignBehavior,
    ICampaignBehavior
  {
    private const float PartyTrackPositionDelta = 5f;
    private List<Track> _allTracks = new List<Track>();
    private MBList<Track> _detectedTracksCache = new MBList<Track>();
    private Dictionary<MobileParty, Vec2> _trackDataDictionary = new Dictionary<MobileParty, Vec2>();
    private MBCampaignEvent _quarterHourlyTick;
    private LocatorGrid<Track> _trackLocator = new LocatorGrid<Track>();
    private MapTracksCampaignBehavior.TrackPool _trackPool;

    public MBReadOnlyList<Track> DetectedTracks
    {
      get => (MBReadOnlyList<Track>) this._detectedTracksCache;
    }

    public MapTracksCampaignBehavior()
    {
      this._trackPool = new MapTracksCampaignBehavior.TrackPool(2048);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnHourlyTick));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.GameLoadFinished));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnHourlyTickParty));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (!this._trackDataDictionary.ContainsKey(mobileParty))
        return;
      this._trackDataDictionary.Remove(mobileParty);
    }

    private void OnNewGameCreated(CampaignGameStarter gameStarted)
    {
      this._trackDataDictionary = new Dictionary<MobileParty, Vec2>();
      this.AddEventHandler();
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<Track>>("_allTracks", ref this._allTracks);
      dataStore.SyncData<Dictionary<MobileParty, Vec2>>("_trackDataDictionary", ref this._trackDataDictionary);
    }

    private void OnHourlyTickParty(MobileParty mobileParty)
    {
      if (!Campaign.Current.Models.MapTrackModel.CanPartyLeaveTrack(mobileParty))
        return;
      Vec2 vec2 = Vec2.Zero;
      if (this._trackDataDictionary.ContainsKey(mobileParty))
        vec2 = this._trackDataDictionary[mobileParty];
      if ((double) vec2.DistanceSquared(mobileParty.Position2D) <= 5.0 || !this.IsTrackDropped(mobileParty))
        return;
      Vec2 position2D = mobileParty.Position2D;
      Vec2 trackDirection = mobileParty.Position2D - vec2;
      double num = (double) trackDirection.Normalize();
      this.AddTrack(mobileParty, position2D, trackDirection);
      this._trackDataDictionary[mobileParty] = position2D;
    }

    private void OnHourlyTick() => this.RemoveExpiredTracks();

    private void GameLoadFinished()
    {
      this._allTracks.RemoveAll((Predicate<Track>) (x => x.IsExpired));
      this._detectedTracksCache = this._allTracks.Where<Track>((Func<Track, bool>) (x => x.IsDetected)).ToMBList<Track>();
      this.AddEventHandler();
      foreach (Track allTrack in this._allTracks)
        this._trackLocator.UpdateLocator(allTrack);
      foreach (MobileParty key in this._trackDataDictionary.Keys.ToList<MobileParty>())
      {
        if (!key.IsActive)
          this._trackDataDictionary.Remove(key);
      }
    }

    private void AddEventHandler()
    {
      this._quarterHourlyTick = CampaignPeriodicEventManager.CreatePeriodicEvent(CampaignTime.Hours(0.25f), CampaignTime.Hours(0.1f));
      this._quarterHourlyTick.AddHandler(new MBCampaignEvent.CampaignEventDelegate(this.QuarterHourlyTick));
    }

    private void QuarterHourlyTick(MBCampaignEvent campaignEvent, object[] delegateParams)
    {
      if (!PartyBase.MainParty.IsValid)
        return;
      int skillValue = MobileParty.MainParty.EffectiveScout != null ? MobileParty.MainParty.EffectiveScout.GetSkillValue(DefaultSkills.Scouting) : 0;
      if (skillValue == 0)
        return;
      float distanceForMainParty = Campaign.Current.Models.MapTrackModel.GetMaxTrackSpottingDistanceForMainParty();
      LocatableSearchData<Track> data = this._trackLocator.StartFindingLocatablesAroundPosition(MobileParty.MainParty.Position2D, distanceForMainParty);
      for (Track nextLocatable = this._trackLocator.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = this._trackLocator.FindNextLocatable(ref data))
      {
        if (!nextLocatable.IsDetected && this._allTracks.Contains(nextLocatable) && (double) Campaign.Current.Models.MapTrackModel.GetTrackDetectionDifficultyForMainParty(nextLocatable, distanceForMainParty) < (double) skillValue)
          this.TrackDetected(nextLocatable);
      }
    }

    private void RemoveExpiredTracks()
    {
      for (int index = this._allTracks.Count - 1; index >= 0; --index)
      {
        Track allTrack = this._allTracks[index];
        if (allTrack.IsExpired)
        {
          this._allTracks.Remove(allTrack);
          if (this._detectedTracksCache.Contains(allTrack))
          {
            this._detectedTracksCache.Remove(allTrack);
            CampaignEventDispatcher.Instance.TrackLost(allTrack);
          }
          this._trackLocator.RemoveLocatable(allTrack);
          this._trackPool.ReleaseTrack(allTrack);
        }
      }
    }

    private void TrackDetected(Track track)
    {
      track.IsDetected = true;
      this._detectedTracksCache.Add(track);
      CampaignEventDispatcher.Instance.TrackDetected(track);
      SkillLevelingManager.OnTrackDetected(track);
    }

    public bool IsTrackDropped(MobileParty mobileParty)
    {
      if ((double) MBRandom.RandomFloat < (double) Campaign.Current.Models.MapTrackModel.GetSkipTrackChance(mobileParty))
        return false;
      float num1 = mobileParty.Position2D.DistanceSquared(MobileParty.MainParty.Position2D);
      double num2 = (double) MobileParty.MainParty.Speed * (double) Campaign.Current.Models.MapTrackModel.MaxTrackLife;
      return num2 * num2 > (double) num1;
    }

    public void AddTrack(MobileParty party, Vec2 trackPosition, Vec2 trackDirection)
    {
      Track locatable = this._trackPool.RequestTrack(party, trackPosition, trackDirection);
      this._allTracks.Add(locatable);
      this._trackLocator.UpdateLocator(locatable);
    }

    public void AddMapArrow(
      TextObject pointerName,
      Vec2 trackPosition,
      Vec2 trackDirection,
      float life)
    {
      Track track = this._trackPool.RequestMapArrow(pointerName, trackPosition, trackDirection, life);
      this._allTracks.Add(track);
      this._trackLocator.UpdateLocator(track);
      this.TrackDetected(track);
    }

    private class TrackPool
    {
      private Stack<Track> _stack;

      private int MaxSize { get; }

      public int Size
      {
        get
        {
          Stack<Track> stack = this._stack;
          return stack == null ? 0 : __nonvirtual (stack.Count);
        }
      }

      public TrackPool(int size)
      {
        this.MaxSize = size;
        this._stack = new Stack<Track>();
        for (int index = 0; index < size; ++index)
          this._stack.Push(new Track());
      }

      public Track RequestTrack(MobileParty party, Vec2 trackPosition, Vec2 trackDirection)
      {
        Track track = this._stack.Count > 0 ? this._stack.Pop() : new Track();
        int numberOfAllMembers = party.Party.NumberOfAllMembers;
        int ofHealthyMembers = party.Party.NumberOfHealthyMembers;
        int numberOfMenWithHorse = party.Party.NumberOfMenWithHorse;
        int ofMenWithoutHorse = party.Party.NumberOfMenWithoutHorse;
        int numberOfPackAnimals = party.Party.NumberOfPackAnimals;
        int numberOfPrisoners = party.Party.NumberOfPrisoners;
        TextObject textObject = party.Name;
        if (party.Army != null && party.Army.LeaderParty == party)
        {
          textObject = party.ArmyName;
          foreach (MobileParty attachedParty in (List<MobileParty>) party.Army.LeaderParty.AttachedParties)
          {
            numberOfAllMembers += attachedParty.Party.NumberOfAllMembers;
            ofHealthyMembers += attachedParty.Party.NumberOfHealthyMembers;
            numberOfMenWithHorse += attachedParty.Party.NumberOfMenWithHorse;
            ofMenWithoutHorse += attachedParty.Party.NumberOfMenWithoutHorse;
            numberOfPackAnimals += attachedParty.Party.NumberOfPackAnimals;
            numberOfPrisoners += attachedParty.Party.NumberOfPrisoners;
          }
        }
        track.Position = trackPosition;
        track.Direction = trackDirection.RotationInRadians;
        track.PartyType = Track.GetPartyTypeEnum(party);
        track.PartyName = textObject;
        track.Culture = party.Party.Culture;
        if (track.Culture == null)
        {
          string message = string.Format("Track culture is null for {0}: {1}", (object) party.StringId, (object) party.Name);
          Debug.Print(message);
          Debug.FailedAssert(message, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\MapTracksCampaignBehavior.cs", nameof (RequestTrack), 62);
        }
        track.Speed = party.Speed;
        track.Life = (float) Campaign.Current.Models.MapTrackModel.GetTrackLife(party);
        track.IsEnemy = FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, party.MapFaction);
        track.NumberOfAllMembers = numberOfAllMembers;
        track.NumberOfHealthyMembers = ofHealthyMembers;
        track.NumberOfMenWithHorse = numberOfMenWithHorse;
        track.NumberOfMenWithoutHorse = ofMenWithoutHorse;
        track.NumberOfPackAnimals = numberOfPackAnimals;
        track.NumberOfPrisoners = numberOfPrisoners;
        track.IsPointer = false;
        track.IsDetected = false;
        track.CreationTime = CampaignTime.Now;
        return track;
      }

      public Track RequestMapArrow(
        TextObject pointerName,
        Vec2 trackPosition,
        Vec2 trackDirection,
        float life)
      {
        Track track = this._stack.Count > 0 ? this._stack.Pop() : new Track();
        track.Position = trackPosition;
        track.Direction = trackDirection.RotationInRadians;
        track.PartyName = pointerName;
        track.Life = life;
        track.IsPointer = true;
        track.IsDetected = true;
        track.CreationTime = CampaignTime.Now;
        return track;
      }

      public void ReleaseTrack(Track track)
      {
        track.Reset();
        if (this._stack.Count >= this.MaxSize)
          return;
        this._stack.Push(track);
      }

      public override string ToString() => string.Format("TrackPool: {0}", (object) this.Size);
    }
  }
}
