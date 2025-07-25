// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBGameEntityExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBGameEntityExtensions
  {
    [EngineMethod("create_from_weapon", false)]
    GameEntity CreateFromWeapon(
      UIntPtr scenePointer,
      in WeaponData weaponData,
      WeaponStatsData[] weaponStatsData,
      int weaponStatsDataLength,
      in WeaponData ammoWeaponData,
      WeaponStatsData[] ammoWeaponStatsData,
      int ammoWeaponStatsDataLength,
      bool showHolsterWithWeapon);

    [EngineMethod("fade_out", false)]
    void FadeOut(UIntPtr entityPointer, float interval, bool isRemovingFromScene);

    [EngineMethod("fade_in", false)]
    void FadeIn(UIntPtr entityPointer, bool resetAlpha);

    [EngineMethod("hide_if_not_fading_out", false)]
    void HideIfNotFadingOut(UIntPtr entityPointer);
  }
}
