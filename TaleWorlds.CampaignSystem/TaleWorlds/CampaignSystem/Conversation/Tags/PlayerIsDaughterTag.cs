// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.PlayerIsDaughterTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class PlayerIsDaughterTag : ConversationTag
  {
    public const string Id = "PlayerIsDaughterTag";

    public override string StringId => nameof (PlayerIsDaughterTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (!character.IsHero || !Hero.MainHero.IsFemale)
        return false;
      return Hero.MainHero.Father == character.HeroObject || Hero.MainHero.Mother == character.HeroObject;
    }
  }
}
