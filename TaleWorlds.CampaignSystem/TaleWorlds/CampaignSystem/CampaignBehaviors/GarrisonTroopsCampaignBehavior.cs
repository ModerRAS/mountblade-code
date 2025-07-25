// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.GarrisonTroopsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class GarrisonTroopsCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUpEvent));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnNewGameCreatedPartialFollowUpEvent(CampaignGameStarter starter, int i)
    {
      List<Settlement> list = Campaign.Current.Settlements.WhereQ<Settlement>((Func<Settlement, bool>) (x => x.IsFortification)).ToList<Settlement>();
      int count = list.Count;
      int num1 = count / 100 + (count % 100 > i ? 1 : 0);
      int num2 = count / 100 * i;
      for (int index = 0; index < i; ++index)
        num2 += count % 100 > index ? 1 : 0;
      for (int index = 0; index < num1; ++index)
        list[num2 + index].AddGarrisonParty(true);
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (!Campaign.Current.GameStarted || mobileParty == null || !mobileParty.IsLordParty || mobileParty.IsDisbanding || mobileParty.LeaderHero == null || !settlement.IsFortification || !FactionManager.IsAlliedWithFaction(mobileParty.MapFaction, settlement.MapFaction) || settlement.OwnerClan == Clan.PlayerClan && !settlement.Town.IsOwnerUnassigned)
        return;
      if (mobileParty.Army != null)
      {
        if (mobileParty.Army.LeaderParty != mobileParty)
          return;
        this.TryLeaveOrTakeTroopsFromGarrisonForArmy(mobileParty);
      }
      else
      {
        if (mobileParty.IsMainParty)
          return;
        (int, int) orTakeDataOfParty = this.GetGarrisonLeaveOrTakeDataOfParty(mobileParty);
        this.ApplyTroopLeaveOrTakeData(mobileParty, orTakeDataOfParty.Item1, orTakeDataOfParty.Item2);
      }
    }

    private void TryLeaveOrTakeTroopsFromGarrisonForArmy(MobileParty mobileParty)
    {
      List<(MobileParty, int, int)> valueTupleList = new List<(MobileParty, int, int)>();
      (int, int) orTakeDataOfParty1 = this.GetGarrisonLeaveOrTakeDataOfParty(mobileParty);
      valueTupleList.Add((mobileParty, orTakeDataOfParty1.Item1, orTakeDataOfParty1.Item2));
      foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.AttachedParties)
      {
        (int, int) orTakeDataOfParty2 = this.GetGarrisonLeaveOrTakeDataOfParty(attachedParty);
        valueTupleList.Add((attachedParty, orTakeDataOfParty2.Item1, orTakeDataOfParty2.Item2));
      }
      foreach ((MobileParty party, int numberOfTroopsToLeave, int numberOfTroopToTake) in valueTupleList)
      {
        if (party != MobileParty.MainParty)
          this.ApplyTroopLeaveOrTakeData(party, numberOfTroopsToLeave, numberOfTroopToTake);
      }
    }

    private (int, int) GetGarrisonLeaveOrTakeDataOfParty(MobileParty mobileParty)
    {
      Settlement currentSettlement = mobileParty.CurrentSettlement;
      int toLeaveToGarrison = Campaign.Current.Models.SettlementGarrisonModel.FindNumberOfTroopsToLeaveToGarrison(mobileParty, currentSettlement);
      int num = 0;
      if (toLeaveToGarrison <= 0 && mobileParty.LeaderHero.Clan == currentSettlement.OwnerClan && !mobileParty.IsWageLimitExceeded())
        num = Campaign.Current.Models.SettlementGarrisonModel.FindNumberOfTroopsToTakeFromGarrison(mobileParty, mobileParty.CurrentSettlement);
      return (toLeaveToGarrison, num);
    }

    private void ApplyTroopLeaveOrTakeData(
      MobileParty party,
      int numberOfTroopsToLeave,
      int numberOfTroopToTake)
    {
      if (numberOfTroopsToLeave > 0)
      {
        LeaveTroopsToSettlementAction.Apply(party, party.CurrentSettlement, numberOfTroopsToLeave, true);
      }
      else
      {
        if (numberOfTroopToTake <= 0)
          return;
        LeaveTroopsToSettlementAction.Apply(party, party.CurrentSettlement, -numberOfTroopToTake, false);
      }
    }
  }
}
