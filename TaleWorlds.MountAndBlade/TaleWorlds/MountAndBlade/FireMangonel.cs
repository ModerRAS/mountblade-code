// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FireMangonel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class FireMangonel : Mangonel
  {
    public override SiegeEngineType GetSiegeEngineType()
    {
      return this._defaultSide != BattleSideEnum.Attacker ? DefaultSiegeEngineTypes.FireCatapult : DefaultSiegeEngineTypes.FireOnager;
    }

    public override float ProcessTargetValue(float baseValue, TargetFlags flags)
    {
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.NotAThreat))
        return -1000f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.None))
        baseValue *= 1.5f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSiegeEngine))
        baseValue *= 12f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsStructure))
        baseValue *= 1.5f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSmall))
        baseValue *= 8f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsMoving))
        baseValue *= 12f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.DebugThreat))
        baseValue *= 10f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSiegeTower))
        baseValue *= 12f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsFlammable))
        baseValue *= 100f;
      return baseValue;
    }
  }
}
