// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.PropertyOwnerObject
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using System.Runtime.CompilerServices;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class PropertyOwnerObject
  {
    protected void OnPropertyChanged<T>(T value, [CallerMemberName] string propertyName = null) where T : class
    {
      Action<PropertyOwnerObject, string, object> propertyChanged = this.PropertyChanged;
      if (propertyChanged == null)
        return;
      propertyChanged(this, propertyName, (object) value);
    }

    protected void OnPropertyChanged(int value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, int> intPropertyChanged = this.intPropertyChanged;
      if (intPropertyChanged == null)
        return;
      intPropertyChanged(this, propertyName, value);
    }

    protected void OnPropertyChanged(float value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, float> floatPropertyChanged = this.floatPropertyChanged;
      if (floatPropertyChanged == null)
        return;
      floatPropertyChanged(this, propertyName, value);
    }

    protected void OnPropertyChanged(bool value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, bool> boolPropertyChanged = this.boolPropertyChanged;
      if (boolPropertyChanged == null)
        return;
      boolPropertyChanged(this, propertyName, value);
    }

    protected void OnPropertyChanged(Vec2 value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, Vec2> vec2PropertyChanged = this.Vec2PropertyChanged;
      if (vec2PropertyChanged == null)
        return;
      vec2PropertyChanged(this, propertyName, value);
    }

    protected void OnPropertyChanged(Vector2 value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, Vector2> vector2PropertyChanged = this.Vector2PropertyChanged;
      if (vector2PropertyChanged == null)
        return;
      vector2PropertyChanged(this, propertyName, value);
    }

    protected void OnPropertyChanged(double value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, double> doublePropertyChanged = this.doublePropertyChanged;
      if (doublePropertyChanged == null)
        return;
      doublePropertyChanged(this, propertyName, value);
    }

    protected void OnPropertyChanged(uint value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, uint> uintPropertyChanged = this.uintPropertyChanged;
      if (uintPropertyChanged == null)
        return;
      uintPropertyChanged(this, propertyName, value);
    }

    protected void OnPropertyChanged(Color value, [CallerMemberName] string propertyName = null)
    {
      Action<PropertyOwnerObject, string, Color> colorPropertyChanged = this.ColorPropertyChanged;
      if (colorPropertyChanged == null)
        return;
      colorPropertyChanged(this, propertyName, value);
    }

    public event Action<PropertyOwnerObject, string, object> PropertyChanged;

    public event Action<PropertyOwnerObject, string, bool> boolPropertyChanged;

    public event Action<PropertyOwnerObject, string, int> intPropertyChanged;

    public event Action<PropertyOwnerObject, string, float> floatPropertyChanged;

    public event Action<PropertyOwnerObject, string, Vec2> Vec2PropertyChanged;

    public event Action<PropertyOwnerObject, string, Vector2> Vector2PropertyChanged;

    public event Action<PropertyOwnerObject, string, double> doublePropertyChanged;

    public event Action<PropertyOwnerObject, string, uint> uintPropertyChanged;

    public event Action<PropertyOwnerObject, string, Color> ColorPropertyChanged;
  }
}
