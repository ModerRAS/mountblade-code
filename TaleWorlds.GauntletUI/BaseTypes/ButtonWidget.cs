// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.ButtonWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class ButtonWidget : ImageWidget
  {
    protected const float _maxDoubleClickDeltaTimeInSeconds = 0.5f;
    protected float _lastClickTime;
    private ButtonWidget.ButtonClickState _clickState;
    private ButtonType _buttonType;
    public List<Action<Widget>> ClickEventHandlers = new List<Action<Widget>>();
    private Widget _toggleIndicator;
    private bool _isSelected;
    private bool _dominantSelectedState = true;

    [Editor(false)]
    public ButtonType ButtonType
    {
      get => this._buttonType;
      set
      {
        if (this._buttonType == value)
          return;
        this._buttonType = value;
        this.Refresh();
      }
    }

    protected override bool OnPreviewMousePressed()
    {
      base.OnPreviewMousePressed();
      return true;
    }

    protected override void RefreshState()
    {
      base.RefreshState();
      if (!this.OverrideDefaultStateSwitchingEnabled)
      {
        if (this.IsDisabled)
          this.SetState("Disabled");
        else if (this.IsSelected && this.DominantSelectedState)
          this.SetState("Selected");
        else if (this.IsPressed)
          this.SetState("Pressed");
        else if (this.IsHovered)
          this.SetState("Hovered");
        else if (this.IsSelected && !this.DominantSelectedState)
          this.SetState("Selected");
        else
          this.SetState("Default");
      }
      if (!this.UpdateChildrenStates)
        return;
      for (int i = 0; i < this.ChildCount; ++i)
      {
        Widget child = this.GetChild(i);
        if (!(child is ImageWidget) || !((ImageWidget) child).OverrideDefaultStateSwitchingEnabled)
          child.SetState(this.CurrentState);
      }
    }

    private void Refresh()
    {
      if (!this.IsToggle)
        return;
      this.ShowHideToggle();
    }

    private void ShowHideToggle()
    {
      if (this.ToggleIndicator == null)
        return;
      if (this._isSelected)
        this.ToggleIndicator.Show();
      else
        this.ToggleIndicator.Hide();
    }

    public ButtonWidget(UIContext context)
      : base(context)
    {
      this.FrictionEnabled = true;
    }

    protected internal override void OnMousePressed()
    {
      if (this._clickState != ButtonWidget.ButtonClickState.None)
        return;
      this._clickState = ButtonWidget.ButtonClickState.HandlingClick;
      this.IsPressed = true;
      if (this.DoNotPassEventsToChildren)
        return;
      for (int i = 0; i < this.ChildCount; ++i)
      {
        Widget child = this.GetChild(i);
        if (child != null)
          child.IsPressed = true;
      }
    }

    protected internal override void OnMouseReleased()
    {
      if (this._clickState != ButtonWidget.ButtonClickState.HandlingClick)
        return;
      this._clickState = ButtonWidget.ButtonClickState.None;
      this.IsPressed = false;
      if (!this.DoNotPassEventsToChildren)
      {
        for (int i = 0; i < this.ChildCount; ++i)
        {
          Widget child = this.GetChild(i);
          if (child != null)
            child.IsPressed = false;
        }
      }
      if (!this.IsPointInsideMeasuredAreaAndCheckIfVisible())
        return;
      this.HandleClick();
    }

    private bool IsPointInsideMeasuredAreaAndCheckIfVisible()
    {
      return this.IsPointInsideMeasuredArea(this.EventManager.MousePosition) && this.IsRecursivelyVisible();
    }

    protected internal override void OnMouseAlternatePressed()
    {
      if (this._clickState != ButtonWidget.ButtonClickState.None)
        return;
      this._clickState = ButtonWidget.ButtonClickState.HandlingAlternateClick;
      this.IsPressed = true;
      if (this.DoNotPassEventsToChildren)
        return;
      for (int i = 0; i < this.ChildCount; ++i)
      {
        Widget child = this.GetChild(i);
        if (child != null)
          child.IsPressed = true;
      }
    }

    protected internal override void OnMouseAlternateReleased()
    {
      if (this._clickState != ButtonWidget.ButtonClickState.HandlingAlternateClick)
        return;
      this._clickState = ButtonWidget.ButtonClickState.None;
      this.IsPressed = false;
      if (!this.DoNotPassEventsToChildren)
      {
        for (int i = 0; i < this.ChildCount; ++i)
        {
          Widget child = this.GetChild(i);
          if (child != null)
            child.IsPressed = false;
        }
      }
      if (!this.IsPointInsideMeasuredAreaAndCheckIfVisible())
        return;
      this.HandleAlternateClick();
    }

    protected virtual void HandleClick()
    {
      foreach (Action<Widget> clickEventHandler in this.ClickEventHandlers)
        clickEventHandler((Widget) this);
      bool isSelected = this.IsSelected;
      if (this.IsToggle)
        this.IsSelected = !this.IsSelected;
      else if (this.IsRadio)
      {
        this.IsSelected = true;
        if (this.IsSelected && !isSelected && this.ParentWidget is Container)
          (this.ParentWidget as Container).OnChildSelected((Widget) this);
      }
      this.OnClick();
      this.EventFired("Click");
      if ((double) this.Context.EventManager.Time - (double) this._lastClickTime < 0.5)
        this.EventFired("DoubleClick");
      else
        this._lastClickTime = this.Context.EventManager.Time;
    }

    private void HandleAlternateClick()
    {
      this.OnAlternateClick();
      this.EventFired("AlternateClick");
    }

    protected virtual void OnClick()
    {
    }

    protected virtual void OnAlternateClick()
    {
    }

    public bool IsToggle => this.ButtonType == ButtonType.Toggle;

    public bool IsRadio => this.ButtonType == ButtonType.Radio;

    [Editor(false)]
    public Widget ToggleIndicator
    {
      get => this._toggleIndicator;
      set
      {
        if (this._toggleIndicator == value)
          return;
        this._toggleIndicator = value;
        this.Refresh();
      }
    }

    [Editor(false)]
    public bool IsSelected
    {
      get => this._isSelected;
      set
      {
        if (this._isSelected == value)
          return;
        this._isSelected = value;
        this.Refresh();
        this.RefreshState();
        this.OnPropertyChanged(value, nameof (IsSelected));
      }
    }

    [Editor(false)]
    public bool DominantSelectedState
    {
      get => this._dominantSelectedState;
      set
      {
        if (this._dominantSelectedState == value)
          return;
        this._dominantSelectedState = value;
        this.OnPropertyChanged(value, nameof (DominantSelectedState));
      }
    }

    private enum ButtonClickState
    {
      None,
      HandlingClick,
      HandlingAlternateClick,
    }
  }
}
