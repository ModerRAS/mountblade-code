using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Missions.Handlers;

namespace TaleWorlds.MountAndBlade.View.MissionViews.Order
{
	// Token: 0x0200007F RID: 127
	public class OrderTroopPlacer : MissionView
	{
		// Token: 0x17000077 RID: 119
		// (get) Token: 0x06000491 RID: 1169 RVA: 0x00024FDA File Offset: 0x000231DA
		// (set) Token: 0x06000492 RID: 1170 RVA: 0x00024FE2 File Offset: 0x000231E2
		public bool SuspendTroopPlacer
		{
			get
			{
				return this._suspendTroopPlacer;
			}
			set
			{
				this._suspendTroopPlacer = value;
				if (value)
				{
					this.HideOrderPositionEntities();
				}
				else
				{
					this._formationDrawingStartingPosition = null;
				}
				this.Reset();
			}
		}

		// Token: 0x06000493 RID: 1171 RVA: 0x00025008 File Offset: 0x00023208
		public override void AfterStart()
		{
			base.AfterStart();
			this._formationDrawingStartingPosition = null;
			this._formationDrawingStartingPointOfMouse = null;
			this._formationDrawingStartingTime = null;
			this._orderRotationEntities = new List<GameEntity>();
			this._orderPositionEntities = new List<GameEntity>();
			this.formationDrawTimer = new Timer(MBCommon.GetApplicationTime(), 0.033333335f, true);
			this.widthEntityLeft = GameEntity.CreateEmpty(base.Mission.Scene, true);
			this.widthEntityLeft.AddComponent(MetaMesh.GetCopy("order_arrow_a", true, false));
			this.widthEntityLeft.SetVisibilityExcludeParents(false);
			this.widthEntityRight = GameEntity.CreateEmpty(base.Mission.Scene, true);
			this.widthEntityRight.AddComponent(MetaMesh.GetCopy("order_arrow_a", true, false));
			this.widthEntityRight.SetVisibilityExcludeParents(false);
		}

		// Token: 0x06000494 RID: 1172 RVA: 0x000250DF File Offset: 0x000232DF
		private void InitializeInADisgustingManner()
		{
			this.PlayerTeam = base.Mission.PlayerTeam;
			this.PlayerOrderController = this.PlayerTeam.PlayerOrderController;
		}

		// Token: 0x06000495 RID: 1173 RVA: 0x00025104 File Offset: 0x00023304
		public override void OnMissionTick(float dt)
		{
			base.OnMissionTick(dt);
			if (!this._initialized)
			{
				MissionPeer missionPeer = GameNetwork.IsMyPeerReady ? PeerExtensions.GetComponent<MissionPeer>(GameNetwork.MyPeer) : null;
				if (base.Mission.PlayerTeam != null || (missionPeer != null && (missionPeer.Team == base.Mission.AttackerTeam || missionPeer.Team == base.Mission.DefenderTeam)))
				{
					this.InitializeInADisgustingManner();
					this._initialized = true;
				}
			}
		}

		// Token: 0x06000496 RID: 1174 RVA: 0x00025178 File Offset: 0x00023378
		public void RestrictOrdersToDeploymentBoundaries(bool enabled)
		{
			this._restrictOrdersToDeploymentBoundaries = enabled;
		}

		// Token: 0x06000497 RID: 1175 RVA: 0x00025184 File Offset: 0x00023384
		private void UpdateFormationDrawingForFacingOrder(bool giveOrder)
		{
			this.isDrawnThisFrame = true;
			Vec3 vec = base.MissionScreen.GetOrderFlagPosition();
			Vec2 asVec = vec.AsVec2;
			Vec2 orderLookAtDirection = OrderController.GetOrderLookAtDirection(this.PlayerOrderController.SelectedFormations, asVec);
			List<WorldPosition> list;
			this.PlayerOrderController.SimulateNewFacingOrder(orderLookAtDirection, ref list);
			int num = 0;
			this.HideOrderPositionEntities();
			foreach (WorldPosition worldPosition in list)
			{
				int entityIndex = num;
				vec = worldPosition.GetGroundVec3();
				this.AddOrderPositionEntity(entityIndex, vec, giveOrder, -1f);
				num++;
			}
		}

