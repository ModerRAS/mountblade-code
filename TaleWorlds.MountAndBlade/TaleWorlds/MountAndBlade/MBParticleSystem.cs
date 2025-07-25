// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBParticleSystem
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MBParticleSystem
  {
    private int index;

    internal MBParticleSystem(int i) => this.index = i;

    public bool Equals(MBParticleSystem a) => this.index == a.index;

    public override int GetHashCode() => this.index;
  }
}
