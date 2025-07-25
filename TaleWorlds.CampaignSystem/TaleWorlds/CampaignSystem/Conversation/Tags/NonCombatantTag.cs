// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.NonCombatantTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class NonCombatantTag : ConversationTag
  {
    public const string Id = "NonCombatantTag";

    public override string StringId => nameof (NonCombatantTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      return character.IsHero && character.HeroObject.IsNoncombatant;
    }
  }
}
