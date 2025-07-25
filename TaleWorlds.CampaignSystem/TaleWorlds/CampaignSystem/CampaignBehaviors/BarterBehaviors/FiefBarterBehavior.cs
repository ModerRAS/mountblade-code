// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors.FiefBarterBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors
{
  public class FiefBarterBehavior : CampaignBehaviorBase
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
      if (args.OffererHero == null || args.OtherHero == null || !args.OffererHero.GetPerkValue(DefaultPerks.Trade.EverythingHasAPrice))
        return;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (!settlement.IsVillage)
        {
          if (settlement.OwnerClan?.Leader == args.OffererHero && !args.OtherHero.Clan.IsUnderMercenaryService)
          {
            Barterable barterable = (Barterable) new FiefBarterable(settlement, args.OffererHero, args.OtherHero);
            args.AddBarterable<FiefBarterGroup>(barterable);
          }
          else if (settlement.OwnerClan?.Leader == args.OtherHero && !args.OffererHero.Clan.IsUnderMercenaryService)
          {
            Barterable barterable = (Barterable) new FiefBarterable(settlement, args.OtherHero, args.OffererHero);
            args.AddBarterable<FiefBarterGroup>(barterable);
          }
        }
      }
    }
  }
}