		// Token: 0x06000498 RID: 1176 RVA: 0x00025230 File Offset: 0x00023430
		private void UpdateFormationDrawingForDestination(bool giveOrder)
		{
			this.isDrawnThisFrame = true;
			List<WorldPosition> list;
			this.PlayerOrderController.SimulateDestinationFrames(ref list, 3f);
			int num = 0;
			this.HideOrderPositionEntities();
			foreach (WorldPosition worldPosition in list)
			{
				int entityIndex = num;
				Vec3 groundVec = worldPosition.GetGroundVec3();
				this.AddOrderPositionEntity(entityIndex, groundVec, giveOrder, 0.7f);
				num++;
			}
		}

		// Token: 0x06000499 RID: 1177 RVA: 0x000252B4 File Offset: 0x000234B4
		private void UpdateFormationDrawingForFormingOrder(bool giveOrder)
		{
			this.isDrawnThisFrame = true;
			MatrixFrame orderFlagFrame = base.MissionScreen.GetOrderFlagFrame();
			Vec3 origin = orderFlagFrame.origin;
			Vec2 asVec = orderFlagFrame.rotation.f.AsVec2;
			float orderFormCustomWidth = OrderController.GetOrderFormCustomWidth(this.PlayerOrderController.SelectedFormations, origin);
			List<WorldPosition> list;
			this.PlayerOrderController.SimulateNewCustomWidthOrder(orderFormCustomWidth, ref list);
			Formation formation = Extensions.MaxBy<Formation, int>(this.PlayerOrderController.SelectedFormations, (Formation f) => f.CountOfUnits);
			int num = 0;
			this.HideOrderPositionEntities();
			foreach (WorldPosition worldPosition in list)
			{
				int entityIndex = num;
				Vec3 groundVec = worldPosition.GetGroundVec3();
				this.AddOrderPositionEntity(entityIndex, groundVec, giveOrder, -1f);
				num++;
			}
			float unitDiameter = formation.UnitDiameter;
			float interval = formation.Interval;
			int num2 = MathF.Max(0, (int)((orderFormCustomWidth - unitDiameter) / (interval + unitDiameter) + 1E-05f)) + 1;
			float num3 = (float)(num2 - 1) * (interval + unitDiameter);
			for (int i = 0; i < num2; i++)
			{
				Vec2 vec;
				vec..ctor((float)i * (interval + unitDiameter) - num3 / 2f, 0f);
				Vec2 vec2 = asVec.TransformToParentUnitF(vec);
				WorldPosition worldPosition2;
				worldPosition2..ctor(Mission.Current.Scene, UIntPtr.Zero, origin, false);
				worldPosition2.SetVec2(worldPosition2.AsVec2 + vec2);
				int entityIndex2 = num++;
				Vec3 groundVec = worldPosition2.GetGroundVec3();
				this.AddOrderPositionEntity(entityIndex2, groundVec, false, -1f);
			}
		}

