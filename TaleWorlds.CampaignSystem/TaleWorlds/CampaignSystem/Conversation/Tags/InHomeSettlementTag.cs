// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.InHomeSettlementTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class InHomeSettlementTag : ConversationTag
  {
    public const string Id = "InHomeSettlementTag";

    public override string StringId => nameof (InHomeSettlementTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (character.IsHero && Settlement.CurrentSettlement != null && character.HeroObject.HomeSettlement == Settlement.CurrentSettlement)
        return true;
      return character.IsHero && Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.OwnerClan.Leader == character.HeroObject;
    }
  }
}
