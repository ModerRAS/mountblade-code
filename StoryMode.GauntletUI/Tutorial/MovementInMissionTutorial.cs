using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000017 RID: 23
	public class MovementInMissionTutorial : TutorialItemBase
	{
		// Token: 0x0600006E RID: 110 RVA: 0x00002D4A File Offset: 0x00000F4A
		public MovementInMissionTutorial()
		{
			base.Type = "MovementInMissionTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = string.Empty;
			base.MouseRequired = false;
		}

		// Token: 0x0600006F RID: 111 RVA: 0x00002D76 File Offset: 0x00000F76
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerMovedBackward && this._playerMovedLeft && this._playerMovedRight && this._playerMovedForward;
		}

		// Token: 0x06000070 RID: 112 RVA: 0x00002D98 File Offset: 0x00000F98
		public override void OnPlayerMovementFlagChanged(MissionPlayerMovementFlagsChangeEvent obj)
		{
			base.OnPlayerMovementFlagChanged(obj);
			this._playerMovedRight = (this._playerMovedRight || (obj.MovementFlag & 4) == 4);
			this._playerMovedLeft = (this._playerMovedLeft || (obj.MovementFlag & 8) == 8);
			this._playerMovedForward = (this._playerMovedForward || (obj.MovementFlag & 1) == 1);
			this._playerMovedBackward = (this._playerMovedBackward || (obj.MovementFlag & 2) == 2);
		}

		// Token: 0x06000071 RID: 113 RVA: 0x00002E1C File Offset: 0x0000101C
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x06000072 RID: 114 RVA: 0x00002E1F File Offset: 0x0000101F
		public override bool IsConditionsMetForActivation()
		{
			return Mission.Current != null && Mission.Current.Mode != MissionMode.Deployment && !TutorialHelper.PlayerIsInAConversation && TutorialHelper.CurrentContext == TutorialContexts.Mission;
		}

		// Token: 0x0400001A RID: 26
		private bool _playerMovedForward;

		// Token: 0x0400001B RID: 27
		private bool _playerMovedBackward;

		// Token: 0x0400001C RID: 28
		private bool _playerMovedLeft;

		// Token: 0x0400001D RID: 29
		private bool _playerMovedRight;
	}
}
