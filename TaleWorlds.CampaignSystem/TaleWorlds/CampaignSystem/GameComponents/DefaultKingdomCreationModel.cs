// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultKingdomCreationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultKingdomCreationModel : KingdomCreationModel
  {
    public override int MinimumClanTierToCreateKingdom => 4;

    public override int MinimumNumberOfSettlementsOwnedToCreateKingdom => 1;

    public override int MinimumTroopCountToCreateKingdom => 100;

    public override int MaximumNumberOfInitialPolicies => 4;

    public override bool IsPlayerKingdomCreationPossible(out List<TextObject> explanations)
    {
      bool flag = true;
      explanations = new List<TextObject>();
      if (Hero.MainHero.MapFaction.IsKingdomFaction)
      {
        flag = false;
        TextObject textObject = new TextObject("{=w5b79MmE}Player clan should be independent.");
        explanations.Add(textObject);
      }
      if (Clan.PlayerClan.Tier < this.MinimumClanTierToCreateKingdom)
      {
        flag = false;
        TextObject textObject = new TextObject("{=j0UDi2AN}Clan tier should be at least {TIER}.");
        textObject.SetTextVariable("TIER", this.MinimumClanTierToCreateKingdom);
        explanations.Add(textObject);
      }
      if (Clan.PlayerClan.Settlements.Count<Settlement>((Func<Settlement, bool>) (t => t.IsTown || t.IsCastle)) < this.MinimumNumberOfSettlementsOwnedToCreateKingdom)
      {
        flag = false;
        TextObject textObject = new TextObject("{=YsGSgaba}Number of towns or castles you own should be at least {SETTLEMENT_COUNT}.");
        textObject.SetTextVariable("SETTLEMENT_COUNT", this.MinimumNumberOfSettlementsOwnedToCreateKingdom);
        explanations.Add(textObject);
      }
      if (Clan.PlayerClan.Fiefs.Sum<Town>((Func<Town, int>) (t => t.GarrisonParty?.MemberRoster?.TotalHealthyCount ?? 0)) + Clan.PlayerClan.WarPartyComponents.Sum<WarPartyComponent>((Func<WarPartyComponent, int>) (t => t.MobileParty.MemberRoster.TotalHealthyCount)) < this.MinimumTroopCountToCreateKingdom)
      {
        flag = false;
        TextObject textObject = new TextObject("{=K2txLdOS}You should have at least {TROOP_COUNT} men ready to fight.");
        textObject.SetTextVariable("TROOP_COUNT", this.MinimumTroopCountToCreateKingdom);
        explanations.Add(textObject);
      }
      return flag;
    }

    public override bool IsPlayerKingdomAbdicationPossible(out List<TextObject> explanations)
    {
      explanations = new List<TextObject>();
      int num = Clan.PlayerClan.Kingdom == null ? 0 : (Clan.PlayerClan.Kingdom.RulingClan == Clan.PlayerClan ? 1 : 0);
      bool flag1 = MobileParty.MainParty.MapEvent != null || MobileParty.MainParty.SiegeEvent != null;
      bool flag2 = num != 0 && !Clan.PlayerClan.Kingdom.UnresolvedDecisions.IsEmpty<KingdomDecision>();
      if (num == 0)
        explanations.Add(new TextObject("{=s1ERZ4ZR}You must be the king"));
      if (flag1)
        explanations.Add(new TextObject("{=uaMmmhRV}You must conclude your current encounter"));
      if (flag2)
        explanations.Add(new TextObject("{=etKrpcHe}You must resolve pending decisions"));
      return num != 0 && !flag1 && !flag2;
    }

    public override IEnumerable<CultureObject> GetAvailablePlayerKingdomCultures()
    {
      List<CultureObject> cultureObjectList = new List<CultureObject>();
      cultureObjectList.Add(Clan.PlayerClan.Culture);
      foreach (Settlement settlement in Clan.PlayerClan.Settlements.Where<Settlement>((Func<Settlement, bool>) (t => t.IsTown || t.IsCastle)))
      {
        if (!cultureObjectList.Contains(settlement.Culture))
          cultureObjectList.Add(settlement.Culture);
      }
      foreach (CultureObject playerKingdomCulture in cultureObjectList)
        yield return playerKingdomCulture;
    }
  }
}
