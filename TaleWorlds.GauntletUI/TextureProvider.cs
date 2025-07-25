// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.TextureProvider
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public abstract class TextureProvider
  {
    private Dictionary<string, MethodInfo> _getGetMethodCache = new Dictionary<string, MethodInfo>();

    public virtual void SetTargetSize(int width, int height)
    {
    }

    public abstract Texture GetTexture(TwoDimensionContext twoDimensionContext, string name);

    public virtual void Tick(float dt)
    {
    }

    public virtual void Clear(bool clearNextFrame) => this._getGetMethodCache.Clear();

    public void SetProperty(string name, object value)
    {
      PropertyInfo property = this.GetType().GetProperty(name);
      if (!(property != (PropertyInfo) null))
        return;
      property.GetSetMethod().Invoke((object) this, new object[1]
      {
        value
      });
    }

    public object GetProperty(string name)
    {
      MethodInfo methodInfo;
      if (this._getGetMethodCache.TryGetValue(name, out methodInfo))
        return methodInfo.Invoke((object) this, (object[]) null);
      PropertyInfo property = this.GetType().GetProperty(name);
      if (!(property != (PropertyInfo) null))
        return (object) null;
      MethodInfo getMethod = property.GetGetMethod();
      this._getGetMethodCache.Add(name, getMethod);
      return getMethod.Invoke((object) this, (object[]) null);
    }
  }
}
