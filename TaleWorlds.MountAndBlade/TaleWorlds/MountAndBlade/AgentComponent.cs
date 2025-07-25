// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AgentComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class AgentComponent
  {
    protected readonly Agent Agent;

    protected AgentComponent(Agent agent) => this.Agent = agent;

    public virtual void Initialize()
    {
    }

    public virtual void OnTickAsAI(float dt)
    {
    }

    public virtual float GetMoraleAddition() => 0.0f;

    public virtual float GetMoraleDecreaseConstant() => 1f;

    public virtual void OnItemPickup(SpawnedItemEntity item)
    {
    }

    public virtual void OnWeaponDrop(MissionWeapon droppedWeapon)
    {
    }

    public virtual void OnStopUsingGameObject()
    {
    }

    public virtual void OnWeaponHPChanged(ItemObject item, int hitPoints)
    {
    }

    public virtual void OnRetreating()
    {
    }

    public virtual void OnMount(Agent mount)
    {
    }

    public virtual void OnDismount(Agent mount)
    {
    }

    public virtual void OnHit(Agent affectorAgent, int damage, in MissionWeapon affectorWeapon)
    {
    }

    public virtual void OnDisciplineChanged()
    {
    }

    public virtual void OnAgentRemoved()
    {
    }

    public virtual void OnComponentRemoved()
    {
    }
  }
}
