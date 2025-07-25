// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.AreaMarker
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects
{
  public class AreaMarker : MissionObject, ITrackableBase
  {
    public float AreaRadius = 3f;
    public int AreaIndex;
    public bool CheckToggle;

    public virtual string Tag => "area_marker_" + (object) this.AreaIndex;

    protected internal override void OnEditorTick(float dt)
    {
      if (!this.CheckToggle)
        return;
      MBEditor.HelpersEnabled();
    }

    protected internal override void OnEditorInit() => this.CheckToggle = false;

    public bool IsPositionInRange(Vec3 position)
    {
      return (double) position.DistanceSquared(this.GameEntity.GlobalPosition) <= (double) this.AreaRadius * (double) this.AreaRadius;
    }

    public virtual List<UsableMachine> GetUsableMachinesInRange(string excludeTag = null)
    {
      float distanceSquared = this.AreaRadius * this.AreaRadius;
      return Mission.Current.ActiveMissionObjects.FindAllWithType<UsableMachine>().Where<UsableMachine>((Func<UsableMachine, bool>) (x => !x.IsDeactivated && (double) x.GameEntity.GlobalPosition.DistanceSquared(this.GameEntity.GlobalPosition) <= (double) distanceSquared && !x.GameEntity.HasTag(excludeTag))).ToList<UsableMachine>();
    }

    public virtual List<UsableMachine> GetUsableMachinesWithTagInRange(string tag)
    {
      float distanceSquared = this.AreaRadius * this.AreaRadius;
      return Mission.Current.ActiveMissionObjects.FindAllWithType<UsableMachine>().Where<UsableMachine>((Func<UsableMachine, bool>) (x => (double) x.GameEntity.GlobalPosition.DistanceSquared(this.GameEntity.GlobalPosition) <= (double) distanceSquared && x.GameEntity.HasTag(tag))).ToList<UsableMachine>();
    }

    public virtual List<GameEntity> GetGameEntitiesWithTagInRange(string tag)
    {
      float distanceSquared = this.AreaRadius * this.AreaRadius;
      return Mission.Current.Scene.FindEntitiesWithTag(tag).Where<GameEntity>((Func<GameEntity, bool>) (x => (double) x.GlobalPosition.DistanceSquared(this.GameEntity.GlobalPosition) <= (double) distanceSquared && x.HasTag(tag))).ToList<GameEntity>();
    }

    public virtual TextObject GetName() => new TextObject(this.GameEntity.Name);

    public virtual Vec3 GetPosition() => this.GameEntity.GlobalPosition;

    public float GetTrackDistanceToMainAgent()
    {
      return Agent.Main == null ? -1f : this.GetPosition().Distance(Agent.Main.Position);
    }

    public bool CheckTracked(BasicCharacterObject basicCharacter) => false;
  }
}
