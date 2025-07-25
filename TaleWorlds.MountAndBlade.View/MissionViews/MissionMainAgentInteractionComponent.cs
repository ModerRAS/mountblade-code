using System;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View.Screens;

namespace TaleWorlds.MountAndBlade.View.MissionViews
{
	// Token: 0x02000055 RID: 85
	public class MissionMainAgentInteractionComponent
	{
		// Token: 0x14000006 RID: 6
		// (add) Token: 0x060003A1 RID: 929 RVA: 0x00020098 File Offset: 0x0001E298
		// (remove) Token: 0x060003A2 RID: 930 RVA: 0x000200D0 File Offset: 0x0001E2D0
		public event MissionMainAgentInteractionComponent.MissionFocusGainedEventDelegate OnFocusGained;

		// Token: 0x14000007 RID: 7
		// (add) Token: 0x060003A3 RID: 931 RVA: 0x00020108 File Offset: 0x0001E308
		// (remove) Token: 0x060003A4 RID: 932 RVA: 0x00020140 File Offset: 0x0001E340
		public event MissionMainAgentInteractionComponent.MissionFocusLostEventDelegate OnFocusLost;

		// Token: 0x14000008 RID: 8
		// (add) Token: 0x060003A5 RID: 933 RVA: 0x00020178 File Offset: 0x0001E378
		// (remove) Token: 0x060003A6 RID: 934 RVA: 0x000201B0 File Offset: 0x0001E3B0
		public event MissionMainAgentInteractionComponent.MissionFocusHealthChangeDelegate OnFocusHealthChanged;

		// Token: 0x1700005A RID: 90
		// (get) Token: 0x060003A7 RID: 935 RVA: 0x000201E5 File Offset: 0x0001E3E5
		// (set) Token: 0x060003A8 RID: 936 RVA: 0x000201ED File Offset: 0x0001E3ED
		public IFocusable CurrentFocusedObject { get; private set; }

		// Token: 0x1700005B RID: 91
		// (get) Token: 0x060003A9 RID: 937 RVA: 0x000201F6 File Offset: 0x0001E3F6
		// (set) Token: 0x060003AA RID: 938 RVA: 0x000201FE File Offset: 0x0001E3FE
		public IFocusable CurrentFocusedMachine { get; private set; }

		// Token: 0x060003AB RID: 939 RVA: 0x00020208 File Offset: 0x0001E408
		public void SetCurrentFocusedObject(IFocusable focusedObject, IFocusable focusedMachine, bool isInteractable)
		{
			if (this.CurrentFocusedObject != null && (this.CurrentFocusedObject != focusedObject || (this._currentInteractableObject != null && !isInteractable) || (this._currentInteractableObject == null && isInteractable)))
			{
				this.FocusLost(this.CurrentFocusedObject, this.CurrentFocusedMachine);
				this._currentInteractableObject = null;
				this.CurrentFocusedObject = null;
				this.CurrentFocusedMachine = null;
			}
			if (this.CurrentFocusedObject == null && focusedObject != null)
			{
				if (focusedObject != this.CurrentFocusedObject)
				{
					this.FocusGained(focusedObject, focusedMachine, isInteractable);
				}
				if (isInteractable)
				{
					this._currentInteractableObject = focusedObject;
				}
				this.CurrentFocusedObject = focusedObject;
				this.CurrentFocusedMachine = focusedMachine;
			}
		}

		// Token: 0x060003AC RID: 940 RVA: 0x0002029A File Offset: 0x0001E49A
		public void ClearFocus()
		{
			if (this.CurrentFocusedObject != null)
			{
				this.FocusLost(this.CurrentFocusedObject, this.CurrentFocusedMachine);
			}
			this._currentInteractableObject = null;
			this.CurrentFocusedObject = null;
			this.CurrentFocusedMachine = null;
		}

		// Token: 0x060003AD RID: 941 RVA: 0x000202CB File Offset: 0x0001E4CB
		public void OnClearScene()
		{
			this.ClearFocus();
		}

		// Token: 0x1700005C RID: 92
		// (get) Token: 0x060003AE RID: 942 RVA: 0x000202D3 File Offset: 0x0001E4D3
		private Mission CurrentMission
		{
			get
			{
				return this._mainAgentController.Mission;
			}
		}

		// Token: 0x1700005D RID: 93
		// (get) Token: 0x060003AF RID: 943 RVA: 0x000202E0 File Offset: 0x0001E4E0
		private MissionScreen CurrentMissionScreen
		{
			get
			{
				return this._mainAgentController.MissionScreen;
			}
		}

