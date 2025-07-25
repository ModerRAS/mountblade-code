// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.FriendlyRelationshipTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class FriendlyRelationshipTag : ConversationTag
  {
    public const string Id = "FriendlyRelationshipTag";

    public override string StringId => nameof (FriendlyRelationshipTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (!character.IsHero)
        return false;
      float relationshipWithPlayer = character.HeroObject.GetUnmodifiedClanLeaderRelationshipWithPlayer();
      int num1 = ConversationTagHelper.TraitCompatibility(character.HeroObject, Hero.MainHero, DefaultTraits.Mercy);
      int num2 = ConversationTagHelper.TraitCompatibility(character.HeroObject, Hero.MainHero, DefaultTraits.Honor);
      int num3 = ConversationTagHelper.TraitCompatibility(character.HeroObject, Hero.MainHero, DefaultTraits.Valor);
      int num4 = num2;
      return num1 + num4 + num3 > 0 && (double) relationshipWithPlayer >= 5.0 || (double) relationshipWithPlayer >= 20.0;
    }
  }
}
