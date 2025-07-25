// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.HeirComingOfAgeSceneNotificationItem
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
  public class HeirComingOfAgeSceneNotificationItem : SceneNotificationData
  {
    private readonly CampaignTime _creationCampaignTime;

    public Hero MentorHero { get; }

    public Hero HeroCameOfAge { get; }

    public override string SceneID => "scn_cutscene_heir_coming_of_age";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("HERO_NAME", this.HeroCameOfAge.Name);
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        return GameTexts.FindText("str_hero_came_of_age");
      }
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Equipment equipment1 = this.MentorHero.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1, true);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.MentorHero, equipment1));
      Equipment overridenEquipment = MBObjectManager.Instance.GetObject<MBEquipmentRoster>(CampaignSceneNotificationHelper.GetChildStageEquipmentIDFromCulture(this.HeroCameOfAge.Culture)).DefaultEquipment.Clone();
      BodyProperties overriddenBodyProperties1 = new BodyProperties(new DynamicBodyProperties(6f, this.HeroCameOfAge.Weight, this.HeroCameOfAge.Build), this.HeroCameOfAge.StaticBodyProperties);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.HeroCameOfAge, overridenEquipment, overriddenBodyProperties: overriddenBodyProperties1));
      BodyProperties overriddenBodyProperties2 = new BodyProperties(new DynamicBodyProperties(14f, this.HeroCameOfAge.Weight, this.HeroCameOfAge.Build), this.HeroCameOfAge.StaticBodyProperties);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.HeroCameOfAge, overridenEquipment, overriddenBodyProperties: overriddenBodyProperties2));
      Equipment equipment2 = this.HeroCameOfAge.BattleEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2, true);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.HeroCameOfAge, equipment2));
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public HeirComingOfAgeSceneNotificationItem(
      Hero mentorHero,
      Hero heroCameOfAge,
      CampaignTime creationTime)
    {
      this.MentorHero = mentorHero;
      this.HeroCameOfAge = heroCameOfAge;
      this._creationCampaignTime = creationTime;
    }
  }
}
