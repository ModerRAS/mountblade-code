// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.Cinematics.HideoutBossFightBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.Cinematics
{
  public class HideoutBossFightBehavior : ScriptComponentBehavior
  {
    private const int PreviewPerturbSeed = 0;
    private const float PreviewPerturbAmount = 0.25f;
    private const int PreviewTroopCount = 10;
    private const float PreviewPlacementAngle = 0.157079637f;
    private const string InitialFrameTag = "initial_frame";
    private const string TargetFrameTag = "target_frame";
    private const string BossPreviewPrefab = "hideout_boss_fight_preview_boss";
    private const string PlayerPreviewPrefab = "hideout_boss_fight_preview_player";
    private const string AllyPreviewPrefab = "hideout_boss_fight_preview_ally";
    private const string BanditPreviewPrefab = "hideout_boss_fight_preview_bandit";
    private const string PreviewCameraPrefab = "hideout_boss_fight_camera_preview";
    public const float MaxCameraHeight = 5f;
    public const float MaxCameraWidth = 10f;
    public float InnerRadius = 2.5f;
    public float OuterRadius = 6f;
    public float WalkDistance = 3f;
    public bool ShowPreview;
    private int _perturbSeed;
    private Random _perturbRng = new Random(0);
    private MatrixFrame _previousEntityFrame = MatrixFrame.Identity;
    private GameEntity _previewEntities;
    private List<HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo> _previewAllies = new List<HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo>();
    private List<HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo> _previewBandits = new List<HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo>();
    private HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo _previewBoss = HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo.Invalid;
    private HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo _previewPlayer = HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo.Invalid;
    private GameEntity _previewCamera;

    public int PerturbSeed
    {
      private set
      {
        this._perturbSeed = value;
        this.ReSeedPerturbRng();
      }
      get => this._perturbSeed;
    }

    public void GetPlayerFrames(
      out MatrixFrame initialFrame,
      out MatrixFrame targetFrame,
      float perturbAmount = 0.0f)
    {
      this.ReSeedPerturbRng();
      Vec3 localOffset;
      this.ComputePerturbedSpawnOffset(perturbAmount, out localOffset);
      this.ComputeSpawnWorldFrame(3.14159274f, this.InnerRadius, localOffset - this.WalkDistance * Vec3.Forward, out initialFrame);
      this.ComputeSpawnWorldFrame(3.14159274f, this.InnerRadius, in localOffset, out targetFrame);
    }

    public void GetBossFrames(
      out MatrixFrame initialFrame,
      out MatrixFrame targetFrame,
      float perturbAmount = 0.0f)
    {
      this.ReSeedPerturbRng(1);
      Vec3 localOffset;
      this.ComputePerturbedSpawnOffset(perturbAmount, out localOffset);
      this.ComputeSpawnWorldFrame(0.0f, this.InnerRadius, localOffset + this.WalkDistance * Vec3.Forward, out initialFrame);
      this.ComputeSpawnWorldFrame(0.0f, this.InnerRadius, in localOffset, out targetFrame);
    }

    public void GetAllyFrames(
      out List<MatrixFrame> initialFrames,
      out List<MatrixFrame> targetFrames,
      int agentCount = 10,
      float agentOffsetAngle = 0.157079637f,
      float perturbAmount = 0.0f)
    {
      this.ReSeedPerturbRng(2);
      initialFrames = this.ComputeSpawnWorldFrames(agentCount, this.OuterRadius, -this.WalkDistance * Vec3.Forward, 3.14159274f, agentOffsetAngle, perturbAmount).ToList<MatrixFrame>();
      this.ReSeedPerturbRng(2);
      targetFrames = this.ComputeSpawnWorldFrames(agentCount, this.OuterRadius, Vec3.Zero, 3.14159274f, agentOffsetAngle, perturbAmount).ToList<MatrixFrame>();
    }

    public void GetBanditFrames(
      out List<MatrixFrame> initialFrames,
      out List<MatrixFrame> targetFrames,
      int agentCount = 10,
      float agentOffsetAngle = 0.157079637f,
      float perturbAmount = 0.0f)
    {
      this.ReSeedPerturbRng(3);
      initialFrames = this.ComputeSpawnWorldFrames(agentCount, this.OuterRadius, this.WalkDistance * Vec3.Forward, 0.0f, agentOffsetAngle, perturbAmount).ToList<MatrixFrame>();
      this.ReSeedPerturbRng(3);
      targetFrames = this.ComputeSpawnWorldFrames(agentCount, this.OuterRadius, Vec3.Zero, 0.0f, agentOffsetAngle, perturbAmount).ToList<MatrixFrame>();
    }

    public void GetAlliesInitialFrame(out MatrixFrame frame)
    {
      this.ComputeSpawnWorldFrame(3.14159274f, this.OuterRadius, -this.WalkDistance * Vec3.Forward, out frame);
    }

    public void GetBanditsInitialFrame(out MatrixFrame frame)
    {
      this.ComputeSpawnWorldFrame(0.0f, this.OuterRadius, this.WalkDistance * Vec3.Forward, out frame);
    }

    public bool IsWorldPointInsideCameraVolume(in Vec3 worldPoint)
    {
      return this.IsLocalPointInsideCameraVolume(this.GameEntity.GetGlobalFrame().TransformToLocal(worldPoint));
    }

    public bool ClampWorldPointToCameraVolume(in Vec3 worldPoint, out Vec3 clampedPoint)
    {
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      Vec3 localPoint = globalFrame.TransformToLocal(worldPoint);
      int num = this.IsLocalPointInsideCameraVolume(in localPoint) ? 1 : 0;
      if (num != 0)
      {
        clampedPoint = worldPoint;
        return num != 0;
      }
      float maxValue1 = 5f;
      float maxValue2 = this.OuterRadius + this.WalkDistance;
      localPoint.x = MathF.Clamp(localPoint.x, -maxValue1, maxValue1);
      localPoint.y = MathF.Clamp(localPoint.y, -maxValue2, maxValue2);
      localPoint.z = MathF.Clamp(localPoint.z, 0.0f, 5f);
      clampedPoint = globalFrame.TransformToParent(localPoint);
      return num != 0;
    }

    protected override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      if (variableName == "ShowPreview")
      {
        this.UpdatePreview();
        this.TogglePreviewVisibility(this.ShowPreview);
      }
      else
      {
        if (!this.ShowPreview || (variableName == "InnerRadius" || variableName == "OuterRadius" ? 1 : (variableName == "WalkDistance" ? 1 : 0)) == 0)
          return;
        this.UpdatePreview();
      }
    }

    protected override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      if (!this.ShowPreview)
        return;
      MatrixFrame frame = this.GameEntity.GetFrame();
      if ((!this._previousEntityFrame.origin.NearlyEquals(frame.origin) ? 1 : (!this._previousEntityFrame.rotation.NearlyEquals(frame.rotation) ? 1 : 0)) == 0)
        return;
      this._previousEntityFrame = frame;
      this.UpdatePreview();
    }

    protected override void OnRemoved(int removeReason)
    {
      base.OnRemoved(removeReason);
      this.RemovePreview();
    }

    private void UpdatePreview()
    {
      if ((NativeObject) this._previewEntities == (NativeObject) null)
        this.GeneratePreview();
      GameEntity previewEntities = this._previewEntities;
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      ref MatrixFrame local1 = ref globalFrame;
      previewEntities.SetGlobalFrame(in local1);
      MatrixFrame frame1 = MatrixFrame.Identity;
      MatrixFrame frame2 = MatrixFrame.Identity;
      this.GetPlayerFrames(out frame1, out frame2, 0.25f);
      this._previewPlayer.InitialEntity.SetGlobalFrame(in frame1);
      this._previewPlayer.TargetEntity.SetGlobalFrame(in frame2);
      List<MatrixFrame> initialFrames1;
      List<MatrixFrame> targetFrames1;
      this.GetAllyFrames(out initialFrames1, out targetFrames1, perturbAmount: 0.25f);
      int index1 = 0;
      foreach (HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo previewAlly in this._previewAllies)
      {
        GameEntity initialEntity = previewAlly.InitialEntity;
        globalFrame = initialFrames1[index1];
        ref MatrixFrame local2 = ref globalFrame;
        initialEntity.SetGlobalFrame(in local2);
        GameEntity targetEntity = previewAlly.TargetEntity;
        globalFrame = targetFrames1[index1];
        ref MatrixFrame local3 = ref globalFrame;
        targetEntity.SetGlobalFrame(in local3);
        ++index1;
      }
      this.GetBossFrames(out frame1, out frame2, 0.25f);
      this._previewBoss.InitialEntity.SetGlobalFrame(in frame1);
      this._previewBoss.TargetEntity.SetGlobalFrame(in frame2);
      List<MatrixFrame> initialFrames2;
      List<MatrixFrame> targetFrames2;
      this.GetBanditFrames(out initialFrames2, out targetFrames2, perturbAmount: 0.25f);
      int index2 = 0;
      foreach (HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo previewBandit in this._previewBandits)
      {
        GameEntity initialEntity = previewBandit.InitialEntity;
        MatrixFrame matrixFrame = initialFrames2[index2];
        ref MatrixFrame local4 = ref matrixFrame;
        initialEntity.SetGlobalFrame(in local4);
        GameEntity targetEntity = previewBandit.TargetEntity;
        matrixFrame = targetFrames2[index2];
        ref MatrixFrame local5 = ref matrixFrame;
        targetEntity.SetGlobalFrame(in local5);
        ++index2;
      }
      MatrixFrame frame3 = this._previewCamera.GetFrame();
      Vec3 scaleVector = frame3.rotation.GetScaleVector();
      Vec3 vec3 = Vec3.Forward * (this.OuterRadius + this.WalkDistance) + Vec3.Side * 5f + Vec3.Up * 5f;
      Vec3 scaleAmountXYZ = new Vec3(vec3.x / scaleVector.x, vec3.y / scaleVector.y, vec3.z / scaleVector.z);
      frame3.rotation.ApplyScaleLocal(scaleAmountXYZ);
      this._previewCamera.SetFrame(ref frame3);
    }

    private void GeneratePreview()
    {
      Scene scene = this.GameEntity.Scene;
      this._previewEntities = GameEntity.CreateEmpty(scene, false);
      this._previewEntities.EntityFlags |= EntityFlags.DontSaveToScene;
      MatrixFrame identity = MatrixFrame.Identity;
      this._previewEntities.SetFrame(ref identity);
      MatrixFrame globalFrame = this._previewEntities.GetGlobalFrame();
      GameEntity gameEntity1 = GameEntity.Instantiate(scene, "hideout_boss_fight_preview_boss", globalFrame);
      this._previewEntities.AddChild(gameEntity1);
      GameEntity initialEntity1;
      GameEntity targetEntity1;
      this.ReadPrefabEntity(gameEntity1, out initialEntity1, out targetEntity1);
      this._previewBoss = new HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo(gameEntity1, initialEntity1, targetEntity1);
      GameEntity gameEntity2 = GameEntity.Instantiate(scene, "hideout_boss_fight_preview_player", globalFrame);
      this._previewEntities.AddChild(gameEntity2);
      GameEntity initialEntity2;
      GameEntity targetEntity2;
      this.ReadPrefabEntity(gameEntity2, out initialEntity2, out targetEntity2);
      this._previewPlayer = new HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo(gameEntity2, initialEntity2, targetEntity2);
      for (int index = 0; index < 10; ++index)
      {
        GameEntity gameEntity3 = GameEntity.Instantiate(scene, "hideout_boss_fight_preview_ally", globalFrame);
        this._previewEntities.AddChild(gameEntity3);
        GameEntity initialEntity3;
        GameEntity targetEntity3;
        this.ReadPrefabEntity(gameEntity3, out initialEntity3, out targetEntity3);
        this._previewAllies.Add(new HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo(gameEntity3, initialEntity3, targetEntity3));
      }
      for (int index = 0; index < 10; ++index)
      {
        GameEntity gameEntity4 = GameEntity.Instantiate(scene, "hideout_boss_fight_preview_bandit", globalFrame);
        this._previewEntities.AddChild(gameEntity4);
        GameEntity initialEntity4;
        GameEntity targetEntity4;
        this.ReadPrefabEntity(gameEntity4, out initialEntity4, out targetEntity4);
        this._previewBandits.Add(new HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo(gameEntity4, initialEntity4, targetEntity4));
      }
      this._previewCamera = GameEntity.Instantiate(scene, "hideout_boss_fight_camera_preview", globalFrame);
      this._previewEntities.AddChild(this._previewCamera);
    }

    private void RemovePreview()
    {
      if (!((NativeObject) this._previewEntities != (NativeObject) null))
        return;
      this._previewEntities.Remove(90);
    }

    private void TogglePreviewVisibility(bool value)
    {
      if (!((NativeObject) this._previewEntities != (NativeObject) null))
        return;
      this._previewEntities.SetVisibilityExcludeParents(value);
    }

    private void ReadPrefabEntity(
      GameEntity entity,
      out GameEntity initialEntity,
      out GameEntity targetEntity)
    {
      GameEntity childEntityWithTag1 = entity.GetFirstChildEntityWithTag("initial_frame");
      if ((NativeObject) childEntityWithTag1 == (NativeObject) null)
        Debug.FailedAssert("Prefab entity " + entity.Name + " is not a spawn prefab with an initial frame entity", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Objects\\Cinematics\\HideoutBossFightBehavior.cs", nameof (ReadPrefabEntity), 389);
      GameEntity childEntityWithTag2 = entity.GetFirstChildEntityWithTag("target_frame");
      if ((NativeObject) childEntityWithTag2 == (NativeObject) null)
        Debug.FailedAssert("Prefab entity " + entity.Name + " is not a spawn prefab with an target frame entity", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Objects\\Cinematics\\HideoutBossFightBehavior.cs", nameof (ReadPrefabEntity), 395);
      initialEntity = childEntityWithTag1;
      targetEntity = childEntityWithTag2;
    }

    private void FindRadialPlacementFrame(float angle, float radius, out MatrixFrame frame)
    {
      float sa;
      float ca;
      MathF.SinCos(angle, out sa, out ca);
      Vec3 vec3 = ca * Vec3.Forward + sa * Vec3.Side;
      Vec3 o = radius * vec3;
      Mat3 mat3WithForward = Mat3.CreateMat3WithForward(((double) ca > 0.0 ? -1f : 1f) * Vec3.Forward);
      frame = new MatrixFrame(mat3WithForward, o);
    }

    private void SnapOnClosestCollider(ref MatrixFrame frameWs)
    {
      Scene scene = this.GameEntity.Scene;
      Vec3 origin = frameWs.origin;
      origin.z += 5f;
      Vec3 vec3 = origin;
      float num1 = 500f;
      vec3.z -= num1;
      Vec3 sourcePoint = origin;
      Vec3 targetPoint = vec3;
      float num2;
      ref float local = ref num2;
      if (!scene.RayCastForClosestEntityOrTerrain(sourcePoint, targetPoint, out local))
        return;
      frameWs.origin.z = origin.z - num2;
    }

    private void ReSeedPerturbRng(int seedOffset = 0)
    {
      this._perturbRng = new Random(this._perturbSeed + seedOffset);
    }

    private void ComputeSpawnWorldFrame(
      float localAngle,
      float localRadius,
      in Vec3 localOffset,
      out MatrixFrame worldFrame)
    {
      MatrixFrame frame;
      this.FindRadialPlacementFrame(localAngle, localRadius, out frame);
      frame.origin += localOffset;
      worldFrame = this.GameEntity.GetGlobalFrame().TransformToParent(frame);
      this.SnapOnClosestCollider(ref worldFrame);
    }

    private IEnumerable<MatrixFrame> ComputeSpawnWorldFrames(
      int spawnCount,
      float localRadius,
      Vec3 localOffset,
      float localBaseAngle,
      float localOffsetAngle,
      float localPerturbAmount = 0.0f)
    {
      float[] localPlacementAngles = new float[2]
      {
        localBaseAngle + localOffsetAngle / 2f,
        localBaseAngle - localOffsetAngle / 2f
      };
      int angleIndex = 0;
      MatrixFrame worldFrame = MatrixFrame.Identity;
      Vec3 perturbVector = Vec3.Zero;
      for (int i = 0; i < spawnCount; ++i)
      {
        this.ComputePerturbedSpawnOffset(localPerturbAmount, out perturbVector);
        this.ComputeSpawnWorldFrame(localPlacementAngles[angleIndex], localRadius, perturbVector + localOffset, out worldFrame);
        yield return worldFrame;
        localPlacementAngles[angleIndex] += (angleIndex == 0 ? 1f : -1f) * localOffsetAngle;
        angleIndex = (angleIndex + 1) % 2;
      }
    }

    private void ComputePerturbedSpawnOffset(float perturbAmount, out Vec3 perturbVector)
    {
      perturbVector = Vec3.Zero;
      perturbAmount = MathF.Abs(perturbAmount);
      if ((double) perturbAmount <= 9.9999997473787516E-06)
        return;
      float sa;
      float ca;
      MathF.SinCos(6.28318548f * this._perturbRng.NextFloat(), out sa, out ca);
      perturbVector.x = perturbAmount * ca;
      perturbVector.y = perturbAmount * sa;
    }

    private bool IsLocalPointInsideCameraVolume(in Vec3 localPoint)
    {
      float num1 = 5f;
      float num2 = this.OuterRadius + this.WalkDistance;
      return (double) localPoint.x >= -(double) num1 && (double) localPoint.x <= (double) num1 && (double) localPoint.y >= -(double) num2 && (double) localPoint.y <= (double) num2 && (double) localPoint.z >= 0.0 && (double) localPoint.z <= 5.0;
    }

    private readonly struct HideoutBossFightPreviewEntityInfo
    {
      public readonly GameEntity BaseEntity;
      public readonly GameEntity InitialEntity;
      public readonly GameEntity TargetEntity;

      public static HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo Invalid
      {
        get
        {
          return new HideoutBossFightBehavior.HideoutBossFightPreviewEntityInfo((GameEntity) null, (GameEntity) null, (GameEntity) null);
        }
      }

      public bool IsValid => (NativeObject) this.BaseEntity == (NativeObject) null;

      public HideoutBossFightPreviewEntityInfo(
        GameEntity baseEntity,
        GameEntity initialEntity,
        GameEntity targetEntity)
      {
        this.BaseEntity = baseEntity;
        this.InitialEntity = initialEntity;
        this.TargetEntity = targetEntity;
      }
    }

    private enum HideoutSeedPerturbOffset
    {
      Player,
      Boss,
      Ally,
      Bandit,
    }
  }
}
