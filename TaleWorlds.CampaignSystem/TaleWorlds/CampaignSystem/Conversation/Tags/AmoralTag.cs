// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.AmoralTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class AmoralTag : ConversationTag
  {
    public const string Id = "AmoralTag";

    public override string StringId => nameof (AmoralTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      return character.GetTraitLevel(DefaultTraits.Honor) + character.GetTraitLevel(DefaultTraits.Mercy) < 0;
    }
  }
}
