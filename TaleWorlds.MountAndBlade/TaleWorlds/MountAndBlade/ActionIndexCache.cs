// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ActionIndexCache
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ActionIndexCache : IEquatable<ActionIndexCache>, IEquatable<ActionIndexValueCache>
  {
    private const int UnresolvedActionIndex = -2;
    private string _name;
    private int _actionIndex;
    private bool _isValidAction;

    public static ActionIndexCache act_none { get; private set; } = new ActionIndexCache(-1, nameof (act_none));

    public static ActionIndexCache Create(string actName)
    {
      return string.IsNullOrWhiteSpace(actName) ? ActionIndexCache.act_none : new ActionIndexCache(actName);
    }

    private ActionIndexCache(string actName)
    {
      this._name = actName;
      this._actionIndex = -2;
      this._isValidAction = true;
    }

    private ActionIndexCache(int actionIndex, string actName)
    {
      this._name = actName;
      this._actionIndex = actionIndex;
      this._isValidAction = false;
    }

    internal ActionIndexCache(int actionIndex)
    {
      this._name = (string) null;
      this._actionIndex = actionIndex;
      this._isValidAction = actionIndex >= 0;
    }

    public int Index
    {
      get
      {
        if (!this._isValidAction)
          return ActionIndexCache.act_none._actionIndex;
        if (this._actionIndex == -2)
          this.ResolveIndex();
        return this._actionIndex;
      }
    }

    public string Name
    {
      get
      {
        if (!this._isValidAction)
          return ActionIndexCache.act_none._name;
        if (this._name == null)
          this.ResolveName();
        return this._name;
      }
    }

    private void ResolveIndex()
    {
      this._actionIndex = MBAnimation.GetActionCodeWithName(this._name);
    }

    private void ResolveName() => this._name = MBAnimation.GetActionNameWithCode(this._actionIndex);

    public override bool Equals(object obj)
    {
      if (obj == null)
        return false;
      return (object) (obj as ActionIndexCache) != null ? this.Equals((ActionIndexCache) obj) : this.Equals((ActionIndexValueCache) obj);
    }

    public bool Equals(ActionIndexCache other)
    {
      return (object) other != null && this.Index == other.Index;
    }

    public bool Equals(ActionIndexValueCache other) => this.Index == other.Index;

    public static bool operator ==(ActionIndexValueCache action0, ActionIndexCache action1)
    {
      return action0.Equals(action1);
    }

    public static bool operator !=(ActionIndexValueCache action0, ActionIndexCache action1)
    {
      return !(action0 == action1);
    }

    public static bool operator ==(ActionIndexCache action0, ActionIndexCache action1)
    {
      if ((object) action0 == null && (object) action1 != null || (object) action1 == null && (object) action0 != null)
        return false;
      return (object) action0 == (object) action1 || action0.Equals(action1);
    }

    public static bool operator !=(ActionIndexCache action0, ActionIndexCache action1)
    {
      return !(action0 == action1);
    }

    public override int GetHashCode() => this.Index.GetHashCode();
  }
}
