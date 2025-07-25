// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.Siege.MultiplayerBatteringRamSpawner
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects.Siege
{
  public class MultiplayerBatteringRamSpawner : BatteringRamSpawner
  {
    private const float MaxHitPoint = 12000f;
    private const float SpeedMultiplier = 1f;

    public override void AssignParameters(SpawnerEntityMissionHelper _spawnerMissionHelper)
    {
      base.AssignParameters(_spawnerMissionHelper);
      _spawnerMissionHelper.SpawnedEntity.GetFirstScriptOfType<DestructableComponent>().MaxHitPoint = 12000f;
      BatteringRam firstScriptOfType = _spawnerMissionHelper.SpawnedEntity.GetFirstScriptOfType<BatteringRam>();
      firstScriptOfType.MaxSpeed *= 1f;
      firstScriptOfType.MinSpeed *= 1f;
    }
  }
}
