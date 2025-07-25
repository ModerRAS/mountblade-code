// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.HeroExecutionSceneNotificationData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class HeroExecutionSceneNotificationData : SceneNotificationData
  {
    private readonly Action _onAffirmativeAction;
    protected static int MaxShownRelationChanges = 8;

    public Hero Executer { get; }

    public Hero Victim { get; }

    public override bool IsNegativeOptionShown { get; }

    public override string SceneID => "scn_execution_notification";

    public override TextObject NegativeText => GameTexts.FindText("str_execution_negative_action");

    public override bool IsAffirmativeOptionShown => true;

    public override TextObject TitleText { get; }

    public override TextObject AffirmativeText { get; }

    public override TextObject AffirmativeTitleText { get; }

    public override TextObject AffirmativeHintText { get; }

    public override TextObject AffirmativeHintTextExtended { get; }

    public override TextObject AffirmativeDescriptionText { get; }

    public override SceneNotificationData.RelevantContextType RelevantContext { get; }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      Equipment overridenEquipment1 = this.Victim.BattleEquipment.Clone(true);
      overridenEquipment1.AddEquipmentToSlotWithoutAgent(EquipmentIndex.NumAllWeaponSlots, new EquipmentElement());
      overridenEquipment1.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement());
      overridenEquipment1.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon1, new EquipmentElement());
      overridenEquipment1.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon2, new EquipmentElement());
      overridenEquipment1.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon3, new EquipmentElement());
      overridenEquipment1.AddEquipmentToSlotWithoutAgent(EquipmentIndex.ExtraWeaponSlot, new EquipmentElement());
      ItemObject itemObject = Items.All.FirstOrDefault<ItemObject>((Func<ItemObject, bool>) (i => i.StringId == "execution_axe"));
      Equipment overridenEquipment2 = this.Executer.BattleEquipment.Clone(true);
      overridenEquipment2.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(itemObject));
      overridenEquipment2.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon1, new EquipmentElement());
      overridenEquipment2.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon2, new EquipmentElement());
      overridenEquipment2.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon3, new EquipmentElement());
      overridenEquipment2.AddEquipmentToSlotWithoutAgent(EquipmentIndex.ExtraWeaponSlot, new EquipmentElement());
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) new List<SceneNotificationData.SceneNotificationCharacter>()
      {
        CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.Victim, overridenEquipment1),
        CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.Executer, overridenEquipment2)
      };
    }

    private HeroExecutionSceneNotificationData(
      Hero executingHero,
      Hero dyingHero,
      TextObject titleText,
      TextObject affirmativeTitleText,
      TextObject affirmativeActionText,
      TextObject affirmativeActionDescriptionText,
      TextObject affirmativeActionHintText,
      TextObject affirmativeActionHintExtendedText,
      bool isNegativeOptionShown,
      Action onAffirmativeAction,
      SceneNotificationData.RelevantContextType relevantContextType = SceneNotificationData.RelevantContextType.Any)
    {
      this.Executer = executingHero;
      this.Victim = dyingHero;
      this.TitleText = titleText;
      this.AffirmativeTitleText = affirmativeTitleText;
      this.AffirmativeText = affirmativeActionText;
      this.AffirmativeDescriptionText = affirmativeActionDescriptionText;
      this.AffirmativeHintText = affirmativeActionHintText;
      this.AffirmativeHintTextExtended = affirmativeActionHintExtendedText;
      this.IsNegativeOptionShown = isNegativeOptionShown;
      this.RelevantContext = relevantContextType;
      this._onAffirmativeAction = onAffirmativeAction;
    }

    public override void OnAffirmativeAction()
    {
      if (this._onAffirmativeAction != null)
      {
        this._onAffirmativeAction();
      }
      else
      {
        if (this.Victim == Hero.MainHero)
          return;
        KillCharacterAction.ApplyByExecution(this.Victim, this.Executer, isForced: true);
      }
    }

    public static HeroExecutionSceneNotificationData CreateForPlayerExecutingHero(
      Hero dyingHero,
      Action onAffirmativeAction,
      SceneNotificationData.RelevantContextType relevantContextType = SceneNotificationData.RelevantContextType.Any)
    {
      GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(CampaignTime.Now));
      GameTexts.SetVariable("YEAR", CampaignTime.Now.GetYear);
      GameTexts.SetVariable("NAME", dyingHero.Name);
      TextObject text = GameTexts.FindText("str_execution_positive_action");
      text.SetCharacterProperties("DYING_HERO", dyingHero.CharacterObject);
      return new HeroExecutionSceneNotificationData(Hero.MainHero, dyingHero, GameTexts.FindText("str_executing_prisoner"), GameTexts.FindText("str_executed_prisoner"), text, GameTexts.FindText("str_execute_prisoner_desc"), HeroExecutionSceneNotificationData.GetExecuteTroopHintText(dyingHero, false), HeroExecutionSceneNotificationData.GetExecuteTroopHintText(dyingHero, true), true, onAffirmativeAction, relevantContextType);
    }

    public static HeroExecutionSceneNotificationData CreateForInformingPlayer(
      Hero executingHero,
      Hero dyingHero,
      SceneNotificationData.RelevantContextType relevantContextType = SceneNotificationData.RelevantContextType.Any)
    {
      GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(CampaignTime.Now));
      GameTexts.SetVariable("YEAR", CampaignTime.Now.GetYear);
      GameTexts.SetVariable("NAME", dyingHero.Name);
      TextObject textObject = new TextObject("{=uYjEknNX}{VICTIM.NAME}'s execution by {EXECUTER.NAME}");
      textObject.SetCharacterProperties("VICTIM", dyingHero.CharacterObject);
      textObject.SetCharacterProperties("EXECUTER", executingHero.CharacterObject);
      return new HeroExecutionSceneNotificationData(executingHero, dyingHero, textObject, GameTexts.FindText("str_executed_prisoner"), GameTexts.FindText("str_proceed"), (TextObject) null, (TextObject) null, (TextObject) null, false, (Action) null, relevantContextType);
    }

    private static TextObject GetExecuteTroopHintText(Hero dyingHero, bool showAll)
    {
      Dictionary<Clan, int> source = new Dictionary<Clan, int>();
      GameTexts.SetVariable("LEFT", new TextObject("{=jxypVgl2}Relation Changes"));
      string content1 = GameTexts.FindText("str_LEFT_colon").ToString();
      foreach (Clan key in (List<Clan>) Clan.All)
      {
        foreach (Hero hero in (List<Hero>) key.Heroes)
        {
          if (!hero.IsHumanPlayerCharacter && hero.IsAlive && hero != dyingHero && (!hero.IsLord || hero.Clan.Leader == hero))
          {
            int forExecutingHero = Campaign.Current.Models.ExecutionRelationModel.GetRelationChangeForExecutingHero(dyingHero, hero, out bool _);
            if (forExecutingHero != 0)
            {
              if (source.ContainsKey(key))
              {
                if (forExecutingHero < source[key])
                  source[key] = forExecutingHero;
              }
              else
                source.Add(key, forExecutingHero);
            }
          }
        }
      }
      GameTexts.SetVariable("newline", "\n");
      List<KeyValuePair<Clan, int>> list = source.OrderBy<KeyValuePair<Clan, int>, int>((Func<KeyValuePair<Clan, int>, int>) (change => change.Value)).ToList<KeyValuePair<Clan, int>>();
      int num = 0;
      foreach (KeyValuePair<Clan, int> keyValuePair in list)
      {
        Clan key = keyValuePair.Key;
        int content2 = keyValuePair.Value;
        GameTexts.SetVariable("LEFT", key.Name);
        GameTexts.SetVariable("RIGHT", content2);
        string content3 = GameTexts.FindText("str_LEFT_colon_RIGHT_wSpaceAfterColon").ToString();
        GameTexts.SetVariable("STR1", content1);
        GameTexts.SetVariable("STR2", content3);
        content1 = GameTexts.FindText("str_string_newline_string").ToString();
        ++num;
        if (!showAll && num == HeroExecutionSceneNotificationData.MaxShownRelationChanges)
        {
          TextObject content4 = new TextObject("{=DPTPuyip}And {NUMBER} more...");
          GameTexts.SetVariable("NUMBER", source.Count - num);
          GameTexts.SetVariable("STR1", content1);
          GameTexts.SetVariable("STR2", content4);
          content1 = GameTexts.FindText("str_string_newline_string").ToString();
          TextObject content5 = new TextObject("{=u12ocP9f}Hold '{EXTEND_KEY}' for more info.");
          content5.SetTextVariable("EXTEND_KEY", GameTexts.FindText("str_game_key_text", "anyalt"));
          GameTexts.SetVariable("STR1", content1);
          GameTexts.SetVariable("STR2", content5);
          content1 = GameTexts.FindText("str_string_newline_string").ToString();
          break;
        }
      }
      return new TextObject("{=!}" + content1);
    }
  }
}
