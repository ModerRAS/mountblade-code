// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BasicLeaveMissionLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BasicLeaveMissionLogic : MissionLogic
  {
    private readonly bool _askBeforeLeave;
    private readonly int _minRetreatDistance;

    public BasicLeaveMissionLogic()
      : this(false)
    {
    }

    public BasicLeaveMissionLogic(bool askBeforeLeave)
      : this(askBeforeLeave, 5)
    {
    }

    public BasicLeaveMissionLogic(bool askBeforeLeave, int minRetreatDistance)
    {
      this._askBeforeLeave = askBeforeLeave;
      this._minRetreatDistance = minRetreatDistance;
    }

    public override bool MissionEnded(ref MissionResult missionResult)
    {
      return this.Mission.MainAgent != null && !this.Mission.MainAgent.IsActive();
    }

    public override InquiryData OnEndMissionRequest(out bool canPlayerLeave)
    {
      canPlayerLeave = true;
      if (this.Mission.MainAgent != null && this.Mission.MainAgent.IsActive() && (double) this._minRetreatDistance > 0.0 && this.Mission.IsPlayerCloseToAnEnemy((float) this._minRetreatDistance))
      {
        canPlayerLeave = false;
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_can_not_retreat"));
      }
      else if (this._askBeforeLeave)
        return new InquiryData("", GameTexts.FindText("str_give_up_fight").ToString(), true, true, GameTexts.FindText("str_ok").ToString(), GameTexts.FindText("str_cancel").ToString(), new Action(this.Mission.OnEndMissionResult), (Action) null);
      return (InquiryData) null;
    }
  }
}
