﻿// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.QueryLibrary
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class QueryLibrary
  {
    public static bool IsInfantry(Agent a) => !a.HasMount && !a.IsRangedCached;

    public static bool IsInfantryWithoutBanner(Agent a)
    {
      return a.Banner == null && !a.HasMount && !a.IsRangedCached;
    }

    public static bool HasShield(Agent a) => a.HasShieldCached;

    public static bool IsRanged(Agent a) => !a.HasMount && a.IsRangedCached;

    public static bool IsRangedWithoutBanner(Agent a)
    {
      return a.Banner == null && !a.HasMount && a.IsRangedCached;
    }

    public static bool IsCavalry(Agent a) => a.HasMount && !a.IsRangedCached;

    public static bool IsCavalryWithoutBanner(Agent a)
    {
      return a.Banner == null && a.HasMount && !a.IsRangedCached;
    }

    public static bool IsRangedCavalry(Agent a) => a.HasMount && a.IsRangedCached;

    public static bool IsRangedCavalryWithoutBanner(Agent a)
    {
      return a.Banner == null && a.HasMount && a.IsRangedCached;
    }

    public static bool HasSpear(Agent a) => a.HasSpearCached;

    public static bool HasThrown(Agent a) => a.HasThrownCached;

    public static bool IsHeavy(Agent a)
    {
      return MissionGameModels.Current.AgentStatCalculateModel.HasHeavyArmor(a);
    }
  }
}