		// Token: 0x1700005E RID: 94
		// (get) Token: 0x060003B0 RID: 944 RVA: 0x000202ED File Offset: 0x0001E4ED
		private Scene CurrentMissionScene
		{
			get
			{
				return this._mainAgentController.Mission.Scene;
			}
		}

		// Token: 0x060003B1 RID: 945 RVA: 0x000202FF File Offset: 0x0001E4FF
		public MissionMainAgentInteractionComponent(MissionMainAgentController mainAgentController)
		{
			this._mainAgentController = mainAgentController;
		}

		// Token: 0x060003B2 RID: 946 RVA: 0x00020310 File Offset: 0x0001E510
		private static float GetCollisionDistanceSquaredOfIntersectionFromMainAgentEye(Vec3 rayStartPoint, Vec3 rayDirection, float rayLength)
		{
			float result = rayLength * rayLength;
			Vec3 vec = rayStartPoint + rayDirection * rayLength;
			Vec3 position = Agent.Main.Position;
			float eyeGlobalHeight = Agent.Main.GetEyeGlobalHeight();
			Vec3 vec2;
			vec2..ctor(position.x, position.y, position.z + eyeGlobalHeight, -1f);
			float num = vec.z - vec2.z;
			if (num < 0f)
			{
				num = MBMath.ClampFloat(-num, 0f, (Agent.Main.HasMount ? (eyeGlobalHeight - Agent.Main.MountAgent.GetEyeGlobalHeight()) : eyeGlobalHeight) * 0.75f);
				vec2.z -= num;
				result = vec2.DistanceSquared(vec);
			}
			return result;
		}

		// Token: 0x060003B3 RID: 947 RVA: 0x000203CC File Offset: 0x0001E5CC
		private void FocusGained(IFocusable focusedObject, IFocusable focusedMachine, bool isInteractable)
		{
			focusedObject.OnFocusGain(Agent.Main);
			if (focusedMachine != null)
			{
				focusedMachine.OnFocusGain(Agent.Main);
			}
			foreach (MissionBehavior missionBehavior in this.CurrentMission.MissionBehaviors)
			{
				missionBehavior.OnFocusGained(Agent.Main, focusedObject, isInteractable);
			}
			MissionMainAgentInteractionComponent.MissionFocusGainedEventDelegate onFocusGained = this.OnFocusGained;
			if (onFocusGained == null)
			{
				return;
			}
			onFocusGained(Agent.Main, this.CurrentFocusedObject, isInteractable);
		}

		// Token: 0x060003B4 RID: 948 RVA: 0x00020460 File Offset: 0x0001E660
		private void FocusLost(IFocusable focusedObject, IFocusable focusedMachine)
		{
			focusedObject.OnFocusLose(Agent.Main);
			if (focusedMachine != null)
			{
				focusedMachine.OnFocusLose(Agent.Main);
			}
			foreach (MissionBehavior missionBehavior in this.CurrentMission.MissionBehaviors)
			{
				missionBehavior.OnFocusLost(Agent.Main, focusedObject);
			}
			MissionMainAgentInteractionComponent.MissionFocusLostEventDelegate onFocusLost = this.OnFocusLost;
			if (onFocusLost == null)
			{
				return;
			}
			onFocusLost(Agent.Main, this.CurrentFocusedObject);
		}

