// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SPOrderOfBattleVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;

#nullable disable
namespace SandBox.ViewModelCollection
{
  public class SPOrderOfBattleVM : OrderOfBattleVM
  {
    private OrderOfBattleCampaignBehavior _orderOfBattleBehavior;
    private static readonly TextObject _perkDefinitionText = new TextObject("{=jCdZY3i4}{PERK_NAME} ({SKILL_LEVEL} - {SKILL})");
    private readonly TextObject _captainPerksText = new TextObject("{=pgXuyHxH}Captain Perks");
    private readonly TextObject _infantryInfluenceText = new TextObject("{=SSLUHH6j}Infantry Influence");
    private readonly TextObject _rangedInfluenceText = new TextObject("{=0DMM0agr}Ranged Influence");
    private readonly TextObject _cavalryInfluenceText = new TextObject("{=X8i3jZn8}Cavalry Influence");
    private readonly TextObject _horseArcherInfluenceText = new TextObject("{=gZIOG0wl}Horse Archer Influence");
    private readonly TextObject _noPerksText = new TextObject("{=7yaDnyKb}There is no additional perk influence.");
    private readonly SkillObjectComparer _perkComparer = new SkillObjectComparer();

    public SPOrderOfBattleVM() => ((ViewModel) this).RefreshValues();

