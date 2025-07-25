// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.Handlers.BasicMissionHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions.Handlers
{
  public class BasicMissionHandler : MissionLogic
  {
    private bool _isSurrender;

    public bool IsWarningWidgetOpened { get; private set; }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.IsWarningWidgetOpened = false;
    }

    public void CreateWarningWidgetForResult(BattleEndLogic.ExitResult result)
    {
      if (!GameNetwork.IsClient)
        MBCommon.PauseGameEngine();
      this._isSurrender = result == BattleEndLogic.ExitResult.SurrenderSiege;
      InformationManager.ShowInquiry(this._isSurrender ? this.GetSurrenderPopupData() : this.GetRetreatPopUpData(), true);
      this.IsWarningWidgetOpened = true;
    }

    private void CloseSelectionWidget()
    {
      if (!this.IsWarningWidgetOpened)
        return;
      this.IsWarningWidgetOpened = false;
      if (GameNetwork.IsClient)
        return;
      MBCommon.UnPauseGameEngine();
    }

    private void OnEventCancelSelectionWidget() => this.CloseSelectionWidget();

    private void OnEventAcceptSelectionWidget()
    {
      foreach (MissionLogic missionLogic in this.Mission.MissionLogics.ToArray())
        missionLogic.OnBattleEnded();
      this.CloseSelectionWidget();
      if (this._isSurrender)
        this.Mission.SurrenderMission();
      else
        this.Mission.RetreatMission();
    }

    private InquiryData GetRetreatPopUpData()
    {
      return new InquiryData("", GameTexts.FindText("str_retreat_question").ToString(), true, true, GameTexts.FindText("str_ok").ToString(), GameTexts.FindText("str_cancel").ToString(), new Action(this.OnEventAcceptSelectionWidget), new Action(this.OnEventCancelSelectionWidget));
    }

    private InquiryData GetSurrenderPopupData()
    {
      return new InquiryData(GameTexts.FindText("str_surrender").ToString(), GameTexts.FindText("str_surrender_question").ToString(), true, true, GameTexts.FindText("str_ok").ToString(), GameTexts.FindText("str_cancel").ToString(), new Action(this.OnEventAcceptSelectionWidget), new Action(this.OnEventCancelSelectionWidget));
    }
  }
}
