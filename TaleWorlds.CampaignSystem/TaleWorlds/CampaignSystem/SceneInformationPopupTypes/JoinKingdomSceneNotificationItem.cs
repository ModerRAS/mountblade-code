// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.JoinKingdomSceneNotificationItem
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
  public class JoinKingdomSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfKingdomMembers = 5;
    private readonly CampaignTime _creationCampaignTime;

    public Clan NewMemberClan { get; }

    public Kingdom KingdomToUse { get; }

    public override string SceneID => "scn_cutscene_factionjoin";

    public override SceneNotificationData.RelevantContextType RelevantContext
    {
      get => SceneNotificationData.RelevantContextType.Map;
    }

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("CLAN_NAME", this.NewMemberClan.Name);
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        GameTexts.SetVariable("KINGDOM_FORMALNAME", CampaignSceneNotificationHelper.GetFormalNameForKingdom(this.KingdomToUse));
        return GameTexts.FindText("str_new_faction_member");
      }
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.KingdomToUse.Banner,
        this.KingdomToUse.Banner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Hero leader = this.NewMemberClan.Leader;
      Equipment equipment1 = leader.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1, true);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(leader, equipment1));
      foreach (Hero hero in CampaignSceneNotificationHelper.GetMilitaryAudienceForKingdom(this.KingdomToUse).Take<Hero>(5))
      {
        Equipment equipment2 = hero.CivilianEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2, true);
        notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(hero, equipment2));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public JoinKingdomSceneNotificationItem(Clan newMember, Kingdom kingdom)
    {
      this.NewMemberClan = newMember;
      this.KingdomToUse = kingdom;
      this._creationCampaignTime = CampaignTime.Now;
    }
  }
}
