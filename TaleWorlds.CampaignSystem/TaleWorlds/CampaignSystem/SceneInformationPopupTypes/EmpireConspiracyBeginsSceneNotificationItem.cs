// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.EmpireConspiracyBeginsSceneNotificationItem
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
  public class EmpireConspiracyBeginsSceneNotificationItem : SceneNotificationData
  {
    private const int AudienceNumber = 8;
    private readonly uint[] _audienceColors = new uint[4]
    {
      4278914065U,
      4284308292U,
      4281543757U,
      4282199842U
    };
    private readonly CampaignTime _creationCampaignTime;

    public Hero PlayerHero { get; }

    public Kingdom Empire { get; }

    public bool IsConspiracyAgainstEmpire { get; }

    public override string SceneID => "scn_empire_conspiracy_start_notification";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        return this.IsConspiracyAgainstEmpire ? GameTexts.FindText("str_empire_conspiracy_begins_antiempire") : GameTexts.FindText("str_empire_conspiracy_begins_proempire");
      }
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.Empire.Banner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      for (int audienceMemberIndex = 0; audienceMemberIndex < 8; ++audienceMemberIndex)
      {
        Equipment equipment = MBObjectManager.Instance.GetObject<MBEquipmentRoster>("conspirator_cutscene_template").DefaultEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment);
        CharacterObject fromAudienceIndex = this.GetFacePropertiesFromAudienceIndex(false, audienceMemberIndex);
        BodyProperties bodyProperties = fromAudienceIndex.GetBodyProperties(equipment, MBRandom.RandomInt(100));
        uint audienceColor1 = this._audienceColors[MBRandom.RandomInt(this._audienceColors.Length)];
        uint audienceColor2 = this._audienceColors[MBRandom.RandomInt(this._audienceColors.Length)];
        notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) fromAudienceIndex, equipment, bodyProperties, customColor1: audienceColor1, customColor2: audienceColor2));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public EmpireConspiracyBeginsSceneNotificationItem(
      Hero playerHero,
      Kingdom empire,
      bool isConspiracyAgainstEmpire)
    {
      this.PlayerHero = playerHero;
      this.Empire = empire;
      this.IsConspiracyAgainstEmpire = isConspiracyAgainstEmpire;
      this._creationCampaignTime = CampaignTime.Now;
    }

    private CharacterObject GetFacePropertiesFromAudienceIndex(
      bool playerWantsRestore,
      int audienceMemberIndex)
    {
      if (!playerWantsRestore)
        return MBObjectManager.Instance.GetObject<CharacterObject>("villager_empire");
      string objectName;
      switch (audienceMemberIndex % 8)
      {
        case 0:
          objectName = "villager_battania";
          break;
        case 1:
          objectName = "villager_khuzait";
          break;
        case 2:
          objectName = "villager_vlandia";
          break;
        case 3:
          objectName = "villager_aserai";
          break;
        case 4:
          objectName = "villager_battania";
          break;
        case 5:
          objectName = "villager_sturgia";
          break;
        default:
          objectName = "villager_battania";
          break;
      }
      return MBObjectManager.Instance.GetObject<CharacterObject>(objectName);
    }
  }
}
