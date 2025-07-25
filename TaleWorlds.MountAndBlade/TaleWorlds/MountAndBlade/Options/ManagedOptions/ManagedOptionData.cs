// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Options.ManagedOptions.ManagedOptionData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine.Options;

#nullable disable
namespace TaleWorlds.MountAndBlade.Options.ManagedOptions
{
  public abstract class ManagedOptionData : IOptionData
  {
    public readonly TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType Type;
    private float _value;

    protected ManagedOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType type)
    {
      this.Type = type;
      this._value = TaleWorlds.MountAndBlade.ManagedOptions.GetConfig(type);
    }

    public virtual float GetDefaultValue() => TaleWorlds.MountAndBlade.ManagedOptions.GetDefaultConfig(this.Type);

    public void Commit()
    {
      if ((double) this._value == (double) TaleWorlds.MountAndBlade.ManagedOptions.GetConfig(this.Type))
        return;
      TaleWorlds.MountAndBlade.ManagedOptions.SetConfig(this.Type, this._value);
    }

    public float GetValue(bool forceRefresh)
    {
      if (forceRefresh)
        this._value = TaleWorlds.MountAndBlade.ManagedOptions.GetConfig(this.Type);
      return this._value;
    }

    public void SetValue(float value) => this._value = value;

    public object GetOptionType() => (object) this.Type;

    public bool IsNative() => false;

    public bool IsAction() => false;

    public (string, bool) GetIsDisabledAndReasonID()
    {
      switch (this.Type)
      {
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ControlBlockDirection:
        case TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ControlAttackDirection:
          if (BannerlordConfig.GyroOverrideForAttackDefend)
            return ("str_gyro_overrides_attack_block_direction", true);
          break;
      }
      return (string.Empty, false);
    }
  }
}
