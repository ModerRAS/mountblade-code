// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomGameUsableMap
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using System.Linq;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomGameUsableMap
  {
    public string map { get; private set; }

    public bool isCompatibleWithAllGameTypes { get; private set; }

    public List<string> compatibleGameTypes { get; private set; }

    public CustomGameUsableMap(
      string map,
      bool isCompatibleWithAllGameTypes,
      List<string> compatibleGameTypes)
    {
      this.map = map;
      this.isCompatibleWithAllGameTypes = isCompatibleWithAllGameTypes;
      this.compatibleGameTypes = compatibleGameTypes;
    }

    public override bool Equals(object obj)
    {
      if (!(obj is CustomGameUsableMap customGameUsableMap))
        return base.Equals(obj);
      if (customGameUsableMap.map != this.map || customGameUsableMap.isCompatibleWithAllGameTypes != this.isCompatibleWithAllGameTypes)
        return false;
      if ((this.compatibleGameTypes == null || this.compatibleGameTypes.Count == 0) && (customGameUsableMap.compatibleGameTypes == null || customGameUsableMap.compatibleGameTypes.Count == 0))
        return true;
      return this.compatibleGameTypes != null && this.compatibleGameTypes.Count != 0 && customGameUsableMap.compatibleGameTypes != null && customGameUsableMap.compatibleGameTypes.Count != 0 && this.compatibleGameTypes.SequenceEqual<string>((IEnumerable<string>) customGameUsableMap.compatibleGameTypes);
    }

    public override int GetHashCode()
    {
      return ((this.map != null ? this.map.GetHashCode() : 0) * 397 ^ this.isCompatibleWithAllGameTypes.GetHashCode()) * 397 ^ (this.compatibleGameTypes != null ? this.compatibleGameTypes.GetHashCode() : 0);
    }
  }
}
