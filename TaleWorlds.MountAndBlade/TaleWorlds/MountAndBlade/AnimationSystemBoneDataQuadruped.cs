// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AnimationSystemBoneDataQuadruped
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Runtime.InteropServices;
using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Animation_system_bone_data_quadruped", false)]
  [Serializable]
  public struct AnimationSystemBoneDataQuadruped
  {
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 7)]
    public sbyte[] BoneIndicesToModifyOnSlopingGround;
    public sbyte BoneIndicesToModifyOnSlopingGroundCount;
    public sbyte BodyRotationReferenceBoneIndex;
    public sbyte RiderSitBoneIndex;
    public sbyte ReinHandleBoneIndex;
    [CustomEngineStructMemberData("rein_collision_1_bone_index")]
    public sbyte ReinCollision1BoneIndex;
    [CustomEngineStructMemberData("rein_collision_2_bone_index")]
    public sbyte ReinCollision2BoneIndex;
    public sbyte ReinHeadBoneIndex;
    public sbyte ReinHeadRightAttachmentBoneIndex;
    public sbyte ReinHeadLeftAttachmentBoneIndex;
    public sbyte ReinRightHandBoneIndex;
    public sbyte ReinLeftHandBoneIndex;
  }
}
