// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBAnimation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MBAnimation
  {
    private readonly int _index;

    public MBAnimation(MBAnimation animation) => this._index = animation._index;

    internal MBAnimation(int i) => this._index = i;

    public bool Equals(MBAnimation a) => this._index == a._index;

    public override int GetHashCode() => this._index;

    public static int GetAnimationIndexWithName(string animationName)
    {
      return string.IsNullOrEmpty(animationName) ? -1 : MBAPI.IMBAnimation.GetIndexWithID(animationName);
    }

    public static Agent.ActionCodeType GetActionType(ActionIndexCache actionIndex)
    {
      return !(actionIndex == ActionIndexCache.act_none) ? MBAPI.IMBAnimation.GetActionType(actionIndex.Index) : Agent.ActionCodeType.Other;
    }

    public static Agent.ActionCodeType GetActionType(ActionIndexValueCache actionIndex)
    {
      return !(actionIndex == ActionIndexValueCache.act_none) ? MBAPI.IMBAnimation.GetActionType(actionIndex.Index) : Agent.ActionCodeType.Other;
    }

    public static void PrefetchAnimationClip(
      MBActionSet actionSet,
      ActionIndexCache actionIndexCache)
    {
      MBAPI.IMBAnimation.PrefetchAnimationClip(actionSet.Index, actionIndexCache.Index);
    }

    public static float GetAnimationDuration(string animationName)
    {
      int indexWithId = MBAPI.IMBAnimation.GetIndexWithID(animationName);
      return MBAPI.IMBAnimation.GetAnimationDuration(indexWithId);
    }

    public static float GetAnimationDuration(int animationIndex)
    {
      return MBAPI.IMBAnimation.GetAnimationDuration(animationIndex);
    }

    public static float GetAnimationParameter1(string animationName)
    {
      int indexWithId = MBAPI.IMBAnimation.GetIndexWithID(animationName);
      return MBAPI.IMBAnimation.GetAnimationParameter1(indexWithId);
    }

    public static float GetAnimationParameter1(int animationIndex)
    {
      return MBAPI.IMBAnimation.GetAnimationParameter1(animationIndex);
    }

    public static float GetAnimationParameter2(string animationName)
    {
      int indexWithId = MBAPI.IMBAnimation.GetIndexWithID(animationName);
      return MBAPI.IMBAnimation.GetAnimationParameter2(indexWithId);
    }

    public static float GetAnimationParameter2(int animationIndex)
    {
      return MBAPI.IMBAnimation.GetAnimationParameter2(animationIndex);
    }

    public static float GetAnimationParameter3(string animationName)
    {
      int indexWithId = MBAPI.IMBAnimation.GetIndexWithID(animationName);
      return MBAPI.IMBAnimation.GetAnimationParameter3(indexWithId);
    }

    public static float GetAnimationBlendInPeriod(string animationName)
    {
      int indexWithId = MBAPI.IMBAnimation.GetIndexWithID(animationName);
      return MBAPI.IMBAnimation.GetAnimationBlendInPeriod(indexWithId);
    }

    public static float GetAnimationBlendInPeriod(int animationIndex)
    {
      return MBAPI.IMBAnimation.GetAnimationBlendInPeriod(animationIndex);
    }

    public static int GetActionCodeWithName(string name)
    {
      return string.IsNullOrEmpty(name) ? ActionIndexValueCache.act_none.Index : MBAPI.IMBAnimation.GetActionCodeWithName(name);
    }

    public static string GetActionNameWithCode(int actionIndex)
    {
      return actionIndex == -1 ? "act_none" : MBAPI.IMBAnimation.GetActionNameWithCode(actionIndex);
    }

    public static int GetNumActionCodes() => MBAPI.IMBAnimation.GetNumActionCodes();

    public static int GetNumAnimations() => MBAPI.IMBAnimation.GetNumAnimations();

    public static bool IsAnyAnimationLoadingFromDisk()
    {
      return MBAPI.IMBAnimation.IsAnyAnimationLoadingFromDisk();
    }
  }
}
