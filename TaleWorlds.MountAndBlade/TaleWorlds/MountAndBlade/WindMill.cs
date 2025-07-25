// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WindMill
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class WindMill : ScriptComponentBehavior
  {
    public float rotationSpeed = 100f;
    public float waterSplashPhaseOffset;
    public float waterSplashIntervalMultiplier = 1f;
    public MetaMesh testMesh;
    public Texture testTexture;
    public GameEntity testEntity;
    public bool isWaterMill;
    private float currentRotation;

    protected internal override void OnInit()
    {
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    private void Rotate(float dt)
    {
      GameEntity gameEntity = this.GameEntity;
      float a = this.rotationSpeed * (1f / 1000f) * dt;
      MatrixFrame frame = gameEntity.GetFrame();
      frame.rotation.RotateAboutForward(a);
      gameEntity.SetFrame(ref frame);
      this.currentRotation += a;
    }

    private static bool IsRotationPhaseInsidePhaseBoundaries(
      float currentPhase,
      float startPhase,
      float endPhase)
    {
      if ((double) endPhase <= (double) startPhase)
        return (double) currentPhase > (double) startPhase;
      return (double) currentPhase > (double) startPhase && (double) currentPhase < (double) endPhase;
    }

    public static int GetIntegerFromStringEnd(string str)
    {
      string str1 = "";
      for (int index = str.Length - 1; index > -1; --index)
      {
        char ch = str[index];
        switch (ch)
        {
          case '0':
          case '1':
          case '2':
          case '3':
          case '4':
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
            str1 = ch.ToString() + str1;
            continue;
          default:
            goto label_4;
        }
      }
label_4:
      return Convert.ToInt32(str1);
    }

    private void DoWaterMillCalculation()
    {
      float childCount = (float) this.GameEntity.ChildCount;
      if ((double) childCount <= 0.0)
        return;
      IEnumerable<GameEntity> children = this.GameEntity.GetChildren();
      float num1 = 6.28f / childCount;
      foreach (GameEntity gameEntity in children)
      {
        int integerFromStringEnd = WindMill.GetIntegerFromStringEnd(gameEntity.Name);
        double currentPhase = (double) this.currentRotation % 6.28000020980835;
        float num2 = (float) (((double) num1 * (double) integerFromStringEnd + (double) this.waterSplashPhaseOffset) % 6.28000020980835);
        float num3 = (float) (((double) num2 + (double) num1 * (double) this.waterSplashIntervalMultiplier) % 6.28000020980835);
        double startPhase = (double) num2;
        double endPhase = (double) num3;
        if (WindMill.IsRotationPhaseInsidePhaseBoundaries((float) currentPhase, (float) startPhase, (float) endPhase))
          gameEntity.ResumeParticleSystem(true);
        else
          gameEntity.PauseParticleSystem(true);
      }
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.TickParallel;
    }

    protected internal override void OnTickParallel(float dt)
    {
      this.Rotate(dt);
      if (!this.isWaterMill)
        return;
      this.DoWaterMillCalculation();
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this.Rotate(dt);
      if (!this.isWaterMill)
        return;
      this.DoWaterMillCalculation();
    }

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      switch (variableName)
      {
        case "testMesh":
          if (!((NativeObject) this.testMesh != (NativeObject) null))
            break;
          this.GameEntity.AddMultiMesh(this.testMesh);
          break;
        case "testTexture":
          if (!((NativeObject) this.testTexture != (NativeObject) null))
            break;
          Material copy = this.GameEntity.GetFirstMesh().GetMaterial().CreateCopy();
          copy.SetTexture(Material.MBTextureType.DiffuseMap, this.testTexture);
          this.GameEntity.SetMaterialForAllMeshes(copy);
          break;
        case "testEntity":
          int num = (NativeObject) this.testEntity != (NativeObject) null ? 1 : 0;
          break;
        case "testButton":
          this.rotationSpeed *= 2f;
          break;
      }
    }
  }
}
