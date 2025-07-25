using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation
{
	// Token: 0x02000136 RID: 310
	public class CharacterCreationReviewStageItemVM : ViewModel
	{
		// Token: 0x06001DDE RID: 7646 RVA: 0x0006B088 File Offset: 0x00069288
		public CharacterCreationReviewStageItemVM(ImageIdentifierVM imageIdentifier, string title, string text, string description) : this(title, text, description)
		{
			this.HasImage = true;
			this.ImageIdentifier = imageIdentifier;
		}

		// Token: 0x06001DDF RID: 7647 RVA: 0x0006B0A2 File Offset: 0x000692A2
		public CharacterCreationReviewStageItemVM(string title, string text, string description)
		{
			this.Title = title;
			this.Text = text;
			this.Description = description;
		}

		// Token: 0x17000A40 RID: 2624
		// (get) Token: 0x06001DE0 RID: 7648 RVA: 0x0006B0BF File Offset: 0x000692BF
		// (set) Token: 0x06001DE1 RID: 7649 RVA: 0x0006B0C7 File Offset: 0x000692C7
		[DataSourceProperty]
		public bool HasImage
		{
			get
			{
				return this._hasImage;
			}
			set
			{
				if (value != this._hasImage)
				{
					this._hasImage = value;
					base.OnPropertyChangedWithValue(value, "HasImage");
				}
			}
		}

		// Token: 0x17000A41 RID: 2625
		// (get) Token: 0x06001DE2 RID: 7650 RVA: 0x0006B0E5 File Offset: 0x000692E5
		// (set) Token: 0x06001DE3 RID: 7651 RVA: 0x0006B0ED File Offset: 0x000692ED
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

		// Token: 0x17000A42 RID: 2626
		// (get) Token: 0x06001DE4 RID: 7652 RVA: 0x0006B10B File Offset: 0x0006930B
		// (set) Token: 0x06001DE5 RID: 7653 RVA: 0x0006B113 File Offset: 0x00069313
		[DataSourceProperty]
		public string Title
		{
			get
			{
				return this._title;
			}
			set
			{
				if (value != this._title)
				{
					this._title = value;
					base.OnPropertyChangedWithValue<string>(value, "Title");
				}
			}
		}

		// Token: 0x17000A43 RID: 2627
		// (get) Token: 0x06001DE6 RID: 7654 RVA: 0x0006B136 File Offset: 0x00069336
		// (set) Token: 0x06001DE7 RID: 7655 RVA: 0x0006B13E File Offset: 0x0006933E
		[DataSourceProperty]
		public string Text
		{
			get
			{
				return this._text;
			}
			set
			{
				if (value != this._text)
				{
					this._text = value;
					base.OnPropertyChangedWithValue<string>(value, "Text");
				}
			}
		}

		// Token: 0x17000A44 RID: 2628
		// (get) Token: 0x06001DE8 RID: 7656 RVA: 0x0006B161 File Offset: 0x00069361
		// (set) Token: 0x06001DE9 RID: 7657 RVA: 0x0006B169 File Offset: 0x00069369
		[DataSourceProperty]
		public string Description
		{
			get
			{
				return this._description;
			}
			set
			{
				if (value != this._description)
				{
					this._description = value;
					base.OnPropertyChangedWithValue<string>(value, "Description");
				}
			}
		}

		// Token: 0x04000E15 RID: 3605
		private bool _hasImage;

		// Token: 0x04000E16 RID: 3606
		private ImageIdentifierVM _imageIdentifier;

		// Token: 0x04000E17 RID: 3607
		private string _title;

		// Token: 0x04000E18 RID: 3608
		private string _text;

		// Token: 0x04000E19 RID: 3609
		private string _description;
	}
}
