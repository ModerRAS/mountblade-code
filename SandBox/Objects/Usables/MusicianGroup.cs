// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.Usables.MusicianGroup
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.AI;
using SandBox.Objects.AnimationPoints;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Objects.Usables
{
  public class MusicianGroup : UsableMachine
  {
    public const int GapBetweenTracks = 8;
    public const bool DisableAmbientMusic = true;
    private const int TempoMidValue = 120;
    private const int TempoSpeedUpLimit = 130;
    private const int TempoSlowDownLimit = 100;
    private List<PlayMusicPoint> _musicianPoints;
    private SoundEvent _trackEvent;
    private BasicMissionTimer _gapTimer;
    private List<SettlementMusicData> _playList;
    private int _currentTrackIndex = -1;

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      return TextObject.Empty;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null) => string.Empty;

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new UsablePlaceAI((UsableMachine) this);
    }

    public void SetPlayList(List<SettlementMusicData> playList)
    {
      this._playList = playList.ToList<SettlementMusicData>();
    }

    protected override void OnInit()
    {
      base.OnInit();
      this._playList = new List<SettlementMusicData>();
      this._musicianPoints = this.StandingPoints.OfType<PlayMusicPoint>().ToList<PlayMusicPoint>();
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      this.CheckNewTrackStart();
      this.CheckTrackEnd();
    }

    private void CheckNewTrackStart()
    {
      if (this._playList.Count <= 0 || this._trackEvent != null || this._gapTimer != null && (double) this._gapTimer.ElapsedTime <= 8.0 || !this._musicianPoints.Any<PlayMusicPoint>((Func<PlayMusicPoint, bool>) (x => x.HasUser)))
        return;
      ++this._currentTrackIndex;
      if (this._currentTrackIndex == this._playList.Count)
        this._currentTrackIndex = 0;
      this.SetupInstruments();
      this.StartTrack();
      this._gapTimer = (BasicMissionTimer) null;
    }

    private void CheckTrackEnd()
    {
      if (this._trackEvent == null)
        return;
      if (this._trackEvent.IsPlaying() && !this._musicianPoints.Any<PlayMusicPoint>((Func<PlayMusicPoint, bool>) (x => x.HasUser)))
        this._trackEvent.Stop();
      if (this._trackEvent == null || this._trackEvent.IsPlaying())
        return;
      this._trackEvent.Release();
      this._trackEvent = (SoundEvent) null;
      this.StopMusicians();
      this._gapTimer = new BasicMissionTimer();
    }

    private void StopMusicians()
    {
      foreach (PlayMusicPoint musicianPoint in this._musicianPoints)
      {
        if (musicianPoint.HasUser)
          musicianPoint.EndLoop();
      }
    }

    private void SetupInstruments()
    {
      List<PlayMusicPoint> list = this._musicianPoints.ToList<PlayMusicPoint>();
      list.Shuffle<PlayMusicPoint>();
      SettlementMusicData play = this._playList[this._currentTrackIndex];
      foreach (InstrumentData instrument1 in (List<InstrumentData>) play.Instruments)
      {
        InstrumentData instrumentData = instrument1;
        PlayMusicPoint playMusicPoint = list.FirstOrDefault<PlayMusicPoint>((Func<PlayMusicPoint, bool>) (x => ((IEnumerable<string>) x.GameEntity.Parent.Tags).Contains<string>(instrumentData.Tag) || string.IsNullOrEmpty(instrumentData.Tag)));
        if (playMusicPoint != null)
        {
          Tuple<InstrumentData, float> instrument2 = new Tuple<InstrumentData, float>(instrumentData, (float) play.Tempo / 120f);
          playMusicPoint.ChangeInstrument(instrument2);
          list.Remove(playMusicPoint);
        }
      }
      Tuple<InstrumentData, float> instrumentEmptyData = this.GetInstrumentEmptyData(play.Tempo);
      foreach (PlayMusicPoint playMusicPoint in list)
        playMusicPoint.ChangeInstrument(instrumentEmptyData);
    }

    private Tuple<InstrumentData, float> GetInstrumentEmptyData(int tempo)
    {
      return tempo <= 130 ? (tempo <= 100 ? new Tuple<InstrumentData, float>(MBObjectManager.Instance.GetObject<InstrumentData>("calm"), 1f) : new Tuple<InstrumentData, float>(MBObjectManager.Instance.GetObject<InstrumentData>("active"), 1f)) : new Tuple<InstrumentData, float>(MBObjectManager.Instance.GetObject<InstrumentData>("cheerful"), 1f);
    }

    private void StartTrack()
    {
      this._trackEvent = SoundEvent.CreateEvent(SoundEvent.GetEventIdFromString(this._playList[this._currentTrackIndex].MusicPath), Mission.Current.Scene);
      this._trackEvent.SetPosition(this.GameEntity.GetGlobalFrame().origin);
      this._trackEvent.Play();
      foreach (PlayMusicPoint musicianPoint in this._musicianPoints)
        musicianPoint.StartLoop(this._trackEvent);
    }
  }
}
