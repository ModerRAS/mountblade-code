using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Conversation
{
	// Token: 0x020000F9 RID: 249
	public class ConversationItemVM : ViewModel
	{
		// Token: 0x170007EB RID: 2027
		// (get) Token: 0x0600176A RID: 5994 RVA: 0x00056EB8 File Offset: 0x000550B8
		private ConversationSentenceOption _option
		{
			get
			{
				List<ConversationSentenceOption> curOptions = Campaign.Current.ConversationManager.CurOptions;
				if (curOptions == null || curOptions.Count <= 0)
				{
					return default(ConversationSentenceOption);
				}
				return Campaign.Current.ConversationManager.CurOptions[this.Index];
			}
		}

		// Token: 0x0600176B RID: 5995 RVA: 0x00056F0C File Offset: 0x0005510C
		public ConversationItemVM(Action<int> action, Action onReadyToContinue, Action<ConversationItemVM> setCurrentAnswer, int index)
		{
			this.ActionWihIntIndex = action;
			this.Index = index;
			this._onReadyToContinue = onReadyToContinue;
			this.IsEnabled = this._option.IsClickable;
			this.HasPersuasion = this._option.HasPersuasion;
			this._setCurrentAnswer = setCurrentAnswer;
			this.PersuasionItem = new PersuasionOptionVM(Campaign.Current.ConversationManager, index, new Action(this.OnReadyToContinue));
			this.IsSpecial = this._option.IsSpecial;
			this.RefreshValues();
		}

		// Token: 0x0600176C RID: 5996 RVA: 0x00056F98 File Offset: 0x00055198
		private void OnReadyToContinue()
		{
			this._onReadyToContinue.DynamicInvokeWithLog(Array.Empty<object>());
		}

		// Token: 0x0600176D RID: 5997 RVA: 0x00056FAB File Offset: 0x000551AB
		public ConversationItemVM()
		{
			this.Index = 0;
			this.ItemText = "";
			this.IsEnabled = false;
			this.OptionHint = new HintViewModel();
			this.HasPersuasion = false;
			this._setCurrentAnswer = null;
		}

		// Token: 0x0600176E RID: 5998 RVA: 0x00056FE8 File Offset: 0x000551E8
		public override void RefreshValues()
		{
			base.RefreshValues();
			TextObject text = this._option.Text;
			string text2 = ((text != null) ? text.ToString() : null) ?? "";
			this.OptionHint = new HintViewModel((this._option.HintText != null) ? this._option.HintText : TextObject.Empty, null);
			PersuasionOptionVM persuasionItem = this.PersuasionItem;
			if (persuasionItem != null)
			{
				persuasionItem.RefreshValues();
			}
			if (this.PersuasionItem != null)
			{
				string persuasionAdditionalText = this.PersuasionItem.GetPersuasionAdditionalText();
				if (!string.IsNullOrEmpty(persuasionAdditionalText))
				{
					GameTexts.SetVariable("STR1", text2);
					GameTexts.SetVariable("STR2", persuasionAdditionalText);
					text2 = GameTexts.FindText("str_STR1_space_STR2", null).ToString();
				}
			}
			this.ItemText = text2;
		}

		// Token: 0x0600176F RID: 5999 RVA: 0x000570A2 File Offset: 0x000552A2
		public void ExecuteAction()
		{
			Action<int> actionWihIntIndex = this.ActionWihIntIndex;
			if (actionWihIntIndex == null)
			{
				return;
			}
			actionWihIntIndex(this.Index);
		}

		// Token: 0x06001770 RID: 6000 RVA: 0x000570BA File Offset: 0x000552BA
		public void SetCurrentAnswer()
		{
			Action<ConversationItemVM> setCurrentAnswer = this._setCurrentAnswer;
			if (setCurrentAnswer == null)
			{
				return;
			}
			setCurrentAnswer(this);
		}

		// Token: 0x06001771 RID: 6001 RVA: 0x000570CD File Offset: 0x000552CD
		public void ResetCurrentAnswer()
		{
			this._setCurrentAnswer(null);
		}

		// Token: 0x06001772 RID: 6002 RVA: 0x000570DB File Offset: 0x000552DB
		internal void OnPersuasionProgress(Tuple<PersuasionOptionArgs, PersuasionOptionResult> result)
		{
			PersuasionOptionVM persuasionItem = this.PersuasionItem;
			if (persuasionItem == null)
			{
				return;
			}
			persuasionItem.OnPersuasionProgress(result);
		}

		// Token: 0x170007EC RID: 2028
		// (get) Token: 0x06001773 RID: 6003 RVA: 0x000570EE File Offset: 0x000552EE
		// (set) Token: 0x06001774 RID: 6004 RVA: 0x000570F6 File Offset: 0x000552F6
		[DataSourceProperty]
		public PersuasionOptionVM PersuasionItem
		{
			get
			{
				return this._persuasionItem;
			}
			set
			{
				if (this._persuasionItem != value)
				{
					this._persuasionItem = value;
					base.OnPropertyChangedWithValue<PersuasionOptionVM>(value, "PersuasionItem");
				}
			}
		}

		// Token: 0x170007ED RID: 2029
		// (get) Token: 0x06001775 RID: 6005 RVA: 0x00057114 File Offset: 0x00055314
		// (set) Token: 0x06001776 RID: 6006 RVA: 0x0005711C File Offset: 0x0005531C
		[DataSourceProperty]
		public bool HasPersuasion
		{
			get
			{
				return this._hasPersuasion;
			}
			set
			{
				if (this._hasPersuasion != value)
				{
					this._hasPersuasion = value;
					base.OnPropertyChangedWithValue(value, "HasPersuasion");
				}
			}
		}

		// Token: 0x170007EE RID: 2030
		// (get) Token: 0x06001777 RID: 6007 RVA: 0x0005713A File Offset: 0x0005533A
		// (set) Token: 0x06001778 RID: 6008 RVA: 0x00057142 File Offset: 0x00055342
		[DataSourceProperty]
		public int IconType
		{
			get
			{
				return this._iconType;
			}
			set
			{
				if (this._iconType != value)
				{
					this._iconType = value;
					base.OnPropertyChangedWithValue(value, "IconType");
				}
			}
		}

		// Token: 0x170007EF RID: 2031
		// (get) Token: 0x06001779 RID: 6009 RVA: 0x00057160 File Offset: 0x00055360
		// (set) Token: 0x0600177A RID: 6010 RVA: 0x00057168 File Offset: 0x00055368
		[DataSourceProperty]
		public HintViewModel OptionHint
		{
			get
			{
				return this._optionHint;
			}
			set
			{
				if (this._optionHint != value)
				{
					this._optionHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "OptionHint");
				}
			}
		}

		// Token: 0x170007F0 RID: 2032
		// (get) Token: 0x0600177B RID: 6011 RVA: 0x00057186 File Offset: 0x00055386
		// (set) Token: 0x0600177C RID: 6012 RVA: 0x0005718E File Offset: 0x0005538E
		[DataSourceProperty]
		public string ItemText
		{
			get
			{
				return this._itemText;
			}
			set
			{
				if (this._itemText != value)
				{
					this._itemText = value;
					base.OnPropertyChangedWithValue<string>(value, "ItemText");
				}
			}
		}

		// Token: 0x170007F1 RID: 2033
		// (get) Token: 0x0600177D RID: 6013 RVA: 0x000571B1 File Offset: 0x000553B1
		// (set) Token: 0x0600177E RID: 6014 RVA: 0x000571B9 File Offset: 0x000553B9
		[DataSourceProperty]
		public bool IsEnabled
		{
			get
			{
				return this._isEnabled;
			}
			set
			{
				if (this._isEnabled != value)
				{
					this._isEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsEnabled");
				}
			}
		}

		// Token: 0x170007F2 RID: 2034
		// (get) Token: 0x0600177F RID: 6015 RVA: 0x000571D7 File Offset: 0x000553D7
		// (set) Token: 0x06001780 RID: 6016 RVA: 0x000571DF File Offset: 0x000553DF
		[DataSourceProperty]
		public bool IsSpecial
		{
			get
			{
				return this._isSpecial;
			}
			set
			{
				if (this._isSpecial != value)
				{
					this._isSpecial = value;
					base.OnPropertyChangedWithValue(value, "IsSpecial");
				}
			}
		}

		// Token: 0x04000AEC RID: 2796
		public Action<int> ActionWihIntIndex;

		// Token: 0x04000AED RID: 2797
		public Action<ConversationItemVM> _setCurrentAnswer;

		// Token: 0x04000AEE RID: 2798
		public int Index;

		// Token: 0x04000AEF RID: 2799
		private Action _onReadyToContinue;

		// Token: 0x04000AF0 RID: 2800
		private bool _hasPersuasion;

		// Token: 0x04000AF1 RID: 2801
		private bool _isSpecial;

		// Token: 0x04000AF2 RID: 2802
		private string _itemText;

		// Token: 0x04000AF3 RID: 2803
		private int _iconType;

		// Token: 0x04000AF4 RID: 2804
		private bool _isEnabled;

		// Token: 0x04000AF5 RID: 2805
		private PersuasionOptionVM _persuasionItem;

		// Token: 0x04000AF6 RID: 2806
		private HintViewModel _optionHint;
	}
}
