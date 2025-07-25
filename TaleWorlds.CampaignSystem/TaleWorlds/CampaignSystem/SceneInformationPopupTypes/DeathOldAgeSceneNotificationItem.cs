// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.DeathOldAgeSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class DeathOldAgeSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfAudienceHeroes = 5;
    private readonly CampaignTime _creationCampaignTime;

    public Hero DeadHero { get; }

    public override string SceneID => "scn_cutscene_death_old_age";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        GameTexts.SetVariable("NAME", this.DeadHero.Name);
        return GameTexts.FindText("str_died_of_old_age");
      }
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.DeadHero.ClanBanner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Equipment equipment1 = this.DeadHero.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.DeadHero, equipment1));
      foreach (Hero hero in CampaignSceneNotificationHelper.GetMilitaryAudienceForHero(this.DeadHero).Take<Hero>(5))
      {
        Equipment equipment2 = hero.CivilianEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2);
        notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(hero, equipment2));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public DeathOldAgeSceneNotificationItem(Hero deadHero)
    {
      this.DeadHero = deadHero;
      this._creationCampaignTime = CampaignTime.Now;
    }
  }
}
