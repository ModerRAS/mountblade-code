// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.RomanticallyInvolvedTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class RomanticallyInvolvedTag : ConversationTag
  {
    public const string Id = "RomanticallyInvolvedTag";

    public override string StringId => nameof (RomanticallyInvolvedTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      return character.IsHero && Romance.GetRomanticLevel(character.HeroObject, CharacterObject.PlayerCharacter.HeroObject) >= Romance.RomanceLevelEnum.CourtshipStarted;
    }
  }
}
