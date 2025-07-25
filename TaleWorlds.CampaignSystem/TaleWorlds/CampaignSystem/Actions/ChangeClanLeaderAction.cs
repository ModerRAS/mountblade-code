// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeClanLeaderAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeClanLeaderAction
  {
    private static void ApplyInternal(Clan clan, Hero newLeader = null)
    {
      Hero leader = clan.Leader;
      if (newLeader == null)
      {
        Dictionary<Hero, int> heirApparents = clan.GetHeirApparents();
        if (heirApparents.Count == 0)
          return;
        int highestPoint = heirApparents.OrderByDescending<KeyValuePair<Hero, int>, int>((Func<KeyValuePair<Hero, int>, int>) (h => h.Value)).FirstOrDefault<KeyValuePair<Hero, int>>().Value;
        newLeader = heirApparents.Where<KeyValuePair<Hero, int>>((Func<KeyValuePair<Hero, int>, bool>) (h => h.Value.Equals(highestPoint))).GetRandomElementInefficiently<KeyValuePair<Hero, int>>().Key;
      }
      GiveGoldAction.ApplyBetweenCharacters(leader, newLeader, leader.Gold, true);
      if (newLeader.GovernorOf != null)
        ChangeGovernorAction.RemoveGovernorOf(newLeader);
      if (!newLeader.IsPrisoner && !newLeader.IsFugitive && !newLeader.IsReleased && !newLeader.IsTraveling)
      {
        MobileParty mobileParty = newLeader.PartyBelongedTo ?? clan.CreateNewMobileParty(newLeader);
        if (mobileParty.LeaderHero != newLeader)
          mobileParty.ChangePartyLeader(newLeader);
      }
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero != newLeader)
        {
          int clanLeaderIsDead = Campaign.Current.Models.DiplomacyModel.GetRelationChangeAfterClanLeaderIsDead(leader, allAliveHero);
          int heroRelation = CharacterRelationManager.GetHeroRelation(newLeader, allAliveHero);
          newLeader.SetPersonalRelation(allAliveHero, heroRelation + clanLeaderIsDead);
        }
      }
      clan.SetLeader(newLeader);
      CampaignEventDispatcher.Instance.OnClanLeaderChanged(leader, newLeader);
    }

    public static void ApplyWithSelectedNewLeader(Clan clan, Hero newLeader)
    {
      ChangeClanLeaderAction.ApplyInternal(clan, newLeader);
    }

    public static void ApplyWithoutSelectedNewLeader(Clan clan)
    {
      ChangeClanLeaderAction.ApplyInternal(clan);
    }
  }
}
