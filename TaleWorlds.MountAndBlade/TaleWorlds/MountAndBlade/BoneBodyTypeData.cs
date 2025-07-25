// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BoneBodyTypeData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Bone_body_type_data", false)]
  public struct BoneBodyTypeData
  {
    [CustomEngineStructMemberData(true)]
    public readonly BoneBodyPartType BodyPartType;
    [CustomEngineStructMemberData(true)]
    public readonly sbyte Priority;
    [CustomEngineStructMemberData(true)]
    public readonly SkeletonModelBoundsRecFlags DataFlags;
  }
}
