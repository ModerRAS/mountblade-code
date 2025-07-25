// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DividableTask
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DividableTask
  {
    private bool _isTaskCompletelyFinished;
    private bool _isMainTaskFinished;
    private bool _lastActionCalled;
    private DividableTask _continueToTask;
    private Action _lastAction;

    public DividableTask(DividableTask continueToTask = null)
    {
      this._continueToTask = continueToTask;
      this.ResetTaskStatus();
    }

    public void ResetTaskStatus()
    {
      this._isMainTaskFinished = false;
      this._isTaskCompletelyFinished = false;
      this._lastActionCalled = false;
    }

    public void SetTaskFinished(bool callLastAction = false)
    {
      if (callLastAction)
      {
        Action lastAction = this._lastAction;
        if (lastAction != null)
          lastAction();
        this._lastActionCalled = true;
      }
      this._isTaskCompletelyFinished = true;
      this._isMainTaskFinished = true;
    }

    public bool Update()
    {
      if (!this._isTaskCompletelyFinished)
      {
        if (!this._isMainTaskFinished && this.UpdateExtra())
          this._isMainTaskFinished = true;
        if (this._isMainTaskFinished)
        {
          DividableTask continueToTask = this._continueToTask;
          this._isTaskCompletelyFinished = continueToTask == null || continueToTask.Update();
        }
      }
      if (this._isTaskCompletelyFinished && !this._lastActionCalled)
      {
        Action lastAction = this._lastAction;
        if (lastAction != null)
          lastAction();
        this._lastActionCalled = true;
      }
      return this._isTaskCompletelyFinished;
    }

    public void SetLastAction(Action action) => this._lastAction = action;

    protected virtual bool UpdateExtra() => true;
  }
}