		// Token: 0x0600049A RID: 1178 RVA: 0x00025464 File Offset: 0x00023664
		private void UpdateFormationDrawing(bool giveOrder)
		{
			this.isDrawnThisFrame = true;
			this.HideOrderPositionEntities();
			if (this._formationDrawingStartingPosition == null)
			{
				return;
			}
			WorldPosition worldPosition = WorldPosition.Invalid;
			bool flag = false;
			if (base.MissionScreen.MouseVisible && this._formationDrawingStartingPointOfMouse != null)
			{
				Vec2 vec = this._formationDrawingStartingPointOfMouse.Value - base.Input.GetMousePositionPixel();
				if (MathF.Abs(vec.x) < 10f && MathF.Abs(vec.y) < 10f)
				{
					flag = true;
					worldPosition = this._formationDrawingStartingPosition.Value;
				}
			}
			if (base.MissionScreen.MouseVisible && this._formationDrawingStartingTime != null && base.Mission.CurrentTime - this._formationDrawingStartingTime.Value < 0.3f)
			{
				flag = true;
				worldPosition = this._formationDrawingStartingPosition.Value;
			}
			if (!flag)
			{
				Vec3 vec2;
				Vec3 vec3;
				base.MissionScreen.ScreenPointToWorldRay(this.GetScreenPoint(), out vec2, out vec3);
				float num;
				if (!base.Mission.Scene.RayCastForClosestEntityOrTerrain(vec2, vec3, ref num, 0.3f, 67188481))
				{
					return;
				}
				Vec3 vec4 = vec3 - vec2;
				vec4.Normalize();
				worldPosition..ctor(base.Mission.Scene, UIntPtr.Zero, vec2 + vec4 * num, false);
			}
			WorldPosition worldPosition2;
			if (this._mouseOverDirection == 1)
			{
				worldPosition2 = worldPosition;
				worldPosition = this._formationDrawingStartingPosition.Value;
			}
			else
			{
				worldPosition2 = this._formationDrawingStartingPosition.Value;
			}
			if (!OrderFlag.IsPositionOnValidGround(worldPosition2))
			{
				return;
			}
			Vec2 vec5;
			if (this._restrictOrdersToDeploymentBoundaries)
			{
				IMissionDeploymentPlan deploymentPlan = base.Mission.DeploymentPlan;
				BattleSideEnum side = base.Mission.PlayerTeam.Side;
				vec5 = worldPosition2.AsVec2;
				if (!deploymentPlan.IsPositionInsideDeploymentBoundaries(side, ref vec5))
				{
					return;
				}
			}
			bool isFormationLayoutVertical = !base.DebugInput.IsControlDown();
			this.UpdateFormationDrawingForMovementOrder(giveOrder, worldPosition2, worldPosition, isFormationLayoutVertical);
			Vec2 deltaMousePosition = this._deltaMousePosition;
			float num2 = 1f;
			vec5 = base.Input.GetMousePositionRanged() - this._lastMousePosition;
			this._deltaMousePosition = deltaMousePosition * MathF.Max(num2 - vec5.Length * 10f, 0f);
			this._lastMousePosition = base.Input.GetMousePositionRanged();
		}

		// Token: 0x0600049B RID: 1179 RVA: 0x00025690 File Offset: 0x00023890
		private void UpdateFormationDrawingForMovementOrder(bool giveOrder, WorldPosition formationRealStartingPosition, WorldPosition formationRealEndingPosition, bool isFormationLayoutVertical)
		{
			this.isDrawnThisFrame = true;
			List<WorldPosition> list;
			this.PlayerOrderController.SimulateNewOrderWithPositionAndDirection(formationRealStartingPosition, formationRealEndingPosition, ref list, isFormationLayoutVertical);
			if (giveOrder)
			{
				if (!isFormationLayoutVertical)
				{
					this.PlayerOrderController.SetOrderWithTwoPositions(3, formationRealStartingPosition, formationRealEndingPosition);
				}
				else
				{
					this.PlayerOrderController.SetOrderWithTwoPositions(2, formationRealStartingPosition, formationRealEndingPosition);
				}
			}
			int num = 0;
			foreach (WorldPosition worldPosition in list)
			{
				int entityIndex = num;
				Vec3 groundVec = worldPosition.GetGroundVec3();
				this.AddOrderPositionEntity(entityIndex, groundVec, giveOrder, -1f);
				num++;
			}
		}

