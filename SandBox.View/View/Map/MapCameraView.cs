// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapCameraView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.View.Map
{
  public class MapCameraView : MapView
  {
    private const float VerticalHalfViewAngle = 0.34906584f;
    private Vec3 _cameraTarget;
    private bool _doFastCameraMovementToTarget;
    private float _cameraElevation;
    private Vec2 _lastUsedIdealCameraTarget;
    private Vec2 _cameraAnimationTarget;
    private float _cameraAnimationStopDuration;
    private readonly Scene _mapScene;
    protected float _customMaximumCameraHeight;
    private MatrixFrame _cameraFrame;

    protected virtual MapCameraView.CameraFollowMode CurrentCameraFollowMode { get; set; }

    public virtual float CameraFastMoveMultiplier { get; protected set; }

    protected virtual float CameraBearing { get; set; }

    protected virtual float MaximumCameraHeight
    {
      get => Math.Max(this._customMaximumCameraHeight, Campaign.MapMaximumHeight);
    }

    protected virtual float CameraBearingVelocity { get; set; }

    public virtual float CameraDistance { get; protected set; }

    protected virtual float TargetCameraDistance { get; set; }

    protected virtual float AdditionalElevation { get; set; }

    public virtual bool CameraAnimationInProgress { get; protected set; }

    public virtual bool ProcessCameraInput { get; protected set; }

    public virtual Camera Camera { get; protected set; }

    public virtual MatrixFrame CameraFrame
    {
      get => this._cameraFrame;
      protected set => this._cameraFrame = value;
    }

    protected virtual Vec3 IdealCameraTarget { get; set; }

    private static MapCameraView Instance { get; set; }

    public MapCameraView()
    {
      this.Camera = Camera.CreateCamera();
      this.Camera.SetViewVolume(true, -0.1f, 0.1f, -0.07f, 0.07f, 0.2f, 300f);
      this.Camera.Position = new Vec3(z: 10f);
      this.CameraBearing = 0.0f;
      this._cameraElevation = 1f;
      this.CameraDistance = 2.5f;
      this.ProcessCameraInput = true;
      this.CameraFastMoveMultiplier = 4f;
      this._cameraFrame = MatrixFrame.Identity;
      this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.FollowParty;
      this._mapScene = ((MapScene) Campaign.Current.MapSceneWrapper).Scene;
      MapCameraView.Instance = this;
    }

    public virtual void OnActivate(bool leftButtonDraggingMode, Vec3 clickedPosition)
    {
      this.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
      this.CameraBearingVelocity = 0.0f;
      this.UpdateMapCamera(leftButtonDraggingMode, clickedPosition);
    }

    public virtual void Initialize()
    {
      if (MobileParty.MainParty != null && PartyBase.MainParty.IsValid)
      {
        float height = 0.0f;
        this._mapScene.GetHeightAtPoint(MobileParty.MainParty.Position2D, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
        this.IdealCameraTarget = new Vec3(MobileParty.MainParty.Position2D, height + 1f);
      }
      this._cameraTarget = this.IdealCameraTarget;
    }

    protected internal override void OnFinalize()
    {
      base.OnFinalize();
      MapCameraView.Instance = (MapCameraView) null;
    }

    public virtual void SetCameraMode(MapCameraView.CameraFollowMode cameraMode)
    {
      this.CurrentCameraFollowMode = cameraMode;
    }

    public virtual void ResetCamera(bool resetDistance, bool teleportToMainParty)
    {
      if (teleportToMainParty)
        this.TeleportCameraToMainParty();
      if (resetDistance)
      {
        this.TargetCameraDistance = 15f;
        this.CameraDistance = 15f;
      }
      this.CameraBearing = 0.0f;
      this._cameraElevation = 1f;
    }

    public virtual void TeleportCameraToMainParty()
    {
      this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.FollowParty;
      Campaign.Current.CameraFollowParty = MobileParty.MainParty.Party;
      this.IdealCameraTarget = this.GetCameraTargetForParty(Campaign.Current.CameraFollowParty);
      this._lastUsedIdealCameraTarget = this.IdealCameraTarget.AsVec2;
      this._cameraTarget = this.IdealCameraTarget;
    }

    public virtual void FastMoveCameraToMainParty()
    {
      this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.FollowParty;
      Campaign.Current.CameraFollowParty = MobileParty.MainParty.Party;
      this.IdealCameraTarget = this.GetCameraTargetForParty(Campaign.Current.CameraFollowParty);
      this._doFastCameraMovementToTarget = true;
      this.TargetCameraDistance = 15f;
    }

    public virtual void FastMoveCameraToPosition(Vec2 target, bool isInMenu)
    {
      if (isInMenu)
        return;
      this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.MoveToPosition;
      this.IdealCameraTarget = this.GetCameraTargetForPosition(target);
      this._doFastCameraMovementToTarget = true;
      this.TargetCameraDistance = 15f;
    }

    public virtual bool IsCameraLockedToPlayerParty()
    {
      return this.CurrentCameraFollowMode == MapCameraView.CameraFollowMode.FollowParty && Campaign.Current.CameraFollowParty == MobileParty.MainParty.Party;
    }

    public virtual void StartCameraAnimation(Vec2 targetPosition, float animationStopDuration)
    {
      this.CameraAnimationInProgress = true;
      this._cameraAnimationTarget = targetPosition;
      this._cameraAnimationStopDuration = animationStopDuration;
      Campaign.Current.SetTimeSpeed(0);
      Campaign.Current.SetTimeControlModeLock(true);
    }

    public virtual void SiegeEngineClick(MatrixFrame siegeEngineFrame)
    {
      if ((double) this.TargetCameraDistance <= 18.0)
        return;
      this.TargetCameraDistance = 18f;
    }

    public virtual void OnExit() => this.ProcessCameraInput = true;

    public virtual void OnEscapeMenuToggled(bool isOpened) => this.ProcessCameraInput = !isOpened;

    public virtual void HandleMouse(
      bool rightMouseButtonPressed,
      float verticalCameraInput,
      float mouseMoveY,
      float dt)
    {
      float num = (float) (0.30000001192092896 / 700.0);
      float minValue = (float) -(700.0 - (double) MathF.Min(700f, MathF.Max(50f, this.CameraDistance))) * num;
      float maxValue = MathF.Max(minValue + 1E-05f, 1.5550884f - this.CalculateCameraElevation(this.CameraDistance));
      if (rightMouseButtonPressed)
        this.AdditionalElevation = MBMath.ClampFloat(this.AdditionalElevation + mouseMoveY * 0.0015f, minValue, maxValue);
      if ((double) verticalCameraInput == 0.0)
        return;
      this.AdditionalElevation = MBMath.ClampFloat(this.AdditionalElevation - verticalCameraInput * dt, minValue, maxValue);
    }

    public virtual void HandleLeftMouseButtonClick(bool isMouseActive)
    {
      if (!isMouseActive)
        return;
      this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.FollowParty;
      Campaign.Current.CameraFollowParty = PartyBase.MainParty;
    }

    public virtual void OnSetMapSiegeOverlayState(bool isActive, bool isMapSiegeOverlayViewNull)
    {
      if (!(isActive & isMapSiegeOverlayViewNull) || PlayerSiege.PlayerSiegeEvent == null)
        return;
      this.TargetCameraDistance = 13f;
    }

    public virtual void OnRefreshMapSiegeOverlayRequired(bool isMapSiegeOverlayViewNull)
    {
      if (!(PlayerSiege.PlayerSiegeEvent != null & isMapSiegeOverlayViewNull))
        return;
      this.TargetCameraDistance = 13f;
    }

    public virtual void OnBeforeTick(in MapCameraView.InputInformation inputInformation)
    {
      this._mapScene.SetDepthOfFieldParameters(0.05f, (MathF.Min(1f, MathF.Max(0.0f, 1f - this.CameraFrame.rotation.f.z)) + 0.15f) * 1000f, true);
      this._mapScene.SetDepthOfFieldFocus(0.05f);
      MobileParty mainParty = MobileParty.MainParty;
      if (inputInformation.IsMainPartyValid && this.CameraAnimationInProgress)
      {
        Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
        if ((double) this._cameraAnimationStopDuration > 0.0)
        {
          if ((double) this._cameraAnimationTarget.DistanceSquared(this._cameraTarget.AsVec2) < 9.9999997473787516E-05)
            this._cameraAnimationStopDuration = MathF.Max(this._cameraAnimationStopDuration - inputInformation.Dt, 0.0f);
          else
            this.IdealCameraTarget = this._cameraAnimationTarget.ToVec3(this._mapScene.GetTerrainHeight(this._cameraAnimationTarget) + 1f);
        }
        else if ((double) MobileParty.MainParty.Position2D.DistanceSquared(this._cameraTarget.AsVec2) < 9.9999997473787516E-05)
        {
          this.CameraAnimationInProgress = false;
          Campaign.Current.SetTimeControlModeLock(false);
        }
        else
          this.IdealCameraTarget = MobileParty.MainParty.GetPosition() + Vec3.Up;
      }
      bool flag = this.CameraAnimationInProgress;
      if (this.ProcessCameraInput && !this.CameraAnimationInProgress && inputInformation.IsMapReady)
        flag = this.GetMapCameraInput(inputInformation);
      if (flag)
      {
        Vec3 vec3 = 10f * (this.IdealCameraTarget - this._cameraTarget) * inputInformation.Dt;
        float num1 = MathF.Sqrt(MathF.Max(this.CameraDistance, 20f)) * 0.15f;
        float num2 = this._doFastCameraMovementToTarget ? num1 * 5f : num1;
        if ((double) vec3.LengthSquared > (double) num2 * (double) num2)
          vec3 = vec3.NormalizedCopy() * num2;
        if ((double) vec3.LengthSquared < (double) num1 * (double) num1)
          this._doFastCameraMovementToTarget = false;
        this._cameraTarget += vec3;
      }
      else
      {
        this._cameraTarget = this.IdealCameraTarget;
        this._doFastCameraMovementToTarget = false;
      }
      if (inputInformation.IsMainPartyValid)
      {
        if (inputInformation.CameraFollowModeKeyPressed)
          this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.FollowParty;
        if (!inputInformation.IsInMenu && !inputInformation.MiddleMouseButtonDown && (MobileParty.MainParty == null || MobileParty.MainParty.Army == null || MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty) && (inputInformation.PartyMoveRightKey || inputInformation.PartyMoveLeftKey || inputInformation.PartyMoveUpKey || inputInformation.PartyMoveDownKey))
        {
          float a = 0.0f;
          float b = 0.0f;
          float sa1;
          float ca1;
          MathF.SinCos(this.CameraBearing, out sa1, out ca1);
          float sa2;
          float ca2;
          MathF.SinCos(this.CameraBearing + 1.57079637f, out sa2, out ca2);
          float num = 0.5f;
          if (inputInformation.PartyMoveUpKey)
          {
            b += ca1 * num;
            a += sa1 * num;
            mainParty.Ai.ForceAiNoPathMode = true;
          }
          if (inputInformation.PartyMoveDownKey)
          {
            b -= ca1 * num;
            a -= sa1 * num;
            mainParty.Ai.ForceAiNoPathMode = true;
          }
          if (inputInformation.PartyMoveLeftKey)
          {
            b -= ca2 * num;
            a -= sa2 * num;
            mainParty.Ai.ForceAiNoPathMode = true;
          }
          if (inputInformation.PartyMoveRightKey)
          {
            b += ca2 * num;
            a += sa2 * num;
            mainParty.Ai.ForceAiNoPathMode = true;
          }
          this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.FollowParty;
          mainParty.Ai.SetMoveGoToPoint(mainParty.Position2D + new Vec2(a, b));
          Campaign.Current.TimeControlMode = CampaignTimeControlMode.StoppablePlay;
        }
        else if (mainParty.Ai.ForceAiNoPathMode)
          mainParty.Ai.SetMoveGoToPoint(mainParty.Position2D);
      }
      this.UpdateMapCamera(inputInformation.LeftButtonDraggingMode, inputInformation.ClickedPosition);
    }

    protected virtual void UpdateMapCamera(bool _leftButtonDraggingMode, Vec3 _clickedPosition)
    {
      this._lastUsedIdealCameraTarget = this.IdealCameraTarget.AsVec2;
      MatrixFrame mapCamera = this.ComputeMapCamera(ref this._cameraTarget, this.CameraBearing, this._cameraElevation, this.CameraDistance, ref this._lastUsedIdealCameraTarget);
      bool positionChanged = !mapCamera.origin.NearlyEquals(this._cameraFrame.origin);
      bool rotationChanged = !mapCamera.rotation.NearlyEquals(this._cameraFrame.rotation);
      if (rotationChanged | positionChanged)
        Game.Current.EventManager.TriggerEvent<MainMapCameraMoveEvent>(new MainMapCameraMoveEvent(rotationChanged, positionChanged));
      this._cameraFrame = mapCamera;
      float height = 0.0f;
      this._mapScene.GetHeightAtPoint(this._cameraFrame.origin.AsVec2, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
      height += 0.5f;
      if ((double) this._cameraFrame.origin.z < (double) height)
      {
        if (_leftButtonDraggingMode)
        {
          Vec3 vec3_1 = _clickedPosition;
          Vec3 vec3_2 = vec3_1 - Vec3.DotProduct(vec3_1 - this._cameraFrame.origin, this._cameraFrame.rotation.s) * this._cameraFrame.rotation.s;
          Vec3 vec = Vec3.CrossProduct((vec3_2 - this._cameraFrame.origin).NormalizedCopy(), (vec3_2 - (this._cameraFrame.origin + new Vec3(z: height - this._cameraFrame.origin.z))).NormalizedCopy());
          float a = vec.Normalize();
          this._cameraFrame.origin.z = height;
          this._cameraFrame.rotation.u = this._cameraFrame.rotation.u.RotateAboutAnArbitraryVector(vec, a);
          this._cameraFrame.rotation.f = Vec3.CrossProduct(this._cameraFrame.rotation.u, this._cameraFrame.rotation.s).NormalizedCopy();
          this._cameraFrame.rotation.s = Vec3.CrossProduct(this._cameraFrame.rotation.f, this._cameraFrame.rotation.u);
          Vec3 planeNormal = -Vec3.Up;
          Vec3 rayDirection = -this._cameraFrame.rotation.u;
          Vec3 planeCenter = this.IdealCameraTarget;
          float t;
          if (MBMath.GetRayPlaneIntersectionPoint(in planeNormal, in planeCenter, in this._cameraFrame.origin, in rayDirection, out t))
          {
            this.IdealCameraTarget = this._cameraFrame.origin + rayDirection * t;
            this._cameraTarget = this.IdealCameraTarget;
          }
          Vec2 vec2 = this._cameraFrame.rotation.f.AsVec2;
          vec2 = new Vec2(vec2.Length, this._cameraFrame.rotation.f.z);
          this._cameraElevation = -vec2.RotationInRadians;
          this.CameraDistance = (this._cameraFrame.origin - this.IdealCameraTarget).Length - 2f;
          this.TargetCameraDistance = this.CameraDistance;
          this.AdditionalElevation = this._cameraElevation - this.CalculateCameraElevation(this.CameraDistance);
          this._lastUsedIdealCameraTarget = this.IdealCameraTarget.AsVec2;
          this.ComputeMapCamera(ref this._cameraTarget, this.CameraBearing, this._cameraElevation, this.CameraDistance, ref this._lastUsedIdealCameraTarget);
        }
        else
        {
          float num1 = 0.471238941f;
          int num2 = 0;
          do
          {
            this._cameraElevation += (double) this._cameraFrame.origin.z < (double) height ? num1 : -num1;
            this.AdditionalElevation = this._cameraElevation - this.CalculateCameraElevation(this.CameraDistance);
            float a1 = 700f;
            float num3 = 0.3f / a1;
            float a2 = 50f;
            float minValue = (float) -((double) a1 - (double) MathF.Min(a1, MathF.Max(a2, this.CameraDistance))) * num3;
            float maxValue = MathF.Max(minValue + 1E-05f, 1.5550884f - this.CalculateCameraElevation(this.CameraDistance));
            this.AdditionalElevation = MBMath.ClampFloat(this.AdditionalElevation, minValue, maxValue);
            this._cameraElevation = this.AdditionalElevation + this.CalculateCameraElevation(this.CameraDistance);
            Vec2 zero = Vec2.Zero;
            this._cameraFrame = this.ComputeMapCamera(ref this._cameraTarget, this.CameraBearing, this._cameraElevation, this.CameraDistance, ref zero);
            this._mapScene.GetHeightAtPoint(this._cameraFrame.origin.AsVec2, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
            height += 0.5f;
            if ((double) num1 > 9.9999997473787516E-05)
              num1 *= 0.5f;
            else
              ++num2;
          }
          while ((double) num1 > 9.9999997473787516E-05 || (double) this._cameraFrame.origin.z < (double) height && num2 < 5);
          if ((double) this._cameraFrame.origin.z < (double) height)
          {
            this._cameraFrame.origin.z = height;
            Vec3 planeNormal = -Vec3.Up;
            Vec3 rayDirection = -this._cameraFrame.rotation.u;
            Vec3 planeCenter = this.IdealCameraTarget;
            float t;
            if (MBMath.GetRayPlaneIntersectionPoint(in planeNormal, in planeCenter, in this._cameraFrame.origin, in rayDirection, out t))
            {
              this.IdealCameraTarget = this._cameraFrame.origin + rayDirection * t;
              this._cameraTarget = this.IdealCameraTarget;
            }
            Vec3 vec3 = this._cameraFrame.origin - this.IdealCameraTarget;
            this.CameraDistance = vec3.Length - 2f;
            vec3 = this.IdealCameraTarget;
            this._lastUsedIdealCameraTarget = vec3.AsVec2;
            this.ComputeMapCamera(ref this._cameraTarget, this.CameraBearing, this._cameraElevation, this.CameraDistance, ref this._lastUsedIdealCameraTarget);
            this.TargetCameraDistance = MathF.Max(this.TargetCameraDistance, this.CameraDistance);
          }
        }
      }
      this.Camera.Frame = this._cameraFrame;
      this.Camera.SetFovVertical(0.6981317f, Screen.AspectRatio, 0.01f, this.MaximumCameraHeight * 4f);
      this._mapScene.SetDepthOfFieldFocus(0.0f);
      this._mapScene.SetDepthOfFieldParameters(0.0f, 0.0f, false);
      MatrixFrame identity = MatrixFrame.Identity with
      {
        rotation = this._cameraFrame.rotation,
        origin = this._cameraTarget
      };
      this._mapScene.GetHeightAtPoint(identity.origin.AsVec2, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref identity.origin.z);
      identity.origin = MBMath.Lerp(identity.origin, this._cameraFrame.origin, 0.075f, 1E-05f);
      PathFaceRecord faceIndex = Campaign.Current.MapSceneWrapper.GetFaceIndex(identity.origin.AsVec2);
      if (faceIndex.IsValid())
        MBMapScene.TickAmbientSounds(this._mapScene, (int) Campaign.Current.MapSceneWrapper.GetFaceTerrainType(faceIndex));
      SoundManager.SetListenerFrame(identity);
    }

    protected virtual Vec3 GetCameraTargetForPosition(Vec2 targetPosition)
    {
      float terrainHeight = this._mapScene.GetTerrainHeight(targetPosition);
      return new Vec3(targetPosition, terrainHeight + 1f);
    }

    protected virtual Vec3 GetCameraTargetForParty(PartyBase party)
    {
      Vec2 targetPosition;
      if (party.IsMobile && party.MobileParty.CurrentSettlement != null)
        targetPosition = party.MobileParty.CurrentSettlement.Position2D;
      else if (party.IsMobile && party.MobileParty.BesiegedSettlement != null)
      {
        if (PlayerSiege.PlayerSiegeEvent != null)
        {
          Vec2 asVec2 = ((IEnumerable<MatrixFrame>) party.MobileParty.BesiegedSettlement.Town.BesiegerCampPositions1).First<MatrixFrame>().origin.AsVec2;
          targetPosition = Vec2.Lerp(party.MobileParty.BesiegedSettlement.GatePosition, asVec2, 0.75f);
        }
        else
          targetPosition = party.MobileParty.BesiegedSettlement.GatePosition;
      }
      else
        targetPosition = party.Position2D;
      return this.GetCameraTargetForPosition(targetPosition);
    }

    protected virtual bool GetMapCameraInput(MapCameraView.InputInformation inputInformation)
    {
      bool flag = false;
      bool mapCameraInput = !inputInformation.LeftButtonDraggingMode;
      if (inputInformation.IsControlDown && inputInformation.CheatModeEnabled)
      {
        flag = true;
        if ((double) inputInformation.DeltaMouseScroll > 0.0099999997764825821)
          this.CameraFastMoveMultiplier *= 1.25f;
        else if ((double) inputInformation.DeltaMouseScroll < -0.0099999997764825821)
          this.CameraFastMoveMultiplier *= 0.8f;
        this.CameraFastMoveMultiplier = MBMath.ClampFloat(this.CameraFastMoveMultiplier, 1f, 37.252903f);
      }
      Vec2 vec2_1 = Vec2.Zero;
      Vec3 vec3_1;
      if (!inputInformation.LeftMouseButtonPressed && inputInformation.LeftMouseButtonDown && !inputInformation.LeftMouseButtonReleased && (double) inputInformation.MousePositionPixel.DistanceSquared(inputInformation.ClickedPositionPixel) > 300.0 && !inputInformation.IsInMenu)
      {
        if (!inputInformation.LeftButtonDraggingMode)
        {
          this.IdealCameraTarget = this._cameraTarget;
          this._lastUsedIdealCameraTarget = this.IdealCameraTarget.AsVec2;
        }
        vec3_1 = inputInformation.WorldMouseFar - inputInformation.WorldMouseNear;
        Vec3 rayDirection = vec3_1.NormalizedCopy();
        float t;
        if (MBMath.GetRayPlaneIntersectionPoint(-Vec3.Up, in inputInformation.ClickedPosition, in inputInformation.WorldMouseNear, in rayDirection, out t))
        {
          this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.Free;
          Vec3 vec3_2 = inputInformation.WorldMouseNear + rayDirection * t;
          vec2_1 = inputInformation.ClickedPosition.AsVec2 - vec3_2.AsVec2;
        }
      }
      if (inputInformation.MiddleMouseButtonDown)
        this.TargetCameraDistance += (float) (0.0099999997764825821 * ((double) this.CameraDistance + 20.0)) * inputInformation.MouseSensitivity * inputInformation.MouseMoveY;
      if (inputInformation.RotateLeftKeyDown)
        this.CameraBearingVelocity = inputInformation.Dt * 2f;
      else if (inputInformation.RotateRightKeyDown)
        this.CameraBearingVelocity = inputInformation.Dt * -2f;
      this.CameraBearingVelocity += inputInformation.HorizontalCameraInput * 1.75f * inputInformation.Dt;
      if (inputInformation.RightMouseButtonDown)
        this.CameraBearingVelocity += 0.01f * inputInformation.MouseSensitivity * inputInformation.MouseMoveX;
      float num1 = 0.1f;
      if (!inputInformation.IsMouseActive)
        num1 *= inputInformation.Dt * 10f;
      if (!flag)
      {
        this.TargetCameraDistance -= (float) ((double) inputInformation.MapZoomIn * (double) num1 * ((double) this.CameraDistance + 20.0));
        this.TargetCameraDistance += (float) ((double) inputInformation.MapZoomOut * (double) num1 * ((double) this.CameraDistance + 20.0));
      }
      PartyBase cameraFollowParty = Campaign.Current.CameraFollowParty;
      this.TargetCameraDistance = MBMath.ClampFloat(this.TargetCameraDistance, 2.5f, cameraFollowParty == null || !cameraFollowParty.IsMobile || cameraFollowParty.MobileParty.BesiegedSettlement == null && (cameraFollowParty.MobileParty.CurrentSettlement == null || !cameraFollowParty.MobileParty.CurrentSettlement.IsUnderSiege) ? this.MaximumCameraHeight : 30f);
      float f = this.TargetCameraDistance - this.CameraDistance;
      float num2 = MathF.Abs(f);
      float cameraDistance = (double) num2 > 1.0 / 1000.0 ? this.CameraDistance + (float) ((double) f * (double) inputInformation.Dt * 8.0) : this.TargetCameraDistance;
      if (this.CurrentCameraFollowMode == MapCameraView.CameraFollowMode.Free && !inputInformation.RightMouseButtonDown && !inputInformation.LeftMouseButtonDown && (double) num2 >= 1.0 / 1000.0)
      {
        vec3_1 = inputInformation.WorldMouseFar - this.CameraFrame.origin;
        if ((double) vec3_1.NormalizedCopy().z < -0.20000000298023224 && inputInformation.RayCastForClosestEntityOrTerrainCondition)
        {
          MatrixFrame mapCamera = this.ComputeMapCamera(ref this._cameraTarget, this.CameraBearing + this.CameraBearingVelocity, MathF.Min(this.CalculateCameraElevation(cameraDistance) + this.AdditionalElevation, 1.5550884f), cameraDistance, ref this._lastUsedIdealCameraTarget);
          Vec3 planeNormal = -Vec3.Up;
          vec3_1 = inputInformation.WorldMouseFar - this.CameraFrame.origin;
          Vec3 v = vec3_1.NormalizedCopy();
          Vec3 rayDirection = mapCamera.rotation.TransformToParent(this.CameraFrame.rotation.TransformToLocal(v));
          float t;
          if (MBMath.GetRayPlaneIntersectionPoint(in planeNormal, in inputInformation.ProjectedPosition, in mapCamera.origin, in rayDirection, out t))
          {
            Vec2 asVec2_1 = inputInformation.ProjectedPosition.AsVec2;
            vec3_1 = mapCamera.origin + rayDirection * t;
            Vec2 asVec2_2 = vec3_1.AsVec2;
            vec2_1 = asVec2_1 - asVec2_2;
            mapCameraInput = false;
          }
        }
      }
      if ((double) inputInformation.RX != 0.0 || (double) inputInformation.RY != 0.0 || vec2_1.IsNonZero())
      {
        float num3 = (float) (1.0 / 1000.0 * ((double) this.CameraDistance * 0.550000011920929 + 15.0));
        Vec2 vec2_2 = Vec2.FromRotation(-this.CameraBearing);
        vec3_1 = this.IdealCameraTarget;
        if ((double) (vec3_1.AsVec2 - this._lastUsedIdealCameraTarget).LengthSquared > 0.010000000707805157)
        {
          this.IdealCameraTarget = new Vec3(this._lastUsedIdealCameraTarget.x, this._lastUsedIdealCameraTarget.y, this.IdealCameraTarget.z);
          this._cameraTarget = this.IdealCameraTarget;
        }
        if (!vec2_1.IsNonZero())
          this.IdealCameraTarget = this._cameraTarget;
        Vec2 vec2_3 = inputInformation.Dt * 500f * inputInformation.RX * vec2_2.RightVec() * num3 + inputInformation.Dt * 500f * inputInformation.RY * vec2_2 * num3;
        this.IdealCameraTarget = new Vec3(this.IdealCameraTarget.x + vec2_1.x + vec2_3.x, this.IdealCameraTarget.y + vec2_1.y + vec2_3.y, this.IdealCameraTarget.z);
        if (vec2_1.IsNonZero())
          this._cameraTarget = this.IdealCameraTarget;
        this._cameraTarget.AsVec2 += vec2_3;
        if ((double) inputInformation.RX != 0.0 || (double) inputInformation.RY != 0.0)
          this.CurrentCameraFollowMode = MapCameraView.CameraFollowMode.Free;
      }
      this.CameraBearing += this.CameraBearingVelocity;
      this.CameraBearingVelocity = 0.0f;
      this.CameraDistance = cameraDistance;
      this._cameraElevation = MathF.Min(this.CalculateCameraElevation(cameraDistance) + this.AdditionalElevation, 1.5550884f);
      if (this.CurrentCameraFollowMode == MapCameraView.CameraFollowMode.FollowParty && cameraFollowParty != null && cameraFollowParty.IsValid)
      {
        Vec2 position;
        if (cameraFollowParty.IsMobile && cameraFollowParty.MobileParty.CurrentSettlement != null)
          position = cameraFollowParty.MobileParty.CurrentSettlement.SiegeEvent != null ? cameraFollowParty.MobileParty.CurrentSettlement.GatePosition : cameraFollowParty.MobileParty.CurrentSettlement.Position2D;
        else if (cameraFollowParty.IsMobile && cameraFollowParty.MobileParty.BesiegedSettlement != null)
        {
          if (PlayerSiege.PlayerSiegeEvent != null)
          {
            Vec2 asVec2 = ((IEnumerable<MatrixFrame>) cameraFollowParty.MobileParty.BesiegedSettlement.Town.BesiegerCampPositions1).First<MatrixFrame>().origin.AsVec2;
            position = Vec2.Lerp(cameraFollowParty.MobileParty.BesiegedSettlement.GatePosition, asVec2, 0.75f);
          }
          else
            position = cameraFollowParty.MobileParty.BesiegedSettlement.GatePosition;
        }
        else
          position = cameraFollowParty.Position2D;
        float terrainHeight = this._mapScene.GetTerrainHeight(position);
        this.IdealCameraTarget = new Vec3(position.x, position.y, terrainHeight + 1f);
      }
      return mapCameraInput;
    }

    protected virtual MatrixFrame ComputeMapCamera(
      ref Vec3 cameraTarget,
      float cameraBearing,
      float cameraElevation,
      float cameraDistance,
      ref Vec2 lastUsedIdealCameraTarget)
    {
      Vec2 asVec2 = cameraTarget.AsVec2;
      MatrixFrame identity = MatrixFrame.Identity with
      {
        origin = cameraTarget
      };
      identity.rotation.RotateAboutSide(1.57079637f);
      identity.rotation.RotateAboutForward(-cameraBearing);
      identity.rotation.RotateAboutSide(-cameraElevation);
      identity.origin += identity.rotation.u * (cameraDistance + 2f);
      Vec2 vec2 = (Campaign.MapMinimumPosition + Campaign.MapMaximumPosition) * 0.5f;
      float num1 = Campaign.MapMaximumPosition.y - vec2.y;
      float num2 = Campaign.MapMaximumPosition.x - vec2.x;
      asVec2.x = MBMath.ClampFloat(asVec2.x, vec2.x - num2, vec2.x + num2);
      asVec2.y = MBMath.ClampFloat(asVec2.y, vec2.y - num1, vec2.y + num1);
      lastUsedIdealCameraTarget.x = MBMath.ClampFloat(lastUsedIdealCameraTarget.x, vec2.x - num2, vec2.x + num2);
      lastUsedIdealCameraTarget.y = MBMath.ClampFloat(lastUsedIdealCameraTarget.y, vec2.y - num1, vec2.y + num1);
      identity.origin.x += asVec2.x - cameraTarget.x;
      identity.origin.y += asVec2.y - cameraTarget.y;
      return identity;
    }

    protected virtual float CalculateCameraElevation(float cameraDistance)
    {
      return (float) ((double) cameraDistance * 0.5 * 0.014999999664723873 + 0.34999999403953552);
    }

    public enum CameraFollowMode
    {
      Free,
      FollowParty,
      MoveToPosition,
    }

    public struct InputInformation
    {
      public bool IsMainPartyValid;
      public bool IsMapReady;
      public bool IsControlDown;
      public bool IsMouseActive;
      public bool CheatModeEnabled;
      public bool LeftMouseButtonPressed;
      public bool LeftMouseButtonDown;
      public bool LeftMouseButtonReleased;
      public bool MiddleMouseButtonDown;
      public bool RightMouseButtonDown;
      public bool RotateLeftKeyDown;
      public bool RotateRightKeyDown;
      public bool PartyMoveUpKey;
      public bool PartyMoveDownKey;
      public bool PartyMoveLeftKey;
      public bool PartyMoveRightKey;
      public bool CameraFollowModeKeyPressed;
      public bool LeftButtonDraggingMode;
      public bool IsInMenu;
      public bool RayCastForClosestEntityOrTerrainCondition;
      public float MapZoomIn;
      public float MapZoomOut;
      public float DeltaMouseScroll;
      public float MouseSensitivity;
      public float MouseMoveX;
      public float MouseMoveY;
      public float HorizontalCameraInput;
      public float RX;
      public float RY;
      public float RS;
      public float Dt;
      public Vec2 MousePositionPixel;
      public Vec2 ClickedPositionPixel;
      public Vec3 ClickedPosition;
      public Vec3 ProjectedPosition;
      public Vec3 WorldMouseNear;
      public Vec3 WorldMouseFar;
    }
  }
}
