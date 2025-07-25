// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.VoiceGroupPersonaSoftspokenUpperTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class VoiceGroupPersonaSoftspokenUpperTag : ConversationTag
  {
    public const string Id = "VoiceGroupPersonaSoftspokenUpperTag";

    public override string StringId => nameof (VoiceGroupPersonaSoftspokenUpperTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      return character.GetPersona() == DefaultTraits.PersonaSoftspoken && ConversationTagHelper.UsesHighRegister(character);
    }
  }
}
