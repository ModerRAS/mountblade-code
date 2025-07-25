// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.DeclareDragonBannerSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class DeclareDragonBannerSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfCharacters = 17;
    private readonly CampaignTime _creationCampaignTime;

    public bool PlayerWantsToRestore { get; }

    public override string SceneID => "scn_cutscene_declare_dragon_banner";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("PLAYER_WANTS_RESTORE", this.PlayerWantsToRestore ? 1 : 0);
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        return GameTexts.FindText("str_declare_dragon_banner");
      }
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      IOrderedEnumerable<Hero> clanHeroesPool = Hero.MainHero.Clan.Heroes.Where<Hero>((Func<Hero, bool>) (h => !h.IsChild && h.IsAlive && h != Hero.MainHero)).OrderBy<Hero, int>((Func<Hero, int>) (h => h.Level));
      for (int index = 0; index < 17; ++index)
      {
        SceneNotificationData.SceneNotificationCharacter characterAtIndex = this.GetCharacterAtIndex(index, clanHeroesPool);
        notificationCharacters.Add(characterAtIndex);
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        Hero.MainHero.ClanBanner
      };
    }

    public DeclareDragonBannerSceneNotificationItem(bool playerWantsToRestore)
    {
      this.PlayerWantsToRestore = playerWantsToRestore;
      this._creationCampaignTime = CampaignTime.Now;
    }

    private SceneNotificationData.SceneNotificationCharacter GetCharacterAtIndex(
      int index,
      IOrderedEnumerable<Hero> clanHeroesPool)
    {
      bool flag = false;
      int index1 = -1;
      string objectName = string.Empty;
      switch (index)
      {
        case 0:
          objectName = "battanian_picked_warrior";
          index1 = 0;
          break;
        case 1:
          objectName = "imperial_infantryman";
          break;
        case 2:
          objectName = "imperial_veteran_infantryman";
          break;
        case 3:
          objectName = "sturgian_warrior";
          index1 = 1;
          break;
        case 4:
          objectName = "imperial_menavliaton";
          break;
        case 5:
          objectName = "sturgian_ulfhednar";
          index1 = 2;
          break;
        case 6:
          objectName = "aserai_recruit";
          break;
        case 7:
          objectName = "aserai_skirmisher";
          break;
        case 8:
          objectName = "aserai_veteran_faris";
          break;
        case 9:
          objectName = "imperial_legionary";
          index1 = 3;
          break;
        case 10:
          objectName = "mountain_bandits_bandit";
          break;
        case 11:
          objectName = "mountain_bandits_chief";
          break;
        case 12:
          objectName = "forest_people_tier_3";
          index1 = 4;
          break;
        case 13:
          objectName = "mountain_bandits_raider";
          break;
        case 14:
          flag = true;
          break;
        case 15:
          objectName = "vlandian_pikeman";
          break;
        case 16:
          objectName = "vlandian_voulgier";
          break;
      }
      uint customColor1 = uint.MaxValue;
      uint customColor2 = uint.MaxValue;
      CharacterObject character;
      if (flag)
      {
        character = CharacterObject.PlayerCharacter;
        customColor1 = Hero.MainHero.MapFaction.Color;
        customColor2 = Hero.MainHero.MapFaction.Color2;
      }
      else if (index1 != -1 && clanHeroesPool.ElementAtOrDefault<Hero>(index1) != null)
      {
        Hero hero = clanHeroesPool.ElementAtOrDefault<Hero>(index1);
        character = hero.CharacterObject;
        customColor1 = hero.MapFaction.Color;
        customColor2 = hero.MapFaction.Color2;
      }
      else
        character = MBObjectManager.Instance.GetObject<CharacterObject>(objectName);
      Equipment equipment = character.FirstBattleEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment, true);
      return new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment, customColor1: customColor1, customColor2: customColor2);
    }
  }
}
