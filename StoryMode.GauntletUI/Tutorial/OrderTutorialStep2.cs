using System;
using System.Collections.Generic;
using System.Linq;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200002B RID: 43
	public class OrderTutorialStep2 : TutorialItemBase
	{
		// Token: 0x060000D5 RID: 213 RVA: 0x00003B2D File Offset: 0x00001D2D
		public OrderTutorialStep2()
		{
			base.Type = "OrderTutorial1TutorialStep2";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "";
			base.MouseRequired = false;
		}

		// Token: 0x060000D6 RID: 214 RVA: 0x00003B5C File Offset: 0x00001D5C
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
			return this._hasPlayerOrderedCharge;
		}

		// Token: 0x060000D7 RID: 215 RVA: 0x00003BD4 File Offset: 0x00001DD4
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

		// Token: 0x060000D8 RID: 216 RVA: 0x00003C35 File Offset: 0x00001E35
		private void OnPlayerOrdered(OrderType orderType, IEnumerable<Formation> appliedFormations, OrderController orderController, params object[] delegateParams)
		{
			this._hasPlayerOrderedCharge = (this._hasPlayerOrderedCharge || (orderType == 4 && appliedFormations.Any<Formation>()));
		}

		// Token: 0x060000D9 RID: 217 RVA: 0x00003C55 File Offset: 0x00001E55
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x060000DA RID: 218 RVA: 0x00003C58 File Offset: 0x00001E58
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.Mission && TutorialHelper.IsPlayerInABattleMission && Mission.Current.Mode != MissionMode.Deployment && TutorialHelper.IsOrderingAvailable;
		}

		// Token: 0x0400003B RID: 59
		private bool _hasPlayerOrderedCharge;

		// Token: 0x0400003C RID: 60
		private bool _registeredToOrderEvent;
	}
}
