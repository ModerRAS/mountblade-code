// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CompassItemUpdateParams
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct CompassItemUpdateParams
  {
    public readonly object Item;
    public readonly TargetIconType TargetType;
    public readonly Vec3 WorldPosition;
    public readonly uint Color;
    public readonly uint Color2;
    public readonly BannerCode BannerCode;
    public readonly bool IsAttacker;
    public readonly bool IsAlly;

    public CompassItemUpdateParams(
      object item,
      TargetIconType targetType,
      Vec3 worldPosition,
      uint color,
      uint color2)
      : this()
    {
      this.Item = item;
      this.TargetType = targetType;
      this.WorldPosition = worldPosition;
      this.Color = color;
      this.Color2 = color2;
      this.IsAttacker = false;
      this.IsAlly = false;
    }

    public CompassItemUpdateParams(
      object item,
      TargetIconType targetType,
      Vec3 worldPosition,
      BannerCode bannerCode,
      bool isAttacker,
      bool isAlly)
      : this()
    {
      this.Item = item;
      this.TargetType = targetType;
      this.WorldPosition = worldPosition;
      this.BannerCode = bannerCode;
      this.IsAttacker = isAttacker;
      this.IsAlly = isAlly;
    }
  }
}
