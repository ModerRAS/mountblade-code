// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Options.ManagedOptions.ManagedNumericOptionData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine.Options;

#nullable disable
namespace TaleWorlds.MountAndBlade.Options.ManagedOptions
{
  public class ManagedNumericOptionData : ManagedOptionData, INumericOptionData, IOptionData
  {
    private readonly float _minValue;
    private readonly float _maxValue;

    public ManagedNumericOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType type)
      : base(type)
    {
      this._minValue = ManagedNumericOptionData.GetLimitValue(this.Type, true);
      this._maxValue = ManagedNumericOptionData.GetLimitValue(this.Type, false);
    }

    public float GetMinValue() => this._minValue;

    public float GetMaxValue() => this._maxValue;

    private static float GetLimitValue(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType type, bool isMin)
    {
      switch (type)
      {
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.BattleSize:
          return isMin ? (float) BannerlordConfig.MinBattleSize : (float) BannerlordConfig.MaxBattleSize;
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.AutoSaveInterval:
          return !isMin ? 60f : 4f;
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.FirstPersonFov:
          return !isMin ? 100f : 45f;
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.CombatCameraDistance:
          return !isMin ? 2.4f : 0.7f;
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.UIScale:
          return !isMin ? 1f : 0.75f;
        default:
          return !isMin ? 1f : 0.0f;
      }
    }

    public bool GetIsDiscrete()
    {
      switch (this.Type)
      {
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.BattleSize:
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.AutoSaveInterval:
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.FirstPersonFov:
          return true;
        default:
          return false;
      }
    }

    public int GetDiscreteIncrementInterval() => 1;

    public bool GetShouldUpdateContinuously()
    {
      return this.Type != TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.UIScale;
    }
  }
}
