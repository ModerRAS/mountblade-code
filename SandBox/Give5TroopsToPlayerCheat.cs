// Decompiled with JetBrains decompiler
// Type: SandBox.Give5TroopsToPlayerCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class Give5TroopsToPlayerCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      Settlement nearestFortification = SettlementHelper.FindNearestFortification();
      if (Mission.Current != null || MobileParty.MainParty.MapEvent != null || MobileParty.MainParty.SiegeEvent != null || Campaign.Current.ConversationManager.OneToOneConversationCharacter != null || nearestFortification == null)
        return;
      CultureObject culture = nearestFortification.Culture;
      Clan elementWithPredicate = Clan.All.GetRandomElementWithPredicate<Clan>((Func<Clan, bool>) (x => x.Culture != null && (culture == null || culture == x.Culture) && !x.IsMinorFaction && !x.IsBanditFaction));
      int maxValue = PartyBase.MainParty.PartySizeLimit - PartyBase.MainParty.NumberOfAllMembers;
      int numberToAdd = MBMath.ClampInt(5, 0, MBMath.ClampInt(maxValue, 0, maxValue));
      if (elementWithPredicate == null || numberToAdd <= 0)
        return;
      CharacterObject baseTroop = elementWithPredicate.Culture.BasicTroop;
      if ((double) MBRandom.RandomFloat < 0.30000001192092896 && elementWithPredicate.Culture.EliteBasicTroop != null)
        baseTroop = elementWithPredicate.Culture.EliteBasicTroop;
      MobileParty.MainParty.AddElementToMemberRoster(CharacterHelper.GetTroopTree(baseTroop, 1f).GetRandomElementInefficiently<CharacterObject>(), numberToAdd);
    }

    public override TextObject GetName() => new TextObject("{=9FMvBKrV}Give 5 Troops");
  }
}
