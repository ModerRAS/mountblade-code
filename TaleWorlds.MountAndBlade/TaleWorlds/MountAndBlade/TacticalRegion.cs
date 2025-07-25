// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticalRegion
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticalRegion : MissionObject
  {
    public bool IsEditorDebugRingVisible;
    private WorldPosition _position;
    public float radius = 1f;
    private List<TacticalPosition> _linkedTacticalPositions;
    public TacticalRegion.TacticalRegionTypeEnum tacticalRegionType;

    public WorldPosition Position
    {
      get => this._position;
      set => this._position = value;
    }

    public List<TacticalPosition> LinkedTacticalPositions
    {
      get => this._linkedTacticalPositions;
      set => this._linkedTacticalPositions = value;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._position = new WorldPosition(this.GameEntity.GetScenePointer(), this.GameEntity.GlobalPosition);
    }

    public override void AfterMissionStart()
    {
      base.AfterMissionStart();
      this._linkedTacticalPositions = new List<TacticalPosition>();
      this._linkedTacticalPositions = this.GameEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasScriptOfType<TacticalPosition>())).Select<GameEntity, TacticalPosition>((Func<GameEntity, TacticalPosition>) (c => c.GetFirstScriptOfType<TacticalPosition>())).ToList<TacticalPosition>();
    }

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this._position = new WorldPosition(this.GameEntity.GetScenePointer(), UIntPtr.Zero, this.GameEntity.GlobalPosition, false);
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this._position.SetVec3(UIntPtr.Zero, this.GameEntity.GlobalPosition, false);
      if (!this.IsEditorDebugRingVisible)
        return;
      MBEditor.HelpersEnabled();
    }

    public enum TacticalRegionTypeEnum
    {
      Forest,
      DifficultTerrain,
      Opening,
    }
  }
}
