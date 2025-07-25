// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.VictoryComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class VictoryComponent : AgentComponent
  {
    private readonly RandomTimer _timer;

    public VictoryComponent(Agent agent, RandomTimer timer)
      : base(agent)
    {
      this._timer = timer;
    }

    public bool CheckTimer() => this._timer.Check(Mission.Current.CurrentTime);

    public void ChangeTimerDuration(float min, float max) => this._timer.ChangeDuration(min, max);
  }
}
