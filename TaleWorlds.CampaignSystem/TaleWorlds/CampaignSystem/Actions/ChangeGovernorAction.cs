// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeGovernorAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeGovernorAction
  {
    private static void ApplyInternal(Town fortification, Hero governor)
    {
      Hero governor1 = fortification.Governor;
      if (governor == null)
        fortification.Governor = (Hero) null;
      else if (governor.CurrentSettlement == fortification.Settlement && !governor.IsPrisoner)
      {
        fortification.Governor = governor;
        TeleportHeroAction.ApplyImmediateTeleportToSettlement(governor, fortification.Settlement);
      }
      else
      {
        fortification.Governor = (Hero) null;
        TeleportHeroAction.ApplyDelayedTeleportToSettlementAsGovernor(governor, fortification.Settlement);
      }
      if (governor1 != null)
        governor1.GovernorOf = (Town) null;
      CampaignEventDispatcher.Instance.OnGovernorChanged(fortification, governor1, governor);
      if (governor == null)
        return;
      CampaignEventDispatcher.Instance.OnHeroGetsBusy(governor, HeroGetsBusyReasons.BecomeGovernor);
    }

    private static void ApplyGiveUpInternal(Hero governor)
    {
      Town governorOf = governor.GovernorOf;
      governorOf.Governor = (Hero) null;
      governor.GovernorOf = (Town) null;
      CampaignEventDispatcher.Instance.OnGovernorChanged(governorOf, governor, (Hero) null);
    }

    public static void Apply(Town fortification, Hero governor)
    {
      ChangeGovernorAction.ApplyInternal(fortification, governor);
    }

    public static void RemoveGovernorOf(Hero governor)
    {
      ChangeGovernorAction.ApplyGiveUpInternal(governor);
    }

    public static void RemoveGovernorOfIfExists(Town town)
    {
      if (town.Governor == null)
        return;
      ChangeGovernorAction.ApplyGiveUpInternal(town.Governor);
    }
  }
}
