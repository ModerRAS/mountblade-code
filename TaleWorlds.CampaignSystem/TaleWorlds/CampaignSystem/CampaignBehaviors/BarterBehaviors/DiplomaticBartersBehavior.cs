// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors.DiplomaticBartersBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors
{
  public class DiplomaticBartersBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyTickClan));
    }

    private void DailyTickClan(Clan clan)
    {
      bool flag1 = false;
      foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
      {
        if (warPartyComponent.MobileParty.MapEvent != null)
        {
          flag1 = true;
          break;
        }
      }
      MBList<Clan> mbList = Clan.NonBanditFactions.ToMBList<Clan>();
      if (clan == Clan.PlayerClan || (double) clan.TotalStrength <= 0.0 || clan.IsEliminated || clan.IsBanditFaction || clan.IsRebelClan)
        return;
      if (clan.Kingdom == null && (double) MBRandom.RandomFloat < 0.5)
      {
        Clan randomElement = mbList.GetRandomElement<Clan>();
        if (randomElement.Kingdom != null || randomElement == Clan.PlayerClan || !clan.IsAtWarWith((IFaction) randomElement) || clan.IsMinorFaction || randomElement.IsMinorFaction)
          return;
        this.ConsiderPeace(clan, randomElement);
      }
      else if ((double) MBRandom.RandomFloat < 0.20000000298023224 && !clan.IsUnderMercenaryService && clan.Kingdom != null && !clan.IsClanTypeMercenary)
      {
        if ((double) MBRandom.RandomFloat >= 0.10000000149011612)
          return;
        Clan randomElement = mbList.GetRandomElement<Clan>();
        int num = 0;
        while (randomElement.Kingdom == null || clan.Kingdom == randomElement.Kingdom || randomElement.IsEliminated)
        {
          randomElement = mbList.GetRandomElement<Clan>();
          ++num;
          if (num >= 20)
            break;
        }
        if (randomElement.Kingdom == null || clan.Kingdom == randomElement.Kingdom || clan.GetStanceWith((IFaction) randomElement.Kingdom).IsAtConstantWar || flag1 || !randomElement.MapFaction.IsKingdomFaction || randomElement.IsEliminated || randomElement == Clan.PlayerClan || randomElement.MapFaction.Leader == Hero.MainHero || !clan.WarPartyComponents.All<WarPartyComponent>((Func<WarPartyComponent, bool>) (x => x.MobileParty.MapEvent == null)))
          return;
        this.ConsiderDefection(clan, randomElement.MapFaction as Kingdom);
      }
      else if ((double) MBRandom.RandomFloat < (clan.MapFaction.Leader == Hero.MainHero ? 0.20000000298023224 : 0.40000000596046448))
      {
        Kingdom kingdom1 = Kingdom.All[MBRandom.RandomInt(Kingdom.All.Count)];
        int num1 = 0;
        foreach (Kingdom kingdom2 in (List<Kingdom>) Kingdom.All)
        {
          if (kingdom2.Culture == clan.Culture)
            num1 += 10;
          else
            ++num1;
        }
        int num2 = (int) ((double) MBRandom.RandomFloat * (double) num1);
        foreach (Kingdom kingdom3 in (List<Kingdom>) Kingdom.All)
        {
          if (kingdom3.Culture == clan.Culture)
            num2 -= 10;
          else
            --num2;
          if (num2 < 0)
          {
            kingdom1 = kingdom3;
            break;
          }
        }
        if (kingdom1.Leader == Hero.MainHero || kingdom1.IsEliminated || clan.Kingdom != null && !clan.IsUnderMercenaryService || clan.MapFaction == kingdom1 || clan.MapFaction.IsAtWarWith((IFaction) kingdom1) || clan.GetStanceWith((IFaction) kingdom1).IsAtConstantWar || !clan.WarPartyComponents.All<WarPartyComponent>((Func<WarPartyComponent, bool>) (x => x.MobileParty.MapEvent == null)))
          return;
        bool flag2 = true;
        if (!clan.IsMinorFaction)
        {
          foreach (Kingdom other in (List<Kingdom>) Kingdom.All)
          {
            if (other != kingdom1 && clan.IsAtWarWith((IFaction) other) && !other.IsAtWarWith((IFaction) kingdom1) && (double) kingdom1.TotalStrength <= 10.0 * (double) other.TotalStrength)
            {
              flag2 = false;
              break;
            }
          }
        }
        if (!flag2)
          return;
        if (clan.IsMinorFaction)
          this.ConsiderClanJoinAsMercenary(clan, kingdom1);
        else
          this.ConsiderClanJoin(clan, kingdom1);
      }
      else if ((double) MBRandom.RandomFloat < 0.40000000596046448)
      {
        if (clan.Kingdom == null || flag1 || clan.Kingdom.RulingClan == clan || clan == Clan.PlayerClan || !clan.WarPartyComponents.All<WarPartyComponent>((Func<WarPartyComponent, bool>) (x => x.MobileParty.MapEvent == null)))
          return;
        if (clan.IsMinorFaction)
          this.ConsiderClanLeaveAsMercenary(clan);
        else
          this.ConsiderClanLeaveKingdom(clan);
      }
      else
      {
        if ((double) MBRandom.RandomFloat >= 0.699999988079071)
          return;
        Clan randomElement = mbList.GetRandomElement<Clan>();
        IFaction mapFaction = randomElement.MapFaction;
        if (clan.IsMinorFaction || mapFaction.IsMinorFaction && mapFaction != Clan.PlayerClan || clan.Kingdom != null || randomElement == clan || mapFaction.IsEliminated || mapFaction.WarPartyComponents.Count <= 0 || clan.WarPartyComponents.Count <= 0 || clan.IsAtWarWith(mapFaction) || clan == Clan.PlayerClan)
          return;
        this.ConsiderWar(clan, mapFaction);
      }
    }

    private void ConsiderClanLeaveKingdom(Clan clan)
    {
      LeaveKingdomAsClanBarterable asClanBarterable = new LeaveKingdomAsClanBarterable(clan.Leader, (PartyBase) null);
      if (asClanBarterable.GetValueForFaction((IFaction) clan) <= 0)
        return;
      asClanBarterable.Apply();
    }

    private void ConsiderClanLeaveAsMercenary(Clan clan)
    {
      LeaveKingdomAsClanBarterable asClanBarterable = new LeaveKingdomAsClanBarterable(clan.Leader, (PartyBase) null);
      if (asClanBarterable.GetValueForFaction((IFaction) clan) <= 500)
        return;
      asClanBarterable.Apply();
    }

    private void ConsiderClanJoin(Clan clan, Kingdom kingdom)
    {
      JoinKingdomAsClanBarterable asClanBarterable = new JoinKingdomAsClanBarterable(clan.Leader, kingdom);
      if (asClanBarterable.GetValueForFaction((IFaction) clan) + asClanBarterable.GetValueForFaction((IFaction) kingdom) <= 0)
        return;
      Campaign.Current.BarterManager.ExecuteAiBarter((IFaction) clan, (IFaction) kingdom, clan.Leader, kingdom.Leader, (Barterable) asClanBarterable);
    }

    private void ConsiderClanJoinAsMercenary(Clan clan, Kingdom kingdom)
    {
      MercenaryJoinKingdomBarterable kingdomBarterable = new MercenaryJoinKingdomBarterable(clan.Leader, (PartyBase) null, kingdom);
      if (kingdomBarterable.GetValueForFaction((IFaction) clan) + kingdomBarterable.GetValueForFaction((IFaction) kingdom) <= 0)
        return;
      Campaign.Current.BarterManager.ExecuteAiBarter((IFaction) clan, (IFaction) kingdom, clan.Leader, kingdom.Leader, (Barterable) kingdomBarterable);
    }

    private void ConsiderDefection(Clan clan1, Kingdom kingdom)
    {
      JoinKingdomAsClanBarterable asClanBarterable = new JoinKingdomAsClanBarterable(clan1.Leader, kingdom);
      int valueForFaction1 = asClanBarterable.GetValueForFaction((IFaction) clan1);
      int valueForFaction2 = asClanBarterable.GetValueForFaction((IFaction) kingdom);
      int num1 = valueForFaction1 + valueForFaction2;
      int num2 = 0;
      if (valueForFaction1 < 0)
        num2 = -valueForFaction1;
      if (num1 <= 0 || (double) num2 > (double) kingdom.Leader.Gold * 0.5)
        return;
      clan1.Leader.GetRelation(clan1.MapFaction.Leader);
      clan1.Leader.GetRelation(kingdom.Leader);
      Campaign.Current.BarterManager.ExecuteAiBarter((IFaction) clan1, (IFaction) kingdom, clan1.Leader, kingdom.Leader, (Barterable) asClanBarterable);
    }

    private void ConsiderPeace(Clan clan1, Clan clan2)
    {
      PeaceBarterable peaceBarterable = new PeaceBarterable(clan1.Leader, clan1.MapFaction, clan2.MapFaction, CampaignTime.Years(1f));
      if (peaceBarterable.GetValueForFaction((IFaction) clan1) + peaceBarterable.GetValueForFaction((IFaction) clan2) <= 0)
        return;
      Campaign.Current.BarterManager.ExecuteAiBarter((IFaction) clan1, (IFaction) clan2, clan1.Leader, clan2.Leader, (Barterable) peaceBarterable);
    }

    private void ConsiderWar(Clan clan, IFaction otherMapFaction)
    {
      DeclareWarBarterable declareWarBarterable = new DeclareWarBarterable((IFaction) clan, otherMapFaction);
      if (declareWarBarterable.GetValueForFaction((IFaction) clan) <= 1000)
        return;
      declareWarBarterable.Apply();
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
