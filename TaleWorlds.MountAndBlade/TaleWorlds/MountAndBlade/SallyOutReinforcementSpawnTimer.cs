// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SallyOutReinforcementSpawnTimer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SallyOutReinforcementSpawnTimer : ICustomReinforcementSpawnTimer
  {
    private BasicMissionTimer _besiegedSideTimer;
    private BasicMissionTimer _besiegerSideTimer;
    private float _besiegedInterval;
    private float _besiegerInterval;
    private float _besiegerIntervalChange;
    private int _besiegerRemainingIntervalChanges;

    public SallyOutReinforcementSpawnTimer(
      float besiegedInterval,
      float besiegerInterval,
      float besiegerIntervalChange,
      int besiegerIntervalChangeCount)
    {
      this._besiegedSideTimer = new BasicMissionTimer();
      this._besiegedInterval = besiegedInterval;
      this._besiegerSideTimer = new BasicMissionTimer();
      this._besiegerInterval = besiegerInterval;
      this._besiegerIntervalChange = besiegerIntervalChange;
      this._besiegerRemainingIntervalChanges = besiegerIntervalChangeCount;
    }

    public bool Check(BattleSideEnum side)
    {
      switch (side)
      {
        case BattleSideEnum.Defender:
          if ((double) this._besiegedSideTimer.ElapsedTime >= (double) this._besiegedInterval)
          {
            this._besiegedSideTimer.Reset();
            return true;
          }
          break;
        case BattleSideEnum.Attacker:
          if ((double) this._besiegerSideTimer.ElapsedTime >= (double) this._besiegerInterval)
          {
            if (this._besiegerRemainingIntervalChanges > 0)
            {
              this._besiegerInterval -= this._besiegerIntervalChange;
              --this._besiegerRemainingIntervalChanges;
            }
            this._besiegerSideTimer.Reset();
            return true;
          }
          break;
      }
      return false;
    }

    public void ResetTimer(BattleSideEnum side)
    {
      if (side == BattleSideEnum.Attacker)
      {
        this._besiegerSideTimer.Reset();
      }
      else
      {
        if (side != BattleSideEnum.Defender)
          return;
        this._besiegedSideTimer.Reset();
      }
    }
  }
}
