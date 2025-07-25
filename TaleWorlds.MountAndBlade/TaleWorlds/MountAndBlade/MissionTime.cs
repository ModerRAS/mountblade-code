// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionTime
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MissionTime : IComparable<MissionTime>
  {
    public const long TimeTicksPerMilliSecond = 10000;
    public const long TimeTicksPerSecond = 10000000;
    public const long TimeTicksPerMinute = 600000000;
    public const long TimeTicksPerHour = 36000000000;
    public const float InvTimeTicksPerSecond = 1E-07f;
    private readonly long _numberOfTicks;

    public long NumberOfTicks => this._numberOfTicks;

    public MissionTime(long numberOfTicks) => this._numberOfTicks = numberOfTicks;

    private static long CurrentNumberOfTicks => Mission.Current.MissionTimeTracker.NumberOfTicks;

    public static MissionTime DeltaTime
    {
      get => new MissionTime(Mission.Current.MissionTimeTracker.DeltaTimeInTicks);
    }

    private static long DeltaTimeInTicks => Mission.Current.MissionTimeTracker.DeltaTimeInTicks;

    public static MissionTime Now
    {
      get => new MissionTime(Mission.Current.MissionTimeTracker.NumberOfTicks);
    }

    public bool IsFuture => MissionTime.CurrentNumberOfTicks < this._numberOfTicks;

    public bool IsPast => MissionTime.CurrentNumberOfTicks > this._numberOfTicks;

    public bool IsNow => MissionTime.CurrentNumberOfTicks == this._numberOfTicks;

    public float ElapsedHours
    {
      get => (float) (MissionTime.CurrentNumberOfTicks - this._numberOfTicks) / 3.6E+10f;
    }

    public float ElapsedSeconds
    {
      get => (float) (MissionTime.CurrentNumberOfTicks - this._numberOfTicks) * 1E-07f;
    }

    public float ElapsedMilliseconds
    {
      get => (float) (MissionTime.CurrentNumberOfTicks - this._numberOfTicks) / 10000f;
    }

    public double ToHours => (double) this._numberOfTicks / 36000000000.0;

    public double ToMinutes => (double) this._numberOfTicks / 600000000.0;

    public double ToSeconds => (double) this._numberOfTicks * 1.0000000116860974E-07;

    public double ToMilliseconds => (double) this._numberOfTicks / 10000.0;

    public static MissionTime MillisecondsFromNow(float valueInMilliseconds)
    {
      return new MissionTime((long) ((double) valueInMilliseconds * 10000.0 + (double) MissionTime.CurrentNumberOfTicks));
    }

    public static MissionTime SecondsFromNow(float valueInSeconds)
    {
      return new MissionTime((long) ((double) valueInSeconds * 10000000.0 + (double) MissionTime.CurrentNumberOfTicks));
    }

    public bool Equals(MissionTime other) => this._numberOfTicks == other._numberOfTicks;

    public override bool Equals(object obj)
    {
      return obj != null && obj is MissionTime other && this.Equals(other);
    }

    public override int GetHashCode() => this._numberOfTicks.GetHashCode();

    public int CompareTo(MissionTime other)
    {
      if (this._numberOfTicks == other._numberOfTicks)
        return 0;
      return this._numberOfTicks > other._numberOfTicks ? 1 : -1;
    }

    public static bool operator <(MissionTime x, MissionTime y)
    {
      return x._numberOfTicks < y._numberOfTicks;
    }

    public static bool operator >(MissionTime x, MissionTime y)
    {
      return x._numberOfTicks > y._numberOfTicks;
    }

    public static bool operator ==(MissionTime x, MissionTime y)
    {
      return x._numberOfTicks == y._numberOfTicks;
    }

    public static bool operator !=(MissionTime x, MissionTime y) => !(x == y);

    public static bool operator <=(MissionTime x, MissionTime y)
    {
      return x._numberOfTicks <= y._numberOfTicks;
    }

    public static bool operator >=(MissionTime x, MissionTime y)
    {
      return x._numberOfTicks >= y._numberOfTicks;
    }

    public static MissionTime Milliseconds(float valueInMilliseconds)
    {
      return new MissionTime((long) ((double) valueInMilliseconds * 10000.0));
    }

    public static MissionTime Seconds(float valueInSeconds)
    {
      return new MissionTime((long) ((double) valueInSeconds * 10000000.0));
    }

    public static MissionTime Minutes(float valueInMinutes)
    {
      return new MissionTime((long) ((double) valueInMinutes * 600000000.0));
    }

    public static MissionTime Hours(float valueInHours)
    {
      return new MissionTime((long) ((double) valueInHours * 35999997952.0));
    }

    public static MissionTime Zero => new MissionTime(0L);

    public static MissionTime operator +(MissionTime g1, MissionTime g2)
    {
      return new MissionTime(g1._numberOfTicks + g2._numberOfTicks);
    }

    public static MissionTime operator -(MissionTime g1, MissionTime g2)
    {
      return new MissionTime(g1._numberOfTicks - g2._numberOfTicks);
    }
  }
}
