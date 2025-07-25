// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxApplyWeatherEffectsModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxApplyWeatherEffectsModel : ApplyWeatherEffectsModel
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
