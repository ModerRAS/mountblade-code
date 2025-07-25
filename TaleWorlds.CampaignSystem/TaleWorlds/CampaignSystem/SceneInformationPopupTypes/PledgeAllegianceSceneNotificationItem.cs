// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.PledgeAllegianceSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class PledgeAllegianceSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfTroops = 24;
    private readonly CampaignTime _creationCampaignTime;

    public Hero PlayerHero { get; }

    public bool PlayerWantsToRestore { get; }

    public override string SceneID => "scn_pledge_allegiance_notification";

    public override TextObject TitleText
    {
      get
      {
        TextObject text = GameTexts.FindText("str_pledge_notification_title");
        text.SetCharacterProperties("RULER", this.PlayerHero.Clan.Kingdom.Leader.CharacterObject);
        text.SetTextVariable("PLAYER_WANTS_RESTORE", this.PlayerWantsToRestore ? 1 : 0);
        text.SetTextVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        text.SetTextVariable("YEAR", this._creationCampaignTime.GetYear);
        return text;
      }
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        Hero.MainHero.ClanBanner,
        this.PlayerHero.Clan.Kingdom.Leader.Clan?.Kingdom.Banner ?? this.PlayerHero.Clan.Kingdom.Leader.ClanBanner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      ItemObject itemObject = (ItemObject) null;
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Equipment equipment1 = this.PlayerHero.BattleEquipment.Clone();
      if (equipment1[EquipmentIndex.ArmorItemEndSlot].IsEmpty)
      {
        itemObject = CampaignSceneNotificationHelper.GetDefaultHorseItem();
        equipment1[EquipmentIndex.ArmorItemEndSlot] = new EquipmentElement(itemObject);
      }
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1, true);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.PlayerHero, equipment1, useHorse: true));
      Equipment equipment2 = this.PlayerHero.Clan.Kingdom.Leader.BattleEquipment.Clone();
      if (equipment2[EquipmentIndex.ArmorItemEndSlot].IsEmpty)
      {
        if (itemObject == null)
          itemObject = CampaignSceneNotificationHelper.GetDefaultHorseItem();
        equipment2[EquipmentIndex.ArmorItemEndSlot] = new EquipmentElement(itemObject);
      }
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2, true);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.PlayerHero.Clan.Kingdom.Leader, equipment2, useHorse: true));
      CultureObject culture = this.PlayerHero.Clan.Kingdom.Leader.MapFaction?.Culture != null ? this.PlayerHero.Clan.Kingdom.Leader.MapFaction.Culture : this.PlayerHero.MapFaction.Culture;
      for (int index = 0; index < 24; ++index)
      {
        CharacterObject randomTroopForCulture = CampaignSceneNotificationHelper.GetRandomTroopForCulture(culture);
        Equipment equipment3 = randomTroopForCulture.FirstBattleEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment3);
        BodyProperties bodyProperties = randomTroopForCulture.GetBodyProperties(equipment3, MBRandom.RandomInt(100));
        notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) randomTroopForCulture, equipment3, bodyProperties));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public PledgeAllegianceSceneNotificationItem(Hero playerHero, bool playerWantsToRestore)
    {
      this.PlayerHero = playerHero;
      this.PlayerWantsToRestore = playerWantsToRestore;
      this._creationCampaignTime = CampaignTime.Now;
    }
  }
}
