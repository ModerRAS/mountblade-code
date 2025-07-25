// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.HeirSelectionCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class HeirSelectionCampaignBehavior : CampaignBehaviorBase
  {
    private readonly ItemRoster _itemsThatWillBeInherited = new ItemRoster();
    private readonly ItemRoster _equipmentsThatWillBeInherited = new ItemRoster();

    public override void RegisterEvents()
    {
      CampaignEvents.OnBeforeMainCharacterDiedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnBeforeMainCharacterDied));
      CampaignEvents.OnBeforePlayerCharacterChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnBeforePlayerCharacterChanged));
      CampaignEvents.OnPlayerCharacterChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, MobileParty, bool>(this.OnPlayerCharacterChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnBeforePlayerCharacterChanged(Hero oldPlayer, Hero newPlayer)
    {
      foreach (ItemRosterElement itemRosterElement in MobileParty.MainParty.ItemRoster)
        this._itemsThatWillBeInherited.Add(itemRosterElement);
      for (int index = 0; index < 12; ++index)
      {
        if (!oldPlayer.BattleEquipment[index].IsEmpty)
          this._equipmentsThatWillBeInherited.AddToCounts(oldPlayer.BattleEquipment[index], 1);
        if (!oldPlayer.CivilianEquipment[index].IsEmpty)
          this._equipmentsThatWillBeInherited.AddToCounts(oldPlayer.CivilianEquipment[index], 1);
      }
    }

    private void OnPlayerCharacterChanged(
      Hero oldPlayer,
      Hero newPlayer,
      MobileParty newMainParty,
      bool isMainPartyChanged)
    {
      if (isMainPartyChanged)
        newMainParty.ItemRoster.Add((IEnumerable<ItemRosterElement>) this._itemsThatWillBeInherited);
      newMainParty.ItemRoster.Add((IEnumerable<ItemRosterElement>) this._equipmentsThatWillBeInherited);
      this._itemsThatWillBeInherited.Clear();
      this._equipmentsThatWillBeInherited.Clear();
    }

    private void OnBeforeMainCharacterDied(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      Dictionary<Hero, int> heirApparents = Hero.MainHero.Clan.GetHeirApparents();
      if (heirApparents.Count == 0)
      {
        if (PlayerEncounter.Current != null && (PlayerEncounter.Battle == null || !PlayerEncounter.Battle.IsFinalized))
          PlayerEncounter.Finish();
        Dictionary<TroopRosterElement, int> dictionary = new Dictionary<TroopRosterElement, int>();
        foreach (TroopRosterElement key in (List<TroopRosterElement>) MobileParty.MainParty.Party.MemberRoster.GetTroopRoster())
        {
          if (key.Character != CharacterObject.PlayerCharacter)
            dictionary.Add(key, key.Number);
        }
        foreach (KeyValuePair<TroopRosterElement, int> keyValuePair in dictionary)
          MobileParty.MainParty.Party.MemberRoster.RemoveTroop(keyValuePair.Key.Character, keyValuePair.Value);
        Hero.MainHero.AddDeathMark(deathMarkDetail: detail);
        CampaignEventDispatcher.Instance.OnGameOver();
        this.GameOverCleanup();
        this.ShowGameStatistics();
        Campaign.Current.OnGameOver();
      }
      else
      {
        if (Hero.MainHero.IsPrisoner)
          EndCaptivityAction.ApplyByDeath(Hero.MainHero);
        if (PlayerEncounter.Current != null && (PlayerEncounter.Battle == null || !PlayerEncounter.Battle.IsFinalized))
          PlayerEncounter.Finish();
        List<InquiryElement> inquiryElements = new List<InquiryElement>();
        foreach (KeyValuePair<Hero, int> keyValuePair in (IEnumerable<KeyValuePair<Hero, int>>) heirApparents.OrderBy<KeyValuePair<Hero, int>, int>((Func<KeyValuePair<Hero, int>, int>) (x => x.Value)))
        {
          TextObject parent = new TextObject("{=!}{HERO.NAME}");
          StringHelpers.SetCharacterProperties("HERO", keyValuePair.Key.CharacterObject, parent);
          parent.SetTextVariable("POINT", keyValuePair.Value);
          string heroPropertiesHint = HeirSelectionCampaignBehavior.GetHeroPropertiesHint(keyValuePair.Key);
          inquiryElements.Add(new InquiryElement((object) keyValuePair.Key, parent.ToString(), new ImageIdentifier(CharacterCode.CreateFrom((BasicCharacterObject) keyValuePair.Key.CharacterObject)), true, heroPropertiesHint));
        }
        MBInformationManager.ShowMultiSelectionInquiry(new MultiSelectionInquiryData(new TextObject("{=iHYAEEfv}SELECT AN HEIR").ToString(), string.Empty, inquiryElements, false, 1, 1, GameTexts.FindText("str_done").ToString(), string.Empty, new Action<List<InquiryElement>>(HeirSelectionCampaignBehavior.OnHeirSelectionOver), (Action<List<InquiryElement>>) null));
        Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      }
    }

    private static string GetHeroPropertiesHint(Hero hero)
    {
      GameTexts.SetVariable("newline", "\n");
      string content1 = hero.Name.ToString();
      TextObject text = GameTexts.FindText("str_STR1_space_STR2");
      text.SetTextVariable("STR1", GameTexts.FindText("str_enc_sf_age").ToString());
      text.SetTextVariable("STR2", ((int) hero.Age).ToString());
      string content2 = GameTexts.FindText("str_attributes").ToString();
      foreach (CharacterAttribute charAttribute in (List<CharacterAttribute>) Attributes.All)
      {
        GameTexts.SetVariable("LEFT", charAttribute.Name.ToString());
        GameTexts.SetVariable("RIGHT", hero.GetAttributeValue(charAttribute));
        string content3 = GameTexts.FindText("str_LEFT_colon_RIGHT_wSpaceAfterColon").ToString();
        GameTexts.SetVariable("STR1", content2);
        GameTexts.SetVariable("STR2", content3);
        content2 = GameTexts.FindText("str_string_newline_string").ToString();
      }
      int num = 0;
      string content4 = GameTexts.FindText("str_skills").ToString();
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        int skillValue = hero.GetSkillValue(skill);
        if (skillValue > 50)
        {
          GameTexts.SetVariable("LEFT", skill.Name.ToString());
          GameTexts.SetVariable("RIGHT", skillValue);
          string content5 = GameTexts.FindText("str_LEFT_colon_RIGHT_wSpaceAfterColon").ToString();
          GameTexts.SetVariable("STR1", content4);
          GameTexts.SetVariable("STR2", content5);
          content4 = GameTexts.FindText("str_string_newline_string").ToString();
          ++num;
        }
      }
      GameTexts.SetVariable("STR1", content1);
      GameTexts.SetVariable("STR2", text.ToString());
      string content6 = GameTexts.FindText("str_string_newline_string").ToString();
      GameTexts.SetVariable("newline", "\n \n");
      GameTexts.SetVariable("STR1", content6);
      GameTexts.SetVariable("STR2", content2);
      string content7 = GameTexts.FindText("str_string_newline_string").ToString();
      if (num > 0)
      {
        GameTexts.SetVariable("STR1", content7);
        GameTexts.SetVariable("STR2", content4);
        content7 = GameTexts.FindText("str_string_newline_string").ToString();
      }
      GameTexts.SetVariable("newline", "\n");
      return content7;
    }

    private static void OnHeirSelectionOver(List<InquiryElement> element)
    {
      ApplyHeirSelectionAction.ApplyByDeath(element[0].Identifier as Hero);
    }

    private void ShowGameStatistics()
    {
      TextObject textObject1 = new TextObject("{=oxb2FVz5}Clan Destroyed");
      TextObject textObject2 = new TextObject("{=T2GbF6lK}With no suitable heirs, the {CLAN_NAME} clan is no more. Your journey ends here.");
      textObject2.SetTextVariable("CLAN_NAME", Clan.PlayerClan.Name);
      TextObject textObject3 = new TextObject("{=DM6luo3c}Continue");
      InformationManager.ShowInquiry(new InquiryData(textObject1.ToString(), textObject2.ToString(), true, false, textObject3.ToString(), "", (Action) (() => Game.Current.GameStateManager.CleanAndPushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<GameOverState>((object) GameOverState.GameOverReason.ClanDestroyed))), (Action) null), true);
    }

    private void GameOverCleanup()
    {
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, Hero.MainHero.Gold, true);
      Campaign.Current.MainParty.Party.ItemRoster.Clear();
      Campaign.Current.MainParty.Party.MemberRoster.Clear();
      Campaign.Current.MainParty.Party.PrisonRoster.Clear();
      Campaign.Current.MainParty.IsVisible = false;
      Campaign.Current.CameraFollowParty = (PartyBase) null;
      Campaign.Current.MainParty.IsActive = false;
      PartyBase.MainParty.SetVisualAsDirty();
      if (!Hero.MainHero.MapFaction.IsKingdomFaction || Clan.PlayerClan.Kingdom.Leader != Hero.MainHero)
        return;
      DestroyKingdomAction.ApplyByKingdomLeaderDeath(Clan.PlayerClan.Kingdom);
    }
  }
}