    protected virtual void LoadConfiguration()
    {
      base.LoadConfiguration();
      this._orderOfBattleBehavior = Campaign.Current.GetCampaignBehavior<OrderOfBattleCampaignBehavior>();
      this.IsOrderPreconfigured = false;
      if (!this.IsPlayerGeneral)
        return;
      for (int index = 0; index < this.TotalFormationCount; ++index)
      {
        OrderOfBattleCampaignBehavior.OrderOfBattleFormationData formationInfo = this._orderOfBattleBehavior.GetFormationDataAtIndex(index, Mission.Current.IsSiegeBattle);
        if (formationInfo != null && formationInfo.FormationClass != DeploymentFormationClass.Unset)
        {
          this.IsOrderPreconfigured = true;
          bool flag1 = formationInfo.PrimaryClassWeight > 0 || formationInfo.SecondaryClassWeight > 0;
          if (formationInfo.FormationClass == DeploymentFormationClass.Infantry)
            this._allFormations[index].Classes[0].Class = FormationClass.Infantry;
          else if (formationInfo.FormationClass == DeploymentFormationClass.Ranged)
            this._allFormations[index].Classes[0].Class = FormationClass.Ranged;
          else if (formationInfo.FormationClass == DeploymentFormationClass.Cavalry)
            this._allFormations[index].Classes[0].Class = FormationClass.Cavalry;
          else if (formationInfo.FormationClass == DeploymentFormationClass.HorseArcher)
            this._allFormations[index].Classes[0].Class = FormationClass.HorseArcher;
          else if (formationInfo.FormationClass == DeploymentFormationClass.InfantryAndRanged)
          {
            this._allFormations[index].Classes[0].Class = FormationClass.Infantry;
            this._allFormations[index].Classes[1].Class = FormationClass.Ranged;
          }
          else if (formationInfo.FormationClass == DeploymentFormationClass.CavalryAndHorseArcher)
          {
            this._allFormations[index].Classes[0].Class = FormationClass.Cavalry;
            this._allFormations[index].Classes[1].Class = FormationClass.HorseArcher;
          }
          if (flag1)
          {
            bool flag2;
            formationInfo.Filters.TryGetValue(FormationFilterType.Shield, out flag2);
            bool flag3;
            formationInfo.Filters.TryGetValue(FormationFilterType.Spear, out flag3);
            bool flag4;
            formationInfo.Filters.TryGetValue(FormationFilterType.Thrown, out flag4);
            bool flag5;
            formationInfo.Filters.TryGetValue(FormationFilterType.Heavy, out flag5);
            bool flag6;
            formationInfo.Filters.TryGetValue(FormationFilterType.HighTier, out flag6);
            bool flag7;
            formationInfo.Filters.TryGetValue(FormationFilterType.LowTier, out flag7);
            this._allFormations[index].FilterItems.FirstOrDefault<OrderOfBattleFormationFilterSelectorItemVM>((Func<OrderOfBattleFormationFilterSelectorItemVM, bool>) (f => f.FilterType == FormationFilterType.Shield)).IsActive = flag2;
            this._allFormations[index].FilterItems.FirstOrDefault<OrderOfBattleFormationFilterSelectorItemVM>((Func<OrderOfBattleFormationFilterSelectorItemVM, bool>) (f => f.FilterType == FormationFilterType.Spear)).IsActive = flag3;
            this._allFormations[index].FilterItems.FirstOrDefault<OrderOfBattleFormationFilterSelectorItemVM>((Func<OrderOfBattleFormationFilterSelectorItemVM, bool>) (f => f.FilterType == FormationFilterType.Thrown)).IsActive = flag4;
            this._allFormations[index].FilterItems.FirstOrDefault<OrderOfBattleFormationFilterSelectorItemVM>((Func<OrderOfBattleFormationFilterSelectorItemVM, bool>) (f => f.FilterType == FormationFilterType.Heavy)).IsActive = flag5;
            this._allFormations[index].FilterItems.FirstOrDefault<OrderOfBattleFormationFilterSelectorItemVM>((Func<OrderOfBattleFormationFilterSelectorItemVM, bool>) (f => f.FilterType == FormationFilterType.HighTier)).IsActive = flag6;
            this._allFormations[index].FilterItems.FirstOrDefault<OrderOfBattleFormationFilterSelectorItemVM>((Func<OrderOfBattleFormationFilterSelectorItemVM, bool>) (f => f.FilterType == FormationFilterType.LowTier)).IsActive = flag7;
          }
          else
            this.ClearFormationItem(this._allFormations[index]);
          DeploymentFormationClass deploymentFormationClass = formationInfo.FormationClass;
          if (Mission.Current.IsSiegeBattle)
          {
            switch (deploymentFormationClass)
            {
              case DeploymentFormationClass.Cavalry:
                deploymentFormationClass = DeploymentFormationClass.Infantry;
                break;
              case DeploymentFormationClass.HorseArcher:
                deploymentFormationClass = DeploymentFormationClass.Ranged;
                break;
              case DeploymentFormationClass.CavalryAndHorseArcher:
                deploymentFormationClass = DeploymentFormationClass.InfantryAndRanged;
                break;
            }
          }
          this._allFormations[index].RefreshFormation(this._allFormations[index].Formation, deploymentFormationClass, flag1);
          if (flag1 && formationInfo.Commander != null)
          {
            OrderOfBattleHeroItemVM battleHeroItemVm = this._allHeroes.FirstOrDefault<OrderOfBattleHeroItemVM>((Func<OrderOfBattleHeroItemVM, bool>) (c => c.Agent.Character == formationInfo.Commander.CharacterObject));
            if (battleHeroItemVm != null)
              this.AssignCommander(battleHeroItemVm.Agent, this._allFormations[index]);
          }
          if (flag1 && formationInfo.HeroTroops != null)
          {
            foreach (Hero heroTroop1 in formationInfo.HeroTroops)
            {
              Hero heroTroop = heroTroop1;
              OrderOfBattleHeroItemVM battleHeroItemVm = this._allHeroes.FirstOrDefault<OrderOfBattleHeroItemVM>((Func<OrderOfBattleHeroItemVM, bool>) (ht => ht.Agent.Character == heroTroop.CharacterObject));
              if (battleHeroItemVm != null)
                this._allFormations[index].AddHeroTroop(battleHeroItemVm);
            }
          }
        }
        else if (formationInfo != null)
          this.ClearFormationItem(this._allFormations[index]);
      }
      for (int index = 0; index < this.TotalFormationCount; ++index)
      {
        OrderOfBattleCampaignBehavior.OrderOfBattleFormationData formationDataAtIndex = this._orderOfBattleBehavior.GetFormationDataAtIndex(index, Mission.Current.IsSiegeBattle);
        if (formationDataAtIndex != null && formationDataAtIndex.FormationClass != DeploymentFormationClass.Unset)
        {
          if (this._allFormations[index].Classes[0].Class != FormationClass.NumberOfAllFormations)
            this._allFormations[index].Classes[0].Weight = formationDataAtIndex.PrimaryClassWeight;
          if (this._allFormations[index].Classes[1].Class != FormationClass.NumberOfAllFormations)
            this._allFormations[index].Classes[1].Weight = formationDataAtIndex.SecondaryClassWeight;
        }
      }
    }

