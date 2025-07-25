// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WeaponStatsData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Weapon_stats_data", false)]
  public struct WeaponStatsData
  {
    public MatrixFrame WeaponFrame;
    public Vec3 RotationSpeed;
    public ulong WeaponFlags;
    public uint Properties;
    public int WeaponClass;
    public int AmmoClass;
    public int ItemUsageIndex;
    public int ThrustSpeed;
    public int SwingSpeed;
    public int MissileSpeed;
    public int ShieldArmor;
    public int ThrustDamage;
    public int SwingDamage;
    public int DefendSpeed;
    public int Accuracy;
    public int WeaponLength;
    public float WeaponBalance;
    public float SweetSpot;
    public short MaxDataValue;
    public short ReloadPhaseCount;
    public int ThrustDamageType;
    public int SwingDamageType;
  }
}
