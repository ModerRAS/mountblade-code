using System;
using StoryMode.StoryModePhases;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Inventory;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200001A RID: 26
	public class CivilianEquipmentTutorial : TutorialItemBase
	{
		// Token: 0x0600007D RID: 125 RVA: 0x00002FB5 File Offset: 0x000011B5
		public CivilianEquipmentTutorial()
		{
			base.Type = "CivilianEquipment";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "CivilianFilter";
			base.MouseRequired = true;
		}

		// Token: 0x0600007E RID: 126 RVA: 0x00002FE1 File Offset: 0x000011E1
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerFilteredToCivilianEquipment;
		}

		// Token: 0x0600007F RID: 127 RVA: 0x00002FE9 File Offset: 0x000011E9
		public override void OnInventoryEquipmentTypeChange(InventoryEquipmentTypeChangedEvent obj)
		{
			this._playerFilteredToCivilianEquipment = !obj.IsCurrentlyWarSet;
		}

		// Token: 0x06000080 RID: 128 RVA: 0x00002FFA File Offset: 0x000011FA
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.InventoryScreen;
		}

		// Token: 0x06000081 RID: 129 RVA: 0x00002FFD File Offset: 0x000011FD
		public override bool IsConditionsMetForActivation()
		{
			return TutorialPhase.Instance.IsCompleted && TutorialHelper.CurrentContext == TutorialContexts.InventoryScreen;
		}

		// Token: 0x04000020 RID: 32
		private bool _playerFilteredToCivilianEquipment;
	}
}
