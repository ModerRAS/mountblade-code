// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.NewBornFemaleHeroSceneAlternateNotificationItem
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
  public class NewBornFemaleHeroSceneAlternateNotificationItem : SceneNotificationData
  {
    private readonly CampaignTime _creationCampaignTime;

    public Hero MaleHero { get; }

    public Hero FemaleHero { get; }

    public override string SceneID => "scn_born_baby_female_hero2";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        GameTexts.SetVariable("MOTHER_NAME", this.FemaleHero.Name);
        return GameTexts.FindText("str_baby_born_only_mother");
      }
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Equipment equipment1 = this.FemaleHero.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1, true, true);
      CharacterObject character = CharacterObject.All.First<CharacterObject>((Func<CharacterObject, bool>) (h => h.StringId == "cutscene_midwife"));
      Equipment equipment2 = character.FirstCivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2);
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) null));
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.FemaleHero, equipment1));
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment2));
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public NewBornFemaleHeroSceneAlternateNotificationItem(
      Hero maleHero,
      Hero femaleHero,
      CampaignTime creationTime)
    {
      this.MaleHero = maleHero;
      this.FemaleHero = femaleHero;
      this._creationCampaignTime = creationTime;
    }
  }
}