		// Token: 0x060003B5 RID: 949 RVA: 0x000204F0 File Offset: 0x0001E6F0
		public void FocusTick()
		{
			IFocusable focusable = null;
			UsableMachine usableMachine = null;
			bool flag = true;
			bool flag2 = true;
			if (Mission.Current.Mode == 1 || Mission.Current.Mode == 9)
			{
				if (this.CurrentFocusedObject != null && Mission.Current.Mode != 1)
				{
					this.ClearFocus();
				}
				return;
			}
			Agent main = Agent.Main;
			if (!this.CurrentMissionScreen.SceneLayer.Input.IsGameKeyDown(25) && main != null && main.IsOnLand())
			{
				float num = 10f;
				Vec3 direction = this.CurrentMissionScreen.CombatCamera.Direction;
				Vec3 vec = direction;
				Vec3 position = this.CurrentMissionScreen.CombatCamera.Position;
				Vec3 position2 = main.Position;
				float num2 = new Vec3(position.x, position.y, 0f, -1f).Distance(new Vec3(position2.x, position2.y, 0f, -1f));
				Vec3 vec2 = position * (1f - num2) + (position + direction) * num2;
				float num3;
				if (this.CurrentMissionScene.RayCastForClosestEntityOrTerrain(vec2, vec2 + vec * num, ref num3, 0.01f, 16727871))
				{
					num = num3;
				}
				float num4 = float.MaxValue;
				Agent agent = this.CurrentMission.RayCastForClosestAgent(vec2, vec2 + vec * (num + 0.01f), ref num3, main.Index, 0.3f);
				if (agent != null && (!agent.IsMount || (agent.RiderAgent == null && main.MountAgent == null && main.CanReachAgent(agent))))
				{
					num4 = num3;
					focusable = agent;
					if (!main.CanInteractWithAgent(agent, this.CurrentMissionScreen.CameraElevation))
					{
						flag2 = false;
					}
				}
				float num5 = 3f;
				num += 0.1f;
				GameEntity gameEntity;
				if (!this.CurrentMissionScene.RayCastForClosestEntityOrTerrain(vec2, vec2 + vec * num, ref num3, ref gameEntity, 0.2f, 79617) || !(gameEntity != null) || num3 >= num4)
				{
					if (!this.CurrentMissionScene.RayCastForClosestEntityOrTerrain(vec2, vec2 + vec * num, ref num3, ref gameEntity, 0.2f * num5, 79617) || !(gameEntity != null) || num3 >= num4)
					{
						goto IL_381;
					}
				}
				for (;;)
				{
					if (gameEntity.GetScriptComponents().Any((ScriptComponentBehavior sc) => sc is IFocusable) || !(gameEntity.Parent != null))
					{
						break;
					}
					gameEntity = gameEntity.Parent;
				}
				usableMachine = gameEntity.GetFirstScriptOfType<UsableMachine>();
				if (usableMachine != null && !usableMachine.IsDisabled)
				{
					GameEntity validStandingPointForAgent = usableMachine.GetValidStandingPointForAgent(main);
					if (validStandingPointForAgent != null)
					{
						gameEntity = validStandingPointForAgent;
					}
				}
				flag = false;
				UsableMissionObject firstScriptOfType = gameEntity.GetFirstScriptOfType<UsableMissionObject>();
				if (firstScriptOfType is SpawnedItemEntity)
				{
					if (this.CurrentMission.IsMainAgentItemInteractionEnabled && main.CanReachObject(firstScriptOfType, MissionMainAgentInteractionComponent.GetCollisionDistanceSquaredOfIntersectionFromMainAgentEye(vec2, vec, num3)))
					{
						focusable = firstScriptOfType;
						if (main.CanUseObject(firstScriptOfType))
						{
							flag = true;
						}
					}
				}
				else if (firstScriptOfType != null)
				{
					focusable = firstScriptOfType;
					if (this.CurrentMission.IsMainAgentObjectInteractionEnabled && !main.IsUsingGameObject && main.IsOnLand() && main.ObjectHasVacantPosition(firstScriptOfType))
					{
						flag = true;
					}
				}
				else if (usableMachine != null)
				{
					focusable = usableMachine;
				}
				else
				{
					IFocusable focusable2 = gameEntity.GetScriptComponents().FirstOrDefault((ScriptComponentBehavior sc) => sc is IFocusable) as IFocusable;
					if (focusable2 != null)
					{
						focusable = focusable2;
					}
				}
				IL_381:
				if ((focusable == null || !flag) && main.MountAgent != null && main.CanInteractWithAgent(main.MountAgent, this.CurrentMissionScreen.CameraElevation))
				{
					focusable = main.MountAgent;
					flag = true;
				}
			}
			if (focusable == null)
			{
				this.ClearFocus();
				return;
			}
			bool isInteractable = (focusable is Agent) ? flag2 : flag;
			this.SetCurrentFocusedObject(focusable, usableMachine, isInteractable);
		}

