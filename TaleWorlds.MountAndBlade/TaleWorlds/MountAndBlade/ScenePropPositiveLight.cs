// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ScenePropPositiveLight
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ScenePropPositiveLight : ScriptComponentBehavior
  {
    public float Flatness_X;
    public float Flatness_Y;
    public float Flatness_Z;
    public float DirectLightRed = 1f;
    public float DirectLightGreen = 1f;
    public float DirectLightBlue = 1f;
    public float DirectLightIntensity = 1f;
    public float AmbientLightRed;
    public float AmbientLightGreen;
    public float AmbientLightBlue = 1f;
    public float AmbientLightIntensity = 1f;

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this.SetMeshParams();
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.SetMeshParams();
    }

    private void SetMeshParams()
    {
      MetaMesh metaMesh = this.GameEntity.GetMetaMesh(0);
      if (!((NativeObject) metaMesh != (NativeObject) null))
        return;
      uint factor1 = this.CalculateFactor(new Vec3(this.DirectLightRed, this.DirectLightGreen, this.DirectLightBlue), this.DirectLightIntensity);
      metaMesh.SetFactor1Linear(factor1);
      uint factor2 = this.CalculateFactor(new Vec3(this.AmbientLightRed, this.AmbientLightGreen, this.AmbientLightBlue), this.AmbientLightIntensity);
      metaMesh.SetFactor2Linear(factor2);
      metaMesh.SetVectorArgument(this.Flatness_X, this.Flatness_Y, this.Flatness_Z, 1f);
    }

    private uint CalculateFactor(Vec3 color, float alpha)
    {
      float b = 10f;
      byte maxValue = byte.MaxValue;
      alpha = MathF.Min(MathF.Max(0.0f, alpha), b);
      return (uint) (((int) (uint) ((double) alpha / (double) b * (double) maxValue) << 24) + ((int) (uint) ((double) color.x * (double) maxValue) << 16) + ((int) (uint) ((double) color.y * (double) maxValue) << 8)) + (uint) ((double) color.z * (double) maxValue);
    }

    protected internal override bool IsOnlyVisual() => true;
  }
}
