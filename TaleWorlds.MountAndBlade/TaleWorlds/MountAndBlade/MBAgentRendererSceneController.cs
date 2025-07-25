// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBAgentRendererSceneController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MBAgentRendererSceneController
  {
    private UIntPtr _pointer;

    internal MBAgentRendererSceneController(UIntPtr pointer) => this._pointer = pointer;

    ~MBAgentRendererSceneController()
    {
    }

    public void SetEnforcedVisibilityForAllAgents(Scene scene)
    {
      MBAPI.IMBAgentVisuals.SetEnforcedVisibilityForAllAgents(scene.Pointer, this._pointer);
    }

    public static MBAgentRendererSceneController CreateNewAgentRendererSceneController(
      Scene scene,
      int maxRenderCount)
    {
      return new MBAgentRendererSceneController(MBAPI.IMBAgentVisuals.CreateAgentRendererSceneController(scene.Pointer, maxRenderCount));
    }

    public void SetDoTimerBasedForcedSkeletonUpdates(bool value)
    {
      MBAPI.IMBAgentVisuals.SetDoTimerBasedForcedSkeletonUpdates(this._pointer, value);
    }

    public static void DestructAgentRendererSceneController(
      Scene scene,
      MBAgentRendererSceneController rendererSceneController,
      bool deleteThisFrame)
    {
      MBAPI.IMBAgentVisuals.DestructAgentRendererSceneController(scene.Pointer, rendererSceneController._pointer, deleteThisFrame);
      rendererSceneController._pointer = UIntPtr.Zero;
    }

    public static void ValidateAgentVisualsReseted(
      Scene scene,
      MBAgentRendererSceneController rendererSceneController)
    {
      MBAPI.IMBAgentVisuals.ValidateAgentVisualsReseted(scene.Pointer, rendererSceneController._pointer);
    }
  }
}
