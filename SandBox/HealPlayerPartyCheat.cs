// Decompiled with JetBrains decompiler
// Type: SandBox.HealPlayerPartyCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class HealPlayerPartyCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      if (Mission.Current != null || MobileParty.MainParty.MapEvent != null || MobileParty.MainParty.SiegeEvent != null || Campaign.Current.ConversationManager.OneToOneConversationCharacter != null)
        return;
      for (int index = 0; index < PartyBase.MainParty.MemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = PartyBase.MainParty.MemberRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Character.IsHero)
          elementCopyAtIndex.Character.HeroObject.Heal(elementCopyAtIndex.Character.HeroObject.MaxHitPoints);
        else
          MobileParty.MainParty.Party.AddToMemberRosterElementAtIndex(index, 0, -PartyBase.MainParty.MemberRoster.GetElementWoundedNumber(index));
      }
    }

    public override TextObject GetName() => new TextObject("{=HidEvGr4}Heal Player Party");
  }
}
