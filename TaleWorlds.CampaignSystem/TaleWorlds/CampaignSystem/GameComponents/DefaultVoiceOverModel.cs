// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultVoiceOverModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using System.Text.RegularExpressions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation.Tags;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultVoiceOverModel : VoiceOverModel
  {
    private const string ImperialHighClass = "imperial_high";
    private const string ImperialLowClass = "imperial_low";
    private const string VlandianClass = "vlandian";
    private const string SturgianClass = "sturgian";
    private const string KhuzaitClass = "khuzait";
    private const string AseraiClass = "aserai";
    private const string BattanianClass = "battanian";
    private const string ForestBanditClass = "forest_bandits";
    private const string SeaBanditClass = "sea_raiders";
    private const string MountainBanditClass = "mountain_bandits";
    private const string DesertBanditClass = "desert_bandits";
    private const string SteppeBanditClass = "steppe_bandits";
    private const string LootersClass = "looters";
    private const string Male = "male";
    private const string Female = "female";
    private const string GenericPersonaId = "generic";

    public override string GetSoundPathForCharacter(
      CharacterObject character,
      VoiceObject voiceObject)
    {
      if (voiceObject == null)
        return "";
      foreach (string voicePath in (List<string>) voiceObject.VoicePaths)
        Debug.Print("[VOICEOVER]Sound path search for: " + voicePath);
      string str1 = "";
      string str2 = character.StringId + "_" + (CharacterObject.PlayerCharacter.IsFemale ? "female" : "male");
      foreach (string voicePath in (List<string>) voiceObject.VoicePaths)
      {
        if (voicePath.Contains(str2))
        {
          str1 = voicePath;
          break;
        }
        if (voicePath.Contains(character.StringId + "_"))
          str1 = voicePath;
      }
      if (string.IsNullOrEmpty(str1))
      {
        string accentClass = this.GetAccentClass(character.Culture, ConversationTagHelper.UsesHighRegister(character));
        Debug.Print("accentClass: " + accentClass);
        string str3 = character.IsFemale ? "female" : "male";
        string stringId = character.GetPersona().StringId;
        List<string> possibleVoicePaths = new List<string>();
        List<string> possibleMatches = new List<string>();
        possibleMatches.Add(".+\\\\" + accentClass + "_" + str3 + "_" + stringId + "_.+");
        possibleMatches.Add(".+\\\\" + accentClass + "_" + str3 + "_generic_.+");
        this.CheckPossibleMatches(voiceObject, possibleMatches, ref possibleVoicePaths);
        if (possibleVoicePaths.IsEmpty<string>())
        {
          possibleMatches.Clear();
          possibleMatches.Add(".+\\\\" + accentClass + "_" + stringId + "_.+");
          possibleMatches.Add(".+\\\\" + accentClass + "_generic_.+");
          possibleMatches.Add(".+\\\\" + str3 + "_" + stringId + "_.+");
          possibleMatches.Add(".+\\\\" + str3 + "_generic_.+");
          this.CheckPossibleMatches(voiceObject, possibleMatches, ref possibleVoicePaths);
          if (possibleVoicePaths.IsEmpty<string>())
          {
            possibleMatches.Clear();
            possibleMatches.Add(".+\\\\" + stringId + "_.+");
            possibleMatches.Add(".+\\\\generic_.+");
            possibleMatches.Add(".+" + accentClass + "_.+");
            this.CheckPossibleMatches(voiceObject, possibleMatches, ref possibleVoicePaths, true, character.IsFemale);
          }
        }
        if (!possibleVoicePaths.IsEmpty<string>())
          str1 = !character.IsHero ? (MobileParty.ConversationParty == null ? possibleVoicePaths.GetRandomElement<string>() : possibleVoicePaths[MobileParty.ConversationParty.RandomInt(possibleVoicePaths.Count)]) : possibleVoicePaths[character.HeroObject.RandomInt(possibleVoicePaths.Count)];
      }
      if (string.IsNullOrEmpty(str1))
        return "";
      Debug.Print("[VOICEOVER]Sound path found: " + BasePath.Name + str1);
      return str1.Replace("$PLATFORM", "PC") + ".ogg";
    }

    private void CheckPossibleMatches(
      VoiceObject voiceObject,
      List<string> possibleMatches,
      ref List<string> possibleVoicePaths,
      bool doubleCheckForGender = false,
      bool isFemale = false)
    {
      foreach (string possibleMatch in possibleMatches)
      {
        Regex regex = new Regex(possibleMatch, RegexOptions.IgnoreCase);
        foreach (string voicePath in (List<string>) voiceObject.VoicePaths)
        {
          if (regex.Match(voicePath).Success && !possibleVoicePaths.Contains(voicePath))
          {
            if (doubleCheckForGender && (voicePath.Contains("_male") || voicePath.Contains("_female")))
            {
              string str = isFemale ? "_female" : "_male";
              if (voicePath.Contains(str))
                possibleVoicePaths.Add(voicePath);
            }
            else
              possibleVoicePaths.Add(voicePath);
          }
        }
      }
    }

    public override string GetAccentClass(CultureObject culture, bool isHighClass)
    {
      if (culture.StringId == "empire")
        return isHighClass ? "imperial_high" : "imperial_low";
      if (culture.StringId == "vlandia")
        return "vlandian";
      if (culture.StringId == "sturgia")
        return "sturgian";
      if (culture.StringId == "khuzait")
        return "khuzait";
      if (culture.StringId == "aserai")
        return "aserai";
      if (culture.StringId == "battania")
        return "battanian";
      if (culture.StringId == "forest_bandits")
        return "forest_bandits";
      if (culture.StringId == "sea_raiders")
        return "sea_raiders";
      if (culture.StringId == "mountain_bandits")
        return "mountain_bandits";
      if (culture.StringId == "desert_bandits")
        return "desert_bandits";
      if (culture.StringId == "steppe_bandits")
        return "steppe_bandits";
      return culture.StringId == "looters" ? "looters" : "";
    }
  }
}
