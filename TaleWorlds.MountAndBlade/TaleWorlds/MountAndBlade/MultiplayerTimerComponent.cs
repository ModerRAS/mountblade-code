// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerTimerComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerTimerComponent : MissionNetwork
  {
    private MissionTimer _missionTimer;

    public bool IsTimerRunning { get; private set; }

    public void StartTimerAsServer(float duration)
    {
      this._missionTimer = new MissionTimer(duration);
      this.IsTimerRunning = true;
    }

    public void StartTimerAsClient(float startTime, float duration)
    {
      this._missionTimer = MissionTimer.CreateSynchedTimerClient(startTime, duration);
      this.IsTimerRunning = true;
    }

    public float GetRemainingTime(bool isSynched)
    {
      if (!this.IsTimerRunning)
        return 0.0f;
      float remainingTimeInSeconds = this._missionTimer.GetRemainingTimeInSeconds(isSynched);
      return isSynched ? MathF.Min(remainingTimeInSeconds, this._missionTimer.GetTimerDuration()) : remainingTimeInSeconds;
    }

    public bool CheckIfTimerPassed() => this.IsTimerRunning && this._missionTimer.Check();

    public MissionTime GetCurrentTimerStartTime() => this._missionTimer.GetStartTime();
  }
}
