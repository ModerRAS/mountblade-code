// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.PlayerIsKinTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Linq;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class PlayerIsKinTag : ConversationTag
  {
    public const string Id = "PlayerIsKinTag";

    public override string StringId => nameof (PlayerIsKinTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (!character.IsHero)
        return false;
      return character.HeroObject.Siblings.Contains<Hero>(Hero.MainHero) || character.HeroObject.Mother == Hero.MainHero || character.HeroObject.Father == Hero.MainHero || character.HeroObject.Spouse == Hero.MainHero;
    }
  }
}
