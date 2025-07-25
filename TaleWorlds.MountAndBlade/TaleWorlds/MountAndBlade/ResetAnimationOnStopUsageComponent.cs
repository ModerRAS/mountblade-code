// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ResetAnimationOnStopUsageComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ResetAnimationOnStopUsageComponent : UsableMissionObjectComponent
  {
    private readonly ActionIndexCache _successfulResetAction = ActionIndexCache.act_none;

    public ResetAnimationOnStopUsageComponent(ActionIndexCache successfulResetActionCode)
    {
      this._successfulResetAction = successfulResetActionCode;
    }

    protected internal override void OnUseStopped(Agent userAgent, bool isSuccessful = true)
    {
      ActionIndexCache actionIndexCache = isSuccessful ? this._successfulResetAction : ActionIndexCache.act_none;
      if (actionIndexCache == ActionIndexCache.act_none)
        userAgent.SetActionChannel(1, actionIndexCache, additionalFlags: 72UL);
      userAgent.SetActionChannel(0, actionIndexCache, additionalFlags: 72UL);
    }
  }
}
