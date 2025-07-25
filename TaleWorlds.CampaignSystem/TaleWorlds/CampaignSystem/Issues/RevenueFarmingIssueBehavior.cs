// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.RevenueFarmingIssueBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Issues
{
  public class RevenueFarmingIssueBehavior : CampaignBehaviorBase
  {
    private const int CollectAllVillageTaxesAfterHours = 10;
    private const IssueBase.IssueFrequency RevenueFarmingIssueFrequency = IssueBase.IssueFrequency.VeryCommon;
    private List<RevenueFarmingIssueBehavior.VillageEvent> _villageEvents;
    private RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest _cachedQuest;

    private float IncidentChance
    {
      get
      {
        return (float) ((100.0 - (double) RevenueFarmingIssueBehavior.Instance.TargetSettlement.Town.Loyalty * 0.800000011920929) * 0.0099999997764825821);
      }
    }

    private static RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest Instance
    {
      get
      {
        RevenueFarmingIssueBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<RevenueFarmingIssueBehavior>();
        if (campaignBehavior._cachedQuest != null && campaignBehavior._cachedQuest.IsOngoing)
          return campaignBehavior._cachedQuest;
        foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
        {
          if (quest is RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest farmingIssueQuest)
          {
            campaignBehavior._cachedQuest = farmingIssueQuest;
            return campaignBehavior._cachedQuest;
          }
        }
        return (RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest) null;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnAfterSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnAfterSessionLaunchedEvent));
    }

    private void OnAfterSessionLaunchedEvent(CampaignGameStarter gameStarter)
    {
      gameStarter.AddGameMenuOption("town_guard", "talk_to_steward_for_revenue_town", "{=voXpzZdH}Hand over the revenue", new GameMenuOption.OnConditionDelegate(this.talk_to_steward_on_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_steward_on_consequence), index: 2);
      gameStarter.AddGameMenuOption("town", "talk_to_steward_for_revenue_town", "{=voXpzZdH}Hand over the revenue", new GameMenuOption.OnConditionDelegate(this.talk_to_steward_on_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_steward_on_consequence), index: 9);
      gameStarter.AddGameMenuOption("castle_guard", "talk_to_steward_for_revenue_castle", "{=voXpzZdH}Hand over the revenue", new GameMenuOption.OnConditionDelegate(this.talk_to_steward_on_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_steward_on_consequence), index: 2);
    }

    private void OnSessionLaunched(CampaignGameStarter gameStarter)
    {
      gameStarter.AddGameMenuOption("village", "revenue_farming_quest_collect_tax_menu_button", "{=mcrjFxDQ}Collect revenue", new GameMenuOption.OnConditionDelegate(this.collect_revenue_menu_condition), new GameMenuOption.OnConsequenceDelegate(this.collect_revenue_menu_consequence), index: 5);
      gameStarter.AddWaitGameMenu("village_collect_revenue", "{=p6swAFWn}Your men started collecting the revenues...", new OnInitDelegate(this.collecting_menu_on_init), (TaleWorlds.CampaignSystem.GameMenus.OnConditionDelegate) null, (TaleWorlds.CampaignSystem.GameMenus.OnConsequenceDelegate) null, new OnTickDelegate(this.collection_menu_on_tick), GameMenu.MenuAndOptionType.WaitMenuShowOnlyProgressOption, targetWaitHours: 10f);
      gameStarter.AddGameMenuOption("village_collect_revenue", "village_collect_revenue_back", "{=3sRdGQou}Leave", new GameMenuOption.OnConditionDelegate(this.leave_on_condition), new GameMenuOption.OnConsequenceDelegate(this.leave_consequence), true);
      this.AddVillageEvents(gameStarter);
    }

    private bool talk_to_steward_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Manage;
      args.OptionQuestData = GameMenuOption.IssueQuestFlags.ActiveIssue;
      if (RevenueFarmingIssueBehavior.Instance == null)
        return false;
      if (Hero.MainHero.Gold < RevenueFarmingIssueBehavior.Instance._totalRequestedDenars)
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=QOWyEJrm}You don't have enough denars.");
      }
      if (!RevenueFarmingIssueBehavior.Instance._allRevenuesAreCollected)
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=QrAowQ5f}You have to collect the revenues first.");
      }
      return Settlement.CurrentSettlement.OwnerClan == RevenueFarmingIssueBehavior.Instance.QuestGiver.Clan;
    }

    private void talk_to_steward_on_consequence(MenuCallbackArgs args)
    {
      RevenueFarmingIssueBehavior.Instance.RevenuesAreDeliveredToSteward();
      if (Settlement.CurrentSettlement.IsCastle)
        GameMenu.SwitchToMenu("castle");
      else
        GameMenu.SwitchToMenu("town");
    }

    private void AddVillageEvents(CampaignGameStarter gameStarter)
    {
      this._villageEvents = new List<RevenueFarmingIssueBehavior.VillageEvent>();
      this._villageEvents.Add(new RevenueFarmingIssueBehavior.VillageEvent("offer_goods_and_troops", "{=RabC7Wzm}The headman tells you that most of the villagers can't afford the rest of the tax. They offer crops and other goods as payment in kind.", new TextObject("{=5hgc03yZ}While your men were collecting revenues, a headman came and told you that most of the villagers couldn't afford to pay what they owe. They offered to pay the rest with their products."), new List<RevenueFarmingIssueBehavior.VillageEventOptionData>()
      {
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=XVzQ7MXQ}Refuse the offer, break into their homes and collect all rents and taxes by force.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
          if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 10)
          {
            args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
            args.IsEnabled = false;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          TraitLevelingHelper.OnIssueSolvedThroughQuest(RevenueFarmingIssueBehavior.Instance.QuestGiver, new Tuple<TraitObject, int>[1]
          {
            new Tuple<TraitObject, int>(DefaultTraits.Mercy, -50)
          });
          int variable = MBRandom.RandomInt(2, 4);
          TextObject text = new TextObject("{=3vFxRKja}You refused his offer and decided to collect the rest of the revenues by force. Your action upset the village notables and made villagers angry. Some villagers tried to resist. In the brawl, {WOUNDED_COUNT} of your men got wounded.");
          text.SetTextVariable("WOUNDED_COUNT", variable);
          RevenueFarmingIssueBehavior.Instance.AddLog(text);
          this.ChangeRelationWithNotables(-5);
          int num = MBRandom.RandomInt(2, 4);
          MobileParty.MainParty.MemberRoster.WoundNumberOfTroopsRandomly(num);
          TextObject message = new TextObject("{=o27lTMD4}Some villagers tried to resist. In the brawl, {WOUNDED_NUMBER} of your men got wounded.");
          message.SetTextVariable("WOUNDED_NUMBER", num);
          MBInformationManager.AddQuickInformation(message);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=buKXELE3}Accept the offer.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Trade;
          RevenueFarmingIssueBehavior.RevenueVillage currentRevenueVillage = RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage();
          int variable = (int) ((double) currentRevenueVillage.TargetAmount * 0.5 / (double) currentRevenueVillage.Village.VillageType.PrimaryProduction.Value);
          TextObject textObject = new TextObject("{=wZfbYfoH}They will give you {PRODUCT_COUNT} {.%}{?(PRODUCT_COUNT > 1)}{PLURAL(PRODUCT)}{?}{PRODUCT}{\\?}{.%}.");
          textObject.SetTextVariable("PRODUCT", currentRevenueVillage.Village.VillageType.PrimaryProduction.Name);
          textObject.SetTextVariable("PRODUCT_COUNT", variable);
          args.Tooltip = textObject;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          int amount;
          this.GiveVillageGoods(out amount);
          TextObject text = new TextObject("{=b5InObbq}You accepted the headman's offer. The village's notables and villagers were happy with your decision and they gave you {PRODUCT_COUNT} {.%}{?(PRODUCT_COUNT > 1)}{PLURAL(PRODUCT)}{?}{PRODUCT}{\\?}{.%}.");
          text.SetTextVariable("PRODUCT", RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().Village.VillageType.PrimaryProduction.Name);
          text.SetTextVariable("PRODUCT_COUNT", amount);
          RevenueFarmingIssueBehavior.Instance.AddLog(text);
          this.ChangeRelationWithNotables(1);
          this.CompleteCurrentRevenueCollection();
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=jULnw6F1}Leave the village, telling the villagers that they are exempted from payment this year.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Continue;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=a3WpsFTM}You decided to exempt the rest of the villagers from payment and left the village. The village's notables and farmers were grateful to you."));
          this.ChangeRelationWithNotables(3);
          this.CompleteCurrentRevenueCollection();
        }))
      }));
      this._villageEvents.Add(new RevenueFarmingIssueBehavior.VillageEvent("brawl_breaks_out", "{=tVYLzFwu}Suddenly a brawl starts between your troops and some of the village youth.", new TextObject("{=vKaeKPJ5}Revenue collection was interrupted by a sudden brawl between your troops and young men of the village."), new List<RevenueFarmingIssueBehavior.VillageEventOptionData>()
      {
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=eJegI0iX}Order the rest of your troops to put the village youth to flight.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Mission;
          if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 10)
          {
            args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
            args.IsEnabled = false;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=Zx1ZEl6Q}You ordered your troops to fight back. In the heat of the brawl, one of the young men was struck on the head and killed. His death greatly upset the villagers."));
          MBInformationManager.AddQuickInformation(new TextObject("{=xfEVlh7v}Your men beat some of youngsters to the death."));
          this.ChangeRelationWithNotables(-5);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=Z6IoX4MH}Order your troops to try not to hurt the youth and try to separate the two sides.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Continue;
          if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 10)
          {
            args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
            args.IsEnabled = false;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          int num = MBRandom.RandomInt(6, 10);
          TextObject text = new TextObject("{=YRocrk78}You ordered your troops to disengage. When the dust settled, {WOUNDED} of them had been injured. But the village notables understood that you wanted a peaceful solution.");
          text.SetTextVariable("WOUNDED", num);
          RevenueFarmingIssueBehavior.Instance.AddLog(text);
          TextObject message = new TextObject("{=00Qvwelb}{WOUNDED_NUMBER} of your men got wounded while they were trying to separate the two sides.");
          message.SetTextVariable("WOUNDED_NUMBER", num);
          MBInformationManager.AddQuickInformation(message);
          MobileParty.MainParty.MemberRoster.WoundNumberOfTroopsRandomly(num);
          this.ChangeRelationWithNotables(2);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=Xl5JTBJE}Leave the village, telling them you've collected enough.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Leave;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=T0feOigD}You decided to stop collecting revenues and leave the village. You told the villagers that they had paid enough, and they were grateful to you."));
          this.ChangeRelationWithNotables(4);
          this.CompleteCurrentRevenueCollection();
        }), true)
      }));
      this._villageEvents.Add(new RevenueFarmingIssueBehavior.VillageEvent("landlord_asks_for_money", "{=cOlZvnal}A landlord says that his retainers, who help keep order in the village, have gone unpaid and are starting to get mutinous. He says that if you can't help him out with a small sum of money to pay them while you collect the revenues from the rest of the village, he can't guarantee that things will go peacefully.", new TextObject("{=HK4pwetq}A few hours after the revenue collection started, a landlord came and told you that his retainers were getting mutinuous. He asked you for some money to pay them their back wages."), new List<RevenueFarmingIssueBehavior.VillageEventOptionData>()
      {
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=0p0jXXIa}Reject the landlord's request for money and collect revenues as before.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Continue;
          if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 5)
          {
            args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
            args.IsEnabled = false;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          this.ChangeRelationWithNotables(-5);
          if ((double) MBRandom.RandomFloat < (double) this.IncidentChance)
          {
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=bS7IAgJS}You told the notable that this was not your affair. A few hours later, the mutineers ambushed and killed some of your men on the outskirts of the village, and the revenues stolen."));
            GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().CollectedAmount, true);
            TextObject text = GameTexts.FindText("str_quest_collect_debt_quest_gold_removed");
            text.SetTextVariable("GOLD_AMOUNT", RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().CollectedAmount);
            InformationManager.DisplayMessage(new InformationMessage(text.ToString(), "event:/ui/notification/coins_negative"));
            this.CompleteCurrentRevenueCollection(false);
            int num = MBRandom.RandomInt(2, 5);
            TextObject message = new TextObject("{=mosHZG3b}The mutineers ambushed and killed {KILLED_NUMBER} of your men.");
            message.SetTextVariable("KILLED_NUMBER", num);
            MBInformationManager.AddQuickInformation(message);
            MobileParty.MainParty.MemberRoster.KillNumberOfNonHeroTroopsRandomly(num);
          }
          else
          {
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=KQ8AU8Bz}You told the notable that this was not your affair. He did not like to hear this."));
            this.collect_revenue_menu_consequence(args);
          }
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=EmJDw5xP}Give the landlord a small bribe for his men, and continue to collect revenues with their help.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Trade;
          int variable = RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().TargetAmount / 3;
          if (Hero.MainHero.Gold < variable)
          {
            args.Tooltip = new TextObject("{=m6uSOtE4}You don't have enough money.");
            args.IsEnabled = false;
          }
          else
          {
            TextObject textObject = new TextObject("{=hCavIm4G}You will pay {AMOUNT}{GOLD_ICON} denars.");
            textObject.SetTextVariable("AMOUNT", variable);
            args.Tooltip = textObject;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=kp19y5Hh}You paid off the landlords' retainers to forestall a mutiny. The village notables were grateful to you."));
          GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().TargetAmount / 3);
          this.ChangeRelationWithNotables(2);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=DhrjR8bs}Announce that the villagers have paid enough, and leave the village.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Leave;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=1yCeyK4I}You declared that the village had paid enough, and departed."));
          this.ChangeRelationWithNotables(4);
          this.CompleteCurrentRevenueCollection();
        }), true)
      }));
      this._villageEvents.Add(new RevenueFarmingIssueBehavior.VillageEvent("village_is_under_quarantine", "{=pBII35Fa}As your man were collecting the tax, the headman shouted out to you across the fields that there has been an outbreak of the flux in the village. He warns you, for your own good, to stay away.", new TextObject("{=fn59IIUf}As your man were collecting the tax, the headman shouted out to you that the village had seen an outbreak of the flux, and that you should stay away."), new List<RevenueFarmingIssueBehavior.VillageEventOptionData>()
      {
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=CbapENnw}Tell your men that the headman is probably lying, and to go ahead and collect the revenues.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Continue;
          if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 5)
          {
            args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
            args.IsEnabled = false;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          if ((double) MBRandom.RandomFloat < (double) this.IncidentChance)
          {
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=9AyDNhQj}You told your men to ignore the warning. Several hours after you left, some of your men started experiencing chills, then diarrhea. This does not appear to be a particularly virulent strain, as no one died, but about half your men are incapacitated."));
            int num = MobileParty.MainParty.MemberRoster.TotalHealthyCount / 2;
            TextObject message = new TextObject("{=rmmZayCT}{WOUNDED_COUNT} of your men got wounded because of illness.");
            message.SetTextVariable("WOUNDED_COUNT", num);
            MBInformationManager.AddQuickInformation(message);
            MobileParty.MainParty.MemberRoster.WoundNumberOfTroopsRandomly(num);
          }
          else
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=obhcbsQT}You told your men to ignore the warning."));
          this.ChangeRelationWithNotables(-4);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=iE5vWYj2}Tell your men to be careful, and to touch nothing in a house where anyone has been sick.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Continue;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.RevenueVillage currentRevenueVillage = RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage();
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=b3GrvocA}You told your men to go carefully, but still collect the revenues. The village notables seemed upset with your decision."));
          currentRevenueVillage.SetAdditionalProgress(0.35f);
          this.ChangeRelationWithNotables(2);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=YZZ4zjxU}Tell the villagers that, in light of their hardship, they are forgiven what they owe.", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Leave;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=JSI0FVZ1}You decided to forgive the villagers' back payments. The headman thanked you, as the villagers were already suffering."));
          this.ChangeRelationWithNotables(4);
          this.CompleteCurrentRevenueCollection();
        }), true)
      }));
      this._villageEvents.Add(new RevenueFarmingIssueBehavior.VillageEvent("refuse_to_pay_what_they_owe", "{=yPkHn74X}When you enter the village commons, you find a crowd of villagers has gathered to resist you. They call the rents and taxes owed 'unlawful' and refuse to pay them at all. They pelt your men with rotten vegetables.", new TextObject("{=yPkHn74X}When you enter the village commons, you find a crowd of villagers has gathered to resist you. They call the rents and taxes owed 'unlawful' and refuse to pay them at all. They pelt your men with rotten vegetables."), new List<RevenueFarmingIssueBehavior.VillageEventOptionData>()
      {
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=aZ9bME9C}Order your men to break up the crowd by force", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Continue;
          if (MobileParty.MainParty.MemberRoster.TotalHealthyCount <= 9)
          {
            args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
            args.IsEnabled = false;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          if ((double) MBRandom.RandomFloat < (double) this.IncidentChance)
          {
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=ztY2Nf0N}You ordered your men to break up the crowd. There was some scuffling, and some of your men were wounded."));
            int num = MBRandom.RandomInt(6, 8);
            TextObject message = new TextObject("{=xJwo7eBh}{WOUNDED_NUMBER} of your men got wounded while they were breaking up the crowd.");
            message.SetTextVariable("WOUNDED_NUMBER", num);
            MBInformationManager.AddQuickInformation(message);
            MobileParty.MainParty.MemberRoster.WoundNumberOfTroopsRandomly(num);
          }
          else
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=ObYvBt0e}You ordered your men to break up the crowd. The attempt was successful and your men continued collecting taxes as usual."));
          this.ChangeRelationWithNotables(-5);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=4MPhLYcT}Bargain with the group, agreeing to forgive the debts of the poorest villagers", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.DefendAction;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().SetAdditionalProgress(0.5f);
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=54RyKzPJ}After your attempts to bargain, a deal has been made to forgive the debts of the poorest villagers."));
          this.ChangeRelationWithNotables(2);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=tZw45isr}Tell the villagers that they made their point and that you're leaving", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Leave;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=6TYsIQav}After observing the villagers' hardships, you called back your men so as not put any more burden on them."));
          this.ChangeRelationWithNotables(4);
          this.CompleteCurrentRevenueCollection();
        }), true)
      }));
      this._villageEvents.Add(new RevenueFarmingIssueBehavior.VillageEvent("relief_for_the_poorest", "{=Tl4yagLi}The headman tells you that some households have suffered particularly hard this year from crop failures and bandit depredations. He asks you to forgive their back payments entirely. He hints that they are so desperate that they might resist by force.", new TextObject("{=Tl4yagLi}The headman tells you that some households have suffered particularly hard this year from crop failures and bandit depredations. He asks you to forgive their back payments entirely. He hints that they are so desperate that they might resist by force."), new List<RevenueFarmingIssueBehavior.VillageEventOptionData>()
      {
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=agMtRiru}Refuse to exempt anyone", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Continue;
          if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 5)
          {
            args.Tooltip = new TextObject("{=MTbOGRCF}You don't have enough men!");
            args.IsEnabled = false;
          }
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          if ((double) MBRandom.RandomFloat < (double) this.IncidentChance)
          {
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=VsriS0iI}You refused to exempt anyone, but the residents attacked and killed some of your troops who were separated from the rest, and then ran away."));
            int num = MBRandom.RandomInt(2, 4);
            TextObject message = new TextObject("{=MGD8Ka2o}The residents attacked and killed {KILLED_NUMBER} of your troops who were separated from the rest.");
            message.SetTextVariable("KILLED_NUMBER", num);
            MBInformationManager.AddQuickInformation(message);
            MobileParty.MainParty.MemberRoster.KillNumberOfNonHeroTroopsRandomly(num);
          }
          else
            RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=Rz1kkvbK}You refused to exempt anyone. Fortunately the villagers were sufficiently cowed by your men, and did not raise a hand."));
          this.ChangeRelationWithNotables(-5);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=WDp5EAl3}Agree to exempt the poor households", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().SetAdditionalProgress(0.35f);
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=o70h6xqb}You showed mercy and exempted the poor households from the tax collection"));
          this.ChangeRelationWithNotables(2);
          this.collect_revenue_menu_consequence(args);
        })),
        new RevenueFarmingIssueBehavior.VillageEventOptionData("{=aMleZjlG}Tell the villagers that they have all paid enough, and depart", (GameMenuOption.OnConditionDelegate) (args =>
        {
          args.optionLeaveType = GameMenuOption.LeaveType.Leave;
          return true;
        }), (GameMenuOption.OnConsequenceDelegate) (args =>
        {
          RevenueFarmingIssueBehavior.Instance.AddLog(new TextObject("{=rsQhD7sC}You thought that the villagers have paid enough, so departed from the settlement"));
          this.ChangeRelationWithNotables(4);
          this.CompleteCurrentRevenueCollection();
        }), true)
      }));
      foreach (RevenueFarmingIssueBehavior.VillageEvent villageEvent in this._villageEvents)
        this.AddVillageEventMenus(villageEvent, gameStarter);
    }

    private void AddVillageEventMenus(
      RevenueFarmingIssueBehavior.VillageEvent villageEvent,
      CampaignGameStarter gameStarter)
    {
      gameStarter.AddGameMenu(villageEvent.Id, villageEvent.MainEventText, (OnInitDelegate) null);
      for (int index = 0; index < villageEvent.OptionConditionsAndConsequences.Count; ++index)
      {
        RevenueFarmingIssueBehavior.VillageEventOptionData conditionsAndConsequence = villageEvent.OptionConditionsAndConsequences[index];
        gameStarter.AddGameMenuOption(villageEvent.Id, "Id_option" + (object) index, conditionsAndConsequence.Text, conditionsAndConsequence.OnCondition, conditionsAndConsequence.OnConsequence, conditionsAndConsequence.IsLeave);
      }
    }

    private bool collect_revenue_menu_condition(MenuCallbackArgs args)
    {
      if (RevenueFarmingIssueBehavior.Instance == null || !RevenueFarmingIssueBehavior.Instance.IsOngoing || MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
        return false;
      args.optionLeaveType = GameMenuOption.LeaveType.Manage;
      args.OptionQuestData = GameMenuOption.IssueQuestFlags.ActiveIssue;
      RevenueFarmingIssueBehavior.RevenueVillage revenueVillage = RevenueFarmingIssueBehavior.Instance.RevenueVillages.FirstOrDefault<RevenueFarmingIssueBehavior.RevenueVillage>((Func<RevenueFarmingIssueBehavior.RevenueVillage, bool>) (x => x.Village == Settlement.CurrentSettlement.Village));
      if (revenueVillage == null || revenueVillage.GetIsCompleted())
        return false;
      bool canPlayerDo = MobileParty.MainParty.MemberRoster.TotalHealthyCount >= 20;
      TextObject disabledText = new TextObject("{=CfCsGTfb}Villagers are not taking you seriously, as you do not have enough soldiers to carry out the process. At least 20 men are needed to continue.");
      return MenuHelper.SetOptionProperties(args, canPlayerDo, !canPlayerDo, disabledText);
    }

    private void collecting_menu_on_init(MenuCallbackArgs args)
    {
      if (RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage().CollectedAmount == 0)
      {
        TextObject message = new TextObject("{=VktwHCN6}Your men have started to collect the tax of {VILLAGE}");
        message.SetTextVariable("VILLAGE", Settlement.CurrentSettlement.Name);
        MBInformationManager.AddQuickInformation(message);
      }
      RevenueFarmingIssueBehavior.Instance.CollectingRevenues = true;
      args.MenuContext.GameMenu.StartWait();
    }

    private bool leave_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    private void leave_consequence(MenuCallbackArgs args)
    {
      RevenueFarmingIssueBehavior.Instance.CollectingRevenues = false;
      GameMenu.SwitchToMenu("village");
    }

    private void collection_menu_on_tick(MenuCallbackArgs args, CampaignTime dt)
    {
      RevenueFarmingIssueBehavior.RevenueVillage currentRevenueVillage = RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage();
      args.MenuContext.GameMenu.SetProgressOfWaitingInMenu(currentRevenueVillage.CollectProgress);
    }

    private void collect_revenue_menu_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("village_collect_revenue");
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.UnstoppablePlay;
    }

    [GameMenuInitializationHandler("village_collect_revenue")]
    private static void village_collect_revenue_game_menu_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.SettlementComponent.WaitMeshName);
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.UnstoppablePlay;
    }

    [GameMenuInitializationHandler("offer_goods_and_troops")]
    [GameMenuInitializationHandler("brawl_breaks_out")]
    [GameMenuInitializationHandler("landlord_asks_for_money")]
    [GameMenuInitializationHandler("village_is_under_quarantine")]
    [GameMenuInitializationHandler("refuse_to_pay_what_they_owe")]
    [GameMenuInitializationHandler("relief_for_the_poorest")]
    private static void village_event_common_menu_on_init(MenuCallbackArgs args)
    {
      args.MenuContext.SetBackgroundMeshName(Settlement.CurrentSettlement.SettlementComponent.WaitMeshName);
    }

    private void ChangeRelationWithNotables(int relation)
    {
      foreach (Hero notable in (List<Hero>) Settlement.CurrentSettlement.Notables)
      {
        notable.SetHasMet();
        ChangeRelationAction.ApplyPlayerRelation(notable, relation, false, false);
      }
      TextObject empty = TextObject.Empty;
      TextObject message = relation <= 0 ? new TextObject("{=r5Netxy0}Your relation is decreased by {MAGNITUDE} with village notables.") : new TextObject("{=IwS1qeq9}Your relation is increased by {MAGNITUDE} with village notables.");
      message.SetTextVariable("MAGNITUDE", relation);
      MBInformationManager.AddQuickInformation(message);
    }

    private void CompleteCurrentRevenueCollection(bool addLog = true)
    {
      RevenueFarmingIssueBehavior.RevenueVillage currentRevenueVillage = RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage();
      RevenueFarmingIssueBehavior.Instance.SetVillageAsCompleted(currentRevenueVillage, addLog);
      if (RevenueFarmingIssueBehavior.Instance.IsTracked((ITrackableCampaignObject) currentRevenueVillage.Village.Settlement))
        RevenueFarmingIssueBehavior.Instance.RemoveTrackedObject((ITrackableCampaignObject) currentRevenueVillage.Village.Settlement);
      RevenueFarmingIssueBehavior.Instance.CollectingRevenues = false;
      PlayerEncounter.Finish();
    }

    private void GiveVillageGoods(out int amount)
    {
      RevenueFarmingIssueBehavior.RevenueVillage currentRevenueVillage = RevenueFarmingIssueBehavior.Instance.FindCurrentRevenueVillage();
      amount = (int) ((double) currentRevenueVillage.TargetAmount * 0.5 / (double) currentRevenueVillage.Village.VillageType.PrimaryProduction.Value);
      MobileParty.MainParty.ItemRoster.AddToCounts(currentRevenueVillage.Village.VillageType.PrimaryProduction, amount);
    }

    public void OnVillageEventWithIdSpawned(string Id)
    {
      RevenueFarmingIssueBehavior.Instance.AddLog(this._villageEvents.FirstOrDefault<RevenueFarmingIssueBehavior.VillageEvent>((Func<RevenueFarmingIssueBehavior.VillageEvent, bool>) (x => x.Id == Id)).MainLog);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private bool ConditionsHold(Hero issueGiver, out Settlement targetSettlement)
    {
      targetSettlement = (Settlement) null;
      if (issueGiver.IsLord && issueGiver.Clan.Leader == issueGiver && issueGiver.GetTraitLevel(DefaultTraits.Mercy) <= 0 && issueGiver.Clan.Settlements.Count > 0)
        targetSettlement = issueGiver.Clan.Settlements.Where<Settlement>((Func<Settlement, bool>) (x => x.IsTown)).GetRandomElementInefficiently<Settlement>();
      return targetSettlement != null;
    }

    public void OnCheckForIssue(Hero hero)
    {
      Settlement targetSettlement;
      if (this.ConditionsHold(hero, out targetSettlement))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnSelected), typeof (RevenueFarmingIssueBehavior.RevenueFarmingIssue), IssueBase.IssueFrequency.VeryCommon, (object) targetSettlement));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (RevenueFarmingIssueBehavior.RevenueFarmingIssue), IssueBase.IssueFrequency.VeryCommon));
    }

    private IssueBase OnSelected(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new RevenueFarmingIssueBehavior.RevenueFarmingIssue(issueOwner, pid.RelatedObject as Settlement);
    }

    public class RevenueFarmingIssue : IssueBase
    {
      private const int IssueAndQuestDuration = 20;
      private const int MinimumRequiredMenCount = 40;
      [SaveableField(1)]
      private Settlement _targetSettlement;

      internal static void AutoGeneratedStaticCollectObjectsRevenueFarmingIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._targetSettlement);
      }

      internal static object AutoGeneratedGetMemberValue_targetSettlement(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueFarmingIssue) o)._targetSettlement;
      }

      protected override int RewardGold => 0;

      protected int TotalRequestedDenars
      {
        get
        {
          int num = 0;
          foreach (Village boundVillage in (List<Village>) this._targetSettlement.BoundVillages)
          {
            if (!boundVillage.Settlement.IsRaided && !boundVillage.Settlement.IsUnderRaid)
              num += (int) ((double) boundVillage.Hearth * 4.0);
          }
          return num / 3;
        }
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          return new TextObject("{=j5fS9zaa}Yes, there is something. I have been on campaign for much of this year, and I have not been able to go around to my estates collecting the rents that are owed to me and the taxes that are owed to the realm. I need some help collecting these revenues.[ib:confident3][if:convo_nonchalant]");
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=AXy26AFb}Maybe I can help. What are the terms of agreement.");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=F540oIed}I can designate you as my official revenue farmer, and give you a list of everyone's holdings and how much they owe. All you need to do is visit all my villages and collect what you can. I don't expect you to be able to get every denar. Some of the people around here are genuinely hard - up, but they'll all try to get out of paying. Let's just keep it simple: I will take {TOTAL_REQUESTED_DENARS}{GOLD_ICON} denars and you can keep whatever else you can squeeze out of them. Are you interested?[if:convo_calm_friendly]");
          explanationByIssueGiver.SetTextVariable("TOTAL_REQUESTED_DENARS", this.TotalRequestedDenars);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get
        {
          return new TextObject("{=dAmK7rKG}All right. I will visit your villages and collect your rent.");
        }
      }

      public override bool IsThereAlternativeSolution => false;

      public override bool IsThereLordSolution => false;

      public override TextObject Title => new TextObject("{=zqrn2beP}Revenue Farming");

      public override TextObject Description
      {
        get
        {
          TextObject description = new TextObject("{=U8izV2lM}A {?ISSUE_GIVER.GENDER}lady{?}lord{\\?} is looking for someone to collect back rents that {?ISSUE_GIVER.GENDER}she{?}he{\\?} says are owed to {?ISSUE_GIVER.GENDER}her{?}him{\\?}.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject);
          return description;
        }
      }

      public RevenueFarmingIssue(Hero issueOwner, Settlement targetSettlement)
        : base(issueOwner, CampaignTime.DaysFromNow(20f))
      {
        this._targetSettlement = targetSettlement;
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        return issueEffect == DefaultIssueEffects.ClanInfluence ? -0.2f : 0.0f;
      }

      public override IssueBase.IssueFrequency GetFrequency()
      {
        return IssueBase.IssueFrequency.VeryCommon;
      }

      public override bool IssueStayAliveConditions()
      {
        return this._targetSettlement.OwnerClan == this.IssueOwner.Clan && this._targetSettlement.BoundVillages.Any<Village>((Func<Village, bool>) (x => !x.Settlement.IsRaided && !x.Settlement.IsUnderRaid));
      }

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueGiver,
        out IssueBase.PreconditionFlags flags,
        out Hero relationHero,
        out SkillObject skill)
      {
        flags = IssueBase.PreconditionFlags.None;
        relationHero = (Hero) null;
        skill = (SkillObject) null;
        if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
        {
          flags |= IssueBase.PreconditionFlags.Relation;
          relationHero = issueGiver;
        }
        if (FactionManager.IsAtWarAgainstFaction(issueGiver.MapFaction, Hero.MainHero.MapFaction))
          flags |= IssueBase.PreconditionFlags.AtWar;
        if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 40)
          flags |= IssueBase.PreconditionFlags.NotEnoughTroops;
        return flags == IssueBase.PreconditionFlags.None;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        List<RevenueFarmingIssueBehavior.RevenueVillage> revenueVillages = new List<RevenueFarmingIssueBehavior.RevenueVillage>();
        foreach (Village boundVillage in (List<Village>) this._targetSettlement.BoundVillages)
        {
          if (!boundVillage.Settlement.IsUnderRaid && !boundVillage.Settlement.IsRaided)
            revenueVillages.Add(new RevenueFarmingIssueBehavior.RevenueVillage(boundVillage, (int) ((double) boundVillage.Hearth * 4.0)));
        }
        return (QuestBase) new RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(20f), revenueVillages);
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }
    }

    public class RevenueFarmingIssueQuest : QuestBase
    {
      [SaveableField(10)]
      internal int _totalRequestedDenars;
      [SaveableField(20)]
      private readonly List<RevenueFarmingIssueBehavior.RevenueVillage> _revenueVillages;
      [SaveableField(30)]
      public bool CollectingRevenues;
      [SaveableField(40)]
      private readonly Dictionary<string, bool> _currentVillageEvents = new Dictionary<string, bool>();
      [SaveableField(50)]
      internal bool _allRevenuesAreCollected;
      [SaveableField(60)]
      private JournalLog _questProgressLog;

      internal static void AutoGeneratedStaticCollectObjectsRevenueFarmingIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._revenueVillages);
        collectedObjects.Add((object) this._currentVillageEvents);
        collectedObjects.Add((object) this._questProgressLog);
      }

      internal static object AutoGeneratedGetMemberValue_totalRequestedDenars(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest) o)._totalRequestedDenars;
      }

      internal static object AutoGeneratedGetMemberValueCollectingRevenues(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest) o).CollectingRevenues;
      }

      internal static object AutoGeneratedGetMemberValue_allRevenuesAreCollected(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest) o)._allRevenuesAreCollected;
      }

      internal static object AutoGeneratedGetMemberValue_revenueVillages(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest) o)._revenueVillages;
      }

      internal static object AutoGeneratedGetMemberValue_currentVillageEvents(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest) o)._currentVillageEvents;
      }

      internal static object AutoGeneratedGetMemberValue_questProgressLog(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest) o)._questProgressLog;
      }

      public override TextObject Title => new TextObject("{=zqrn2beP}Revenue Farming");

      public override bool IsRemainingTimeHidden => false;

      public List<RevenueFarmingIssueBehavior.RevenueVillage> RevenueVillages
      {
        get => this._revenueVillages;
      }

      public Settlement TargetSettlement { get; private set; }

      private TextObject QuestStartedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=b0WQfzNb}{QUEST_GIVER.LINK} the {?QUEST_GIVER.GENDER}lady{?}lord{\\?} of {TARGET_SETTLEMENT} told you that {?QUEST_GIVER.GENDER}she{?}he{\\?} wanted to grant revenue collection rights to a commander of good reputation who has enough men to suppress any resistance. {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you to visit all the villages that are bound to {TARGET_SETTLEMENT} and collect taxes and rents. You have agreed to collect the revenues after paying {QUEST_GIVER.LINK}'s share, {REQUESTED_DENARS}{GOLD_ICON} denars.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("TARGET_SETTLEMENT", this.TargetSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("REQUESTED_DENARS", this._totalRequestedDenars);
          return parent;
        }
      }

      private TextObject QuestCanceledWarDeclaredLog
      {
        get
        {
          TextObject parent = new TextObject("{=vW6kBki9}Your clan is now at war with {QUEST_GIVER.LINK}'s realm. Your agreement with {QUEST_GIVER.LINK} is canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject PlayerDeclaredWarQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=bqeWVVEE}Your actions have started a war with {QUEST_GIVER.LINK}'s faction. {?QUEST_GIVER.GENDER}She{?}He{\\?} cancels your agreement and the quest is a failure.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject QuestSuccessLog
      {
        get
        {
          TextObject parent = new TextObject("{=CEQhyvzj}You have completed the collection of revenues and paid {QUEST_GIVER.LINK} a fix sum in advance, as agreed.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject QuestBetrayedLog
      {
        get
        {
          TextObject parent = new TextObject("{=5ky3voFY}You have rejected handing over the revenue to the {QUEST_GIVER.LINK}. The {?QUEST_GIVER.GENDER}lady{?}lord{\\?} is deeply disappointed in you.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject QuestFailedWithTimeOutLogText
      {
        get
        {
          TextObject parent = new TextObject("{=RNdrvZJQ}You have failed to bring the revenues to the {?QUEST_GIVER.GENDER}lady{?}lord{\\?} in time.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject AllRevenuesAreCollectedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=ywlzjQfN}{QUEST_GIVER.LINK} wants {TOTAL_REQUESTED_DENARS}{GOLD_ICON} that you have collected from {?QUEST_GIVER.GENDER}her{?}his{\\?} fiefs. You can either give the denars to the {?QUEST_GIVER.GENDER}lady{?}lord{\\?} yourself, or hand them over to a steward of the {?QUEST_GIVER.GENDER}lady{?}lord{\\?}, which can be found in the castles and towns that belong to the {?QUEST_GIVER.GENDER}lady{?}lord{\\?}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("TOTAL_REQUESTED_DENARS", this._totalRequestedDenars);
          return parent;
        }
      }

      public RevenueFarmingIssueQuest(
        string questId,
        Hero giverHero,
        CampaignTime duration,
        List<RevenueFarmingIssueBehavior.RevenueVillage> revenueVillages)
        : base(questId, giverHero, duration, 0)
      {
        this._revenueVillages = revenueVillages;
        this.TargetSettlement = this._revenueVillages[0].Village.Bound;
        foreach (RevenueFarmingIssueBehavior.VillageEvent villageEvent in Campaign.Current.GetCampaignBehavior<RevenueFarmingIssueBehavior>()._villageEvents)
          this._currentVillageEvents.Add(villageEvent.Id, false);
        foreach (RevenueFarmingIssueBehavior.RevenueVillage revenueVillage in revenueVillages)
          this._totalRequestedDenars += revenueVillage.TargetAmount / 3;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this._questProgressLog = this.AddDiscreteLog(this.QuestStartedLogText, new TextObject("{=bC5aMfG0}Villages"), 0, this._revenueVillages.Count, hideInformation: true);
        foreach (RevenueFarmingIssueBehavior.RevenueVillage revenueVillage in this._revenueVillages)
          this.AddTrackedObject((ITrackableCampaignObject) revenueVillage.Village.Settlement);
      }

      protected override void SetDialogs()
      {
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=PXigJyMs}Excellent. You are acting in my name now. Try to be polite but you have every right to use force if they don't cough up what's owed. Good luck.[ib:confident2][if:convo_bored2]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=tthBNejU}Have you collected the revenues?[if:convo_undecided_open]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).BeginPlayerOptions().PlayerOption(new TextObject("{=jQsr4vDO}I'm still working on it.")).NpcLine(new TextObject("{=BI1UnHaB}Good, good. This takes time, I know, but don't keep me waiting too long.[if:convo_mocking_aristocratic]")).Consequence(new ConversationSentence.OnConsequenceDelegate(MapEventHelper.OnConversationEnd)).CloseDialog().PlayerOption(new TextObject("{=ORl6qiOj}Yes, here is your share.")).Condition((ConversationSentence.OnConditionDelegate) (() => this._allRevenuesAreCollected)).ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.TurnQuestInClickableCondition)).NpcLine(new TextObject("{=MKYzHFKB}Thank you for your help.[if:convo_delighted]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
        {
          this.QuestCompletedWithSuccess();
          MapEventHelper.OnConversationEnd();
        })).CloseDialog().PlayerOption(new TextObject("{=kj3WQY1V}Maybe I should keep this to myself.")).Condition((ConversationSentence.OnConditionDelegate) (() => this._allRevenuesAreCollected)).NpcLine(new TextObject("{=82aiVoV9}You will regret this in the long run...[ib:closed2][if:convo_angry]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
        {
          this.QuestCompletedWithBetray();
          MapEventHelper.OnConversationEnd();
        })).CloseDialog().PlayerOption(new TextObject("{=G5tyQj6N}Not yet.")).NpcLine(new TextObject("{=UXCjNTjF}Hurry up. I don't have that much time.[if:convo_annoyed]")).Consequence(new ConversationSentence.OnConsequenceDelegate(MapEventHelper.OnConversationEnd)).CloseDialog().EndPlayerOptions();
      }

      private bool TurnQuestInClickableCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        if (Hero.MainHero.Gold >= RevenueFarmingIssueBehavior.Instance._totalRequestedDenars)
          return true;
        explanation = new TextObject("{=QOWyEJrm}You don't have enough denars.");
        return false;
      }

      protected override void OnBeforeTimedOut(
        ref bool completeWithSuccess,
        ref bool doNotResolveTheQuest)
      {
        this.RelationshipChangeWithQuestGiver = -5;
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -30)
        });
        if (Hero.MainHero.Gold < this._totalRequestedDenars)
          return;
        this.ShowQuestResolvePopUp();
        doNotResolveTheQuest = true;
      }

      protected override void OnTimedOut() => this.AddLog(this.QuestFailedWithTimeOutLogText);

      protected override void RegisterEvents()
      {
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.VillageBeingRaided.AddNonSerializedListener((object) this, new Action<Village>(this.OnVillageRaid));
        CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      }

      private void OnSettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        if (settlement != this.TargetSettlement || oldOwner != this.QuestGiver)
          return;
        TextObject textObject = new TextObject("{=1m68Nsze}{QUEST_GIVER.LINK} has lost {SETTLEMENT} and your agreement with {?QUEST_GIVER.GENDER}her{?}him{\\?} has been canceled.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        textObject.SetTextVariable("SETTLEMENT", this.TargetSettlement.EncyclopediaLinkWithName);
        this.CompleteQuestWithCancel(textObject);
      }

      private void OnMapEventStarted(
        MapEvent mapEvent,
        PartyBase attackerParty,
        PartyBase defenderParty)
      {
        if (!QuestHelper.CheckMinorMajorCoercion((QuestBase) this, mapEvent, attackerParty))
          return;
        QuestHelper.ApplyGenericMinorMajorCoercionConsequences((QuestBase) this, mapEvent);
      }

      private void OnVillageRaid(Village village)
      {
        RevenueFarmingIssueBehavior.RevenueVillage revenueVillage = this._revenueVillages.FirstOrDefault<RevenueFarmingIssueBehavior.RevenueVillage>((Func<RevenueFarmingIssueBehavior.RevenueVillage, bool>) (x => x.Village.Id == village.Id));
        if (revenueVillage == null || revenueVillage.IsRaided)
          return;
        TextObject textObject = new TextObject("{=k8U0928J}{VILLAGE} has been raided. {QUEST_GIVER.LINK} asks you to exempt them, but still wants you to collect {AMOUNT}{GOLD_ICON} denars from rest of {?QUEST_GIVER.GENDER}her{?}his{\\?} villages.");
        textObject.SetTextVariable("VILLAGE", village.Settlement.EncyclopediaLinkWithName);
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        this._totalRequestedDenars -= revenueVillage.TargetAmount / 3;
        textObject.SetTextVariable("AMOUNT", this._totalRequestedDenars);
        revenueVillage.SetDone();
        revenueVillage.IsRaided = true;
        this.AddLog(textObject);
        this._questProgressLog.UpdateCurrentProgress(this._questProgressLog.CurrentProgress + 1);
        if (this.CollectingRevenues)
          this.CollectingRevenues = false;
        if (!this._revenueVillages.All<RevenueFarmingIssueBehavior.RevenueVillage>((Func<RevenueFarmingIssueBehavior.RevenueVillage, bool>) (x => x.IsRaided)))
          return;
        this.CompleteQuestWithCancel(new TextObject("{=44f1ff0q}All the villages of {QUEST_GIVER.LINK} has been raided and your agreement with {?QUEST_GIVER.GENDER}her{?}him{\\?} has been canceled."));
      }

      protected override void HourlyTick()
      {
        if (!this.IsOngoing)
          return;
        if (!this._allRevenuesAreCollected && this._revenueVillages.All<RevenueFarmingIssueBehavior.RevenueVillage>((Func<RevenueFarmingIssueBehavior.RevenueVillage, bool>) (x => x.GetIsCompleted())))
          this.OnAllRevenuesAreCollected();
        if (!this.CollectingRevenues)
          return;
        this.ProgressRevenueCollectionForVillage();
      }

      private void OnAllRevenuesAreCollected()
      {
        this._allRevenuesAreCollected = true;
        this.AddLog(this.AllRevenuesAreCollectedLogText);
      }

      public void RevenuesAreDeliveredToSteward()
      {
        MBInformationManager.AddQuickInformation(new TextObject("{=RCa0DpAo}You have handed over the revenue to the steward"));
        this.QuestCompletedWithSuccess();
      }

      private void ShowQuestResolvePopUp()
      {
        TextObject parent = new TextObject("{=I9GYdYZx}{?QUEST_GIVER.GENDER}Lady{?}Lord{\\?} {QUEST_GIVER.NAME} wants {TOTAL_REQUESTED_DENARS}{GOLD_ICON} denars that you have collected from {?QUEST_GIVER.GENDER}her{?}his{\\?} fiefs. {?QUEST_GIVER.GENDER}She{?}He{\\?} has sent {?QUEST_GIVER.GENDER}her{?}his{\\?} steward to you to collect it. If you refuse this will be counted as a crime and {?QUEST_GIVER.GENDER}her{?}his{\\?} faction may declare war on you.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
        parent.SetTextVariable("TOTAL_REQUESTED_DENARS", this._totalRequestedDenars);
        InformationManager.ShowInquiry(new InquiryData(this.Title.ToString(), parent.ToString(), true, true, new TextObject("{=plZVwdlL}Send the revenue").ToString(), new TextObject("{=asa9HaIQ}Keep the revenue").ToString(), new Action(this.QuestCompletedWithSuccess), new Action(this.QuestCompletedWithBetray)));
        Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
        if (!this.CollectingRevenues)
          return;
        this.CollectingRevenues = false;
      }

      private void QuestCompletedWithSuccess()
      {
        GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, this._totalRequestedDenars);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, 30)
        });
        this.RelationshipChangeWithQuestGiver = 5;
        this.AddLog(this.QuestSuccessLog);
        this.CompleteQuestWithSuccess();
      }

      private void QuestCompletedWithBetray()
      {
        ChangeCrimeRatingAction.Apply(this.QuestGiver.MapFaction, 45f);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -100)
        });
        this.RelationshipChangeWithQuestGiver = -15;
        this.AddLog(this.QuestBetrayedLog);
        this.CompleteQuestWithBetrayal();
      }

      private void OnClanChangedKingdom(
        Clan clan,
        Kingdom oldKingdom,
        Kingdom newKingdom,
        ChangeKingdomAction.ChangeKingdomActionDetail detail,
        bool showNotification = true)
      {
        if (!this.QuestGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          return;
        this.CompleteQuestWithCancel(this.QuestCanceledWarDeclaredLog);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this.PlayerDeclaredWarQuestLogText, this.QuestCanceledWarDeclaredLog);
      }

      protected override void OnFinalize()
      {
        if (Campaign.Current.CurrentMenuContext == null || !this._currentVillageEvents.Any<KeyValuePair<string, bool>>((Func<KeyValuePair<string, bool>, bool>) (x => x.Key == Campaign.Current.CurrentMenuContext.GameMenu.StringId)) && !(Campaign.Current.CurrentMenuContext.GameMenu.StringId == "village_collect_revenue"))
          return;
        if (Game.Current.GameStateManager.ActiveState is MapState)
          PlayerEncounter.Finish();
        else
          GameMenu.SwitchToMenu("village_outside");
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this.TargetSettlement = this._revenueVillages[0].Village.Bound;
        this.SetDialogs();
      }

      public RevenueFarmingIssueBehavior.RevenueVillage FindCurrentRevenueVillage()
      {
        foreach (RevenueFarmingIssueBehavior.RevenueVillage revenueVillage in this._revenueVillages)
        {
          if (revenueVillage.Village.Id == Settlement.CurrentSettlement.Village.Id)
            return revenueVillage;
        }
        return (RevenueFarmingIssueBehavior.RevenueVillage) null;
      }

      private void ProgressRevenueCollectionForVillage()
      {
        RevenueFarmingIssueBehavior.RevenueVillage currentRevenueVillage = this.FindCurrentRevenueVillage();
        if (!currentRevenueVillage.EventOccurred && (double) currentRevenueVillage.CollectProgress >= 0.30000001192092896)
        {
          RevenueFarmingIssueBehavior behavior = Campaign.Current.GetCampaignBehavior<RevenueFarmingIssueBehavior>();
          KeyValuePair<string, bool> elementInefficiently = this._currentVillageEvents.Where<KeyValuePair<string, bool>>((Func<KeyValuePair<string, bool>, bool>) (x => !x.Value && behavior._villageEvents.Any<RevenueFarmingIssueBehavior.VillageEvent>((Func<RevenueFarmingIssueBehavior.VillageEvent, bool>) (y => y.Id == x.Key)))).GetRandomElementInefficiently<KeyValuePair<string, bool>>();
          this._currentVillageEvents[elementInefficiently.Key] = true;
          behavior.OnVillageEventWithIdSpawned(elementInefficiently.Key);
          currentRevenueVillage.EventOccurred = true;
          GameMenu.SwitchToMenu(elementInefficiently.Key);
          Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
        }
        else
        {
          currentRevenueVillage.CollectedAmount += currentRevenueVillage.HourlyGain;
          GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, currentRevenueVillage.HourlyGain);
          if (!currentRevenueVillage.GetIsCompleted())
            return;
          this.SetVillageAsCompleted(currentRevenueVillage);
        }
      }

      public void SetVillageAsCompleted(
        RevenueFarmingIssueBehavior.RevenueVillage village,
        bool addLog = true)
      {
        this.CollectingRevenues = false;
        village.SetDone();
        this.RemoveTrackedObject((ITrackableCampaignObject) village.Village.Settlement);
        GameMenu.SwitchToMenu(nameof (village));
        this._questProgressLog.UpdateCurrentProgress(this._questProgressLog.CurrentProgress + 1);
        if (addLog)
        {
          TextObject text = new TextObject("{=mQqN8Fg0}Your men have collected {TOTAL_COLLECTED_FROM_VILLAGE}{GOLD_ICON} denars and completed the revenue collection from {VILLAGE}.");
          text.SetTextVariable("TOTAL_COLLECTED_FROM_VILLAGE", village.CollectedAmount);
          text.SetTextVariable("VILLAGE", village.Village.Settlement.EncyclopediaLinkWithName);
          this.AddLog(text);
        }
        if (this._allRevenuesAreCollected || !this._revenueVillages.All<RevenueFarmingIssueBehavior.RevenueVillage>((Func<RevenueFarmingIssueBehavior.RevenueVillage, bool>) (x => x.GetIsCompleted())))
          return;
        this.OnAllRevenuesAreCollected();
      }
    }

    public class VillageEvent
    {
      public readonly string Id;
      public readonly string MainEventText;
      public TextObject MainLog;
      public List<RevenueFarmingIssueBehavior.VillageEventOptionData> OptionConditionsAndConsequences;

      internal static void AutoGeneratedStaticCollectObjectsVillageEvent(
        object o,
        List<object> collectedObjects)
      {
        ((RevenueFarmingIssueBehavior.VillageEvent) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
      }

      public VillageEvent(
        string id,
        string mainEventText,
        TextObject mainLog,
        List<RevenueFarmingIssueBehavior.VillageEventOptionData> optionConditionsAndConsequences)
      {
        this.Id = id;
        this.MainEventText = mainEventText;
        this.MainLog = mainLog;
        this.OptionConditionsAndConsequences = optionConditionsAndConsequences;
      }
    }

    public class RevenueVillage
    {
      [SaveableField(1)]
      public readonly Village Village;
      [SaveableField(2)]
      public readonly int TargetAmount;
      [SaveableField(3)]
      public int CollectedAmount;
      [SaveableField(4)]
      public int HourlyGain;
      [SaveableField(5)]
      private bool _isDone;
      [SaveableField(6)]
      public bool EventOccurred;
      [SaveableField(7)]
      public bool IsRaided;
      [SaveableField(8)]
      private float _customProgress;

      internal static void AutoGeneratedStaticCollectObjectsRevenueVillage(
        object o,
        List<object> collectedObjects)
      {
        ((RevenueFarmingIssueBehavior.RevenueVillage) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.Village);
      }

      internal static object AutoGeneratedGetMemberValueVillage(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o).Village;
      }

      internal static object AutoGeneratedGetMemberValueTargetAmount(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o).TargetAmount;
      }

      internal static object AutoGeneratedGetMemberValueCollectedAmount(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o).CollectedAmount;
      }

      internal static object AutoGeneratedGetMemberValueHourlyGain(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o).HourlyGain;
      }

      internal static object AutoGeneratedGetMemberValueEventOccurred(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o).EventOccurred;
      }

      internal static object AutoGeneratedGetMemberValueIsRaided(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o).IsRaided;
      }

      internal static object AutoGeneratedGetMemberValue_isDone(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o)._isDone;
      }

      internal static object AutoGeneratedGetMemberValue_customProgress(object o)
      {
        return (object) ((RevenueFarmingIssueBehavior.RevenueVillage) o)._customProgress;
      }

      public float CollectProgress
      {
        get
        {
          return (this.CollectedAmount == 0 ? 0.0f : (float) this.CollectedAmount / (float) this.TargetAmount) + this._customProgress;
        }
      }

      public void SetDone() => this._isDone = true;

      public RevenueVillage(Village village, int targetAmount)
      {
        this.Village = village;
        this.TargetAmount = targetAmount;
        this.CollectedAmount = 0;
        this.HourlyGain = targetAmount / 10;
        this._isDone = false;
        this.EventOccurred = false;
        this.IsRaided = false;
        this._customProgress = 0.0f;
      }

      public void SetAdditionalProgress(float progress) => this._customProgress = progress;

      public bool GetIsCompleted()
      {
        return this._isDone || (double) this.CollectProgress >= 1.0 || this.CollectedAmount >= this.TargetAmount;
      }
    }

    public class RevenueFarmingIssueBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public RevenueFarmingIssueBehaviorTypeDefiner()
        : base(850000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (RevenueFarmingIssueBehavior.RevenueFarmingIssue), 1);
        this.AddClassDefinition(typeof (RevenueFarmingIssueBehavior.RevenueFarmingIssueQuest), 2);
        this.AddClassDefinition(typeof (RevenueFarmingIssueBehavior.VillageEvent), 3);
        this.AddClassDefinition(typeof (RevenueFarmingIssueBehavior.RevenueVillage), 4);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (List<RevenueFarmingIssueBehavior.RevenueVillage>));
        this.ConstructContainerDefinition(typeof (List<RevenueFarmingIssueBehavior.VillageEvent>));
        this.ConstructContainerDefinition(typeof (Dictionary<string, bool>));
      }
    }

    public struct VillageEventOptionData
    {
      public readonly string Text;
      public readonly GameMenuOption.OnConditionDelegate OnCondition;
      public readonly GameMenuOption.OnConsequenceDelegate OnConsequence;
      public readonly bool IsLeave;

      public VillageEventOptionData(
        string text,
        GameMenuOption.OnConditionDelegate onCondition,
        GameMenuOption.OnConsequenceDelegate onConsequence,
        bool isLeave = false)
      {
        this.Text = text;
        this.OnCondition = onCondition;
        this.OnConsequence = onConsequence;
        this.IsLeave = isLeave;
      }
    }
  }
}
