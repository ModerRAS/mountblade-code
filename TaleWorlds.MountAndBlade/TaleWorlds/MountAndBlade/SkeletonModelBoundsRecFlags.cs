// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SkeletonModelBoundsRecFlags
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Skeleton_model_bounds_rec_flags", false)]
  public enum SkeletonModelBoundsRecFlags : sbyte
  {
    None = 0,
    UseSmallerRadiusMultWhileHoldingShield = 1,
    Sweep = 2,
    DoNotScaleAccordingToAgentScale = 4,
  }
}
