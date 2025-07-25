// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.Widget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using TaleWorlds.GauntletUI.GamepadNavigation;
using TaleWorlds.GauntletUI.Layout;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class Widget : PropertyOwnerObject
  {
    private Color _color = Color.White;
    private string _id;
    protected Vector2 _cachedGlobalPosition;
    private Widget _parent;
    private List<Widget> _children;
    private bool _doNotUseCustomScaleAndChildren;
    protected bool _calculateSizeFirstFrame = true;
    private float _suggestedWidth;
    private float _suggestedHeight;
    private bool _tweenPosition;
    private string _hoveredCursorState;
    private bool _alternateClickEventHasSpecialEvent;
    private Vector2 _positionOffset;
    private float _marginTop;
    private float _marginLeft;
    private float _marginBottom;
    private float _marginRight;
    private VerticalAlignment _verticalAlignment;
    private HorizontalAlignment _horizontalAlignment;
    private Vector2 _topLeft;
    private bool _forcePixelPerfectRenderPlacement;
    private SizePolicy _widthSizePolicy;
    private SizePolicy _heightSizePolicy;
    private Widget _dragWidget;
    private bool _isHovered;
    private bool _isDisabled;
    private bool _isFocusable;
    private bool _isFocused;
    private bool _restartAnimationFirstFrame;
    private bool _doNotPassEventsToChildren;
    private bool _doNotAcceptEvents;
    public Func<Widget, Widget, bool> AcceptDropHandler;
    private bool _isPressed;
    private bool _isHidden;
    private Sprite _sprite;
    private VisualDefinition _visualDefinition;
    private List<string> _states;
    protected float _stateTimer;
    protected VisualState _startVisualState;
    protected VisualStateAnimationState _currentVisualStateAnimationState;
    private bool _updateChildrenStates;
    protected int _seed;
    private bool _seedSet;
    private float _maxWidth;
    private float _maxHeight;
    private float _minWidth;
    private float _minHeight;
    private bool _gotMaxWidth;
    private bool _gotMaxHeight;
    private bool _gotMinWidth;
    private bool _gotMinHeight;
    private List<WidgetComponent> _components;
    private List<Action<Widget, string, object[]>> _eventTargets;
    private bool _doNotAcceptNavigation;
    private bool _isUsingNavigation;
    private bool _useSiblingIndexForNavigation;
    protected internal int _gamepadNavigationIndex = -1;
    private GamepadNavigationTypes _usedNavigationMovements;
    public Action<Widget> OnGamepadNavigationFocusGained;

    public float ColorFactor { get; set; } = 1f;

    public float AlphaFactor { get; set; } = 1f;

    public float ValueFactor { get; set; }

    public float SaturationFactor { get; set; }

    public float ExtendLeft { get; set; }

    public float ExtendRight { get; set; }

    public float ExtendTop { get; set; }

    public float ExtendBottom { get; set; }

    public bool VerticalFlip { get; set; }

    public bool HorizontalFlip { get; set; }

    public bool FrictionEnabled { get; set; }

    public Color Color
    {
      get => this._color;
      set
      {
        if (!(this._color != value))
          return;
        this._color = value;
      }
    }

    [Editor(false)]
    public string Id
    {
      get => this._id;
      set
      {
        if (!(this._id != value))
          return;
        this._id = value;
        this.OnPropertyChanged<string>(value, nameof (Id));
      }
    }

    public Vector2 LocalPosition { get; private set; }

    public Vector2 GlobalPosition
    {
      get
      {
        return this.ParentWidget != null ? this.LocalPosition + this.ParentWidget.GlobalPosition : this.LocalPosition;
      }
    }

    [Editor(false)]
    public bool DoNotUseCustomScaleAndChildren
    {
      get => this._doNotUseCustomScaleAndChildren;
      set
      {
        if (this._doNotUseCustomScaleAndChildren == value)
          return;
        this._doNotUseCustomScaleAndChildren = value;
        this.OnPropertyChanged(value, nameof (DoNotUseCustomScaleAndChildren));
        this.DoNotUseCustomScale = value;
        this._children.ForEach((Action<Widget>) (_ => _.DoNotUseCustomScaleAndChildren = value));
      }
    }

    public bool DoNotUseCustomScale { get; set; }

    protected float _scaleToUse
    {
      get => !this.DoNotUseCustomScale ? this.Context.CustomScale : this.Context.Scale;
    }

    protected float _inverseScaleToUse
    {
      get
      {
        return !this.DoNotUseCustomScale ? this.Context.CustomInverseScale : this.Context.InverseScale;
      }
    }

    public Vector2 Size { get; private set; }

    [Editor(false)]
    public float SuggestedWidth
    {
      get => this._suggestedWidth;
      set
      {
        if ((double) this._suggestedWidth == (double) value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._suggestedWidth = value;
        this.OnPropertyChanged(value, nameof (SuggestedWidth));
      }
    }

    [Editor(false)]
    public float SuggestedHeight
    {
      get => this._suggestedHeight;
      set
      {
        if ((double) this._suggestedHeight == (double) value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._suggestedHeight = value;
        this.OnPropertyChanged(value, nameof (SuggestedHeight));
      }
    }

    public float ScaledSuggestedWidth
    {
      get => this._scaleToUse * this.SuggestedWidth;
      set => this.SuggestedWidth = value * this._inverseScaleToUse;
    }

    public float ScaledSuggestedHeight
    {
      get => this._scaleToUse * this.SuggestedHeight;
      set => this.SuggestedHeight = value * this._inverseScaleToUse;
    }

    [Editor(false)]
    public bool TweenPosition
    {
      get => this._tweenPosition;
      set
      {
        if (this._tweenPosition == value)
          return;
        bool tweenPosition = this._tweenPosition;
        this._tweenPosition = value;
        if (!this.ConnectedToRoot || tweenPosition && this._tweenPosition)
          return;
        this.EventManager.OnWidgetTweenPositionChanged(this);
      }
    }

    [Editor(false)]
    public string HoveredCursorState
    {
      get => this._hoveredCursorState;
      set
      {
        if (!(this._hoveredCursorState != value))
          return;
        string hoveredCursorState = this._hoveredCursorState;
        this._hoveredCursorState = value;
      }
    }

    [Editor(false)]
    public bool AlternateClickEventHasSpecialEvent
    {
      get => this._alternateClickEventHasSpecialEvent;
      set
      {
        if (this._alternateClickEventHasSpecialEvent == value)
          return;
        int num = this._alternateClickEventHasSpecialEvent ? 1 : 0;
        this._alternateClickEventHasSpecialEvent = value;
      }
    }

    public Vector2 PosOffset
    {
      get => this._positionOffset;
      set
      {
        if (!(this._positionOffset != value))
          return;
        this.SetLayoutDirty();
        this._positionOffset = value;
        this.OnPropertyChanged(value, nameof (PosOffset));
      }
    }

    public Vector2 ScaledPositionOffset => this._positionOffset * this._scaleToUse;

    [Editor(false)]
    public float PositionXOffset
    {
      get => this._positionOffset.X;
      set
      {
        if ((double) this._positionOffset.X == (double) value)
          return;
        this.SetLayoutDirty();
        this._positionOffset.X = value;
        this.OnPropertyChanged(value, nameof (PositionXOffset));
      }
    }

    [Editor(false)]
    public float PositionYOffset
    {
      get => this._positionOffset.Y;
      set
      {
        if ((double) this._positionOffset.Y == (double) value)
          return;
        this.SetLayoutDirty();
        this._positionOffset.Y = value;
        this.OnPropertyChanged(value, nameof (PositionYOffset));
      }
    }

    public float ScaledPositionXOffset
    {
      get => this._positionOffset.X * this._scaleToUse;
      set
      {
        float num = value * this._inverseScaleToUse;
        if ((double) num == (double) this._positionOffset.X)
          return;
        this.SetLayoutDirty();
        this._positionOffset.X = num;
      }
    }

    public float ScaledPositionYOffset
    {
      get => this._positionOffset.Y * this._scaleToUse;
      set
      {
        float num = value * this._inverseScaleToUse;
        if ((double) num == (double) this._positionOffset.Y)
          return;
        this.SetLayoutDirty();
        this._positionOffset.Y = num;
      }
    }

    public Widget ParentWidget
    {
      get => this._parent;
      set
      {
        if (this.ParentWidget == value)
          return;
        if (this._parent != null)
        {
          this._parent.OnChildRemoved(this);
          if (this.ConnectedToRoot)
            this.EventManager.OnWidgetDisconnectedFromRoot(this);
          this._parent._children.Remove(this);
          this._parent.OnAfterChildRemoved(this);
        }
        this._parent = value;
        if (this._parent != null)
        {
          this._parent._children.Add(this);
          if (this.ConnectedToRoot)
            this.EventManager.OnWidgetConnectedToRoot(this);
          this._parent.OnChildAdded(this);
        }
        this.SetMeasureAndLayoutDirty();
      }
    }

    public EventManager EventManager => this.Context.EventManager;

    public IGamepadNavigationContext GamepadNavigationContext => this.Context.GamepadNavigation;

    public UIContext Context { get; private set; }

    public Vector2 MeasuredSize { get; private set; }

    [Editor(false)]
    public float MarginTop
    {
      get => this._marginTop;
      set
      {
        if ((double) this._marginTop == (double) value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._marginTop = value;
        this.OnPropertyChanged(value, nameof (MarginTop));
      }
    }

    [Editor(false)]
    public float MarginLeft
    {
      get => this._marginLeft;
      set
      {
        if ((double) this._marginLeft == (double) value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._marginLeft = value;
        this.OnPropertyChanged(value, nameof (MarginLeft));
      }
    }

    [Editor(false)]
    public float MarginBottom
    {
      get => this._marginBottom;
      set
      {
        if ((double) this._marginBottom == (double) value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._marginBottom = value;
        this.OnPropertyChanged(value, nameof (MarginBottom));
      }
    }

    [Editor(false)]
    public float MarginRight
    {
      get => this._marginRight;
      set
      {
        if ((double) this._marginRight == (double) value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._marginRight = value;
        this.OnPropertyChanged(value, nameof (MarginRight));
      }
    }

    public float ScaledMarginTop => this._scaleToUse * this.MarginTop;

    public float ScaledMarginLeft => this._scaleToUse * this.MarginLeft;

    public float ScaledMarginBottom => this._scaleToUse * this.MarginBottom;

    public float ScaledMarginRight => this._scaleToUse * this.MarginRight;

    [Editor(false)]
    public VerticalAlignment VerticalAlignment
    {
      get => this._verticalAlignment;
      set
      {
        if (this._verticalAlignment == value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._verticalAlignment = value;
        this.OnPropertyChanged<string>(Enum.GetName(typeof (VerticalAlignment), (object) value), nameof (VerticalAlignment));
      }
    }

    [Editor(false)]
    public HorizontalAlignment HorizontalAlignment
    {
      get => this._horizontalAlignment;
      set
      {
        if (this._horizontalAlignment == value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._horizontalAlignment = value;
        this.OnPropertyChanged<string>(Enum.GetName(typeof (HorizontalAlignment), (object) value), nameof (HorizontalAlignment));
      }
    }

    public float Left
    {
      get => this._topLeft.X;
      private set
      {
        if ((double) value == (double) this._topLeft.X)
          return;
        this.EventManager.SetPositionsDirty();
        this._topLeft.X = value;
      }
    }

    public float Top
    {
      get => this._topLeft.Y;
      private set
      {
        if ((double) value == (double) this._topLeft.Y)
          return;
        this.EventManager.SetPositionsDirty();
        this._topLeft.Y = value;
      }
    }

    public float Right => this._topLeft.X + this.Size.X;

    public float Bottom => this._topLeft.Y + this.Size.Y;

    public int ChildCount => this._children.Count;

    [Editor(false)]
    public bool ForcePixelPerfectRenderPlacement
    {
      get => this._forcePixelPerfectRenderPlacement;
      set
      {
        if (this._forcePixelPerfectRenderPlacement == value)
          return;
        this._forcePixelPerfectRenderPlacement = value;
        this.OnPropertyChanged(value, nameof (ForcePixelPerfectRenderPlacement));
      }
    }

    public bool UseGlobalTimeForAnimation { get; set; }

    [Editor(false)]
    public SizePolicy WidthSizePolicy
    {
      get => this._widthSizePolicy;
      set
      {
        if (value == this._widthSizePolicy)
          return;
        this.SetMeasureAndLayoutDirty();
        this._widthSizePolicy = value;
      }
    }

    [Editor(false)]
    public SizePolicy HeightSizePolicy
    {
      get => this._heightSizePolicy;
      set
      {
        if (value == this._heightSizePolicy)
          return;
        this.SetMeasureAndLayoutDirty();
        this._heightSizePolicy = value;
      }
    }

    [Editor(false)]
    public bool AcceptDrag { get; set; }

    [Editor(false)]
    public bool AcceptDrop { get; set; }

    [Editor(false)]
    public bool HideOnDrag { get; set; } = true;

    [Editor(false)]
    public Widget DragWidget
    {
      get => this._dragWidget;
      set
      {
        if (this._dragWidget == value)
          return;
        if (value != null)
        {
          this._dragWidget = value;
          this._dragWidget.IsVisible = false;
        }
        else
          this._dragWidget = (Widget) null;
      }
    }

    [Editor(false)]
    public bool ClipContents
    {
      get => this.ClipVerticalContent && this.ClipHorizontalContent;
      set
      {
        this.ClipHorizontalContent = value;
        this.ClipVerticalContent = value;
      }
    }

    [Editor(false)]
    public bool ClipHorizontalContent { get; set; }

    [Editor(false)]
    public bool ClipVerticalContent { get; set; }

    [Editor(false)]
    public bool CircularClipEnabled { get; set; }

    [Editor(false)]
    public float CircularClipRadius { get; set; }

    [Editor(false)]
    public bool IsCircularClipRadiusHalfOfWidth { get; set; }

    [Editor(false)]
    public bool IsCircularClipRadiusHalfOfHeight { get; set; }

    [Editor(false)]
    public float CircularClipSmoothingRadius { get; set; }

    [Editor(false)]
    public float CircularClipXOffset { get; set; }

    [Editor(false)]
    public float CircularClipYOffset { get; set; }

    [Editor(false)]
    public bool RenderLate { get; set; }

    [Editor(false)]
    public bool DoNotRenderIfNotFullyInsideScissor { get; set; }

    public bool FixedWidth => this.WidthSizePolicy == SizePolicy.Fixed;

    public bool FixedHeight => this.HeightSizePolicy == SizePolicy.Fixed;

    public bool IsHovered
    {
      get => this._isHovered;
      private set
      {
        if (this._isHovered == value)
          return;
        this._isHovered = value;
        this.RefreshState();
        this.OnPropertyChanged(value, nameof (IsHovered));
      }
    }

    [Editor(false)]
    public bool IsDisabled
    {
      get => this._isDisabled;
      set
      {
        if (this._isDisabled == value)
          return;
        this._isDisabled = value;
        this.OnPropertyChanged(value, nameof (IsDisabled));
        this.RefreshState();
      }
    }

    [Editor(false)]
    public bool IsFocusable
    {
      get => this._isFocusable;
      set
      {
        if (this._isFocusable == value)
          return;
        this._isFocusable = value;
        if (!this.ConnectedToRoot)
          return;
        this.OnPropertyChanged(value, nameof (IsFocusable));
        this.RefreshState();
      }
    }

    public bool IsFocused
    {
      get => this._isFocused;
      private set
      {
        if (this._isFocused == value)
          return;
        this._isFocused = value;
        this.RefreshState();
      }
    }

    [Editor(false)]
    public bool IsEnabled
    {
      get => !this.IsDisabled;
      set
      {
        if (value != this.IsDisabled)
          return;
        this.IsDisabled = !value;
        this.OnPropertyChanged(value, nameof (IsEnabled));
      }
    }

    [Editor(false)]
    public bool RestartAnimationFirstFrame
    {
      get => this._restartAnimationFirstFrame;
      set
      {
        if (this._restartAnimationFirstFrame == value)
          return;
        this._restartAnimationFirstFrame = value;
      }
    }

    [Editor(false)]
    public bool DoNotPassEventsToChildren
    {
      get => this._doNotPassEventsToChildren;
      set
      {
        if (this._doNotPassEventsToChildren == value)
          return;
        this._doNotPassEventsToChildren = value;
        this.OnPropertyChanged(value, nameof (DoNotPassEventsToChildren));
      }
    }

    [Editor(false)]
    public bool DoNotAcceptEvents
    {
      get => this._doNotAcceptEvents;
      set
      {
        if (this._doNotAcceptEvents == value)
          return;
        this._doNotAcceptEvents = value;
        this.OnPropertyChanged(value, nameof (DoNotAcceptEvents));
      }
    }

    [Editor(false)]
    public bool CanAcceptEvents
    {
      get => !this.DoNotAcceptEvents;
      set => this.DoNotAcceptEvents = !value;
    }

    public bool IsPressed
    {
      get => this._isPressed;
      internal set
      {
        if (this._isPressed == value)
          return;
        this._isPressed = value;
        this.RefreshState();
      }
    }

    [Editor(false)]
    public bool IsHidden
    {
      get => this._isHidden;
      set
      {
        if (this._isHidden == value)
          return;
        this.SetMeasureAndLayoutDirty();
        this._isHidden = value;
        this.RefreshState();
        this.OnPropertyChanged(value, nameof (IsHidden));
        this.OnPropertyChanged(!value, "IsVisible");
        if (this.OnVisibilityChanged == null)
          return;
        this.OnVisibilityChanged(this);
      }
    }

    [Editor(false)]
    public bool IsVisible
    {
      get => !this._isHidden;
      set
      {
        if (value != this._isHidden)
          return;
        this.IsHidden = !value;
      }
    }

    [Editor(false)]
    public Sprite Sprite
    {
      get => this._sprite;
      set
      {
        if (value == this._sprite)
          return;
        this._sprite = value;
      }
    }

    [Editor(false)]
    public VisualDefinition VisualDefinition
    {
      get => this._visualDefinition;
      set
      {
        if (this._visualDefinition == value)
          return;
        VisualDefinition visualDefinition = this._visualDefinition;
        this._visualDefinition = value;
        this._stateTimer = 0.0f;
        if (!this.ConnectedToRoot || visualDefinition != null && this._visualDefinition != null)
          return;
        this.EventManager.OnWidgetVisualDefinitionChanged(this);
      }
    }

    public string CurrentState { get; protected set; } = "";

    [Editor(false)]
    public bool UpdateChildrenStates
    {
      get => this._updateChildrenStates;
      set
      {
        if (this._updateChildrenStates == value)
          return;
        this._updateChildrenStates = value;
        this.OnPropertyChanged(value, nameof (UpdateChildrenStates));
        if (!value || this.ChildCount <= 0)
          return;
        this.SetState(this.CurrentState);
      }
    }

    public object Tag { get; set; }

    public ILayout LayoutImp { get; protected set; }

    [Editor(false)]
    public bool DropEventHandledManually { get; set; }

    internal WidgetInfo WidgetInfo { get; private set; }

    public IEnumerable<Widget> AllChildrenAndThis
    {
      get
      {
        Widget allChildrenAndThi1 = this;
        yield return allChildrenAndThi1;
        foreach (Widget child in allChildrenAndThi1._children)
        {
          foreach (Widget allChildrenAndThi2 in child.AllChildrenAndThis)
            yield return allChildrenAndThi2;
        }
      }
    }

    public void ApplyActionOnAllChildren(Action<Widget> action)
    {
      foreach (Widget child in this._children)
      {
        action(child);
        child.ApplyActionOnAllChildren(action);
      }
    }

    public IEnumerable<Widget> AllChildren
    {
      get
      {
        foreach (Widget widget in this._children)
        {
          yield return widget;
          foreach (Widget allChild in widget.AllChildren)
            yield return allChild;
        }
      }
    }

    public List<Widget> Children => this._children;

    public IEnumerable<Widget> Parents
    {
      get
      {
        for (Widget parent = this.ParentWidget; parent != null; parent = parent.ParentWidget)
          yield return parent;
      }
    }

    internal bool ConnectedToRoot
    {
      get
      {
        if (this.Id == "Root")
          return true;
        return this.ParentWidget != null && this.ParentWidget.ConnectedToRoot;
      }
    }

    internal int OnUpdateListIndex { get; set; } = -1;

    internal int OnLateUpdateListIndex { get; set; } = -1;

    internal int OnUpdateBrushesIndex { get; set; } = -1;

    internal int OnParallelUpdateListIndex { get; set; } = -1;

    internal int OnVisualDefinitionListIndex { get; set; } = -1;

    internal int OnTweenPositionListIndex { get; set; } = -1;

    [Editor(false)]
    public float MaxWidth
    {
      get => this._maxWidth;
      set
      {
        if ((double) this._maxWidth == (double) value)
          return;
        this._maxWidth = value;
        this._gotMaxWidth = true;
        this.OnPropertyChanged(value, nameof (MaxWidth));
      }
    }

    [Editor(false)]
    public float MaxHeight
    {
      get => this._maxHeight;
      set
      {
        if ((double) this._maxHeight == (double) value)
          return;
        this._maxHeight = value;
        this._gotMaxHeight = true;
        this.OnPropertyChanged(value, nameof (MaxHeight));
      }
    }

    [Editor(false)]
    public float MinWidth
    {
      get => this._minWidth;
      set
      {
        if ((double) this._minWidth == (double) value)
          return;
        this._minWidth = value;
        this._gotMinWidth = true;
        this.OnPropertyChanged(value, nameof (MinWidth));
      }
    }

    [Editor(false)]
    public float MinHeight
    {
      get => this._minHeight;
      set
      {
        if ((double) this._minHeight == (double) value)
          return;
        this._minHeight = value;
        this._gotMinHeight = true;
        this.OnPropertyChanged(value, nameof (MinHeight));
      }
    }

    public float ScaledMaxWidth => this._scaleToUse * this._maxWidth;

    public float ScaledMaxHeight => this._scaleToUse * this._maxHeight;

    public float ScaledMinWidth => this._scaleToUse * this._minWidth;

    public float ScaledMinHeight => this._scaleToUse * this._minHeight;

    public Widget(UIContext context)
    {
      this.DropEventHandledManually = true;
      this.LayoutImp = (ILayout) new DefaultLayout();
      this._children = new List<Widget>();
      this.Context = context;
      this._states = new List<string>();
      this.WidgetInfo = WidgetInfo.GetWidgetInfo(this.GetType());
      this.Sprite = (Sprite) null;
      this._stateTimer = 0.0f;
      this._currentVisualStateAnimationState = VisualStateAnimationState.None;
      this._isFocusable = false;
      this._seed = 0;
      this._components = new List<WidgetComponent>();
      this.AddState("Default");
      this.SetState("Default");
    }

    public T GetComponent<T>() where T : WidgetComponent
    {
      for (int index = 0; index < this._components.Count; ++index)
      {
        if (this._components[index] is T component)
          return component;
      }
      return default (T);
    }

    public void AddComponent(WidgetComponent component) => this._components.Add(component);

    protected void SetMeasureAndLayoutDirty()
    {
      this.SetMeasureDirty();
      this.SetLayoutDirty();
    }

    protected void SetMeasureDirty() => this.EventManager.SetMeasureDirty();

    protected void SetLayoutDirty() => this.EventManager.SetLayoutDirty();

    public void AddState(string stateName)
    {
      if (this._states.Contains(stateName))
        return;
      this._states.Add(stateName);
    }

    public bool ContainsState(string stateName) => this._states.Contains(stateName);

    public virtual void SetState(string stateName)
    {
      if (this.CurrentState != stateName)
      {
        this.CurrentState = stateName;
        this._stateTimer = 0.0f;
        if (this._currentVisualStateAnimationState != VisualStateAnimationState.None)
        {
          this._startVisualState = new VisualState("@StartState");
          this._startVisualState.FillFromWidget(this);
        }
        this._currentVisualStateAnimationState = VisualStateAnimationState.PlayingBasicTranisition;
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

    public Widget FindChild(BindingPath path)
    {
      string firstNode = path.FirstNode;
      BindingPath subPath = path.SubPath;
      switch (firstNode)
      {
        case "..":
          return this.ParentWidget.FindChild(subPath);
        case ".":
          return this;
        default:
          foreach (Widget child in this._children)
          {
            if (!string.IsNullOrEmpty(child.Id) && child.Id == firstNode)
              return subPath == (BindingPath) null ? child : child.FindChild(subPath);
          }
          return (Widget) null;
      }
    }

    public Widget FindChild(string singlePathNode)
    {
      switch (singlePathNode)
      {
        case "..":
          return this.ParentWidget;
        case ".":
          return this;
        default:
          foreach (Widget child in this._children)
          {
            if (!string.IsNullOrEmpty(child.Id) && child.Id == singlePathNode)
              return child;
          }
          return (Widget) null;
      }
    }

    public Widget FindChild(WidgetSearchDelegate widgetSearchDelegate)
    {
      for (int index = 0; index < this._children.Count; ++index)
      {
        Widget child = this._children[index];
        if (widgetSearchDelegate(child))
          return child;
      }
      return (Widget) null;
    }

    public Widget FindChild(string id, bool includeAllChildren = false)
    {
      foreach (Widget child in includeAllChildren ? this.AllChildren : (IEnumerable<Widget>) this._children)
      {
        if (!string.IsNullOrEmpty(child.Id) && child.Id == id)
          return child;
      }
      return (Widget) null;
    }

    public void RemoveAllChildren()
    {
      while (this._children.Count > 0)
        this._children[0].ParentWidget = (Widget) null;
    }

    private static float GetEaseOutBack(float t)
    {
      float num = 0.5f;
      return (float) (1.0 + (double) (num + 1f) * (double) TaleWorlds.Library.MathF.Pow(t - 1f, 3f) + (double) num * (double) TaleWorlds.Library.MathF.Pow(t - 1f, 2f));
    }

    internal void UpdateVisualDefinitions(float dt)
    {
      if (this.VisualDefinition != null && this._currentVisualStateAnimationState == VisualStateAnimationState.PlayingBasicTranisition)
      {
        if (this._startVisualState == null)
        {
          this._startVisualState = new VisualState("@StartState");
          this._startVisualState.FillFromWidget(this);
        }
        VisualState visualState = this.VisualDefinition.GetVisualState(this.CurrentState);
        if (visualState != null)
        {
          float num1 = visualState.GotTransitionDuration ? visualState.TransitionDuration : this.VisualDefinition.TransitionDuration;
          float delayOnBegin = this.VisualDefinition.DelayOnBegin;
          if ((double) this._stateTimer < (double) num1)
          {
            if ((double) this._stateTimer >= (double) delayOnBegin)
            {
              float num2 = (float) (((double) this._stateTimer - (double) delayOnBegin) / ((double) num1 - (double) delayOnBegin));
              if (this.VisualDefinition.EaseIn)
                num2 = Widget.GetEaseOutBack(num2);
              this.PositionXOffset = visualState.GotPositionXOffset ? Mathf.Lerp(this._startVisualState.PositionXOffset, visualState.PositionXOffset, num2) : this.PositionXOffset;
              this.PositionYOffset = visualState.GotPositionYOffset ? Mathf.Lerp(this._startVisualState.PositionYOffset, visualState.PositionYOffset, num2) : this.PositionYOffset;
              this.SuggestedWidth = visualState.GotSuggestedWidth ? Mathf.Lerp(this._startVisualState.SuggestedWidth, visualState.SuggestedWidth, num2) : this.SuggestedWidth;
              this.SuggestedHeight = visualState.GotSuggestedHeight ? Mathf.Lerp(this._startVisualState.SuggestedHeight, visualState.SuggestedHeight, num2) : this.SuggestedHeight;
              this.MarginTop = visualState.GotMarginTop ? Mathf.Lerp(this._startVisualState.MarginTop, visualState.MarginTop, num2) : this.MarginTop;
              this.MarginBottom = visualState.GotMarginBottom ? Mathf.Lerp(this._startVisualState.MarginBottom, visualState.MarginBottom, num2) : this.MarginBottom;
              this.MarginLeft = visualState.GotMarginLeft ? Mathf.Lerp(this._startVisualState.MarginLeft, visualState.MarginLeft, num2) : this.MarginLeft;
              this.MarginRight = visualState.GotMarginRight ? Mathf.Lerp(this._startVisualState.MarginRight, visualState.MarginRight, num2) : this.MarginRight;
            }
          }
          else
          {
            this.PositionXOffset = visualState.GotPositionXOffset ? visualState.PositionXOffset : this.PositionXOffset;
            this.PositionYOffset = visualState.GotPositionYOffset ? visualState.PositionYOffset : this.PositionYOffset;
            this.SuggestedWidth = visualState.GotSuggestedWidth ? visualState.SuggestedWidth : this.SuggestedWidth;
            this.SuggestedHeight = visualState.GotSuggestedHeight ? visualState.SuggestedHeight : this.SuggestedHeight;
            this.MarginTop = visualState.GotMarginTop ? visualState.MarginTop : this.MarginTop;
            this.MarginBottom = visualState.GotMarginBottom ? visualState.MarginBottom : this.MarginBottom;
            this.MarginLeft = visualState.GotMarginLeft ? visualState.MarginLeft : this.MarginLeft;
            this.MarginRight = visualState.GotMarginRight ? visualState.MarginRight : this.MarginRight;
            this._startVisualState = visualState;
            this._currentVisualStateAnimationState = VisualStateAnimationState.None;
          }
        }
        else
          this._currentVisualStateAnimationState = VisualStateAnimationState.None;
      }
      this._stateTimer += dt;
    }

    internal void Update(float dt) => this.OnUpdate(dt);

    internal void LateUpdate(float dt) => this.OnLateUpdate(dt);

    internal void ParallelUpdate(float dt) => this.OnParallelUpdate(dt);

    protected virtual void OnUpdate(float dt)
    {
    }

    protected virtual void OnParallelUpdate(float dt)
    {
    }

    protected virtual void OnLateUpdate(float dt)
    {
    }

    protected virtual void RefreshState()
    {
    }

    public virtual void UpdateAnimationPropertiesSubTask(float alphaFactor)
    {
      this.AlphaFactor = alphaFactor;
      foreach (Widget child in this.Children)
        child.UpdateAnimationPropertiesSubTask(alphaFactor);
    }

    public void Measure(Vector2 measureSpec)
    {
      if (this.IsHidden)
        this.MeasuredSize = Vector2.Zero;
      else
        this.OnMeasure(measureSpec);
    }

    private Vector2 ProcessSizeWithBoundaries(Vector2 input)
    {
      Vector2 vector2 = input;
      if (this._gotMinWidth && (double) input.X < (double) this.ScaledMinWidth)
        vector2.X = this.ScaledMinWidth;
      if (this._gotMinHeight && (double) input.Y < (double) this.ScaledMinHeight)
        vector2.Y = this.ScaledMinHeight;
      if (this._gotMaxWidth && (double) input.X > (double) this.ScaledMaxWidth)
        vector2.X = this.ScaledMaxWidth;
      if (this._gotMaxHeight && (double) input.Y > (double) this.ScaledMaxHeight)
        vector2.Y = this.ScaledMaxHeight;
      return vector2;
    }

    private void OnMeasure(Vector2 measureSpec)
    {
      if (this.WidthSizePolicy == SizePolicy.Fixed)
        measureSpec.X = this.ScaledSuggestedWidth;
      else if (this.WidthSizePolicy == SizePolicy.StretchToParent)
      {
        measureSpec.X -= this.ScaledMarginLeft + this.ScaledMarginRight;
      }
      else
      {
        int widthSizePolicy = (int) this.WidthSizePolicy;
      }
      if (this.HeightSizePolicy == SizePolicy.Fixed)
        measureSpec.Y = this.ScaledSuggestedHeight;
      else if (this.HeightSizePolicy == SizePolicy.StretchToParent)
      {
        measureSpec.Y -= this.ScaledMarginTop + this.ScaledMarginBottom;
      }
      else
      {
        int heightSizePolicy = (int) this.HeightSizePolicy;
      }
      measureSpec = this.ProcessSizeWithBoundaries(measureSpec);
      Vector2 vector2 = this.MeasureChildren(measureSpec);
      Vector2 input = new Vector2(0.0f, 0.0f);
      if (this.WidthSizePolicy == SizePolicy.Fixed)
        input.X = this.ScaledSuggestedWidth;
      else if (this.WidthSizePolicy == SizePolicy.CoverChildren)
        input.X = vector2.X;
      else if (this.WidthSizePolicy == SizePolicy.StretchToParent)
        input.X = measureSpec.X;
      if (this.HeightSizePolicy == SizePolicy.Fixed)
        input.Y = this.ScaledSuggestedHeight;
      else if (this.HeightSizePolicy == SizePolicy.CoverChildren)
        input.Y = vector2.Y;
      else if (this.HeightSizePolicy == SizePolicy.StretchToParent)
        input.Y = measureSpec.Y;
      this.MeasuredSize = this.ProcessSizeWithBoundaries(input);
    }

    public bool CheckIsMyChildRecursive(Widget child)
    {
      for (Widget parentWidget = child?.ParentWidget; parentWidget != null; parentWidget = parentWidget.ParentWidget)
      {
        if (parentWidget == this)
          return true;
      }
      return false;
    }

    private Vector2 MeasureChildren(Vector2 measureSpec)
    {
      return this.LayoutImp.MeasureChildren(this, measureSpec, this.Context.SpriteData, this._scaleToUse);
    }

    public void AddChild(Widget widget) => widget.ParentWidget = this;

    public void AddChildAtIndex(Widget widget, int index)
    {
      widget.ParentWidget = this;
      widget.SetSiblingIndex(index);
    }

    public void SwapChildren(Widget widget1, Widget widget2)
    {
      int index1 = this._children.IndexOf(widget1);
      int index2 = this._children.IndexOf(widget2);
      Widget child = this._children[index1];
      this._children[index1] = this._children[index2];
      this._children[index2] = child;
    }

    protected virtual void OnChildAdded(Widget child)
    {
      this.EventFired("ItemAdd", (object) child);
      if (this.DoNotUseCustomScaleAndChildren)
        child.DoNotUseCustomScaleAndChildren = true;
      if (!this.UpdateChildrenStates || child is ImageWidget && ((ImageWidget) child).OverrideDefaultStateSwitchingEnabled)
        return;
      child.SetState(this.CurrentState);
    }

    public void RemoveChild(Widget widget) => widget.ParentWidget = (Widget) null;

    public virtual void OnBeforeRemovedChild(Widget widget)
    {
      if (this.IsHovered)
        this.EventFired("HoverEnd");
      this.Children.ForEach((Action<Widget>) (c => c.OnBeforeRemovedChild(widget)));
    }

    public bool HasChild(Widget widget) => this._children.Contains(widget);

    protected virtual void OnChildRemoved(Widget child)
    {
      this.EventFired("ItemRemove", (object) child);
    }

    protected virtual void OnAfterChildRemoved(Widget child)
    {
      this.EventFired("AfterItemRemove", (object) child);
    }

    public virtual void UpdateBrushes(float dt)
    {
    }

    public int GetChildIndex(Widget child) => this._children.IndexOf(child);

    public int GetVisibleChildIndex(Widget child)
    {
      int visibleChildIndex = -1;
      List<Widget> list = this._children.Where<Widget>((Func<Widget, bool>) (c => c.IsVisible)).ToList<Widget>();
      if (list.Count > 0)
        visibleChildIndex = list.IndexOf(child);
      return visibleChildIndex;
    }

    public int GetFilterChildIndex(Widget child, Func<Widget, bool> childrenFilter)
    {
      int filterChildIndex = -1;
      List<Widget> list = this._children.Where<Widget>((Func<Widget, bool>) (c => childrenFilter(c))).ToList<Widget>();
      if (list.Count > 0)
        filterChildIndex = list.IndexOf(child);
      return filterChildIndex;
    }

    public Widget GetChild(int i) => i < this._children.Count ? this._children[i] : (Widget) null;

    public void Layout(float left, float bottom, float right, float top)
    {
      if (!this.IsVisible)
        return;
      this.SetLayout(left, bottom, right, top);
      Vector2 scaledPositionOffset = this.ScaledPositionOffset;
      this.Left += scaledPositionOffset.X;
      this.Top += scaledPositionOffset.Y;
      this.OnLayout(this.Left, this.Bottom, this.Right, this.Top);
    }

    private void SetLayout(float left, float bottom, float right, float top)
    {
      left += this.ScaledMarginLeft;
      right -= this.ScaledMarginRight;
      top += this.ScaledMarginTop;
      bottom -= this.ScaledMarginBottom;
      float num1 = right - left;
      float num2 = bottom - top;
      float num3 = this.HorizontalAlignment != HorizontalAlignment.Left ? (this.HorizontalAlignment != HorizontalAlignment.Center ? right - this.MeasuredSize.X : (float) ((double) left + (double) num1 / 2.0 - (double) this.MeasuredSize.X / 2.0)) : left;
      float num4 = this.VerticalAlignment != VerticalAlignment.Top ? (this.VerticalAlignment != VerticalAlignment.Center ? bottom - this.MeasuredSize.Y : (float) ((double) top + (double) num2 / 2.0 - (double) this.MeasuredSize.Y / 2.0)) : top;
      this.Left = num3;
      this.Top = num4;
      this.Size = this.MeasuredSize;
    }

    private void OnLayout(float left, float bottom, float right, float top)
    {
      this.LayoutImp.OnLayout(this, left, bottom, right, top);
    }

    internal void DoTweenPosition(float dt)
    {
      if (!this.IsVisible || (double) dt <= 0.0)
        return;
      float f1 = this.Left - this.LocalPosition.X;
      float f2 = this.Top - this.LocalPosition.Y;
      if ((double) Mathf.Abs(f1) + (double) Mathf.Abs(f2) < 3.0 / 1000.0)
      {
        this.LocalPosition = new Vector2(this.Left, this.Top);
      }
      else
      {
        float num1 = Mathf.Clamp(f1, -100f, 100f);
        float num2 = Mathf.Clamp(f2, -100f, 100f);
        float num3 = Mathf.Min(dt * 18f, 1f);
        this.LocalPosition = new Vector2(this.LocalPosition.X + num3 * num1, this.LocalPosition.Y + num3 * num2);
      }
    }

    internal void ParallelUpdateChildPositions(Vector2 globalPosition)
    {
      TWParallel.For(0, this._children.Count, new TWParallel.ParallelForAuxPredicate(UpdateChildPositionMT));

      void UpdateChildPositionMT(int startInclusive, int endExclusive)
      {
        for (int index = startInclusive; index < endExclusive; ++index)
          this._children[index].UpdatePosition(globalPosition);
      }
    }

    internal void UpdatePosition(Vector2 parentPosition)
    {
      if (!this.IsVisible)
        return;
      if (!this.TweenPosition)
        this.LocalPosition = new Vector2(this.Left, this.Top);
      Vector2 vector2 = this.LocalPosition + parentPosition;
      if (this._children.Count >= 64)
      {
        this.ParallelUpdateChildPositions(vector2);
      }
      else
      {
        for (int index = 0; index < this._children.Count; ++index)
          this._children[index].UpdatePosition(vector2);
      }
      this._cachedGlobalPosition = vector2;
    }

    public virtual void HandleInput(IReadOnlyList<int> lastKeysPressed)
    {
    }

    public bool IsPointInsideMeasuredArea(Vector2 p)
    {
      Vector2 globalPosition = this.GlobalPosition;
      return (double) globalPosition.X <= (double) p.X && (double) globalPosition.Y <= (double) p.Y && (double) globalPosition.X + (double) this.Size.X >= (double) p.X && (double) globalPosition.Y + (double) this.Size.Y >= (double) p.Y;
    }

    public bool IsPointInsideGamepadCursorArea(Vector2 p)
    {
      Vector2 globalPosition = this.GlobalPosition;
      globalPosition.X -= this.ExtendCursorAreaLeft;
      globalPosition.Y -= this.ExtendCursorAreaTop;
      Vector2 size = this.Size;
      size.X += this.ExtendCursorAreaLeft + this.ExtendCursorAreaRight;
      size.Y += this.ExtendCursorAreaTop + this.ExtendCursorAreaBottom;
      return (double) p.X >= (double) globalPosition.X && (double) p.Y > (double) globalPosition.Y && (double) p.X < (double) globalPosition.X + (double) size.X && (double) p.Y < (double) globalPosition.Y + (double) size.Y;
    }

    public void Hide() => this.IsHidden = true;

    public void Show() => this.IsHidden = false;

    public Vector2 GetLocalPoint(Vector2 globalPoint) => globalPoint - this.GlobalPosition;

    public void SetSiblingIndex(int index, bool force = false)
    {
      int siblingIndex = this.GetSiblingIndex();
      if (!(siblingIndex != index | force))
        return;
      this.ParentWidget._children.RemoveAt(siblingIndex);
      this.ParentWidget._children.Insert(index, this);
      this.SetMeasureAndLayoutDirty();
      this.EventFired("SiblingIndexChanged");
    }

    public int GetSiblingIndex()
    {
      Widget parentWidget = this.ParentWidget;
      return parentWidget == null ? -1 : parentWidget.GetChildIndex(this);
    }

    public int GetVisibleSiblingIndex() => this.ParentWidget.GetVisibleChildIndex(this);

    public bool DisableRender { get; set; }

    public void Render(TwoDimensionContext twoDimensionContext, TwoDimensionDrawContext drawContext)
    {
      if (!this.IsHidden && !this.DisableRender)
      {
        Vector2 cachedGlobalPosition = this._cachedGlobalPosition;
        if (this.ClipHorizontalContent || this.ClipVerticalContent)
        {
          int width = this.ClipHorizontalContent ? (int) this.Size.X : -1;
          int height = this.ClipVerticalContent ? (int) this.Size.Y : -1;
          drawContext.PushScissor((int) cachedGlobalPosition.X, (int) cachedGlobalPosition.Y, width, height);
        }
        if (this.CircularClipEnabled)
        {
          if (this.IsCircularClipRadiusHalfOfHeight)
            this.CircularClipRadius = this.Size.Y / 2f * this._inverseScaleToUse;
          else if (this.IsCircularClipRadiusHalfOfWidth)
            this.CircularClipRadius = this.Size.X / 2f * this._inverseScaleToUse;
          Vector2 position = new Vector2((float) ((double) cachedGlobalPosition.X + (double) this.Size.X * 0.5 + (double) this.CircularClipXOffset * (double) this._scaleToUse), (float) ((double) cachedGlobalPosition.Y + (double) this.Size.Y * 0.5 + (double) this.CircularClipYOffset * (double) this._scaleToUse));
          drawContext.SetCircualMask(position, this.CircularClipRadius * this._scaleToUse, this.CircularClipSmoothingRadius * this._scaleToUse);
        }
        bool flag = false;
        if (drawContext.ScissorTestEnabled)
        {
          ScissorTestInfo currentScissor = drawContext.CurrentScissor;
          Rectangle rectangle = new Rectangle(cachedGlobalPosition.X, cachedGlobalPosition.Y, this.Size.X, this.Size.Y);
          Rectangle other = new Rectangle((float) currentScissor.X, (float) currentScissor.Y, (float) currentScissor.Width, (float) currentScissor.Height);
          if (rectangle.IsCollide(other) || this._calculateSizeFirstFrame)
            flag = !this.DoNotRenderIfNotFullyInsideScissor || rectangle.IsSubRectOf(other);
        }
        else if (new Rectangle(this._cachedGlobalPosition.X, this._cachedGlobalPosition.Y, this.MeasuredSize.X, this.MeasuredSize.Y).IsCollide(new Rectangle(this.EventManager.LeftUsableAreaStart, this.EventManager.TopUsableAreaStart, this.EventManager.PageSize.X, this.EventManager.PageSize.Y)) || this._calculateSizeFirstFrame)
          flag = true;
        if (flag)
        {
          this.OnRender(twoDimensionContext, drawContext);
          for (int index = 0; index < this._children.Count; ++index)
          {
            Widget child = this._children[index];
            if (!child.RenderLate)
              child.Render(twoDimensionContext, drawContext);
          }
          for (int index = 0; index < this._children.Count; ++index)
          {
            Widget child = this._children[index];
            if (child.RenderLate)
              child.Render(twoDimensionContext, drawContext);
          }
        }
        if (this.CircularClipEnabled)
          drawContext.ClearCircualMask();
        if (this.ClipHorizontalContent || this.ClipVerticalContent)
          drawContext.PopScissor();
      }
      this._calculateSizeFirstFrame = false;
    }

    protected virtual void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      Vector2 globalPosition = this.GlobalPosition;
      if (this.ForcePixelPerfectRenderPlacement)
      {
        globalPosition.X = (float) TaleWorlds.Library.MathF.Round(globalPosition.X);
        globalPosition.Y = (float) TaleWorlds.Library.MathF.Round(globalPosition.Y);
      }
      if (this._sprite == null)
        return;
      Texture texture = this._sprite.Texture;
      if (texture == null)
        return;
      float x1 = globalPosition.X;
      float y1 = globalPosition.Y;
      SimpleMaterial simpleMaterial = drawContext.CreateSimpleMaterial();
      simpleMaterial.OverlayEnabled = false;
      simpleMaterial.CircularMaskingEnabled = false;
      simpleMaterial.Texture = texture;
      simpleMaterial.Color = this.Color;
      simpleMaterial.ColorFactor = this.ColorFactor;
      simpleMaterial.AlphaFactor = this.AlphaFactor * this.Context.ContextAlpha;
      simpleMaterial.HueFactor = 0.0f;
      simpleMaterial.SaturationFactor = this.SaturationFactor;
      simpleMaterial.ValueFactor = this.ValueFactor;
      float num1 = this.ExtendLeft;
      if (this.HorizontalFlip)
        num1 = this.ExtendRight;
      float width = this.Size.X + (this.ExtendRight + this.ExtendLeft) * this._scaleToUse;
      float x2 = x1 - num1 * this._scaleToUse;
      float y2 = this.Size.Y;
      float num2 = this.ExtendTop;
      if (this.HorizontalFlip)
        num2 = this.ExtendBottom;
      float height = y2 + (this.ExtendTop + this.ExtendBottom) * this._scaleToUse;
      float y3 = y1 - num2 * this._scaleToUse;
      drawContext.DrawSprite(this._sprite, simpleMaterial, x2, y3, this._scaleToUse, width, height, this.HorizontalFlip, this.VerticalFlip);
    }

    protected void EventFired(string eventName, params object[] args)
    {
      if (this._eventTargets == null)
        return;
      for (int index = 0; index < this._eventTargets.Count; ++index)
        this._eventTargets[index](this, eventName, args);
    }

    public event Action<Widget, string, object[]> EventFire
    {
      add
      {
        if (this._eventTargets == null)
          this._eventTargets = new List<Action<Widget, string, object[]>>();
        this._eventTargets.Add(value);
      }
      remove
      {
        if (this._eventTargets == null)
          return;
        this._eventTargets.Remove(value);
      }
    }

    public event Action<Widget> OnVisibilityChanged;

    public bool IsRecursivelyVisible()
    {
      for (Widget widget = this; widget != null; widget = widget.ParentWidget)
      {
        if (!widget.IsVisible)
          return false;
      }
      return true;
    }

    internal void HandleOnDisconnectedFromRoot()
    {
      this.OnDisconnectedFromRoot();
      if (!this.IsHovered)
        return;
      this.EventFired("HoverEnd");
    }

    internal void HandleOnConnectedToRoot()
    {
      if (!this._seedSet)
      {
        this._seed = this.GetSiblingIndex();
        this._seedSet = true;
      }
      this.OnConnectedToRoot();
    }

    protected virtual void OnDisconnectedFromRoot()
    {
    }

    protected virtual void OnConnectedToRoot() => this.EventFired("ConnectedToRoot");

    public override string ToString() => this.GetFullIDPath();

    public float ExtendCursorAreaTop { get; set; }

    public float ExtendCursorAreaRight { get; set; }

    public float ExtendCursorAreaBottom { get; set; }

    public float ExtendCursorAreaLeft { get; set; }

    public float CursorAreaXOffset { get; set; }

    public float CursorAreaYOffset { get; set; }

    public bool AcceptNavigation
    {
      get => !this.DoNotAcceptNavigation;
      set
      {
        if (value != this.DoNotAcceptNavigation)
          return;
        this.DoNotAcceptNavigation = !value;
      }
    }

    public bool DoNotAcceptNavigation
    {
      get => this._doNotAcceptNavigation;
      set
      {
        if (value == this._doNotAcceptNavigation)
          return;
        this._doNotAcceptNavigation = value;
        this.GamepadNavigationContext.OnWidgetNavigationStatusChanged(this);
      }
    }

    public bool IsUsingNavigation
    {
      get => this._isUsingNavigation;
      set
      {
        if (value == this._isUsingNavigation)
          return;
        this._isUsingNavigation = value;
        this.OnPropertyChanged(value, nameof (IsUsingNavigation));
      }
    }

    public bool UseSiblingIndexForNavigation
    {
      get => this._useSiblingIndexForNavigation;
      set
      {
        if (value == this._useSiblingIndexForNavigation)
          return;
        this._useSiblingIndexForNavigation = value;
        if (!value)
          return;
        this.GamepadNavigationIndex = this.GetSiblingIndex();
      }
    }

    public int GamepadNavigationIndex
    {
      get => this._gamepadNavigationIndex;
      set
      {
        if (value == this._gamepadNavigationIndex)
          return;
        this._gamepadNavigationIndex = value;
        this.GamepadNavigationContext.OnWidgetNavigationIndexUpdated(this);
        this.OnGamepadNavigationIndexUpdated(value);
        this.OnPropertyChanged(value, nameof (GamepadNavigationIndex));
      }
    }

    public GamepadNavigationTypes UsedNavigationMovements
    {
      get => this._usedNavigationMovements;
      set
      {
        if (value == this._usedNavigationMovements)
          return;
        this._usedNavigationMovements = value;
        this.Context.GamepadNavigation.OnWidgetUsedNavigationMovementsUpdated(this);
      }
    }

    protected virtual void OnGamepadNavigationIndexUpdated(int newIndex)
    {
    }

    public void OnGamepadNavigationFocusGain()
    {
      Action<Widget> navigationFocusGained = this.OnGamepadNavigationFocusGained;
      if (navigationFocusGained == null)
        return;
      navigationFocusGained(this);
    }

    internal bool PreviewEvent(GauntletEvent gauntletEvent)
    {
      bool flag = false;
      switch (gauntletEvent)
      {
        case GauntletEvent.MouseMove:
          flag = this.OnPreviewMouseMove();
          break;
        case GauntletEvent.MousePressed:
          flag = this.OnPreviewMousePressed();
          break;
        case GauntletEvent.MouseReleased:
          flag = this.OnPreviewMouseReleased();
          break;
        case GauntletEvent.MouseAlternatePressed:
          flag = this.OnPreviewMouseAlternatePressed();
          break;
        case GauntletEvent.MouseAlternateReleased:
          flag = this.OnPreviewMouseAlternateReleased();
          break;
        case GauntletEvent.DragHover:
          flag = this.OnPreviewDragHover();
          break;
        case GauntletEvent.DragBegin:
          flag = this.OnPreviewDragBegin();
          break;
        case GauntletEvent.DragEnd:
          flag = this.OnPreviewDragEnd();
          break;
        case GauntletEvent.Drop:
          flag = this.OnPreviewDrop();
          break;
        case GauntletEvent.MouseScroll:
          flag = this.OnPreviewMouseScroll();
          break;
        case GauntletEvent.RightStickMovement:
          flag = this.OnPreviewRightStickMovement();
          break;
      }
      return flag;
    }

    protected virtual bool OnPreviewMousePressed() => true;

    protected virtual bool OnPreviewMouseReleased() => true;

    protected virtual bool OnPreviewMouseAlternatePressed() => true;

    protected virtual bool OnPreviewMouseAlternateReleased() => true;

    protected virtual bool OnPreviewDragBegin() => this.AcceptDrag;

    protected virtual bool OnPreviewDragEnd() => this.AcceptDrag;

    protected virtual bool OnPreviewDrop() => this.AcceptDrop;

    protected virtual bool OnPreviewMouseScroll() => false;

    protected virtual bool OnPreviewRightStickMovement() => false;

    protected virtual bool OnPreviewMouseMove() => true;

    protected virtual bool OnPreviewDragHover() => false;

    protected internal virtual void OnMousePressed()
    {
      this.IsPressed = true;
      this.EventFired("MouseDown");
    }

    protected internal virtual void OnMouseReleased()
    {
      this.IsPressed = false;
      this.EventFired("MouseUp");
    }

    protected internal virtual void OnMouseAlternatePressed()
    {
      this.EventFired("MouseAlternateDown");
    }

    protected internal virtual void OnMouseAlternateReleased()
    {
      this.EventFired("MouseAlternateUp");
    }

    protected internal virtual void OnMouseMove() => this.EventFired("MouseMove");

    protected internal virtual void OnHoverBegin()
    {
      this.IsHovered = true;
      this.EventFired("HoverBegin");
    }

    protected internal virtual void OnHoverEnd()
    {
      this.EventFired("HoverEnd");
      this.IsHovered = false;
    }

    protected internal virtual void OnDragBegin()
    {
      this.EventManager.BeginDragging(this);
      this.EventFired("DragBegin");
    }

    protected internal virtual void OnDragEnd() => this.EventFired("DragEnd");

    protected internal virtual bool OnDrop()
    {
      if (this.AcceptDrop)
      {
        bool flag = true;
        if (this.AcceptDropHandler != null)
          flag = this.AcceptDropHandler(this, this.EventManager.DraggedWidget);
        if (flag)
        {
          Widget widget = this.EventManager.ReleaseDraggedWidget();
          int num = -1;
          if (!this.DropEventHandledManually)
            widget.ParentWidget = this;
          this.EventFired("Drop", (object) widget, (object) num);
          return true;
        }
      }
      return false;
    }

    protected internal virtual void OnMouseScroll() => this.EventFired("MouseScroll");

    protected internal virtual void OnRightStickMovement()
    {
    }

    protected internal virtual void OnDragHoverBegin() => this.EventFired("DragHoverBegin");

    protected internal virtual void OnDragHoverEnd() => this.EventFired("DragHoverEnd");

    protected internal virtual void OnGainFocus()
    {
      this.IsFocused = true;
      this.EventFired("FocusGained");
    }

    protected internal virtual void OnLoseFocus()
    {
      this.IsFocused = false;
      this.EventFired("FocusLost");
    }

    protected internal virtual void OnMouseOverBegin() => this.EventFired("MouseOverBegin");

    protected internal virtual void OnMouseOverEnd() => this.EventFired("MouseOverEnd");
  }
}
