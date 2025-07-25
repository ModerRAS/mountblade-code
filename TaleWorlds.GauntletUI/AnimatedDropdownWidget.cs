// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.AnimatedDropdownWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.GauntletUI.GamepadNavigation;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class AnimatedDropdownWidget : Widget
  {
    private const string _checkboxSound = "checkbox";
    private Action<Widget> _clickHandler;
    private Action<Widget> _listSelectionHandler;
    private Action<Widget, Widget> _listItemRemovedHandler;
    private Action<Widget, Widget> _listItemAddedHandler;
    private Vector2 _dropdownOpenPosition;
    private float _animationSpeedModifier = 15f;
    private bool _initialized;
    private bool _changedByControllerNavigation;
    private GamepadNavigationScope _navigationScope;
    private GamepadNavigationForcedScopeCollection _scopeCollection;
    private bool _previousOpenState;
    private ButtonWidget _button;
    private ListPanel _listPanel;
    private int _currentSelectedIndex;
    private Widget _dropdownContainerWidget;
    private Widget _dropdownClipWidget;
    private bool _isOpen;
    private bool _buttonClicked;
    private bool _updateSelectedItem = true;

    public AnimatedDropdownWidget(UIContext context)
      : base(context)
    {
      this._clickHandler = new Action<Widget>(this.OnButtonClick);
      this._listSelectionHandler = new Action<Widget>(this.OnSelectionChanged);
      this._listItemRemovedHandler = new Action<Widget, Widget>(this.OnListChanged);
      this._listItemAddedHandler = new Action<Widget, Widget>(this.OnListChanged);
      this.UsedNavigationMovements = GamepadNavigationTypes.Horizontal;
    }

    [Editor(false)]
    public RichTextWidget TextWidget { get; set; }

    public ScrollbarWidget ScrollbarWidget { get; set; }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      if (!this._initialized)
      {
        this.DropdownClipWidget.ParentWidget = this.FindRelativeRoot((Widget) this);
        this._initialized = true;
      }
      if (this._buttonClicked)
        this._buttonClicked = false;
      else if (!this.IsLatestUpOrDown((Widget) this._button, false) && !this.IsLatestUpOrDown((Widget) this.ScrollbarWidget, true) && this._isOpen && this.DropdownClipWidget.IsVisible)
        this.ClosePanel();
      if (this._isOpen && !this.IsRecursivelyVisible())
        this.ClosePanelInOneFrame();
      this.RefreshSelectedItem();
    }

    private bool IsLatestUpOrDown(Widget widget, bool includeChildren)
    {
      if (widget == null)
        return false;
      return includeChildren ? widget.CheckIsMyChildRecursive(this.EventManager.LatestMouseUpWidget) || widget.CheckIsMyChildRecursive(this.EventManager.LatestMouseDownWidget) : widget == this.EventManager.LatestMouseUpWidget || widget == this.EventManager.LatestMouseDownWidget;
    }

    protected override void OnDisconnectedFromRoot()
    {
      base.OnDisconnectedFromRoot();
      this.ClosePanelInOneFrame();
    }

    private Widget FindRelativeRoot(Widget widget)
    {
      return widget.ParentWidget == this.EventManager.Root ? widget : this.FindRelativeRoot(widget.ParentWidget);
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if (this._previousOpenState && this._isOpen && (double) Vector2.Distance(this.DropdownClipWidget.GlobalPosition, this._dropdownOpenPosition) > 5.0)
        this.ClosePanelInOneFrame();
      this.UpdateListPanelPosition(dt);
      if (!this.IsRecursivelyVisible())
        this.ClosePanelInOneFrame();
      if (!this._isOpen && (this.IsPressed || this._button.IsPressed) && this.IsRecursivelyVisible() && this.EventManager.GetIsHitThisFrame())
      {
        if (Input.IsKeyReleased(InputKey.ControllerLLeft))
        {
          this.Context.TwoDimensionContext.PlaySound("checkbox");
          if (this.CurrentSelectedIndex > 0)
            --this.CurrentSelectedIndex;
          else
            this.CurrentSelectedIndex = this.ListPanel.ChildCount - 1;
          this.RefreshSelectedItem();
          this._changedByControllerNavigation = true;
        }
        else if (Input.IsKeyReleased(InputKey.ControllerLRight))
        {
          this.Context.TwoDimensionContext.PlaySound("checkbox");
          if (this.CurrentSelectedIndex < this.ListPanel.ChildCount - 1)
            ++this.CurrentSelectedIndex;
          else
            this.CurrentSelectedIndex = 0;
          this.RefreshSelectedItem();
          this._changedByControllerNavigation = true;
        }
        this.IsUsingNavigation = true;
      }
      else
      {
        this._changedByControllerNavigation = false;
        this.IsUsingNavigation = false;
      }
      if (!this._previousOpenState && this._isOpen)
        this._dropdownOpenPosition = this.Button.GlobalPosition + new Vector2((float) (((double) this.Button.Size.X - (double) this.DropdownClipWidget.Size.X) / 2.0), this.Button.Size.Y);
      this._previousOpenState = this._isOpen;
    }

    private void UpdateListPanelPosition(float dt)
    {
      this.DropdownClipWidget.HorizontalAlignment = HorizontalAlignment.Left;
      this.DropdownClipWidget.VerticalAlignment = VerticalAlignment.Top;
      Vector2 one = Vector2.One;
      float valueTo;
      if (this._isOpen)
      {
        Widget child = this.DropdownContainerWidget.GetChild(0);
        valueTo = child.Size.Y + child.MarginBottom * this._scaleToUse;
      }
      else
        valueTo = 0.0f;
      Vector2 vector2 = this.Button.GlobalPosition + new Vector2((float) (((double) this.Button.Size.X - (double) this.DropdownClipWidget.Size.X) / 2.0), this.Button.Size.Y) - new Vector2(this.EventManager.LeftUsableAreaStart, this.EventManager.TopUsableAreaStart);
      this.DropdownClipWidget.ScaledPositionXOffset = vector2.X;
      float amount = TaleWorlds.Library.MathF.Clamp(dt * this._animationSpeedModifier, 0.0f, 1f);
      this.DropdownClipWidget.ScaledSuggestedHeight = TaleWorlds.Library.MathF.Lerp(this.DropdownClipWidget.ScaledSuggestedHeight, valueTo, amount);
      this.DropdownClipWidget.ScaledPositionYOffset = TaleWorlds.Library.MathF.Lerp(this.DropdownClipWidget.ScaledPositionYOffset, vector2.Y, amount);
      if (!this._isOpen && (double) TaleWorlds.Library.MathF.Abs(this.DropdownClipWidget.ScaledSuggestedHeight - valueTo) < 0.5)
      {
        this.DropdownClipWidget.IsVisible = false;
      }
      else
      {
        if (!this._isOpen)
          return;
        this.DropdownClipWidget.IsVisible = true;
      }
    }

    protected virtual void OpenPanel()
    {
      this._isOpen = true;
      this.DropdownClipWidget.IsVisible = true;
      this.CreateNavigationScope();
    }

    protected virtual void ClosePanel()
    {
      this._isOpen = false;
      this.ClearGamepadNavigationScopeData();
    }

    private void ClosePanelInOneFrame()
    {
      this._isOpen = false;
      this.DropdownClipWidget.IsVisible = false;
      this.DropdownClipWidget.ScaledSuggestedHeight = 0.0f;
      this.ClearGamepadNavigationScopeData();
    }

    private void CreateNavigationScope()
    {
      if (this._navigationScope != null)
        this.GamepadNavigationContext.RemoveNavigationScope(this._navigationScope);
      this._scopeCollection = new GamepadNavigationForcedScopeCollection();
      this._scopeCollection.ParentWidget = this.ParentWidget ?? (Widget) this;
      this._scopeCollection.CollectionOrder = 999;
      this._navigationScope = this.BuildGamepadNavigationScopeData();
      this.GamepadNavigationContext.AddNavigationScope(this._navigationScope, true);
      this._button.GamepadNavigationIndex = 0;
      this._navigationScope.AddWidgetAtIndex((Widget) this._button, 0);
      ButtonWidget button = this._button;
      button.OnGamepadNavigationFocusGained = button.OnGamepadNavigationFocusGained + new Action<Widget>(this.OnWidgetGainedNavigationFocus);
      for (int index = 0; index < this.ListPanel.Children.Count; ++index)
      {
        this.ListPanel.Children[index].GamepadNavigationIndex = index + 1;
        this._navigationScope.AddWidgetAtIndex(this.ListPanel.Children[index], index + 1);
        this.ListPanel.Children[index].OnGamepadNavigationFocusGained += new Action<Widget>(this.OnWidgetGainedNavigationFocus);
      }
      this.GamepadNavigationContext.AddForcedScopeCollection(this._scopeCollection);
    }

    private void OnWidgetGainedNavigationFocus(Widget widget)
    {
      this.GetParentScrollablePanelOfWidget(widget)?.ScrollToChild(widget);
    }

    private ScrollablePanel GetParentScrollablePanelOfWidget(Widget widget)
    {
      for (Widget widget1 = widget; widget1 != null; widget1 = widget1.ParentWidget)
      {
        if (widget1 is ScrollablePanel scrollablePanelOfWidget)
          return scrollablePanelOfWidget;
      }
      return (ScrollablePanel) null;
    }

    private GamepadNavigationScope BuildGamepadNavigationScopeData()
    {
      return new GamepadNavigationScope()
      {
        ScopeMovements = GamepadNavigationTypes.Vertical,
        DoNotAutomaticallyFindChildren = true,
        DoNotAutoNavigateAfterSort = true,
        HasCircularMovement = true,
        ParentWidget = this.ParentWidget ?? (Widget) this,
        ScopeID = "DropdownScope"
      };
    }

    private void ClearGamepadNavigationScopeData()
    {
      if (this._navigationScope != null)
      {
        this.GamepadNavigationContext.RemoveNavigationScope(this._navigationScope);
        for (int index = 0; index < this.ListPanel.Children.Count; ++index)
        {
          this.ListPanel.Children[index].GamepadNavigationIndex = -1;
          this.ListPanel.Children[index].OnGamepadNavigationFocusGained -= new Action<Widget>(this.OnWidgetGainedNavigationFocus);
        }
        this._button.GamepadNavigationIndex = -1;
        ButtonWidget button = this._button;
        button.OnGamepadNavigationFocusGained = button.OnGamepadNavigationFocusGained - new Action<Widget>(this.OnWidgetGainedNavigationFocus);
        this._navigationScope = (GamepadNavigationScope) null;
      }
      if (this._scopeCollection == null)
        return;
      this.GamepadNavigationContext.RemoveForcedScopeCollection(this._scopeCollection);
    }

    public void OnButtonClick(Widget widget)
    {
      if (!this._changedByControllerNavigation)
      {
        this._buttonClicked = true;
        if (this._isOpen)
          this.ClosePanel();
        else
          this.OpenPanel();
      }
      this.EventFired("OnDropdownClick");
    }

    public void UpdateButtonText(string text)
    {
      if (this.TextWidget == null)
        return;
      if (text != null)
        this.TextWidget.Text = text;
      else
        this.TextWidget.Text = " ";
    }

    public void OnListChanged(Widget widget)
    {
      this.RefreshSelectedItem();
      this.DropdownContainerWidget.IsVisible = widget.ChildCount > 1;
    }

    public void OnListChanged(Widget parentWidget, Widget addedWidget)
    {
      this.RefreshSelectedItem();
      this.DropdownContainerWidget.IsVisible = parentWidget.ChildCount > 0;
    }

    public void OnSelectionChanged(Widget widget)
    {
      if (!this.UpdateSelectedItem)
        return;
      this.CurrentSelectedIndex = this.ListPanelValue;
      this.RefreshSelectedItem();
    }

    private void RefreshSelectedItem()
    {
      if (!this.UpdateSelectedItem)
        return;
      this.ListPanelValue = this.CurrentSelectedIndex;
      string text = "";
      if (this.ListPanelValue >= 0 && this.ListPanel != null)
      {
        Widget child = this.ListPanel.GetChild(this.ListPanelValue);
        if (child != null)
        {
          foreach (Widget allChild in child.AllChildren)
          {
            if (allChild is RichTextWidget richTextWidget)
              text = richTextWidget.Text;
          }
        }
      }
      this.UpdateButtonText(text);
      if (this.ListPanel == null)
        return;
      for (int i = 0; i < this.ListPanel.ChildCount; ++i)
      {
        Widget child = this.ListPanel.GetChild(i);
        if (this.CurrentSelectedIndex == i)
        {
          if (child.CurrentState != "Selected")
            child.SetState("Selected");
          if (child is ButtonWidget)
            (child as ButtonWidget).IsSelected = this.CurrentSelectedIndex == i;
        }
      }
    }

    [Editor(false)]
    public ButtonWidget Button
    {
      get => this._button;
      set
      {
        if (this._button != null)
          this._button.ClickEventHandlers.Remove(this._clickHandler);
        this._button = value;
        if (this._button != null)
          this._button.ClickEventHandlers.Add(this._clickHandler);
        this.RefreshSelectedItem();
      }
    }

    [Editor(false)]
    public Widget DropdownContainerWidget
    {
      get => this._dropdownContainerWidget;
      set => this._dropdownContainerWidget = value;
    }

    [Editor(false)]
    public Widget DropdownClipWidget
    {
      get => this._dropdownClipWidget;
      set
      {
        this._dropdownClipWidget = value;
        this._dropdownClipWidget.HorizontalAlignment = HorizontalAlignment.Left;
        this._dropdownClipWidget.VerticalAlignment = VerticalAlignment.Top;
      }
    }

    [Editor(false)]
    public ListPanel ListPanel
    {
      get => this._listPanel;
      set
      {
        if (this._listPanel != null)
        {
          this._listPanel.SelectEventHandlers.Remove(this._listSelectionHandler);
          this._listPanel.ItemAddEventHandlers.Remove(this._listItemAddedHandler);
          this._listPanel.ItemRemoveEventHandlers.Remove(this._listItemRemovedHandler);
        }
        this._listPanel = value;
        if (this._listPanel != null)
        {
          this._listPanel.SelectEventHandlers.Add(this._listSelectionHandler);
          this._listPanel.ItemAddEventHandlers.Add(this._listItemAddedHandler);
          this._listPanel.ItemRemoveEventHandlers.Add(this._listItemRemovedHandler);
        }
        this.RefreshSelectedItem();
      }
    }

    [Editor(false)]
    public int ListPanelValue
    {
      get => this.ListPanel != null ? this.ListPanel.IntValue : -1;
      set
      {
        if (this.ListPanel == null || this.ListPanel.IntValue == value)
          return;
        this.ListPanel.IntValue = value;
      }
    }

    [Editor(false)]
    public int CurrentSelectedIndex
    {
      get => this._currentSelectedIndex;
      set
      {
        if (this._currentSelectedIndex == value)
          return;
        this._currentSelectedIndex = value;
        this.OnPropertyChanged(this.CurrentSelectedIndex, nameof (CurrentSelectedIndex));
      }
    }

    [Editor(false)]
    public bool UpdateSelectedItem
    {
      get => this._updateSelectedItem;
      set
      {
        if (this._updateSelectedItem == value)
          return;
        this._updateSelectedItem = value;
      }
    }
  }
}
