// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AnimationSystemBoneDataBiped
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Runtime.InteropServices;
using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Animation_system_bone_data_biped", false)]
  [Serializable]
  public struct AnimationSystemBoneDataBiped
  {
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
    public sbyte[] RagdollStationaryCheckBoneIndices;
    public sbyte RagdollStationaryCheckBoneCount;
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 7)]
    public sbyte[] MoveAdderBoneIndices;
    public sbyte MoveAdderBoneCount;
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 6)]
    public sbyte[] SplashDecalBoneIndices;
    public sbyte SplashDecalBoneCount;
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
    public sbyte[] BloodBurstBoneIndices;
    public sbyte BloodBurstBoneCount;
    public sbyte MainHandBoneIndex;
    public sbyte OffHandBoneIndex;
    public sbyte MainHandItemBoneIndex;
    public sbyte OffHandItemBoneIndex;
    public sbyte MainHandItemSecondaryBoneIndex;
    public sbyte OffHandItemSecondaryBoneIndex;
    public sbyte OffHandShoulderBoneIndex;
    public sbyte HandNumBonesForIk;
    public sbyte PrimaryFootBoneIndex;
    public sbyte SecondaryFootBoneIndex;
    public sbyte RightFootIkEndEffectorBoneIndex;
    public sbyte LeftFootIkEndEffectorBoneIndex;
    public sbyte RightFootIkTipBoneIndex;
    public sbyte LeftFootIkTipBoneIndex;
    public sbyte FootNumBonesForIk;
  }
}