		// Token: 0x0600049C RID: 1180 RVA: 0x00025734 File Offset: 0x00023934
		private void HandleMouseDown()
		{
			if (!Extensions.IsEmpty<Formation>(this.PlayerOrderController.SelectedFormations) && this._clickedFormation == null)
			{
				switch (this.GetCursorState())
				{
				case OrderTroopPlacer.CursorState.Invisible:
				case OrderTroopPlacer.CursorState.Ground:
					break;
				case OrderTroopPlacer.CursorState.Normal:
				{
					this._formationDrawingMode = true;
					Vec3 vec;
					Vec3 vec2;
					base.MissionScreen.ScreenPointToWorldRay(this.GetScreenPoint(), out vec, out vec2);
					float num;
					if (base.Mission.Scene.RayCastForClosestEntityOrTerrain(vec, vec2, ref num, 0.3f, 67188481))
					{
						Vec3 vec3 = vec2 - vec;
						vec3.Normalize();
						this._formationDrawingStartingPosition = new WorldPosition?(new WorldPosition(base.Mission.Scene, UIntPtr.Zero, vec + vec3 * num, false));
						this._formationDrawingStartingPointOfMouse = new Vec2?(base.Input.GetMousePositionPixel());
						this._formationDrawingStartingTime = new float?(base.Mission.CurrentTime);
						return;
					}
					this._formationDrawingStartingPosition = null;
					this._formationDrawingStartingPointOfMouse = null;
					this._formationDrawingStartingTime = null;
					return;
				}
				case OrderTroopPlacer.CursorState.Enemy:
				case OrderTroopPlacer.CursorState.Friend:
					this._clickedFormation = this._mouseOverFormation;
					return;
				case OrderTroopPlacer.CursorState.Rotation:
					if (this._mouseOverFormation.CountOfUnits > 0)
					{
						this.HideNonSelectedOrderRotationEntities(this._mouseOverFormation);
						this.PlayerOrderController.ClearSelectedFormations();
						this.PlayerOrderController.SelectFormation(this._mouseOverFormation);
						this._formationDrawingMode = true;
						WorldPosition worldPosition = this._mouseOverFormation.CreateNewOrderWorldPosition(2);
						Vec2 direction = this._mouseOverFormation.Direction;
						direction.RotateCCW(-1.5707964f);
						this._formationDrawingStartingPosition = new WorldPosition?(worldPosition);
						this._formationDrawingStartingPosition.Value.SetVec2(this._formationDrawingStartingPosition.Value.AsVec2 + direction * ((this._mouseOverDirection == 1) ? 0.5f : -0.5f) * this._mouseOverFormation.Width);
						WorldPosition worldPosition2 = worldPosition;
						worldPosition2.SetVec2(worldPosition2.AsVec2 + direction * ((this._mouseOverDirection == 1) ? -0.5f : 0.5f) * this._mouseOverFormation.Width);
						Vec2 vec4 = base.MissionScreen.SceneView.WorldPointToScreenPoint(worldPosition2.GetGroundVec3());
						Vec2 screenPoint = this.GetScreenPoint();
						this._deltaMousePosition = vec4 - screenPoint;
						this._lastMousePosition = base.Input.GetMousePositionRanged();
					}
					break;
				default:
					return;
				}
			}
		}

		// Token: 0x0600049D RID: 1181 RVA: 0x000259B4 File Offset: 0x00023BB4
		private void HandleMouseUp()
		{
			if (this._clickedFormation != null)
			{
				if (this._clickedFormation.CountOfUnits > 0 && this._clickedFormation.Team == this.PlayerTeam)
				{
					Formation clickedFormation = this._clickedFormation;
					this._clickedFormation = null;
					this.GetCursorState();
					this._clickedFormation = clickedFormation;
					this.HideNonSelectedOrderRotationEntities(this._clickedFormation);
					this.PlayerOrderController.ClearSelectedFormations();
					this.PlayerOrderController.SelectFormation(this._clickedFormation);
				}
				this._clickedFormation = null;
			}
			else if (this.GetCursorState() == OrderTroopPlacer.CursorState.Ground)
			{
				if (this.IsDrawingFacing || this._wasDrawingFacing)
				{
					this.UpdateFormationDrawingForFacingOrder(true);
				}
				else if (this.IsDrawingForming || this._wasDrawingForming)
				{
					this.UpdateFormationDrawingForFormingOrder(true);
				}
				else
				{
					this.UpdateFormationDrawing(true);
				}
				if (this.IsDeployment)
				{
					Action onUnitDeployed = this.OnUnitDeployed;
					if (onUnitDeployed != null)
					{
						onUnitDeployed();
					}
					UISoundsHelper.PlayUISound("event:/ui/mission/deploy");
				}
			}
			this._formationDrawingMode = false;
			this._deltaMousePosition = Vec2.Zero;
		}

		// Token: 0x0600049E RID: 1182 RVA: 0x00025AAE File Offset: 0x00023CAE
		private Vec2 GetScreenPoint()
		{
			if (!base.MissionScreen.MouseVisible)
			{
				return new Vec2(0.5f, 0.5f) + this._deltaMousePosition;
			}
			return base.Input.GetMousePositionRanged() + this._deltaMousePosition;
		}

