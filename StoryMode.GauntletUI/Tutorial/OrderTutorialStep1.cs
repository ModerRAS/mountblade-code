using System;
using System.Collections.Generic;
using System.Linq;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200002A RID: 42
	public class OrderTutorialStep1 : TutorialItemBase
	{
		// Token: 0x060000CF RID: 207 RVA: 0x000039DF File Offset: 0x00001BDF
		public OrderTutorialStep1()
		{
			base.Type = "OrderTutorial1TutorialStep1";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "";
			base.MouseRequired = false;
		}

		// Token: 0x060000D0 RID: 208 RVA: 0x00003A0C File Offset: 0x00001C0C
		public override bool IsConditionsMetForCompletion()
		{
			if (!this._registeredToOrderEvent)
			{
				Mission mission = Mission.Current;
				bool flag;
				if (mission == null)
				{
					flag = (null != null);
				}
				else
				{
					Team playerTeam = mission.PlayerTeam;
					flag = (((playerTeam != null) ? playerTeam.PlayerOrderController : null) != null);
				}
				if (flag)
				{
					Mission mission2 = Mission.Current;
					if (mission2 != null && mission2.Mode == MissionMode.Battle)
					{
						Mission.Current.PlayerTeam.PlayerOrderController.OnOrderIssued += new OnOrderIssuedDelegate(this.OnPlayerOrdered);
						this._registeredToOrderEvent = true;
					}
				}
			}
			return this._hasPlayerOrderedFollowMe;
		}

		// Token: 0x060000D1 RID: 209 RVA: 0x00003A84 File Offset: 0x00001C84
		public override void OnDeactivate()
		{
			base.OnDeactivate();
			if (this._registeredToOrderEvent)
			{
				Mission mission = Mission.Current;
				bool flag;
				if (mission == null)
				{
					flag = (null != null);
				}
				else
				{
					Team playerTeam = mission.PlayerTeam;
					flag = (((playerTeam != null) ? playerTeam.PlayerOrderController : null) != null);
				}
				if (flag)
				{
					Mission.Current.PlayerTeam.PlayerOrderController.OnOrderIssued -= new OnOrderIssuedDelegate(this.OnPlayerOrdered);
				}
			}
			this._registeredToOrderEvent = false;
		}

		// Token: 0x060000D2 RID: 210 RVA: 0x00003AE5 File Offset: 0x00001CE5
		private void OnPlayerOrdered(OrderType orderType, IEnumerable<Formation> appliedFormations, OrderController orderController, params object[] delegateParams)
		{
			this._hasPlayerOrderedFollowMe = (this._hasPlayerOrderedFollowMe || (orderType == 7 && appliedFormations.Any<Formation>()));
		}

		// Token: 0x060000D3 RID: 211 RVA: 0x00003B05 File Offset: 0x00001D05
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x060000D4 RID: 212 RVA: 0x00003B08 File Offset: 0x00001D08
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.Mission && TutorialHelper.IsPlayerInABattleMission && Mission.Current.Mode != MissionMode.Deployment && TutorialHelper.IsOrderingAvailable;
		}

		// Token: 0x04000039 RID: 57
		private bool _hasPlayerOrderedFollowMe;

		// Token: 0x0400003A RID: 58
		private bool _registeredToOrderEvent;
	}
}
