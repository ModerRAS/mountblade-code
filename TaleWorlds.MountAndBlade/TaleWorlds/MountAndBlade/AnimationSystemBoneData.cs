// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AnimationSystemBoneData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Runtime.InteropServices;
using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Animation_system_bone_data", false)]
  [Serializable]
  public struct AnimationSystemBoneData
  {
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 11)]
    public sbyte[] IndicesOfRagdollBonesToCheckForCorpses;
    public sbyte CountOfRagdollBonesToCheckForCorpses;
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
    public sbyte[] RagdollFallSoundBoneIndices;
    public sbyte RagdollFallSoundBoneIndexCount;
    public sbyte HeadLookDirectionBoneIndex;
    public sbyte SpineLowerBoneIndex;
    public sbyte SpineUpperBoneIndex;
    public sbyte ThoraxLookDirectionBoneIndex;
    public sbyte NeckRootBoneIndex;
    public sbyte PelvisBoneIndex;
    public sbyte RightUpperArmBoneIndex;
    public sbyte LeftUpperArmBoneIndex;
    public sbyte FallBlowDamageBoneIndex;
    [CustomEngineStructMemberData("terrain_decal_bone_0_index")]
    public sbyte TerrainDecalBone0Index;
    [CustomEngineStructMemberData("terrain_decal_bone_1_index")]
    public sbyte TerrainDecalBone1Index;
  }
}
