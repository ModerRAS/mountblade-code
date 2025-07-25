using System;
using TaleWorlds.CampaignSystem.ViewModelCollection.Conversation;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapConversation
{
	// Token: 0x02000050 RID: 80
	public class MapConversationVM : ViewModel
	{
		// Token: 0x060005CF RID: 1487 RVA: 0x0001CC07 File Offset: 0x0001AE07
		public MapConversationVM(Action onContinue, Func<string> getContinueInputText)
		{
			this._onContinue = onContinue;
			this.DialogController = new MissionConversationVM(getContinueInputText, false);
			this.IsTableauEnabled = false;
			this.TableauData = null;
		}

		// Token: 0x060005D0 RID: 1488 RVA: 0x0001CC31 File Offset: 0x0001AE31
		public void ExecuteContinue()
		{
			Action onContinue = this._onContinue;
			if (onContinue == null)
			{
				return;
			}
			onContinue();
		}

		// Token: 0x060005D1 RID: 1489 RVA: 0x0001CC43 File Offset: 0x0001AE43
		public override void OnFinalize()
		{
			base.OnFinalize();
			MissionConversationVM dialogController = this.DialogController;
			if (dialogController != null)
			{
				dialogController.OnFinalize();
			}
			this.DialogController = null;
		}

		// Token: 0x1700019E RID: 414
		// (get) Token: 0x060005D2 RID: 1490 RVA: 0x0001CC63 File Offset: 0x0001AE63
		// (set) Token: 0x060005D3 RID: 1491 RVA: 0x0001CC6B File Offset: 0x0001AE6B
		[DataSourceProperty]
		public MissionConversationVM DialogController
		{
			get
			{
				return this._dialogController;
			}
			set
			{
				if (value != this._dialogController)
				{
					this._dialogController = value;
					base.OnPropertyChangedWithValue<MissionConversationVM>(value, "DialogController");
				}
			}
		}

		// Token: 0x1700019F RID: 415
		// (get) Token: 0x060005D4 RID: 1492 RVA: 0x0001CC89 File Offset: 0x0001AE89
		// (set) Token: 0x060005D5 RID: 1493 RVA: 0x0001CC91 File Offset: 0x0001AE91
		[DataSourceProperty]
		public object TableauData
		{
			get
			{
				return this._tableauData;
			}
			set
			{
				if (value != this._tableauData)
				{
					this._tableauData = value;
					base.OnPropertyChangedWithValue<object>(value, "TableauData");
				}
			}
		}

		// Token: 0x170001A0 RID: 416
		// (get) Token: 0x060005D6 RID: 1494 RVA: 0x0001CCAF File Offset: 0x0001AEAF
		// (set) Token: 0x060005D7 RID: 1495 RVA: 0x0001CCB7 File Offset: 0x0001AEB7
		[DataSourceProperty]
		public bool IsTableauEnabled
		{
			get
			{
				return this._isTableauEnabled;
			}
			set
			{
				if (value != this._isTableauEnabled)
				{
					this._isTableauEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsTableauEnabled");
				}
			}
		}

		// Token: 0x170001A1 RID: 417
		// (get) Token: 0x060005D8 RID: 1496 RVA: 0x0001CCD5 File Offset: 0x0001AED5
		// (set) Token: 0x060005D9 RID: 1497 RVA: 0x0001CCDD File Offset: 0x0001AEDD
		[DataSourceProperty]
		public bool IsBarterActive
		{
			get
			{
				return this._isBarterActive;
			}
			set
			{
				if (value != this._isBarterActive)
				{
					this._isBarterActive = value;
					base.OnPropertyChangedWithValue(value, "IsBarterActive");
				}
			}
		}

		// Token: 0x04000279 RID: 633
		private readonly Action _onContinue;

		// Token: 0x0400027A RID: 634
		private MissionConversationVM _dialogController;

		// Token: 0x0400027B RID: 635
		private object _tableauData;

		// Token: 0x0400027C RID: 636
		private bool _isTableauEnabled;

		// Token: 0x0400027D RID: 637
		private bool _isBarterActive;
	}
}
