// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Mover
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class Mover : ScriptComponentBehavior
  {
    [EditorVisibleScriptComponentVariable(true)]
    private string _pathname = "";
    [EditorVisibleScriptComponentVariable(true)]
    private float _speed;
    [EditorVisibleScriptComponentVariable(true)]
    private bool _moveGhost;
    private GameEntity _moverGhost;
    private PathTracker _tracker;

    protected internal override void OnEditorTick(float dt)
    {
      if (this.GameEntity.EntityFlags.HasAnyFlag<EntityFlags>(EntityFlags.IsHelper))
        return;
      if ((NativeObject) this._moverGhost == (NativeObject) null && this._pathname != "")
        this.CreateOrUpdateMoverGhost();
      if (this._tracker == null || !this._tracker.IsValid)
        return;
      if (this._moveGhost)
      {
        this._tracker.Advance(this._speed * dt);
        if ((double) this._tracker.TotalDistanceTraveled >= (double) this._tracker.GetPathLength())
          this._tracker.Reset();
      }
      else
        this._tracker.Advance(0.0f);
      MatrixFrame currentFrame = this._tracker.CurrentFrame;
      this._moverGhost.SetFrame(ref currentFrame);
    }

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      switch (variableName)
      {
        case "_pathname":
          this.CreateOrUpdateMoverGhost();
          break;
        case "_moveGhost":
          if (!this._moveGhost)
          {
            this._moverGhost.SetVisibilityExcludeParents(false);
            break;
          }
          this._moverGhost.SetVisibilityExcludeParents(true);
          break;
      }
    }

    private void CreateOrUpdateMoverGhost()
    {
      Path pathWithName = this.GameEntity.Scene.GetPathWithName(this._pathname);
      if (!((NativeObject) pathWithName != (NativeObject) null))
        return;
      this._tracker = new PathTracker(pathWithName, Vec3.One);
      this._tracker.Reset();
      this.GameEntity.SetLocalPosition(this._tracker.CurrentFrame.origin);
      if ((NativeObject) this._moverGhost == (NativeObject) null)
      {
        this._moverGhost = GameEntity.CopyFrom(this.GameEntity.Scene, this.GameEntity);
        this._moverGhost.EntityFlags |= EntityFlags.IsHelper | EntityFlags.DontSaveToScene | EntityFlags.DoNotTick;
        this._moverGhost.SetAlpha(0.2f);
      }
      else
        this._moverGhost.SetLocalPosition(this._tracker.CurrentFrame.origin);
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      Path pathWithName = this.GameEntity.Scene.GetPathWithName(this._pathname);
      if ((NativeObject) pathWithName != (NativeObject) null)
      {
        this._tracker = new PathTracker(pathWithName, Vec3.One);
        this._tracker.Reset();
        this.GameEntity.SetLocalPosition(this._tracker.CurrentFrame.origin);
      }
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.GameEntity.IsVisibleIncludeParents() ? ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement() : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      if (Mission.Current.Mode != MissionMode.Battle || this._tracker == null || !this._tracker.IsValid || (double) this._tracker.TotalDistanceTraveled >= (double) this._tracker.GetPathLength())
        return;
      this._tracker.Advance(this._speed * dt);
      MatrixFrame currentFrame = this._tracker.CurrentFrame;
      this.GameEntity.SetFrame(ref currentFrame);
    }
  }
}
