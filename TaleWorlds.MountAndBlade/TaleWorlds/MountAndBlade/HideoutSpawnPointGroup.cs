// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.HideoutSpawnPointGroup
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class HideoutSpawnPointGroup : SynchedMissionObject
  {
    private const int NumberOfDefaultFormations = 4;
    public BattleSideEnum Side;
    public int PhaseNumber;
    private GameEntity[] _spawnPoints;

    protected internal override void OnInit()
    {
      base.OnInit();
      this._spawnPoints = new GameEntity[4];
      string spawnPointTagAffix = this.Side.ToString().ToLower() + "_";
      string[] strArray = new string[4];
      for (int index = 0; index < strArray.Length; ++index)
        strArray[index] = spawnPointTagAffix + ((FormationClass) index).GetName().ToLower();
      foreach (GameEntity gameEntity in this.GameEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (ce => ((IEnumerable<string>) ce.Tags).Any<string>((Func<string, bool>) (t => t.StartsWith(spawnPointTagAffix))))))
      {
        for (int index = 0; index < strArray.Length; ++index)
        {
          if (gameEntity.HasTag(strArray[index]))
          {
            this._spawnPoints[index] = gameEntity;
            break;
          }
        }
      }
    }

    public MatrixFrame[] GetSpawnPointFrames()
    {
      MatrixFrame[] spawnPointFrames = new MatrixFrame[this._spawnPoints.Length];
      for (int index = 0; index < this._spawnPoints.Length; ++index)
        spawnPointFrames[index] = (NativeObject) this._spawnPoints[index] != (NativeObject) null ? this._spawnPoints[index].GetGlobalFrame() : MatrixFrame.Identity;
      return spawnPointFrames;
    }

    public void RemoveWithAllChildren()
    {
      this.GameEntity.RemoveAllChildren();
      this.GameEntity.Remove(83);
    }
  }
}
