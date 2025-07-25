// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WeaponInfo
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct WeaponInfo
  {
    public bool IsValid { get; private set; }

    public bool IsMeleeWeapon { get; private set; }

    public bool IsRangedWeapon { get; private set; }

    public WeaponInfo(bool isValid, bool isMeleeWeapon, bool isRangedWeapon)
    {
      this.IsValid = isValid;
      this.IsMeleeWeapon = isMeleeWeapon;
      this.IsRangedWeapon = isRangedWeapon;
    }
  }
}
