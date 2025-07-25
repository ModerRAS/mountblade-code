// Decompiled with JetBrains decompiler
// Type: EmptyGamepadNavigationContext
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.GauntletUI.GamepadNavigation;

#nullable disable
public class EmptyGamepadNavigationContext : IGamepadNavigationContext
{
  public void AddForcedScopeCollection(GamepadNavigationForcedScopeCollection collection)
  {
  }

  public void AddNavigationScope(GamepadNavigationScope scope, bool initialize)
  {
  }

  public void GainNavigationAfterFrames(int frameCount, Func<bool> predicate)
  {
  }

  public void GainNavigationAfterTime(float seconds, Func<bool> predicate)
  {
  }

  public bool GetIsBlockedAtPosition(Vector2 position) => true;

  public int GetLastScreenOrder() => -1;

  public bool HasNavigationScope(GamepadNavigationScope scope) => false;

  public bool HasNavigationScope(Func<GamepadNavigationScope, bool> predicate) => false;

  public bool IsAvailableForNavigation() => false;

  public void OnFinalize()
  {
  }

  public void OnGainNavigation()
  {
  }

  public void OnMovieLoaded(string movieName)
  {
  }

  public void OnMovieReleased(string movieName)
  {
  }

  public void OnWidgetNavigationIndexUpdated(Widget widget)
  {
  }

  public void OnWidgetNavigationStatusChanged(Widget widget)
  {
  }

  public void OnWidgetUsedNavigationMovementsUpdated(Widget widget)
  {
  }

  public void RemoveForcedScopeCollection(GamepadNavigationForcedScopeCollection collection)
  {
  }

  public void RemoveNavigationScope(GamepadNavigationScope scope)
  {
  }
}
