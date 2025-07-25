// Decompiled with JetBrains decompiler
// Type: Helpers.StringHelpers
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Text.RegularExpressions;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class StringHelpers
  {
    public static string SplitCamelCase(string text)
    {
      return Regex.Replace(text, "((?<=\\p{Ll})\\p{Lu})|((?!\\A)\\p{Lu}(?>\\p{Ll}))", " $0");
    }

    public static string CamelCaseToSnakeCase(string camelCaseString)
    {
      string replacement = "_$1$2";
      return new Regex("((?<=.)[A-Z][a-zA-Z]*)|((?<=[a-zA-Z])\\d+)").Replace(camelCaseString, replacement).ToLower();
    }

    public static void SetSettlementProperties(
      string tag,
      Settlement settlement,
      TextObject parent = null,
      bool isRepeatable = false)
    {
      TextObject textObject = new TextObject();
      textObject.SetTextVariable("NAME", settlement.Name);
      textObject.SetTextVariable("LINK", settlement.EncyclopediaLinkWithName);
      if (!isRepeatable)
      {
        if (parent != null)
          parent.SetTextVariable(tag, textObject);
        else
          MBTextManager.SetTextVariable(tag, textObject, false);
      }
      else
        ConversationSentence.SelectedRepeatLine.SetTextVariable(tag, textObject);
    }

    public static void SetRepeatableCharacterProperties(
      string tag,
      CharacterObject character,
      bool includeDetails = false)
    {
      TextObject characterProperties = StringHelpers.GetCharacterProperties(character, includeDetails);
      ConversationSentence.SelectedRepeatLine.SetTextVariable(tag, characterProperties);
    }

    private static TextObject GetCharacterProperties(CharacterObject character, bool includeDetails)
    {
      TextObject characterProperties = new TextObject();
      characterProperties.SetTextVariable("NAME", character.Name);
      characterProperties.SetTextVariable("GENDER", character.IsFemale ? 1 : 0);
      characterProperties.SetTextVariable("LINK", character.EncyclopediaLinkWithName);
      if (character.IsHero)
      {
        if (character.HeroObject.FirstName != null)
          characterProperties.SetTextVariable("FIRSTNAME", character.HeroObject.FirstName);
        else
          characterProperties.SetTextVariable("FIRSTNAME", character.Name);
        if (includeDetails)
        {
          characterProperties.SetTextVariable("AGE", (int) MathF.Round(character.Age, 2));
          if (character.HeroObject.MapFaction != null)
            characterProperties.SetTextVariable("FACTION", character.HeroObject.MapFaction.Name);
          else
            characterProperties.SetTextVariable("FACTION", character.Culture.Name);
          if (character.HeroObject.Clan != null)
            characterProperties.SetTextVariable("CLAN", character.HeroObject.Clan.Name);
          else
            characterProperties.SetTextVariable("CLAN", character.Culture.Name);
        }
      }
      return characterProperties;
    }

    public static TextObject SetCharacterProperties(
      string tag,
      CharacterObject character,
      TextObject parent = null,
      bool includeDetails = false)
    {
      TextObject characterProperties = StringHelpers.GetCharacterProperties(character, includeDetails);
      if (parent != null)
        parent.SetTextVariable(tag, characterProperties);
      else
        MBTextManager.SetTextVariable(tag, characterProperties, false);
      return characterProperties;
    }
  }
}
