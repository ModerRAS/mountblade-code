// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.NonviolentProfessionTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class NonviolentProfessionTag : ConversationTag
  {
    public const string Id = "NonviolentProfessionTag";

    public override string StringId => nameof (NonviolentProfessionTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (!character.IsHero)
        return false;
      return character.Occupation == Occupation.Artisan || character.Occupation == Occupation.Merchant || character.Occupation == Occupation.Headman;
    }
  }
}
