// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.ImpoliteTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class ImpoliteTag : ConversationTag
  {
    public const string Id = "ImpoliteTag";

    public override string StringId => nameof (ImpoliteTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (!character.IsHero)
        return false;
      int heroRelation = CharacterRelationManager.GetHeroRelation(character.HeroObject, Hero.MainHero);
      return (character.HeroObject.IsLord || character.HeroObject.IsMerchant || character.HeroObject.IsGangLeader) && (double) Clan.PlayerClan.Renown < 100.0 && heroRelation < 1 && character.GetTraitLevel(DefaultTraits.Mercy) + character.GetTraitLevel(DefaultTraits.Generosity) < 0;
    }
  }
}
