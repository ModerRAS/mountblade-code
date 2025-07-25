// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.BecomeKingSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class BecomeKingSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfAudience = 14;
    private const int NumberOfGuards = 2;
    private const int NumberOfCompanions = 4;
    private readonly CampaignTime _creationCampaignTime;

    public Hero NewLeaderHero { get; }

    public override string SceneID => "scn_become_king_notification";

    public override TextObject TitleText
    {
      get
      {
        TextObject text;
        if (this.NewLeaderHero.Clan.Kingdom.Culture.StringId.Equals("empire", StringComparison.InvariantCultureIgnoreCase))
        {
          text = GameTexts.FindText("str_become_king_empire");
        }
        else
        {
          TextObject variable = this.NewLeaderHero.IsFemale ? GameTexts.FindText("str_liege_title_female", this.NewLeaderHero.Clan.Kingdom.Culture.StringId) : GameTexts.FindText("str_liege_title", this.NewLeaderHero.Clan.Kingdom.Culture.StringId);
          text = GameTexts.FindText("str_become_king_nonempire");
          text.SetTextVariable("TITLE_NAME", variable);
        }
        text.SetTextVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        text.SetTextVariable("YEAR", this._creationCampaignTime.GetYear);
        text.SetTextVariable("KING_NAME", this.NewLeaderHero.Name);
        text.SetTextVariable("IS_KING_MALE", this.NewLeaderHero.IsFemale ? 0 : 1);
        return text;
      }
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      Equipment overriddenEquipment = this.NewLeaderHero.CharacterObject.Equipment.Clone(true);
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) this.NewLeaderHero.CharacterObject, overriddenEquipment));
      for (int indexOfAudience = 0; indexOfAudience < 14; ++indexOfAudience)
      {
        CharacterObject character = this.IsAudienceFemale(indexOfAudience) ? this.NewLeaderHero.Clan.Kingdom.Culture.Townswoman : this.NewLeaderHero.Clan.Kingdom.Culture.Townsman;
        Equipment equipment = character.FirstCivilianEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment, true);
        KeyValuePair<int, BannerColor> elementInefficiently = BannerManager.Instance.ReadOnlyColorPalette.GetRandomElementInefficiently<KeyValuePair<int, BannerColor>>();
        uint color1 = elementInefficiently.Value.Color;
        elementInefficiently = BannerManager.Instance.ReadOnlyColorPalette.GetRandomElementInefficiently<KeyValuePair<int, BannerColor>>();
        uint color2 = elementInefficiently.Value.Color;
        notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment, character.GetBodyProperties(equipment, MBRandom.RandomInt(100)), customColor1: color1, customColor2: color2));
      }
      for (int index = 0; index < 2; ++index)
        notificationCharacters.Add(CampaignSceneNotificationHelper.GetBodyguardOfCulture(this.NewLeaderHero.Clan.Kingdom.MapFaction.Culture));
      foreach (Hero hero in CampaignSceneNotificationHelper.GetMilitaryAudienceForHero(this.NewLeaderHero, false).Take<Hero>(4))
      {
        Equipment equipment = hero.CivilianEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment);
        notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(hero, equipment));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.NewLeaderHero.Clan.Kingdom.Banner,
        this.NewLeaderHero.Clan.Kingdom.Banner
      };
    }

    public BecomeKingSceneNotificationItem(Hero newLeaderHero)
    {
      this.NewLeaderHero = newLeaderHero;
      this._creationCampaignTime = CampaignTime.Now;
    }

    private bool IsAudienceFemale(int indexOfAudience)
    {
      switch (indexOfAudience)
      {
        case 2:
        case 5:
        case 11:
        case 12:
        case 13:
          return true;
        default:
          return false;
      }
    }
  }
}
