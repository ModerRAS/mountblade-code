using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200003B RID: 59
	public class AssignRolesTutorial : TutorialItemBase
	{
		// Token: 0x0600012B RID: 299 RVA: 0x0000476B File Offset: 0x0000296B
		public AssignRolesTutorial()
		{
			base.Type = "AssignRolesTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Top;
			base.HighlightedVisualElementID = "RoleAssignmentWidget";
			base.MouseRequired = false;
		}

		// Token: 0x0600012C RID: 300 RVA: 0x00004797 File Offset: 0x00002997
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.ClanScreen;
		}

		// Token: 0x0600012D RID: 301 RVA: 0x0000479A File Offset: 0x0000299A
		public override void OnClanRoleAssignedThroughClanScreen(ClanRoleAssignedThroughClanScreenEvent obj)
		{
			this._playerAssignedRoleToClanMember = true;
		}

		// Token: 0x0600012E RID: 302 RVA: 0x000047A3 File Offset: 0x000029A3
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.PlayerHasUnassignedRolesAndMember;
		}

		// Token: 0x0600012F RID: 303 RVA: 0x000047AA File Offset: 0x000029AA
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerAssignedRoleToClanMember;
		}

		// Token: 0x0400005C RID: 92
		private bool _playerAssignedRoleToClanMember;
	}
}
