// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StandingPointForRangedArea
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StandingPointForRangedArea : StandingPoint
  {
    public float ThrowingValueMultiplier = 5f;
    public float RangedWeaponValueMultiplier = 2f;

    public override Agent.AIScriptedFrameFlags DisableScriptedFrameFlags
    {
      get => Agent.AIScriptedFrameFlags.NoAttack | Agent.AIScriptedFrameFlags.ConsiderRotation;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.AutoSheathWeapons = false;
      this.LockUserFrames = false;
      this.LockUserPositions = true;
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override bool IsDisabledForAgent(Agent agent)
    {
      EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      if (wieldedItemIndex == EquipmentIndex.None)
        return true;
      WeaponComponentData currentUsageItem = agent.Equipment[wieldedItemIndex].CurrentUsageItem;
      if (currentUsageItem == null || !currentUsageItem.IsRangedWeapon)
        return true;
      return wieldedItemIndex == EquipmentIndex.ExtraWeaponSlot ? (double) this.ThrowingValueMultiplier <= 0.0 || base.IsDisabledForAgent(agent) : (double) this.RangedWeaponValueMultiplier <= 0.0 || base.IsDisabledForAgent(agent);
    }

    public override float GetUsageScoreForAgent(Agent agent)
    {
      EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      float num = 0.0f;
      if (wieldedItemIndex != EquipmentIndex.None && agent.Equipment[wieldedItemIndex].CurrentUsageItem.IsRangedWeapon)
        num = wieldedItemIndex == EquipmentIndex.ExtraWeaponSlot ? this.ThrowingValueMultiplier : this.RangedWeaponValueMultiplier;
      return base.GetUsageScoreForAgent(agent) + num;
    }

    public override bool HasAlternative() => true;

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.HasUser ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.TickParallel2 : base.GetTickRequirement();
    }

    protected internal override void OnTickParallel2(float dt)
    {
      base.OnTickParallel2(dt);
      if (!this.HasUser || !this.IsDisabledForAgent(this.UserAgent))
        return;
      this.UserAgent.StopUsingGameObjectMT(false);
    }
  }
}
