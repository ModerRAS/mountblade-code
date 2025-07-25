using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement.Supporters
{
	// Token: 0x02000112 RID: 274
	public class ClanSupporterItemVM : ViewModel
	{
		// Token: 0x06001A73 RID: 6771 RVA: 0x0005F987 File Offset: 0x0005DB87
		public ClanSupporterItemVM(Hero hero)
		{
			this.Hero = new HeroVM(hero, false);
		}

		// Token: 0x06001A74 RID: 6772 RVA: 0x0005F99C File Offset: 0x0005DB9C
		public void ExecuteOpenTooltip()
		{
			InformationManager.ShowTooltip(typeof(Hero), new object[]
			{
				this.Hero.Hero,
				false
			});
		}

		// Token: 0x06001A75 RID: 6773 RVA: 0x0005F9CA File Offset: 0x0005DBCA
		public void ExecuteCloseTooltip()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x17000917 RID: 2327
		// (get) Token: 0x06001A76 RID: 6774 RVA: 0x0005F9D1 File Offset: 0x0005DBD1
		// (set) Token: 0x06001A77 RID: 6775 RVA: 0x0005F9D9 File Offset: 0x0005DBD9
		[DataSourceProperty]
		public HeroVM Hero
		{
			get
			{
				return this._hero;
			}
			set
			{
				if (value != this._hero)
				{
					this._hero = value;
					base.OnPropertyChangedWithValue<HeroVM>(value, "Hero");
				}
			}
		}

		// Token: 0x04000C81 RID: 3201
		private HeroVM _hero;
	}
}
