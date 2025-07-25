// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.OutlawClansCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class OutlawClansCampaignBehavior : CampaignBehaviorBase
  {
    private static void MakeOutlawFactionsEnemyToKingdomFactions()
    {
      foreach (Clan faction2 in (List<Clan>) Clan.All)
      {
        if (faction2.IsMinorFaction && faction2.IsOutlaw)
        {
          foreach (Kingdom faction1 in (List<Kingdom>) Kingdom.All)
          {
            if (faction1.Culture == faction2.Culture)
              FactionManager.DeclareWar((IFaction) faction1, (IFaction) faction2, true);
          }
        }
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
    }

    private void OnNewGameCreated(CampaignGameStarter starter)
    {
      OutlawClansCampaignBehavior.MakeOutlawFactionsEnemyToKingdomFactions();
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
