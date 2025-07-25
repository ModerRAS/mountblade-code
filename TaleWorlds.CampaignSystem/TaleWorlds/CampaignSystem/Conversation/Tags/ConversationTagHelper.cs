// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.ConversationTagHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public static class ConversationTagHelper
  {
    public static bool UsesHighRegister(CharacterObject character)
    {
      return ConversationTagHelper.EducatedClass(character) && !ConversationTagHelper.TribalVoiceGroup(character);
    }

    public static bool UsesLowRegister(CharacterObject character)
    {
      return !ConversationTagHelper.EducatedClass(character) && !ConversationTagHelper.TribalVoiceGroup(character);
    }

    public static bool TribalVoiceGroup(CharacterObject character)
    {
      return character.Culture.StringId == "sturgia" || character.Culture.StringId == "aserai" || character.Culture.StringId == "khuzait" || character.Culture.StringId == "battania" || character.Culture.StringId == "vlandia" || character.Culture.StringId == "nord" || character.Culture.StringId == "vakken";
    }

    public static bool EducatedClass(CharacterObject character)
    {
      bool flag = false;
      if (character.HeroObject != null)
      {
        Clan clan = character.HeroObject.Clan;
        if ((clan != null ? (clan.IsNoble ? 1 : 0) : 0) != 0)
          flag = true;
        if (character.HeroObject.IsMerchant)
          flag = true;
        if (character.HeroObject.GetTraitLevel(DefaultTraits.Siegecraft) >= 5 || character.HeroObject.GetTraitLevel(DefaultTraits.Surgery) >= 5)
          flag = true;
        if (character.HeroObject.IsGangLeader)
          flag = false;
      }
      return flag;
    }

    public static int TraitCompatibility(Hero hero1, Hero hero2, TraitObject trait)
    {
      int traitLevel1 = hero1.GetTraitLevel(trait);
      int traitLevel2 = hero2.GetTraitLevel(trait);
      if (traitLevel1 > 0 && traitLevel2 > 0)
        return 1;
      return traitLevel1 < 0 || traitLevel2 < 0 ? MathF.Abs(traitLevel1 - traitLevel2) * -1 : 0;
    }
  }
}
