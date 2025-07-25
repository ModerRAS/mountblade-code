// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FireBallista
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class FireBallista : Ballista
  {
    public override SiegeEngineType GetSiegeEngineType() => DefaultSiegeEngineTypes.FireBallista;

    public override float ProcessTargetValue(float baseValue, TargetFlags flags)
    {
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.NotAThreat))
        return -1000f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.None))
        baseValue *= 1.5f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSiegeEngine))
        baseValue *= 2.5f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsStructure))
        baseValue *= 0.1f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsFlammable))
        baseValue *= 2f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.DebugThreat))
        baseValue *= 1000f;
      return baseValue;
    }
  }
}