    protected virtual void SaveConfiguration()
    {
      base.SaveConfiguration();
      if (!(this.IsPlayerGeneral & MissionGameModels.Current.BattleInitializationModel.CanPlayerSideDeployWithOrderOfBattle()))
        return;
      List<OrderOfBattleCampaignBehavior.OrderOfBattleFormationData> formationInfos = new List<OrderOfBattleCampaignBehavior.OrderOfBattleFormationData>();
      for (int index = 0; index < this.TotalFormationCount; ++index)
      {
        OrderOfBattleFormationItemVM formationItemVM = this._allFormations[index];
        Hero commander = (Hero) null;
        if (formationItemVM.Commander.Agent != null)
          commander = Hero.FindFirst((Func<Hero, bool>) (h => h.CharacterObject == formationItemVM.Commander.Agent.Character));
        List<Hero> list = formationItemVM.HeroTroops.Select<OrderOfBattleHeroItemVM, Hero>((Func<OrderOfBattleHeroItemVM, Hero>) (ht => Hero.FindFirst((Func<Hero, bool>) (hero => hero.CharacterObject == ht.Agent.Character)))).Where<Hero>((Func<Hero, bool>) (h => h != null)).ToList<Hero>();
        DeploymentFormationClass orderOfBattleClass = formationItemVM.GetOrderOfBattleClass();
        bool flag = orderOfBattleClass == DeploymentFormationClass.Unset;
        int weight1 = flag ? 0 : formationItemVM.Classes[0].Weight;
        int weight2 = flag ? 0 : formationItemVM.Classes[1].Weight;
        Dictionary<FormationFilterType, bool> filters = new Dictionary<FormationFilterType, bool>()
        {
          [FormationFilterType.Shield] = !flag && formationItemVM.HasFilter(FormationFilterType.Shield),
          [FormationFilterType.Spear] = !flag && formationItemVM.HasFilter(FormationFilterType.Spear),
          [FormationFilterType.Thrown] = !flag && formationItemVM.HasFilter(FormationFilterType.Thrown),
          [FormationFilterType.Heavy] = !flag && formationItemVM.HasFilter(FormationFilterType.Heavy),
          [FormationFilterType.HighTier] = !flag && formationItemVM.HasFilter(FormationFilterType.HighTier),
          [FormationFilterType.LowTier] = !flag && formationItemVM.HasFilter(FormationFilterType.LowTier)
        };
        formationInfos.Add(new OrderOfBattleCampaignBehavior.OrderOfBattleFormationData(commander, list, orderOfBattleClass, weight1, weight2, filters));
      }
      this._orderOfBattleBehavior.SetFormationInfos(formationInfos, Mission.Current.IsSiegeBattle);
    }

