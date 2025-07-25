// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.GamepadNavigation.GamepadNavigationHelper
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.GamepadNavigation
{
  internal static class GamepadNavigationHelper
  {
    internal static void GetRelatedLineOfScope(
      GamepadNavigationScope scope,
      Vector2 fromPosition,
      GamepadNavigationTypes movement,
      out Vector2 lineBegin,
      out Vector2 lineEnd,
      out bool isFromWidget)
    {
      Rectangle discoveryRectangle = scope.GetDiscoveryRectangle();
      if (discoveryRectangle.IsPointInside(fromPosition))
      {
        Widget widgetToPosition = scope.GetApproximatelyClosestWidgetToPosition(fromPosition, movement);
        if (widgetToPosition != null)
        {
          isFromWidget = true;
          GamepadNavigationHelper.GetRelatedLineOfWidget(widgetToPosition, movement, out lineBegin, out lineEnd);
          return;
        }
      }
      isFromWidget = false;
      double scale = (double) scope.ParentWidget.EventManager.Context.Scale;
      Vector2 vector2_1 = new Vector2(discoveryRectangle.X, discoveryRectangle.Y);
      Vector2 vector2_2 = new Vector2(discoveryRectangle.X2, discoveryRectangle.Y);
      Vector2 vector2_3 = new Vector2(discoveryRectangle.X2, discoveryRectangle.Y2);
      Vector2 vector2_4 = new Vector2(discoveryRectangle.X, discoveryRectangle.Y2);
      switch (movement)
      {
        case GamepadNavigationTypes.Up:
          lineBegin = vector2_4;
          lineEnd = vector2_3;
          break;
        case GamepadNavigationTypes.Down:
          lineBegin = vector2_1;
          lineEnd = vector2_2;
          break;
        case GamepadNavigationTypes.Left:
          lineBegin = vector2_2;
          lineEnd = vector2_3;
          break;
        case GamepadNavigationTypes.Right:
          lineBegin = vector2_1;
          lineEnd = vector2_4;
          break;
        default:
          lineBegin = Vector2.Zero;
          lineEnd = Vector2.Zero;
          break;
      }
    }

    internal static void GetRelatedLineOfWidget(
      Widget widget,
      GamepadNavigationTypes movement,
      out Vector2 lineBegin,
      out Vector2 lineEnd)
    {
      Vector2 globalPosition = widget.GlobalPosition;
      Vector2 vector2_1 = new Vector2(widget.GlobalPosition.X + widget.Size.X, widget.GlobalPosition.Y);
      Vector2 vector2_2 = widget.GlobalPosition + widget.Size;
      Vector2 vector2_3 = new Vector2(widget.GlobalPosition.X, widget.GlobalPosition.Y + widget.Size.Y);
      switch (movement)
      {
        case GamepadNavigationTypes.Up:
          lineBegin = vector2_3;
          lineEnd = vector2_2;
          break;
        case GamepadNavigationTypes.Down:
          lineBegin = globalPosition;
          lineEnd = vector2_1;
          break;
        case GamepadNavigationTypes.Left:
          lineBegin = vector2_1;
          lineEnd = vector2_2;
          break;
        case GamepadNavigationTypes.Right:
          lineBegin = globalPosition;
          lineEnd = vector2_3;
          break;
        default:
          lineBegin = Vector2.Zero;
          lineEnd = Vector2.Zero;
          break;
      }
    }

    internal static float GetDistanceToClosestWidgetEdge(
      Widget widget,
      Vector2 point,
      GamepadNavigationTypes movement,
      out Vector2 closestPointOnEdge)
    {
      Vector2 globalPosition = widget.GlobalPosition;
      Vector2 size = widget.Size;
      Rectangle rectangle = new Rectangle(globalPosition.X, globalPosition.Y, size.X, size.Y);
      switch (movement)
      {
        case GamepadNavigationTypes.Up:
          Vector2 lineBegin1 = new Vector2(rectangle.X, rectangle.Y2);
          Vector2 lineEnd1 = new Vector2(rectangle.X2, rectangle.Y2);
          closestPointOnEdge = GamepadNavigationHelper.GetClosestPointOnLineSegment(lineBegin1, lineEnd1, point);
          return Vector2.Distance(closestPointOnEdge, point);
        case GamepadNavigationTypes.Down:
          Vector2 lineBegin2 = new Vector2(rectangle.X, rectangle.Y);
          Vector2 lineEnd2 = new Vector2(rectangle.X2, rectangle.Y);
          closestPointOnEdge = GamepadNavigationHelper.GetClosestPointOnLineSegment(lineBegin2, lineEnd2, point);
          return Vector2.Distance(closestPointOnEdge, point);
        case GamepadNavigationTypes.Left:
          Vector2 lineBegin3 = new Vector2(rectangle.X2, rectangle.Y);
          Vector2 lineEnd3 = new Vector2(rectangle.X2, rectangle.Y2);
          closestPointOnEdge = GamepadNavigationHelper.GetClosestPointOnLineSegment(lineBegin3, lineEnd3, point);
          return Vector2.Distance(closestPointOnEdge, point);
        case GamepadNavigationTypes.Right:
          Vector2 lineBegin4 = new Vector2(rectangle.X, rectangle.Y);
          Vector2 lineEnd4 = new Vector2(rectangle.X, rectangle.Y2);
          closestPointOnEdge = GamepadNavigationHelper.GetClosestPointOnLineSegment(lineBegin4, lineEnd4, point);
          return Vector2.Distance(closestPointOnEdge, point);
        default:
          closestPointOnEdge = globalPosition + size / 2f;
          return Vector2.Distance(closestPointOnEdge, point);
      }
    }

    internal static float GetDistanceToClosestWidgetEdge(
      Widget widget,
      Vector2 point,
      GamepadNavigationTypes movement)
    {
      return GamepadNavigationHelper.GetDistanceToClosestWidgetEdge(widget, point, movement, out Vector2 _);
    }

    internal static Vector2 GetClosestPointOnLineSegment(
      Vector2 lineBegin,
      Vector2 lineEnd,
      Vector2 point)
    {
      Vector2 vector2_1 = point - lineBegin;
      Vector2 vector2_2 = lineEnd - lineBegin;
      float num1 = vector2_2.LengthSquared();
      Vector2 vector2_3 = vector2_2;
      float num2 = Vector2.Dot(vector2_1, vector2_3) / num1;
      if ((double) num2 < 0.0)
        return lineBegin;
      return (double) num2 > 1.0 ? lineEnd : lineBegin + vector2_2 * num2;
    }

    internal static GamepadNavigationTypes GetMovementsToReachRectangle(
      Vector2 fromPosition,
      Rectangle rect)
    {
      GamepadNavigationTypes toReachRectangle = GamepadNavigationTypes.None;
      if ((double) fromPosition.X > (double) rect.X + (double) rect.Width)
        toReachRectangle |= GamepadNavigationTypes.Left;
      else if ((double) fromPosition.X < (double) rect.X)
        toReachRectangle |= GamepadNavigationTypes.Right;
      if ((double) fromPosition.Y > (double) rect.Y + (double) rect.Height)
        toReachRectangle |= GamepadNavigationTypes.Up;
      else if ((double) fromPosition.Y < (double) rect.Y)
        toReachRectangle |= GamepadNavigationTypes.Down;
      return toReachRectangle;
    }

    internal static Vector2 GetMovementVectorForNavigation(GamepadNavigationTypes navigationMovement)
    {
      Vector2 vector2 = new Vector2();
      ref Vector2 local1 = ref vector2;
      int num1;
      switch (navigationMovement)
      {
        case GamepadNavigationTypes.Left:
          num1 = -1;
          break;
        case GamepadNavigationTypes.Right:
          num1 = 1;
          break;
        default:
          num1 = 0;
          break;
      }
      double num2 = (double) num1;
      local1.X = (float) num2;
      ref Vector2 local2 = ref vector2;
      int num3;
      switch (navigationMovement)
      {
        case GamepadNavigationTypes.Up:
          num3 = -1;
          break;
        case GamepadNavigationTypes.Down:
          num3 = 1;
          break;
        default:
          num3 = 0;
          break;
      }
      double num4 = (double) num3;
      local2.Y = (float) num4;
      return Vector2.Normalize(vector2);
    }

    internal static GamepadNavigationScope GetClosestChildScopeAtDirection(
      GamepadNavigationScope parentScope,
      Vector2 fromPosition,
      GamepadNavigationTypes movement,
      bool checkForAutoGain,
      out float distanceToScope)
    {
      return GamepadNavigationHelper.GetClosestScopeAtDirectionFromList(parentScope.ChildScopes.ToList<GamepadNavigationScope>(), fromPosition, movement, checkForAutoGain, true, out distanceToScope);
    }

    internal static GamepadNavigationScope GetClosestScopeAtDirectionFromList(
      List<GamepadNavigationScope> scopesList,
      GamepadNavigationScope fromScope,
      Vector2 fromPosition,
      GamepadNavigationTypes movement,
      bool checkForAutoGain,
      out float distanceToScope)
    {
      distanceToScope = -1f;
      if (fromScope != null)
      {
        Widget lastNavigatedWidget = fromScope.LastNavigatedWidget;
        Rectangle rectangle = fromScope.UseDiscoveryAreaAsScopeEdges ? fromScope.GetDiscoveryRectangle() : fromScope.GetRectangle();
        if (fromScope.NavigateFromScopeEdges || !rectangle.IsPointInside(fromPosition))
        {
          if (lastNavigatedWidget != null)
            fromPosition = lastNavigatedWidget.GlobalPosition + lastNavigatedWidget.Size / 2f;
          switch (movement)
          {
            case GamepadNavigationTypes.Up:
              fromPosition.Y = rectangle.Y;
              break;
            case GamepadNavigationTypes.Down:
              fromPosition.Y = rectangle.Y2;
              break;
            case GamepadNavigationTypes.Left:
              fromPosition.X = rectangle.X;
              break;
            case GamepadNavigationTypes.Right:
              fromPosition.X = rectangle.X2;
              break;
          }
        }
      }
      return GamepadNavigationHelper.GetClosestScopeAtDirectionFromList(scopesList, fromPosition, movement, (checkForAutoGain ? 1 : 0) != 0, false, out distanceToScope, fromScope);
    }

    internal static GamepadNavigationScope GetClosestScopeFromList(
      List<GamepadNavigationScope> scopeList,
      Vector2 fromPosition,
      bool checkForAutoGain)
    {
      float num1 = float.MaxValue;
      int index1 = -1;
      if (scopeList.Count > 0)
      {
        GamepadNavigationTypes[] gamepadNavigationTypesArray = new GamepadNavigationTypes[4]
        {
          GamepadNavigationTypes.Up,
          GamepadNavigationTypes.Right,
          GamepadNavigationTypes.Down,
          GamepadNavigationTypes.Left
        };
        for (int index2 = 0; index2 < scopeList.Count; ++index2)
        {
          if ((!checkForAutoGain || !scopeList[index2].DoNotAutoGainNavigationOnInit) && scopeList[index2].IsAvailable())
          {
            if (scopeList[index2].GetRectangle().IsPointInside(fromPosition))
            {
              index1 = index2;
              break;
            }
            GamepadNavigationTypes toReachMyPosition = scopeList[index2].GetMovementsToReachMyPosition(fromPosition);
            for (int index3 = 0; index3 < gamepadNavigationTypesArray.Length; ++index3)
            {
              GamepadNavigationTypes gamepadNavigationTypes = gamepadNavigationTypesArray[index3];
              if (toReachMyPosition.HasAnyFlag<GamepadNavigationTypes>(gamepadNavigationTypes))
              {
                Vector2 vectorForNavigation = GamepadNavigationHelper.GetMovementVectorForNavigation(gamepadNavigationTypes);
                Vector2 lineBegin;
                Vector2 lineEnd;
                bool isFromWidget;
                GamepadNavigationHelper.GetRelatedLineOfScope(scopeList[index2], fromPosition, gamepadNavigationTypes, out lineBegin, out lineEnd, out isFromWidget);
                Vector2 pointOnLineSegment = GamepadNavigationHelper.GetClosestPointOnLineSegment(lineBegin, lineEnd, fromPosition);
                Vector2 vector2 = Vector2.Normalize(pointOnLineSegment - fromPosition);
                float num2 = isFromWidget ? 1f : Vector2.Dot(vectorForNavigation, vector2);
                float num3 = Vector2.Distance(pointOnLineSegment, fromPosition) / num2;
                if ((double) num2 > 0.20000000298023224 && (double) num3 < (double) num1)
                {
                  num1 = num3;
                  index1 = index2;
                }
              }
            }
          }
        }
        if (index1 != -1)
          return scopeList[index1];
      }
      return (GamepadNavigationScope) null;
    }

    internal static GamepadNavigationScope GetClosestScopeAtDirectionFromList(
      List<GamepadNavigationScope> scopesList,
      Vector2 fromPosition,
      GamepadNavigationTypes movement,
      bool checkForAutoGain,
      bool checkOnlyOneDirection,
      out float distanceToScope,
      params GamepadNavigationScope[] scopesToIgnore)
    {
      distanceToScope = -1f;
      if (scopesList == null || scopesList.Count == 0)
        return (GamepadNavigationScope) null;
      scopesList = scopesList.ToList<GamepadNavigationScope>();
      for (int index = 0; index < scopesToIgnore.Length; ++index)
      {
        scopesList.Remove(scopesToIgnore[index]);
        if (scopesToIgnore[index].ParentScope != null)
          scopesList.Remove(scopesToIgnore[index].ParentScope);
      }
      Vector2 vectorForNavigation = GamepadNavigationHelper.GetMovementVectorForNavigation(movement);
      Vec2 resolution = Input.Resolution;
      float num1 = (movement & GamepadNavigationTypes.Vertical) != GamepadNavigationTypes.None ? resolution.Y * 0.85f : ((movement & GamepadNavigationTypes.Horizontal) != GamepadNavigationTypes.None ? resolution.X * 0.85f : 0.0f);
      float num2 = float.MaxValue;
      int index1 = -1;
      if (scopesList != null && scopesList.Count > 0)
      {
        for (int index2 = 0; index2 < scopesList.Count; ++index2)
        {
          if ((!checkForAutoGain || !scopesList[index2].DoNotAutoGainNavigationOnInit) && scopesList[index2].IsAvailable())
          {
            Vector2 lineBegin;
            Vector2 lineEnd;
            bool isFromWidget;
            GamepadNavigationHelper.GetRelatedLineOfScope(scopesList[index2], fromPosition, movement, out lineBegin, out lineEnd, out isFromWidget);
            Vector2 pointOnLineSegment = GamepadNavigationHelper.GetClosestPointOnLineSegment(lineBegin, lineEnd, fromPosition);
            Vector2 vector2 = Vector2.Normalize(pointOnLineSegment - fromPosition);
            float num3 = isFromWidget ? 1f : Vector2.Dot(vectorForNavigation, vector2);
            if ((double) num3 > 0.20000000298023224)
            {
              float num4 = !checkOnlyOneDirection ? Vector2.Distance(pointOnLineSegment, fromPosition) / num3 : GamepadNavigationHelper.GetDirectionalDistanceBetweenTwoPoints(movement, fromPosition, pointOnLineSegment);
              if ((double) num4 < (double) num2 && (double) num4 < (double) num1)
              {
                num2 = num4;
                distanceToScope = num4;
                index1 = index2;
              }
            }
          }
        }
        if (index1 != -1)
          return scopesList[index1];
      }
      return (GamepadNavigationScope) null;
    }

    internal static float GetDirectionalDistanceBetweenTwoPoints(
      GamepadNavigationTypes movement,
      Vector2 p1,
      Vector2 p2)
    {
      switch (movement)
      {
        case GamepadNavigationTypes.Up:
        case GamepadNavigationTypes.Down:
          return MathF.Abs(p1.Y - p2.Y);
        case GamepadNavigationTypes.Left:
        case GamepadNavigationTypes.Right:
          return MathF.Abs(p1.X - p2.X);
        default:
          Debug.FailedAssert("Invalid gamepad movement type:" + (object) movement, "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\GamepadNavigation\\GamepadNavigationHelper.cs", nameof (GetDirectionalDistanceBetweenTwoPoints), 411);
          return 0.0f;
      }
    }
  }
}
