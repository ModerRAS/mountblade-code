// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.PlayerIsKnownButNotFamousTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class PlayerIsKnownButNotFamousTag : ConversationTag
  {
    public const string Id = "PlayerIsKnownButNotFamousTag";

    public override string StringId => nameof (PlayerIsKnownButNotFamousTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      int baseRelation = Campaign.Current.Models.DiplomacyModel.GetBaseRelation(Hero.MainHero, Hero.OneToOneConversationHero);
      if (Hero.OneToOneConversationHero.Clan != null && baseRelation == 0)
        baseRelation = Campaign.Current.Models.DiplomacyModel.GetBaseRelation(Hero.MainHero, Hero.OneToOneConversationHero.Clan.Leader);
      return baseRelation != 0 && (double) Clan.PlayerClan.Renown < 50.0 && Campaign.Current.ConversationManager.CurrentConversationIsFirst;
    }
  }
}
