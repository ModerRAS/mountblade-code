// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeSpawnFrameBehavior
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeSpawnFrameBehavior : SpawnFrameBehaviorBase
  {
    public const string SpawnZoneTagAffix = "sp_zone_";
    public const string SpawnZoneEnableTagAffix = "enable_";
    public const string SpawnZoneDisableTagAffix = "disable_";
    public const int StartingActiveSpawnZoneIndex = 0;
    private List<GameEntity>[] _spawnPointsByTeam;
    private List<GameEntity>[] _spawnZonesByTeam;
    private int _activeSpawnZoneIndex;

    public override void Initialize()
    {
      base.Initialize();
      this._spawnPointsByTeam = new List<GameEntity>[2];
      this._spawnZonesByTeam = new List<GameEntity>[2];
      this._spawnPointsByTeam[1] = this.SpawnPoints.Where<GameEntity>((Func<GameEntity, bool>) (x => x.HasTag("attacker"))).ToList<GameEntity>();
      this._spawnPointsByTeam[0] = this.SpawnPoints.Where<GameEntity>((Func<GameEntity, bool>) (x => x.HasTag("defender"))).ToList<GameEntity>();
      this._spawnZonesByTeam[1] = this._spawnPointsByTeam[1].Select<GameEntity, GameEntity>((Func<GameEntity, GameEntity>) (sp => sp.Parent)).Distinct<GameEntity>().Where<GameEntity>((Func<GameEntity, bool>) (sz => (NativeObject) sz != (NativeObject) null)).ToList<GameEntity>();
      this._spawnZonesByTeam[0] = this._spawnPointsByTeam[0].Select<GameEntity, GameEntity>((Func<GameEntity, GameEntity>) (sp => sp.Parent)).Distinct<GameEntity>().Where<GameEntity>((Func<GameEntity, bool>) (sz => (NativeObject) sz != (NativeObject) null)).ToList<GameEntity>();
      this._activeSpawnZoneIndex = 0;
    }

    public override MatrixFrame GetSpawnFrame(Team team, bool hasMount, bool isInitialSpawn)
    {
      List<GameEntity> spawnPointsList = new List<GameEntity>();
      GameEntity gameEntity = this._spawnZonesByTeam[(int) team.Side].First<GameEntity>((Func<GameEntity, bool>) (sz => sz.HasTag(string.Format("{0}{1}", (object) "sp_zone_", (object) this._activeSpawnZoneIndex))));
      spawnPointsList.AddRange(gameEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (sp => sp.HasTag("spawnpoint"))));
      return this.GetSpawnFrameFromSpawnPoints((IList<GameEntity>) spawnPointsList, team, hasMount);
    }

    public void OnFlagDeactivated(FlagCapturePoint flag) => ++this._activeSpawnZoneIndex;
  }
}
