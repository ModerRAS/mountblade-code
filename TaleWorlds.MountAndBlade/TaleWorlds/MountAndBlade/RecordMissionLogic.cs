// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.RecordMissionLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Diagnostics;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class RecordMissionLogic : MissionLogic
  {
    private float _lastRecordedTime = -1f;

    public override void OnBehaviorInitialize() => this.Mission.Recorder.StartRecording();

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if ((double) this._lastRecordedTime + 0.019999999552965164 >= (double) this.Mission.CurrentTime)
        return;
      this._lastRecordedTime = this.Mission.CurrentTime;
      this.Mission.Recorder.RecordCurrentState();
    }

    public override void OnEndMissionInternal()
    {
      base.OnEndMissionInternal();
      this.Mission.Recorder.BackupRecordToFile("Mission_record_" + string.Format("{0:yyyy-MM-dd_hh-mm-ss-tt}_", (object) DateTime.Now) + (object) Process.GetCurrentProcess().Id, Game.Current.GameType.GetType().Name, this.Mission.SceneLevels);
      GameNetwork.ResetMissionData();
    }
  }
}
