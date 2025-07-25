// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Bird
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class Bird : MissionObject
  {
    private const float Speed = 14400f;
    private const string IdleAnimation = "anim_bird_idle";
    private const string LandingAnimation = "anim_bird_landing";
    private const string TakingOffAnimation = "anim_bird_flying";
    private const string FlyCycleAnimation = "anim_bird_cycle";
    public bool CanFly;
    private float _kmPerHour;
    private Bird.State _state;
    private BasicMissionTimer _timer;
    private bool _canLand = true;

    private Bird.State GetState()
    {
      return this.CanFly && !this._canLand ? Bird.State.Airborne : Bird.State.Perched;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.GameEntity.SetAnimationSoundActivation(true);
      this.GameEntity.Skeleton.SetAnimationAtChannel("anim_bird_idle", 0);
      this.GameEntity.Skeleton.SetAnimationParameterAtChannel(0, MBRandom.RandomFloat * 0.5f);
      this._kmPerHour = 4f;
      this._state = this.GetState();
      if (this._timer == null)
        this._timer = new BasicMissionTimer();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this.GameEntity.Skeleton.SetAnimationAtChannel("anim_bird_idle", 0);
      this.GameEntity.Skeleton.SetAnimationParameterAtChannel(0, 0.0f);
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      switch (this._state)
      {
        case Bird.State.TakingOff:
          this.ApplyDisplacement(dt);
          if ((double) this.GameEntity.Skeleton.GetAnimationParameterAtChannel(0) <= 0.99000000953674316)
            break;
          this.GameEntity.Skeleton.SetAnimationAtChannel("anim_bird_cycle", 0);
          this._timer.Reset();
          this.SetDisplacement();
          this._state = Bird.State.Airborne;
          break;
        case Bird.State.Airborne:
          if ((double) this._timer.ElapsedTime > 5.0)
          {
            if (this._canLand)
            {
              this.GameEntity.Skeleton.SetAnimationAtChannel("anim_bird_landing", 0);
              this._timer.Reset();
              this._state = Bird.State.Landing;
              this.SetDisplacement();
              break;
            }
            this.GameEntity.SetVisibilityExcludeParents(false);
            break;
          }
          this.ApplyDisplacement(dt);
          break;
        case Bird.State.Landing:
          this.ApplyDisplacement(dt);
          if ((double) this.GameEntity.Skeleton.GetAnimationParameterAtChannel(0) <= 0.99000000953674316)
            break;
          this.GameEntity.Skeleton.SetAnimationAtChannel("anim_bird_idle", 0);
          this._timer.Reset();
          this._state = Bird.State.Perched;
          break;
        case Bird.State.Perched:
          if (!this.CanFly || (double) this._timer.ElapsedTime <= 5.0 + (double) MBRandom.RandomFloat * 13.0 || (double) this.GameEntity.Skeleton.GetAnimationParameterAtChannel(0) <= 0.99000000953674316)
            break;
          this.GameEntity.Skeleton.SetAnimationAtChannel("anim_bird_flying", 0);
          this._timer.Reset();
          this._state = Bird.State.TakingOff;
          break;
      }
    }

    private void ApplyDisplacement(float dt)
    {
      float num1 = this._kmPerHour * dt;
      MatrixFrame frame = this.GameEntity.GetGlobalFrame();
      MatrixFrame matrixFrame = frame;
      Vec3 f = frame.rotation.f;
      Vec3 u = frame.rotation.u;
      double num2 = (double) f.Normalize();
      double num3 = (double) u.Normalize();
      if (this._state == Bird.State.TakingOff)
        matrixFrame.origin = matrixFrame.origin - f * 0.307692319f + u * 0.1f;
      else if (this._state == Bird.State.Airborne)
      {
        frame.origin -= f * num1;
        matrixFrame.origin -= f * num1;
      }
      else if (this._state == Bird.State.Landing)
        matrixFrame.origin = matrixFrame.origin - f * 0.307692319f - u * 0.1f;
      this.GameEntity.SetGlobalFrame(in frame);
    }

    private void SetDisplacement()
    {
      MatrixFrame frame = this.GameEntity.GetGlobalFrame();
      Vec3 f = frame.rotation.f;
      Vec3 u = frame.rotation.u;
      double num1 = (double) f.Normalize();
      double num2 = (double) u.Normalize();
      if (this._state == Bird.State.TakingOff)
        frame.origin -= f * 20f - u * 6.5f;
      else if (this._state == Bird.State.Landing)
        frame.origin -= f * 20f + u * 6.5f;
      this.GameEntity.SetGlobalFrame(in frame);
    }

    private enum State
    {
      TakingOff,
      Airborne,
      Landing,
      Perched,
    }
  }
}
