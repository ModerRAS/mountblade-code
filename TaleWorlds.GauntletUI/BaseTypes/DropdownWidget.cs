// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.DropdownWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.GamepadNavigation;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class DropdownWidget : Widget
  {
    public Action<DropdownWidget> OnOpenStateChanged;
    private readonly Action<Widget> _clickHandler;
    private readonly Action<Widget> _listSelectionHandler;
    private readonly Action<Widget, Widget> _listItemRemovedHandler;
    private readonly Action<Widget, Widget> _listItemAddedHandler;
    private Vector2 _listPanelOpenPosition;
    private int _openFrameCounter;
    private bool _isSelectedItemDirty = true;
    private bool _changedByControllerNavigation;
    private GamepadNavigationScope _navigationScope;
    private GamepadNavigationForcedScopeCollection _scopeCollection;
    private ScrollablePanel _scrollablePanel;
    private ButtonWidget _button;
    private ListPanel _listPanel;
    private int _currentSelectedIndex;
    private bool _closeNextFrame;
    private bool _isOpen;
    private bool _buttonClicked;

    private Vector2 ListPanelPositionInsideUsableArea
    {
      get
      {
        return this.ListPanel.GlobalPosition - new Vector2(this.EventManager.LeftUsableAreaStart, this.EventManager.TopUsableAreaStart);
      }
    }

    [Editor(false)]
    public RichTextWidget RichTextWidget { get; set; }

    [Editor(false)]
    public bool DoNotHandleDropdownListPanel { get; set; }

    public DropdownWidget(UIContext context)
      : base(context)
    {
      this._clickHandler = new Action<Widget>(this.OnButtonClick);
      this._listSelectionHandler = new Action<Widget>(this.OnSelectionChanged);
      this._listItemRemovedHandler = new Action<Widget, Widget>(this.OnListItemRemoved);
      this._listItemAddedHandler = new Action<Widget, Widget>(this.OnListItemAdded);
      this.UsedNavigationMovements = GamepadNavigationTypes.Horizontal;
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      if (!this.DoNotHandleDropdownListPanel)
        this.UpdateListPanelPosition();
      if (this._buttonClicked)
      {
        if (this.ListPanel != null && !this._changedByControllerNavigation)
        {
          if (this._isOpen)
            this.ClosePanel();
          else
            this.OpenPanel();
        }
        this._buttonClicked = false;
      }
      else if (this._closeNextFrame && this._isOpen)
      {
        this.ClosePanel();
        this._closeNextFrame = false;
      }
      else if (this.EventManager.LatestMouseUpWidget != this._button && this._isOpen)
      {
        if (this.ListPanel.IsVisible)
          this._closeNextFrame = true;
      }
      else if (this._isOpen)
      {
        ++this._openFrameCounter;
        if (this._openFrameCounter > 5)
        {
          if ((double) Vector2.Distance(this.ListPanelPositionInsideUsableArea, this._listPanelOpenPosition) > 20.0 && !this.DoNotHandleDropdownListPanel)
            this._closeNextFrame = true;
        }
        else
          this._listPanelOpenPosition = this.ListPanelPositionInsideUsableArea;
      }
      this.RefreshSelectedItem();
    }

    protected override void OnConnectedToRoot()
    {
      base.OnConnectedToRoot();
      this.ScrollablePanel = this.GetParentScrollablePanelOfWidget((Widget) this);
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if (!this.DoNotHandleDropdownListPanel)
        this.UpdateListPanelPosition();
      this.UpdateGamepadNavigationControls();
    }

    private void UpdateGamepadNavigationControls()
    {
      if (this._isOpen && this.EventManager.IsControllerActive && (Input.IsKeyPressed(InputKey.ControllerLBumper) || Input.IsKeyPressed(InputKey.ControllerLTrigger) || Input.IsKeyPressed(InputKey.ControllerRBumper) || Input.IsKeyPressed(InputKey.ControllerRTrigger)))
        this.ClosePanel();
      if (!this._isOpen && (this.IsPressed || this._button.IsPressed) && this.IsRecursivelyVisible() && this.EventManager.GetIsHitThisFrame())
      {
        if (Input.IsKeyReleased(InputKey.ControllerLLeft))
        {
          if (this.CurrentSelectedIndex > 0)
            --this.CurrentSelectedIndex;
          else
            this.CurrentSelectedIndex = this.ListPanel.ChildCount - 1;
          this._isSelectedItemDirty = true;
          this._changedByControllerNavigation = true;
        }
        else if (Input.IsKeyReleased(InputKey.ControllerLRight))
        {
          if (this.CurrentSelectedIndex < this.ListPanel.ChildCount - 1)
            ++this.CurrentSelectedIndex;
          else
            this.CurrentSelectedIndex = 0;
          this._isSelectedItemDirty = true;
          this._changedByControllerNavigation = true;
        }
        this.IsUsingNavigation = true;
      }
      else
      {
        this._changedByControllerNavigation = false;
        this.IsUsingNavigation = false;
      }
    }

    private void UpdateListPanelPosition()
    {
      this.ListPanel.HorizontalAlignment = HorizontalAlignment.Left;
      this.ListPanel.VerticalAlignment = VerticalAlignment.Top;
      float num = (float) (((double) this.Size.X - (double) this._listPanel.Size.X) * 0.5);
      this.ListPanel.MarginTop = (this.GlobalPosition.Y + this.Button.Size.Y - this.EventManager.TopUsableAreaStart) * this._inverseScaleToUse;
      this.ListPanel.MarginLeft = (this.GlobalPosition.X + num - this.EventManager.LeftUsableAreaStart) * this._inverseScaleToUse;
    }

    protected virtual void OpenPanel()
    {
      if (this.Button != null)
        this.Button.IsSelected = true;
      this.ListPanel.IsVisible = true;
      this._listPanelOpenPosition = this.ListPanelPositionInsideUsableArea;
      this._openFrameCounter = 0;
      this._isOpen = true;
      Action<DropdownWidget> openStateChanged = this.OnOpenStateChanged;
      if (openStateChanged != null)
        openStateChanged(this);
      this.CreateGamepadNavigationScopeData();
    }

    protected virtual void ClosePanel()
    {
      if (this.Button != null)
        this.Button.IsSelected = false;
      this.ListPanel.IsVisible = false;
      this._buttonClicked = false;
      this._isOpen = false;
      Action<DropdownWidget> openStateChanged = this.OnOpenStateChanged;
      if (openStateChanged != null)
        openStateChanged(this);
      this.ClearGamepadScopeData();
    }

    private void CreateGamepadNavigationScopeData()
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
      this.ScrollablePanel?.ScrollToChild(widget);
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

    private void ClearGamepadScopeData()
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
      this._buttonClicked = true;
      this._closeNextFrame = false;
    }

    public void UpdateButtonText(string text)
    {
      if (this.RichTextWidget == null)
        return;
      this.RichTextWidget.Text = !string.IsNullOrEmpty(text) ? text : " ";
    }

    public void OnListItemAdded(Widget parentWidget, Widget newChild)
    {
      this._isSelectedItemDirty = true;
    }

    public void OnListItemRemoved(Widget removedItem, Widget removedChild)
    {
      this._isSelectedItemDirty = true;
    }

    public void OnSelectionChanged(Widget widget)
    {
      this.CurrentSelectedIndex = this.ListPanelValue;
      this._isSelectedItemDirty = true;
      this.OnPropertyChanged(this.CurrentSelectedIndex, "CurrentSelectedIndex");
    }

    private void RefreshSelectedItem()
    {
      if (!this._isSelectedItemDirty)
        return;
      this.ListPanelValue = this.CurrentSelectedIndex;
      if (this.ListPanelValue >= 0)
      {
        string text = "";
        Widget child = this.ListPanel?.GetChild(this.ListPanelValue);
        if (child != null)
        {
          foreach (Widget allChild in child.AllChildren)
          {
            if (allChild is RichTextWidget richTextWidget)
              text = richTextWidget.Text;
          }
        }
        this.UpdateButtonText(text);
      }
      if (this.ListPanel != null)
      {
        for (int i = 0; i < this.ListPanel.ChildCount; ++i)
        {
          if (this.ListPanel.GetChild(i) is ButtonWidget child)
            child.IsSelected = this.CurrentSelectedIndex == i;
        }
      }
      this._isSelectedItemDirty = false;
    }

    [Editor(false)]
    public ScrollablePanel ScrollablePanel
    {
      get => this._scrollablePanel;
      set
      {
        if (value == this._scrollablePanel)
          return;
        this._scrollablePanel = value;
        this.OnPropertyChanged<ScrollablePanel>(value, nameof (ScrollablePanel));
      }
    }

    [Editor(false)]
    public ButtonWidget Button
    {
      get => this._button;
      set
      {
        this._button?.ClickEventHandlers.Remove(this._clickHandler);
        this._button = value;
        this._button?.ClickEventHandlers.Add(this._clickHandler);
        this._isSelectedItemDirty = true;
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
          if (!this.DoNotHandleDropdownListPanel)
          {
            this._listPanel.ParentWidget = this.EventManager.Root;
            this._listPanel.HorizontalAlignment = HorizontalAlignment.Left;
            this._listPanel.VerticalAlignment = VerticalAlignment.Top;
          }
          this._listPanel.SelectEventHandlers.Add(this._listSelectionHandler);
          this._listPanel.ItemAddEventHandlers.Add(this._listItemAddedHandler);
          this._listPanel.ItemRemoveEventHandlers.Add(this._listItemRemovedHandler);
        }
        this._isSelectedItemDirty = true;
      }
    }

    public bool IsOpen
    {
      get => this._isOpen;
      set
      {
        if (value == this._isOpen || this._buttonClicked)
          return;
        if (this._isOpen)
          this.ClosePanel();
        else
          this.OpenPanel();
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
        this._isSelectedItemDirty = true;
      }
    }
  }
}
