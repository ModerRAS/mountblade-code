// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionTimer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionTimer
  {
    private MissionTime _startTime;
    private float _duration;

    private MissionTimer()
    {
    }

    public MissionTimer(float duration)
    {
      this._startTime = MissionTime.Now;
      this._duration = duration;
    }

    public MissionTime GetStartTime() => this._startTime;

    public float GetTimerDuration() => this._duration;

    public float GetRemainingTimeInSeconds(bool synched = false)
    {
      if ((double) this._duration < 0.0)
        return 0.0f;
      float num = this._duration - this._startTime.ElapsedSeconds;
      if (synched && GameNetwork.IsClientOrReplay)
        num -= Mission.Current.MissionTimeTracker.GetLastSyncDifference();
      return (double) num <= 0.0 ? 0.0f : num;
    }

    public bool Check(bool reset = false)
    {
      int num = (double) this.GetRemainingTimeInSeconds() <= 0.0 ? 1 : 0;
      if ((num & (reset ? 1 : 0)) == 0)
        return num != 0;
      this._startTime = MissionTime.Now;
      return num != 0;
    }

    public static MissionTimer CreateSynchedTimerClient(float startTimeInSeconds, float duration)
    {
      return new MissionTimer()
      {
        _startTime = new MissionTime((long) ((double) startTimeInSeconds * 10000000.0)),
        _duration = duration
      };
    }
  }
}
