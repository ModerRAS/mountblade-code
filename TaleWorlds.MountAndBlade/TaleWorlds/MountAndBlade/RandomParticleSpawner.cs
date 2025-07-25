// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.RandomParticleSpawner
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class RandomParticleSpawner : ScriptComponentBehavior
  {
    private float _timeUntilNextParticleSpawn;
    public float spawnInterval = 3f;

    private void InitScript() => this._timeUntilNextParticleSpawn = this.spawnInterval;

    private void CheckSpawnParticle(float dt)
    {
      this._timeUntilNextParticleSpawn -= dt;
      if ((double) this._timeUntilNextParticleSpawn > 0.0)
        return;
      int childCount = this.GameEntity.ChildCount;
      if (childCount > 0)
      {
        GameEntity child = this.GameEntity.GetChild(MBRandom.RandomInt(childCount));
        int componentCount = child.GetComponentCount(GameEntity.ComponentType.ParticleSystemInstanced);
        for (int index = 0; index < componentCount; ++index)
          ((ParticleSystem) child.GetComponentAtIndex(index, GameEntity.ComponentType.ParticleSystemInstanced)).Restart();
      }
      this._timeUntilNextParticleSpawn += this.spawnInterval;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.InitScript();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this.OnInit();
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt) => this.CheckSpawnParticle(dt);

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this.CheckSpawnParticle(dt);
    }

    protected internal override bool MovesEntity() => true;
  }
}
