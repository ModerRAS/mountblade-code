using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapNotificationTypes;

namespace StoryMode.ViewModelCollection.Map
{
	// Token: 0x02000006 RID: 6
	public class ConspiracyQuestMapNotificationItemVM : MapNotificationItemBaseVM
	{
		// Token: 0x17000024 RID: 36
		// (get) Token: 0x06000060 RID: 96 RVA: 0x00002BEE File Offset: 0x00000DEE
		public QuestBase Quest { get; }

		// Token: 0x06000061 RID: 97 RVA: 0x00002BF8 File Offset: 0x00000DF8
		public ConspiracyQuestMapNotificationItemVM(ConspiracyQuestMapNotification data) : base(data)
		{
			ConspiracyQuestMapNotificationItemVM <>4__this = this;
			base.NotificationIdentifier = "conspiracyquest";
			this.Quest = data.ConspiracyQuest;
			this._onInspect = delegate()
			{
				INavigationHandler navigationHandler = <>4__this.NavigationHandler;
				if (navigationHandler == null)
				{
					return;
				}
				navigationHandler.OpenQuests(data.ConspiracyQuest);
			};
		}
	}
}
