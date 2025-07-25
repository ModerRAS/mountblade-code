using System;
using System.Linq;
using SandBox.ViewModelCollection.Missions.NameMarker;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000016 RID: 22
	public class SeeMarkersInMissionTutorial : TutorialItemBase
	{
		// Token: 0x06000069 RID: 105 RVA: 0x00002C97 File Offset: 0x00000E97
		public SeeMarkersInMissionTutorial()
		{
			base.Type = "SeeMarkersInMissionTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Left;
			base.HighlightedVisualElementID = string.Empty;
			base.MouseRequired = false;
		}

		// Token: 0x0600006A RID: 106 RVA: 0x00002CC3 File Offset: 0x00000EC3
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerEnabledNameMarkers;
		}

		// Token: 0x0600006B RID: 107 RVA: 0x00002CCB File Offset: 0x00000ECB
		public override void OnMissionNameMarkerToggled(MissionNameMarkerToggleEvent obj)
		{
			this._playerEnabledNameMarkers = obj.NewState;
		}

		// Token: 0x0600006C RID: 108 RVA: 0x00002CD9 File Offset: 0x00000ED9
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x0600006D RID: 109 RVA: 0x00002CDC File Offset: 0x00000EDC
		public override bool IsConditionsMetForActivation()
		{
			string[] source = new string[]
			{
				"center",
				"lordshall",
				"tavern",
				"prison",
				"village_center"
			};
			return TutorialHelper.PlayerIsInAnySettlement && TutorialHelper.CurrentContext == TutorialContexts.Mission && TutorialHelper.CurrentMissionLocation != null && source.Contains(TutorialHelper.CurrentMissionLocation.StringId) && !TutorialHelper.PlayerIsInAConversation;
		}

		// Token: 0x04000019 RID: 25
		private bool _playerEnabledNameMarkers;
	}
}
