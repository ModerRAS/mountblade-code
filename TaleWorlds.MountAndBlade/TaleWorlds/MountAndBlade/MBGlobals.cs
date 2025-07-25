// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBGlobals
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq.Expressions;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MBGlobals
  {
    public const float Gravity = 9.806f;
    public static readonly Vec3 GravityVec3 = new Vec3(z: -9.806f);
    private static bool _initialized;
    private static Dictionary<string, MBActionSet> _actionSets;

    public static void InitializeReferences()
    {
      if (MBGlobals._initialized)
        return;
      MBGlobals._actionSets = new Dictionary<string, MBActionSet>();
      MBGlobals._initialized = true;
    }

    public static MBActionSet GetActionSetWithSuffix(Monster monster, bool isFemale, string suffix)
    {
      return MBGlobals.GetActionSet(ActionSetCode.GenerateActionSetNameWithSuffix(monster, isFemale, suffix));
    }

    public static MBActionSet GetActionSet(string actionSetCode)
    {
      MBActionSet actionSet;
      if (!MBGlobals._actionSets.TryGetValue(actionSetCode, out actionSet))
      {
        actionSet = MBActionSet.GetActionSet(actionSetCode);
        if (!actionSet.IsValid)
        {
          Debug.FailedAssert("No action set found with action set code: " + actionSetCode, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Base\\MBGlobals.cs", nameof (GetActionSet), 40);
          throw new Exception("Invalid action set code");
        }
        MBGlobals._actionSets[actionSetCode] = actionSet;
      }
      return actionSet;
    }

    public static string GetMemberName<T>(Expression<Func<T>> memberExpression)
    {
      return ((MemberExpression) memberExpression.Body).Member.Name;
    }

    public static string GetMethodName<T>(Expression<Func<T>> memberExpression)
    {
      return ((MethodCallExpression) memberExpression.Body).Method.Name;
    }
  }
}