		// Token: 0x0600049F RID: 1183 RVA: 0x00025AF0 File Offset: 0x00023CF0
		private OrderTroopPlacer.CursorState GetCursorState()
		{
			OrderTroopPlacer.CursorState cursorState = OrderTroopPlacer.CursorState.Invisible;
			if (!Extensions.IsEmpty<Formation>(this.PlayerOrderController.SelectedFormations) && this._clickedFormation == null)
			{
				Vec3 vec;
				Vec3 vec2;
				base.MissionScreen.ScreenPointToWorldRay(this.GetScreenPoint(), out vec, out vec2);
				float num;
				GameEntity gameEntity;
				if (!base.Mission.Scene.RayCastForClosestEntityOrTerrain(vec, vec2, ref num, ref gameEntity, 0.3f, 67188481))
				{
					num = 1000f;
				}
				if (cursorState == OrderTroopPlacer.CursorState.Invisible && num < 1000f)
				{
					if (!this._formationDrawingMode && gameEntity == null)
					{
						for (int i = 0; i < this._orderRotationEntities.Count; i++)
						{
							GameEntity gameEntity2 = this._orderRotationEntities[i];
							if (gameEntity2.IsVisibleIncludeParents() && gameEntity == gameEntity2)
							{
								this._mouseOverFormation = this.PlayerOrderController.SelectedFormations.ElementAt(i / 2);
								this._mouseOverDirection = 1 - (i & 1);
								cursorState = OrderTroopPlacer.CursorState.Rotation;
								break;
							}
						}
					}
					if (cursorState == OrderTroopPlacer.CursorState.Invisible && base.MissionScreen.OrderFlag.FocusedOrderableObject != null)
					{
						cursorState = OrderTroopPlacer.CursorState.OrderableEntity;
					}
					if (cursorState == OrderTroopPlacer.CursorState.Invisible)
					{
						cursorState = this.IsCursorStateGroundOrNormal();
					}
				}
			}
			if (cursorState != OrderTroopPlacer.CursorState.Ground && cursorState != OrderTroopPlacer.CursorState.Rotation)
			{
				this._mouseOverDirection = 0;
			}
			return cursorState;
		}

		// Token: 0x060004A0 RID: 1184 RVA: 0x00025C17 File Offset: 0x00023E17
		private OrderTroopPlacer.CursorState IsCursorStateGroundOrNormal()
		{
			if (!this._formationDrawingMode)
			{
				return OrderTroopPlacer.CursorState.Normal;
			}
			return OrderTroopPlacer.CursorState.Ground;
		}

		// Token: 0x060004A1 RID: 1185 RVA: 0x00025C24 File Offset: 0x00023E24
		private void AddOrderPositionEntity(int entityIndex, in Vec3 groundPosition, bool fadeOut, float alpha = -1f)
		{
			while (this._orderPositionEntities.Count <= entityIndex)
			{
				GameEntity gameEntity = GameEntity.CreateEmpty(base.Mission.Scene, true);
				gameEntity.EntityFlags |= 4194304;
				MetaMesh copy = MetaMesh.GetCopy("order_flag_small", true, false);
				if (OrderTroopPlacer._meshMaterial == null)
				{
					OrderTroopPlacer._meshMaterial = copy.GetMeshAtIndex(0).GetMaterial().CreateCopy();
					OrderTroopPlacer._meshMaterial.SetAlphaBlendMode(6);
				}
				copy.SetMaterial(OrderTroopPlacer._meshMaterial);
				gameEntity.AddComponent(copy);
				gameEntity.SetVisibilityExcludeParents(false);
				this._orderPositionEntities.Add(gameEntity);
			}
			GameEntity gameEntity2 = this._orderPositionEntities[entityIndex];
			MatrixFrame matrixFrame;
			matrixFrame..ctor(Mat3.Identity, groundPosition);
			gameEntity2.SetFrame(ref matrixFrame);
			if (alpha != -1f)
			{
				gameEntity2.SetVisibilityExcludeParents(true);
				gameEntity2.SetAlpha(alpha);
				return;
			}
			if (fadeOut)
			{
				GameEntityExtensions.FadeOut(gameEntity2, 0.3f, false);
				return;
			}
			GameEntityExtensions.FadeIn(gameEntity2, true);
		}

