using System;
using TaleWorlds.CampaignSystem.MapNotificationTypes;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapNotificationTypes
{
	// Token: 0x0200004E RID: 78
	public class VassalOfferMapNotificationItemVM : MapNotificationItemBaseVM
	{
		// Token: 0x060005C8 RID: 1480 RVA: 0x0001CA70 File Offset: 0x0001AC70
		public VassalOfferMapNotificationItemVM(VassalOfferMapNotification data) : base(data)
		{
			this._offeredKingdom = data.OfferedKingdom;
			base.NotificationIdentifier = "vote";
			this._onInspect = delegate()
			{
				CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferedToPlayer(this._offeredKingdom);
				base.ExecuteRemove();
			};
			CampaignEvents.OnVassalOrMercenaryServiceOfferCanceledEvent.AddNonSerializedListener(this, new Action<Kingdom>(this.OnVassalOrMercenaryServiceOfferCanceled));
		}

		// Token: 0x060005C9 RID: 1481 RVA: 0x0001CAC4 File Offset: 0x0001ACC4
		private void OnVassalOrMercenaryServiceOfferCanceled(Kingdom offeredKingdom)
		{
			if (Campaign.Current.CampaignInformationManager.InformationDataExists<VassalOfferMapNotification>((VassalOfferMapNotification x) => x.OfferedKingdom == offeredKingdom))
			{
				base.ExecuteRemove();
			}
		}

		// Token: 0x060005CA RID: 1482 RVA: 0x0001CB01 File Offset: 0x0001AD01
		public override void OnFinalize()
		{
			base.OnFinalize();
			CampaignEventDispatcher.Instance.RemoveListeners(this);
		}

		// Token: 0x04000278 RID: 632
		private readonly Kingdom _offeredKingdom;
	}
}