		// Token: 0x060003B6 RID: 950 RVA: 0x000208F0 File Offset: 0x0001EAF0
		public void FocusStateCheckTick()
		{
			if (this.CurrentMissionScreen.SceneLayer.Input.IsGameKeyPressed(13) && (this.CurrentMission.IsMainAgentObjectInteractionEnabled || this.IsFocusMountable()) && !this.CurrentMission.IsOrderMenuOpen)
			{
				Agent main = Agent.Main;
				UsableMissionObject usableMissionObject;
				if ((usableMissionObject = (this._currentInteractableObject as UsableMissionObject)) != null)
				{
					if (!main.IsUsingGameObject && main.IsOnLand() && !(usableMissionObject is SpawnedItemEntity) && main.ObjectHasVacantPosition(usableMissionObject))
					{
						main.HandleStartUsingAction(usableMissionObject, -1);
						return;
					}
				}
				else
				{
					Agent agent = this._currentInteractableObject as Agent;
					if (main.IsOnLand() && agent != null)
					{
						agent.OnUse(main);
						return;
					}
					StandingPoint standingPoint;
					if (main.IsUsingGameObject && !(main.CurrentlyUsedGameObject is SpawnedItemEntity) && (agent == null || (standingPoint = (main.CurrentlyUsedGameObject as StandingPoint)) == null || !standingPoint.PlayerStopsUsingWhenInteractsWithOther))
					{
						main.HandleStopUsingAction();
						this.ClearFocus();
					}
				}
			}
		}

		// Token: 0x060003B7 RID: 951 RVA: 0x000209DC File Offset: 0x0001EBDC
		private bool IsFocusMountable()
		{
			Agent agent = this._currentInteractableObject as Agent;
			return agent != null && agent.IsMount;
		}

		// Token: 0x060003B8 RID: 952 RVA: 0x00020A00 File Offset: 0x0001EC00
		public void FocusedItemHealthTick()
		{
			UsableMissionObject usableMissionObject;
			UsableMachine usableMachine;
			DestructableComponent destructableComponent;
			if ((usableMissionObject = (this.CurrentFocusedObject as UsableMissionObject)) != null)
			{
				GameEntity gameEntity = usableMissionObject.GameEntity;
				while (gameEntity != null && !gameEntity.HasScriptOfType<UsableMachine>())
				{
					gameEntity = gameEntity.Parent;
				}
				if (gameEntity != null)
				{
					UsableMachine firstScriptOfType = gameEntity.GetFirstScriptOfType<UsableMachine>();
					if (((firstScriptOfType != null) ? firstScriptOfType.DestructionComponent : null) != null)
					{
						MissionMainAgentInteractionComponent.MissionFocusHealthChangeDelegate onFocusHealthChanged = this.OnFocusHealthChanged;
						if (onFocusHealthChanged == null)
						{
							return;
						}
						onFocusHealthChanged(this.CurrentFocusedObject, firstScriptOfType.DestructionComponent.HitPoint / firstScriptOfType.DestructionComponent.MaxHitPoint, true);
						return;
					}
				}
			}
			else if ((usableMachine = (this.CurrentFocusedObject as UsableMachine)) != null)
			{
				if (usableMachine.DestructionComponent != null)
				{
					MissionMainAgentInteractionComponent.MissionFocusHealthChangeDelegate onFocusHealthChanged2 = this.OnFocusHealthChanged;
					if (onFocusHealthChanged2 == null)
					{
						return;
					}
					onFocusHealthChanged2(this.CurrentFocusedObject, usableMachine.DestructionComponent.HitPoint / usableMachine.DestructionComponent.MaxHitPoint, true);
					return;
				}
			}
			else if ((destructableComponent = (this.CurrentFocusedObject as DestructableComponent)) != null)
			{
				MissionMainAgentInteractionComponent.MissionFocusHealthChangeDelegate onFocusHealthChanged3 = this.OnFocusHealthChanged;
				if (onFocusHealthChanged3 == null)
				{
					return;
				}
				onFocusHealthChanged3(this.CurrentFocusedObject, destructableComponent.HitPoint / destructableComponent.MaxHitPoint, true);
			}
		}

		// Token: 0x04000283 RID: 643
		private IFocusable _currentInteractableObject;

		// Token: 0x04000286 RID: 646
		private readonly MissionMainAgentController _mainAgentController;

		// Token: 0x020000AF RID: 175
		// (Invoke) Token: 0x06000505 RID: 1285
		public delegate void MissionFocusGainedEventDelegate(Agent agent, IFocusable focusableObject, bool isInteractable);

		// Token: 0x020000B0 RID: 176
		// (Invoke) Token: 0x06000509 RID: 1289
		public delegate void MissionFocusLostEventDelegate(Agent agent, IFocusable focusableObject);

		// Token: 0x020000B1 RID: 177
		// (Invoke) Token: 0x0600050D RID: 1293
		public delegate void MissionFocusHealthChangeDelegate(IFocusable focusable, float healthPercentage, bool hideHealthbarWhenFull);
	}
}
