// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBMusicTrack
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MBMusicTrack
  {
    private int index;

    public MBMusicTrack(MBMusicTrack obj) => this.index = obj.index;

    internal MBMusicTrack(int i) => this.index = i;

    private bool IsValid => this.index >= 0;

    public bool Equals(MBMusicTrack obj) => this.index == obj.index;

    public override int GetHashCode() => this.index;
  }
}
