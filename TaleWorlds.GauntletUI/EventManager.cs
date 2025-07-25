// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.EventManager
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Threading.Tasks;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.GauntletUI.GamepadNavigation;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class EventManager
  {
    public const int MinParallelUpdateCount = 64;
    private const int DirtyCount = 2;
    private const float DragStartThreshold = 100f;
    private const float ScrollScale = 0.4f;
    private List<Action> _onAfterFinalizedCallbacks;
    private Widget _focusedWidget;
    private Widget _hoveredView;
    private List<Widget> _mouseOveredViews;
    private Widget _dragHoveredView;
    private Widget _draggedWidget;
    private Widget _latestMouseDownWidget;
    private Widget _latestMouseUpWidget;
    private Widget _latestMouseAlternateDownWidget;
    private Widget _latestMouseAlternateUpWidget;
    private int _measureDirty;
    private int _layoutDirty;
    private bool _positionsDirty;
    private const int _stickMovementScaleAmount = 3000;
    private Vector2 _lastClickPosition;
    private bool _mouseIsDown;
    private Vector2 _lastAlternateClickPosition;
    private bool _mouseAlternateIsDown;
    private Vector2 _dragOffset = new Vector2(0.0f, 0.0f);
    private Widget _draggedWidgetPreviousParent;
    private int _draggedWidgetIndex;
    private DragCarrierWidget _dragCarrier;
    private object _lateUpdateActionLocker;
    private Dictionary<int, List<UpdateAction>> _lateUpdateActions;
    private Dictionary<int, List<UpdateAction>> _lateUpdateActionsRunning;
    private WidgetContainer _widgetsWithUpdateContainer;
    private WidgetContainer _widgetsWithLateUpdateContainer;
    private WidgetContainer _widgetsWithParallelUpdateContainer;
    private WidgetContainer _widgetsWithVisualDefinitionsContainer;
    private WidgetContainer _widgetsWithTweenPositionsContainer;
    private WidgetContainer _widgetsWithUpdateBrushesContainer;
    private const int UpdateActionOrderCount = 5;
    private volatile bool _doingParallelTask;
    private TwoDimensionDrawContext _drawContext;
    private Action _widgetsWithUpdateContainerDoDefragmentationDelegate;
    private Action _widgetsWithParallelUpdateContainerDoDefragmentationDelegate;
    private Action _widgetsWithLateUpdateContainerDoDefragmentationDelegate;
    private Action _widgetsWithUpdateBrushesContainerDoDefragmentationDelegate;
    private readonly TWParallel.ParallelForWithDtAuxPredicate ParallelUpdateWidgetPredicate;
    private readonly TWParallel.ParallelForWithDtAuxPredicate UpdateBrushesWidgetPredicate;
    private readonly TWParallel.ParallelForWithDtAuxPredicate WidgetDoTweenPositionAuxPredicate;
    private float _lastSetFrictionValue = 1f;
    public Func<bool> OnGetIsHitThisFrame;

    public float Time { get; private set; }

    public Vec2 UsableArea { get; set; } = new Vec2(1f, 1f);

    public float LeftUsableAreaStart { get; private set; }

    public float TopUsableAreaStart { get; private set; }

    public static TaleWorlds.Library.EventSystem.EventManager UIEventManager { get; private set; }

    public Vector2 MousePositionInReferenceResolution
    {
      get => this.MousePosition * this.Context.CustomInverseScale;
    }

    public bool IsControllerActive { get; private set; }

    public Vector2 PageSize { get; private set; }

    public UIContext Context { get; private set; }

    public event Action OnDragStarted;

    public event Action OnDragEnded;

    public IInputService InputService { get; internal set; }

    public IInputContext InputContext { get; internal set; }

    public Widget Root { get; private set; }

    public Widget FocusedWidget
    {
      get => this._focusedWidget;
      private set
      {
        if (value != null && value.ConnectedToRoot)
          this._focusedWidget = value;
        else
          this._focusedWidget = (Widget) null;
      }
    }

    public Widget HoveredView
    {
      get => this._hoveredView;
      private set
      {
        if (value != null && value.ConnectedToRoot)
          this._hoveredView = value;
        else
          this._hoveredView = (Widget) null;
      }
    }

    public List<Widget> MouseOveredViews
    {
      get => this._mouseOveredViews;
      private set
      {
        if (value != null)
          this._mouseOveredViews = value;
        else
          this._mouseOveredViews = (List<Widget>) null;
      }
    }

    public Widget DragHoveredView
    {
      get => this._dragHoveredView;
      private set
      {
        if (value != null && value.ConnectedToRoot)
          this._dragHoveredView = value;
        else
          this._dragHoveredView = (Widget) null;
      }
    }

    public Widget DraggedWidget
    {
      get => this._draggedWidget;
      private set
      {
        if (value != null && value.ConnectedToRoot)
        {
          this._draggedWidget = value;
          Action onDragStarted = this.OnDragStarted;
          if (onDragStarted == null)
            return;
          onDragStarted();
        }
        else
        {
          this._draggedWidget = (Widget) null;
          Action onDragEnded = this.OnDragEnded;
          if (onDragEnded == null)
            return;
          onDragEnded();
        }
      }
    }

    public Vector2 DraggedWidgetPosition
    {
      get
      {
        return this.DraggedWidget != null ? this._dragCarrier.GlobalPosition * this.Context.CustomScale - new Vector2(this.LeftUsableAreaStart, this.TopUsableAreaStart) : this.MousePositionInReferenceResolution;
      }
    }

    public Widget LatestMouseDownWidget
    {
      get => this._latestMouseDownWidget;
      private set
      {
        if (value != null && value.ConnectedToRoot)
          this._latestMouseDownWidget = value;
        else
          this._latestMouseDownWidget = (Widget) null;
      }
    }

    public Widget LatestMouseUpWidget
    {
      get => this._latestMouseUpWidget;
      private set
      {
        if (value != null && value.ConnectedToRoot)
          this._latestMouseUpWidget = value;
        else
          this._latestMouseUpWidget = (Widget) null;
      }
    }

    public Widget LatestMouseAlternateDownWidget
    {
      get => this._latestMouseAlternateDownWidget;
      private set
      {
        if (value != null && value.ConnectedToRoot)
          this._latestMouseAlternateDownWidget = value;
        else
          this._latestMouseAlternateDownWidget = (Widget) null;
      }
    }

    public Widget LatestMouseAlternateUpWidget
    {
      get => this._latestMouseAlternateUpWidget;
      private set
      {
        if (value != null && value.ConnectedToRoot)
          this._latestMouseAlternateUpWidget = value;
        else
          this._latestMouseAlternateUpWidget = (Widget) null;
      }
    }

    public Vector2 MousePosition { get; private set; }

    private bool IsDragging => this.DraggedWidget != null;

    public float DeltaMouseScroll => this.InputContext.GetDeltaMouseScroll() * 0.4f;

    public float RightStickVerticalScrollAmount
    {
      get
      {
        return (float) (3000.0 * (double) Input.GetKeyState(InputKey.ControllerRStick).Y * 0.40000000596046448) * this.CachedDt;
      }
    }

    public float RightStickHorizontalScrollAmount
    {
      get
      {
        return (float) (3000.0 * (double) Input.GetKeyState(InputKey.ControllerRStick).X * 0.40000000596046448) * this.CachedDt;
      }
    }

    internal float CachedDt { get; private set; }

    internal EventManager(UIContext context)
    {
      this.Context = context;
      this.Root = new Widget(context) { Id = nameof (Root) };
      if (EventManager.UIEventManager == null)
        EventManager.UIEventManager = new TaleWorlds.Library.EventSystem.EventManager();
      this._widgetsWithUpdateContainer = new WidgetContainer(context, 64, WidgetContainer.ContainerType.Update);
      this._widgetsWithParallelUpdateContainer = new WidgetContainer(context, 64, WidgetContainer.ContainerType.ParallelUpdate);
      this._widgetsWithLateUpdateContainer = new WidgetContainer(context, 64, WidgetContainer.ContainerType.LateUpdate);
      this._widgetsWithTweenPositionsContainer = new WidgetContainer(context, 64, WidgetContainer.ContainerType.TweenPosition);
      this._widgetsWithVisualDefinitionsContainer = new WidgetContainer(context, 64, WidgetContainer.ContainerType.VisualDefinition);
      this._widgetsWithUpdateBrushesContainer = new WidgetContainer(context, 64, WidgetContainer.ContainerType.UpdateBrushes);
      this._lateUpdateActionLocker = new object();
      this._lateUpdateActions = new Dictionary<int, List<UpdateAction>>();
      this._lateUpdateActionsRunning = new Dictionary<int, List<UpdateAction>>();
      this._onAfterFinalizedCallbacks = new List<Action>();
      for (int key = 1; key <= 5; ++key)
      {
        this._lateUpdateActions.Add(key, new List<UpdateAction>(32));
        this._lateUpdateActionsRunning.Add(key, new List<UpdateAction>(32));
      }
      this._drawContext = new TwoDimensionDrawContext();
      this.MouseOveredViews = new List<Widget>();
      this.ParallelUpdateWidgetPredicate = new TWParallel.ParallelForWithDtAuxPredicate(this.ParallelUpdateWidget);
      this.WidgetDoTweenPositionAuxPredicate = new TWParallel.ParallelForWithDtAuxPredicate(this.WidgetDoTweenPositionAux);
      this.UpdateBrushesWidgetPredicate = new TWParallel.ParallelForWithDtAuxPredicate(this.UpdateBrushesWidget);
      this.IsControllerActive = Input.IsControllerConnected && !Input.IsMouseActive;
    }

    internal void OnFinalize()
    {
      if (!this._lastSetFrictionValue.ApproximatelyEqualsTo(1f))
      {
        this._lastSetFrictionValue = 1f;
        Input.SetCursorFriction(this._lastSetFrictionValue);
      }
      this._widgetsWithLateUpdateContainer.Clear();
      this._widgetsWithParallelUpdateContainer.Clear();
      this._widgetsWithTweenPositionsContainer.Clear();
      this._widgetsWithUpdateBrushesContainer.Clear();
      this._widgetsWithUpdateContainer.Clear();
      this._widgetsWithVisualDefinitionsContainer.Clear();
      for (int index = 0; index < this._onAfterFinalizedCallbacks.Count; ++index)
      {
        Action finalizedCallback = this._onAfterFinalizedCallbacks[index];
        if (finalizedCallback != null)
          finalizedCallback();
      }
      this._onAfterFinalizedCallbacks.Clear();
      this._onAfterFinalizedCallbacks = (List<Action>) null;
      this._widgetsWithLateUpdateContainer = (WidgetContainer) null;
      this._widgetsWithParallelUpdateContainer = (WidgetContainer) null;
      this._widgetsWithTweenPositionsContainer = (WidgetContainer) null;
      this._widgetsWithUpdateBrushesContainer = (WidgetContainer) null;
      this._widgetsWithUpdateContainer = (WidgetContainer) null;
      this._widgetsWithVisualDefinitionsContainer = (WidgetContainer) null;
    }

    public void AddAfterFinalizedCallback(Action callback)
    {
      this._onAfterFinalizedCallbacks.Add(callback);
    }

    internal void OnWidgetConnectedToRoot(Widget widget)
    {
      widget.HandleOnConnectedToRoot();
      foreach (Widget allChildrenAndThi in widget.AllChildrenAndThis)
      {
        allChildrenAndThi.HandleOnConnectedToRoot();
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.Update, allChildrenAndThi);
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.LateUpdate, allChildrenAndThi);
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.UpdateBrushes, allChildrenAndThi);
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.ParallelUpdate, allChildrenAndThi);
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.VisualDefinition, allChildrenAndThi);
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.TweenPosition, allChildrenAndThi);
      }
    }

    internal void OnWidgetDisconnectedFromRoot(Widget widget)
    {
      widget.HandleOnDisconnectedFromRoot();
      if (widget == this.DraggedWidget && this.DraggedWidget.DragWidget != null)
      {
        this.ReleaseDraggedWidget();
        this.ClearDragObject();
      }
      GauntletGamepadNavigationManager.Instance.OnWidgetDisconnectedFromRoot(widget);
      foreach (Widget allChildrenAndThi in widget.AllChildrenAndThis)
      {
        allChildrenAndThi.HandleOnDisconnectedFromRoot();
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.Update, allChildrenAndThi);
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.LateUpdate, allChildrenAndThi);
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.UpdateBrushes, allChildrenAndThi);
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.ParallelUpdate, allChildrenAndThi);
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.VisualDefinition, allChildrenAndThi);
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.TweenPosition, allChildrenAndThi);
        GauntletGamepadNavigationManager.Instance.OnWidgetDisconnectedFromRoot(allChildrenAndThi);
        allChildrenAndThi.GamepadNavigationIndex = -1;
        allChildrenAndThi.UsedNavigationMovements = GamepadNavigationTypes.None;
        allChildrenAndThi.IsUsingNavigation = false;
      }
    }

    internal void RegisterWidgetForEvent(WidgetContainer.ContainerType type, Widget widget)
    {
      switch (type)
      {
        case WidgetContainer.ContainerType.Update:
          lock (this._widgetsWithUpdateContainer)
          {
            if (!widget.WidgetInfo.GotCustomUpdate || widget.OnUpdateListIndex >= 0)
              break;
            widget.OnUpdateListIndex = this._widgetsWithUpdateContainer.Add(widget);
            break;
          }
        case WidgetContainer.ContainerType.ParallelUpdate:
          lock (this._widgetsWithParallelUpdateContainer)
          {
            if (!widget.WidgetInfo.GotCustomParallelUpdate || widget.OnParallelUpdateListIndex >= 0)
              break;
            widget.OnParallelUpdateListIndex = this._widgetsWithParallelUpdateContainer.Add(widget);
            break;
          }
        case WidgetContainer.ContainerType.LateUpdate:
          lock (this._widgetsWithLateUpdateContainer)
          {
            if (!widget.WidgetInfo.GotCustomLateUpdate || widget.OnLateUpdateListIndex >= 0)
              break;
            widget.OnLateUpdateListIndex = this._widgetsWithLateUpdateContainer.Add(widget);
            break;
          }
        case WidgetContainer.ContainerType.VisualDefinition:
          lock (this._widgetsWithVisualDefinitionsContainer)
          {
            if (widget.VisualDefinition == null || widget.OnVisualDefinitionListIndex >= 0)
              break;
            widget.OnVisualDefinitionListIndex = this._widgetsWithVisualDefinitionsContainer.Add(widget);
            break;
          }
        case WidgetContainer.ContainerType.TweenPosition:
          lock (this._widgetsWithTweenPositionsContainer)
          {
            if (!widget.TweenPosition || widget.OnTweenPositionListIndex >= 0)
              break;
            widget.OnTweenPositionListIndex = this._widgetsWithTweenPositionsContainer.Add(widget);
            break;
          }
        case WidgetContainer.ContainerType.UpdateBrushes:
          lock (this._widgetsWithUpdateBrushesContainer)
          {
            if (!widget.WidgetInfo.GotUpdateBrushes || widget.OnUpdateBrushesIndex >= 0)
              break;
            widget.OnUpdateBrushesIndex = this._widgetsWithUpdateBrushesContainer.Add(widget);
            break;
          }
      }
    }

    internal void UnRegisterWidgetForEvent(WidgetContainer.ContainerType type, Widget widget)
    {
      switch (type)
      {
        case WidgetContainer.ContainerType.Update:
          lock (this._widgetsWithUpdateContainer)
          {
            if (!widget.WidgetInfo.GotCustomUpdate || widget.OnUpdateListIndex == -1)
              break;
            this._widgetsWithUpdateContainer.RemoveFromIndex(widget.OnUpdateListIndex);
            widget.OnUpdateListIndex = -1;
            break;
          }
        case WidgetContainer.ContainerType.ParallelUpdate:
          lock (this._widgetsWithParallelUpdateContainer)
          {
            if (!widget.WidgetInfo.GotCustomParallelUpdate || widget.OnParallelUpdateListIndex == -1)
              break;
            this._widgetsWithParallelUpdateContainer.RemoveFromIndex(widget.OnParallelUpdateListIndex);
            widget.OnParallelUpdateListIndex = -1;
            break;
          }
        case WidgetContainer.ContainerType.LateUpdate:
          lock (this._widgetsWithLateUpdateContainer)
          {
            if (!widget.WidgetInfo.GotCustomLateUpdate || widget.OnLateUpdateListIndex == -1)
              break;
            this._widgetsWithLateUpdateContainer.RemoveFromIndex(widget.OnLateUpdateListIndex);
            widget.OnLateUpdateListIndex = -1;
            break;
          }
        case WidgetContainer.ContainerType.VisualDefinition:
          lock (this._widgetsWithVisualDefinitionsContainer)
          {
            if (widget.VisualDefinition == null || widget.OnVisualDefinitionListIndex == -1)
              break;
            this._widgetsWithVisualDefinitionsContainer.RemoveFromIndex(widget.OnVisualDefinitionListIndex);
            widget.OnVisualDefinitionListIndex = -1;
            break;
          }
        case WidgetContainer.ContainerType.TweenPosition:
          lock (this._widgetsWithTweenPositionsContainer)
          {
            if (!widget.TweenPosition || widget.OnTweenPositionListIndex == -1)
              break;
            this._widgetsWithTweenPositionsContainer.RemoveFromIndex(widget.OnTweenPositionListIndex);
            widget.OnTweenPositionListIndex = -1;
            break;
          }
        case WidgetContainer.ContainerType.UpdateBrushes:
          lock (this._widgetsWithUpdateBrushesContainer)
          {
            if (!widget.WidgetInfo.GotUpdateBrushes || widget.OnUpdateBrushesIndex == -1)
              break;
            this._widgetsWithUpdateBrushesContainer.RemoveFromIndex(widget.OnUpdateBrushesIndex);
            widget.OnUpdateBrushesIndex = -1;
            break;
          }
      }
    }

    internal void OnWidgetVisualDefinitionChanged(Widget widget)
    {
      if (widget.VisualDefinition != null)
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.VisualDefinition, widget);
      else
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.VisualDefinition, widget);
    }

    internal void OnWidgetTweenPositionChanged(Widget widget)
    {
      if (widget.TweenPosition)
        this.RegisterWidgetForEvent(WidgetContainer.ContainerType.TweenPosition, widget);
      else
        this.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.TweenPosition, widget);
    }

    private void MeasureAll() => this.Root.Measure(this.PageSize);

    private void LayoutAll(float left, float bottom, float right, float top)
    {
      this.Root.Layout(left, bottom, right, top);
    }

    private void UpdatePositions() => this.Root.UpdatePosition(Vector2.Zero);

    private void WidgetDoTweenPositionAux(int startInclusive, int endExclusive, float deltaTime)
    {
      List<Widget> currentList = this._widgetsWithParallelUpdateContainer.GetCurrentList();
      for (int index = startInclusive; index < endExclusive; ++index)
        currentList[index].DoTweenPosition(deltaTime);
    }

    private void ParallelDoTweenPositions(float dt)
    {
      TWParallel.For(0, this._widgetsWithTweenPositionsContainer.Count, dt, this.WidgetDoTweenPositionAuxPredicate);
    }

    private void TweenPositions(float dt)
    {
      if (this._widgetsWithTweenPositionsContainer.CheckFragmentation())
      {
        lock (this._widgetsWithTweenPositionsContainer)
          this._widgetsWithTweenPositionsContainer.DoDefragmentation();
      }
      if (this._widgetsWithTweenPositionsContainer.Count > 64)
      {
        this.ParallelDoTweenPositions(dt);
      }
      else
      {
        List<Widget> currentList = this._widgetsWithTweenPositionsContainer.GetCurrentList();
        for (int index = 0; index < currentList.Count; ++index)
          currentList[index].DoTweenPosition(dt);
      }
    }

    internal void CalculateCanvas(Vector2 pageSize, float dt)
    {
      if (this._measureDirty <= 0 && this._layoutDirty <= 0)
        return;
      this.PageSize = pageSize;
      Vec2 vec2 = new Vec2(pageSize.X / this.UsableArea.X, pageSize.Y / this.UsableArea.Y);
      double x1 = (double) vec2.X;
      double x2 = (double) vec2.X;
      Vec2 usableArea = this.UsableArea;
      double x3 = (double) usableArea.X;
      double num1 = x2 * x3;
      this.LeftUsableAreaStart = (float) ((x1 - num1) / 2.0);
      double y1 = (double) vec2.Y;
      double y2 = (double) vec2.Y;
      usableArea = this.UsableArea;
      double y3 = (double) usableArea.Y;
      double num2 = y2 * y3;
      this.TopUsableAreaStart = (float) ((y1 - num2) / 2.0);
      if (this._measureDirty > 0)
        this.MeasureAll();
      this.LayoutAll(this.LeftUsableAreaStart, this.PageSize.Y, this.PageSize.X, this.TopUsableAreaStart);
      this.TweenPositions(dt);
      this.UpdatePositions();
      if (this._measureDirty > 0)
        --this._measureDirty;
      if (this._layoutDirty > 0)
        --this._layoutDirty;
      this._positionsDirty = false;
    }

    internal void RecalculateCanvas()
    {
      if (this._measureDirty != 2 && this._layoutDirty != 2)
        return;
      if (this._measureDirty == 2)
        this.MeasureAll();
      this.LayoutAll(this.LeftUsableAreaStart, this.PageSize.Y, this.PageSize.X, this.TopUsableAreaStart);
      if (!this._positionsDirty)
        return;
      this.UpdatePositions();
      this._positionsDirty = false;
    }

    internal void MouseDown()
    {
      this._mouseIsDown = true;
      this._lastClickPosition = new Vector2((float) this.InputContext.GetPointerX(), (float) this.InputContext.GetPointerY());
      Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.MousePressed, this._lastClickPosition);
      if (positionForEvent == null)
        return;
      this.DispatchEvent(positionForEvent, GauntletEvent.MousePressed);
    }

    internal void MouseUp()
    {
      this._mouseIsDown = false;
      this.MousePosition = new Vector2((float) this.InputContext.GetPointerX(), (float) this.InputContext.GetPointerY());
      if (this.IsDragging)
      {
        if (this.DraggedWidget.PreviewEvent(GauntletEvent.DragEnd))
          this.DispatchEvent(this.DraggedWidget, GauntletEvent.DragEnd);
        Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.Drop, this.MousePosition);
        if (positionForEvent != null)
          this.DispatchEvent(positionForEvent, GauntletEvent.Drop);
        else
          this.CancelAndReturnDrag();
        if (this.DraggedWidget == null)
          return;
        this.ClearDragObject();
      }
      else
      {
        Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.MouseReleased, new Vector2((float) this.InputContext.GetPointerX(), (float) this.InputContext.GetPointerY()));
        this.DispatchEvent(positionForEvent, GauntletEvent.MouseReleased);
        this.LatestMouseUpWidget = positionForEvent;
      }
    }

    internal void MouseAlternateDown()
    {
      this._mouseAlternateIsDown = true;
      this._lastAlternateClickPosition = new Vector2((float) this.InputContext.GetPointerX(), (float) this.InputContext.GetPointerY());
      Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.MouseAlternatePressed, this._lastAlternateClickPosition);
      if (positionForEvent == null)
        return;
      this.DispatchEvent(positionForEvent, GauntletEvent.MouseAlternatePressed);
    }

    internal void MouseAlternateUp()
    {
      this._mouseAlternateIsDown = false;
      this.MousePosition = new Vector2((float) this.InputContext.GetPointerX(), (float) this.InputContext.GetPointerY());
      Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.MouseAlternateReleased, this._lastAlternateClickPosition);
      this.DispatchEvent(positionForEvent, GauntletEvent.MouseAlternateReleased);
      this.LatestMouseAlternateUpWidget = positionForEvent;
    }

    internal void MouseScroll()
    {
      if ((double) TaleWorlds.Library.MathF.Abs(this.DeltaMouseScroll) <= 1.0 / 1000.0)
        return;
      Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.MouseScroll, this.MousePosition);
      if (positionForEvent == null)
        return;
      this.DispatchEvent(positionForEvent, GauntletEvent.MouseScroll);
    }

    internal void RightStickMovement()
    {
      if ((double) Input.GetKeyState(InputKey.ControllerRStick).X == 0.0 && (double) Input.GetKeyState(InputKey.ControllerRStick).Y == 0.0)
        return;
      Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.RightStickMovement, this.MousePosition);
      if (positionForEvent == null)
        return;
      this.DispatchEvent(positionForEvent, GauntletEvent.RightStickMovement);
    }

    public void ClearFocus()
    {
      this.SetWidgetFocused((Widget) null);
      this.SetHoveredView((Widget) null);
    }

    private void CancelAndReturnDrag()
    {
      if (this._draggedWidgetPreviousParent != null)
      {
        this.DraggedWidget.ParentWidget = this._draggedWidgetPreviousParent;
        this.DraggedWidget.SetSiblingIndex(this._draggedWidgetIndex);
        this.DraggedWidget.PosOffset = new Vector2(0.0f, 0.0f);
        if (this.DraggedWidget.DragWidget != null)
        {
          this.DraggedWidget.DragWidget.ParentWidget = this.DraggedWidget;
          this.DraggedWidget.DragWidget.IsVisible = false;
        }
      }
      else
        this.ReleaseDraggedWidget();
      this._draggedWidgetPreviousParent = (Widget) null;
      this._draggedWidgetIndex = -1;
    }

    private void ClearDragObject()
    {
      this.DraggedWidget = (Widget) null;
      this._dragOffset = new Vector2(0.0f, 0.0f);
      this._dragCarrier.ParentWidget = (Widget) null;
      this._dragCarrier = (DragCarrierWidget) null;
    }

    internal void UpdateMousePosition(Vector2 mousePos) => this.MousePosition = mousePos;

    internal void MouseMove()
    {
      if (this._mouseIsDown)
      {
        if (this.IsDragging)
        {
          Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.DragHover, this.MousePosition);
          if (positionForEvent != null)
            this.DispatchEvent(positionForEvent, GauntletEvent.DragHover);
          else
            this.SetDragHoveredView((Widget) null);
        }
        else if (this.LatestMouseDownWidget != null)
        {
          if (this.LatestMouseDownWidget.PreviewEvent(GauntletEvent.MouseMove))
            this.DispatchEvent(this.LatestMouseDownWidget, GauntletEvent.MouseMove);
          if (!this.IsDragging && this.LatestMouseDownWidget.PreviewEvent(GauntletEvent.DragBegin))
          {
            Vector2 vector2 = this._lastClickPosition - this.MousePosition;
            if ((double) new Vector2(vector2.X, vector2.Y).LengthSquared() > 100.0 * (double) this.Context.Scale)
              this.DispatchEvent(this.LatestMouseDownWidget, GauntletEvent.DragBegin);
          }
        }
      }
      else if (!this._mouseAlternateIsDown)
      {
        Widget positionForEvent = this.GetWidgetAtPositionForEvent(GauntletEvent.MouseMove, this.MousePosition);
        if (positionForEvent != null)
          this.DispatchEvent(positionForEvent, GauntletEvent.MouseMove);
      }
      List<Widget> second = new List<Widget>();
      foreach (Widget widget in EventManager.AllVisibleWidgetsAt(this.Root, this.MousePosition))
      {
        if (!this.MouseOveredViews.Contains(widget))
        {
          widget.OnMouseOverBegin();
          GauntletGamepadNavigationManager.Instance?.OnWidgetHoverBegin(widget);
        }
        second.Add(widget);
      }
      foreach (Widget widget in this.MouseOveredViews.Except<Widget>((IEnumerable<Widget>) second))
      {
        widget.OnMouseOverEnd();
        if (widget.GamepadNavigationIndex != -1)
          GauntletGamepadNavigationManager.Instance?.OnWidgetHoverEnd(widget);
      }
      this.MouseOveredViews = second;
    }

    private static bool IsPointInsideMeasuredArea(Widget w, Vector2 p)
    {
      return w.IsPointInsideMeasuredArea(p);
    }

    private Widget GetWidgetAtPositionForEvent(GauntletEvent gauntletEvent, Vector2 pointerPosition)
    {
      Widget positionForEvent = (Widget) null;
      foreach (Widget widget in EventManager.AllEnabledWidgetsAt(this.Root, pointerPosition))
      {
        if (widget.PreviewEvent(gauntletEvent))
        {
          positionForEvent = widget;
          break;
        }
      }
      return positionForEvent;
    }

    public event Action LoseFocus;

    public event Action GainFocus;

    private void DispatchEvent(Widget selectedWidget, GauntletEvent gauntletEvent)
    {
      if (gauntletEvent != GauntletEvent.MouseReleased)
        ;
      switch (gauntletEvent)
      {
        case GauntletEvent.MouseMove:
          selectedWidget.OnMouseMove();
          this.SetHoveredView(selectedWidget);
          break;
        case GauntletEvent.MousePressed:
          this.LatestMouseDownWidget = selectedWidget;
          selectedWidget.OnMousePressed();
          if (this.FocusedWidget == selectedWidget)
            break;
          if (this.FocusedWidget != null)
          {
            this.FocusedWidget.OnLoseFocus();
            Action loseFocus = this.LoseFocus;
            if (loseFocus != null)
              loseFocus();
          }
          if (selectedWidget.IsFocusable)
          {
            selectedWidget.OnGainFocus();
            this.FocusedWidget = selectedWidget;
            Action gainFocus = this.GainFocus;
            if (gainFocus != null)
              gainFocus();
          }
          else
            this.FocusedWidget = (Widget) null;
          if (!(selectedWidget is EditableTextWidget editableTextWidget1) || !this.IsControllerActive)
            break;
          string initialText1 = editableTextWidget1.Text ?? string.Empty;
          string descriptionText1 = editableTextWidget1.KeyboardInfoText ?? string.Empty;
          int maxLength1 = editableTextWidget1.MaxLength;
          int keyboardTypeEnum1 = editableTextWidget1.IsObfuscationEnabled ? 2 : 0;
          if (this.FocusedWidget is IntegerInputTextWidget || this.FocusedWidget is FloatInputTextWidget)
            keyboardTypeEnum1 = 1;
          this.Context.TwoDimensionContext.Platform.OpenOnScreenKeyboard(initialText1, descriptionText1, maxLength1, keyboardTypeEnum1);
          break;
        case GauntletEvent.MouseReleased:
          if (this.LatestMouseDownWidget != null && this.LatestMouseDownWidget != selectedWidget)
            this.LatestMouseDownWidget.OnMouseReleased();
          selectedWidget?.OnMouseReleased();
          break;
        case GauntletEvent.MouseAlternatePressed:
          this.LatestMouseAlternateDownWidget = selectedWidget;
          selectedWidget.OnMouseAlternatePressed();
          if (this.FocusedWidget == selectedWidget)
            break;
          if (this.FocusedWidget != null)
          {
            this.FocusedWidget.OnLoseFocus();
            Action loseFocus = this.LoseFocus;
            if (loseFocus != null)
              loseFocus();
          }
          if (selectedWidget.IsFocusable)
          {
            selectedWidget.OnGainFocus();
            this.FocusedWidget = selectedWidget;
            Action gainFocus = this.GainFocus;
            if (gainFocus != null)
              gainFocus();
          }
          else
            this.FocusedWidget = (Widget) null;
          if (!(selectedWidget is EditableTextWidget editableTextWidget2) || !this.IsControllerActive)
            break;
          string initialText2 = editableTextWidget2.Text ?? string.Empty;
          string descriptionText2 = editableTextWidget2.KeyboardInfoText ?? string.Empty;
          int maxLength2 = editableTextWidget2.MaxLength;
          int keyboardTypeEnum2 = editableTextWidget2.IsObfuscationEnabled ? 2 : 0;
          if (this.FocusedWidget is IntegerInputTextWidget || this.FocusedWidget is FloatInputTextWidget)
            keyboardTypeEnum2 = 1;
          this.Context.TwoDimensionContext.Platform.OpenOnScreenKeyboard(initialText2, descriptionText2, maxLength2, keyboardTypeEnum2);
          break;
        case GauntletEvent.MouseAlternateReleased:
          if (this.LatestMouseAlternateDownWidget != null && this.LatestMouseAlternateDownWidget != selectedWidget)
            this.LatestMouseAlternateDownWidget.OnMouseAlternateReleased();
          selectedWidget?.OnMouseAlternateReleased();
          break;
        case GauntletEvent.DragHover:
          this.SetDragHoveredView(selectedWidget);
          break;
        case GauntletEvent.DragBegin:
          selectedWidget.OnDragBegin();
          break;
        case GauntletEvent.DragEnd:
          selectedWidget.OnDragEnd();
          break;
        case GauntletEvent.Drop:
          selectedWidget.OnDrop();
          break;
        case GauntletEvent.MouseScroll:
          selectedWidget.OnMouseScroll();
          break;
        case GauntletEvent.RightStickMovement:
          selectedWidget.OnRightStickMovement();
          break;
      }
    }

    public static bool HitTest(Widget widget, Vector2 position)
    {
      return EventManager.AnyWidgetsAt(widget, position);
    }

    public bool FocusTest(Widget root)
    {
      for (Widget widget = this.FocusedWidget; widget != null; widget = widget.ParentWidget)
      {
        if (root == widget)
          return true;
      }
      return false;
    }

    private static bool AnyWidgetsAt(Widget widget, Vector2 position)
    {
      if (widget.IsEnabled && widget.IsVisible)
      {
        if (!widget.DoNotAcceptEvents && EventManager.IsPointInsideMeasuredArea(widget, position))
          return true;
        if (!widget.DoNotPassEventsToChildren)
        {
          for (int i = widget.ChildCount - 1; i >= 0; --i)
          {
            Widget child = widget.GetChild(i);
            if (!child.IsHidden && !child.IsDisabled && EventManager.AnyWidgetsAt(child, position))
              return true;
          }
        }
      }
      return false;
    }

    private static IEnumerable<Widget> AllEnabledWidgetsAt(Widget widget, Vector2 position)
    {
      if (widget.IsEnabled && widget.IsVisible)
      {
        if (!widget.DoNotPassEventsToChildren)
        {
          for (int i = widget.ChildCount - 1; i >= 0; --i)
          {
            Widget child = widget.GetChild(i);
            if (!child.IsHidden && !child.IsDisabled && EventManager.IsPointInsideMeasuredArea(child, position))
            {
              foreach (Widget widget1 in EventManager.AllEnabledWidgetsAt(child, position))
                yield return widget1;
            }
          }
        }
        if (!widget.DoNotAcceptEvents && EventManager.IsPointInsideMeasuredArea(widget, position))
          yield return widget;
      }
    }

    private static IEnumerable<Widget> AllVisibleWidgetsAt(Widget widget, Vector2 position)
    {
      if (widget.IsVisible)
      {
        for (int i = widget.ChildCount - 1; i >= 0; --i)
        {
          Widget child = widget.GetChild(i);
          if (child.IsVisible && EventManager.IsPointInsideMeasuredArea(child, position))
          {
            foreach (Widget widget1 in EventManager.AllVisibleWidgetsAt(child, position))
              yield return widget1;
          }
        }
        if (EventManager.IsPointInsideMeasuredArea(widget, position))
          yield return widget;
      }
    }

    internal void ManualAddRange(List<Widget> list, LinkedList<Widget> linked_list)
    {
      if (list.Capacity < linked_list.Count)
        list.Capacity = linked_list.Count;
      for (LinkedListNode<Widget> linkedListNode = linked_list.First; linkedListNode != null; linkedListNode = linkedListNode.Next)
        list.Add(linkedListNode.Value);
    }

    private void ParallelUpdateWidget(int startInclusive, int endExclusive, float dt)
    {
      List<Widget> currentList = this._widgetsWithParallelUpdateContainer.GetCurrentList();
      for (int index = startInclusive; index < endExclusive; ++index)
        currentList[index].ParallelUpdate(dt);
    }

    internal void ParallelUpdateWidgets(float dt)
    {
      TWParallel.For(0, this._widgetsWithParallelUpdateContainer.Count, dt, this.ParallelUpdateWidgetPredicate);
    }

    internal void Update(float dt)
    {
      this.Time += dt;
      this.CachedDt = dt;
      this.IsControllerActive = Input.IsControllerConnected && !Input.IsMouseActive;
      int num = TaleWorlds.Library.MathF.Max(this._widgetsWithUpdateBrushesContainer.RealCount, TaleWorlds.Library.MathF.Max(this._widgetsWithUpdateContainer.RealCount, TaleWorlds.Library.MathF.Max(this._widgetsWithParallelUpdateContainer.RealCount, this._widgetsWithLateUpdateContainer.RealCount)));
      if (this._widgetsWithUpdateContainerDoDefragmentationDelegate == null)
      {
        this._widgetsWithUpdateContainerDoDefragmentationDelegate = (Action) (() =>
        {
          lock (this._widgetsWithUpdateContainer)
            this._widgetsWithUpdateContainer.DoDefragmentation();
        });
        this._widgetsWithParallelUpdateContainerDoDefragmentationDelegate = (Action) (() =>
        {
          lock (this._widgetsWithParallelUpdateContainer)
            this._widgetsWithParallelUpdateContainer.DoDefragmentation();
        });
        this._widgetsWithLateUpdateContainerDoDefragmentationDelegate = (Action) (() =>
        {
          lock (this._widgetsWithLateUpdateContainer)
            this._widgetsWithLateUpdateContainer.DoDefragmentation();
        });
        this._widgetsWithUpdateBrushesContainerDoDefragmentationDelegate = (Action) (() =>
        {
          lock (this._widgetsWithUpdateBrushesContainer)
            this._widgetsWithUpdateBrushesContainer.DoDefragmentation();
        });
      }
      bool flag = this._widgetsWithUpdateContainer.CheckFragmentation() || this._widgetsWithParallelUpdateContainer.CheckFragmentation() || this._widgetsWithLateUpdateContainer.CheckFragmentation() || this._widgetsWithUpdateBrushesContainer.CheckFragmentation();
      Task task1 = (Task) null;
      Task task2 = (Task) null;
      Task task3 = (Task) null;
      Task task4 = (Task) null;
      if (flag && num > 64)
      {
        task1 = Task.Run(this._widgetsWithUpdateContainerDoDefragmentationDelegate);
        task2 = Task.Run(this._widgetsWithParallelUpdateContainerDoDefragmentationDelegate);
        task3 = Task.Run(this._widgetsWithLateUpdateContainerDoDefragmentationDelegate);
        task4 = Task.Run(this._widgetsWithUpdateBrushesContainerDoDefragmentationDelegate);
      }
      this.UpdateDragCarrier();
      if (this._widgetsWithVisualDefinitionsContainer.CheckFragmentation())
      {
        lock (this._widgetsWithVisualDefinitionsContainer)
          this._widgetsWithVisualDefinitionsContainer.DoDefragmentation();
      }
      List<Widget> currentList1 = this._widgetsWithVisualDefinitionsContainer.GetCurrentList();
      for (int index = 0; index < currentList1.Count; ++index)
        currentList1[index].UpdateVisualDefinitions(dt);
      if (flag)
      {
        if (num > 64)
        {
          Task.WaitAll(task1, task2, task3, task4);
        }
        else
        {
          this._widgetsWithUpdateContainerDoDefragmentationDelegate();
          this._widgetsWithParallelUpdateContainerDoDefragmentationDelegate();
          this._widgetsWithLateUpdateContainerDoDefragmentationDelegate();
          this._widgetsWithUpdateBrushesContainerDoDefragmentationDelegate();
        }
      }
      this.Context.ActiveCursorOfContext = this.HoveredView?.HoveredCursorState != null ? (UIContext.MouseCursors) Enum.Parse(typeof (UIContext.MouseCursors), this.HoveredView.HoveredCursorState) : UIContext.MouseCursors.Default;
      List<Widget> currentList2 = this._widgetsWithUpdateContainer.GetCurrentList();
      for (int index = 0; index < currentList2.Count; ++index)
        currentList2[index].Update(dt);
      this._doingParallelTask = true;
      if (this._widgetsWithParallelUpdateContainer.Count > 64)
      {
        this.ParallelUpdateWidgets(dt);
      }
      else
      {
        List<Widget> currentList3 = this._widgetsWithParallelUpdateContainer.GetCurrentList();
        for (int index = 0; index < currentList3.Count; ++index)
          currentList3[index].ParallelUpdate(dt);
      }
      this._doingParallelTask = false;
    }

    internal void UpdateBrushes(float dt)
    {
      if (this._widgetsWithUpdateBrushesContainer.Count > 64)
      {
        TWParallel.For(0, this._widgetsWithUpdateBrushesContainer.Count, dt, this.UpdateBrushesWidgetPredicate);
      }
      else
      {
        List<Widget> currentList = this._widgetsWithUpdateBrushesContainer.GetCurrentList();
        for (int index = 0; index < currentList.Count; ++index)
          currentList[index].UpdateBrushes(dt);
      }
    }

    private void UpdateBrushesWidget(int startInclusive, int endExclusive, float dt)
    {
      List<Widget> currentList = this._widgetsWithUpdateBrushesContainer.GetCurrentList();
      for (int index = startInclusive; index < endExclusive; ++index)
        currentList[index].UpdateBrushes(dt);
    }

    public void AddLateUpdateAction(Widget owner, Action<float> action, int order)
    {
      UpdateAction updateAction = new UpdateAction();
      updateAction.Target = owner;
      updateAction.Action = action;
      updateAction.Order = order;
      if (this._doingParallelTask)
      {
        lock (this._lateUpdateActionLocker)
          this._lateUpdateActions[order].Add(updateAction);
      }
      else
        this._lateUpdateActions[order].Add(updateAction);
    }

    internal void LateUpdate(float dt)
    {
      List<Widget> currentList = this._widgetsWithLateUpdateContainer.GetCurrentList();
      for (int index = 0; index < currentList.Count; ++index)
        currentList[index].LateUpdate(dt);
      Dictionary<int, List<UpdateAction>> lateUpdateActions = this._lateUpdateActions;
      this._lateUpdateActions = this._lateUpdateActionsRunning;
      this._lateUpdateActionsRunning = lateUpdateActions;
      for (int key = 1; key <= 5; ++key)
      {
        List<UpdateAction> updateActionList = this._lateUpdateActionsRunning[key];
        foreach (UpdateAction updateAction in updateActionList)
          updateAction.Action(dt);
        updateActionList.Clear();
      }
      if (!this.IsControllerActive)
        return;
      if (this.HoveredView != null && this.HoveredView.IsRecursivelyVisible())
      {
        this._lastSetFrictionValue = !this.HoveredView.FrictionEnabled || this.DraggedWidget != null ? 1f : 0.45f;
        Input.SetCursorFriction(this._lastSetFrictionValue);
      }
      if (this._lastSetFrictionValue.ApproximatelyEqualsTo(1f) || this.HoveredView != null)
        return;
      this._lastSetFrictionValue = 1f;
      Input.SetCursorFriction(this._lastSetFrictionValue);
    }

    public void SetWidgetFocused(Widget widget, bool fromClick = false)
    {
      if (this.FocusedWidget == widget)
        return;
      this.FocusedWidget?.OnLoseFocus();
      widget?.OnGainFocus();
      this.FocusedWidget = widget;
      if (!(this.FocusedWidget is EditableTextWidget focusedWidget) || !this.IsControllerActive)
        return;
      string initialText = focusedWidget.Text ?? string.Empty;
      string descriptionText = focusedWidget.KeyboardInfoText ?? string.Empty;
      int maxLength = focusedWidget.MaxLength;
      int keyboardTypeEnum = focusedWidget.IsObfuscationEnabled ? 2 : 0;
      if (this.FocusedWidget is IntegerInputTextWidget || this.FocusedWidget is FloatInputTextWidget)
        keyboardTypeEnum = 1;
      this.Context.TwoDimensionContext.Platform.OpenOnScreenKeyboard(initialText, descriptionText, maxLength, keyboardTypeEnum);
    }

    private void UpdateDragCarrier()
    {
      if (this._dragCarrier == null)
        return;
      this._dragCarrier.PosOffset = this.MousePositionInReferenceResolution + this._dragOffset - new Vector2(this.LeftUsableAreaStart, this.TopUsableAreaStart) * this.Context.InverseScale;
    }

    public void SetHoveredView(Widget view)
    {
      if (this.HoveredView == view)
        return;
      if (this.HoveredView != null)
        this.HoveredView.OnHoverEnd();
      this.HoveredView = view;
      if (this.HoveredView == null)
        return;
      this.HoveredView.OnHoverBegin();
    }

    internal bool SetDragHoveredView(Widget view)
    {
      if (this.DragHoveredView != view && this.DragHoveredView != null)
        this.DragHoveredView.OnDragHoverEnd();
      this.DragHoveredView = view;
      if (this.DragHoveredView != null && this.DragHoveredView.AcceptDrop)
      {
        this.DragHoveredView.OnDragHoverBegin();
        return true;
      }
      this.DragHoveredView = (Widget) null;
      return false;
    }

    internal void BeginDragging(Widget draggedObject)
    {
      draggedObject.IsPressed = false;
      this._draggedWidgetPreviousParent = (Widget) null;
      this._draggedWidgetIndex = -1;
      Widget parentWidget = draggedObject.ParentWidget;
      this.DraggedWidget = draggedObject;
      Vector2 globalPosition = this.DraggedWidget.GlobalPosition;
      this._dragCarrier = new DragCarrierWidget(this.Context);
      this._dragCarrier.ParentWidget = this.Root;
      if (draggedObject.DragWidget != null)
      {
        Widget dragWidget = draggedObject.DragWidget;
        this._dragCarrier.WidthSizePolicy = SizePolicy.CoverChildren;
        this._dragCarrier.HeightSizePolicy = SizePolicy.CoverChildren;
        this._dragOffset = Vector2.Zero;
        dragWidget.IsVisible = true;
        dragWidget.ParentWidget = (Widget) this._dragCarrier;
        if (this.DraggedWidget.HideOnDrag)
          this.DraggedWidget.IsVisible = false;
        this._draggedWidgetPreviousParent = (Widget) null;
      }
      else
      {
        this._dragOffset = (globalPosition - this.MousePosition) * this.Context.InverseScale;
        this._dragCarrier.WidthSizePolicy = SizePolicy.Fixed;
        this._dragCarrier.HeightSizePolicy = SizePolicy.Fixed;
        if (this.DraggedWidget.WidthSizePolicy == SizePolicy.StretchToParent)
        {
          this._dragCarrier.ScaledSuggestedWidth = this.DraggedWidget.Size.X + (this.DraggedWidget.MarginRight + this.DraggedWidget.MarginLeft) * this.Context.Scale;
          this._dragOffset += new Vector2(-this.DraggedWidget.MarginLeft, 0.0f);
        }
        else
          this._dragCarrier.ScaledSuggestedWidth = this.DraggedWidget.Size.X;
        if (this.DraggedWidget.HeightSizePolicy == SizePolicy.StretchToParent)
        {
          this._dragCarrier.ScaledSuggestedHeight = this.DraggedWidget.Size.Y + (this.DraggedWidget.MarginTop + this.DraggedWidget.MarginBottom) * this.Context.Scale;
          this._dragOffset += new Vector2(0.0f, -this.DraggedWidget.MarginTop);
        }
        else
          this._dragCarrier.ScaledSuggestedHeight = this.DraggedWidget.Size.Y;
        if (parentWidget != null)
        {
          this._draggedWidgetPreviousParent = parentWidget;
          this._draggedWidgetIndex = draggedObject.GetSiblingIndex();
        }
        this.DraggedWidget.ParentWidget = (Widget) this._dragCarrier;
      }
      this._dragCarrier.PosOffset = this.MousePositionInReferenceResolution + this._dragOffset - new Vector2(this.LeftUsableAreaStart, this.TopUsableAreaStart) * this.Context.InverseScale;
    }

    internal Widget ReleaseDraggedWidget()
    {
      Widget draggedWidget = this.DraggedWidget;
      if (this._draggedWidgetPreviousParent != null)
      {
        this.DraggedWidget.ParentWidget = this._draggedWidgetPreviousParent;
        this._draggedWidgetIndex = TaleWorlds.Library.MathF.Max(0, TaleWorlds.Library.MathF.Min(TaleWorlds.Library.MathF.Max(0, this.DraggedWidget.ParentWidget.ChildCount - 1), this._draggedWidgetIndex));
        this.DraggedWidget.SetSiblingIndex(this._draggedWidgetIndex);
      }
      else
        this.DraggedWidget.IsVisible = true;
      this.SetDragHoveredView((Widget) null);
      return draggedWidget;
    }

    internal void Render(TwoDimensionContext twoDimensionContext)
    {
      this._drawContext.Reset();
      this.Root.Render(twoDimensionContext, this._drawContext);
      this._drawContext.DrawTo(twoDimensionContext);
    }

    public void UpdateLayout()
    {
      this.SetMeasureDirty();
      this.SetLayoutDirty();
    }

    internal void SetMeasureDirty() => this._measureDirty = 2;

    internal void SetLayoutDirty() => this._layoutDirty = 2;

    internal void SetPositionsDirty() => this._positionsDirty = true;

    public bool GetIsHitThisFrame() => this.OnGetIsHitThisFrame();
  }
}
