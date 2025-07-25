// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SandBoxUIHelper
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection
{
  public static class SandBoxUIHelper
  {
    private static readonly string[] _skillImportanceIndex = new string[18]
    {
      "onehanded",
      "twohanded",
      "polearm",
      "bow",
      "crossbow",
      "throwing",
      "riding",
      "athletics",
      "crafting",
      "scouting",
      "tactics",
      "roguery",
      "charm",
      "leadership",
      "trade",
      "steward",
      "medicine",
      "engineering"
    };
    public static readonly SandBoxUIHelper.IssueQuestFlags[] IssueQuestFlagsValues = (SandBoxUIHelper.IssueQuestFlags[]) Enum.GetValues(typeof (SandBoxUIHelper.IssueQuestFlags));
    private static readonly TextObject _soldStr = new TextObject("{=YgyHVu8S}Sold{ITEMS}");
    private static readonly TextObject _purchasedStr = new TextObject("{=qIeDZoSx}Purchased{ITEMS}");
    private static readonly TextObject _itemTransactionStr = new TextObject("{=CqAhj27p} {ITEM_NAME} x{ITEM_NUMBER}");
    private static readonly TextObject _lootStr = new TextObject("{=nvemmBZz}You earned {AMOUNT}% of the loot and prisoners");

    private static void TooltipAddExplanation(
      List<TooltipProperty> properties,
      ref ExplainedNumber explainedNumber)
    {
      List<(string name, float number)> lines = explainedNumber.GetLines();
      if (lines.Count <= 0)
        return;
      for (int index = 0; index < lines.Count; ++index)
      {
        (string name, float number) tuple = lines[index];
        string name = tuple.name;
        string changeValueString = SandBoxUIHelper.GetChangeValueString(tuple.number);
        properties.Add(new TooltipProperty(name, changeValueString, 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
      }
    }

    public static List<TooltipProperty> GetExplainedNumberTooltip(ref ExplainedNumber explanation)
    {
      List<TooltipProperty> properties = new List<TooltipProperty>();
      SandBoxUIHelper.TooltipAddExplanation(properties, ref explanation);
      return properties;
    }

    public static List<TooltipProperty> GetBattleLootAwardTooltip(float lootPercentage)
    {
      List<TooltipProperty> lootAwardTooltip = new List<TooltipProperty>();
      GameTexts.SetVariable("AMOUNT", lootPercentage);
      lootAwardTooltip.Add(new TooltipProperty(string.Empty, SandBoxUIHelper._lootStr.ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
      return lootAwardTooltip;
    }

    public static string GetSkillEffectText(SkillEffect effect, int skillLevel)
    {
      MBTextManager.SetTextVariable("a0", effect.GetPrimaryValue(skillLevel).ToString("0.0"), false);
      MBTextManager.SetTextVariable("a1", effect.GetSecondaryValue(skillLevel).ToString("0.0"), false);
      string skillEffectText = effect.Description.ToString();
      if (effect.PrimaryRole == SkillEffect.PerkRole.None || (double) effect.PrimaryBonus == 0.0)
        return skillEffectText;
      TextObject text1 = GameTexts.FindText("role", effect.PrimaryRole.ToString());
      if (effect.SecondaryRole == SkillEffect.PerkRole.None || (double) effect.SecondaryBonus == 0.0)
        return string.Format("({0}) {1} ", (object) text1.ToString(), (object) skillEffectText);
      TextObject text2 = GameTexts.FindText("role", effect.SecondaryRole.ToString());
      return string.Format("({0} / {1}) {2} ", (object) text1.ToString(), (object) text2.ToString(), (object) skillEffectText);
    }

    public static string GetRecruitNotificationText(int recruitmentAmount)
    {
      TextObject text = GameTexts.FindText("str_settlement_recruit_notification");
      MBTextManager.SetTextVariable("RECRUIT_AMOUNT", recruitmentAmount);
      MBTextManager.SetTextVariable("ISPLURAL", (object) (recruitmentAmount > 1));
      return text.ToString();
    }

    public static string GetItemSoldNotificationText(
      ItemRosterElement item,
      int itemAmount,
      bool fromHeroToSettlement)
    {
      string text1 = item.EquipmentElement.Item.ItemCategory.GetName().ToString();
      TextObject text2 = GameTexts.FindText("str_settlement_item_sold_notification");
      MBTextManager.SetTextVariable("IS_POSITIVE", (object) !fromHeroToSettlement);
      MBTextManager.SetTextVariable("ITEM_AMOUNT", itemAmount);
      MBTextManager.SetTextVariable("ITEM_TYPE", text1, false);
      return text2.ToString();
    }

    public static string GetTroopGivenToSettlementNotificationText(int givenAmount)
    {
      TextObject text = GameTexts.FindText("str_settlement_given_troop_notification");
      MBTextManager.SetTextVariable("TROOP_AMOUNT", givenAmount);
      MBTextManager.SetTextVariable("ISPLURAL", (object) (givenAmount > 1));
      return text.ToString();
    }

    internal static string GetItemsTradedNotificationText(
      List<(EquipmentElement, int)> items,
      bool isSelling)
    {
      TextObject textObject = !isSelling ? SandBoxUIHelper._purchasedStr : SandBoxUIHelper._soldStr;
      List<IGrouping<ItemCategory, (EquipmentElement, int)>> list = items.GroupBy<(EquipmentElement, int), ItemCategory>((Func<(EquipmentElement, int), ItemCategory>) (i => i.Item1.Item.ItemCategory)).OrderBy<IGrouping<ItemCategory, (EquipmentElement, int)>, int>((Func<IGrouping<ItemCategory, (EquipmentElement, int)>, int>) (i => i.Sum<(EquipmentElement, int)>((Func<(EquipmentElement, int), int>) (e => e.Item2 * e.Item1.Item.Value)))).ToList<IGrouping<ItemCategory, (EquipmentElement, int)>>();
      MBStringBuilder mbStringBuilder = new MBStringBuilder();
      mbStringBuilder.Initialize(callerMemberName: nameof (GetItemsTradedNotificationText));
      int num = MathF.Min(3, list.Count);
      for (int index = 0; index < num; ++index)
      {
        IGrouping<ItemCategory, (EquipmentElement, int)> source = list[index];
        int variable = MathF.Abs(source.Sum<(EquipmentElement, int)>((Func<(EquipmentElement, int), int>) (x => x.Item2)));
        source.Key.GetName().ToString();
        SandBoxUIHelper._itemTransactionStr.SetTextVariable("ITEM_NAME", source.Key.GetName());
        SandBoxUIHelper._itemTransactionStr.SetTextVariable("ITEM_NUMBER", variable);
        mbStringBuilder.Append<string>(SandBoxUIHelper._itemTransactionStr.ToString());
      }
      textObject.SetTextVariable("ITEMS", mbStringBuilder.ToStringAndRelease());
      return textObject.ToString();
    }

    public static List<TooltipProperty> GetSiegeEngineInProgressTooltip(
      SiegeEvent.SiegeEngineConstructionProgress engineInProgress)
    {
      List<TooltipProperty> inProgressTooltip = new List<TooltipProperty>();
      if (engineInProgress?.SiegeEngine != null)
      {
        int num1 = PlayerSiege.PlayerSiegeEvent.GetSiegeEventSide(PlayerSiege.PlayerSide).SiegeEngines.DeployedSiegeEngines.Where<SiegeEvent.SiegeEngineConstructionProgress>((Func<SiegeEvent.SiegeEngineConstructionProgress, bool>) (e => !e.IsActive)).ToList<SiegeEvent.SiegeEngineConstructionProgress>().IndexOf(engineInProgress);
        inProgressTooltip = SandBoxUIHelper.GetSiegeEngineTooltip(engineInProgress.SiegeEngine);
        if (engineInProgress.IsActive)
        {
          int num2 = (int) ((double) engineInProgress.Hitpoints / (double) engineInProgress.MaxHitPoints * 100.0);
          GameTexts.SetVariable("NUMBER", num2.ToString());
          GameTexts.SetVariable("STR1", GameTexts.FindText("str_NUMBER_percent"));
          num2 = (int) engineInProgress.Hitpoints;
          GameTexts.SetVariable("LEFT", num2.ToString());
          GameTexts.SetVariable("RIGHT", ((int) engineInProgress.MaxHitPoints).ToString());
          GameTexts.SetVariable("STR2", GameTexts.FindText("str_LEFT_over_RIGHT_in_paranthesis"));
          inProgressTooltip.Add(new TooltipProperty(GameTexts.FindText("str_hitpoints").ToString(), GameTexts.FindText("str_STR1_space_STR2").ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        }
        else
        {
          GameTexts.SetVariable("NUMBER", MathF.Round((float) ((engineInProgress.IsBeingRedeployed ? (double) engineInProgress.RedeploymentProgress : (double) engineInProgress.Progress) / 1.0 * 100.0)).ToString());
          TextObject textObject = engineInProgress.IsBeingRedeployed ? GameTexts.FindText("str_redeploy") : GameTexts.FindText("str_inprogress");
          inProgressTooltip.Add(new TooltipProperty(textObject.ToString(), GameTexts.FindText("str_NUMBER_percent").ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
          if (num1 == 0)
            inProgressTooltip.Add(new TooltipProperty(GameTexts.FindText("str_currently_building").ToString(), " ", 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
          else if (num1 > 0)
            inProgressTooltip.Add(new TooltipProperty(GameTexts.FindText("str_in_queue").ToString(), num1.ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        }
      }
      return inProgressTooltip;
    }

    public static List<TooltipProperty> GetSiegeEngineTooltip(SiegeEngineType engine)
    {
      List<TooltipProperty> siegeEngineTooltip = new List<TooltipProperty>();
      if (engine != null)
      {
        siegeEngineTooltip.Add(new TooltipProperty("", engine.Name.ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 4096));
        siegeEngineTooltip.Add(new TooltipProperty("", engine.Description.ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 1));
        siegeEngineTooltip.Add(new TooltipProperty(new TextObject("{=Ahy035gM}Build Cost").ToString(), engine.ManDayCost.ToString("F1"), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        float siegeEngineHitPoints = Campaign.Current.Models.SiegeEventModel.GetSiegeEngineHitPoints(PlayerSiege.PlayerSiegeEvent, engine, PlayerSiege.PlayerSide);
        siegeEngineTooltip.Add(new TooltipProperty(new TextObject("{=oBbiVeKE}Hit Points").ToString(), siegeEngineHitPoints.ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        if (engine.Difficulty > 0)
          siegeEngineTooltip.Add(new TooltipProperty(new TextObject("{=raD9MK3O}Difficulty").ToString(), engine.Difficulty.ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        if (engine.ToolCost > 0)
          siegeEngineTooltip.Add(new TooltipProperty(new TextObject("{=lPMYSSAa}Tools Required").ToString(), engine.ToolCost.ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        if (engine.IsRanged)
        {
          siegeEngineTooltip.Add(new TooltipProperty(GameTexts.FindText("str_daily_rate_of_fire").ToString(), engine.CampaignRateOfFirePerDay.ToString("F1"), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
          siegeEngineTooltip.Add(new TooltipProperty(GameTexts.FindText("str_projectile_damage").ToString(), engine.Damage.ToString("F1"), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
          siegeEngineTooltip.Add(new TooltipProperty(" ", " ", 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        }
      }
      return siegeEngineTooltip;
    }

    public static List<TooltipProperty> GetWallSectionTooltip(Settlement settlement, int wallIndex)
    {
      List<TooltipProperty> wallSectionTooltip = new List<TooltipProperty>();
      if (settlement.IsFortification)
      {
        wallSectionTooltip.Add(new TooltipProperty("", GameTexts.FindText("str_wall").ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 4096));
        wallSectionTooltip.Add(new TooltipProperty(" ", " ", 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        float ofOneWallSection = settlement.MaxHitPointsOfOneWallSection;
        float num = settlement.SettlementWallSectionHitPointsRatioList[wallIndex] * ofOneWallSection;
        if ((double) num > 0.0)
        {
          GameTexts.SetVariable("NUMBER", ((int) ((double) num / (double) ofOneWallSection * 100.0)).ToString());
          GameTexts.SetVariable("STR1", GameTexts.FindText("str_NUMBER_percent"));
          GameTexts.SetVariable("LEFT", ((int) num).ToString());
          GameTexts.SetVariable("RIGHT", ((int) ofOneWallSection).ToString());
          GameTexts.SetVariable("STR2", GameTexts.FindText("str_LEFT_over_RIGHT_in_paranthesis"));
          wallSectionTooltip.Add(new TooltipProperty(GameTexts.FindText("str_hitpoints").ToString(), GameTexts.FindText("str_STR1_space_STR2").ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
        }
        else
          wallSectionTooltip.Add(new TooltipProperty(GameTexts.FindText("str_wall_breached").ToString(), " ", 0, false, (TooltipProperty.TooltipPropertyFlags) 0));
      }
      return wallSectionTooltip;
    }

    public static string GetPrisonersSoldNotificationText(int soldPrisonerAmount)
    {
      TextObject text = GameTexts.FindText("str_settlement_prisoner_sold_notification");
      MBTextManager.SetTextVariable("PRISONERS_AMOUNT", soldPrisonerAmount);
      MBTextManager.SetTextVariable("ISPLURAL", (object) (soldPrisonerAmount > 1));
      return text.ToString();
    }

    public static List<(SandBoxUIHelper.IssueQuestFlags, TextObject, TextObject)> GetQuestStateOfHero(
      Hero queriedHero)
    {
      List<(SandBoxUIHelper.IssueQuestFlags, TextObject, TextObject)> questStateOfHero = new List<(SandBoxUIHelper.IssueQuestFlags, TextObject, TextObject)>();
      if (Campaign.Current != null)
      {
        IssueBase relatedIssue;
        Campaign.Current.IssueManager.Issues.TryGetValue(queriedHero, out relatedIssue);
        if (relatedIssue == null)
          relatedIssue = queriedHero.Issue;
        List<QuestBase> questsRelatedToHero = SandBoxUIHelper.GetQuestsRelatedToHero(queriedHero);
        if (questsRelatedToHero.Count > 0)
        {
          for (int index = 0; index < questsRelatedToHero.Count; ++index)
          {
            if (questsRelatedToHero[index].QuestGiver == queriedHero)
              questStateOfHero.Add((questsRelatedToHero[index].IsSpecialQuest ? SandBoxUIHelper.IssueQuestFlags.ActiveStoryQuest : SandBoxUIHelper.IssueQuestFlags.ActiveIssue, questsRelatedToHero[index].Title, questsRelatedToHero[index].JournalEntries.Count > 0 ? questsRelatedToHero[index].JournalEntries[0].LogText : TextObject.Empty));
            else
              questStateOfHero.Add((questsRelatedToHero[index].IsSpecialQuest ? SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest : SandBoxUIHelper.IssueQuestFlags.TrackedIssue, questsRelatedToHero[index].Title, questsRelatedToHero[index].JournalEntries.Count > 0 ? questsRelatedToHero[index].JournalEntries[0].LogText : TextObject.Empty));
          }
        }
        bool flag = questsRelatedToHero != null && relatedIssue?.IssueQuest != null && questsRelatedToHero.Any<QuestBase>((Func<QuestBase, bool>) (q => q == relatedIssue.IssueQuest));
        if (relatedIssue != null && !flag)
        {
          (SandBoxUIHelper.IssueQuestFlags, TextObject, TextObject) valueTuple = (SandBoxUIHelper.GetIssueType(relatedIssue), relatedIssue.Title, relatedIssue.Description);
          questStateOfHero.Add(valueTuple);
        }
      }
      return questStateOfHero;
    }

    public static List<QuestBase> GetQuestsRelatedToHero(Hero hero)
    {
      List<QuestBase> questsRelatedToHero = new List<QuestBase>();
      List<QuestBase> questBaseList;
      Campaign.Current.QuestManager.TrackedObjects.TryGetValue((ITrackableCampaignObject) hero, out questBaseList);
      if (questBaseList != null)
      {
        for (int index = 0; index < questBaseList.Count; ++index)
        {
          if (questBaseList[index].IsTrackEnabled)
            questsRelatedToHero.Add(questBaseList[index]);
        }
      }
      if (hero.Issue?.IssueQuest != null && hero.Issue.IssueQuest.IsTrackEnabled && !hero.Issue.IssueQuest.IsTracked((ITrackableCampaignObject) hero))
        questsRelatedToHero.Add(hero.Issue.IssueQuest);
      return questsRelatedToHero;
    }

    public static List<QuestBase> GetQuestsRelatedToParty(MobileParty party)
    {
      List<QuestBase> second = new List<QuestBase>();
      List<QuestBase> questBaseList;
      Campaign.Current.QuestManager.TrackedObjects.TryGetValue((ITrackableCampaignObject) party, out questBaseList);
      if (questBaseList != null)
      {
        for (int index = 0; index < questBaseList.Count; ++index)
        {
          if (questBaseList[index].IsTrackEnabled)
            second.Add(questBaseList[index]);
        }
      }
      if (party.MemberRoster.TotalHeroes > 0)
      {
        if (party.LeaderHero != null && party.MemberRoster.TotalHeroes == 1)
        {
          List<QuestBase> questsRelatedToHero = SandBoxUIHelper.GetQuestsRelatedToHero(party.LeaderHero);
          if (questsRelatedToHero != null && questsRelatedToHero.Count > 0)
            second.AddRange(questsRelatedToHero.Except<QuestBase>((IEnumerable<QuestBase>) second));
        }
        else
        {
          for (int index = 0; index < party.MemberRoster.Count; ++index)
          {
            Hero heroObject = party.MemberRoster.GetCharacterAtIndex(index)?.HeroObject;
            if (heroObject != null)
            {
              List<QuestBase> questsRelatedToHero = SandBoxUIHelper.GetQuestsRelatedToHero(heroObject);
              if (questsRelatedToHero != null && questsRelatedToHero.Count > 0)
                second.AddRange(questsRelatedToHero.Except<QuestBase>((IEnumerable<QuestBase>) second));
            }
          }
        }
      }
      return second;
    }

    public static List<(bool, QuestBase)> GetQuestsRelatedToSettlement(Settlement settlement)
    {
      List<(bool, QuestBase)> relatedToSettlement = new List<(bool, QuestBase)>();
      foreach (KeyValuePair<ITrackableCampaignObject, List<QuestBase>> trackedObject in Campaign.Current.QuestManager.TrackedObjects)
      {
        Hero key1 = trackedObject.Key as Hero;
        MobileParty key2 = trackedObject.Key as MobileParty;
        if (key1 != null && key1.CurrentSettlement == settlement || key2 != null && key2.CurrentSettlement == settlement)
        {
          for (int index = 0; index < trackedObject.Value.Count; ++index)
          {
            bool flag = trackedObject.Value[index].QuestGiver != null && (trackedObject.Value[index].QuestGiver == key1 || trackedObject.Value[index].QuestGiver == key2?.LeaderHero);
            if (!relatedToSettlement.Contains((flag, trackedObject.Value[index])) && trackedObject.Value[index].IsTrackEnabled)
              relatedToSettlement.Add((flag, trackedObject.Value[index]));
          }
        }
      }
      return relatedToSettlement;
    }

    public static bool IsQuestRelatedToSettlement(QuestBase quest, Settlement settlement)
    {
      if (quest.QuestGiver?.CurrentSettlement == settlement || quest.IsTracked((ITrackableCampaignObject) settlement))
        return true;
      foreach (KeyValuePair<ITrackableCampaignObject, List<QuestBase>> trackedObject in Campaign.Current.QuestManager.TrackedObjects)
      {
        Hero key1 = trackedObject.Key as Hero;
        MobileParty key2 = trackedObject.Key as MobileParty;
        if (key1 != null && key1.CurrentSettlement == settlement || key2 != null && key2.CurrentSettlement == settlement)
        {
          for (int index = 0; index < trackedObject.Value.Count; ++index)
          {
            if (trackedObject.Value[index].IsTrackEnabled && trackedObject.Value[index] == quest)
              return true;
          }
        }
      }
      return false;
    }

    public static SandBoxUIHelper.IssueQuestFlags GetIssueType(IssueBase issue)
    {
      return issue.IsSolvingWithAlternative || issue.IsSolvingWithLordSolution || issue.IsSolvingWithQuest ? SandBoxUIHelper.IssueQuestFlags.ActiveIssue : SandBoxUIHelper.IssueQuestFlags.AvailableIssue;
    }

    public static int GetPartyHealthyCount(MobileParty party)
    {
      int ofHealthyMembers = party.Party.NumberOfHealthyMembers;
      if (party.Army != null && party.Army.LeaderParty == party)
      {
        foreach (MobileParty attachedParty in (List<MobileParty>) party.Army.LeaderParty.AttachedParties)
          ofHealthyMembers += attachedParty.Party.NumberOfHealthyMembers;
      }
      return ofHealthyMembers;
    }

    public static string GetPartyWoundedText(int woundedAmount)
    {
      TextObject textObject = new TextObject("{=O9nwLrYp}+{WOUNDEDAMOUNT}w");
      textObject.SetTextVariable("WOUNDEDAMOUNT", woundedAmount);
      return textObject.ToString();
    }

    public static string GetPartyPrisonerText(int prisonerAmount)
    {
      TextObject textObject = new TextObject("{=CiIWjF3f}+{PRISONERAMOUNT}p");
      textObject.SetTextVariable("PRISONERAMOUNT", prisonerAmount);
      return textObject.ToString();
    }

    public static int GetAllWoundedMembersAmount(MobileParty party)
    {
      int woundedTotalMembers = party.Party.NumberOfWoundedTotalMembers;
      if (party.Army != null && party.Army.LeaderParty == party)
        woundedTotalMembers += party.Army.LeaderParty.AttachedParties.Sum<MobileParty>((Func<MobileParty, int>) (p => p.Party.NumberOfWoundedTotalMembers));
      return woundedTotalMembers;
    }

    public static int GetAllPrisonerMembersAmount(MobileParty party)
    {
      int numberOfPrisoners = party.Party.NumberOfPrisoners;
      if (party.Army != null && party.Army.LeaderParty == party)
        numberOfPrisoners += party.Army.LeaderParty.AttachedParties.Sum<MobileParty>((Func<MobileParty, int>) (p => p.Party.NumberOfPrisoners));
      return numberOfPrisoners;
    }

    public static CharacterCode GetCharacterCode(CharacterObject character, bool useCivilian = false)
    {
      if (character.IsHero && SandBoxUIHelper.IsHeroInformationHidden(character.HeroObject, out TextObject _))
        return CharacterCode.CreateEmpty();
      if (!character.IsHero || !character.HeroObject.IsLord)
        return CharacterCode.CreateFrom((BasicCharacterObject) character);
      string[] strArray = CharacterCode.CreateFrom((BasicCharacterObject) character).Code.Split(new string[1]
      {
        "@---@"
      }, StringSplitOptions.RemoveEmptyEntries);
      Equipment equipment = !useCivilian || character.FirstCivilianEquipment == null ? character.Equipment.Clone() : character.FirstCivilianEquipment.Clone();
      equipment[EquipmentIndex.NumAllWeaponSlots] = new EquipmentElement((ItemObject) null);
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
      {
        ItemObject itemObject = equipment[equipmentIndex].Item;
        int num;
        if (itemObject == null)
        {
          num = 0;
        }
        else
        {
          bool? isShield = itemObject.WeaponComponent?.PrimaryWeapon?.IsShield;
          bool flag = true;
          num = isShield.GetValueOrDefault() == flag & isShield.HasValue ? 1 : 0;
        }
        if (num != 0)
          equipment.AddEquipmentToSlotWithoutAgent(equipmentIndex, new EquipmentElement());
      }
      strArray[0] = equipment.CalculateEquipmentCode();
      return CharacterCode.CreateFrom(string.Join("@---@", strArray));
    }

    public static bool IsHeroInformationHidden(Hero hero, out TextObject disableReason)
    {
      bool flag = !Campaign.Current.Models.InformationRestrictionModel.DoesPlayerKnowDetailsOf(hero);
      disableReason = flag ? new TextObject("{=akHsjtPh}You haven't met this hero yet.") : TextObject.Empty;
      return flag;
    }

    public static SandBoxUIHelper.MapEventVisualTypes GetMapEventVisualTypeFromMapEvent(
      MapEvent mapEvent)
    {
      if (mapEvent.MapEventSettlement == null)
        return SandBoxUIHelper.MapEventVisualTypes.Battle;
      if (mapEvent.IsSiegeAssault || mapEvent.IsSiegeOutside)
        return SandBoxUIHelper.MapEventVisualTypes.Siege;
      return mapEvent.IsSallyOut ? SandBoxUIHelper.MapEventVisualTypes.SallyOut : SandBoxUIHelper.MapEventVisualTypes.Raid;
    }

    private static string GetChangeValueString(float value)
    {
      string text = value.ToString("0.##");
      if ((double) value <= 1.0 / 1000.0)
        return text;
      MBTextManager.SetTextVariable("NUMBER", text, false);
      return GameTexts.FindText("str_plus_with_number").ToString();
    }

    public static int GetSkillObjectTypeSortIndex(SkillObject skill)
    {
      string stringId = skill.StringId;
      for (int index = 0; index < SandBoxUIHelper._skillImportanceIndex.Length; ++index)
      {
        if (stringId.Equals(SandBoxUIHelper._skillImportanceIndex[index], StringComparison.InvariantCultureIgnoreCase))
          return SandBoxUIHelper._skillImportanceIndex.Length - index;
      }
      return SandBoxUIHelper._skillImportanceIndex.Length + 1;
    }

    public static string GetSkillMeshId(SkillObject skill, bool useSmallestVariation = true)
    {
      string str = "SPGeneral\\Skills\\gui_skills_icon_" + skill.StringId.ToLower();
      return useSmallestVariation ? str + "_tiny" : str + "_small";
    }

    [Flags]
    public enum IssueQuestFlags
    {
      None = 0,
      AvailableIssue = 1,
      ActiveIssue = 2,
      ActiveStoryQuest = 4,
      TrackedIssue = 8,
      TrackedStoryQuest = 16, // 0x00000010
    }

    public enum SortState
    {
      Default,
      Ascending,
      Descending,
    }

    public enum MapEventVisualTypes
    {
      None,
      Raid,
      Siege,
      Battle,
      Rebellion,
      SallyOut,
    }
  }
}
