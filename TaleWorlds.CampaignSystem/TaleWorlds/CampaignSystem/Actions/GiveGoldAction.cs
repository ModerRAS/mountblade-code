// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.GiveGoldAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class GiveGoldAction
  {
    private static void ApplyInternal(
      Hero giverHero,
      PartyBase giverParty,
      Hero recipientHero,
      PartyBase recipientParty,
      int goldAmount,
      bool showQuickInformation,
      string transactionStringId = "")
    {
      if (giverHero != null)
      {
        goldAmount = MathF.Min(giverHero.Gold, goldAmount);
        giverHero.ChangeHeroGold(-goldAmount);
      }
      else if (giverParty != null && giverParty.IsMobile)
      {
        goldAmount = MathF.Min(giverParty.MobileParty.PartyTradeGold, goldAmount);
        giverParty.MobileParty.PartyTradeGold -= goldAmount;
      }
      else if (giverParty != null && giverParty.IsSettlement)
      {
        SettlementComponent settlementComponent = giverParty.Settlement.SettlementComponent;
        goldAmount = MathF.Min(settlementComponent.Gold, goldAmount);
        settlementComponent.ChangeGold(-goldAmount);
      }
      if (recipientHero != null)
        recipientHero.ChangeHeroGold(goldAmount);
      else if (recipientParty != null && recipientParty.IsMobile)
        recipientParty.MobileParty.PartyTradeGold += goldAmount;
      else if (recipientParty != null && recipientParty.IsSettlement)
        recipientParty.Settlement.SettlementComponent.ChangeGold(goldAmount);
      CampaignEventDispatcher.Instance.OnHeroOrPartyTradedGold((giverHero, giverParty), (recipientHero, recipientParty), (goldAmount, transactionStringId), showQuickInformation);
    }

    public static void ApplyForQuestBetweenCharacters(
      Hero giverHero,
      Hero recipientHero,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal(giverHero, (PartyBase) null, recipientHero, (PartyBase) null, amount, !disableNotification && (giverHero == Hero.MainHero || recipientHero == Hero.MainHero));
    }

    public static void ApplyBetweenCharacters(
      Hero giverHero,
      Hero recipientHero,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal(giverHero, (PartyBase) null, recipientHero, (PartyBase) null, amount, !disableNotification && (giverHero == Hero.MainHero || recipientHero == Hero.MainHero));
    }

    public static void ApplyForCharacterToSettlement(
      Hero giverHero,
      Settlement settlement,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal(giverHero, (PartyBase) null, (Hero) null, settlement.Party, amount, !disableNotification && giverHero == Hero.MainHero);
    }

    public static void ApplyForSettlementToCharacter(
      Settlement giverSettlement,
      Hero recipientHero,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal(recipientHero, (PartyBase) null, (Hero) null, giverSettlement.Party, -amount, !disableNotification && recipientHero == Hero.MainHero);
    }

    public static void ApplyForSettlementToParty(
      Settlement giverSettlement,
      PartyBase recipientParty,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal((Hero) null, giverSettlement.Party, (Hero) null, recipientParty, amount, !disableNotification && recipientParty.LeaderHero == Hero.MainHero);
    }

    public static void ApplyForPartyToSettlement(
      PartyBase giverParty,
      Settlement settlement,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal((Hero) null, giverParty, (Hero) null, settlement.Party, amount, !disableNotification && giverParty?.LeaderHero == Hero.MainHero);
    }

    public static void ApplyForPartyToCharacter(
      PartyBase giverParty,
      Hero recipientHero,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal((Hero) null, giverParty, recipientHero, (PartyBase) null, amount, !disableNotification && giverParty != null && (giverParty.LeaderHero == Hero.MainHero || recipientHero == Hero.MainHero));
    }

    public static void ApplyForCharacterToParty(
      Hero giverHero,
      PartyBase receipentParty,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal(giverHero, (PartyBase) null, (Hero) null, receipentParty, amount, !disableNotification && (giverHero == Hero.MainHero || receipentParty.LeaderHero == Hero.MainHero));
    }

    public static void ApplyForPartyToParty(
      PartyBase giverParty,
      PartyBase receipentParty,
      int amount,
      bool disableNotification = false)
    {
      GiveGoldAction.ApplyInternal((Hero) null, giverParty, (Hero) null, receipentParty, amount, !disableNotification && (giverParty.LeaderHero == Hero.MainHero || receipentParty.LeaderHero == Hero.MainHero));
    }
  }
}
