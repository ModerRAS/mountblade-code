// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.AttractedToPlayerTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class AttractedToPlayerTag : ConversationTag
  {
    public const string Id = "AttractedToPlayerTag";
    private const int MinimumFlirtPercentageForComment = 70;

    public override string StringId => nameof (AttractedToPlayerTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      Hero heroObject = character.HeroObject;
      return heroObject != null && Hero.MainHero.IsFemale != heroObject.IsFemale && !FactionManager.IsAtWarAgainstFaction(heroObject.MapFaction, Hero.MainHero.MapFaction) && Campaign.Current.Models.RomanceModel.GetAttractionValuePercentage(heroObject, Hero.MainHero) > 70 && heroObject.Spouse == null && Hero.MainHero.Spouse == null;
    }
  }
}
