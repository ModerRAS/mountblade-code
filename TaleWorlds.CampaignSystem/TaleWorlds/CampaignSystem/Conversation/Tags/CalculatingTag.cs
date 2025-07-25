// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.CalculatingTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class CalculatingTag : ConversationTag
  {
    public const string Id = "CalculatingTag";

    public override string StringId => nameof (CalculatingTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      return character.IsHero && character.HeroObject.GetTraitLevel(DefaultTraits.Calculating) > 0;
    }
  }
}
