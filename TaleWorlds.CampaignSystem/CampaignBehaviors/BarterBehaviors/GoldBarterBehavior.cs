﻿using System;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;

namespace TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors
{
	// Token: 0x020003FA RID: 1018
	public class GoldBarterBehavior : CampaignBehaviorBase
	{
		// Token: 0x06003ECA RID: 16074 RVA: 0x001345FC File Offset: 0x001327FC
		public override void RegisterEvents()
		{
			CampaignEvents.BarterablesRequested.AddNonSerializedListener(this, new Action<BarterData>(this.CheckForBarters));
		}

		// Token: 0x06003ECB RID: 16075 RVA: 0x00134615 File Offset: 0x00132815
		public override void SyncData(IDataStore dataStore)
		{
		}

		// Token: 0x06003ECC RID: 16076 RVA: 0x00134618 File Offset: 0x00132818
		public void CheckForBarters(BarterData args)
		{
			if ((args.OffererHero != null && args.OtherHero != null && args.OffererHero.Clan != args.OtherHero.Clan) || (args.OffererHero == null && args.OffererParty != null) || (args.OtherHero == null && args.OtherParty != null))
			{
				int val = (args.OffererHero != null) ? args.OffererHero.Gold : args.OffererParty.MobileParty.PartyTradeGold;
				int val2 = (args.OtherHero != null) ? args.OtherHero.Gold : args.OtherParty.MobileParty.PartyTradeGold;
				Barterable barterable = new GoldBarterable(args.OffererHero, args.OtherHero, args.OffererParty, args.OtherParty, val);
				args.AddBarterable<GoldBarterGroup>(barterable, false);
				Barterable barterable2 = new GoldBarterable(args.OtherHero, args.OffererHero, args.OtherParty, args.OffererParty, val2);
				args.AddBarterable<GoldBarterGroup>(barterable2, false);
			}
		}
	}
}
