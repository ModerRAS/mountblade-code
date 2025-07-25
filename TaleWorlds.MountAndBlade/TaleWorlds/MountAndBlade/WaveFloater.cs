// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WaveFloater
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class WaveFloater : ScriptComponentBehavior
  {
    public SimpleButton largeObject;
    public SimpleButton smallObject;
    public bool oscillateAtX;
    public bool oscillateAtY;
    public bool oscillateAtZ;
    public float oscillationFrequency = 1f;
    public float maxOscillationAngle = 10f;
    public bool bounceX;
    public float bounceXFrequency = 14f;
    public float maxBounceXDistance = 0.3f;
    public bool bounceY;
    public float bounceYFrequency = 14f;
    public float maxBounceYDistance = 0.3f;
    public bool bounceZ;
    public float bounceZFrequency = 14f;
    public float maxBounceZDistance = 0.3f;
    private Vec3 axis;
    private float oscillationSpeed = 1f;
    private float oscillationPercentage = 0.5f;
    private MatrixFrame resetMF;
    private MatrixFrame oscillationStart;
    private MatrixFrame oscillationEnd;
    private bool oscillate;
    private float bounceXSpeed = 1f;
    private float bounceXPercentage = 0.5f;
    private MatrixFrame bounceXStart;
    private MatrixFrame bounceXEnd;
    private float bounceYSpeed = 1f;
    private float bounceYPercentage = 0.5f;
    private MatrixFrame bounceYStart;
    private MatrixFrame bounceYEnd;
    private float bounceZSpeed = 1f;
    private float bounceZPercentage = 0.5f;
    private MatrixFrame bounceZStart;
    private MatrixFrame bounceZEnd;
    private bool bounce;
    private float et;
    private const float SPEED_MODIFIER = 1f;

    private float ConvertToRadians(float angle) => (float) Math.PI / 180f * angle;

    private void SetMatrix() => this.resetMF = this.GameEntity.GetGlobalFrame();

    private void ResetMatrix() => this.GameEntity.SetGlobalFrame(in this.resetMF);

    private void CalculateAxis()
    {
      this.axis = new Vec3(Convert.ToSingle(this.oscillateAtX), Convert.ToSingle(this.oscillateAtY), Convert.ToSingle(this.oscillateAtZ));
      this.GameEntity.GetGlobalFrame().TransformToParent(this.axis);
      double num = (double) this.axis.Normalize();
    }

    private float CalculateSpeed(float fq, float maxVal, bool angular)
    {
      return !angular ? (float) ((double) maxVal * 2.0 * (double) fq * 1.0) : (float) ((double) maxVal * 3.1415927410125732 / 90.0 * (double) fq * 1.0);
    }

    private void CalculateOscilations()
    {
      this.ResetMatrix();
      this.oscillationStart = this.GameEntity.GetGlobalFrame();
      this.oscillationEnd = this.GameEntity.GetGlobalFrame();
      this.oscillationStart.rotation.RotateAboutAnArbitraryVector(this.axis, -this.ConvertToRadians(this.maxOscillationAngle));
      this.oscillationEnd.rotation.RotateAboutAnArbitraryVector(this.axis, this.ConvertToRadians(this.maxOscillationAngle));
    }

    private void Oscillate()
    {
      MatrixFrame frame = this.GameEntity.GetGlobalFrame() with
      {
        rotation = Mat3.Lerp(this.oscillationStart.rotation, this.oscillationEnd.rotation, MathF.Clamp(this.oscillationPercentage, 0.0f, 1f))
      };
      this.GameEntity.SetGlobalFrame(in frame);
      this.oscillationPercentage = (float) ((1.0 + (double) MathF.Cos(this.oscillationSpeed * 1f * this.et)) / 2.0);
    }

    private void CalculateBounces()
    {
      this.ResetMatrix();
      this.bounceXStart = this.GameEntity.GetGlobalFrame();
      this.bounceXEnd = this.GameEntity.GetGlobalFrame();
      this.bounceYStart = this.GameEntity.GetGlobalFrame();
      this.bounceYEnd = this.GameEntity.GetGlobalFrame();
      this.bounceZStart = this.GameEntity.GetGlobalFrame();
      this.bounceZEnd = this.GameEntity.GetGlobalFrame();
      this.bounceXStart.origin.x += this.maxBounceXDistance;
      this.bounceXEnd.origin.x -= this.maxBounceXDistance;
      this.bounceYStart.origin.y += this.maxBounceYDistance;
      this.bounceYEnd.origin.y -= this.maxBounceYDistance;
      this.bounceZStart.origin.z += this.maxBounceZDistance;
      this.bounceZEnd.origin.z -= this.maxBounceZDistance;
    }

    private void Bounce()
    {
      MatrixFrame frame;
      if (this.bounceX)
      {
        frame = this.GameEntity.GetGlobalFrame();
        frame.origin.x = Vec3.Lerp(this.bounceXStart.origin, this.bounceXEnd.origin, MathF.Clamp(this.bounceXPercentage, 0.0f, 1f)).x;
        this.GameEntity.SetGlobalFrame(in frame);
        this.bounceXPercentage = (float) ((1.0 + (double) MathF.Sin(this.bounceXSpeed * 1f * this.et)) / 2.0);
      }
      if (this.bounceY)
      {
        frame = this.GameEntity.GetGlobalFrame();
        frame.origin.y = Vec3.Lerp(this.bounceYStart.origin, this.bounceYEnd.origin, MathF.Clamp(this.bounceYPercentage, 0.0f, 1f)).y;
        this.GameEntity.SetGlobalFrame(in frame);
        this.bounceYPercentage = (float) ((1.0 + (double) MathF.Cos(this.bounceYSpeed * 1f * this.et)) / 2.0);
      }
      if (!this.bounceZ)
        return;
      frame = this.GameEntity.GetGlobalFrame();
      frame.origin.z = Vec3.Lerp(this.bounceZStart.origin, this.bounceZEnd.origin, MathF.Clamp(this.bounceZPercentage, 0.0f, 1f)).z;
      this.GameEntity.SetGlobalFrame(in frame);
      this.bounceZPercentage = (float) ((1.0 + (double) MathF.Cos(this.bounceZSpeed * 1f * this.et)) / 2.0);
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.SetMatrix();
      this.oscillate = this.oscillateAtX || this.oscillateAtY || this.oscillateAtZ;
      this.bounce = this.bounceX || this.bounceY || this.bounceZ;
      this.oscillationSpeed = this.CalculateSpeed(this.oscillationFrequency, this.maxOscillationAngle, true);
      this.bounceXSpeed = this.CalculateSpeed(this.bounceXFrequency, this.maxBounceXDistance, false);
      this.bounceYSpeed = this.CalculateSpeed(this.bounceYFrequency, this.maxBounceYDistance, false);
      this.bounceZSpeed = this.CalculateSpeed(this.bounceZFrequency, this.maxBounceZDistance, false);
      this.CalculateBounces();
      this.CalculateAxis();
      this.CalculateOscilations();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this.SetMatrix();
      this.oscillate = this.oscillateAtX || this.oscillateAtY || this.oscillateAtZ;
      this.bounce = this.bounceX || this.bounceY || this.bounceZ;
      this.oscillationSpeed = this.CalculateSpeed(this.oscillationFrequency, this.maxOscillationAngle, true);
      this.bounceXSpeed = this.CalculateSpeed(this.bounceXFrequency, this.maxBounceXDistance, false);
      this.bounceYSpeed = this.CalculateSpeed(this.bounceYFrequency, this.maxBounceYDistance, false);
      this.bounceZSpeed = this.CalculateSpeed(this.bounceZFrequency, this.maxBounceZDistance, false);
      this.CalculateBounces();
      this.CalculateAxis();
      this.CalculateOscilations();
    }

    protected internal override void OnSceneSave(string saveFolder)
    {
      base.OnSceneSave(saveFolder);
      this.ResetMatrix();
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this.et += dt;
      if (this.oscillate)
        this.Oscillate();
      if (!this.bounce)
        return;
      this.Bounce();
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      this.et += dt;
      if (this.oscillate)
        this.Oscillate();
      if (!this.bounce)
        return;
      this.Bounce();
    }

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      switch (variableName)
      {
        case "largeObject":
          this.ResetMatrix();
          this.oscillateAtX = true;
          this.oscillateAtY = true;
          this.oscillationFrequency = 1.5f;
          this.maxOscillationAngle = 7.4f;
          this.bounceX = true;
          this.bounceXFrequency = 2f;
          this.maxBounceXDistance = 0.1f;
          this.bounceY = true;
          this.bounceYFrequency = 0.2f;
          this.maxBounceYDistance = 0.5f;
          this.bounceZ = true;
          this.bounceZFrequency = 0.6f;
          this.maxBounceZDistance = 0.22f;
          this.CalculateAxis();
          this.oscillationSpeed = this.CalculateSpeed(this.oscillationFrequency, this.maxOscillationAngle, true);
          this.bounceXSpeed = this.CalculateSpeed(this.bounceXFrequency, this.maxBounceXDistance, false);
          this.bounceYSpeed = this.CalculateSpeed(this.bounceYFrequency, this.maxBounceYDistance, false);
          this.bounceZSpeed = this.CalculateSpeed(this.bounceZFrequency, this.maxBounceZDistance, false);
          this.CalculateOscilations();
          this.CalculateOscilations();
          this.oscillate = true;
          this.bounce = true;
          break;
        case "smallObject":
          this.ResetMatrix();
          this.oscillateAtX = true;
          this.oscillateAtY = true;
          this.oscillateAtZ = true;
          this.oscillationFrequency = 1f;
          this.maxOscillationAngle = 11f;
          this.bounceX = true;
          this.bounceXFrequency = 1.5f;
          this.maxBounceXDistance = 0.3f;
          this.bounceY = true;
          this.bounceYFrequency = 1.5f;
          this.maxBounceYDistance = 0.2f;
          this.bounceZ = true;
          this.bounceZFrequency = 1f;
          this.maxBounceZDistance = 0.1f;
          this.CalculateAxis();
          this.oscillationSpeed = this.CalculateSpeed(this.oscillationFrequency, this.maxOscillationAngle, true);
          this.bounceXSpeed = this.CalculateSpeed(this.bounceXFrequency, this.maxBounceXDistance, false);
          this.bounceYSpeed = this.CalculateSpeed(this.bounceYFrequency, this.maxBounceYDistance, false);
          this.bounceZSpeed = this.CalculateSpeed(this.bounceZFrequency, this.maxBounceZDistance, false);
          this.CalculateOscilations();
          this.CalculateOscilations();
          this.oscillate = true;
          this.bounce = true;
          break;
        case "oscillateAtX":
        case "oscillateAtY":
        case "oscillateAtZ":
          if (this.oscillateAtX || this.oscillateAtY || this.oscillateAtZ)
          {
            if (!this.oscillate)
            {
              if (!this.bounce)
                this.SetMatrix();
              this.oscillate = true;
            }
          }
          else
          {
            this.oscillate = false;
            if (!this.bounce)
              this.ResetMatrix();
          }
          this.CalculateAxis();
          this.CalculateOscilations();
          break;
        case "oscillationFrequency":
          this.oscillationSpeed = this.CalculateSpeed(this.oscillationFrequency, this.maxOscillationAngle, true);
          break;
        case "maxOscillationAngle":
          this.maxOscillationAngle = MathF.Clamp(this.maxOscillationAngle, 0.0f, 90f);
          this.oscillationSpeed = this.CalculateSpeed(this.oscillationFrequency, this.maxOscillationAngle, true);
          this.CalculateOscilations();
          break;
        case "bounceX":
        case "bounceY":
        case "bounceZ":
          if (this.bounceX || this.bounceY || this.bounceZ)
          {
            if (!this.bounce)
            {
              if (!this.oscillate)
                this.SetMatrix();
              this.bounce = true;
            }
          }
          else
          {
            this.bounce = false;
            if (!this.oscillate)
              this.ResetMatrix();
          }
          this.CalculateBounces();
          break;
        case "bounceXFrequency":
          this.bounceXSpeed = this.CalculateSpeed(this.bounceXFrequency, this.maxBounceXDistance, false);
          break;
        case "bounceYFrequency":
          this.bounceYSpeed = this.CalculateSpeed(this.bounceYFrequency, this.maxBounceYDistance, false);
          break;
        case "bounceZFrequency":
          this.bounceZSpeed = this.CalculateSpeed(this.bounceZFrequency, this.maxBounceZDistance, false);
          break;
        case "maxBounceXDistance":
          this.bounceXSpeed = this.CalculateSpeed(this.bounceXFrequency, this.maxBounceXDistance, false);
          this.CalculateBounces();
          break;
        case "maxBounceYDistance":
          this.bounceYSpeed = this.CalculateSpeed(this.bounceYFrequency, this.maxBounceYDistance, false);
          this.CalculateBounces();
          break;
        case "maxBounceZDistance":
          this.bounceZSpeed = this.CalculateSpeed(this.bounceZFrequency, this.maxBounceZDistance, false);
          this.CalculateBounces();
          break;
      }
    }
  }
}
