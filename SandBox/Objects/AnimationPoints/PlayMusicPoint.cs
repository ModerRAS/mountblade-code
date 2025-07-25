// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.AnimationPoints.PlayMusicPoint
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.AnimationPoints
{
  public class PlayMusicPoint : AnimationPoint
  {
    private InstrumentData _instrumentData;
    private SoundEvent _trackEvent;
    private bool _hasInstrumentAttached;

    protected override void OnInit()
    {
      base.OnInit();
      this.KeepOldVisibility = true;
      this.IsDisabledForPlayers = true;
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void StartLoop(SoundEvent trackEvent)
    {
      this._trackEvent = trackEvent;
      if (!this.HasUser || !MBActionSet.CheckActionAnimationClipExists(this.UserAgent.ActionSet, this.LoopStartActionCode))
        return;
      this.UserAgent.SetActionChannel(0, this.LoopStartActionCode, true);
    }

    public void EndLoop()
    {
      if (this._trackEvent == null)
        return;
      this._trackEvent = (SoundEvent) null;
      this.ChangeInstrument((Tuple<InstrumentData, float>) null);
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.HasUser ? ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement() : base.GetTickRequirement();
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (this._trackEvent == null || !this.HasUser || !MBActionSet.CheckActionAnimationClipExists(this.UserAgent.ActionSet, this.LoopStartActionCode))
        return;
      this.UserAgent.SetActionChannel(0, this.LoopStartActionCode, this._hasInstrumentAttached);
    }

    public override void OnUseStopped(Agent userAgent, bool isSuccessful, int preferenceIndex)
    {
      base.OnUseStopped(userAgent, isSuccessful, preferenceIndex);
      this.DefaultActionCode = ActionIndexCache.act_none;
      this.EndLoop();
    }

    public void ChangeInstrument(Tuple<InstrumentData, float> instrument)
    {
      InstrumentData instrumentData = instrument?.Item1;
      if (this._instrumentData == instrumentData)
        return;
      this._instrumentData = instrumentData;
      if (!this.HasUser || !this.UserAgent.IsActive())
        return;
      if (this.UserAgent.IsSitting())
        this.LoopStartAction = instrumentData == null ? "act_sit_1" : instrumentData.SittingAction;
      else
        this.LoopStartAction = instrumentData == null ? "act_stand_1" : instrumentData.StandingAction;
      this.ActionSpeed = instrument != null ? instrument.Item2 : 1f;
      this.SetActionCodes();
      this.ClearAssignedItems();
      this.UserAgent.SetActionChannel(0, this.LoopStartActionCode, additionalFlags: (ulong) this.UserAgent.GetCurrentActionPriority(0));
      if (this._instrumentData == null)
        return;
      foreach ((HumanBone, string) instrumentEntity in (List<(HumanBone, string)>) this._instrumentData.InstrumentEntities)
        this.AssignItemToBone(new AnimationPoint.ItemForBone(instrumentEntity.Item1, instrumentEntity.Item2, true));
      this.AddItemsToAgent();
      this._hasInstrumentAttached = !this._instrumentData.IsDataWithoutInstrument;
    }
  }
}
