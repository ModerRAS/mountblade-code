using System;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items
{
	// Token: 0x020000D2 RID: 210
	public class EncyclopediaUnitVM : ViewModel
	{
		// Token: 0x060013DE RID: 5086 RVA: 0x0004C31C File Offset: 0x0004A51C
		public EncyclopediaUnitVM(CharacterObject character, bool isActive)
		{
			if (character != null)
			{
				CharacterCode characterCode = CharacterCode.CreateFrom(character);
				this.ImageIdentifier = new ImageIdentifierVM(characterCode);
				this._character = character;
				this.IsActiveUnit = isActive;
				this.TierIconData = CampaignUIHelper.GetCharacterTierData(character, true);
				this.TypeIconData = CampaignUIHelper.GetCharacterTypeData(character, true);
			}
			else
			{
				this.IsActiveUnit = false;
			}
			this.RefreshValues();
		}

		// Token: 0x060013DF RID: 5087 RVA: 0x0004C37C File Offset: 0x0004A57C
		public override void RefreshValues()
		{
			base.RefreshValues();
			if (this._character != null)
			{
				this.NameText = this._character.Name.ToString();
			}
		}

		// Token: 0x060013E0 RID: 5088 RVA: 0x0004C3A2 File Offset: 0x0004A5A2
		public void ExecuteLink()
		{
			Campaign.Current.EncyclopediaManager.GoToLink(this._character.EncyclopediaLink);
		}

		// Token: 0x060013E1 RID: 5089 RVA: 0x0004C3BE File Offset: 0x0004A5BE
		public virtual void ExecuteBeginHint()
		{
			InformationManager.ShowTooltip(typeof(CharacterObject), new object[]
			{
				this._character
			});
		}

		// Token: 0x060013E2 RID: 5090 RVA: 0x0004C3DE File Offset: 0x0004A5DE
		public virtual void ExecuteEndHint()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x170006A5 RID: 1701
		// (get) Token: 0x060013E3 RID: 5091 RVA: 0x0004C3E5 File Offset: 0x0004A5E5
		// (set) Token: 0x060013E4 RID: 5092 RVA: 0x0004C3ED File Offset: 0x0004A5ED
		[DataSourceProperty]
		public bool IsActiveUnit
		{
			get
			{
				return this._isActiveUnit;
			}
			set
			{
				if (value != this._isActiveUnit)
				{
					this._isActiveUnit = value;
					base.OnPropertyChangedWithValue(value, "IsActiveUnit");
				}
			}
		}

		// Token: 0x170006A6 RID: 1702
		// (get) Token: 0x060013E5 RID: 5093 RVA: 0x0004C40B File Offset: 0x0004A60B
		// (set) Token: 0x060013E6 RID: 5094 RVA: 0x0004C413 File Offset: 0x0004A613
		[DataSourceProperty]
		public ImageIdentifierVM ImageIdentifier
		{
			get
			{
				return this._imageIdentifier;
			}
			set
			{
				if (value != this._imageIdentifier)
				{
					this._imageIdentifier = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "ImageIdentifier");
				}
			}
		}

		// Token: 0x170006A7 RID: 1703
		// (get) Token: 0x060013E7 RID: 5095 RVA: 0x0004C431 File Offset: 0x0004A631
		// (set) Token: 0x060013E8 RID: 5096 RVA: 0x0004C439 File Offset: 0x0004A639
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

		// Token: 0x170006A8 RID: 1704
		// (get) Token: 0x060013E9 RID: 5097 RVA: 0x0004C45C File Offset: 0x0004A65C
		// (set) Token: 0x060013EA RID: 5098 RVA: 0x0004C464 File Offset: 0x0004A664
		[DataSourceProperty]
		public StringItemWithHintVM TierIconData
		{
			get
			{
				return this._tierIconData;
			}
			set
			{
				if (value != this._tierIconData)
				{
					this._tierIconData = value;
					base.OnPropertyChangedWithValue<StringItemWithHintVM>(value, "TierIconData");
				}
			}
		}

		// Token: 0x170006A9 RID: 1705
		// (get) Token: 0x060013EB RID: 5099 RVA: 0x0004C482 File Offset: 0x0004A682
		// (set) Token: 0x060013EC RID: 5100 RVA: 0x0004C48A File Offset: 0x0004A68A
		[DataSourceProperty]
		public StringItemWithHintVM TypeIconData
		{
			get
			{
				return this._typeIconData;
			}
			set
			{
				if (value != this._typeIconData)
				{
					this._typeIconData = value;
					base.OnPropertyChangedWithValue<StringItemWithHintVM>(value, "TypeIconData");
				}
			}
		}

		// Token: 0x0400092E RID: 2350
		private CharacterObject _character;

		// Token: 0x0400092F RID: 2351
		private ImageIdentifierVM _imageIdentifier;

		// Token: 0x04000930 RID: 2352
		private string _nameText;

		// Token: 0x04000931 RID: 2353
		private bool _isActiveUnit;

		// Token: 0x04000932 RID: 2354
		private StringItemWithHintVM _tierIconData;

		// Token: 0x04000933 RID: 2355
		private StringItemWithHintVM _typeIconData;
	}
}
