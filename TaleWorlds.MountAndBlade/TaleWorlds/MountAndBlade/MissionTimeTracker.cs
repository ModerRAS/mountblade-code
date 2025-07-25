// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionTimeTracker
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionTimeTracker
  {
    private long _lastSyncDifference;

    public long NumberOfTicks { get; private set; }

    public long DeltaTimeInTicks { get; private set; }

    public MissionTimeTracker(MissionTime initialMapTime)
    {
      this.NumberOfTicks = initialMapTime.NumberOfTicks;
    }

    public MissionTimeTracker() => this.NumberOfTicks = 0L;

    public void Tick(float seconds)
    {
      this.DeltaTimeInTicks = (long) ((double) seconds * 10000000.0);
      this.NumberOfTicks += this.DeltaTimeInTicks;
    }

    public void UpdateSync(float newValue)
    {
      this._lastSyncDifference = (long) ((double) newValue * 10000000.0) - this.NumberOfTicks;
    }

    public float GetLastSyncDifference() => (float) this._lastSyncDifference / 1E+07f;
  }
}
