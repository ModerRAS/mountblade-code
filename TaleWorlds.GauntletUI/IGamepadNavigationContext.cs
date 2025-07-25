// Decompiled with JetBrains decompiler
// Type: IGamepadNavigationContext
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.GauntletUI.GamepadNavigation;

#nullable disable
public interface IGamepadNavigationContext
{
  void OnFinalize();

  bool GetIsBlockedAtPosition(Vector2 position);

  int GetLastScreenOrder();

  bool IsAvailableForNavigation();

  void OnWidgetUsedNavigationMovementsUpdated(Widget widget);

  void OnGainNavigation();

  void GainNavigationAfterFrames(int frameCount, Func<bool> predicate);

  void GainNavigationAfterTime(float seconds, Func<bool> predicate);

  void OnWidgetNavigationStatusChanged(Widget widget);

  void OnWidgetNavigationIndexUpdated(Widget widget);

  void AddNavigationScope(GamepadNavigationScope scope, bool initialize);

  void RemoveNavigationScope(GamepadNavigationScope scope);

  void AddForcedScopeCollection(GamepadNavigationForcedScopeCollection collection);

  void RemoveForcedScopeCollection(GamepadNavigationForcedScopeCollection collection);

  bool HasNavigationScope(GamepadNavigationScope scope);

  bool HasNavigationScope(Func<GamepadNavigationScope, bool> predicate);

  void OnMovieLoaded(string movieName);

  void OnMovieReleased(string movieName);
}
