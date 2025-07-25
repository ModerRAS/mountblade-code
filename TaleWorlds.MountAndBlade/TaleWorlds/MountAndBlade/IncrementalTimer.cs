// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IncrementalTimer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class IncrementalTimer
  {
    private readonly float _totalDuration;
    private readonly float _tickInterval;
    private readonly Timer _timer;

    public float TimerCounter { get; private set; }

    public IncrementalTimer(float totalDuration, float tickInterval)
    {
      this._tickInterval = MathF.Max(tickInterval, 0.01f);
      this._totalDuration = MathF.Max(totalDuration, 0.01f);
      this.TimerCounter = 0.0f;
      this._timer = new Timer(MBCommon.GetTotalMissionTime(), this._tickInterval);
    }

    public bool Check()
    {
      if (!this._timer.Check(MBCommon.GetTotalMissionTime()))
        return false;
      this.TimerCounter += this._tickInterval / this._totalDuration;
      return true;
    }

    public bool HasEnded() => (double) this.TimerCounter >= 1.0;
  }
}
