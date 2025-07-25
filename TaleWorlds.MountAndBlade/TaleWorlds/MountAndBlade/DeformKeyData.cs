// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DeformKeyData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Runtime.InteropServices;
using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Deform_Key_Data", false)]
  public struct DeformKeyData
  {
    public int GroupId;
    public int KeyTimePoint;
    public float KeyMin;
    public float KeyMax;
    public float Value;
    [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 512)]
    public string Id;
  }
}
