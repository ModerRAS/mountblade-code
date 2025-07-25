// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ReplayMissionLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ReplayMissionLogic : MissionLogic
  {
    private bool _isMultiplayer;

    public string FileName { get; private set; }

    public ReplayMissionLogic(bool isMultiplayer, string fileName = "")
    {
      if (!string.IsNullOrEmpty(fileName))
        this.FileName = fileName;
      this._isMultiplayer = isMultiplayer;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      if (this._isMultiplayer)
        GameNetwork.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add);
      MBCommon.CurrentGameType = MBCommon.GameType.SingleReplay;
      GameNetwork.InitializeClientSide((string) null, 0, -1, -1);
      this.Mission.Recorder.RestoreRecordFromFile(this.FileName);
    }

    public override void OnRemoveBehavior()
    {
      if (this._isMultiplayer)
      {
        GameNetwork.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Remove);
        GameNetwork.EndReplay();
      }
      GameNetwork.TerminateClientSide();
      this.Mission.Recorder.ClearRecordBuffers();
      base.OnRemoveBehavior();
    }
  }
}
