// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.DrinkingInTavernTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class DrinkingInTavernTag : ConversationTag
  {
    public const string Id = "DrinkingInTavernTag";

    public override string StringId => nameof (DrinkingInTavernTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (LocationComplex.Current != null && character.IsHero)
      {
        Location locationOfCharacter = LocationComplex.Current.GetLocationOfCharacter(character.HeroObject);
        Location locationWithId = LocationComplex.Current.GetLocationWithId("tavern");
        if (character.HeroObject.IsWanderer && Settlement.CurrentSettlement != null && locationWithId == locationOfCharacter)
          return true;
      }
      else if (character.HeroObject == null && LocationComplex.Current != null && Settlement.CurrentSettlement != null && LocationComplex.Current.GetLocationWithId("tavern") == CampaignMission.Current.Location)
        return true;
      return false;
    }
  }
}
