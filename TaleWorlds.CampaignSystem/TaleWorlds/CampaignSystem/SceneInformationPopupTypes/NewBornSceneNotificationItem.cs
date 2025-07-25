// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.NewBornSceneNotificationItem
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
  public class NewBornSceneNotificationItem : SceneNotificationData
  {
    private readonly CampaignTime _creationCampaignTime;

    public Hero MaleHero { get; }

    public Hero FemaleHero { get; }

    public override string SceneID => "scn_born_baby";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("FATHER_NAME", this.MaleHero.Name);
        GameTexts.SetVariable("MOTHER_NAME", this.FemaleHero.Name);
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        return GameTexts.FindText("str_baby_born");
      }
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      CharacterObject character = CharacterObject.All.First<CharacterObject>((Func<CharacterObject, bool>) (h => h.StringId == "cutscene_midwife"));
      Equipment equipment1 = this.MaleHero.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1, true);
      Equipment equipment2 = this.FemaleHero.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2, true, true);
      Equipment equipment3 = character.FirstCivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment3);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.MaleHero, equipment1));
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.FemaleHero, equipment2));
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment3));
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public NewBornSceneNotificationItem(Hero maleHero, Hero femaleHero, CampaignTime creationTime)
    {
      this.MaleHero = maleHero;
      this.FemaleHero = femaleHero;
      this._creationCampaignTime = creationTime;
    }
  }
}
