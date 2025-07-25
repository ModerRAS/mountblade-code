using System;
using System.Collections.Generic;
using System.Linq;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200002C RID: 44
	public class OrderHideoutTutorial : TutorialItemBase
	{
		// Token: 0x060000DB RID: 219 RVA: 0x00003C7D File Offset: 0x00001E7D
		public OrderHideoutTutorial()
		{
			base.Type = "OrderTutorial2Tutorial";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "";
			base.MouseRequired = false;
		}

		// Token: 0x060000DC RID: 220 RVA: 0x00003CAC File Offset: 0x00001EAC
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
			return this._hasPlayerOrderedFollowme;
		}

		// Token: 0x060000DD RID: 221 RVA: 0x00003D24 File Offset: 0x00001F24
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

		// Token: 0x060000DE RID: 222 RVA: 0x00003D85 File Offset: 0x00001F85
		private void OnPlayerOrdered(OrderType orderType, IEnumerable<Formation> appliedFormations, OrderController orderController, params object[] delegateParams)
		{
			this._hasPlayerOrderedFollowme = (this._hasPlayerOrderedFollowme || (orderType == 7 && appliedFormations.Any<Formation>()));
		}

		// Token: 0x060000DF RID: 223 RVA: 0x00003DA5 File Offset: 0x00001FA5
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x060000E0 RID: 224 RVA: 0x00003DA8 File Offset: 0x00001FA8
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.Mission && TutorialHelper.IsPlayerInAHideoutBattleMission && TutorialHelper.IsOrderingAvailable;
		}

		// Token: 0x0400003D RID: 61
		private bool _hasPlayerOrderedFollowme;

		// Token: 0x0400003E RID: 62
		private bool _registeredToOrderEvent;
	}
}
