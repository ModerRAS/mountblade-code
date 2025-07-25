using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.Quests;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Conversation
{
	// Token: 0x020000F8 RID: 248
	public class ConversationAggressivePartyItemVM : ViewModel
	{
		// Token: 0x06001760 RID: 5984 RVA: 0x00056C84 File Offset: 0x00054E84
		public ConversationAggressivePartyItemVM(MobileParty party, CharacterObject leader = null)
		{
			this.Party = party;
			if (leader != null)
			{
				this.LeaderVisual = new ImageIdentifierVM(CampaignUIHelper.GetCharacterCode(leader, false));
			}
			else if (party != null)
			{
				CharacterObject visualPartyLeader = CampaignUIHelper.GetVisualPartyLeader(party.Party);
				if (visualPartyLeader != null)
				{
					this.LeaderVisual = new ImageIdentifierVM(CampaignUIHelper.GetCharacterCode(visualPartyLeader, false));
				}
			}
			this.HealthyAmount = ((party != null) ? party.Party.NumberOfHealthyMembers : 0);
			this.RefreshQuests();
		}

		// Token: 0x06001761 RID: 5985 RVA: 0x00056CF8 File Offset: 0x00054EF8
		private void RefreshQuests()
		{
			this.Quests = new MBBindingList<QuestMarkerVM>();
			if (this.Party != null)
			{
				List<QuestBase> questsRelatedToParty = CampaignUIHelper.GetQuestsRelatedToParty(this.Party);
				CampaignUIHelper.IssueQuestFlags issueQuestFlags = CampaignUIHelper.IssueQuestFlags.None;
				for (int i = 0; i < questsRelatedToParty.Count; i++)
				{
					issueQuestFlags |= CampaignUIHelper.GetQuestType(questsRelatedToParty[i], this.Party.LeaderHero);
				}
				Hero leaderHero = this.Party.LeaderHero;
				if (((leaderHero != null) ? leaderHero.Issue : null) != null)
				{
					issueQuestFlags |= CampaignUIHelper.GetIssueType(this.Party.LeaderHero.Issue);
				}
				if ((issueQuestFlags & CampaignUIHelper.IssueQuestFlags.TrackedIssue) != CampaignUIHelper.IssueQuestFlags.None)
				{
					this.Quests.Add(new QuestMarkerVM(CampaignUIHelper.IssueQuestFlags.TrackedIssue, null, null));
				}
				else if ((issueQuestFlags & CampaignUIHelper.IssueQuestFlags.ActiveIssue) != CampaignUIHelper.IssueQuestFlags.None)
				{
					this.Quests.Add(new QuestMarkerVM(CampaignUIHelper.IssueQuestFlags.ActiveIssue, null, null));
				}
				else if ((issueQuestFlags & CampaignUIHelper.IssueQuestFlags.AvailableIssue) != CampaignUIHelper.IssueQuestFlags.None)
				{
					this.Quests.Add(new QuestMarkerVM(CampaignUIHelper.IssueQuestFlags.AvailableIssue, null, null));
				}
				if ((issueQuestFlags & CampaignUIHelper.IssueQuestFlags.TrackedStoryQuest) != CampaignUIHelper.IssueQuestFlags.None)
				{
					this.Quests.Add(new QuestMarkerVM(CampaignUIHelper.IssueQuestFlags.TrackedStoryQuest, null, null));
					return;
				}
				if ((issueQuestFlags & CampaignUIHelper.IssueQuestFlags.ActiveStoryQuest) != CampaignUIHelper.IssueQuestFlags.None)
				{
					this.Quests.Add(new QuestMarkerVM(CampaignUIHelper.IssueQuestFlags.ActiveStoryQuest, null, null));
				}
			}
		}

		// Token: 0x06001762 RID: 5986 RVA: 0x00056E04 File Offset: 0x00055004
		public void ExecuteShowPartyTooltip()
		{
			if (this.Party != null)
			{
				InformationManager.ShowTooltip(typeof(MobileParty), new object[]
				{
					this.Party,
					false,
					true
				});
			}
		}

		// Token: 0x06001763 RID: 5987 RVA: 0x00056E3E File Offset: 0x0005503E
		public void ExecuteHideTooltip()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x170007E8 RID: 2024
		// (get) Token: 0x06001764 RID: 5988 RVA: 0x00056E45 File Offset: 0x00055045
		// (set) Token: 0x06001765 RID: 5989 RVA: 0x00056E4D File Offset: 0x0005504D
		[DataSourceProperty]
		public ImageIdentifierVM LeaderVisual
		{
			get
			{
				return this._leaderVisual;
			}
			set
			{
				if (value != this._leaderVisual)
				{
					this._leaderVisual = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "LeaderVisual");
				}
			}
		}

		// Token: 0x170007E9 RID: 2025
		// (get) Token: 0x06001766 RID: 5990 RVA: 0x00056E6B File Offset: 0x0005506B
		// (set) Token: 0x06001767 RID: 5991 RVA: 0x00056E73 File Offset: 0x00055073
		[DataSourceProperty]
		public int HealthyAmount
		{
			get
			{
				return this._healthyAmount;
			}
			set
			{
				if (value != this._healthyAmount)
				{
					this._healthyAmount = value;
					base.OnPropertyChangedWithValue(value, "HealthyAmount");
				}
			}
		}

		// Token: 0x170007EA RID: 2026
		// (get) Token: 0x06001768 RID: 5992 RVA: 0x00056E91 File Offset: 0x00055091
		// (set) Token: 0x06001769 RID: 5993 RVA: 0x00056E99 File Offset: 0x00055099
		[DataSourceProperty]
		public MBBindingList<QuestMarkerVM> Quests
		{
			get
			{
				return this._quests;
			}
			set
			{
				if (value != this._quests)
				{
					this._quests = value;
					base.OnPropertyChangedWithValue<MBBindingList<QuestMarkerVM>>(value, "Quests");
				}
			}
		}

		// Token: 0x04000AE8 RID: 2792
		public readonly MobileParty Party;

		// Token: 0x04000AE9 RID: 2793
		private MBBindingList<QuestMarkerVM> _quests;

		// Token: 0x04000AEA RID: 2794
		private ImageIdentifierVM _leaderVisual;

		// Token: 0x04000AEB RID: 2795
		private int _healthyAmount;
	}
}
