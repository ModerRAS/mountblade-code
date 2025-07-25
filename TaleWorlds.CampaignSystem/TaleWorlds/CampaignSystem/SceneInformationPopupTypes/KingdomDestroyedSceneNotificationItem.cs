// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.KingdomDestroyedSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class KingdomDestroyedSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfDeadTroops = 2;
    private readonly CampaignTime _creationCampaignTime;

    public Kingdom DestroyedKingdom { get; }

    public override string SceneID => "scn_cutscene_enemykingdom_destroyed";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        GameTexts.SetVariable("FORMAL_NAME", CampaignSceneNotificationHelper.GetFormalNameForKingdom(this.DestroyedKingdom));
        return GameTexts.FindText("str_kingdom_destroyed_scene_notification");
      }
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.DestroyedKingdom.Banner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      for (int index = 0; index < 2; ++index)
      {
        CharacterObject randomTroopForCulture = CampaignSceneNotificationHelper.GetRandomTroopForCulture(this.DestroyedKingdom.Culture);
        Equipment equipment = randomTroopForCulture.FirstBattleEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment);
        BodyProperties bodyProperties = randomTroopForCulture.GetBodyProperties(equipment, MBRandom.RandomInt(100));
        notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) randomTroopForCulture, equipment, bodyProperties));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public KingdomDestroyedSceneNotificationItem(
      Kingdom destroyedKingdom,
      CampaignTime creationTime)
    {
      this.DestroyedKingdom = destroyedKingdom;
      this._creationCampaignTime = creationTime;
    }
  }
}
