using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ViewModelCollection.Input;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation
{
	// Token: 0x02000137 RID: 311
	public class CharacterCreationReviewStageVM : CharacterCreationStageBaseVM
	{
		// Token: 0x06001DEA RID: 7658 RVA: 0x0006B18C File Offset: 0x0006938C
		public CharacterCreationReviewStageVM(CharacterCreation characterCreation, Action affirmativeAction, TextObject affirmativeActionText, Action negativeAction, TextObject negativeActionText, int currentStageIndex, int totalStagesCount, int furthestIndex, Action<int> goToIndex, bool isBannerAndClanNameSet) : base(characterCreation, affirmativeAction, affirmativeActionText, negativeAction, negativeActionText, currentStageIndex, totalStagesCount, furthestIndex, goToIndex)
		{
			this.ReviewList = new MBBindingList<CharacterCreationReviewStageItemVM>();
			base.Title = new TextObject("{=txjiykNa}Review", null).ToString();
			base.Description = CharacterCreationContentBase.Instance.ReviewPageDescription.ToString();
			this._currentContent = (GameStateManager.Current.ActiveState as CharacterCreationState).CurrentCharacterCreationContent;
			this._isBannerAndClanNameSet = isBannerAndClanNameSet;
			this.Name = this._characterCreation.Name;
			this.NameTextQuestion = new TextObject("{=mHVmrwRQ}Enter your name", null).ToString();
			this.AddReviewedItems();
			this.GainedPropertiesController = new CharacterCreationGainedPropertiesVM(this._characterCreation, -1);
			this.ClanBanner = new ImageIdentifierVM(Clan.PlayerClan.Banner);
			this.CannotAdvanceReasonHint = new HintViewModel();
		}

		// Token: 0x06001DEB RID: 7659 RVA: 0x0006B27C File Offset: 0x0006947C
		private void AddReviewedItems()
		{
			string text = string.Empty;
			CultureObject selectedCulture = this._currentContent.GetSelectedCulture();
			IEnumerable<FeatObject> culturalFeats = selectedCulture.GetCulturalFeats((FeatObject x) => x.IsPositive);
			IEnumerable<FeatObject> culturalFeats2 = selectedCulture.GetCulturalFeats((FeatObject x) => !x.IsPositive);
			foreach (FeatObject featObject in culturalFeats)
			{
				GameTexts.SetVariable("STR1", text);
				GameTexts.SetVariable("STR2", featObject.Description);
				text = GameTexts.FindText("str_string_newline_string", null).ToString();
			}
			foreach (FeatObject featObject2 in culturalFeats2)
			{
				GameTexts.SetVariable("STR1", text);
				GameTexts.SetVariable("STR2", featObject2.Description);
				text = GameTexts.FindText("str_string_newline_string", null).ToString();
			}
			CharacterCreationReviewStageItemVM item = new CharacterCreationReviewStageItemVM(new TextObject("{=K6GYskvJ}Culture:", null).ToString(), this._currentContent.GetSelectedCulture().Name.ToString(), text);
			this.ReviewList.Add(item);
			for (int i = 0; i < this._characterCreation.CharacterCreationMenuCount; i++)
			{
				IEnumerable<int> selectedOptions = this._characterCreation.GetSelectedOptions(i);
				IEnumerable<CharacterCreationOption> currentMenuOptions = this._characterCreation.GetCurrentMenuOptions(i);
				Func<CharacterCreationOption, bool> predicate;
				Func<CharacterCreationOption, bool> <>9__2;
				if ((predicate = <>9__2) == null)
				{
					predicate = (<>9__2 = ((CharacterCreationOption s) => selectedOptions.Contains(s.Id)));
				}
				foreach (CharacterCreationOption characterCreationOption in currentMenuOptions.Where(predicate))
				{
					item = new CharacterCreationReviewStageItemVM(this._characterCreation.GetCurrentMenuTitle(i).ToString(), characterCreationOption.Text.ToString(), characterCreationOption.PositiveEffectText.ToString());
					this.ReviewList.Add(item);
				}
			}
			if (this._isBannerAndClanNameSet)
			{
				CharacterCreationReviewStageItemVM item2 = new CharacterCreationReviewStageItemVM(new ImageIdentifierVM(BannerCode.CreateFrom(Clan.PlayerClan.Banner), true), GameTexts.FindText("str_clan", null).ToString(), Clan.PlayerClan.Name.ToString(), null);
				this.ReviewList.Add(item2);
			}
		}

		// Token: 0x06001DEC RID: 7660 RVA: 0x0006B51C File Offset: 0x0006971C
		public void ExecuteRandomizeName()
		{
			CharacterCreationContentBase currentCharacterCreationContent = (GameStateManager.Current.ActiveState as CharacterCreationState).CurrentCharacterCreationContent;
			this.Name = NameGenerator.Current.GenerateFirstNameForPlayer(currentCharacterCreationContent.GetSelectedCulture(), Hero.MainHero.IsFemale).ToString();
		}

		// Token: 0x06001DED RID: 7661 RVA: 0x0006B564 File Offset: 0x00069764
		private void OnRefresh()
		{
			TextObject textObject = GameTexts.FindText("str_generic_character_firstname", null);
			textObject.SetTextVariable("CHARACTER_FIRSTNAME", new TextObject(this.Name, null));
			TextObject textObject2 = GameTexts.FindText("str_generic_character_name", null);
			textObject2.SetTextVariable("CHARACTER_NAME", new TextObject(this.Name, null));
			textObject2.SetTextVariable("CHARACTER_GENDER", Hero.MainHero.IsFemale ? 1 : 0);
			textObject.SetTextVariable("CHARACTER_GENDER", Hero.MainHero.IsFemale ? 1 : 0);
			Hero.MainHero.SetName(textObject2, textObject);
			base.OnPropertyChanged("CanAdvance");
		}

		// Token: 0x06001DEE RID: 7662 RVA: 0x0006B608 File Offset: 0x00069808
		public override void OnNextStage()
		{
			this._affirmativeAction();
		}

		// Token: 0x06001DEF RID: 7663 RVA: 0x0006B615 File Offset: 0x00069815
		public override void OnPreviousStage()
		{
			this._negativeAction();
		}

		// Token: 0x06001DF0 RID: 7664 RVA: 0x0006B624 File Offset: 0x00069824
		public override bool CanAdvanceToNextStage()
		{
			TextObject hintText = TextObject.Empty;
			bool result = true;
			if (string.IsNullOrEmpty(this.Name) || string.IsNullOrWhiteSpace(this.Name))
			{
				hintText = new TextObject("{=IRcy3pWJ}Name cannot be empty", null);
				result = false;
			}
			Tuple<bool, string> tuple = CampaignUIHelper.IsStringApplicableForHeroName(this.Name);
			if (!tuple.Item1)
			{
				if (!string.IsNullOrEmpty(tuple.Item2))
				{
					hintText = new TextObject("{=!}" + tuple.Item2, null);
				}
				result = false;
			}
			this.CannotAdvanceReasonHint.HintText = hintText;
			return result;
		}

		// Token: 0x06001DF1 RID: 7665 RVA: 0x0006B6A8 File Offset: 0x000698A8
		public override void OnFinalize()
		{
			base.OnFinalize();
			InputKeyItemVM cancelInputKey = this.CancelInputKey;
			if (cancelInputKey != null)
			{
				cancelInputKey.OnFinalize();
			}
			InputKeyItemVM doneInputKey = this.DoneInputKey;
			if (doneInputKey == null)
			{
				return;
			}
			doneInputKey.OnFinalize();
		}

		// Token: 0x06001DF2 RID: 7666 RVA: 0x0006B6D1 File Offset: 0x000698D1
		public void SetCancelInputKey(HotKey hotKey)
		{
			this.CancelInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
		}

		// Token: 0x06001DF3 RID: 7667 RVA: 0x0006B6E0 File Offset: 0x000698E0
		public void SetDoneInputKey(HotKey hotKey)
		{
			this.DoneInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
		}

		// Token: 0x17000A45 RID: 2629
		// (get) Token: 0x06001DF4 RID: 7668 RVA: 0x0006B6EF File Offset: 0x000698EF
		// (set) Token: 0x06001DF5 RID: 7669 RVA: 0x0006B6F7 File Offset: 0x000698F7
		[DataSourceProperty]
		public InputKeyItemVM CancelInputKey
		{
			get
			{
				return this._cancelInputKey;
			}
			set
			{
				if (value != this._cancelInputKey)
				{
					this._cancelInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "CancelInputKey");
				}
			}
		}

		// Token: 0x17000A46 RID: 2630
		// (get) Token: 0x06001DF6 RID: 7670 RVA: 0x0006B715 File Offset: 0x00069915
		// (set) Token: 0x06001DF7 RID: 7671 RVA: 0x0006B71D File Offset: 0x0006991D
		[DataSourceProperty]
		public InputKeyItemVM DoneInputKey
		{
			get
			{
				return this._doneInputKey;
			}
			set
			{
				if (value != this._doneInputKey)
				{
					this._doneInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "DoneInputKey");
				}
			}
		}

		// Token: 0x17000A47 RID: 2631
		// (get) Token: 0x06001DF8 RID: 7672 RVA: 0x0006B73B File Offset: 0x0006993B
		// (set) Token: 0x06001DF9 RID: 7673 RVA: 0x0006B743 File Offset: 0x00069943
		[DataSourceProperty]
		public string Name
		{
			get
			{
				return this._name;
			}
			set
			{
				if (value != this._name)
				{
					this._name = value;
					this._characterCreation.Name = value;
					base.OnPropertyChangedWithValue<string>(value, "Name");
					this.OnRefresh();
				}
			}
		}

		// Token: 0x17000A48 RID: 2632
		// (get) Token: 0x06001DFA RID: 7674 RVA: 0x0006B778 File Offset: 0x00069978
		// (set) Token: 0x06001DFB RID: 7675 RVA: 0x0006B780 File Offset: 0x00069980
		[DataSourceProperty]
		public string NameTextQuestion
		{
			get
			{
				return this._nameTextQuestion;
			}
			set
			{
				if (value != this._nameTextQuestion)
				{
					this._nameTextQuestion = value;
					base.OnPropertyChangedWithValue<string>(value, "NameTextQuestion");
				}
			}
		}

		// Token: 0x17000A49 RID: 2633
		// (get) Token: 0x06001DFC RID: 7676 RVA: 0x0006B7A3 File Offset: 0x000699A3
		// (set) Token: 0x06001DFD RID: 7677 RVA: 0x0006B7AB File Offset: 0x000699AB
		[DataSourceProperty]
		public MBBindingList<CharacterCreationReviewStageItemVM> ReviewList
		{
			get
			{
				return this._reviewList;
			}
			set
			{
				if (value != this._reviewList)
				{
					this._reviewList = value;
					base.OnPropertyChangedWithValue<MBBindingList<CharacterCreationReviewStageItemVM>>(value, "ReviewList");
				}
			}
		}

		// Token: 0x17000A4A RID: 2634
		// (get) Token: 0x06001DFE RID: 7678 RVA: 0x0006B7C9 File Offset: 0x000699C9
		// (set) Token: 0x06001DFF RID: 7679 RVA: 0x0006B7D1 File Offset: 0x000699D1
		[DataSourceProperty]
		public CharacterCreationGainedPropertiesVM GainedPropertiesController
		{
			get
			{
				return this._gainedPropertiesController;
			}
			set
			{
				if (value != this._gainedPropertiesController)
				{
					this._gainedPropertiesController = value;
					base.OnPropertyChangedWithValue<CharacterCreationGainedPropertiesVM>(value, "GainedPropertiesController");
				}
			}
		}

		// Token: 0x17000A4B RID: 2635
		// (get) Token: 0x06001E00 RID: 7680 RVA: 0x0006B7EF File Offset: 0x000699EF
		// (set) Token: 0x06001E01 RID: 7681 RVA: 0x0006B7F7 File Offset: 0x000699F7
		[DataSourceProperty]
		public ImageIdentifierVM ClanBanner
		{
			get
			{
				return this._clanBanner;
			}
			set
			{
				if (value != this._clanBanner)
				{
					this._clanBanner = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "ClanBanner");
				}
			}
		}

		// Token: 0x17000A4C RID: 2636
		// (get) Token: 0x06001E02 RID: 7682 RVA: 0x0006B815 File Offset: 0x00069A15
		// (set) Token: 0x06001E03 RID: 7683 RVA: 0x0006B81D File Offset: 0x00069A1D
		[DataSourceProperty]
		public HintViewModel CannotAdvanceReasonHint
		{
			get
			{
				return this._cannotAdvanceReasonHint;
			}
			set
			{
				if (value != this._cannotAdvanceReasonHint)
				{
					this._cannotAdvanceReasonHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "CannotAdvanceReasonHint");
				}
			}
		}

		// Token: 0x04000E1A RID: 3610
		private readonly CharacterCreationContentBase _currentContent;

		// Token: 0x04000E1B RID: 3611
		private bool _isBannerAndClanNameSet;

		// Token: 0x04000E1C RID: 3612
		private InputKeyItemVM _cancelInputKey;

		// Token: 0x04000E1D RID: 3613
		private InputKeyItemVM _doneInputKey;

		// Token: 0x04000E1E RID: 3614
		private string _name = "";

		// Token: 0x04000E1F RID: 3615
		private string _nameTextQuestion = "";

		// Token: 0x04000E20 RID: 3616
		private MBBindingList<CharacterCreationReviewStageItemVM> _reviewList;

		// Token: 0x04000E21 RID: 3617
		private CharacterCreationGainedPropertiesVM _gainedPropertiesController;

		// Token: 0x04000E22 RID: 3618
		private ImageIdentifierVM _clanBanner;

		// Token: 0x04000E23 RID: 3619
		private HintViewModel _cannotAdvanceReasonHint;
	}
}
