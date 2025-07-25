// Decompiled with JetBrains decompiler
// Type: StoryMode.IsStoryModeMentorTag
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModeObjects;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation.Tags;

#nullable disable
namespace StoryMode
{
  public class IsStoryModeMentorTag : ConversationTag
  {
    public const string Id = "IsStoryModeMentorTag";

    public override string StringId => nameof (IsStoryModeMentorTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      return StoryModeHeroes.AntiImperialMentor.CharacterObject == character || StoryModeHeroes.ImperialMentor.CharacterObject == character;
    }
  }
}