		// Token: 0x060004A2 RID: 1186 RVA: 0x00025D24 File Offset: 0x00023F24
		private void HideNonSelectedOrderRotationEntities(Formation formation)
		{
			for (int i = 0; i < this._orderRotationEntities.Count; i++)
			{
				GameEntity gameEntity = this._orderRotationEntities[i];
				if (gameEntity == null && gameEntity.IsVisibleIncludeParents() && this.PlayerOrderController.SelectedFormations.ElementAt(i / 2) != formation)
				{
					gameEntity.SetVisibilityExcludeParents(false);
					gameEntity.BodyFlag |= 1;
				}
			}
		}

		// Token: 0x060004A3 RID: 1187 RVA: 0x00025D90 File Offset: 0x00023F90
		private void HideOrderPositionEntities()
		{
			foreach (GameEntity gameEntity in this._orderPositionEntities)
			{
				GameEntityExtensions.HideIfNotFadingOut(gameEntity);
			}
			for (int i = 0; i < this._orderRotationEntities.Count; i++)
			{
				GameEntity gameEntity2 = this._orderRotationEntities[i];
				gameEntity2.SetVisibilityExcludeParents(false);
				gameEntity2.BodyFlag |= 1;
			}
		}

		// Token: 0x060004A4 RID: 1188 RVA: 0x00025E18 File Offset: 0x00024018
		[Conditional("DEBUG")]
		private void DebugTick(float dt)
		{
			bool initialized = this._initialized;
		}

		// Token: 0x060004A5 RID: 1189 RVA: 0x00025E24 File Offset: 0x00024024
		private void Reset()
		{
			this._isMouseDown = false;
			this._formationDrawingMode = false;
			this._formationDrawingStartingPosition = null;
			this._formationDrawingStartingPointOfMouse = null;
			this._formationDrawingStartingTime = null;
			this._mouseOverFormation = null;
			this._clickedFormation = null;
		}

		// Token: 0x060004A6 RID: 1190 RVA: 0x00025E74 File Offset: 0x00024074
		public override void OnMissionScreenTick(float dt)
		{
			if (!this._initialized)
			{
				return;
			}
			base.OnMissionScreenTick(dt);
			if (this.PlayerOrderController.SelectedFormations.Count == 0)
			{
				return;
			}
			this.isDrawnThisFrame = false;
			if (this.SuspendTroopPlacer)
			{
				return;
			}
			if (base.Input.IsKeyPressed(224) || base.Input.IsKeyPressed(255))
			{
				this._isMouseDown = true;
				this.HandleMouseDown();
			}
			if ((base.Input.IsKeyReleased(224) || base.Input.IsKeyReleased(255)) && this._isMouseDown)
			{
				this._isMouseDown = false;
				this.HandleMouseUp();
			}
			else if ((base.Input.IsKeyDown(224) || base.Input.IsKeyDown(255)) && this._isMouseDown)
			{
				if (this.formationDrawTimer.Check(MBCommon.GetApplicationTime()) && !this.IsDrawingFacing && !this.IsDrawingForming && this.IsCursorStateGroundOrNormal() == OrderTroopPlacer.CursorState.Ground && this.GetCursorState() == OrderTroopPlacer.CursorState.Ground)
				{
					this.UpdateFormationDrawing(false);
				}
			}
			else if (this.IsDrawingForced)
			{
				this.Reset();
				this.HandleMouseDown();
				this.UpdateFormationDrawing(false);
			}
			else if (this.IsDrawingFacing || this._wasDrawingFacing)
			{
				if (this.IsDrawingFacing)
				{
					this.Reset();
					this.UpdateFormationDrawingForFacingOrder(false);
				}
			}
			else if (this.IsDrawingForming || this._wasDrawingForming)
			{
				if (this.IsDrawingForming)
				{
					this.Reset();
					this.UpdateFormationDrawingForFormingOrder(false);
				}
			}
			else if (this._wasDrawingForced)
			{
				this.Reset();
			}
			else
			{
				this.UpdateFormationDrawingForDestination(false);
			}
			foreach (GameEntity gameEntity in this._orderPositionEntities)
			{
				gameEntity.SetPreviousFrameInvalid();
			}
			foreach (GameEntity gameEntity2 in this._orderRotationEntities)
			{
				gameEntity2.SetPreviousFrameInvalid();
			}
			this._wasDrawingForced = this.IsDrawingForced;
			this._wasDrawingFacing = this.IsDrawingFacing;
			this._wasDrawingForming = this.IsDrawingForming;
			this.wasDrawnPreviousFrame = this.isDrawnThisFrame;
		}

