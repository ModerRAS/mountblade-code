// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.Cinematics.SkeletonAnimatedCamera
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects.AnimationPoints;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.Cinematics
{
  public class SkeletonAnimatedCamera : ScriptComponentBehavior
  {
    public string SkeletonName = "human_skeleton";
    public int BoneIndex;
    public Vec3 AttachmentOffset = new Vec3();
    public string AnimationName = "";
    public SimpleButton Restart;

    private void CreateVisualizer()
    {
      if (!(this.SkeletonName != "") || !(this.AnimationName != ""))
        return;
      this.GameEntity.CreateSimpleSkeleton(this.SkeletonName);
      this.GameEntity.Skeleton.SetAnimationAtChannel(this.AnimationName, 0);
    }

    protected override void OnInit()
    {
      base.OnInit();
      this.CreateVisualizer();
    }

    protected override void OnEditorInit()
    {
      base.OnEditorInit();
      this.OnInit();
    }

    protected override void OnTick(float dt)
    {
      GameEntity entityWithTag = this.GameEntity.Scene.FindEntityWithTag("camera_instance");
      if (!((NativeObject) entityWithTag != (NativeObject) null) || !((NativeObject) this.GameEntity.Skeleton != (NativeObject) null))
        return;
      MatrixFrame boneEntitialFrame = this.GameEntity.Skeleton.GetBoneEntitialFrame((sbyte) this.BoneIndex);
      MatrixFrame parent = this.GameEntity.GetGlobalFrame().TransformToParent(boneEntitialFrame);
      MatrixFrame frame = new MatrixFrame()
      {
        rotation = parent.rotation
      };
      frame.rotation.u = -parent.rotation.s;
      frame.rotation.f = -parent.rotation.u;
      frame.rotation.s = parent.rotation.f;
      frame.origin = parent.origin + this.AttachmentOffset;
      entityWithTag.SetGlobalFrame(in frame);
      SoundManager.SetListenerFrame(frame);
    }

    protected override void OnEditorTick(float dt) => this.OnTick(dt);

    protected override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      if (variableName == "SkeletonName" || variableName == "AnimationName")
        this.CreateVisualizer();
      if (!(variableName == "Restart"))
        return;
      List<GameEntity> entities = new List<GameEntity>();
      this.GameEntity.Scene.GetAllEntitiesWithScriptComponent<AnimationPoint>(ref entities);
      foreach (GameEntity gameEntity in entities)
        gameEntity.GetFirstScriptOfType<AnimationPoint>().RequestResync();
      this.CreateVisualizer();
    }
  }
}