    protected virtual List<TooltipProperty> GetAgentTooltip(Agent agent)
    {
      List<TooltipProperty> agentTooltip = base.GetAgentTooltip(agent);
      if (agent != null)
      {
        Hero first = Hero.FindFirst((Func<Hero, bool>) (h => h.StringId == agent.Character.StringId));
        foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        {
          if (skill.StringId == "OneHanded" || skill.StringId == "TwoHanded" || skill.StringId == "Polearm" || skill.StringId == "Bow" || skill.StringId == "Crossbow" || skill.StringId == "Throwing" || skill.StringId == "Riding" || skill.StringId == "Athletics" || skill.StringId == "Tactics" || skill.StringId == "Leadership")
            agentTooltip.Add(new TooltipProperty(skill.Name.ToString(), agent.Character.GetSkillValue(skill).ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0)
            {
              OnlyShowWhenNotExtended = true
            });
        }
        agentTooltip.Add(new TooltipProperty("", string.Empty, 0, false, (TooltipProperty.TooltipPropertyFlags) 1024)
        {
          OnlyShowWhenNotExtended = true
        });
        List<PerkObject> compatiblePerks1;
        float ratingForTroopUsages1 = Campaign.Current.Models.BattleCaptainModel.GetCaptainRatingForTroopUsages(first, FormationClass.Infantry.GetTroopUsageFlags(), out compatiblePerks1);
        List<PerkObject> compatiblePerks2;
        float ratingForTroopUsages2 = Campaign.Current.Models.BattleCaptainModel.GetCaptainRatingForTroopUsages(first, FormationClass.Ranged.GetTroopUsageFlags(), out compatiblePerks2);
        List<PerkObject> compatiblePerks3;
        float ratingForTroopUsages3 = Campaign.Current.Models.BattleCaptainModel.GetCaptainRatingForTroopUsages(first, FormationClass.Cavalry.GetTroopUsageFlags(), out compatiblePerks3);
        List<PerkObject> compatiblePerks4;
        float ratingForTroopUsages4 = Campaign.Current.Models.BattleCaptainModel.GetCaptainRatingForTroopUsages(first, FormationClass.HorseArcher.GetTroopUsageFlags(), out compatiblePerks4);
        agentTooltip.Add(new TooltipProperty(this._infantryInfluenceText.ToString(), ((int) ((double) ratingForTroopUsages1 * 100.0)).ToString(), 0, false, (TooltipProperty.TooltipPropertyFlags) 0)
        {
          OnlyShowWhenNotExtended = true
        });
        List<TooltipProperty> tooltipPropertyList1 = agentTooltip;
        string str1 = this._rangedInfluenceText.ToString();
        int num1 = (int) ((double) ratingForTroopUsages2 * 100.0);
        string str2 = num1.ToString();
        tooltipPropertyList1.Add(new TooltipProperty(str1, str2, 0, false, (TooltipProperty.TooltipPropertyFlags) 0)
        {
          OnlyShowWhenNotExtended = true
        });
        List<TooltipProperty> tooltipPropertyList2 = agentTooltip;
        string str3 = this._cavalryInfluenceText.ToString();
        num1 = (int) ((double) ratingForTroopUsages3 * 100.0);
        string str4 = num1.ToString();
        tooltipPropertyList2.Add(new TooltipProperty(str3, str4, 0, false, (TooltipProperty.TooltipPropertyFlags) 0)
        {
          OnlyShowWhenNotExtended = true
        });
        List<TooltipProperty> tooltipPropertyList3 = agentTooltip;
        string str5 = this._horseArcherInfluenceText.ToString();
        num1 = (int) ((double) ratingForTroopUsages4 * 100.0);
        string str6 = num1.ToString();
        tooltipPropertyList3.Add(new TooltipProperty(str5, str6, 0, false, (TooltipProperty.TooltipPropertyFlags) 0)
        {
          OnlyShowWhenNotExtended = true
        });
        agentTooltip.Add(new TooltipProperty(string.Empty, string.Empty, 0, false, (TooltipProperty.TooltipPropertyFlags) 0)
        {
          OnlyShowWhenNotExtended = true
        });
        List<PerkObject> list = compatiblePerks1.Union<PerkObject>((IEnumerable<PerkObject>) compatiblePerks2).Union<PerkObject>((IEnumerable<PerkObject>) compatiblePerks3).Union<PerkObject>((IEnumerable<PerkObject>) compatiblePerks4).ToList<PerkObject>();
        list.Sort((IComparer<PerkObject>) this._perkComparer);
        int num2 = list.Count != 0 ? 1 : 0;
        if (num2 != 0)
          SPOrderOfBattleVM.AddPerks(this._captainPerksText, agentTooltip, list);
        if (num2 == 0)
          agentTooltip.Add(new TooltipProperty(this._noPerksText.ToString(), string.Empty, 0, true, (TooltipProperty.TooltipPropertyFlags) 0));
        if (Input.IsGamepadActive)
          GameTexts.SetVariable("EXTEND_KEY", Game.Current.GameTextManager.GetHotKeyGameText("MapHotKeyCategory", "MapFollowModifier").ToString());
        else
          GameTexts.SetVariable("EXTEND_KEY", Game.Current.GameTextManager.FindText("str_game_key_text", "anyalt").ToString());
        agentTooltip.Add(new TooltipProperty(string.Empty, GameTexts.FindText("str_map_tooltip_info").ToString(), -1, false, (TooltipProperty.TooltipPropertyFlags) 0)
        {
          OnlyShowWhenNotExtended = true
        });
      }
      return agentTooltip;
    }

    private static void AddPerks(
      TextObject title,
      List<TooltipProperty> tooltipProperties,
      List<PerkObject> perks)
    {
      tooltipProperties.Add(new TooltipProperty(title.ToString(), string.Empty, 0, true, (TooltipProperty.TooltipPropertyFlags) 4096));
      foreach (PerkObject perk in perks)
      {
        if (perk.PrimaryRole == SkillEffect.PerkRole.Captain || perk.SecondaryRole == SkillEffect.PerkRole.Captain)
        {
          TextObject textObject = perk.PrimaryRole == SkillEffect.PerkRole.Captain ? perk.PrimaryDescription : perk.SecondaryDescription;
          string genericImageText = HyperlinkTexts.GetGenericImageText(SandBoxUIHelper.GetSkillMeshId(perk.Skill), 2);
          SPOrderOfBattleVM._perkDefinitionText.SetTextVariable("PERK_NAME", perk.Name).SetTextVariable("SKILL", genericImageText).SetTextVariable("SKILL_LEVEL", perk.RequiredSkillValue);
          tooltipProperties.Add(new TooltipProperty(SPOrderOfBattleVM._perkDefinitionText.ToString(), textObject.ToString(), 0, true, (TooltipProperty.TooltipPropertyFlags) 0));
        }
      }
    }
  }
}
