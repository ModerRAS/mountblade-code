// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Options.ActionOptionData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine.Options;

#nullable disable
namespace TaleWorlds.MountAndBlade.Options
{
  public class ActionOptionData : IOptionData
  {
    private ManagedOptions.ManagedOptionsType _managedType;
    private NativeOptions.NativeOptionsType _nativeType;
    private string _actionOptionTypeId;

    public Action OnAction { get; private set; }

    public ActionOptionData(ManagedOptions.ManagedOptionsType managedType, Action onAction)
    {
      this._managedType = managedType;
      this.OnAction = onAction;
    }

    public ActionOptionData(NativeOptions.NativeOptionsType nativeType, Action onAction)
    {
      this._nativeType = nativeType;
      this.OnAction = onAction;
    }

    public ActionOptionData(string optionTypeId, Action onAction)
    {
      this._actionOptionTypeId = optionTypeId;
      this._nativeType = NativeOptions.NativeOptionsType.None;
      this.OnAction = onAction;
    }

    public void Commit()
    {
    }

    public float GetDefaultValue() => 0.0f;

    public object GetOptionType()
    {
      if (this._nativeType != NativeOptions.NativeOptionsType.None)
        return (object) this._nativeType;
      return this._managedType != ManagedOptions.ManagedOptionsType.Language ? (object) this._managedType : (object) this._actionOptionTypeId;
    }

    public float GetValue(bool forceRefresh) => 0.0f;

    public bool IsNative() => this._nativeType != NativeOptions.NativeOptionsType.None;

    public void SetValue(float value)
    {
    }

    public bool IsAction()
    {
      return this._nativeType == NativeOptions.NativeOptionsType.None && this._managedType == ManagedOptions.ManagedOptionsType.Language;
    }

    public (string, bool) GetIsDisabledAndReasonID() => (string.Empty, false);
  }
}
