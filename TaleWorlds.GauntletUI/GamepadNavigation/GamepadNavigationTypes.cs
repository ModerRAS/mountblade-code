// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.GamepadNavigation.GamepadNavigationTypes
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;

#nullable disable
namespace TaleWorlds.GauntletUI.GamepadNavigation
{
  [Flags]
  public enum GamepadNavigationTypes
  {
    None = 0,
    Up = 1,
    Down = 2,
    Vertical = Down | Up, // 0x00000003
    Left = 4,
    Right = 8,
    Horizontal = Right | Left, // 0x0000000C
  }
}
