using System;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement
{
	// Token: 0x0200010C RID: 268
	public class ClanPartyMemberItemVM : ViewModel
	{
		// Token: 0x170008E4 RID: 2276
		// (get) Token: 0x060019DF RID: 6623 RVA: 0x0005D898 File Offset: 0x0005BA98
		// (set) Token: 0x060019E0 RID: 6624 RVA: 0x0005D8A0 File Offset: 0x0005BAA0
		public Hero HeroObject { get; private set; }

		// Token: 0x060019E1 RID: 6625 RVA: 0x0005D8AC File Offset: 0x0005BAAC
		public ClanPartyMemberItemVM(Hero hero, MobileParty party)
		{
			this.HeroObject = hero;
			this.IsLeader = (hero == party.LeaderHero);
			CharacterCode characterCode = CampaignUIHelper.GetCharacterCode(hero.CharacterObject, false);
			this.Visual = new ImageIdentifierVM(characterCode);
			this.HeroModel = new HeroViewModel(CharacterViewModel.StanceTypes.None);
			this.HeroModel.FillFrom(this.HeroObject, -1, false, false);
			this.RefreshValues();
		}

		// Token: 0x060019E2 RID: 6626 RVA: 0x0005D914 File Offset: 0x0005BB14
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.Name = this.HeroObject.Name.ToString();
			this.UpdateProperties();
		}

		// Token: 0x060019E3 RID: 6627 RVA: 0x0005D938 File Offset: 0x0005BB38
		private void ExecuteLocationLink(string link)
		{
			Campaign.Current.EncyclopediaManager.GoToLink(link);
		}

		// Token: 0x060019E4 RID: 6628 RVA: 0x0005D94A File Offset: 0x0005BB4A
		public void UpdateProperties()
		{
			this.HeroModel = new HeroViewModel(CharacterViewModel.StanceTypes.None);
			this.HeroModel.FillFrom(this.HeroObject, -1, false, false);
			this.Banner_9 = new ImageIdentifierVM(BannerCode.CreateFrom(this.HeroObject.ClanBanner), true);
		}

		// Token: 0x060019E5 RID: 6629 RVA: 0x0005D988 File Offset: 0x0005BB88
		public void ExecuteLink()
		{
			Campaign.Current.EncyclopediaManager.GoToLink(this.HeroObject.EncyclopediaLink);
		}

		// Token: 0x060019E6 RID: 6630 RVA: 0x0005D9A4 File Offset: 0x0005BBA4
		public virtual void ExecuteBeginHint()
		{
			InformationManager.ShowTooltip(typeof(Hero), new object[]
			{
				this.HeroObject,
				true
			});
		}

		// Token: 0x060019E7 RID: 6631 RVA: 0x0005D9CD File Offset: 0x0005BBCD
		public virtual void ExecuteEndHint()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x060019E8 RID: 6632 RVA: 0x0005D9D4 File Offset: 0x0005BBD4
		public override void OnFinalize()
		{
			base.OnFinalize();
			this.HeroModel.OnFinalize();
		}

		// Token: 0x170008E5 RID: 2277
		// (get) Token: 0x060019E9 RID: 6633 RVA: 0x0005D9E7 File Offset: 0x0005BBE7
		// (set) Token: 0x060019EA RID: 6634 RVA: 0x0005D9EF File Offset: 0x0005BBEF
		[DataSourceProperty]
		public HeroViewModel HeroModel
		{
			get
			{
				return this._heroModel;
			}
			set
			{
				if (value != this._heroModel)
				{
					this._heroModel = value;
					base.OnPropertyChangedWithValue<HeroViewModel>(value, "HeroModel");
				}
			}
		}

		// Token: 0x170008E6 RID: 2278
		// (get) Token: 0x060019EB RID: 6635 RVA: 0x0005DA0D File Offset: 0x0005BC0D
		// (set) Token: 0x060019EC RID: 6636 RVA: 0x0005DA15 File Offset: 0x0005BC15
		[DataSourceProperty]
		public ImageIdentifierVM Visual
		{
			get
			{
				return this._visual;
			}
			set
			{
				if (value != this._visual)
				{
					this._visual = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "Visual");
				}
			}
		}

		// Token: 0x170008E7 RID: 2279
		// (get) Token: 0x060019ED RID: 6637 RVA: 0x0005DA33 File Offset: 0x0005BC33
		// (set) Token: 0x060019EE RID: 6638 RVA: 0x0005DA3B File Offset: 0x0005BC3B
		[DataSourceProperty]
		public ImageIdentifierVM Banner_9
		{
			get
			{
				return this._banner_9;
			}
			set
			{
				if (value != this._banner_9)
				{
					this._banner_9 = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "Banner_9");
				}
			}
		}

		// Token: 0x170008E8 RID: 2280
		// (get) Token: 0x060019EF RID: 6639 RVA: 0x0005DA59 File Offset: 0x0005BC59
		// (set) Token: 0x060019F0 RID: 6640 RVA: 0x0005DA61 File Offset: 0x0005BC61
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
					base.OnPropertyChangedWithValue<string>(value, "Name");
				}
			}
		}

		// Token: 0x170008E9 RID: 2281
		// (get) Token: 0x060019F1 RID: 6641 RVA: 0x0005DA84 File Offset: 0x0005BC84
		// (set) Token: 0x060019F2 RID: 6642 RVA: 0x0005DA8C File Offset: 0x0005BC8C
		[DataSourceProperty]
		public bool IsLeader
		{
			get
			{
				return this._isLeader;
			}
			set
			{
				if (value != this._isLeader)
				{
					this._isLeader = value;
					base.OnPropertyChangedWithValue(value, "IsLeader");
				}
			}
		}

		// Token: 0x04000C3F RID: 3135
		private ImageIdentifierVM _visual;

		// Token: 0x04000C40 RID: 3136
		private ImageIdentifierVM _banner_9;

		// Token: 0x04000C41 RID: 3137
		private string _name;

		// Token: 0x04000C42 RID: 3138
		private bool _isLeader;

		// Token: 0x04000C43 RID: 3139
		private HeroViewModel _heroModel;
	}
}
