// Decompiled with JetBrains decompiler
// Type: GauntletGamepadNavigationContext
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.GauntletUI.GamepadNavigation;

#nullable disable
public class GauntletGamepadNavigationContext : IGamepadNavigationContext
{
  public readonly Func<Vector2, bool> OnGetIsBlockedAtPosition;
  public readonly Func<int> OnGetLastScreenOrder;
  public readonly Func<bool> OnGetIsAvailableForGamepadNavigation;

  private GauntletGamepadNavigationContext()
  {
  }

  public GauntletGamepadNavigationContext(
    Func<Vector2, bool> onGetIsBlockedAtPosition,
    Func<int> onGetLastScreenOrder,
    Func<bool> onGetIsAvailableForGamepadNavigation)
  {
    this.OnGetIsBlockedAtPosition = onGetIsBlockedAtPosition;
    this.OnGetLastScreenOrder = onGetLastScreenOrder;
    this.OnGetIsAvailableForGamepadNavigation = onGetIsAvailableForGamepadNavigation;
  }

  void IGamepadNavigationContext.OnFinalize()
  {
    GauntletGamepadNavigationManager.Instance.OnContextFinalized((IGamepadNavigationContext) this);
  }

  bool IGamepadNavigationContext.GetIsBlockedAtPosition(Vector2 position)
  {
    Func<Vector2, bool> blockedAtPosition = this.OnGetIsBlockedAtPosition;
    return blockedAtPosition == null || blockedAtPosition(position);
  }

  int IGamepadNavigationContext.GetLastScreenOrder()
  {
    Func<int> getLastScreenOrder = this.OnGetLastScreenOrder;
    return getLastScreenOrder == null ? -1 : getLastScreenOrder();
  }

  bool IGamepadNavigationContext.IsAvailableForNavigation()
  {
    Func<bool> gamepadNavigation = this.OnGetIsAvailableForGamepadNavigation;
    return gamepadNavigation != null && gamepadNavigation();
  }

  void IGamepadNavigationContext.OnWidgetUsedNavigationMovementsUpdated(Widget widget)
  {
    GauntletGamepadNavigationManager.Instance?.OnWidgetUsedNavigationMovementsUpdated(widget);
  }

  void IGamepadNavigationContext.OnGainNavigation()
  {
    GauntletGamepadNavigationManager.Instance?.OnContextGainedNavigation((IGamepadNavigationContext) this);
  }

  void IGamepadNavigationContext.GainNavigationAfterFrames(int frameCount, Func<bool> predicate)
  {
    GauntletGamepadNavigationManager.Instance?.SetContextNavigationGainAfterFrames((IGamepadNavigationContext) this, frameCount, predicate);
  }

  void IGamepadNavigationContext.GainNavigationAfterTime(float seconds, Func<bool> predicate)
  {
    GauntletGamepadNavigationManager.Instance?.SetContextNavigationGainAfterTime((IGamepadNavigationContext) this, seconds, predicate);
  }

  void IGamepadNavigationContext.OnWidgetNavigationStatusChanged(Widget widget)
  {
    GauntletGamepadNavigationManager.Instance?.OnWidgetNavigationStatusChanged((IGamepadNavigationContext) this, widget);
  }

  void IGamepadNavigationContext.OnWidgetNavigationIndexUpdated(Widget widget)
  {
    GauntletGamepadNavigationManager.Instance?.OnWidgetNavigationIndexUpdated((IGamepadNavigationContext) this, widget);
  }

  void IGamepadNavigationContext.AddNavigationScope(GamepadNavigationScope scope, bool initialize)
  {
    GauntletGamepadNavigationManager.Instance?.AddNavigationScope((IGamepadNavigationContext) this, scope, initialize);
  }

  void IGamepadNavigationContext.RemoveNavigationScope(GamepadNavigationScope scope)
  {
    GauntletGamepadNavigationManager.Instance?.RemoveNavigationScope((IGamepadNavigationContext) this, scope);
  }

  void IGamepadNavigationContext.AddForcedScopeCollection(
    GamepadNavigationForcedScopeCollection collection)
  {
    GauntletGamepadNavigationManager.Instance?.AddForcedScopeCollection(collection);
  }

  void IGamepadNavigationContext.RemoveForcedScopeCollection(
    GamepadNavigationForcedScopeCollection collection)
  {
    GauntletGamepadNavigationManager.Instance?.RemoveForcedScopeCollection(collection);
  }

  bool IGamepadNavigationContext.HasNavigationScope(GamepadNavigationScope scope)
  {
    GauntletGamepadNavigationManager instance = GauntletGamepadNavigationManager.Instance;
    return instance != null && instance.HasNavigationScope((IGamepadNavigationContext) this, scope);
  }

  bool IGamepadNavigationContext.HasNavigationScope(Func<GamepadNavigationScope, bool> predicate)
  {
    GauntletGamepadNavigationManager instance = GauntletGamepadNavigationManager.Instance;
    return instance != null && instance.HasNavigationScope((IGamepadNavigationContext) this, predicate);
  }

  void IGamepadNavigationContext.OnMovieLoaded(string movieName)
  {
    GauntletGamepadNavigationManager.Instance?.OnMovieLoaded((IGamepadNavigationContext) this, movieName);
  }

  void IGamepadNavigationContext.OnMovieReleased(string movieName)
  {
    GauntletGamepadNavigationManager.Instance?.OnMovieReleased((IGamepadNavigationContext) this, movieName);
  }
}
