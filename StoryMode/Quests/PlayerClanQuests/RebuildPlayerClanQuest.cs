// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.PlayerClanQuests.RebuildPlayerClanQuest
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.PlayerClanQuests
{
  public class RebuildPlayerClanQuest : StoryModeQuestBase
  {
    private const int GoldGoal = 2000;
    private const int PartySizeGoal = 20;
    private const int ClanTierRenownGoal = 50;
    private const int RenownReward = 25;
    private const int HiredCompanionGoal = 1;
    [SaveableField(1)]
    private JournalLog _goldGoalLog;
    [SaveableField(2)]
    private JournalLog _partySizeGoalLog;
    [SaveableField(3)]
    private JournalLog _clanTierGoalLog;
    [SaveableField(4)]
    private JournalLog _hireCompanionGoalLog;
    private bool _finishQuest;

    private TextObject _startQuestLogText
    {
      get
      {
        return new TextObject("{=IITkXnnU}Calradia is a land full of peril - but also opportunities. To face the challenges that await, you will need to build up your clan.\nYour brother told you that there are many ways to go about this but that none forego coin. Trade would be one means to this end, fighting and selling off captured bandits in town another. Whatever path you choose to pursue, travelling alone would make you easy pickings for whomever came across your trail.\nYou know that you can recruit men to follow you from the notables of villages and towns, though they may ask you for a favor or two of their own before they allow you access to their more valued fighters.\nNaturally, you may also find more unique characters in the taverns of Calradia. However, these tend to favor more established clans.");
      }
    }

    private TextObject _goldGoalLogText
    {
      get => new TextObject("{=bXYFXLgg}Increase your denars by 1000");
    }

    private TextObject _partySizeGoalLogText
    {
      get
      {
        TextObject partySizeGoalLogText = new TextObject("{=b6hQWKHe}Grow your party to {PARTY_SIZE} men");
        partySizeGoalLogText.SetTextVariable("PARTY_SIZE", 20);
        return partySizeGoalLogText;
      }
    }

    private TextObject _clanTierGoalLogText => new TextObject("{=RbXiEdXk}Reach Clan Tier 1");

    private TextObject _hireCompanionGoalLogText => new TextObject("{=e8Tjf8Ph}Hire 1 Companion");

    private TextObject _successLogText
    {
      get => new TextObject("{=eJX7rhch}You have successfully rebuilt your clan.");
    }

    public override TextObject Title => new TextObject("{=bESRdcRo}Establish Your Clan");

    public RebuildPlayerClanQuest()
      : base("rebuild_player_clan_storymode_quest", (Hero) null, CampaignTime.Never)
    {
      this._finishQuest = false;
      this.SetDialogs();
    }

    protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

    protected override void RegisterEvents()
    {
      CampaignEvents.HeroOrPartyTradedGold.AddNonSerializedListener((object) this, new Action<(Hero, PartyBase), (Hero, PartyBase), (int, string), bool>(this.HeroOrPartyTradedGold));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.OnTroopRecruitedEvent.AddNonSerializedListener((object) this, new Action<Hero, Settlement, Hero, CharacterObject, int>(this.OnTroopRecruited));
      CampaignEvents.RenownGained.AddNonSerializedListener((object) this, new Action<Hero, int, bool>(this.OnRenownGained));
      CampaignEvents.NewCompanionAdded.AddNonSerializedListener((object) this, new Action<Hero>(this.OnNewCompanionAdded));
    }

    protected override void OnStartQuest()
    {
      this.AddLog(this._startQuestLogText, true);
      this._goldGoalLog = this.AddDiscreteLog(this._goldGoalLogText, new TextObject("{=hYgmzZJX}Denars"), Hero.MainHero.Gold, 2000, hideInformation: true);
      this._partySizeGoalLog = this.AddDiscreteLog(this._partySizeGoalLogText, new TextObject("{=DO4PE3Oo}Current Party Size"), 1, 20, hideInformation: true);
      this._clanTierGoalLog = this.AddDiscreteLog(this._clanTierGoalLogText, new TextObject("{=aZxHIra4}Renown"), (int) Clan.PlayerClan.Renown, 50, hideInformation: true);
      this._hireCompanionGoalLog = this.AddDiscreteLog(this._hireCompanionGoalLogText, new TextObject("{=VLD5416o}Companion Hired"), 0, 1, hideInformation: true);
    }

    protected override void OnCompleteWithSuccess()
    {
      GainRenownAction.Apply(Hero.MainHero, 25f);
      this.AddLog(this._successLogText);
    }

    protected override void SetDialogs()
    {
    }

    private void HeroOrPartyTradedGold(
      (Hero, PartyBase) giver,
      (Hero, PartyBase) recipient,
      (int, string) goldAmount,
      bool showNotification)
    {
      this.UpdateProgresses();
    }

    protected override void HourlyTick() => this.UpdateProgresses();

    private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      this.UpdateProgresses();
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      this.UpdateProgresses();
    }

    private void OnMapEventEnded(MapEvent mapEvent) => this.UpdateProgresses();

    private void OnTroopRecruited(
      Hero recruiterHero,
      Settlement recruitmentSettlement,
      Hero recruitmentSource,
      CharacterObject troop,
      int amount)
    {
      this.UpdateProgresses();
    }

    private void OnRenownGained(Hero hero, int gainedRenown, bool doNotNotify)
    {
      this.UpdateProgresses();
    }

    private void OnNewCompanionAdded(Hero newCompanion) => this.UpdateProgresses();

    private void UpdateProgresses()
    {
      this._goldGoalLog.UpdateCurrentProgress(Hero.MainHero.Gold > 2000 ? 2000 : Hero.MainHero.Gold);
      this._partySizeGoalLog.UpdateCurrentProgress(PartyBase.MainParty.MemberRoster.TotalManCount > 20 ? 20 : PartyBase.MainParty.MemberRoster.TotalManCount);
      this._clanTierGoalLog.UpdateCurrentProgress((double) Clan.PlayerClan.Renown > 50.0 ? 50 : (int) Clan.PlayerClan.Renown);
      this._hireCompanionGoalLog.UpdateCurrentProgress(Clan.PlayerClan.Companions.Count > 1 ? 1 : Clan.PlayerClan.Companions.Count);
      if (this._goldGoalLog.CurrentProgress < 2000 || this._partySizeGoalLog.CurrentProgress < 20 || this._clanTierGoalLog.CurrentProgress < 50 || this._hireCompanionGoalLog.CurrentProgress < 1 || this._finishQuest)
        return;
      this._finishQuest = true;
      this.CompleteQuestWithSuccess();
    }

    internal static void AutoGeneratedStaticCollectObjectsRebuildPlayerClanQuest(
      object o,
      List<object> collectedObjects)
    {
      ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this._goldGoalLog);
      collectedObjects.Add((object) this._partySizeGoalLog);
      collectedObjects.Add((object) this._clanTierGoalLog);
      collectedObjects.Add((object) this._hireCompanionGoalLog);
    }

    internal static object AutoGeneratedGetMemberValue_goldGoalLog(object o)
    {
      return (object) ((RebuildPlayerClanQuest) o)._goldGoalLog;
    }

    internal static object AutoGeneratedGetMemberValue_partySizeGoalLog(object o)
    {
      return (object) ((RebuildPlayerClanQuest) o)._partySizeGoalLog;
    }

    internal static object AutoGeneratedGetMemberValue_clanTierGoalLog(object o)
    {
      return (object) ((RebuildPlayerClanQuest) o)._clanTierGoalLog;
    }

    internal static object AutoGeneratedGetMemberValue_hireCompanionGoalLog(object o)
    {
      return (object) ((RebuildPlayerClanQuest) o)._hireCompanionGoalLog;
    }
  }
}
