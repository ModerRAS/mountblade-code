// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.GamepadNavigation.GauntletGamepadNavigationManager
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.GamepadNavigation
{
  public class GauntletGamepadNavigationManager
  {
    private IGamepadNavigationContext _latestCachedContext;
    private float _time;
    private bool _stopCursorNextFrame;
    private bool _isForcedCollectionsDirty;
    private GauntletGamepadNavigationManager.GamepadNavigationContextComparer _cachedNavigationContextComparer;
    private GauntletGamepadNavigationManager.ForcedScopeComparer _cachedForcedScopeComparer;
    private List<IGamepadNavigationContext> _sortedNavigationContexts;
    private Dictionary<IGamepadNavigationContext, GamepadNavigationScopeCollection> _navigationScopes;
    private List<GamepadNavigationScope> _availableScopesThisFrame;
    private List<GamepadNavigationScope> _unsortedScopes;
    private List<GamepadNavigationForcedScopeCollection> _forcedScopeCollections;
    private GamepadNavigationForcedScopeCollection _activeForcedScopeCollection;
    private GamepadNavigationScope _nextScopeToGainNavigation;
    private GamepadNavigationScope _activeNavigationScope;
    private Dictionary<Widget, List<GamepadNavigationScope>> _navigationScopeParents;
    private Dictionary<Widget, List<GamepadNavigationForcedScopeCollection>> _forcedNavigationScopeCollectionParents;
    private Dictionary<string, List<GamepadNavigationScope>> _layerNavigationScopes;
    private Dictionary<string, List<GamepadNavigationScope>> _navigationScopesById;
    private Dictionary<IGamepadNavigationContext, GauntletGamepadNavigationManager.ContextGamepadNavigationGainHandler> _navigationGainControllers;
    private float _navigationHoldTimer;
    private Vector2 _lastNavigatedWidgetPosition;
    private readonly float _mouseCursorMoveTime = 0.09f;
    private Vector2 _cursorMoveStartPosition = new Vector2(float.NaN, float.NaN);
    private float _cursorMoveStartTime = -1f;
    private Widget _latestGamepadNavigationWidget;
    private List<Widget> _navigationBlockingWidgets;
    private bool _isAvailableScopesDirty;
    private bool _shouldUpdateAvailableScopes;
    private float _autoRefreshTimer;
    private bool _wasCursorInsideActiveScopeLastFrame;

    public static GauntletGamepadNavigationManager Instance { get; private set; }

    private IGamepadNavigationContext LatestContext
    {
      get
      {
        if (this._latestCachedContext == null)
        {
          for (int index = 0; index < this._sortedNavigationContexts.Count; ++index)
          {
            if (this._sortedNavigationContexts[index].IsAvailableForNavigation())
            {
              this._latestCachedContext = this._sortedNavigationContexts[index];
              break;
            }
          }
        }
        return this._latestCachedContext;
      }
    }

    public bool IsFollowingMobileTarget { get; private set; }

    public bool IsHoldingDpadKeysForNavigation { get; private set; }

    public bool IsCursorMovingForNavigation { get; private set; }

    public bool IsInWrapMovement { get; private set; }

    private Vector2 MousePosition
    {
      get => (Vector2) Input.InputState.MousePositionPixel;
      set => Input.SetMousePosition((int) value.X, (int) value.Y);
    }

    private bool IsControllerActive => Input.IsGamepadActive;

    internal ReadOnlyDictionary<IGamepadNavigationContext, GamepadNavigationScopeCollection> NavigationScopes { get; private set; }

    internal ReadOnlyDictionary<Widget, List<GamepadNavigationScope>> NavigationScopeParents { get; private set; }

    internal ReadOnlyDictionary<Widget, List<GamepadNavigationForcedScopeCollection>> ForcedNavigationScopeParents { get; private set; }

    public Widget LastTargetedWidget
    {
      get
      {
        Widget lastNavigatedWidget = this._activeNavigationScope?.LastNavigatedWidget;
        return lastNavigatedWidget != null && (this.IsCursorMovingForNavigation || lastNavigatedWidget.IsPointInsideGamepadCursorArea(this.MousePosition)) ? lastNavigatedWidget : (Widget) null;
      }
    }

    public bool TargetedWidgetHasAction
    {
      get
      {
        if (this.LastTargetedWidget == null)
          return false;
        return this.LastTargetedWidget.UsedNavigationMovements != GamepadNavigationTypes.None || this.LastTargetedWidget.AllChildren.Any<Widget>((Func<Widget, bool>) (c => c.UsedNavigationMovements != 0)) || this.LastTargetedWidget.Parents.Any<Widget>((Func<Widget, bool>) (p => p.UsedNavigationMovements != 0));
      }
    }

    public bool AnyWidgetUsingNavigation
    {
      get
      {
        return this._navigationBlockingWidgets.Any<Widget>((Func<Widget, bool>) (x => x.IsUsingNavigation));
      }
    }

    private GauntletGamepadNavigationManager()
    {
      this._cachedNavigationContextComparer = new GauntletGamepadNavigationManager.GamepadNavigationContextComparer();
      this._cachedForcedScopeComparer = new GauntletGamepadNavigationManager.ForcedScopeComparer();
      this._navigationScopes = new Dictionary<IGamepadNavigationContext, GamepadNavigationScopeCollection>();
      this.NavigationScopes = new ReadOnlyDictionary<IGamepadNavigationContext, GamepadNavigationScopeCollection>((IDictionary<IGamepadNavigationContext, GamepadNavigationScopeCollection>) this._navigationScopes);
      this._navigationScopeParents = new Dictionary<Widget, List<GamepadNavigationScope>>();
      this._forcedNavigationScopeCollectionParents = new Dictionary<Widget, List<GamepadNavigationForcedScopeCollection>>();
      this.NavigationScopeParents = new ReadOnlyDictionary<Widget, List<GamepadNavigationScope>>((IDictionary<Widget, List<GamepadNavigationScope>>) this._navigationScopeParents);
      this.ForcedNavigationScopeParents = new ReadOnlyDictionary<Widget, List<GamepadNavigationForcedScopeCollection>>((IDictionary<Widget, List<GamepadNavigationForcedScopeCollection>>) this._forcedNavigationScopeCollectionParents);
      this._sortedNavigationContexts = new List<IGamepadNavigationContext>();
      this._availableScopesThisFrame = new List<GamepadNavigationScope>();
      this._unsortedScopes = new List<GamepadNavigationScope>();
      this._forcedScopeCollections = new List<GamepadNavigationForcedScopeCollection>();
      this._layerNavigationScopes = new Dictionary<string, List<GamepadNavigationScope>>();
      this._navigationScopesById = new Dictionary<string, List<GamepadNavigationScope>>();
      this._navigationGainControllers = new Dictionary<IGamepadNavigationContext, GauntletGamepadNavigationManager.ContextGamepadNavigationGainHandler>();
      this._navigationBlockingWidgets = new List<Widget>();
      this._isAvailableScopesDirty = false;
      this._isForcedCollectionsDirty = false;
      Input.OnGamepadActiveStateChanged += new Action(this.OnGamepadActiveStateChanged);
    }

    private void OnGamepadActiveStateChanged()
    {
      if (!this.IsControllerActive || (double) Input.MouseMoveX != 0.0 || (double) Input.MouseMoveY != 0.0)
        return;
      this._isAvailableScopesDirty = true;
      this._isForcedCollectionsDirty = true;
    }

    public static void Initialize()
    {
      if (GauntletGamepadNavigationManager.Instance != null)
        Debug.FailedAssert("Gamepad Navigation already initialized", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GauntletGamepadNavigationManager.cs", nameof (Initialize), 206);
      else
        GauntletGamepadNavigationManager.Instance = new GauntletGamepadNavigationManager();
    }

    public bool TryNavigateTo(Widget widget)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (widget != null && widget.GamepadNavigationIndex != -1 && this._navigationScopes.TryGetValue(widget.GamepadNavigationContext, out navigationScopeCollection))
      {
        for (int index = 0; index < navigationScopeCollection.VisibleScopes.Count; ++index)
        {
          GamepadNavigationScope visibleScope = navigationScopeCollection.VisibleScopes[index];
          if (visibleScope.IsAvailable() && (visibleScope.ParentWidget == widget || visibleScope.ParentWidget.CheckIsMyChildRecursive(widget)))
            return this.SetCurrentNavigatedWidget(visibleScope, widget);
        }
      }
      return false;
    }

    public bool TryNavigateTo(GamepadNavigationScope scope)
    {
      if (scope != null && scope.IsAvailable())
      {
        Widget widgetToPosition = scope.GetApproximatelyClosestWidgetToPosition(this.MousePosition);
        if (widgetToPosition != null)
          return this.SetCurrentNavigatedWidget(scope, widgetToPosition);
      }
      return false;
    }

    public void OnFinalize()
    {
      foreach (KeyValuePair<IGamepadNavigationContext, GamepadNavigationScopeCollection> navigationScope in this._navigationScopes)
        navigationScope.Value.OnFinalize();
      this._navigationScopes.Clear();
      this._navigationScopeParents.Clear();
      GauntletGamepadNavigationManager.Instance = (GauntletGamepadNavigationManager) null;
      Input.OnGamepadActiveStateChanged -= new Action(this.OnGamepadActiveStateChanged);
    }

    public void Update(float dt)
    {
      this._time += dt;
      if (this._stopCursorNextFrame)
      {
        this.IsCursorMovingForNavigation = false;
        this._stopCursorNextFrame = false;
      }
      if (this.IsControllerActive && (double) Input.MouseMoveX <= 0.0 && (double) Input.MouseMoveY <= 0.0)
      {
        GamepadNavigationScope activeNavigationScope = this._activeNavigationScope;
        if ((activeNavigationScope != null ? (!activeNavigationScope.IsAvailable() ? 1 : 0) : 1) == 0 && this._activeNavigationScope.ParentWidget.Context.GamepadNavigation.IsAvailableForNavigation() && !Input.IsAnyTouchActive)
          goto label_5;
      }
      this.OnDpadNavigationStopped();
label_5:
      foreach (KeyValuePair<IGamepadNavigationContext, GauntletGamepadNavigationManager.ContextGamepadNavigationGainHandler> navigationGainController in this._navigationGainControllers)
        navigationGainController.Value.Tick(dt);
      if (this.LastTargetedWidget != null)
      {
        double num1 = (double) Vector2.Distance(this.LastTargetedWidget.GlobalPosition + this.LastTargetedWidget.Size / 2f, this.MousePosition);
      }
      int num2 = (double) Input.GetKeyState(InputKey.ControllerRStick).X != 0.0 ? 1 : ((double) Input.GetKeyState(InputKey.ControllerRStick).Y != 0.0 ? 1 : 0);
      if ((double) this._autoRefreshTimer > -1.0)
      {
        this._autoRefreshTimer += dt;
        if ((double) this._autoRefreshTimer > 0.60000002384185791)
        {
          this._autoRefreshTimer = -1f;
          this._isAvailableScopesDirty = true;
        }
      }
      if (!this._isAvailableScopesDirty)
      {
        GamepadNavigationScope activeNavigationScope = this._activeNavigationScope;
        if ((activeNavigationScope != null ? (!activeNavigationScope.IsAvailable() ? 1 : 0) : 1) != 0)
          this._isAvailableScopesDirty = true;
      }
      this._sortedNavigationContexts.Clear();
      foreach (KeyValuePair<IGamepadNavigationContext, GamepadNavigationScopeCollection> navigationScope in this._navigationScopes)
      {
        this._sortedNavigationContexts.Add(navigationScope.Key);
        navigationScope.Value.HandleScopeVisibilities();
      }
      this._sortedNavigationContexts.Sort((IComparer<IGamepadNavigationContext>) this._cachedNavigationContextComparer);
      foreach (KeyValuePair<IGamepadNavigationContext, GamepadNavigationScopeCollection> navigationScope in this._navigationScopes)
      {
        if (navigationScope.Value.UninitializedScopes.Count > 0)
        {
          List<GamepadNavigationScope> list = navigationScope.Value.UninitializedScopes.ToList<GamepadNavigationScope>();
          for (int index = 0; index < list.Count; ++index)
            this.InitializeScope(navigationScope.Key, list[index]);
        }
      }
      if (this._unsortedScopes.Count > 0)
      {
        bool flag = false;
        for (int index = 0; index < this._unsortedScopes.Count; ++index)
        {
          if (this._unsortedScopes[index] == this._activeNavigationScope)
            flag = true;
          this._unsortedScopes[index].SortWidgets();
        }
        this._unsortedScopes.Clear();
        if (flag && !this._activeNavigationScope.DoNotAutoNavigateAfterSort && this._activeNavigationScope != null && this._activeNavigationScope.IsAvailable() && (this._wasCursorInsideActiveScopeLastFrame || this._activeNavigationScope.GetRectangle().IsPointInside(this.MousePosition)))
        {
          if (this._activeNavigationScope.ForceGainNavigationOnClosestChild)
            this.MoveCursorToClosestAvailableWidgetInScope(this._activeNavigationScope);
          else
            this.MoveCursorToFirstAvailableWidgetInScope(this._activeNavigationScope);
        }
      }
      if (this._activeForcedScopeCollection != null && !this._activeForcedScopeCollection.IsAvailable())
      {
        this._isAvailableScopesDirty = true;
        this._isForcedCollectionsDirty = true;
      }
      if (this._shouldUpdateAvailableScopes)
      {
        GamepadNavigationForcedScopeCollection forcedScopeCollection = this._activeForcedScopeCollection;
        this._activeForcedScopeCollection = this.FindAvailableForcedScope();
        if (this._activeForcedScopeCollection != null && forcedScopeCollection == null)
          this._activeForcedScopeCollection.PreviousScope = this._activeNavigationScope;
        this.RefreshAvailableScopes();
        this._shouldUpdateAvailableScopes = false;
        if (forcedScopeCollection != null && !forcedScopeCollection.IsAvailable())
          this.TryMoveCursorToPreviousScope(forcedScopeCollection);
        else if (this._nextScopeToGainNavigation != null)
        {
          this.MoveCursorToFirstAvailableWidgetInScope(this._nextScopeToGainNavigation);
          this._nextScopeToGainNavigation = (GamepadNavigationScope) null;
        }
        else
        {
          GamepadNavigationScope activeNavigationScope = this._activeNavigationScope;
          if ((activeNavigationScope != null ? (!activeNavigationScope.IsAvailable() ? 1 : 0) : 1) != 0 || !this._availableScopesThisFrame.Contains(this._activeNavigationScope))
            this.MoveCursorToBestAvailableScope(false);
        }
      }
      if (this._isAvailableScopesDirty)
      {
        this._shouldUpdateAvailableScopes = true;
        this._isAvailableScopesDirty = false;
      }
      this.HandleInput(dt);
      this.HandleCursorMovement();
      GamepadNavigationScope activeNavigationScope1 = this._activeNavigationScope;
      this._wasCursorInsideActiveScopeLastFrame = activeNavigationScope1 != null && activeNavigationScope1.GetRectangle().IsPointInside(this.MousePosition);
    }

    internal void OnMovieLoaded(IGamepadNavigationContext context, string movieName)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
      {
        List<GamepadNavigationScope> list = navigationScopeCollection.UninitializedScopes.ToList<GamepadNavigationScope>();
        for (int index = 0; index < list.Count; ++index)
        {
          if (!list[index].DoNotAutomaticallyFindChildren)
            this.InitializeScope(context, list[index]);
          this.AddItemToDictionaryList<string, GamepadNavigationScope>(this._layerNavigationScopes, movieName, list[index]);
        }
      }
      this._autoRefreshTimer = 0.0f;
      this._isAvailableScopesDirty = true;
      this._latestCachedContext = (IGamepadNavigationContext) null;
    }

    internal void OnMovieReleased(IGamepadNavigationContext context, string movieName)
    {
      List<GamepadNavigationScope> source;
      if (this._layerNavigationScopes.TryGetValue(movieName, out source))
      {
        List<GamepadNavigationScope> list = source.ToList<GamepadNavigationScope>();
        for (int index = 0; index < list.Count; ++index)
        {
          this.RemoveItemFromDictionaryList<string, GamepadNavigationScope>(this._layerNavigationScopes, movieName, list[index]);
          this.RemoveNavigationScope(context, list[index]);
        }
        this._latestCachedContext = (IGamepadNavigationContext) null;
      }
      this._autoRefreshTimer = 0.0f;
      this._isAvailableScopesDirty = true;
    }

    internal void OnContextAdded(IGamepadNavigationContext context)
    {
      this._navigationScopes.Add(context, new GamepadNavigationScopeCollection(context, new Action<GamepadNavigationScope>(this.OnScopeNavigatableWidgetsChanged), new Action<GamepadNavigationScope, bool>(this.OnScopeVisibilityChanged)));
      this._navigationGainControllers.Add(context, new GauntletGamepadNavigationManager.ContextGamepadNavigationGainHandler(context));
      this._latestCachedContext = (IGamepadNavigationContext) null;
    }

    private void OnContextRemoved(IGamepadNavigationContext context)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
      {
        navigationScopeCollection.OnFinalize();
        this._navigationScopes.Remove(context);
      }
      GauntletGamepadNavigationManager.ContextGamepadNavigationGainHandler navigationGainHandler;
      if (this._navigationGainControllers.TryGetValue(context, out navigationGainHandler))
      {
        navigationGainHandler.Clear();
        this._navigationGainControllers.Remove(context);
      }
      this._sortedNavigationContexts.Remove(context);
      this._latestCachedContext = (IGamepadNavigationContext) null;
    }

    internal void OnContextFinalized(IGamepadNavigationContext context)
    {
      int count1 = this._sortedNavigationContexts.Count;
      this.OnContextRemoved(context);
      int count2 = this._sortedNavigationContexts.Count;
      if (count1 != count2)
      {
        this._sortedNavigationContexts = this._navigationScopes.Keys.ToList<IGamepadNavigationContext>();
        this._sortedNavigationContexts.Sort((IComparer<IGamepadNavigationContext>) this._cachedNavigationContextComparer);
      }
      this._isAvailableScopesDirty = true;
    }

    private Vector2 GetTargetCursorPosition()
    {
      if (this._latestGamepadNavigationWidget == null)
        return (Vector2) Vec2.Invalid;
      Vector2 globalPosition = this._latestGamepadNavigationWidget.GlobalPosition;
      Vector2 size = this._latestGamepadNavigationWidget.Size;
      globalPosition.X -= this._latestGamepadNavigationWidget.ExtendCursorAreaLeft;
      globalPosition.Y -= this._latestGamepadNavigationWidget.ExtendCursorAreaTop;
      size.X += this._latestGamepadNavigationWidget.ExtendCursorAreaLeft + this._latestGamepadNavigationWidget.ExtendCursorAreaRight;
      size.Y += this._latestGamepadNavigationWidget.ExtendCursorAreaTop + this._latestGamepadNavigationWidget.ExtendCursorAreaBottom;
      return globalPosition + size / 2f;
    }

    private void RefreshAvailableScopes()
    {
      this._availableScopesThisFrame.Clear();
      if (this._activeForcedScopeCollection != null)
      {
        for (int index = 0; index < this._activeForcedScopeCollection.Scopes.Count; ++index)
          this._availableScopesThisFrame.Add(this._activeForcedScopeCollection.Scopes[index]);
      }
      else
      {
        for (int index1 = 0; index1 < this._sortedNavigationContexts.Count; ++index1)
        {
          IGamepadNavigationContext navigationContext = this._sortedNavigationContexts[index1];
          if (navigationContext.IsAvailableForNavigation())
          {
            for (int index2 = 0; index2 < this._navigationScopes[navigationContext].VisibleScopes.Count; ++index2)
            {
              GamepadNavigationScope visibleScope = this._navigationScopes[navigationContext].VisibleScopes[index2];
              if (visibleScope.IsAvailable())
              {
                Widget parentWidget = visibleScope.ParentWidget;
                Vector2 position = parentWidget.GlobalPosition + parentWidget.Size / 2f;
                if (!navigationContext.GetIsBlockedAtPosition(position))
                  this._availableScopesThisFrame.Add(visibleScope);
              }
            }
          }
        }
      }
    }

    internal void OnWidgetUsedNavigationMovementsUpdated(Widget widget)
    {
      if (widget.UsedNavigationMovements != GamepadNavigationTypes.None && !this._navigationBlockingWidgets.Contains(widget))
      {
        this._navigationBlockingWidgets.Add(widget);
      }
      else
      {
        if (widget.UsedNavigationMovements != GamepadNavigationTypes.None || !this._navigationBlockingWidgets.Contains(widget))
          return;
        this._navigationBlockingWidgets.Remove(widget);
      }
    }

    internal void AddForcedScopeCollection(
      GamepadNavigationForcedScopeCollection forcedCollection)
    {
      if (!this._forcedScopeCollections.Contains(forcedCollection))
      {
        this._forcedScopeCollections.Add(forcedCollection);
        this.AddItemToDictionaryList<Widget, GamepadNavigationForcedScopeCollection>(this._forcedNavigationScopeCollectionParents, forcedCollection.ParentWidget, forcedCollection);
        this.CollectScopesForForcedCollection(forcedCollection);
        forcedCollection.OnAvailabilityChanged = new Action<GamepadNavigationForcedScopeCollection>(this.OnForcedScopeCollectionAvailabilityStateChanged);
        this._isForcedCollectionsDirty = true;
      }
      else
        Debug.FailedAssert("Trying to add a navigation scope collection more than once", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GauntletGamepadNavigationManager.cs", nameof (AddForcedScopeCollection), 598);
      this._isAvailableScopesDirty = true;
    }

    internal void RemoveForcedScopeCollection(GamepadNavigationForcedScopeCollection collection)
    {
      if (this._forcedScopeCollections.Contains(collection))
      {
        collection.ClearScopes();
        this._forcedScopeCollections.Remove(collection);
        if (collection.ParentWidget != null && this._forcedNavigationScopeCollectionParents.ContainsKey(collection.ParentWidget))
          this.RemoveItemFromDictionaryList<Widget, GamepadNavigationForcedScopeCollection>(this._forcedNavigationScopeCollectionParents, collection.ParentWidget, collection);
      }
      collection.OnAvailabilityChanged = (Action<GamepadNavigationForcedScopeCollection>) null;
      collection.ParentWidget = (Widget) null;
      this._isForcedCollectionsDirty = true;
      this._isAvailableScopesDirty = true;
    }

    internal void AddNavigationScope(
      IGamepadNavigationContext context,
      GamepadNavigationScope scope,
      bool initializeScope = false)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
      {
        navigationScopeCollection.AddScope(scope);
      }
      else
      {
        this.OnContextAdded(context);
        this._navigationScopes[context].AddScope(scope);
      }
      this.AddItemToDictionaryList<Widget, GamepadNavigationScope>(this._navigationScopeParents, scope.ParentWidget, scope);
      if (initializeScope)
        this.InitializeScope(context, scope);
      this._isAvailableScopesDirty = true;
    }

    internal void RemoveNavigationScope(
      IGamepadNavigationContext context,
      GamepadNavigationScope scope)
    {
      if (scope == null)
      {
        Debug.FailedAssert("Trying to remove null navigation data", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GauntletGamepadNavigationManager.cs", nameof (RemoveNavigationScope), 655);
      }
      else
      {
        this._availableScopesThisFrame.Remove(scope);
        this._unsortedScopes.Remove(scope);
        GamepadNavigationScopeCollection navigationScopeCollection;
        if (this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
        {
          navigationScopeCollection.RemoveScope(scope);
          scope.ClearNavigatableWidgets();
          if (navigationScopeCollection.GetTotalNumberOfScopes() == 0)
            this.OnContextRemoved(context);
        }
        else
        {
          foreach (KeyValuePair<IGamepadNavigationContext, GamepadNavigationScopeCollection> keyValuePair in this._navigationScopes.Where<KeyValuePair<IGamepadNavigationContext, GamepadNavigationScopeCollection>>((Func<KeyValuePair<IGamepadNavigationContext, GamepadNavigationScopeCollection>, bool>) (x => x.Value.AllScopes.Contains(scope))))
          {
            keyValuePair.Value.RemoveScope(scope);
            scope.ClearNavigatableWidgets();
            if (keyValuePair.Value.GetTotalNumberOfScopes() == 0)
              this.OnContextRemoved(context);
          }
        }
        for (int index = 0; index < this._forcedScopeCollections.Count; ++index)
        {
          if (this._forcedScopeCollections[index].Scopes.Contains(scope))
            this._forcedScopeCollections[index].RemoveScope(scope);
        }
        if (scope.ParentWidget != null)
          this._navigationScopeParents.Remove(scope.ParentWidget);
        foreach (KeyValuePair<Widget, List<GamepadNavigationScope>> navigationScopeParent in this._navigationScopeParents)
          navigationScopeParent.Value.Remove(scope);
        List<GamepadNavigationScope> gamepadNavigationScopeList1;
        if (this._navigationScopesById.TryGetValue(scope.ScopeID, out gamepadNavigationScopeList1) && gamepadNavigationScopeList1.Contains(scope))
          this.RemoveItemFromDictionaryList<string, GamepadNavigationScope>(this._navigationScopesById, scope.ScopeID, scope);
        bool flag = false;
        foreach (KeyValuePair<IGamepadNavigationContext, GamepadNavigationScopeCollection> navigationScope in this._navigationScopes)
        {
          if (navigationScope.Value.HasScopeInAnyList(scope))
          {
            navigationScope.Value.RemoveScope(scope);
            List<GamepadNavigationScope> gamepadNavigationScopeList2;
            if (scope.ParentWidget != null && this._navigationScopeParents.TryGetValue(scope.ParentWidget, out gamepadNavigationScopeList2))
              gamepadNavigationScopeList2.Remove(scope);
            scope.ClearNavigatableWidgets();
            flag = true;
          }
        }
        if (flag)
          Debug.FailedAssert("Failed to remove scope from all containers: " + scope.ScopeID, "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GauntletGamepadNavigationManager.cs", nameof (RemoveNavigationScope), 738);
        scope.ParentWidget = (Widget) null;
        if (this._activeNavigationScope == scope)
          this._activeNavigationScope = (GamepadNavigationScope) null;
        this._latestCachedContext = (IGamepadNavigationContext) null;
        for (int index = 0; index < this._availableScopesThisFrame.Count; ++index)
          this._availableScopesThisFrame[index].IsAdditionalMovementsDirty = true;
        this._isAvailableScopesDirty = true;
      }
    }

    internal void OnWidgetNavigationStatusChanged(IGamepadNavigationContext context, Widget widget)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (!this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
        return;
      for (int index = 0; index < navigationScopeCollection.AllScopes.Count; ++index)
      {
        GamepadNavigationScope allScope = navigationScopeCollection.AllScopes[index];
        if (allScope.ParentWidget.CheckIsMyChildRecursive(widget) || widget.CheckIsMyChildRecursive(allScope.ParentWidget))
          allScope.RefreshNavigatableChildren();
      }
    }

    internal void OnWidgetNavigationIndexUpdated(IGamepadNavigationContext context, Widget widget)
    {
      if (widget == null)
        return;
      GamepadNavigationScope parentScopeOfWidget = this.FindClosestParentScopeOfWidget(widget);
      if (parentScopeOfWidget == null || parentScopeOfWidget.DoNotAutomaticallyFindChildren)
        return;
      parentScopeOfWidget.RemoveWidget(widget);
      if (widget.GamepadNavigationIndex == -1)
        return;
      parentScopeOfWidget.AddWidget(widget);
    }

    internal bool HasNavigationScope(
      IGamepadNavigationContext context,
      GamepadNavigationScope scope)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (!this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
        return false;
      return navigationScopeCollection.VisibleScopes.Contains(scope) || navigationScopeCollection.UninitializedScopes.Contains(scope) || navigationScopeCollection.InvisibleScopes.Contains(scope);
    }

    internal bool HasNavigationScope(
      IGamepadNavigationContext context,
      Func<GamepadNavigationScope, bool> predicate)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (!this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
        return false;
      return navigationScopeCollection.VisibleScopes.Any<GamepadNavigationScope>((Func<GamepadNavigationScope, bool>) (x => predicate(x))) || navigationScopeCollection.InvisibleScopes.Any<GamepadNavigationScope>((Func<GamepadNavigationScope, bool>) (x => predicate(x)));
    }

    private void OnActiveScopeParentChanged(
      GamepadNavigationScope oldParent,
      GamepadNavigationScope newParent)
    {
      if (oldParent == null || newParent != null || oldParent.LatestNavigationElementIndex == -1 || !oldParent.IsAvailable())
        return;
      this._isAvailableScopesDirty = true;
    }

    private void OnScopeVisibilityChanged(GamepadNavigationScope scope, bool isVisible)
    {
      this._isAvailableScopesDirty = true;
    }

    private void OnForcedScopeCollectionAvailabilityStateChanged(
      GamepadNavigationForcedScopeCollection scopeCollection)
    {
      this._isAvailableScopesDirty = true;
      this._isForcedCollectionsDirty = true;
    }

    private void OnScopeNavigatableWidgetsChanged(GamepadNavigationScope scope)
    {
      if (!this._unsortedScopes.Contains(scope))
        this._unsortedScopes.Add(scope);
      if (!scope.IsInitialized)
        return;
      this._isAvailableScopesDirty = true;
    }

    private void CollectScopesForForcedCollection(GamepadNavigationForcedScopeCollection collection)
    {
      collection.ClearScopes();
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (!this._navigationScopes.TryGetValue(collection.ParentWidget.GamepadNavigationContext, out navigationScopeCollection))
        return;
      for (int index = 0; index < navigationScopeCollection.AllScopes.Count; ++index)
      {
        GamepadNavigationScope allScope = navigationScopeCollection.AllScopes[index];
        if (collection.ParentWidget == allScope.ParentWidget || collection.ParentWidget.CheckIsMyChildRecursive(allScope.ParentWidget))
          collection.AddScope(allScope);
      }
    }

    private void InitializeScope(IGamepadNavigationContext context, GamepadNavigationScope scope)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
        navigationScopeCollection.OnNavigationScopeInitialized(scope);
      scope.Initialize();
      for (int index = this._forcedScopeCollections.Count - 1; index >= 0; --index)
      {
        if (this._forcedScopeCollections[index].ParentWidget == scope.ParentWidget || this._forcedScopeCollections[index].ParentWidget.CheckIsMyChildRecursive(scope.ParentWidget))
        {
          this._forcedScopeCollections[index].AddScope(scope);
          break;
        }
      }
      for (int index = 0; index < this._availableScopesThisFrame.Count; ++index)
        this._availableScopesThisFrame[index].IsAdditionalMovementsDirty = true;
      if (!string.IsNullOrEmpty(scope.ScopeID))
        this.AddItemToDictionaryList<string, GamepadNavigationScope>(this._navigationScopesById, scope.ScopeID, scope);
      if (scope.ParentScope == null)
      {
        foreach (Widget parent in scope.ParentWidget.Parents)
        {
          List<GamepadNavigationScope> gamepadNavigationScopeList;
          if (GauntletGamepadNavigationManager.Instance.NavigationScopeParents.TryGetValue(parent, out gamepadNavigationScopeList))
          {
            if (gamepadNavigationScopeList.Count > 0)
            {
              scope.SetParentScope(gamepadNavigationScopeList[0]);
              break;
            }
            break;
          }
        }
      }
      this._isAvailableScopesDirty = true;
    }

    private void AddItemToDictionaryList<TKey, TValue>(
      Dictionary<TKey, List<TValue>> sourceDict,
      TKey key,
      TValue item)
    {
      List<TValue> objList;
      if (sourceDict.TryGetValue(key, out objList))
      {
        if (!objList.Contains(item))
          objList.Add(item);
        else
          Debug.FailedAssert("Trying to add same item to source dictionary twice", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GauntletGamepadNavigationManager.cs", nameof (AddItemToDictionaryList), 918);
      }
      else
        sourceDict.Add(key, new List<TValue>() { item });
    }

    private void RemoveItemFromDictionaryList<TKey, TValue>(
      Dictionary<TKey, List<TValue>> sourceDict,
      TKey key,
      TValue item)
    {
      List<TValue> objList;
      if (sourceDict.TryGetValue(key, out objList))
      {
        objList.Remove(item);
        if (objList.Count != 0)
          return;
        sourceDict.Remove(key);
      }
      else
        Debug.FailedAssert("Trying to remove non-existent item from source dictionary", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GauntletGamepadNavigationManager.cs", nameof (RemoveItemFromDictionaryList), 939);
    }

    internal void OnWidgetHoverBegin(Widget widget)
    {
      if (this.IsCursorMovingForNavigation || this.IsInWrapMovement || widget.GamepadNavigationIndex == -1 || this._isAvailableScopesDirty || this._shouldUpdateAvailableScopes)
        return;
      GamepadNavigationForcedScopeCollection forcedScopeCollection = this._activeForcedScopeCollection;
      if ((forcedScopeCollection != null ? (forcedScopeCollection.Scopes.Contains(this._activeNavigationScope) ? 1 : 0) : 1) == 0)
        return;
      int indexOfWidget1 = this._activeNavigationScope.FindIndexOfWidget(widget);
      if (this._activeNavigationScope != null && indexOfWidget1 != -1)
      {
        this._activeNavigationScope.LatestNavigationElementIndex = indexOfWidget1;
      }
      else
      {
        for (int index = 0; index < this._availableScopesThisFrame.Count; ++index)
        {
          GamepadNavigationScope scope = this._availableScopesThisFrame[index];
          int indexOfWidget2 = scope.FindIndexOfWidget(widget);
          if (!scope.DoNotAutoGainNavigationOnInit && indexOfWidget2 != -1)
          {
            if (this._activeNavigationScope == scope || !scope.IsAvailable())
              break;
            this.SetActiveNavigationScope(scope);
            this._activeNavigationScope.LatestNavigationElementIndex = indexOfWidget2;
            break;
          }
        }
      }
    }

    internal void OnWidgetHoverEnd(Widget widget)
    {
      if (!this.IsControllerActive || this.IsCursorMovingForNavigation || widget.GamepadNavigationIndex == -1)
        return;
      GamepadNavigationScope activeNavigationScope = this._activeNavigationScope;
      if ((activeNavigationScope != null ? (activeNavigationScope.IsAvailable() ? 1 : 0) : 0) == 0)
        return;
      this._activeNavigationScope.GetRectangle().IsPointInside(this.MousePosition);
    }

    internal void OnWidgetDisconnectedFromRoot(Widget widget)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (this._navigationScopes.TryGetValue(widget.GamepadNavigationContext, out navigationScopeCollection))
        navigationScopeCollection.OnWidgetDisconnectedFromRoot(widget);
      List<GamepadNavigationScope> source;
      if (this._navigationScopeParents.TryGetValue(widget, out source))
      {
        List<GamepadNavigationScope> list = source.ToList<GamepadNavigationScope>();
        for (int index = 0; index < list.Count; ++index)
        {
          list[index].ClearNavigatableWidgets();
          this.RemoveNavigationScope(widget.GamepadNavigationContext, list[index]);
        }
      }
      List<GamepadNavigationForcedScopeCollection> forcedScopeCollectionList;
      if (!this._forcedNavigationScopeCollectionParents.TryGetValue(widget, out forcedScopeCollectionList))
        return;
      for (int index = 0; index < forcedScopeCollectionList.Count; ++index)
        this.RemoveForcedScopeCollection(forcedScopeCollectionList[index]);
    }

    internal void SetContextNavigationGainAfterTime(
      IGamepadNavigationContext context,
      float seconds,
      Func<bool> predicate)
    {
      GauntletGamepadNavigationManager.ContextGamepadNavigationGainHandler navigationGainHandler;
      if (!this._navigationGainControllers.TryGetValue(context, out navigationGainHandler))
        return;
      navigationGainHandler.GainNavigationAfterTime(seconds, predicate);
    }

    internal void SetContextNavigationGainAfterFrames(
      IGamepadNavigationContext context,
      int frames,
      Func<bool> predicate)
    {
      GauntletGamepadNavigationManager.ContextGamepadNavigationGainHandler navigationGainHandler;
      if (!this._navigationGainControllers.TryGetValue(context, out navigationGainHandler))
        return;
      navigationGainHandler.GainNavigationAfterFrames(frames, predicate);
    }

    internal void OnContextGainedNavigation(IGamepadNavigationContext context)
    {
      GamepadNavigationScopeCollection navigationScopeCollection;
      if (!this.IsControllerActive || context == null || this._activeNavigationScope?.ParentWidget?.GamepadNavigationContext == context || !context.IsAvailableForNavigation() || !this._navigationScopes.TryGetValue(context, out navigationScopeCollection))
        return;
      this.RefreshAvailableScopes();
      GamepadNavigationScope scope = navigationScopeCollection.VisibleScopes.FirstOrDefault<GamepadNavigationScope>((Func<GamepadNavigationScope, bool>) (x => x.IsDefaultNavigationScope && x.IsAvailable()));
      if (scope != null && this._availableScopesThisFrame.Contains(scope))
      {
        if (!this._availableScopesThisFrame.Contains(scope))
          return;
        this.MoveCursorToFirstAvailableWidgetInScope(scope);
      }
      else
      {
        for (int index = 0; index < this._availableScopesThisFrame.Count; ++index)
        {
          if (navigationScopeCollection.HasScopeInAnyList(this._availableScopesThisFrame[index]))
          {
            this.MoveCursorToFirstAvailableWidgetInScope(this._availableScopesThisFrame[index]);
            return;
          }
        }
        for (int index = 0; index < navigationScopeCollection.VisibleScopes.Count; ++index)
        {
          if (navigationScopeCollection.VisibleScopes[index].IsAvailable() && this._availableScopesThisFrame.Contains(this._nextScopeToGainNavigation))
          {
            this._nextScopeToGainNavigation = navigationScopeCollection.VisibleScopes[index];
            break;
          }
        }
      }
    }

    private void SetActiveNavigationScope(GamepadNavigationScope scope)
    {
      if (scope == null || scope == this._activeNavigationScope)
        return;
      if (this._activeForcedScopeCollection != null && this._activeForcedScopeCollection.Scopes.Contains(scope))
        this._activeForcedScopeCollection.ActiveScope = scope;
      if (this._activeNavigationScope != null)
        this._activeNavigationScope.OnParentScopeChanged -= new Action<GamepadNavigationScope, GamepadNavigationScope>(this.OnActiveScopeParentChanged);
      GamepadNavigationScope activeNavigationScope = this._activeNavigationScope;
      this._activeNavigationScope = scope;
      this._activeNavigationScope.PreviousScope = activeNavigationScope;
      activeNavigationScope?.SetIsActiveScope(false);
      this._activeNavigationScope.SetIsActiveScope(true);
      if (this._activeNavigationScope == null)
        return;
      this._activeNavigationScope.OnParentScopeChanged += new Action<GamepadNavigationScope, GamepadNavigationScope>(this.OnActiveScopeParentChanged);
    }

    private void OnGamepadNavigation(GamepadNavigationTypes movement)
    {
      if (this._isAvailableScopesDirty || this._isForcedCollectionsDirty || this.LatestContext == null || this.AnyWidgetUsingNavigation)
        return;
      if (this._activeNavigationScope?.ParentWidget != null)
      {
        GamepadNavigationScope activeNavigationScope = this._activeNavigationScope;
        if ((activeNavigationScope != null ? (!activeNavigationScope.IsAvailable() ? 1 : 0) : 1) == 0)
        {
          if (this.HandleGamepadNavigation(movement) && this._latestGamepadNavigationWidget != null)
          {
            GamepadNavigationTypes toReachRectangle = GamepadNavigationHelper.GetMovementsToReachRectangle(this.MousePosition, new Rectangle(this._latestGamepadNavigationWidget.GlobalPosition.X, this._latestGamepadNavigationWidget.GlobalPosition.Y, this._latestGamepadNavigationWidget.Size.X, this._latestGamepadNavigationWidget.Size.Y));
            if (((toReachRectangle & GamepadNavigationTypes.Left) == GamepadNavigationTypes.None || movement != GamepadNavigationTypes.Right) && ((toReachRectangle & GamepadNavigationTypes.Right) == GamepadNavigationTypes.None || movement != GamepadNavigationTypes.Left) && ((toReachRectangle & GamepadNavigationTypes.Up) == GamepadNavigationTypes.None || movement != GamepadNavigationTypes.Down) && ((toReachRectangle & GamepadNavigationTypes.Down) == GamepadNavigationTypes.None || movement != GamepadNavigationTypes.Up))
              return;
            this.IsInWrapMovement = true;
            return;
          }
          if (this.IsCursorMovingForNavigation || this.IsInWrapMovement || this._activeNavigationScope != null && this._activeNavigationScope.GetRectangle().IsPointInside(this.MousePosition))
            return;
          this.MoveCursorToBestAvailableScope(true, movement);
          return;
        }
      }
      this.MoveCursorToBestAvailableScope(false, movement);
    }

    private bool HandleGamepadNavigation(GamepadNavigationTypes movement)
    {
      if (this._activeNavigationScope?.ParentWidget == null)
      {
        Debug.FailedAssert("Active navigation scope or it's parent widget shouldn't be null", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GauntletGamepadNavigationManager.cs", nameof (HandleGamepadNavigation), 1164);
        this.MoveCursorToBestAvailableScope(true);
        return false;
      }
      if (!this.IsInWrapMovement)
      {
        if ((this._activeNavigationScope.ScopeMovements & movement) == GamepadNavigationTypes.None && (this._activeNavigationScope.AlternateScopeMovements & movement) == GamepadNavigationTypes.None)
        {
          bool flag = this.NavigateBetweenScopes(movement, this._activeNavigationScope);
          if (!flag && !this.IsHoldingDpadKeysForNavigation)
          {
            Widget lastNavigatedWidget = this._activeNavigationScope.LastNavigatedWidget;
            if ((lastNavigatedWidget != null ? (!lastNavigatedWidget.IsPointInsideGamepadCursorArea(this.MousePosition) ? 1 : 0) : 1) != 0)
            {
              this.SetCurrentNavigatedWidget(this._activeNavigationScope, this._activeNavigationScope.LastNavigatedWidget);
              flag = true;
            }
          }
          return flag;
        }
        if (this._activeNavigationScope.IsAvailable())
        {
          bool flag1 = this.NavigateWithinScope(this._activeNavigationScope, movement);
          if (!flag1 && !this.IsHoldingDpadKeysForNavigation)
          {
            GamepadNavigationScope activeNavigationScope = this._activeNavigationScope;
            int num;
            if (activeNavigationScope == null)
            {
              num = 1;
            }
            else
            {
              bool? nullable = activeNavigationScope.LastNavigatedWidget?.IsPointInsideMeasuredArea(this.MousePosition);
              bool flag2 = true;
              num = !(nullable.GetValueOrDefault() == flag2 & nullable.HasValue) ? 1 : 0;
            }
            if (num != 0)
              flag1 = this.MoveCursorToBestAvailableScope(true, movement);
          }
          return flag1;
        }
      }
      return false;
    }

    private bool NavigateBetweenScopes(
      GamepadNavigationTypes movement,
      GamepadNavigationScope currentScope)
    {
      this.RefreshExitMovementForScope(currentScope, movement);
      GamepadNavigationScope interScopeMovement = currentScope.InterScopeMovements[movement];
      if (interScopeMovement != null)
      {
        Widget bestWidgetToScope1 = this.GetBestWidgetToScope(currentScope, interScopeMovement, movement);
        if (bestWidgetToScope1 != null)
        {
          if (interScopeMovement.ChildScopes.Count > 0)
          {
            float distanceToScope;
            GamepadNavigationScope scopeAtDirection = GamepadNavigationHelper.GetClosestChildScopeAtDirection(interScopeMovement, this.MousePosition, movement, false, out distanceToScope);
            float closestWidgetEdge = GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(interScopeMovement.ParentWidget, this.MousePosition, movement);
            if (scopeAtDirection != null && scopeAtDirection != currentScope && (double) distanceToScope < (double) closestWidgetEdge)
            {
              Widget bestWidgetToScope2 = this.GetBestWidgetToScope(currentScope, scopeAtDirection, movement);
              if (bestWidgetToScope2 != null)
              {
                this.SetCurrentNavigatedWidget(scopeAtDirection, bestWidgetToScope2);
                return true;
              }
            }
          }
          else if (currentScope.ParentScope != null && (currentScope.ParentScope.ScopeMovements & movement) != GamepadNavigationTypes.None)
          {
            Widget bestWidgetToScope3 = this.GetBestWidgetToScope(currentScope, currentScope.ParentScope, movement);
            if (bestWidgetToScope3 != null && (double) GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(bestWidgetToScope3, this.MousePosition, movement) < (double) GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(interScopeMovement.ParentWidget, this.MousePosition, movement))
            {
              this.SetCurrentNavigatedWidget(currentScope.ParentScope, bestWidgetToScope3);
              return true;
            }
          }
          this.SetCurrentNavigatedWidget(interScopeMovement, bestWidgetToScope1);
          return true;
        }
      }
      return false;
    }

    private bool NavigateWithinScope(GamepadNavigationScope scope, GamepadNavigationTypes movement)
    {
      if (scope.NavigatableWidgets.Count == 0 || (scope.ScopeMovements & movement) == GamepadNavigationTypes.None && (scope.AlternateScopeMovements & movement) == GamepadNavigationTypes.None)
        return false;
      int num1 = movement == GamepadNavigationTypes.Right || movement == GamepadNavigationTypes.Down ? 1 : -1;
      if (scope.LatestNavigationElementIndex < 0 || scope.LatestNavigationElementIndex >= scope.NavigatableWidgets.Count)
        scope.LatestNavigationElementIndex = scope.NavigatableWidgets.Count - 1;
      int navigationElementIndex = scope.LatestNavigationElementIndex;
      int index = navigationElementIndex;
      if ((movement & scope.AlternateScopeMovements) != GamepadNavigationTypes.None)
        num1 *= scope.AlternateMovementStepSize;
      ReadOnlyCollection<Widget> navigatableWidgets = scope.NavigatableWidgets;
      bool flag1 = false;
      do
      {
        if (!scope.HasCircularMovement)
        {
          bool flag2 = false;
          if (scope.AlternateMovementStepSize > 0)
          {
            if ((movement & scope.ScopeMovements) != GamepadNavigationTypes.None && Math.Abs(num1) == 1)
            {
              if (index % scope.AlternateMovementStepSize == 0 && num1 < 0)
                flag2 = true;
              else if (index % scope.AlternateMovementStepSize == scope.AlternateMovementStepSize - 1 && num1 > 0)
                flag2 = true;
              else if (index + num1 < 0 || index + num1 > scope.NavigatableWidgets.Count - 1)
                flag2 = true;
            }
            if (!flag2 && (movement & scope.AlternateScopeMovements) != GamepadNavigationTypes.None && Math.Abs(num1) > 1)
            {
              int num2 = scope.NavigatableWidgets.Count % scope.AlternateMovementStepSize;
              if (scope.NavigatableWidgets.Count > 0 && num2 == 0)
                num2 = scope.AlternateMovementStepSize;
              int num3;
              if (num2 > 0)
              {
                num3 = scope.NavigatableWidgets.Count - num2;
                if (scope.NavigatableWidgets.Count != num2)
                {
                  if (index < num3 && index + num1 >= scope.NavigatableWidgets.Count)
                  {
                    this.SetCurrentNavigatedWidget(scope, scope.GetLastAvailableWidget());
                    return true;
                  }
                  if (index >= num3 && index + num1 >= scope.NavigatableWidgets.Count)
                    flag2 = true;
                }
                else
                  flag2 = true;
              }
              else
                num3 = Math.Max(0, scope.NavigatableWidgets.Count - scope.AlternateMovementStepSize - 1);
              if (index > num3 && index < scope.NavigatableWidgets.Count && num1 > 1)
                flag2 = true;
              if (index >= 0 && index < scope.AlternateMovementStepSize && num1 < 1)
                flag2 = true;
            }
          }
          else if (index + num1 < 0 || index + num1 > scope.NavigatableWidgets.Count - 1)
            flag2 = true;
          if (flag2)
            return this.NavigateBetweenScopes(movement, this._activeNavigationScope);
        }
        int num4 = index + num1;
        if (num4 > scope.NavigatableWidgets.Count - 1 && !scope.HasCircularMovement)
          return false;
        index = num4 % scope.NavigatableWidgets.Count;
        if (index < 0)
          index = navigatableWidgets.Count - 1;
        if (scope.IsWidgetVisible(navigatableWidgets[index]))
        {
          flag1 = true;
          break;
        }
      }
      while (index >= 0 && index < navigatableWidgets.Count && index != navigationElementIndex);
      if (!(index >= 0 & flag1))
        return false;
      if (scope.ChildScopes.Count > 0)
      {
        float distanceToScope;
        GamepadNavigationScope scopeAtDirection = GamepadNavigationHelper.GetClosestChildScopeAtDirection(scope, this.MousePosition, movement, false, out distanceToScope);
        if ((double) distanceToScope != -1.0 && scopeAtDirection != null)
        {
          Vector2 closestPointOnEdge;
          double closestWidgetEdge = (double) GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(navigatableWidgets[index], this.MousePosition, movement, out closestPointOnEdge);
          if ((double) GamepadNavigationHelper.GetDirectionalDistanceBetweenTwoPoints(movement, this.MousePosition, closestPointOnEdge) > (double) distanceToScope)
          {
            this.SetCurrentNavigatedWidget(scopeAtDirection, scopeAtDirection.GetApproximatelyClosestWidgetToPosition(this.MousePosition, movement));
            return true;
          }
        }
      }
      this.SetCurrentNavigatedWidget(scope, scope.NavigatableWidgets[index]);
      return true;
    }

    private bool SetCurrentNavigatedWidget(GamepadNavigationScope scope, Widget widget)
    {
      if (scope != null && (double) Input.MouseMoveX == 0.0 && (double) Input.MouseMoveY == 0.0)
      {
        int indexOfWidget = scope.FindIndexOfWidget(widget);
        if (indexOfWidget != -1)
        {
          if (this._activeNavigationScope != scope)
            this.SetActiveNavigationScope(scope);
          this._latestGamepadNavigationWidget = widget;
          this._activeNavigationScope.LatestNavigationElementIndex = indexOfWidget;
          if (this.IsControllerActive)
          {
            this._cursorMoveStartTime = this._time;
            this._cursorMoveStartPosition = this.MousePosition;
            this._stopCursorNextFrame = false;
            this.IsCursorMovingForNavigation = true;
            this._latestGamepadNavigationWidget.OnGamepadNavigationFocusGain();
          }
          return true;
        }
      }
      return false;
    }

    private bool MoveCursorToBestAvailableScope(
      bool isFromInput,
      GamepadNavigationTypes preferredMovement = GamepadNavigationTypes.None)
    {
      GamepadNavigationScope scope = (GamepadNavigationScope) null;
      if (preferredMovement != GamepadNavigationTypes.None)
        scope = GamepadNavigationHelper.GetClosestScopeAtDirectionFromList(this._availableScopesThisFrame, this.MousePosition, preferredMovement, isFromInput, false, out float _);
      if (scope == null)
        scope = GamepadNavigationHelper.GetClosestScopeFromList(this._availableScopesThisFrame, this.MousePosition, true);
      if (scope != null)
      {
        bool flag = this._activeForcedScopeCollection != null && this._activeForcedScopeCollection.Scopes.Contains(this._activeNavigationScope) && scope.LastNavigatedWidget != null;
        Widget widget = ((this._activeNavigationScope == null || this._activeNavigationScope.IsAvailable() ? 0 : (this._activeNavigationScope.ParentScope == scope ? 1 : 0)) | (flag ? 1 : 0)) == 0 ? (isFromInput || scope.ForceGainNavigationOnClosestChild ? (preferredMovement == GamepadNavigationTypes.None ? scope.GetApproximatelyClosestWidgetToPosition(this.MousePosition) : scope.GetApproximatelyClosestWidgetToPosition(this.MousePosition, preferredMovement)) : scope.GetFirstAvailableWidget()) : scope.LastNavigatedWidget;
        if (widget != null)
        {
          this.SetCurrentNavigatedWidget(scope, widget);
          return true;
        }
      }
      return false;
    }

    private void MoveCursorToFirstAvailableWidgetInScope(GamepadNavigationScope scope)
    {
      this.SetCurrentNavigatedWidget(scope, scope.GetFirstAvailableWidget());
    }

    private void MoveCursorToClosestAvailableWidgetInScope(GamepadNavigationScope scope)
    {
      this.SetCurrentNavigatedWidget(scope, scope.GetApproximatelyClosestWidgetToPosition(this.MousePosition));
    }

    private void TryMoveCursorToPreviousScope(
      GamepadNavigationForcedScopeCollection fromCollection)
    {
      GamepadNavigationScope previousScope = fromCollection?.PreviousScope;
      if (previousScope == null || !this._availableScopesThisFrame.Contains(previousScope))
        return;
      if (previousScope.LastNavigatedWidget == null)
        this.SetCurrentNavigatedWidget(previousScope, previousScope.GetFirstAvailableWidget());
      else
        this.SetCurrentNavigatedWidget(previousScope, previousScope.LastNavigatedWidget);
    }

    private GamepadNavigationScope GetBestScopeAtDirectionFrom(
      GamepadNavigationScope fromScope,
      GamepadNavigationTypes movement)
    {
      if (fromScope.ChildScopes.Count > 0 && fromScope.HasMovement(movement))
      {
        float distanceToScope;
        GamepadNavigationScope scopeAtDirection = GamepadNavigationHelper.GetClosestChildScopeAtDirection(fromScope, this.MousePosition, movement, false, out distanceToScope);
        if (scopeAtDirection != null && scopeAtDirection != this._activeNavigationScope && (double) distanceToScope > 0.0)
          return scopeAtDirection;
      }
      GamepadNavigationScope scopeAtDirectionFrom = fromScope.ManualScopes[movement];
      if (scopeAtDirectionFrom == null)
      {
        if (!string.IsNullOrEmpty(fromScope.ManualScopeIDs[movement]))
          scopeAtDirectionFrom = this.GetManualScopeAtDirection(movement, fromScope);
        else if (fromScope.GetShouldFindScopeByPosition(movement))
        {
          if (fromScope.ParentScope != null && fromScope.ParentScope.HasMovement(movement))
          {
            List<GamepadNavigationScope> list = fromScope.ParentScope.ChildScopes.ToList<GamepadNavigationScope>();
            list.Remove(fromScope);
            float distanceToScope;
            if (list.Count > 0)
              scopeAtDirectionFrom = GamepadNavigationHelper.GetClosestScopeAtDirectionFromList(list, fromScope, this.MousePosition, movement, false, out distanceToScope);
            if (scopeAtDirectionFrom == null && fromScope.ParentScope != null)
            {
              GamepadNavigationForcedScopeCollection forcedScopeCollection = this._activeForcedScopeCollection;
              if ((forcedScopeCollection != null ? (forcedScopeCollection.Scopes.Contains(fromScope.ParentScope) ? 1 : 0) : 1) != 0)
              {
                if (fromScope.ParentScope.HasMovement(movement))
                {
                  scopeAtDirectionFrom = fromScope.ParentScope;
                  if (scopeAtDirectionFrom.GetApproximatelyClosestWidgetToPosition(this.MousePosition, movement, true) == null)
                    return this.GetBestScopeAtDirectionFrom(scopeAtDirectionFrom, movement);
                }
                else
                {
                  int num = this._availableScopesThisFrame.Remove(fromScope.ParentScope) ? 1 : 0;
                  scopeAtDirectionFrom = GamepadNavigationHelper.GetClosestScopeAtDirectionFromList(this._availableScopesThisFrame, fromScope, this.MousePosition, movement, false, out distanceToScope);
                  if (num != 0)
                    this._availableScopesThisFrame.Add(fromScope.ParentScope);
                }
              }
            }
          }
          else
          {
            int num = fromScope.ChildScopes.Count > 0 ? 1 : 0;
            List<GamepadNavigationScope> gamepadNavigationScopeList = this._availableScopesThisFrame;
            if (num != 0)
            {
              gamepadNavigationScopeList = gamepadNavigationScopeList.ToList<GamepadNavigationScope>();
              for (int index = 0; index < fromScope.ChildScopes.Count; ++index)
                gamepadNavigationScopeList.Remove(fromScope.ChildScopes[index]);
            }
            float distanceToScope1;
            scopeAtDirectionFrom = GamepadNavigationHelper.GetClosestScopeAtDirectionFromList(gamepadNavigationScopeList, fromScope, this.MousePosition, movement, false, out distanceToScope1);
            if (scopeAtDirectionFrom != null && scopeAtDirectionFrom.ChildScopes.Count > 0)
            {
              float distanceToScope2;
              GamepadNavigationScope scopeAtDirection = GamepadNavigationHelper.GetClosestChildScopeAtDirection(scopeAtDirectionFrom, this.MousePosition, movement, false, out distanceToScope2);
              float distance;
              Widget widgetToPosition = scopeAtDirectionFrom.GetApproximatelyClosestWidgetToPosition(this.MousePosition, out distance, movement, true);
              if (scopeAtDirection != null && scopeAtDirection != this._activeNavigationScope && ((double) distanceToScope2 < (double) distanceToScope1 || widgetToPosition != null && (double) distanceToScope2 < (double) distance))
                scopeAtDirectionFrom = scopeAtDirection;
            }
          }
        }
      }
      return scopeAtDirectionFrom;
    }

    private void RefreshExitMovementForScope(
      GamepadNavigationScope scope,
      GamepadNavigationTypes movement)
    {
      scope.InterScopeMovements[movement] = this.GetBestScopeAtDirectionFrom(scope, movement);
    }

    private GamepadNavigationTypes GetMovementForInput(InputKey input)
    {
      switch (input)
      {
        case InputKey.ControllerLUp:
          return GamepadNavigationTypes.Up;
        case InputKey.ControllerLDown:
          return GamepadNavigationTypes.Down;
        case InputKey.ControllerLLeft:
          return GamepadNavigationTypes.Left;
        case InputKey.ControllerLRight:
          return GamepadNavigationTypes.Right;
        default:
          return GamepadNavigationTypes.None;
      }
    }

    private GamepadNavigationScope GetManualScopeAtDirection(
      GamepadNavigationTypes movement,
      GamepadNavigationScope fromScope)
    {
      GamepadNavigationScope fromScope1 = fromScope.ManualScopes[movement];
      string manualScopeId = fromScope.ManualScopeIDs[movement];
      if (fromScope1 == null)
      {
        if (string.IsNullOrEmpty(manualScopeId) || manualScopeId == "None")
          return (GamepadNavigationScope) null;
        List<GamepadNavigationScope> scopesList;
        if (this._navigationScopesById.TryGetValue(manualScopeId, out scopesList))
        {
          fromScope1 = scopesList.Count != 1 ? GamepadNavigationHelper.GetClosestScopeAtDirectionFromList(scopesList, this.MousePosition, movement, false, false, out float _) : scopesList[0];
          if (fromScope1 != null && !fromScope1.IsAvailable())
            fromScope1 = this.GetManualScopeAtDirection(movement, fromScope1);
        }
      }
      return fromScope1;
    }

    private Widget GetBestWidgetToScope(
      GamepadNavigationScope fromScope,
      GamepadNavigationScope toScope,
      GamepadNavigationTypes movement)
    {
      return !toScope.ForceGainNavigationBasedOnDirection || fromScope != null && toScope == fromScope.ParentScope || (toScope.ScopeMovements & movement) == GamepadNavigationTypes.None && (toScope.AlternateScopeMovements & movement) == GamepadNavigationTypes.None ? (fromScope.ParentScope != toScope ? toScope.GetApproximatelyClosestWidgetToPosition(this.MousePosition, movement) : toScope.GetApproximatelyClosestWidgetToPosition(this.MousePosition, movement, true)) : ((movement & GamepadNavigationTypes.Up) != GamepadNavigationTypes.None || (movement & GamepadNavigationTypes.Left) != GamepadNavigationTypes.None ? toScope.GetLastAvailableWidget() : toScope.GetFirstAvailableWidget());
    }

    private GamepadNavigationScope FindClosestParentScopeOfWidget(Widget widget)
    {
      for (Widget key = widget; key != null && !key.DoNotAcceptNavigation; key = key.ParentWidget)
      {
        List<GamepadNavigationScope> gamepadNavigationScopeList;
        if (this._navigationScopeParents.TryGetValue(key, out gamepadNavigationScopeList))
          return gamepadNavigationScopeList.Count > 0 ? gamepadNavigationScopeList[0] : (GamepadNavigationScope) null;
      }
      return (GamepadNavigationScope) null;
    }

    private GamepadNavigationForcedScopeCollection FindAvailableForcedScope()
    {
      if (this._forcedScopeCollections.Count > 0)
      {
        if (this._isForcedCollectionsDirty)
        {
          this._forcedScopeCollections.Sort((IComparer<GamepadNavigationForcedScopeCollection>) this._cachedForcedScopeComparer);
          this._forcedScopeCollections.ForEach((Action<GamepadNavigationForcedScopeCollection>) (x => this.CollectScopesForForcedCollection(x)));
          this._isForcedCollectionsDirty = false;
          this._isAvailableScopesDirty = true;
        }
        for (int index = this._forcedScopeCollections.Count - 1; index >= 0; --index)
        {
          if (this.IsControllerActive && this._forcedScopeCollections[index].IsAvailable())
            return this._forcedScopeCollections[index];
        }
      }
      return (GamepadNavigationForcedScopeCollection) null;
    }

    private void HandleInput(float dt)
    {
      if (this.IsControllerActive)
      {
        GamepadNavigationTypes movement = GamepadNavigationTypes.None;
        if (Input.IsKeyPressed(InputKey.ControllerLLeft))
          movement = GamepadNavigationTypes.Left;
        else if (Input.IsKeyPressed(InputKey.ControllerLRight))
          movement = GamepadNavigationTypes.Right;
        else if (Input.IsKeyPressed(InputKey.ControllerLDown))
          movement = GamepadNavigationTypes.Down;
        else if (Input.IsKeyPressed(InputKey.ControllerLUp))
          movement = GamepadNavigationTypes.Up;
        if (movement != GamepadNavigationTypes.None)
          this.OnGamepadNavigation(movement);
        this._navigationHoldTimer += dt;
        if (!this.IsHoldingDpadKeysForNavigation && (double) this._navigationHoldTimer > 0.15000000596046448)
        {
          this.IsHoldingDpadKeysForNavigation = true;
          this._navigationHoldTimer = 0.0f;
        }
        else if (this.IsHoldingDpadKeysForNavigation && (double) this._navigationHoldTimer > 0.079999998211860657)
        {
          InputKey input = ~InputKey.Invalid;
          if (Input.IsKeyDown(InputKey.ControllerLUp))
            input = InputKey.ControllerLUp;
          else if (Input.IsKeyDown(InputKey.ControllerLRight))
            input = InputKey.ControllerLRight;
          else if (Input.IsKeyDown(InputKey.ControllerLDown))
            input = InputKey.ControllerLDown;
          else if (Input.IsKeyDown(InputKey.ControllerLLeft))
            input = InputKey.ControllerLLeft;
          if (input != ~InputKey.Invalid)
            this.OnGamepadNavigation(this.GetMovementForInput(input));
          this._navigationHoldTimer = 0.0f;
        }
      }
      if (Input.IsKeyDown(InputKey.ControllerLUp) || Input.IsKeyDown(InputKey.ControllerLRight) || Input.IsKeyDown(InputKey.ControllerLDown) || Input.IsKeyDown(InputKey.ControllerLLeft))
        return;
      this.IsHoldingDpadKeysForNavigation = false;
      this._navigationHoldTimer = 0.0f;
    }

    private void HandleCursorMovement()
    {
      Vector2 targetCursorPosition = this.GetTargetCursorPosition();
      if (this._latestGamepadNavigationWidget != null && (Vec2) targetCursorPosition != Vec2.Invalid)
      {
        if (this.IsCursorMovingForNavigation)
        {
          if ((double) this._time - (double) this._cursorMoveStartTime <= (double) this._mouseCursorMoveTime)
          {
            this.MousePosition = this.IsFollowingMobileTarget ? targetCursorPosition : Vector2.Lerp(this._cursorMoveStartPosition, targetCursorPosition, (this._time - this._cursorMoveStartTime) / this._mouseCursorMoveTime);
            this.IsCursorMovingForNavigation = true;
          }
          else
          {
            int num = this._latestGamepadNavigationWidget == null || this.IsHoldingDpadKeysForNavigation || !this.IsControllerActive || Input.IsAnyTouchActive || (double) Vector2.Distance(this.MousePosition, targetCursorPosition) <= 1.440000057220459 || (double) Input.MouseMoveX != 0.0 ? 0 : ((double) Input.MouseMoveY == 0.0 ? 1 : 0);
            this.MousePosition = targetCursorPosition;
            if (num == 0)
            {
              this._latestGamepadNavigationWidget = (Widget) null;
              this._stopCursorNextFrame = true;
              this.IsInWrapMovement = false;
              this.IsFollowingMobileTarget = false;
            }
          }
        }
        else if (this._latestGamepadNavigationWidget != null)
        {
          this._latestGamepadNavigationWidget = (Widget) null;
          this._stopCursorNextFrame = true;
          this.IsFollowingMobileTarget = false;
          this.IsInWrapMovement = false;
        }
      }
      if (this.IsCursorMovingForNavigation || this._activeNavigationScope == null || !this._activeNavigationScope.FollowMobileTargets || !this._wasCursorInsideActiveScopeLastFrame)
        return;
      Widget lastNavigatedWidget = this._activeNavigationScope.LastNavigatedWidget;
      if (lastNavigatedWidget == null)
        return;
      Vector2 vector2 = lastNavigatedWidget.GlobalPosition + lastNavigatedWidget.Size / 2f;
      if ((double) this._lastNavigatedWidgetPosition.X != double.NaN && (double) Vector2.Distance(vector2, this._lastNavigatedWidgetPosition) > 1.440000057220459)
      {
        this.SetCurrentNavigatedWidget(this._activeNavigationScope, this._activeNavigationScope.LastNavigatedWidget);
        this._autoRefreshTimer = 0.0f;
        this.IsFollowingMobileTarget = true;
      }
      this._lastNavigatedWidgetPosition = vector2;
    }

    private void OnDpadNavigationStopped()
    {
      this._lastNavigatedWidgetPosition = new Vector2(float.NaN, float.NaN);
      this._latestGamepadNavigationWidget = (Widget) null;
      this._stopCursorNextFrame = true;
      this.IsFollowingMobileTarget = false;
      this.IsInWrapMovement = false;
      this._navigationHoldTimer = 0.0f;
    }

    private class GamepadNavigationContextComparer : IComparer<IGamepadNavigationContext>
    {
      public int Compare(IGamepadNavigationContext x, IGamepadNavigationContext y)
      {
        return -x.GetLastScreenOrder().CompareTo(y.GetLastScreenOrder());
      }
    }

    private class ForcedScopeComparer : IComparer<GamepadNavigationForcedScopeCollection>
    {
      public int Compare(
        GamepadNavigationForcedScopeCollection x,
        GamepadNavigationForcedScopeCollection y)
      {
        return x.CollectionOrder.CompareTo(y.CollectionOrder);
      }
    }

    private class ContextGamepadNavigationGainHandler
    {
      private readonly IGamepadNavigationContext _context;
      private float _gainAfterTime;
      private float _gainTimer;
      private int _gainAfterFrames;
      private int _frameTicker;
      private Func<bool> _gainPredicate;

      public bool HasTarget { get; private set; }

      public ContextGamepadNavigationGainHandler(IGamepadNavigationContext eventManager)
      {
        this._context = eventManager;
        this.Clear();
      }

      public void GainNavigationAfterFrames(int frameCount, Func<bool> predicate = null)
      {
        this.Clear();
        if (frameCount < 0)
          return;
        this._gainAfterFrames = frameCount;
        this._gainPredicate = predicate;
        this.HasTarget = true;
      }

      public void GainNavigationAfterTime(float seconds, Func<bool> predicate = null)
      {
        this.Clear();
        if ((double) seconds < 0.0)
          return;
        this._gainAfterTime = seconds;
        this._gainPredicate = predicate;
        this.HasTarget = true;
      }

      public void Tick(float dt)
      {
        if ((double) this._gainAfterTime != -1.0)
        {
          this._gainTimer += dt;
          if ((double) this._gainTimer <= (double) this._gainAfterTime)
            return;
          Func<bool> gainPredicate = this._gainPredicate;
          if ((gainPredicate != null ? (gainPredicate() ? 1 : 0) : 1) != 0)
            this._context.OnGainNavigation();
          this.Clear();
        }
        else
        {
          if (this._gainAfterFrames == -1)
            return;
          ++this._frameTicker;
          if (this._frameTicker <= this._gainAfterFrames)
            return;
          Func<bool> gainPredicate = this._gainPredicate;
          if ((gainPredicate != null ? (gainPredicate() ? 1 : 0) : 1) != 0)
            this._context.OnGainNavigation();
          this.Clear();
        }
      }

      public void Clear()
      {
        this._gainAfterTime = -1f;
        this._gainAfterFrames = -1;
        this._frameTicker = 0;
        this._gainTimer = 0.0f;
        this._gainPredicate = (Func<bool>) null;
      }
    }
  }
}
