// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.QueryData`1
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class QueryData<T> : IQueryData
  {
    private T _cachedValue;
    private float _expireTime;
    private readonly float _lifetime;
    private readonly Func<T> _valueFunc;
    private IQueryData[] _syncGroup;

    public QueryData(Func<T> valueFunc, float lifetime)
    {
      this._cachedValue = default (T);
      this._expireTime = 0.0f;
      this._lifetime = lifetime;
      this._valueFunc = valueFunc;
      this._syncGroup = (IQueryData[]) null;
    }

    public QueryData(Func<T> valueFunc, float lifetime, T defaultCachedValue)
    {
      this._cachedValue = defaultCachedValue;
      this._expireTime = 0.0f;
      this._lifetime = lifetime;
      this._valueFunc = valueFunc;
      this._syncGroup = (IQueryData[]) null;
    }

    public void Evaluate(float currentTime) => this.SetValue(this._valueFunc(), currentTime);

    public void SetValue(T value, float currentTime)
    {
      this._cachedValue = value;
      this._expireTime = currentTime + this._lifetime;
    }

    public T GetCachedValue() => this._cachedValue;

    public T GetCachedValueWithMaxAge(float age)
    {
      if ((double) Mission.Current.CurrentTime <= (double) this._expireTime - (double) this._lifetime + (double) MathF.Min(this._lifetime, age))
        return this._cachedValue;
      this.Expire();
      return this.Value;
    }

    public T Value
    {
      get
      {
        float currentTime = Mission.Current.CurrentTime;
        if ((double) currentTime >= (double) this._expireTime)
        {
          if (this._syncGroup != null)
          {
            foreach (IQueryData queryData in this._syncGroup)
              queryData.Evaluate(currentTime);
          }
          this.Evaluate(currentTime);
        }
        return this._cachedValue;
      }
    }

    public void Expire() => this._expireTime = 0.0f;

    public static void SetupSyncGroup(params IQueryData[] groupItems)
    {
      foreach (IQueryData groupItem in groupItems)
        groupItem.SetSyncGroup(groupItems);
    }

    public void SetSyncGroup(IQueryData[] syncGroup) => this._syncGroup = syncGroup;
  }
}
