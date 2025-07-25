// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors.GoldBarterBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors
{
  public class GoldBarterBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.BarterablesRequested.AddNonSerializedListener((object) this, new Action<BarterData>(this.CheckForBarters));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void CheckForBarters(BarterData args)
    {
      if ((args.OffererHero == null || args.OtherHero == null || args.OffererHero.Clan == args.OtherHero.Clan) && (args.OffererHero != null || args.OffererParty == null) && (args.OtherHero != null || args.OtherParty == null))
        return;
      int val1 = args.OffererHero != null ? args.OffererHero.Gold : args.OffererParty.MobileParty.PartyTradeGold;
      int val2 = args.OtherHero != null ? args.OtherHero.Gold : args.OtherParty.MobileParty.PartyTradeGold;
      Barterable barterable1 = (Barterable) new GoldBarterable(args.OffererHero, args.OtherHero, args.OffererParty, args.OtherParty, val1);
      args.AddBarterable<GoldBarterGroup>(barterable1);
      Barterable barterable2 = (Barterable) new GoldBarterable(args.OtherHero, args.OffererHero, args.OtherParty, args.OffererParty, val2);
      args.AddBarterable<GoldBarterGroup>(barterable2);
    }
  }
}
