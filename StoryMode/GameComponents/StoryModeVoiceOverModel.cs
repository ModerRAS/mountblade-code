// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeVoiceOverModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModeObjects;
using StoryMode.StoryModePhases;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeVoiceOverModel : DefaultVoiceOverModel
  {
    private const string Male = "male";
    private const string Female = "female";

    public override string GetSoundPathForCharacter(
      CharacterObject character,
      VoiceObject voiceObject)
    {
      if (voiceObject == null)
        return "";
      if (!TutorialPhase.Instance.IsCompleted && TutorialPhase.Instance.TutorialVillageHeadman.CharacterObject == character)
      {
        string str = voiceObject.VoicePaths.First<string>();
        Debug.Print("[VOICEOVER]Sound path found: " + BasePath.Name + str);
        return str.Replace("$PLATFORM", "PC") + ".ogg";
      }
      if (StoryModeHeroes.ElderBrother.CharacterObject != character)
        return base.GetSoundPathForCharacter(character, voiceObject);
      string pathForCharacter = "";
      string str1 = character.StringId + "_" + (CharacterObject.PlayerCharacter.IsFemale ? "female" : "male");
      foreach (string voicePath in (List<string>) voiceObject.VoicePaths)
      {
        if (voicePath.Contains(str1))
        {
          pathForCharacter = voicePath;
          break;
        }
        if (voicePath.Contains(character.StringId + "_"))
          pathForCharacter = voicePath;
      }
      if (string.IsNullOrEmpty(pathForCharacter))
        return pathForCharacter;
      Debug.Print("[VOICEOVER]Sound path found: " + BasePath.Name + pathForCharacter);
      return pathForCharacter.Replace("$PLATFORM", "PC") + ".ogg";
    }
  }
}
