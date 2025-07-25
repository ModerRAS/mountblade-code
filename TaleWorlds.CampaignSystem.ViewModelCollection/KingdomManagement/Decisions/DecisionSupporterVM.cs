using System;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions
{
	// Token: 0x0200006A RID: 106
	public class DecisionSupporterVM : ViewModel
	{
		// Token: 0x06000920 RID: 2336 RVA: 0x00026000 File Offset: 0x00024200
		public DecisionSupporterVM(TextObject name, string imagePath, Clan clan, Supporter.SupportWeights weight)
		{
			this._nameObj = name;
			this._clan = clan;
			this._weight = weight;
			this.SupportWeightImagePath = DecisionSupporterVM.GetSupporterWeightImagePath(weight);
			this.RefreshValues();
			this._hero = Hero.FindFirst((Hero H) => H.Name == name);
			if (this._hero != null)
			{
				this.Visual = new ImageIdentifierVM(CampaignUIHelper.GetCharacterCode(this._hero.CharacterObject, false));
				return;
			}
			this.Visual = new ImageIdentifierVM(ImageIdentifierType.Null);
		}

		// Token: 0x06000921 RID: 2337 RVA: 0x00026096 File Offset: 0x00024296
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.Name = this._nameObj.ToString();
		}

		// Token: 0x06000922 RID: 2338 RVA: 0x000260AF File Offset: 0x000242AF
		private void ExecuteBeginHint()
		{
			if (this._hero != null)
			{
				InformationManager.ShowTooltip(typeof(Hero), new object[]
				{
					this._hero,
					false
				});
			}
		}

		// Token: 0x06000923 RID: 2339 RVA: 0x000260E0 File Offset: 0x000242E0
		private void ExecuteEndHint()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x06000924 RID: 2340 RVA: 0x000260E7 File Offset: 0x000242E7
		internal static string GetSupporterWeightImagePath(Supporter.SupportWeights weight)
		{
			switch (weight)
			{
			case Supporter.SupportWeights.SlightlyFavor:
				return "SPKingdom\\voter_strength1";
			case Supporter.SupportWeights.StronglyFavor:
				return "SPKingdom\\voter_strength2";
			case Supporter.SupportWeights.FullyPush:
				return "SPKingdom\\voter_strength3";
			}
			return string.Empty;
		}

		// Token: 0x170002DB RID: 731
		// (get) Token: 0x06000925 RID: 2341 RVA: 0x0002611C File Offset: 0x0002431C
		// (set) Token: 0x06000926 RID: 2342 RVA: 0x00026124 File Offset: 0x00024324
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

		// Token: 0x170002DC RID: 732
		// (get) Token: 0x06000927 RID: 2343 RVA: 0x00026142 File Offset: 0x00024342
		// (set) Token: 0x06000928 RID: 2344 RVA: 0x0002614A File Offset: 0x0002434A
		[DataSourceProperty]
		public int SupportStrength
		{
			get
			{
				return this._supportStrength;
			}
			set
			{
				if (value != this._supportStrength)
				{
					this._supportStrength = value;
					base.OnPropertyChangedWithValue(value, "SupportStrength");
				}
			}
		}

		// Token: 0x170002DD RID: 733
		// (get) Token: 0x06000929 RID: 2345 RVA: 0x00026168 File Offset: 0x00024368
		// (set) Token: 0x0600092A RID: 2346 RVA: 0x00026170 File Offset: 0x00024370
		[DataSourceProperty]
		public string SupportWeightImagePath
		{
			get
			{
				return this._supportWeightImagePath;
			}
			set
			{
				if (value != this._supportWeightImagePath)
				{
					this._supportWeightImagePath = value;
					base.OnPropertyChangedWithValue<string>(value, "SupportWeightImagePath");
				}
			}
		}

		// Token: 0x170002DE RID: 734
		// (get) Token: 0x0600092B RID: 2347 RVA: 0x00026193 File Offset: 0x00024393
		// (set) Token: 0x0600092C RID: 2348 RVA: 0x0002619B File Offset: 0x0002439B
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
					base.OnPropertyChanged("string");
				}
			}
		}

		// Token: 0x0400041C RID: 1052
		private Supporter.SupportWeights _weight;

		// Token: 0x0400041D RID: 1053
		private Clan _clan;

		// Token: 0x0400041E RID: 1054
		private TextObject _nameObj;

		// Token: 0x0400041F RID: 1055
		private Hero _hero;

		// Token: 0x04000420 RID: 1056
		private ImageIdentifierVM _visual;

		// Token: 0x04000421 RID: 1057
		private string _name;

		// Token: 0x04000422 RID: 1058
		private int _supportStrength;

		// Token: 0x04000423 RID: 1059
		private string _supportWeightImagePath;
	}
}
