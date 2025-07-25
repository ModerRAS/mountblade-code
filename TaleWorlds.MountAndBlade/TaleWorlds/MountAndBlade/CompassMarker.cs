// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CompassMarker
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CompassMarker
  {
    public string Id { get; private set; }

    public float Angle { get; private set; }

    public bool IsPrimary { get; private set; }

    public CompassMarker(string id, float angle, bool isPrimary)
    {
      this.Id = id;
      this.Angle = angle % 360f;
      this.IsPrimary = isPrimary;
    }
  }
}
