// Decompiled with JetBrains decompiler
// Type: CompanionRecruiter.DialoguePatches
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using HarmonyLib;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

#nullable disable
namespace CompanionRecruiter
{
  public class DialoguePatches
  {
    [HarmonyPrefix]
    [HarmonyPatch("conversation_wanderer_meet_player_on_condition")]
    private static bool MeetCompanionPrefix(ref bool __result)
    {
      __result = CharacterObject.OneToOneConversationCharacter != null && ((BasicCharacterObject) CharacterObject.OneToOneConversationCharacter).IsHero && CharacterObject.OneToOneConversationCharacter.Occupation == 16 && CharacterObject.OneToOneConversationCharacter.HeroObject.HeroState != 3 && Hero.OneToOneConversationHero.Clan == null;
      return false;
    }

    [HarmonyPostfix]
    [HarmonyPatch("conversation_wanderer_preintroduction_on_condition")]
    private static void PreIntroductionPostfix(ref bool __result)
    {
      if (Hero.OneToOneConversationHero.Clan == null || Hero.OneToOneConversationHero.Clan == Clan.PlayerClan)
        return;
      __result = false;
    }

    [HarmonyPostfix]
    [HarmonyPatch("conversation_companion_hire_gold_on_condition")]
    private static void HirePostfix(ref bool __result)
    {
      if (Hero.OneToOneConversationHero.Clan == null || Hero.OneToOneConversationHero.Clan == Clan.PlayerClan)
        return;
      __result = false;
    }
  }
}
