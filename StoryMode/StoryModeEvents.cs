// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeEvents
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;

#nullable disable
namespace StoryMode
{
  public class StoryModeEvents : CampaignEventReceiver
  {
    private readonly MbEvent<MainStoryLineSide> _onMainStoryLineSideChosenEvent = new MbEvent<MainStoryLineSide>();
    private readonly MbEvent _onStoryModeTutorialEndedEvent = new MbEvent();
    private readonly MbEvent _onBannerPieceCollectedEvent = new MbEvent();
    private readonly MbEvent _onConspiracyActivatedEvent = new MbEvent();
    private readonly MbEvent _onTravelToVillageTutorialQuestStartedEvent = new MbEvent();

    public static StoryModeEvents Instance => StoryModeManager.Current.StoryModeEvents;

    public override void RemoveListeners(object obj)
    {
      this._onMainStoryLineSideChosenEvent.ClearListeners(obj);
      this._onStoryModeTutorialEndedEvent.ClearListeners(obj);
      this._onBannerPieceCollectedEvent.ClearListeners(obj);
      this._onConspiracyActivatedEvent.ClearListeners(obj);
      this._onTravelToVillageTutorialQuestStartedEvent.ClearListeners(obj);
    }

    public static IMbEvent<MainStoryLineSide> OnMainStoryLineSideChosenEvent
    {
      get => (IMbEvent<MainStoryLineSide>) StoryModeEvents.Instance._onMainStoryLineSideChosenEvent;
    }

    public void OnMainStoryLineSideChosen(MainStoryLineSide side)
    {
      StoryModeEvents.Instance._onMainStoryLineSideChosenEvent.Invoke(side);
    }

    public static IMbEvent OnStoryModeTutorialEndedEvent
    {
      get => (IMbEvent) StoryModeEvents.Instance._onStoryModeTutorialEndedEvent;
    }

    public void OnStoryModeTutorialEnded()
    {
      StoryModeEvents.Instance._onStoryModeTutorialEndedEvent.Invoke();
    }

    public static IMbEvent OnBannerPieceCollectedEvent
    {
      get => (IMbEvent) StoryModeEvents.Instance._onBannerPieceCollectedEvent;
    }

    public void OnBannerPieceCollected()
    {
      StoryModeEvents.Instance._onBannerPieceCollectedEvent.Invoke();
    }

    public static IMbEvent OnConspiracyActivatedEvent
    {
      get => (IMbEvent) StoryModeEvents.Instance._onConspiracyActivatedEvent;
    }

    public void OnConspiracyActivated()
    {
      StoryModeEvents.Instance._onConspiracyActivatedEvent.Invoke();
    }

    public static IMbEvent OnTravelToVillageTutorialQuestStartedEvent
    {
      get => (IMbEvent) StoryModeEvents.Instance._onTravelToVillageTutorialQuestStartedEvent;
    }

    public void OnTravelToVillageTutorialQuestStarted()
    {
      StoryModeEvents.Instance._onTravelToVillageTutorialQuestStartedEvent.Invoke();
    }
  }
}
