// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBUnusedResourceManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MBUnusedResourceManager
  {
    public static void SetMeshUsed(string meshName) => MBAPI.IMBWorld.SetMeshUsed(meshName);

    public static void SetMaterialUsed(string meshName) => MBAPI.IMBWorld.SetMaterialUsed(meshName);

    public static void SetBodyUsed(string bodyName) => MBAPI.IMBWorld.SetBodyUsed(bodyName);
  }
}
