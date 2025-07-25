// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.Siege.MultiplayerFireBallistaSpawner
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects.Siege
{
  public class MultiplayerFireBallistaSpawner : BallistaSpawner
  {
    protected internal override void OnPreInit()
    {
      this._spawnerMissionHelperFire = new SpawnerEntityMissionHelper((SpawnerBase) this, true);
    }
  }
}
