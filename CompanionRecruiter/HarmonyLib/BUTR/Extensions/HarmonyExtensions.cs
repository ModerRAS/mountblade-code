// Decompiled with JetBrains decompiler
// Type: HarmonyLib.BUTR.Extensions.HarmonyExtensions
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using System;
using System.Diagnostics;
using System.Reflection;

#nullable enable
namespace HarmonyLib.BUTR.Extensions
{
  internal static class HarmonyExtensions
  {
    public static bool TryPatch(
      this Harmony harmony,
      MethodBase? original,
      MethodInfo? prefix = null,
      MethodInfo? postfix = null,
      MethodInfo? transpiler = null,
      MethodInfo? finalizer = null)
    {
      if ((object) original == null || (object) prefix == null && (object) postfix == null && (object) transpiler == null && (object) finalizer == null)
      {
        Trace.TraceError("HarmonyExtensions.TryPatch: 'original' or all methods are null");
        return false;
      }
      HarmonyMethod harmonyMethod1 = (object) prefix == null ? (HarmonyMethod) null : new HarmonyMethod(prefix);
      HarmonyMethod harmonyMethod2 = (object) postfix == null ? (HarmonyMethod) null : new HarmonyMethod(postfix);
      HarmonyMethod harmonyMethod3 = (object) transpiler == null ? (HarmonyMethod) null : new HarmonyMethod(transpiler);
      HarmonyMethod harmonyMethod4 = (object) finalizer == null ? (HarmonyMethod) null : new HarmonyMethod(finalizer);
      try
      {
        harmony.Patch(original, harmonyMethod1, harmonyMethod2, harmonyMethod3, harmonyMethod4);
      }
      catch (Exception ex)
      {
        Trace.TraceError(string.Format("HarmonyExtensions.TryPatch: Exception occurred: {0}, original '{1}'", (object) ex, (object) original));
        return false;
      }
      return true;
    }

    public static ReversePatcher? TryCreateReversePatcher(
      this Harmony harmony,
      MethodBase? original,
      MethodInfo? standin)
    {
      if ((object) original == null || (object) standin == null)
      {
        Trace.TraceError("HarmonyExtensions.TryCreateReversePatcher: 'original' or 'standin' is null");
        return (ReversePatcher) null;
      }
      try
      {
        return harmony.CreateReversePatcher(original, new HarmonyMethod(standin));
      }
      catch (Exception ex)
      {
        Trace.TraceError(string.Format("HarmonyExtensions.TryCreateReversePatcher: Exception occurred: {0}, original '{1}'", (object) ex, (object) original));
        return (ReversePatcher) null;
      }
    }

    public static bool TryCreateReversePatcher(
      this Harmony harmony,
      MethodBase? original,
      MethodInfo? standin,
      out ReversePatcher? result)
    {
      if ((object) original == null || (object) standin == null)
      {
        Trace.TraceError("HarmonyExtensions.TryCreateReversePatcher: 'original' or 'standin' is null");
        result = (ReversePatcher) null;
        return false;
      }
      try
      {
        result = harmony.CreateReversePatcher(original, new HarmonyMethod(standin));
        return true;
      }
      catch (Exception ex)
      {
        Trace.TraceError(string.Format("HarmonyExtensions.TryCreateReversePatcher: Exception occurred: {0}, original '{1}'", (object) ex, (object) original));
        result = (ReversePatcher) null;
        return false;
      }
    }
  }
}
