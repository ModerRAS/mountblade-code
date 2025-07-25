using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.MapNotificationTypes;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapNotificationTypes
{
	// Token: 0x02000046 RID: 70
	public class PeaceNotificationItemVM : MapNotificationItemBaseVM
	{
		// Token: 0x060005AB RID: 1451 RVA: 0x0001C420 File Offset: 0x0001A620
		public PeaceNotificationItemVM(PeaceMapNotification data) : base(data)
		{
			base.NotificationIdentifier = "peace";
			CampaignEvents.WarDeclared.AddNonSerializedListener(this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
			this._otherFaction = ((data.FirstFaction == Hero.MainHero.MapFaction) ? data.SecondFaction : data.FirstFaction);
			this._onInspect = delegate()
			{
				INavigationHandler navigationHandler = base.NavigationHandler;
				if (navigationHandler == null)
				{
					return;
				}
				navigationHandler.OpenKingdom(this._otherFaction);
			};
		}

		// Token: 0x060005AC RID: 1452 RVA: 0x0001C48E File Offset: 0x0001A68E
		public override void OnFinalize()
		{
			base.OnFinalize();
			CampaignEvents.MakePeace.ClearListeners(this);
		}

		// Token: 0x060005AD RID: 1453 RVA: 0x0001C4A1 File Offset: 0x0001A6A1
		private void OnWarDeclared(IFaction faction1, IFaction faction2, DeclareWarAction.DeclareWarDetail detail)
		{
			if ((faction1 == Hero.MainHero.Clan && this._otherFaction == faction2) || (faction2 == Hero.MainHero.Clan && this._otherFaction == faction1))
			{
				base.ExecuteRemove();
			}
		}

		// Token: 0x04000268 RID: 616
		private IFaction _otherFaction;
	}
}
