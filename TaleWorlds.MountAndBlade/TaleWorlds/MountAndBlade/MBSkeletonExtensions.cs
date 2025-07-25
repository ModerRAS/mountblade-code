// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBSkeletonExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MBSkeletonExtensions
  {
    public static Skeleton CreateWithActionSet(ref AnimationSystemData animationSystemData)
    {
      return MBAPI.IMBSkeletonExtensions.CreateWithActionSet(ref animationSystemData);
    }

    public static float GetSkeletonFaceAnimationTime(Skeleton skeleton)
    {
      return MBAPI.IMBSkeletonExtensions.GetSkeletonFaceAnimationTime(skeleton.Pointer);
    }

    public static void SetSkeletonFaceAnimationTime(Skeleton skeleton, float time)
    {
      MBAPI.IMBSkeletonExtensions.SetSkeletonFaceAnimationTime(skeleton.Pointer, time);
    }

    public static string GetSkeletonFaceAnimationName(Skeleton skeleton)
    {
      return MBAPI.IMBSkeletonExtensions.GetSkeletonFaceAnimationName(skeleton.Pointer);
    }

    public static MatrixFrame GetBoneEntitialFrameAtAnimationProgress(
      this Skeleton skeleton,
      sbyte boneIndex,
      int animationIndex,
      float progress)
    {
      MatrixFrame outFrame = new MatrixFrame();
      MBAPI.IMBSkeletonExtensions.GetBoneEntitialFrameAtAnimationProgress(skeleton.Pointer, boneIndex, animationIndex, progress, ref outFrame);
      return outFrame;
    }

    public static MatrixFrame GetBoneEntitialFrame(
      this Skeleton skeleton,
      sbyte boneNumber,
      bool forceToUpdate = false)
    {
      MatrixFrame outFrame = new MatrixFrame();
      MBAPI.IMBSkeletonExtensions.GetBoneEntitialFrame(skeleton.Pointer, boneNumber, false, forceToUpdate, ref outFrame);
      return outFrame;
    }

    public static void SetFacialAnimation(
      this Skeleton skeleton,
      Agent.FacialAnimChannel channel,
      string faceAnimation,
      bool playSound,
      bool loop)
    {
      MBAPI.IMBSkeletonExtensions.SetFacialAnimationOfChannel(skeleton.Pointer, (int) channel, faceAnimation, playSound, loop);
    }

    public static void SetAgentActionChannel(
      this Skeleton skeleton,
      int actionChannelNo,
      ActionIndexCache actionIndex,
      float channelParameter = 0.0f,
      float blendPeriodOverride = -0.2f,
      bool forceFaceMorphRestart = true)
    {
      MBAPI.IMBSkeletonExtensions.SetAgentActionChannel(skeleton.Pointer, actionChannelNo, actionIndex.Index, channelParameter, blendPeriodOverride, forceFaceMorphRestart);
    }

    public static bool DoesActionContinueWithCurrentActionAtChannel(
      this Skeleton skeleton,
      int actionChannelNo,
      ActionIndexCache actionIndex)
    {
      return MBAPI.IMBSkeletonExtensions.DoesActionContinueWithCurrentActionAtChannel(skeleton.Pointer, actionChannelNo, actionIndex.Index);
    }

    public static void TickActionChannels(this Skeleton skeleton)
    {
      MBAPI.IMBSkeletonExtensions.TickActionChannels(skeleton.Pointer);
    }

    public static void SetAnimationAtChannel(
      this Skeleton skeleton,
      string animationName,
      int channelNo,
      float animationSpeedMultiplier = 1f,
      float blendInPeriod = -1f,
      float startProgress = 0.0f)
    {
      int indexWithId = MBAPI.IMBAnimation.GetIndexWithID(animationName);
      skeleton.SetAnimationAtChannel(indexWithId, channelNo, animationSpeedMultiplier, blendInPeriod, startProgress);
    }

    public static void SetAnimationAtChannel(
      this Skeleton skeleton,
      int animationIndex,
      int channelNo,
      float animationSpeedMultiplier = 1f,
      float blendInPeriod = -1f,
      float startProgress = 0.0f)
    {
      MBAPI.IMBSkeletonExtensions.SetAnimationAtChannel(skeleton.Pointer, animationIndex, channelNo, animationSpeedMultiplier, blendInPeriod, startProgress);
    }

    public static ActionIndexCache GetActionAtChannel(this Skeleton skeleton, int channelNo)
    {
      return new ActionIndexCache(MBAPI.IMBSkeletonExtensions.GetActionAtChannel(skeleton.Pointer, channelNo));
    }
  }
}
