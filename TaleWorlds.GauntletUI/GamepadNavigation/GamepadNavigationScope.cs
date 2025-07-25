// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.GamepadNavigation.GamepadNavigationScope
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.GamepadNavigation
{
  public class GamepadNavigationScope
  {
    private List<Widget> _navigatableWidgets;
    private Dictionary<Widget, int> _widgetIndices;
    private Widget _parentWidget;
    private float _extendChildrenCursorAreaLeft;
    private float _extendChildrenCursorAreaRight;
    private float _extendChildrenCursorAreaTop;
    private float _extendChildrenCursorAreaBottom;
    private bool _isEnabled;
    private bool _isDisabled;
    private GamepadNavigationScope.WidgetNavigationIndexComparer _navigatableWidgetComparer;
    private List<Widget> _invisibleParents;
    private List<GamepadNavigationScope> _childScopes;
    internal Action<GamepadNavigationScope> OnNavigatableWidgetsChanged;
    internal Action<GamepadNavigationScope, bool> OnVisibilityChanged;
    internal Action<GamepadNavigationScope, GamepadNavigationScope> OnParentScopeChanged;

    public string ScopeID { get; set; } = "DefaultScopeID";

    public bool IsActiveScope { get; private set; }

    public bool DoNotAutomaticallyFindChildren { get; set; }

    public GamepadNavigationTypes ScopeMovements { get; set; }

    public GamepadNavigationTypes AlternateScopeMovements { get; set; }

    public int AlternateMovementStepSize { get; set; }

    public bool HasCircularMovement { get; set; }

    public ReadOnlyCollection<Widget> NavigatableWidgets { get; }

    public Widget ParentWidget
    {
      get => this._parentWidget;
      set
      {
        if (value == this._parentWidget)
          return;
        if (this._parentWidget != null)
        {
          this._invisibleParents.Clear();
          for (Widget parentWidget = this._parentWidget; parentWidget != null; parentWidget = parentWidget.ParentWidget)
            parentWidget.OnVisibilityChanged -= new Action<Widget>(this.OnParentVisibilityChanged);
        }
        this._parentWidget = value;
        for (Widget parentWidget = this._parentWidget; parentWidget != null; parentWidget = parentWidget.ParentWidget)
        {
          if (!parentWidget.IsVisible)
            this._invisibleParents.Add(parentWidget);
          parentWidget.OnVisibilityChanged += new Action<Widget>(this.OnParentVisibilityChanged);
        }
      }
    }

    public int LatestNavigationElementIndex { get; set; }

    public bool DoNotAutoGainNavigationOnInit { get; set; }

    public bool ForceGainNavigationBasedOnDirection { get; set; }

    public bool ForceGainNavigationOnClosestChild { get; set; }

    public bool NavigateFromScopeEdges { get; set; }

    public bool UseDiscoveryAreaAsScopeEdges { get; set; }

    public bool DoNotAutoNavigateAfterSort { get; set; }

    public bool FollowMobileTargets { get; set; }

    public bool DoNotAutoCollectChildScopes { get; set; }

    public bool IsDefaultNavigationScope { get; set; }

    public float ExtendDiscoveryAreaRight { get; set; }

    public float ExtendDiscoveryAreaTop { get; set; }

    public float ExtendDiscoveryAreaBottom { get; set; }

    public float ExtendDiscoveryAreaLeft { get; set; }

    public float ExtendChildrenCursorAreaLeft
    {
      get => this._extendChildrenCursorAreaLeft;
      set
      {
        if ((double) value == (double) this._extendChildrenCursorAreaLeft)
          return;
        this._extendChildrenCursorAreaLeft = value;
        for (int index = 0; index < this._navigatableWidgets.Count; ++index)
          this._navigatableWidgets[index].ExtendCursorAreaLeft = value;
      }
    }

    public float ExtendChildrenCursorAreaRight
    {
      get => this._extendChildrenCursorAreaRight;
      set
      {
        if ((double) value == (double) this._extendChildrenCursorAreaRight)
          return;
        this._extendChildrenCursorAreaRight = value;
        for (int index = 0; index < this._navigatableWidgets.Count; ++index)
          this._navigatableWidgets[index].ExtendCursorAreaRight = value;
      }
    }

    public float ExtendChildrenCursorAreaTop
    {
      get => this._extendChildrenCursorAreaTop;
      set
      {
        if ((double) value == (double) this._extendChildrenCursorAreaTop)
          return;
        this._extendChildrenCursorAreaTop = value;
        for (int index = 0; index < this._navigatableWidgets.Count; ++index)
          this._navigatableWidgets[index].ExtendCursorAreaTop = value;
      }
    }

    public float ExtendChildrenCursorAreaBottom
    {
      get => this._extendChildrenCursorAreaBottom;
      set
      {
        if ((double) value == (double) this._extendChildrenCursorAreaBottom)
          return;
        this._extendChildrenCursorAreaBottom = value;
        for (int index = 0; index < this._navigatableWidgets.Count; ++index)
          this._navigatableWidgets[index].ExtendCursorAreaBottom = value;
      }
    }

    public float DiscoveryAreaOffsetX { get; set; }

    public float DiscoveryAreaOffsetY { get; set; }

    public bool IsEnabled
    {
      get => this._isEnabled;
      set
      {
        if (value == this._isEnabled)
          return;
        this._isEnabled = value;
        this.IsDisabled = !value;
        Action<GamepadNavigationScope> navigatableWidgetsChanged = this.OnNavigatableWidgetsChanged;
        if (navigatableWidgetsChanged == null)
          return;
        navigatableWidgetsChanged(this);
      }
    }

    public bool IsDisabled
    {
      get => this._isDisabled;
      set
      {
        if (value == this._isDisabled)
          return;
        this._isDisabled = value;
        this.IsEnabled = !value;
      }
    }

    public string UpNavigationScopeID
    {
      get => this.ManualScopeIDs[GamepadNavigationTypes.Up];
      set => this.ManualScopeIDs[GamepadNavigationTypes.Up] = value;
    }

    public string RightNavigationScopeID
    {
      get => this.ManualScopeIDs[GamepadNavigationTypes.Right];
      set => this.ManualScopeIDs[GamepadNavigationTypes.Right] = value;
    }

    public string DownNavigationScopeID
    {
      get => this.ManualScopeIDs[GamepadNavigationTypes.Down];
      set => this.ManualScopeIDs[GamepadNavigationTypes.Down] = value;
    }

    public string LeftNavigationScopeID
    {
      get => this.ManualScopeIDs[GamepadNavigationTypes.Left];
      set => this.ManualScopeIDs[GamepadNavigationTypes.Left] = value;
    }

    public GamepadNavigationScope UpNavigationScope
    {
      get => this.ManualScopes[GamepadNavigationTypes.Up];
      set => this.ManualScopes[GamepadNavigationTypes.Up] = value;
    }

    public GamepadNavigationScope RightNavigationScope
    {
      get => this.ManualScopes[GamepadNavigationTypes.Right];
      set => this.ManualScopes[GamepadNavigationTypes.Right] = value;
    }

    public GamepadNavigationScope DownNavigationScope
    {
      get => this.ManualScopes[GamepadNavigationTypes.Down];
      set => this.ManualScopes[GamepadNavigationTypes.Down] = value;
    }

    public GamepadNavigationScope LeftNavigationScope
    {
      get => this.ManualScopes[GamepadNavigationTypes.Left];
      set => this.ManualScopes[GamepadNavigationTypes.Left] = value;
    }

    internal Widget LastNavigatedWidget
    {
      get
      {
        return this.LatestNavigationElementIndex >= 0 && this.LatestNavigationElementIndex < this._navigatableWidgets.Count ? this._navigatableWidgets[this.LatestNavigationElementIndex] : (Widget) null;
      }
    }

    internal bool IsInitialized { get; private set; }

    internal GamepadNavigationScope PreviousScope { get; set; }

    internal Dictionary<GamepadNavigationTypes, string> ManualScopeIDs { get; private set; }

    internal Dictionary<GamepadNavigationTypes, GamepadNavigationScope> ManualScopes { get; private set; }

    internal bool IsAdditionalMovementsDirty { get; set; }

    internal Dictionary<GamepadNavigationTypes, GamepadNavigationScope> InterScopeMovements { get; private set; }

    internal GamepadNavigationScope ParentScope { get; private set; }

    internal ReadOnlyCollection<GamepadNavigationScope> ChildScopes { get; private set; }

    public GamepadNavigationScope()
    {
      this._widgetIndices = new Dictionary<Widget, int>();
      this._navigatableWidgets = new List<Widget>();
      this.NavigatableWidgets = new ReadOnlyCollection<Widget>((IList<Widget>) this._navigatableWidgets);
      this._invisibleParents = new List<Widget>();
      this.InterScopeMovements = new Dictionary<GamepadNavigationTypes, GamepadNavigationScope>()
      {
        {
          GamepadNavigationTypes.Up,
          (GamepadNavigationScope) null
        },
        {
          GamepadNavigationTypes.Right,
          (GamepadNavigationScope) null
        },
        {
          GamepadNavigationTypes.Down,
          (GamepadNavigationScope) null
        },
        {
          GamepadNavigationTypes.Left,
          (GamepadNavigationScope) null
        }
      };
      this.ManualScopeIDs = new Dictionary<GamepadNavigationTypes, string>()
      {
        {
          GamepadNavigationTypes.Up,
          (string) null
        },
        {
          GamepadNavigationTypes.Right,
          (string) null
        },
        {
          GamepadNavigationTypes.Down,
          (string) null
        },
        {
          GamepadNavigationTypes.Left,
          (string) null
        }
      };
      this.ManualScopes = new Dictionary<GamepadNavigationTypes, GamepadNavigationScope>()
      {
        {
          GamepadNavigationTypes.Up,
          (GamepadNavigationScope) null
        },
        {
          GamepadNavigationTypes.Right,
          (GamepadNavigationScope) null
        },
        {
          GamepadNavigationTypes.Down,
          (GamepadNavigationScope) null
        },
        {
          GamepadNavigationTypes.Left,
          (GamepadNavigationScope) null
        }
      };
      this._navigatableWidgetComparer = new GamepadNavigationScope.WidgetNavigationIndexComparer();
      this.LatestNavigationElementIndex = -1;
      this._childScopes = new List<GamepadNavigationScope>();
      this.ChildScopes = new ReadOnlyCollection<GamepadNavigationScope>((IList<GamepadNavigationScope>) this._childScopes);
      this.IsInitialized = false;
      this.IsEnabled = true;
    }

    public void AddWidgetAtIndex(Widget widget, int index)
    {
      if (index < this._navigatableWidgets.Count)
      {
        this._navigatableWidgets.Insert(index, widget);
        this._widgetIndices.Add(widget, index);
      }
      else
      {
        this._navigatableWidgets.Add(widget);
        this._widgetIndices.Add(widget, this._navigatableWidgets.Count - 1);
      }
      Action<GamepadNavigationScope> navigatableWidgetsChanged = this.OnNavigatableWidgetsChanged;
      if (navigatableWidgetsChanged != null)
        navigatableWidgetsChanged(this);
      this.SetCursorAreaExtensionsForChild(widget);
    }

    public void AddWidget(Widget widget)
    {
      this._navigatableWidgets.Add(widget);
      Action<GamepadNavigationScope> navigatableWidgetsChanged = this.OnNavigatableWidgetsChanged;
      if (navigatableWidgetsChanged != null)
        navigatableWidgetsChanged(this);
      this.SetCursorAreaExtensionsForChild(widget);
    }

    public void RemoveWidget(Widget widget)
    {
      this._navigatableWidgets.Remove(widget);
      Action<GamepadNavigationScope> navigatableWidgetsChanged = this.OnNavigatableWidgetsChanged;
      if (navigatableWidgetsChanged == null)
        return;
      navigatableWidgetsChanged(this);
    }

    public void SetParentScope(GamepadNavigationScope scope)
    {
      if (this.ParentScope != null)
        this.ParentScope._childScopes.Remove(this);
      GamepadNavigationScope parentScope = this.ParentScope;
      this.ParentScope = scope;
      Action<GamepadNavigationScope, GamepadNavigationScope> parentScopeChanged = this.OnParentScopeChanged;
      if (parentScopeChanged != null)
        parentScopeChanged(parentScope, this.ParentScope);
      if (this.ParentScope == null)
        return;
      this.ParentScope._childScopes.Add(this);
      this.ClearMyWidgetsFromParentScope();
    }

    internal void SetIsActiveScope(bool isActive) => this.IsActiveScope = isActive;

    internal bool IsVisible() => this._invisibleParents.Count == 0;

    internal bool IsAvailable()
    {
      return this.IsEnabled && this._navigatableWidgets.Count > 0 && this.IsVisible();
    }

    internal void Initialize()
    {
      if (!this.DoNotAutomaticallyFindChildren)
        this.FindNavigatableChildren();
      this.IsInitialized = true;
    }

    internal void RefreshNavigatableChildren()
    {
      if (!this.IsInitialized)
        return;
      this.FindNavigatableChildren();
    }

    internal bool HasMovement(GamepadNavigationTypes movement)
    {
      return (this.ScopeMovements & movement) != GamepadNavigationTypes.None || (this.AlternateScopeMovements & movement) != 0;
    }

    private void FindNavigatableChildren()
    {
      this._navigatableWidgets.Clear();
      if (this.IsParentWidgetAvailableForNavigation())
        this.CollectNavigatableChildrenOfWidget(this.ParentWidget);
      Action<GamepadNavigationScope> navigatableWidgetsChanged = this.OnNavigatableWidgetsChanged;
      if (navigatableWidgetsChanged == null)
        return;
      navigatableWidgetsChanged(this);
    }

    private bool IsParentWidgetAvailableForNavigation()
    {
      for (Widget parentWidget = this.ParentWidget; parentWidget != null; parentWidget = parentWidget.ParentWidget)
      {
        if (parentWidget.DoNotAcceptNavigation)
          return false;
      }
      return true;
    }

    private void CollectNavigatableChildrenOfWidget(Widget widget)
    {
      if (widget.DoNotAcceptNavigation)
        return;
      for (int index = 0; index < this._childScopes.Count; ++index)
      {
        if (this._childScopes[index].ParentWidget == widget)
          return;
      }
      if (widget.GamepadNavigationIndex != -1)
        this._navigatableWidgets.Add(widget);
      List<GamepadNavigationScope> gamepadNavigationScopeList;
      if (!this.DoNotAutoCollectChildScopes && this.ParentWidget != widget && GauntletGamepadNavigationManager.Instance.NavigationScopeParents.TryGetValue(widget, out gamepadNavigationScopeList))
      {
        for (int index = 0; index < gamepadNavigationScopeList.Count; ++index)
          gamepadNavigationScopeList[index].SetParentScope(this);
      }
      for (int index = 0; index < widget.Children.Count; ++index)
        this.CollectNavigatableChildrenOfWidget(widget.Children[index]);
      this.ClearMyWidgetsFromParentScope();
    }

    internal GamepadNavigationTypes GetMovementsToReachMyPosition(Vector2 fromPosition)
    {
      Rectangle rectangle = this.GetRectangle();
      GamepadNavigationTypes toReachMyPosition = GamepadNavigationTypes.None;
      if ((double) fromPosition.X > (double) rectangle.X + (double) rectangle.Width)
        toReachMyPosition |= GamepadNavigationTypes.Left;
      else if ((double) fromPosition.X < (double) rectangle.X)
        toReachMyPosition |= GamepadNavigationTypes.Right;
      if ((double) fromPosition.Y > (double) rectangle.Y + (double) rectangle.Height)
        toReachMyPosition |= GamepadNavigationTypes.Up;
      else if ((double) fromPosition.Y < (double) rectangle.Y)
        toReachMyPosition |= GamepadNavigationTypes.Down;
      return toReachMyPosition;
    }

    internal bool GetShouldFindScopeByPosition(GamepadNavigationTypes movement)
    {
      return this.ManualScopeIDs[movement] == null && this.ManualScopes[movement] == null;
    }

    internal GamepadNavigationTypes GetMovementsInsideScope()
    {
      GamepadNavigationTypes gamepadNavigationTypes1 = this.ScopeMovements;
      GamepadNavigationTypes gamepadNavigationTypes2 = this.AlternateScopeMovements;
      if (!this.HasCircularMovement || this._navigatableWidgets.Count == 1)
      {
        bool flag1 = false;
        bool flag2 = false;
        if (this.LatestNavigationElementIndex >= 0 && this.LatestNavigationElementIndex < this._navigatableWidgets.Count)
        {
          for (int index = this.LatestNavigationElementIndex + 1; index < this._navigatableWidgets.Count; ++index)
          {
            if (this.IsWidgetVisible(this._navigatableWidgets[index]))
            {
              flag2 = true;
              break;
            }
          }
          int num = this.LatestNavigationElementIndex - 1;
          if (this.HasCircularMovement && num < 0)
            num = this._navigatableWidgets.Count - 1;
          for (int index = num; index >= 0; --index)
          {
            if (this.IsWidgetVisible(this._navigatableWidgets[index]))
            {
              flag1 = true;
              break;
            }
          }
        }
        if (this.LatestNavigationElementIndex == 0 || !flag1)
          gamepadNavigationTypes1 = gamepadNavigationTypes1 & ~GamepadNavigationTypes.Left & ~GamepadNavigationTypes.Up;
        if (this.LatestNavigationElementIndex == this.NavigatableWidgets.Count - 1 || !flag2)
          gamepadNavigationTypes1 = gamepadNavigationTypes1 & ~GamepadNavigationTypes.Right & ~GamepadNavigationTypes.Down;
        if (gamepadNavigationTypes2 != GamepadNavigationTypes.None && this.AlternateMovementStepSize > 0)
        {
          if (this.LatestNavigationElementIndex % this.AlternateMovementStepSize == 0)
            gamepadNavigationTypes1 = gamepadNavigationTypes1 & ~GamepadNavigationTypes.Left & ~GamepadNavigationTypes.Up;
          if (this.LatestNavigationElementIndex % this.AlternateMovementStepSize == this.AlternateMovementStepSize - 1)
            gamepadNavigationTypes1 = gamepadNavigationTypes1 & ~GamepadNavigationTypes.Right & ~GamepadNavigationTypes.Down;
          if (this.LatestNavigationElementIndex - this.AlternateMovementStepSize < 0)
            gamepadNavigationTypes2 = gamepadNavigationTypes2 & ~GamepadNavigationTypes.Up & ~GamepadNavigationTypes.Left;
          int num = this._navigatableWidgets.Count % this.AlternateMovementStepSize;
          if (this._navigatableWidgets.Count > 0 && num == 0)
            num = this.AlternateMovementStepSize;
          if (this.LatestNavigationElementIndex + num > this._navigatableWidgets.Count - 1)
            gamepadNavigationTypes2 = gamepadNavigationTypes2 & ~GamepadNavigationTypes.Right & ~GamepadNavigationTypes.Down;
        }
      }
      return gamepadNavigationTypes1 | gamepadNavigationTypes2;
    }

    internal int FindIndexOfWidget(Widget widget)
    {
      int num;
      return widget != null && this._navigatableWidgets.Count != 0 && this._widgetIndices.TryGetValue(widget, out num) ? num : -1;
    }

    internal void SortWidgets()
    {
      this._navigatableWidgets.Sort((IComparer<Widget>) this._navigatableWidgetComparer);
      this._widgetIndices.Clear();
      for (int index = 0; index < this._navigatableWidgets.Count; ++index)
        this._widgetIndices[this._navigatableWidgets[index]] = index;
    }

    public void ClearNavigatableWidgets()
    {
      this._navigatableWidgets.Clear();
      this._widgetIndices.Clear();
    }

    internal Rectangle GetDiscoveryRectangle()
    {
      float customScale = this.ParentWidget.EventManager.Context.CustomScale;
      return new Rectangle((float) ((double) this.DiscoveryAreaOffsetX + (double) this.ParentWidget.GlobalPosition.X - (double) this.ExtendDiscoveryAreaLeft * (double) customScale), (float) ((double) this.DiscoveryAreaOffsetY + (double) this.ParentWidget.GlobalPosition.Y - (double) this.ExtendDiscoveryAreaTop * (double) customScale), this.ParentWidget.Size.X + (this.ExtendDiscoveryAreaLeft + this.ExtendDiscoveryAreaRight) * customScale, this.ParentWidget.Size.Y + (this.ExtendDiscoveryAreaTop + this.ExtendDiscoveryAreaBottom) * customScale);
    }

    internal Rectangle GetRectangle()
    {
      return this.ParentWidget == null ? new Rectangle(0.0f, 0.0f, 1f, 1f) : new Rectangle(this.ParentWidget.GlobalPosition.X, this.ParentWidget.GlobalPosition.Y, this.ParentWidget.Size.X, this.ParentWidget.Size.Y);
    }

    internal bool IsWidgetVisible(Widget widget)
    {
      for (Widget widget1 = widget; widget1 != null; widget1 = widget1.ParentWidget)
      {
        if (!widget1.IsVisible)
          return false;
        if (widget1 == this.ParentWidget)
          return this.IsVisible();
      }
      return true;
    }

    internal Widget GetFirstAvailableWidget()
    {
      int index1 = -1;
      for (int index2 = 0; index2 < this._navigatableWidgets.Count; ++index2)
      {
        if (this.IsWidgetVisible(this._navigatableWidgets[index2]))
        {
          index1 = index2;
          break;
        }
      }
      return index1 != -1 ? this._navigatableWidgets[index1] : (Widget) null;
    }

    internal Widget GetLastAvailableWidget()
    {
      int index1 = -1;
      for (int index2 = this._navigatableWidgets.Count - 1; index2 >= 0; --index2)
      {
        if (this.IsWidgetVisible(this._navigatableWidgets[index2]))
        {
          index1 = index2;
          break;
        }
      }
      return index1 != -1 ? this._navigatableWidgets[index1] : (Widget) null;
    }

    private int GetApproximatelyClosestWidgetIndexToPosition(
      Vector2 position,
      out float distance,
      GamepadNavigationTypes movement = GamepadNavigationTypes.None,
      bool angleCheck = false)
    {
      if (this._navigatableWidgets.Count > 0)
        return this.AlternateMovementStepSize > 0 ? this.GetClosesWidgetIndexForWithAlternateMovement(position, out distance, movement, angleCheck) : this.GetClosesWidgetIndexForRegular(position, out distance, movement, angleCheck);
      distance = -1f;
      return -1;
    }

    internal Widget GetApproximatelyClosestWidgetToPosition(
      Vector2 position,
      GamepadNavigationTypes movement = GamepadNavigationTypes.None,
      bool angleCheck = false)
    {
      return this.GetApproximatelyClosestWidgetToPosition(position, out float _, movement, angleCheck);
    }

    internal Widget GetApproximatelyClosestWidgetToPosition(
      Vector2 position,
      out float distance,
      GamepadNavigationTypes movement = GamepadNavigationTypes.None,
      bool angleCheck = false)
    {
      int widgetIndexToPosition = this.GetApproximatelyClosestWidgetIndexToPosition(position, out distance, movement, angleCheck);
      return widgetIndexToPosition != -1 ? this._navigatableWidgets[widgetIndexToPosition] : (Widget) null;
    }

    private void OnParentVisibilityChanged(Widget parent)
    {
      int num1 = this.IsVisible() ? 1 : 0;
      if (!parent.IsVisible)
        this._invisibleParents.Add(parent);
      else
        this._invisibleParents.Remove(parent);
      bool flag = this.IsVisible();
      int num2 = flag ? 1 : 0;
      if (num1 == num2)
        return;
      Action<GamepadNavigationScope, bool> visibilityChanged = this.OnVisibilityChanged;
      if (visibilityChanged == null)
        return;
      visibilityChanged(this, flag);
    }

    private void ClearMyWidgetsFromParentScope()
    {
      if (this.ParentScope == null)
        return;
      for (int index = 0; index < this._navigatableWidgets.Count; ++index)
        this.ParentScope.RemoveWidget(this._navigatableWidgets[index]);
    }

    private Vector2 GetRelativePositionRatio(Vector2 position)
    {
      float toValue1 = 0.0f;
      float fromValue1 = 0.0f;
      float toValue2 = 0.0f;
      float fromValue2 = 0.0f;
      for (int index = 0; index < this._navigatableWidgets.Count; ++index)
      {
        if (this.IsWidgetVisible(this._navigatableWidgets[index]))
        {
          fromValue1 = this._navigatableWidgets[index].GlobalPosition.Y;
          fromValue2 = this._navigatableWidgets[index].GlobalPosition.X;
          break;
        }
      }
      for (int index = this._navigatableWidgets.Count - 1; index >= 0; --index)
      {
        if (this.IsWidgetVisible(this._navigatableWidgets[index]))
        {
          toValue1 = this._navigatableWidgets[index].GlobalPosition.Y + this._navigatableWidgets[index].Size.Y;
          toValue2 = this._navigatableWidgets[index].GlobalPosition.X + this._navigatableWidgets[index].Size.X;
          break;
        }
      }
      return new Vector2(Mathf.Clamp(GamepadNavigationScope.InverseLerp(fromValue2, toValue2, position.X), 0.0f, 1f), Mathf.Clamp(GamepadNavigationScope.InverseLerp(fromValue1, toValue1, position.Y), 0.0f, 1f));
    }

    private bool IsPositionAvailableForMovement(
      Vector2 fromPos,
      Vector2 toPos,
      GamepadNavigationTypes movement)
    {
      switch (movement)
      {
        case GamepadNavigationTypes.Up:
          return (double) fromPos.Y >= (double) toPos.Y;
        case GamepadNavigationTypes.Down:
          return (double) fromPos.Y <= (double) toPos.Y;
        case GamepadNavigationTypes.Left:
          return (double) fromPos.X >= (double) toPos.X;
        case GamepadNavigationTypes.Right:
          return (double) fromPos.X <= (double) toPos.X;
        default:
          return true;
      }
    }

    private int GetClosesWidgetIndexForWithAlternateMovement(
      Vector2 fromPos,
      out float distance,
      GamepadNavigationTypes movement = GamepadNavigationTypes.None,
      bool angleCheck = false)
    {
      distance = -1f;
      List<int> intList = new List<int>();
      Vector2 relativePositionRatio = this.GetRelativePositionRatio(fromPos);
      float num1 = float.MaxValue;
      int alternateMovement = -1;
      Rectangle rectangle = this.GetRectangle();
      if (!rectangle.IsPointInside(fromPos))
      {
        List<int> lookupIndices = new List<int>();
        if ((double) fromPos.X < (double) rectangle.X)
        {
          for (int index = 0; index < this._navigatableWidgets.Count; index += this.AlternateMovementStepSize)
            lookupIndices.Add(index);
        }
        else if ((double) fromPos.X > (double) rectangle.X2)
        {
          for (int index = TaleWorlds.Library.MathF.Min(this.AlternateMovementStepSize - 1, this._navigatableWidgets.Count - 1); index < this._navigatableWidgets.Count; index += this.AlternateMovementStepSize)
            lookupIndices.Add(index);
        }
        if (lookupIndices.Count > 0)
        {
          foreach (int num2 in GamepadNavigationScope.GetTargetIndicesFromListByRatio(relativePositionRatio.Y, lookupIndices))
            intList.Add(num2);
        }
        if ((double) fromPos.Y < (double) rectangle.Y)
        {
          int endIndex = Mathf.Clamp(this.AlternateMovementStepSize - 1, 0, this._navigatableWidgets.Count - 1);
          foreach (int num3 in GamepadNavigationScope.GetTargetIndicesByRatio(relativePositionRatio.X, 0, endIndex))
            intList.Add(num3);
        }
        else if ((double) fromPos.Y > (double) rectangle.Y2)
        {
          int num4 = this._navigatableWidgets.Count % this.AlternateMovementStepSize;
          if (this._navigatableWidgets.Count > 0 && num4 == 0)
            num4 = this.AlternateMovementStepSize;
          int startIndex = Mathf.Clamp(this._navigatableWidgets.Count - num4, 0, this._navigatableWidgets.Count - 1);
          foreach (int num5 in GamepadNavigationScope.GetTargetIndicesByRatio(relativePositionRatio.X, startIndex, this._navigatableWidgets.Count - 1))
            intList.Add(num5);
        }
        for (int index1 = 0; index1 < intList.Count; ++index1)
        {
          int index2 = intList[index1];
          Vector2 closestPointOnEdge;
          float closestWidgetEdge = GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(this._navigatableWidgets[index2], fromPos, movement, out closestPointOnEdge);
          if ((double) closestWidgetEdge < (double) num1 && (!angleCheck || this.IsPositionAvailableForMovement(fromPos, closestPointOnEdge, movement)))
          {
            num1 = closestWidgetEdge;
            distance = num1;
            alternateMovement = index2;
          }
        }
      }
      else
        alternateMovement = this.GetClosesWidgetIndexForRegular(fromPos, out distance);
      return alternateMovement;
    }

    private int GetClosestWidgetIndexForRegularInefficient(
      Vector2 fromPos,
      out float distance,
      GamepadNavigationTypes movement = GamepadNavigationTypes.None,
      bool angleCheck = false)
    {
      distance = -1f;
      int regularInefficient = -1;
      float num = float.MaxValue;
      for (int index = 0; index < this._navigatableWidgets.Count; ++index)
      {
        Vector2 closestPointOnEdge;
        float closestWidgetEdge = GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(this._navigatableWidgets[index], fromPos, movement, out closestPointOnEdge);
        if ((double) closestWidgetEdge < (double) num && this.IsWidgetVisible(this._navigatableWidgets[index]) && (!angleCheck || this.IsPositionAvailableForMovement(fromPos, closestPointOnEdge, movement)))
        {
          num = closestWidgetEdge;
          distance = num;
          regularInefficient = index;
        }
      }
      return regularInefficient;
    }

    private int GetClosesWidgetIndexForRegular(
      Vector2 fromPos,
      out float distance,
      GamepadNavigationTypes movement = GamepadNavigationTypes.None,
      bool angleCheck = false)
    {
      distance = -1f;
      List<int> intList = new List<int>();
      Vector2 relativePositionRatio = this.GetRelativePositionRatio(fromPos);
      int[] targetIndicesByRatio1 = GamepadNavigationScope.GetTargetIndicesByRatio(relativePositionRatio.X, 0, this._navigatableWidgets.Count - 1);
      int[] targetIndicesByRatio2 = GamepadNavigationScope.GetTargetIndicesByRatio(relativePositionRatio.Y, 0, this._navigatableWidgets.Count - 1);
      for (int index = 0; index < targetIndicesByRatio1.Length; ++index)
      {
        if (!intList.Contains(targetIndicesByRatio1[index]))
          intList.Add(targetIndicesByRatio1[index]);
      }
      for (int index = 0; index < targetIndicesByRatio2.Length; ++index)
      {
        if (!intList.Contains(targetIndicesByRatio2[index]))
          intList.Add(targetIndicesByRatio2[index]);
      }
      float num1 = float.MaxValue;
      int num2 = -1;
      int num3 = 0;
      for (int index1 = 0; index1 < intList.Count; ++index1)
      {
        int index2 = intList[index1];
        if (index2 != -1 && this.IsWidgetVisible(this._navigatableWidgets[index2]))
        {
          ++num3;
          Vector2 closestPointOnEdge;
          float closestWidgetEdge = GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(this._navigatableWidgets[index2], fromPos, movement, out closestPointOnEdge);
          if ((double) closestWidgetEdge < (double) num1 && (!angleCheck || this.IsPositionAvailableForMovement(fromPos, closestPointOnEdge, movement)))
          {
            num1 = closestWidgetEdge;
            distance = num1;
            num2 = index2;
          }
        }
      }
      return num3 == 0 ? this.GetClosestWidgetIndexForRegularInefficient(fromPos, out distance) : num2;
    }

    private static float InverseLerp(float fromValue, float toValue, float value)
    {
      return (double) fromValue == (double) toValue ? 0.0f : (float) (((double) value - (double) fromValue) / ((double) toValue - (double) fromValue));
    }

    private static int[] GetTargetIndicesFromListByRatio(float ratio, List<int> lookupIndices)
    {
      int num = TaleWorlds.Library.MathF.Round((float) lookupIndices.Count * ratio);
      return new int[5]
      {
        lookupIndices[Mathf.Clamp(num - 2, 0, lookupIndices.Count - 1)],
        lookupIndices[Mathf.Clamp(num - 1, 0, lookupIndices.Count - 1)],
        lookupIndices[Mathf.Clamp(num, 0, lookupIndices.Count - 1)],
        lookupIndices[Mathf.Clamp(num + 1, 0, lookupIndices.Count - 1)],
        lookupIndices[Mathf.Clamp(num + 2, 0, lookupIndices.Count - 1)]
      };
    }

    private static int[] GetTargetIndicesByRatio(
      float ratio,
      int startIndex,
      int endIndex,
      int arraySize = 5)
    {
      int num1 = TaleWorlds.Library.MathF.Round((float) startIndex + (float) (endIndex - startIndex) * ratio);
      int[] targetIndicesByRatio = new int[arraySize];
      int num2 = TaleWorlds.Library.MathF.Floor((float) arraySize / 2f);
      for (int index = 0; index < arraySize; ++index)
      {
        int num3 = -num2 + index;
        targetIndicesByRatio[index] = Mathf.Clamp(num1 - num3, 0, endIndex);
      }
      return targetIndicesByRatio;
    }

    private void SetCursorAreaExtensionsForChild(Widget child)
    {
      if ((double) this.ExtendChildrenCursorAreaLeft != 0.0)
        child.ExtendCursorAreaLeft = this.ExtendChildrenCursorAreaLeft;
      if ((double) this.ExtendChildrenCursorAreaRight != 0.0)
        child.ExtendCursorAreaRight = this.ExtendChildrenCursorAreaRight;
      if ((double) this.ExtendChildrenCursorAreaTop != 0.0)
        child.ExtendCursorAreaTop = this.ExtendChildrenCursorAreaTop;
      if ((double) this.ExtendChildrenCursorAreaBottom == 0.0)
        return;
      child.ExtendCursorAreaBottom = this.ExtendChildrenCursorAreaBottom;
    }

    private class WidgetNavigationIndexComparer : IComparer<Widget>
    {
      public int Compare(Widget x, Widget y)
      {
        return x.GamepadNavigationIndex.CompareTo(y.GamepadNavigationIndex);
      }
    }
  }
}
