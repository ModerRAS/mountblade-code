// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DestructedPrefabInfoMissionObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [Obsolete]
  public class DestructedPrefabInfoMissionObject : MissionObject
  {
    public string DestructedPrefabName;
    public Vec3 Translate = new Vec3();
    public Vec3 Rotation = new Vec3();
    public Vec3 Scale = new Vec3(1f, 1f, 1f);
  }
}