		// Token: 0x17000078 RID: 120
		// (get) Token: 0x060004A7 RID: 1191 RVA: 0x000260D4 File Offset: 0x000242D4
		private bool IsDeployment
		{
			get
			{
				return base.Mission.GetMissionBehavior<SiegeDeploymentHandler>() != null || base.Mission.GetMissionBehavior<BattleDeploymentHandler>() != null;
			}
		}

		// Token: 0x040002DC RID: 732
		private bool _suspendTroopPlacer;

		// Token: 0x040002DD RID: 733
		private bool _isMouseDown;

		// Token: 0x040002DE RID: 734
		private List<GameEntity> _orderPositionEntities;

		// Token: 0x040002DF RID: 735
		private List<GameEntity> _orderRotationEntities;

		// Token: 0x040002E0 RID: 736
		private bool _formationDrawingMode;

		// Token: 0x040002E1 RID: 737
		private Formation _mouseOverFormation;

		// Token: 0x040002E2 RID: 738
		private Formation _clickedFormation;

		// Token: 0x040002E3 RID: 739
		private Vec2 _lastMousePosition;

		// Token: 0x040002E4 RID: 740
		private Vec2 _deltaMousePosition;

		// Token: 0x040002E5 RID: 741
		private int _mouseOverDirection;

		// Token: 0x040002E6 RID: 742
		private WorldPosition? _formationDrawingStartingPosition;

		// Token: 0x040002E7 RID: 743
		private Vec2? _formationDrawingStartingPointOfMouse;

		// Token: 0x040002E8 RID: 744
		private float? _formationDrawingStartingTime;

		// Token: 0x040002E9 RID: 745
		private bool _restrictOrdersToDeploymentBoundaries;

		// Token: 0x040002EA RID: 746
		private OrderController PlayerOrderController;

		// Token: 0x040002EB RID: 747
		private Team PlayerTeam;

		// Token: 0x040002EC RID: 748
		private bool _initialized;

		// Token: 0x040002ED RID: 749
		private Timer formationDrawTimer;

		// Token: 0x040002EE RID: 750
		public bool IsDrawingForced;

		// Token: 0x040002EF RID: 751
		public bool IsDrawingFacing;

		// Token: 0x040002F0 RID: 752
		public bool IsDrawingForming;

		// Token: 0x040002F1 RID: 753
		private bool _wasDrawingForced;

		// Token: 0x040002F2 RID: 754
		private bool _wasDrawingFacing;

		// Token: 0x040002F3 RID: 755
		private bool _wasDrawingForming;

		// Token: 0x040002F4 RID: 756
		private GameEntity widthEntityLeft;

		// Token: 0x040002F5 RID: 757
		private GameEntity widthEntityRight;

		// Token: 0x040002F6 RID: 758
		private bool isDrawnThisFrame;

		// Token: 0x040002F7 RID: 759
		private bool wasDrawnPreviousFrame;

		// Token: 0x040002F8 RID: 760
		public Action OnUnitDeployed;

		// Token: 0x040002F9 RID: 761
		private static Material _meshMaterial;

		// Token: 0x020000BC RID: 188
		public enum CursorState
		{
			// Token: 0x040003B8 RID: 952
			Invisible,
			// Token: 0x040003B9 RID: 953
			Normal,
			// Token: 0x040003BA RID: 954
			Ground,
			// Token: 0x040003BB RID: 955
			Enemy,
			// Token: 0x040003BC RID: 956
			Friend,
			// Token: 0x040003BD RID: 957
			Rotation,
			// Token: 0x040003BE RID: 958
			Count,
			// Token: 0x040003BF RID: 959
			OrderableEntity
		}
	}
}
