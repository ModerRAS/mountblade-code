// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.AttackingTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class AttackingTag : ConversationTag
  {
    public const string Id = "AttackingTag";

    public override string StringId => nameof (AttackingTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (HeroHelper.WillLordAttack())
        return true;
      return Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.SiegeEvent != null && Settlement.CurrentSettlement.Parties.Contains(Hero.MainHero.PartyBelongedTo);
    }
  }
}
