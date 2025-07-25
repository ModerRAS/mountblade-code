// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.PlayerBesiegingTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class PlayerBesiegingTag : ConversationTag
  {
    public const string Id = "PlayerBesiegingTag";

    public override string StringId => nameof (PlayerBesiegingTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      return Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.SiegeEvent != null && Settlement.CurrentSettlement.SiegeEvent.BesiegerCamp.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.Siege).Any<PartyBase>((Func<PartyBase, bool>) (party => party.MobileParty == Hero.MainHero.PartyBelongedTo));
    }
  }
}
