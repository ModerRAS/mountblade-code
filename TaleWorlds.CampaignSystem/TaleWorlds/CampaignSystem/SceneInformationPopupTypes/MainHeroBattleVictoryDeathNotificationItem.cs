// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.MainHeroBattleVictoryDeathNotificationItem
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
  public class MainHeroBattleVictoryDeathNotificationItem : SceneNotificationData
  {
    private const int NumberOfCorpses = 2;
    private const int NumberOfCompanions = 3;
    private readonly CampaignTime _creationCampaignTime;

    public Hero DeadHero { get; }

    public List<CharacterObject> EncounterAllyCharacters { get; }

    public override string SceneID => "scn_cutscene_main_hero_battle_victory_death";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        GameTexts.SetVariable("NAME", this.DeadHero.Name);
        return GameTexts.FindText("str_main_hero_battle_death");
      }
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Equipment equipment1 = this.DeadHero.BattleEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1, true);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.DeadHero, equipment1));
      for (int index = 0; index < 2; ++index)
      {
        CharacterObject randomTroopForCulture = CampaignSceneNotificationHelper.GetRandomTroopForCulture(this.DeadHero.MapFaction.Culture);
        Equipment equipment2 = randomTroopForCulture.FirstBattleEquipment.Clone();
        CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2);
        BodyProperties bodyProperties = randomTroopForCulture.GetBodyProperties(equipment2, MBRandom.RandomInt(100));
        notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) randomTroopForCulture, equipment2, bodyProperties));
      }
      List<CharacterObject> encounterAllyCharacters = this.EncounterAllyCharacters;
      foreach (CharacterObject character in encounterAllyCharacters != null ? encounterAllyCharacters.Take<CharacterObject>(3) : (IEnumerable<CharacterObject>) null)
      {
        if (character.IsHero)
        {
          Equipment equipment3 = character.HeroObject.BattleEquipment.Clone();
          CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment3);
          notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(character.HeroObject, equipment3));
        }
        else
        {
          Equipment equipment4 = character.FirstBattleEquipment.Clone();
          CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment4);
          notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment4));
        }
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public MainHeroBattleVictoryDeathNotificationItem(
      Hero deadHero,
      List<CharacterObject> encounterAllyCharacters)
    {
      this.DeadHero = deadHero;
      this.EncounterAllyCharacters = encounterAllyCharacters;
      this._creationCampaignTime = CampaignTime.Now;
    }
  }
}
