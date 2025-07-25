// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StandingPointWithVolumeBox
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StandingPointWithVolumeBox : StandingPointWithWeaponRequirement
  {
    private const float MaxUserAgentDistance = 10f;
    private const float MaxUserAgentElevation = 2f;
    public string VolumeBoxTag = "volumebox";

    public override Agent.AIScriptedFrameFlags DisableScriptedFrameFlags
    {
      get => Agent.AIScriptedFrameFlags.NoAttack;
    }

    public override bool IsDisabledForAgent(Agent agent)
    {
      return base.IsDisabledForAgent(agent) || (double) MathF.Abs(agent.Position.z - this.GameEntity.GlobalPosition.z) > 2.0 || (double) agent.Position.DistanceSquared(this.GameEntity.GlobalPosition) > 100.0;
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      MBEditor.IsEntitySelected(this.GameEntity);
    }
  }
}
