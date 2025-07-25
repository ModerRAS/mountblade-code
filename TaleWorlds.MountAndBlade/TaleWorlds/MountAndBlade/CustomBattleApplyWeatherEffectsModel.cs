// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleApplyWeatherEffectsModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleApplyWeatherEffectsModel : ApplyWeatherEffectsModel
  {
    public override void ApplyWeatherEffects()
    {
      Scene scene = Mission.Current.Scene;
      if (!((NativeObject) scene != (NativeObject) null))
        return;
      bool flag1 = (double) scene.GetRainDensity() > 0.0 | (double) scene.GetSnowDensity() > 0.0;
      bool flag2 = (double) scene.GetFog() > 0.0;
      Mission.Current.SetBowMissileSpeedModifier(flag1 ? 0.9f : 1f);
      Mission.Current.SetCrossbowMissileSpeedModifier(flag1 ? 0.9f : 1f);
      Mission.Current.SetMissileRangeModifier(flag2 ? 0.8f : 1f);
    }
  }
}
