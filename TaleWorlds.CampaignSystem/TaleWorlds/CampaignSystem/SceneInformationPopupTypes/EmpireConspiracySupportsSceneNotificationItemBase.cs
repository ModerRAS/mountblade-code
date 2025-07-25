// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.EmpireConspiracySupportsSceneNotificationItemBase
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public abstract class EmpireConspiracySupportsSceneNotificationItemBase : SceneNotificationData
  {
    public Hero King { get; }

    public override string SceneID => "scn_empire_conspiracy_supports_notification";

    public override TextObject AffirmativeText => GameTexts.FindText("str_ok");

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.King.MapFaction.Banner,
        this.King.MapFaction.Banner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Equipment equipment1 = this.King.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.King, equipment1));
      CharacterObject character = MBObjectManager.Instance.GetObject<CharacterObject>("villager_battania");
      Equipment equipment2 = MBObjectManager.Instance.GetObject<MBEquipmentRoster>("conspirator_cutscene_template").DefaultEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2);
      BodyProperties bodyProperties1 = character.GetBodyProperties(equipment2, MBRandom.RandomInt(100));
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment2, bodyProperties1, customColor1: 0U, customColor2: 0U));
      BodyProperties bodyProperties2 = character.GetBodyProperties(equipment2, MBRandom.RandomInt(100));
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment2, bodyProperties2, customColor1: 0U, customColor2: 0U));
      BodyProperties bodyProperties3 = character.GetBodyProperties(equipment2, MBRandom.RandomInt(100));
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment2, bodyProperties3, customColor1: 0U, customColor2: 0U));
      notificationCharacters.Add(CampaignSceneNotificationHelper.GetBodyguardOfCulture(this.King.MapFaction.Culture));
      notificationCharacters.Add(CampaignSceneNotificationHelper.GetBodyguardOfCulture(this.King.MapFaction.Culture));
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    protected EmpireConspiracySupportsSceneNotificationItemBase(Hero kingHero)
    {
      this.King = kingHero;
    }
  }
}
