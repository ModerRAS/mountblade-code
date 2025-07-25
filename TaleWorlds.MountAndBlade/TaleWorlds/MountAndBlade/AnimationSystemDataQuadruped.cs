// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AnimationSystemDataQuadruped
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Animation_system_data_quadruped", false)]
  [Serializable]
  public struct AnimationSystemDataQuadruped
  {
    public Vec3 ReinHandleLeftLocalPosition;
    public Vec3 ReinHandleRightLocalPosition;
    public string ReinSkeleton;
    public string ReinCollisionBody;
    public sbyte IndexOfBoneToDetectGroundSlopeFront;
    public sbyte IndexOfBoneToDetectGroundSlopeBack;
    public AnimationSystemBoneDataQuadruped Bones;
  }
}
