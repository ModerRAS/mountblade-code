// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.AddHeroToPartyAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class AddHeroToPartyAction
  {
    private static void ApplyInternal(Hero hero, MobileParty newParty, bool showNotification = true)
    {
      PartyBase partyBase = hero.PartyBelongedTo != null ? hero.PartyBelongedTo.Party : (hero.CurrentSettlement != null ? hero.CurrentSettlement.Party : (PartyBase) null);
      if (partyBase != null)
      {
        if (partyBase.IsSettlement && partyBase.Settlement.Notables.IndexOf(hero) >= 0)
          hero.StayingInSettlement = (Settlement) null;
        else
          partyBase.MemberRoster.AddToCounts(hero.CharacterObject, -1);
      }
      if (hero.GovernorOf != null)
        ChangeGovernorAction.RemoveGovernorOf(hero);
      newParty.AddElementToMemberRoster(hero.CharacterObject, 1);
      CampaignEventDispatcher.Instance.OnHeroJoinedParty(hero, newParty);
      if (!showNotification || newParty != MobileParty.MainParty || !hero.IsPlayerCompanion)
        return;
      TextObject text = GameTexts.FindText("str_companion_added");
      StringHelpers.SetCharacterProperties("COMPANION", hero.CharacterObject, text);
      MBInformationManager.AddQuickInformation(text);
    }

    public static void Apply(Hero hero, MobileParty party, bool showNotification = true)
    {
      AddHeroToPartyAction.ApplyInternal(hero, party, showNotification);
    }
  }
}
