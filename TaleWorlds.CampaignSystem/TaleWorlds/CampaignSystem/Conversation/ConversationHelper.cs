// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.ConversationHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation
{
  public static class ConversationHelper
  {
    public static CharacterObject AskedLord;
    public static bool ConversationTroopCommentShown;

    public static string HeroRefersToHero(Hero talkTroop, Hero referringTo, bool uppercaseFirst)
    {
      if (talkTroop == null)
        return referringTo.Name.ToString();
      StringHelpers.SetCharacterProperties("REFERING_HERO", referringTo.CharacterObject);
      string id = "";
      if (talkTroop.Father == referringTo)
        id = "str_relation_my_father";
      else if (talkTroop.Mother == referringTo)
        id = "str_relation_my_mother";
      else if ((referringTo.Mother == talkTroop || referringTo.Father == talkTroop) && !referringTo.IsFemale)
        id = "str_relation_my_son";
      else if ((referringTo.Mother == talkTroop || referringTo.Father == talkTroop) && referringTo.IsFemale)
        id = "str_relation_my_daughter";
      else if (talkTroop.Father != null && talkTroop.Father == referringTo.Father && !referringTo.IsFemale)
        id = "str_relation_my_brother";
      else if (talkTroop.Father != null && talkTroop.Father == referringTo.Father && referringTo.IsFemale)
        id = "str_relation_my_sister";
      else if (talkTroop.Spouse == referringTo && referringTo.IsFemale)
        id = "str_relation_my_wife";
      else if (talkTroop.Spouse == referringTo && !referringTo.IsFemale)
        id = "str_relation_my_husband";
      else if (talkTroop.IsPlayerCompanion && Hero.MainHero.IsLord && Hero.MainHero.IsFemale)
        id = "str_player_salutation_my_lady";
      else if (talkTroop.IsPlayerCompanion && Hero.MainHero.IsLord)
        id = "str_player_salutation_my_lord";
      else if (talkTroop.IsPlayerCompanion)
        id = "str_player_salutation_captain";
      else if (talkTroop.Clan != null && !talkTroop.Clan.IsMapFaction && referringTo.Clan != null && !referringTo.Clan.IsMapFaction && talkTroop.Clan == referringTo.Clan && !referringTo.IsFemale)
        id = "str_relation_my_kinsman";
      else if (talkTroop.Clan != null && !talkTroop.Clan.IsMapFaction && referringTo.Clan != null && !referringTo.Clan.IsMapFaction && talkTroop.Clan == referringTo.Clan)
        id = "str_relation_my_kinswoman";
      else if (Hero.OneToOneConversationHero != null && talkTroop.MapFaction == Hero.OneToOneConversationHero.MapFaction && talkTroop.MapFaction.Leader == referringTo)
        id = "str_relation_our_liege";
      else if (referringTo.IsLord && referringTo.IsFemale)
        id = "str_relation_the_lady";
      else if (talkTroop.MapFaction != null && talkTroop.MapFaction == referringTo.MapFaction && talkTroop.IsLord && referringTo.IsLord && talkTroop.IsCommander && referringTo.IsCommander)
        id = "str_relation_my_ally";
      else if (talkTroop.Clan == null || referringTo.Clan == null)
        id = "str_relation_my_friend";
      if (id == "")
        return referringTo.Name.ToString();
      string upper = GameTexts.FindText(id).ToString();
      if (uppercaseFirst)
      {
        char[] charArray = upper.ToCharArray();
        upper = charArray[0].ToString().ToUpper();
        for (int index = 1; index < charArray.Length; ++index)
          upper += charArray[index].ToString();
      }
      return upper;
    }

    public static string GetHeroRelationToHeroTextShort(
      Hero queriedHero,
      Hero baseHero,
      bool uppercaseFirst)
    {
      TextObject to = (TextObject) null;
      if (baseHero.Father == queriedHero)
        to = GameTexts.FindText("str_father");
      else if (baseHero.Mother == queriedHero)
        to = GameTexts.FindText("str_mother");
      else if (baseHero.Siblings.Contains<Hero>(queriedHero))
        to = (double) queriedHero.Age != (double) baseHero.Age ? (!queriedHero.IsFemale ? ((double) queriedHero.Age > (double) baseHero.Age ? GameTexts.FindText("str_bigbrother") : GameTexts.FindText("str_littlebrother")) : ((double) queriedHero.Age > (double) baseHero.Age ? GameTexts.FindText("str_bigsister") : GameTexts.FindText("str_littlesister"))) : (!queriedHero.IsFemale ? GameTexts.FindText("str_twin_male") : GameTexts.FindText("str_twin_female"));
      else if (baseHero.Spouse == queriedHero)
        to = GameTexts.FindText("str_spouse");
      else if (baseHero.Children.Contains(queriedHero))
        to = (double) queriedHero.Age <= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge ? (queriedHero.IsFemale ? GameTexts.FindText("str_female_child") : GameTexts.FindText("str_male_child")) : (queriedHero.IsFemale ? GameTexts.FindText("str_daughter") : GameTexts.FindText("str_son"));
      else if (baseHero.Spouse?.Father == queriedHero)
        to = baseHero.IsFemale ? GameTexts.FindText("str_husband_fatherinlaw") : GameTexts.FindText("str_wife_fatherinlaw");
      else if (baseHero.Spouse?.Mother == queriedHero)
        to = baseHero.IsFemale ? GameTexts.FindText("str_husband_motherinlaw") : GameTexts.FindText("str_wife_motherinlaw");
      else if (queriedHero.ExSpouses.Contains(baseHero))
        to = GameTexts.FindText("str_exspouse");
      else if (queriedHero.CompanionOf == baseHero.Clan)
        to = GameTexts.FindText("str_companion");
      else if (baseHero.ExSpouses.Any<Hero>((Func<Hero, bool>) (exSpouse => exSpouse.Mother == queriedHero)))
        to = baseHero.IsFemale ? GameTexts.FindText("str_ex_husband_motherinlaw") : GameTexts.FindText("str_ex_wife_motherinlaw");
      else if (baseHero.ExSpouses.Any<Hero>((Func<Hero, bool>) (exSpouse => exSpouse.Father == queriedHero)))
        to = baseHero.IsFemale ? GameTexts.FindText("str_ex_husband_fatherinlaw") : GameTexts.FindText("str_ex_wife_fatherinlaw");
      else if (baseHero.ExSpouses.Any<Hero>((Func<Hero, bool>) (exSpouse => exSpouse.Siblings.Contains<Hero>(queriedHero))))
        to = baseHero.IsFemale ? GameTexts.FindText(queriedHero.IsFemale ? "str_ex_husband_sisterinlaw" : "str_ex_husband_brotherinlaw") : GameTexts.FindText(queriedHero.IsFemale ? "str_ex_wife_sisterinlaw" : "str_ex_wife_brotherinlaw");
      else if (baseHero.Spouse != null && baseHero.Spouse.Siblings.Contains<Hero>(queriedHero))
        to = baseHero.IsFemale ? GameTexts.FindText(queriedHero.IsFemale ? "str_husband_sisterinlaw" : "str_husband_brotherinlaw") : GameTexts.FindText(queriedHero.IsFemale ? "str_wife_sisterinlaw" : "str_wife_brotherinlaw");
      else if (baseHero.Children.Any<Hero>((Func<Hero, bool>) (children => children.Spouse == queriedHero)))
        to = queriedHero.IsFemale ? GameTexts.FindText("str_child_spouse_female") : GameTexts.FindText("str_child_spouse_male");
      else if (baseHero.Siblings.Any<Hero>((Func<Hero, bool>) (sibling => sibling.Spouse == queriedHero)))
      {
        to = queriedHero.IsFemale ? GameTexts.FindText("str_sibling_spouse_female") : GameTexts.FindText("str_sibling_spouse_male");
      }
      else
      {
        Hero father = baseHero.Father;
        if ((father != null ? father.Siblings.FirstOrDefault<Hero>((Func<Hero, bool>) (x => x == queriedHero)) : (Hero) null) == null)
        {
          Hero mother = baseHero.Mother;
          if ((mother != null ? mother.Siblings.FirstOrDefault<Hero>((Func<Hero, bool>) (x => x == queriedHero)) : (Hero) null) == null)
          {
            if (baseHero.Siblings.Any<Hero>((Func<Hero, bool>) (x => x.Children.Contains(queriedHero))))
            {
              to = queriedHero.IsFemale ? GameTexts.FindText("str_niece") : GameTexts.FindText("str_nephew");
              goto label_49;
            }
            else if (baseHero.Children.Any<Hero>((Func<Hero, bool>) (x => x.Children.Contains(queriedHero))))
            {
              to = queriedHero.IsFemale ? GameTexts.FindText("str_granddaughter") : GameTexts.FindText("str_grandson");
              goto label_49;
            }
            else
            {
              using (IEnumerator<Hero> enumerator = baseHero.Siblings.GetEnumerator())
              {
                while (enumerator.MoveNext())
                {
                  Hero current = enumerator.Current;
                  if (current.Children.Contains(queriedHero))
                  {
                    to = queriedHero.IsFemale ? GameTexts.FindText("str_niece") : GameTexts.FindText("str_nephew");
                    break;
                  }
                  if (current.Spouse == queriedHero)
                  {
                    to = current.IsFemale ? GameTexts.FindText(queriedHero.IsFemale ? "str_husband_sisterinlaw" : "str_husband_brotherinlaw") : GameTexts.FindText(queriedHero.IsFemale ? "str_wife_sisterinlaw" : "str_wife_brotherinlaw");
                    break;
                  }
                  if (current.ExSpouses.Contains(queriedHero))
                  {
                    to = current.IsFemale ? GameTexts.FindText(queriedHero.IsFemale ? "str_ex_husband_sisterinlaw" : "str_ex_husband_brotherinlaw") : GameTexts.FindText(queriedHero.IsFemale ? "str_ex_wife_sisterinlaw" : "str_ex_wife_brotherinlaw");
                    break;
                  }
                }
                goto label_49;
              }
            }
          }
        }
        to = queriedHero.IsFemale ? GameTexts.FindText("str_aunt") : GameTexts.FindText("str_uncle");
      }
label_49:
      if (to == null)
      {
        Debug.FailedAssert("GENERIC - UNSPECIFIED RELATION in clan", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Conversation\\ConversationHelper.cs", nameof (GetHeroRelationToHeroTextShort), 275);
        to = GameTexts.FindText("str_relative_of_player");
      }
      else if (queriedHero != null)
        to.SetCharacterProperties("NPC", queriedHero.CharacterObject);
      string relationToHeroTextShort = to.ToString();
      if (!char.IsLower(relationToHeroTextShort[0]) != uppercaseFirst)
      {
        char[] charArray = relationToHeroTextShort.ToCharArray();
        relationToHeroTextShort = uppercaseFirst ? charArray[0].ToString().ToUpper() : charArray[0].ToString().ToLower();
        for (int index = 1; index < charArray.Length; ++index)
          relationToHeroTextShort += charArray[index].ToString();
      }
      return relationToHeroTextShort;
    }

    public static CharacterObject GetConversationCharacterPartyLeader(PartyBase party)
    {
      if (party == null)
        return (CharacterObject) null;
      if (party.LeaderHero != null)
        return party.LeaderHero.CharacterObject;
      CharacterObject characterPartyLeader = (CharacterObject) null;
      if (party.MemberRoster.TotalManCount > 0)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.MemberRoster.GetTroopRoster())
        {
          if (characterPartyLeader == null || troopRosterElement.Character.Tier > characterPartyLeader.Tier)
          {
            characterPartyLeader = troopRosterElement.Character;
            if (characterPartyLeader.Tier == Campaign.Current.Models.CharacterStatsModel.MaxCharacterTier)
              break;
          }
        }
      }
      return characterPartyLeader;
    }
  }
}
