// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.KingdomCreatedSceneNotificationItem
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
  public class KingdomCreatedSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfKingdomMemberAudience = 5;
    private readonly CampaignTime _creationCampaignTime;

    public Kingdom NewKingdom { get; }

    public override string SceneID => "scn_kingdom_made";

    public override bool PauseActiveState => false;

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("KINGDOM_NAME", this.NewKingdom.Name);
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        GameTexts.SetVariable("LEADER_NAME", this.NewKingdom.Leader.Name);
        return GameTexts.FindText("str_kingdom_created");
      }
    }

    public override TextObject AffirmativeText => GameTexts.FindText("str_ok");

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.NewKingdom.Banner,
        this.NewKingdom.Banner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Hero leader = this.NewKingdom.Leader;
      Equipment equipment1 = leader.BattleEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1, true);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(leader, equipment1));
      foreach (Hero hero in CampaignSceneNotificationHelper.GetMilitaryAudienceForKingdom(this.NewKingdom, false).Take<Hero>(5))
      {
        Equipment equipment2 = hero.CivilianEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2, true);
        notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(hero, equipment2));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public KingdomCreatedSceneNotificationItem(Kingdom newKingdom)
    {
      this.NewKingdom = newKingdom;
      this._creationCampaignTime = CampaignTime.Now;
    }
  }
}
