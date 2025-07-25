using System;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation
{
	// Token: 0x0200012F RID: 303
	public class CharacterCreationCultureVM : ViewModel
	{
		// Token: 0x17000A23 RID: 2595
		// (get) Token: 0x06001D8A RID: 7562 RVA: 0x00069E32 File Offset: 0x00068032
		public CultureObject Culture { get; }

		// Token: 0x06001D8B RID: 7563 RVA: 0x00069E3C File Offset: 0x0006803C
		public CharacterCreationCultureVM(CultureObject culture, Action<CharacterCreationCultureVM> onSelection)
		{
			this._onSelection = onSelection;
			this.Culture = culture;
			MBTextManager.SetTextVariable("FOCUS_VALUE", CharacterCreationContentBase.Instance.FocusToAddByCulture);
			MBTextManager.SetTextVariable("EXP_VALUE", CharacterCreationContentBase.Instance.SkillLevelToAddByCulture);
			this.DescriptionText = GameTexts.FindText("str_culture_description", this.Culture.StringId).ToString();
			this.ShortenedNameText = GameTexts.FindText("str_culture_rich_name", this.Culture.StringId).ToString();
			this.NameText = GameTexts.FindText("str_culture_rich_name", this.Culture.StringId).ToString();
			this.CultureID = (((culture != null) ? culture.StringId : null) ?? "");
			this.CultureColor1 = Color.FromUint((culture != null) ? culture.Color : Color.White.ToUnsignedInteger());
			this.Feats = new MBBindingList<CharacterCreationCultureFeatVM>();
			foreach (FeatObject featObject in this.Culture.GetCulturalFeats((FeatObject x) => x.IsPositive))
			{
				this.Feats.Add(new CharacterCreationCultureFeatVM(true, featObject.Description.ToString()));
			}
			foreach (FeatObject featObject2 in this.Culture.GetCulturalFeats((FeatObject x) => !x.IsPositive))
			{
				this.Feats.Add(new CharacterCreationCultureFeatVM(false, featObject2.Description.ToString()));
			}
		}

		// Token: 0x06001D8C RID: 7564 RVA: 0x0006A028 File Offset: 0x00068228
		public void ExecuteSelectCulture()
		{
			this._onSelection(this);
		}

		// Token: 0x17000A24 RID: 2596
		// (get) Token: 0x06001D8D RID: 7565 RVA: 0x0006A036 File Offset: 0x00068236
		// (set) Token: 0x06001D8E RID: 7566 RVA: 0x0006A03E File Offset: 0x0006823E
		[DataSourceProperty]
		public string CultureID
		{
			get
			{
				return this._cultureID;
			}
			set
			{
				if (value != this._cultureID)
				{
					this._cultureID = value;
					base.OnPropertyChangedWithValue<string>(value, "CultureID");
				}
			}
		}

		// Token: 0x17000A25 RID: 2597
		// (get) Token: 0x06001D8F RID: 7567 RVA: 0x0006A061 File Offset: 0x00068261
		// (set) Token: 0x06001D90 RID: 7568 RVA: 0x0006A069 File Offset: 0x00068269
		[DataSourceProperty]
		public Color CultureColor1
		{
			get
			{
				return this._cultureColor1;
			}
			set
			{
				if (value != this._cultureColor1)
				{
					this._cultureColor1 = value;
					base.OnPropertyChangedWithValue(value, "CultureColor1");
				}
			}
		}

		// Token: 0x17000A26 RID: 2598
		// (get) Token: 0x06001D91 RID: 7569 RVA: 0x0006A08C File Offset: 0x0006828C
		// (set) Token: 0x06001D92 RID: 7570 RVA: 0x0006A094 File Offset: 0x00068294
		[DataSourceProperty]
		public string DescriptionText
		{
			get
			{
				return this._descriptionText;
			}
			set
			{
				if (value != this._descriptionText)
				{
					this._descriptionText = value;
					base.OnPropertyChangedWithValue<string>(value, "DescriptionText");
				}
			}
		}

		// Token: 0x17000A27 RID: 2599
		// (get) Token: 0x06001D93 RID: 7571 RVA: 0x0006A0B7 File Offset: 0x000682B7
		// (set) Token: 0x06001D94 RID: 7572 RVA: 0x0006A0BF File Offset: 0x000682BF
		[DataSourceProperty]
		public string NameText
		{
			get
			{
				return this._nameText;
			}
			set
			{
				if (value != this._nameText)
				{
					this._nameText = value;
					base.OnPropertyChangedWithValue<string>(value, "NameText");
				}
			}
		}

		// Token: 0x17000A28 RID: 2600
		// (get) Token: 0x06001D95 RID: 7573 RVA: 0x0006A0E2 File Offset: 0x000682E2
		// (set) Token: 0x06001D96 RID: 7574 RVA: 0x0006A0EA File Offset: 0x000682EA
		[DataSourceProperty]
		public string ShortenedNameText
		{
			get
			{
				return this._shortenedNameText;
			}
			set
			{
				if (value != this._shortenedNameText)
				{
					this._shortenedNameText = value;
					base.OnPropertyChangedWithValue<string>(value, "ShortenedNameText");
				}
			}
		}

		// Token: 0x17000A29 RID: 2601
		// (get) Token: 0x06001D97 RID: 7575 RVA: 0x0006A10D File Offset: 0x0006830D
		// (set) Token: 0x06001D98 RID: 7576 RVA: 0x0006A115 File Offset: 0x00068315
		[DataSourceProperty]
		public bool IsSelected
		{
			get
			{
				return this._isSelected;
			}
			set
			{
				if (value != this._isSelected)
				{
					this._isSelected = value;
					base.OnPropertyChangedWithValue(value, "IsSelected");
				}
			}
		}

		// Token: 0x17000A2A RID: 2602
		// (get) Token: 0x06001D99 RID: 7577 RVA: 0x0006A133 File Offset: 0x00068333
		// (set) Token: 0x06001D9A RID: 7578 RVA: 0x0006A13B File Offset: 0x0006833B
		[DataSourceProperty]
		public MBBindingList<CharacterCreationCultureFeatVM> Feats
		{
			get
			{
				return this._feats;
			}
			set
			{
				if (value != this._feats)
				{
					this._feats = value;
					base.OnPropertyChangedWithValue<MBBindingList<CharacterCreationCultureFeatVM>>(value, "Feats");
				}
			}
		}

		// Token: 0x04000DED RID: 3565
		private readonly Action<CharacterCreationCultureVM> _onSelection;

		// Token: 0x04000DEE RID: 3566
		private string _descriptionText = "";

		// Token: 0x04000DEF RID: 3567
		private string _nameText;

		// Token: 0x04000DF0 RID: 3568
		private string _shortenedNameText;

		// Token: 0x04000DF1 RID: 3569
		private bool _isSelected;

		// Token: 0x04000DF2 RID: 3570
		private string _cultureID;

		// Token: 0x04000DF3 RID: 3571
		private Color _cultureColor1;

		// Token: 0x04000DF4 RID: 3572
		private MBBindingList<CharacterCreationCultureFeatVM> _feats;
	}
}
