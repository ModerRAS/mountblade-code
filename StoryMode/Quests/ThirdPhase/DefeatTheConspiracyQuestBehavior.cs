// Decompiled with JetBrains decompiler
// Type: StoryMode.Quests.ThirdPhase.DefeatTheConspiracyQuestBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.SceneInformationPopupTypes;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace StoryMode.Quests.ThirdPhase
{
  public class DefeatTheConspiracyQuestBehavior : CampaignBehaviorBase
  {
    private const int TroopCountPerNewLord = 200;
    private bool _hasBeenFinalized;

    private TextObject _empireUnitedText
    {
      get => new TextObject("{=zTYd6Qai}The Empire has been united under the {FACTION}!");
    }

    private TextObject _empireDefeatedText
    {
      get => new TextObject("{=rCX81DDR}The Empire has been destroyed!");
    }

    public override void RegisterEvents()
    {
      StoryModeEvents.OnConspiracyActivatedEvent.AddNonSerializedListener((object) this, new Action(this.OnConspiracyActivated));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
    }

    private void OnConspiracyActivated() => this.InitializeFinalPhase();

    private void HourlyTick()
    {
      if (StoryModeManager.Current.MainStoryLine.ThirdPhase == null || !StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms.IsEmpty<Kingdom>() || this._hasBeenFinalized)
        return;
      this._hasBeenFinalized = true;
      TextObject textObject1 = new TextObject("{=R4Gqskgq}Victory");
      TextObject textObject2 = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? this._empireUnitedText : this._empireDefeatedText;
      textObject2.SetTextVariable("FACTION", StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom.Name);
      TextObject textObject3 = new TextObject("{=DM6luo3c}Continue");
      InformationManager.ShowInquiry(new InquiryData(textObject1.ToString(), textObject2.ToString(), true, false, textObject3.ToString(), "", (Action) (() =>
      {
        string videoFile;
        string audioFile;
        string subtitleFile;
        if (StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine)
        {
          videoFile = "imperial_outro";
          audioFile = "imperial_outro";
          subtitleFile = "imperial_outro";
        }
        else
        {
          videoFile = "anti_imperial_outro";
          audioFile = "anti_imperial_outro";
          subtitleFile = "anti_imperial_outro";
        }
        Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
        DefeatTheConspiracyQuestBehavior.PlayOutroCinematic(videoFile, audioFile, subtitleFile, new Action(this.ShowGameStatistics));
      }), (Action) null), true);
    }

    protected void InitializeFinalPhase()
    {
      int num1 = StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? 1 : 0;
      List<Kingdom> list1 = Kingdom.All.Where<Kingdom>((Func<Kingdom, bool>) (t => StoryModeData.IsKingdomImperial(t) && t != StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom && !t.IsEliminated)).ToList<Kingdom>();
      List<Kingdom> list2 = Kingdom.All.Where<Kingdom>((Func<Kingdom, bool>) (t => !StoryModeData.IsKingdomImperial(t) && t != StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom && !t.IsEliminated)).ToList<Kingdom>();
      List<DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest> theConspiracyQuestList = new List<DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest>();
      List<Kingdom> list3;
      List<Kingdom> kingdomList;
      if (num1 != 0)
      {
        if (list2.IsEmpty<Kingdom>())
        {
          Kingdom elementWithPredicate = Kingdom.All.GetRandomElementWithPredicate<Kingdom>((Func<Kingdom, bool>) (t => !StoryModeData.IsKingdomImperial(t)));
          elementWithPredicate.ReactivateKingdom();
          list2.Add(elementWithPredicate);
        }
        list3 = list2.OrderByDescending<Kingdom, float>((Func<Kingdom, float>) (t => t.TotalStrength)).Take<Kingdom>(3).ToList<Kingdom>();
        kingdomList = new List<Kingdom>()
        {
          StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom
        };
        for (int index1 = 0; index1 < list2.Count; ++index1)
        {
          for (int index2 = index1 + 1; index2 < list2.Count; ++index2)
          {
            if (!FactionManager.IsAlliedWithFaction((IFaction) list2[index1], (IFaction) list2[index2]))
              MakePeaceAction.Apply((IFaction) list2[index1], (IFaction) list2[index2]);
          }
        }
      }
      else
      {
        if (list1.IsEmpty<Kingdom>())
        {
          Kingdom elementWithPredicate = Kingdom.All.GetRandomElementWithPredicate<Kingdom>(new Func<Kingdom, bool>(StoryModeData.IsKingdomImperial));
          elementWithPredicate.ReactivateKingdom();
          list1.Add(elementWithPredicate);
        }
        list3 = list1.ToList<Kingdom>();
        kingdomList = new List<Kingdom>()
        {
          StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom
        };
        for (int index3 = 0; index3 < list1.Count; ++index3)
        {
          for (int index4 = index3 + 1; index4 < list1.Count; ++index4)
          {
            if (!FactionManager.IsAlliedWithFaction((IFaction) list1[index3], (IFaction) list1[index4]))
              MakePeaceAction.Apply((IFaction) list1[index3], (IFaction) list1[index4]);
          }
        }
      }
      foreach (Kingdom kingdom in kingdomList)
        StoryModeManager.Current.MainStoryLine.ThirdPhase.AddAllyKingdom(kingdom);
      int num2 = 0;
      foreach (Kingdom kingdom in list3)
      {
        StoryModeManager.Current.MainStoryLine.ThirdPhase.AddOppositionKingdom(kingdom);
        DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest theConspiracyQuest = new DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest("defeat_the_conspiracy_quest_" + (object) num2, kingdom);
        ++num2;
        theConspiracyQuest.StartQuest();
        theConspiracyQuestList.Add(theConspiracyQuest);
      }
      Dictionary<Kingdom, int> dictionary = new Dictionary<Kingdom, int>();
      float conspiracyStrength = StoryModeManager.Current.MainStoryLine.SecondPhase.ConspiracyStrength;
      List<float> floatList = new List<float>()
      {
        0.5f,
        0.3f,
        0.2f
      };
      int index5 = 0;
      for (int index6 = 0; index6 < floatList.Count; ++index6)
      {
        if (index5 > list3.Count - 1)
          index5 = 0;
        Kingdom key = list3[index5];
        if (!dictionary.ContainsKey(key))
          dictionary.Add(key, 0);
        dictionary[key] += (int) ((double) conspiracyStrength * (double) floatList[index6]);
        ++index5;
      }
      foreach (KeyValuePair<Kingdom, int> keyValuePair in dictionary)
      {
        Kingdom kingdom = keyValuePair.Key;
        MBList<MobileParty> mbList1 = new MBList<MobileParty>();
        foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) kingdom.WarPartyComponents)
        {
          if (warPartyComponent.Leader != null)
            mbList1.Add(warPartyComponent.MobileParty);
        }
        MBList<CharacterObject> mbList2 = CharacterHelper.GetTroopTree(kingdom.Culture.BasicTroop, 3f, 6f).ToMBList<CharacterObject>();
        int num3 = keyValuePair.Value / 2;
        int num4 = num3 / 200;
        List<Hero> source = new List<Hero>();
        Clan clan = (Clan) null;
        for (int index7 = 0; index7 < num4; ++index7)
        {
          if (clan == null || clan.Lords.Count >= clan.CommanderLimit)
          {
            TextObject clanName = NameGenerator.Current.GenerateClanName(kingdom.Culture, Settlement.All.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (t => t.Culture == kingdom.Culture && t.IsVillage)));
            clan = Clan.CreateClan("main_storyline_clan_" + clanName.ToString() + "_" + (object) Clan.All.Count<Clan>((Func<Clan, bool>) (t => t.Name == clanName)));
            clan.InitializeClan(clanName, clanName, kingdom.Culture, Banner.CreateRandomClanBanner());
            clan.IsNoble = true;
          }
          MBList<Settlement> mbList3 = kingdom.Settlements.Where<Settlement>((Func<Settlement, bool>) (t => !t.IsUnderSiege && !t.IsUnderRaid)).ToMBList<Settlement>();
          Settlement settlement = (Settlement) null;
          if (!mbList3.IsEmpty<Settlement>())
            settlement = mbList3.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (t => t.IsTown)) ?? mbList3.GetRandomElement<Settlement>();
          Hero specialHero = HeroCreator.CreateSpecialHero((mbList1.Count > 0 ? mbList1.GetRandomElement<MobileParty>().LeaderHero : Hero.AllAliveHeroes.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (t => t.Occupation == Occupation.Lord))).CharacterObject, settlement, clan);
          GiveGoldAction.ApplyBetweenCharacters((Hero) null, specialHero, 2000, true);
          specialHero.ChangeState(Hero.CharacterStates.Active);
          if (clan.Leader == null)
            clan.SetLeader(specialHero);
          if (clan.Kingdom != kingdom)
            ChangeKingdomAction.ApplyByJoinToKingdom(clan, kingdom, false);
          if (clan.Kingdom.RulingClan == null || clan.Kingdom.RulingClan.IsEliminated)
            ChangeRulingClanAction.Apply(clan.Kingdom, clan);
          MobileParty mobileParty;
          if (settlement != null)
          {
            specialHero.BornSettlement = settlement;
            EnterSettlementAction.ApplyForCharacterOnly(specialHero, settlement);
            mobileParty = clan.CreateNewMobileParty(specialHero);
          }
          else
          {
            Clan rulingClan = kingdom.RulingClan;
            Vec2 vec2 = rulingClan != null ? rulingClan.InitialPosition : kingdom.InitialPosition;
            if (!PartyBase.IsPositionOkForTraveling(vec2))
              vec2 = Campaign.Current.MapSceneWrapper.GetAccessiblePointNearPosition(vec2, 50f);
            mobileParty = clan.CreateNewMobilePartyAtPosition(specialHero, vec2);
            specialHero.BornSettlement = Settlement.All.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (t => t.IsTown || t.IsVillage));
          }
          mobileParty.MemberRoster.AddToCounts(mbList2.GetRandomElement<CharacterObject>(), 200);
          mobileParty.ItemRoster.AddToCounts(DefaultItems.Grain, 10);
          mobileParty.ItemRoster.AddToCounts(DefaultItems.Meat, 5);
          source.Add(specialHero);
        }
        if (mbList1.IsEmpty<MobileParty>())
          mbList1.AddRange(source.Select<Hero, MobileParty>((Func<Hero, MobileParty>) (t => t.PartyBelongedTo)));
        if (!mbList1.IsEmpty<MobileParty>())
        {
          int num5 = keyValuePair.Value - num3 + (num3 - source.Count * 200);
          int num6 = num5 / mbList1.Count;
          int num7 = num5 % mbList1.Count;
          if (num6 > 0)
          {
            foreach (MobileParty mobileParty in (List<MobileParty>) mbList1)
            {
              for (int index8 = 0; index8 < num6; ++index8)
                mobileParty.MemberRoster.AddToCounts(mbList2.GetRandomElement<CharacterObject>(), 1);
            }
          }
          if (num7 > 0)
          {
            MobileParty randomElement = mbList1.GetRandomElement<MobileParty>();
            for (int index9 = 0; index9 < num7; ++index9)
              randomElement.MemberRoster.AddToCounts(mbList2.GetRandomElement<CharacterObject>(), 1);
          }
        }
      }
      for (int index10 = 0; index10 < list3.Count; ++index10)
      {
        foreach (Clan clan in (List<Clan>) list3[index10].Clans)
          clan.UpdateStrength();
        if (!list3[index10].IsAtWarWith((IFaction) StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom))
        {
          ChangeRelationAction.ApplyPlayerRelation(list3[index10].Leader, -10);
          DeclareWarAction.ApplyByPlayerHostility((IFaction) list3[index10], (IFaction) StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom);
        }
      }
      foreach (DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest theConspiracyQuest in theConspiracyQuestList)
        theConspiracyQuest.CalculateReinforcedWarScore();
      Hero leader = list3[list3.IndexOfMax<Kingdom>((Func<Kingdom, int>) (k => (int) k.TotalStrength))].Leader;
      MBInformationManager.ShowSceneNotification(!StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? (SceneNotificationData) new ProEmpireConspiracyBeginsSceneNotificationItem(leader) : (SceneNotificationData) new AntiEmpireConspiracyBeginsSceneNotificationItem(leader, StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms.ToList<Kingdom>()));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<bool>("_hasBeenFinalized", ref this._hasBeenFinalized);
    }

    private static void PlayOutroCinematic(
      string videoFile,
      string audioFile,
      string subtitleFile,
      Action onVideoFinished)
    {
      VideoPlaybackState state = Game.Current.GameStateManager.CreateState<VideoPlaybackState>();
      string str = ModuleHelper.GetModuleFullPath("SandBox") + "Videos/CampaignOutro/";
      string videoPath = str + videoFile + ".ivf";
      string audioPath = str + audioFile + ".ogg";
      string subtitleFileBasePath = str + subtitleFile;
      state.SetStartingParameters(videoPath, audioPath, subtitleFileBasePath);
      state.SetOnVideoFinisedDelegate(onVideoFinished);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    private void ShowGameStatistics()
    {
      GameOverState state = Game.Current.GameStateManager.CreateState<GameOverState>((object) GameOverState.GameOverReason.Victory);
      Game.Current.GameStateManager.PopState();
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    internal class OppositionData
    {
      [SaveableField(10)]
      public float InitialWarScore;
      [SaveableField(20)]
      public float ReinforcedWarScore;
      [SaveableField(30)]
      public JournalLog QuestLog;
      [SaveableField(40)]
      public CampaignTime LastPeaceOfferDate = CampaignTime.Zero;

      internal static void AutoGeneratedStaticCollectObjectsOppositionData(
        object o,
        List<object> collectedObjects)
      {
        ((DefeatTheConspiracyQuestBehavior.OppositionData) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.QuestLog);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this.LastPeaceOfferDate, collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValueInitialWarScore(object o)
      {
        return (object) ((DefeatTheConspiracyQuestBehavior.OppositionData) o).InitialWarScore;
      }

      internal static object AutoGeneratedGetMemberValueReinforcedWarScore(object o)
      {
        return (object) ((DefeatTheConspiracyQuestBehavior.OppositionData) o).ReinforcedWarScore;
      }

      internal static object AutoGeneratedGetMemberValueQuestLog(object o)
      {
        return (object) ((DefeatTheConspiracyQuestBehavior.OppositionData) o).QuestLog;
      }

      internal static object AutoGeneratedGetMemberValueLastPeaceOfferDate(object o)
      {
        return (object) ((DefeatTheConspiracyQuestBehavior.OppositionData) o).LastPeaceOfferDate;
      }
    }

    public class DefeatTheConspiracyQuestBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public DefeatTheConspiracyQuestBehaviorTypeDefiner()
        : base(16000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (DefeatTheConspiracyQuestBehavior.OppositionData), 1);
        this.AddClassDefinition(typeof (DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest), 2);
      }
    }

    public class DefeatTheConspiracyQuest : StoryModeQuestBase
    {
      private const int ProgressTrackerRange = 100;
      [SaveableField(100)]
      private Kingdom _oppositionKingdom;
      [SaveableField(110)]
      private DefeatTheConspiracyQuestBehavior.OppositionData _oppositionData;

      public override TextObject Title
      {
        get
        {
          TextObject title = new TextObject("{=Dfmg8stq}Eliminate {FACTION}");
          title.SetTextVariable("FACTION", this._oppositionKingdom.Name);
          return title;
        }
      }

      private TextObject _questCanceledLogText
      {
        get => new TextObject("{=tVlZTOst}You have chosen a different path.");
      }

      private TextObject _defeatOpposingKingdomsQuestLogText
      {
        get
        {
          return new TextObject("{=ib2TKPUa}The ruler of the {FACTION} is leading the alliance against you. Defeat their armies or force them to make peace by capturing their settlements and destroying their parties to achieve victory.");
        }
      }

      private TextObject _defeatOpposingKingdomsProgressLogText
      {
        get => new TextObject("{=3Io5vmOk}War Progress with the {FACTION}");
      }

      private TextObject _imperialKingdomDefeatedPopUpTitleText
      {
        get => new TextObject("{=XWL3XcIq}{FACTION} Defeated");
      }

      private TextObject _imperialKingdomDefeatedPopUpDescriptionText
      {
        get
        {
          return new TextObject("{=4SnDe0rA}The clans of the {FACTION} have defected to surrounding kingdoms as their leader has given up all hopes of restoring the Empire.");
        }
      }

      private TextObject _imperialKingdomDefeatedQuestLogText
      {
        get
        {
          return new TextObject("{=OwcgxRXB}Weakened by the war, the {FACTION} has collapsed and its clans have defected to surrounding kingdoms.");
        }
      }

      private TextObject _antiImperialKingdomDefeatedPopUpTitleText
      {
        get => new TextObject("{=L3Qb6lbp}Peace Offer from the {FACTION}");
      }

      private TextObject _antiImperialKingdomDefeatedPopUpKingDescriptionText
      {
        get
        {
          return new TextObject("{=E87miqTI}Exhausted from the war, the clans of the {FACTION} offer to make peace with the {PLAYER_SUPPORTED_FACTION}.");
        }
      }

      private TextObject _antiImperialKingdomDefeatedPopUpSubjectDescriptionText
      {
        get
        {
          return new TextObject("{=hGPdLssq}The ruler of the {PLAYER_SUPPORTED_FACTION} has accepted the peace offered by the war-ravaged {FACTION}.");
        }
      }

      private TextObject _antiImperialKingdomDefeatedQuestLogText
      {
        get
        {
          return new TextObject("{=weS3DJKA}Weakened by war, the ruler of the {FACTION} offers to make peace with {PLAYER_FACTION}.");
        }
      }

      private TextObject _playerSupportedKingdomDestroyedLogText
      {
        get
        {
          TextObject destroyedLogText = new TextObject("{=eH8z6Fws}Despite its Dragon Banner, the {PLAYER_SUPPORTED_KINGDOM} has been destroyed!");
          destroyedLogText.SetTextVariable("PLAYER_SUPPORTED_KINGDOM", StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom.EncyclopediaLinkWithName);
          return destroyedLogText;
        }
      }

      public DefeatTheConspiracyQuest(string questId, Kingdom oppositionKingdom)
        : base(questId, StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine ? StoryModeHeroes.ImperialMentor : StoryModeHeroes.AntiImperialMentor, CampaignTime.Never)
      {
        this._oppositionKingdom = oppositionKingdom;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      protected override void SetDialogs()
      {
      }

      protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

      protected override void HourlyTick() => this.UpdateWarProgressWithKingdom();

      private void UpdateWarProgressWithKingdom()
      {
        float warScoreForKingdom = this.CalculateWarScoreForKingdom(this._oppositionKingdom);
        float reinforcedWarScore = this._oppositionData.ReinforcedWarScore;
        float num = this._oppositionData.InitialWarScore / 2f;
        this._oppositionData.QuestLog.UpdateCurrentProgress((int) MathF.Clamp((float) (((double) reinforcedWarScore - (double) warScoreForKingdom) / ((double) reinforcedWarScore - (double) num) * 100.0), -100f, 100f));
        if ((double) warScoreForKingdom > (double) this._oppositionData.InitialWarScore / 2.0 || (double) this._oppositionData.LastPeaceOfferDate.ElapsedDaysUntilNow < 7.0)
          return;
        this._oppositionData.LastPeaceOfferDate = CampaignTime.Now;
        this.InitializeKingdomDefeatedPopUp(this._oppositionKingdom);
      }

      private void InitializeKingdomDefeatedPopUp(Kingdom kingdom)
      {
        Kingdom supportedKingdom = StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom;
        if (StoryModeData.IsKingdomImperial(kingdom))
        {
          TextObject defeatedPopUpTitleText = this._imperialKingdomDefeatedPopUpTitleText;
          defeatedPopUpTitleText.SetTextVariable("FACTION", kingdom.Name);
          TextObject upDescriptionText = this._imperialKingdomDefeatedPopUpDescriptionText;
          upDescriptionText.SetTextVariable("FACTION", kingdom.Name);
          upDescriptionText.SetTextVariable("PLAYER_SUPPORTED_FACTION", supportedKingdom.Name);
          TextObject textObject = new TextObject("{=DM6luo3c}Continue");
          InformationManager.ShowInquiry(new InquiryData(defeatedPopUpTitleText.ToString(), upDescriptionText.ToString(), true, false, textObject.ToString(), "", (Action) (() => this.OnKingdomDefeated(kingdom)), (Action) null), true);
        }
        else
        {
          TextObject defeatedPopUpTitleText = this._antiImperialKingdomDefeatedPopUpTitleText;
          defeatedPopUpTitleText.SetTextVariable("FACTION", kingdom.Name);
          if (supportedKingdom.Leader == Hero.MainHero)
          {
            TextObject kingDescriptionText = this._antiImperialKingdomDefeatedPopUpKingDescriptionText;
            kingDescriptionText.SetTextVariable("FACTION", kingdom.Name);
            kingDescriptionText.SetTextVariable("PLAYER_SUPPORTED_FACTION", supportedKingdom.Name);
            TextObject textObject1 = new TextObject("{=Y94H6XnK}Accept");
            TextObject textObject2 = new TextObject("{=cOgmdp9e}Decline");
            InformationManager.ShowInquiry(new InquiryData(defeatedPopUpTitleText.ToString(), kingDescriptionText.ToString(), true, true, textObject1.ToString(), textObject2.ToString(), (Action) (() => this.OnKingdomDefeated(kingdom)), (Action) (() => this.OnKingdomDefeated(kingdom, false))), true);
          }
          else
          {
            TextObject subjectDescriptionText = this._antiImperialKingdomDefeatedPopUpSubjectDescriptionText;
            subjectDescriptionText.SetTextVariable("FACTION", kingdom.Name);
            subjectDescriptionText.SetTextVariable("PLAYER_SUPPORTED_FACTION", supportedKingdom.Name);
            TextObject textObject = new TextObject("{=DM6luo3c}Continue");
            InformationManager.ShowInquiry(new InquiryData(defeatedPopUpTitleText.ToString(), subjectDescriptionText.ToString(), true, false, textObject.ToString(), "", (Action) (() => this.OnKingdomDefeated(kingdom)), (Action) null), true);
          }
        }
      }

      private void OnKingdomDefeated(Kingdom kingdom, bool makePeace = true)
      {
        if (this._oppositionKingdom != kingdom)
          return;
        Kingdom playerSupportedKingdom = StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom;
        if (StoryModeData.IsKingdomImperial(kingdom))
        {
          StoryModeManager.Current.MainStoryLine.ThirdPhase.RemoveOppositionKingdom(kingdom);
          this.RemoveLog(this._oppositionData.QuestLog);
          TextObject defeatedQuestLogText = this._imperialKingdomDefeatedQuestLogText;
          defeatedQuestLogText.SetTextVariable("FACTION", kingdom.EncyclopediaLinkWithName);
          this.AddLog(defeatedQuestLogText);
          Kingdom targetKingdom;
          if (!StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms.IsEmpty<Kingdom>())
          {
            targetKingdom = StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms.OrderBy<Kingdom, float>((Func<Kingdom, float>) (t => Campaign.Current.Models.MapDistanceModel.GetDistance(kingdom.FactionMidSettlement, t.FactionMidSettlement))).FirstOrDefault<Kingdom>();
          }
          else
          {
            List<Kingdom> list = Kingdom.All.Where<Kingdom>((Func<Kingdom, bool>) (t => !StoryModeData.IsKingdomImperial(t) && !t.IsEliminated && t != playerSupportedKingdom)).ToList<Kingdom>();
            if (list.IsEmpty<Kingdom>())
            {
              targetKingdom = playerSupportedKingdom;
            }
            else
            {
              targetKingdom = list.OrderBy<Kingdom, float>((Func<Kingdom, float>) (t => Campaign.Current.Models.MapDistanceModel.GetDistance(kingdom.FactionMidSettlement, t.FactionMidSettlement))).FirstOrDefault<Kingdom>();
              foreach (Settlement settlement in new List<Settlement>((IEnumerable<Settlement>) kingdom.Settlements))
                ChangeOwnerOfSettlementAction.ApplyByLeaveFaction(playerSupportedKingdom.Leader, settlement);
            }
          }
          if (targetKingdom != null)
            this.DefectClansOfKingdomToKingdom(kingdom, targetKingdom);
          else
            Debug.FailedAssert("Kingdom to defect can't be found", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\Quests\\ThirdPhase\\DefeatTheConspiracyQuestBehavior.cs", nameof (OnKingdomDefeated), 371);
        }
        else
        {
          StoryModeManager.Current.MainStoryLine.ThirdPhase.RemoveOppositionKingdom(kingdom);
          this.RemoveLog(this._oppositionData.QuestLog);
          TextObject defeatedQuestLogText = this._antiImperialKingdomDefeatedQuestLogText;
          defeatedQuestLogText.SetTextVariable("FACTION", kingdom.EncyclopediaLinkWithName);
          defeatedQuestLogText.SetTextVariable("PLAYER_FACTION", playerSupportedKingdom.EncyclopediaLinkWithName);
          this.AddLog(defeatedQuestLogText);
          if (makePeace)
            MakePeaceAction.Apply((IFaction) playerSupportedKingdom, (IFaction) kingdom);
          if (StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms.IsEmpty<Kingdom>())
          {
            Kingdom targetKingdom = playerSupportedKingdom;
            foreach (Kingdom defectorKingdom in Kingdom.All.Where<Kingdom>((Func<Kingdom, bool>) (t => !t.IsEliminated && StoryModeData.IsKingdomImperial(t))))
            {
              if (defectorKingdom != targetKingdom)
                this.DefectClansOfKingdomToKingdom(defectorKingdom, targetKingdom);
            }
          }
        }
        this.CompleteQuestWithSuccess();
      }

      private void DefectClansOfKingdomToKingdom(Kingdom defectorKingdom, Kingdom targetKingdom)
      {
        foreach (Clan clan in new List<Clan>((IEnumerable<Clan>) defectorKingdom.Clans))
        {
          if (clan == Clan.PlayerClan)
            ChangeKingdomAction.ApplyByLeaveKingdom(Clan.PlayerClan);
          else if (clan.IsUnderMercenaryService)
            ChangeKingdomAction.ApplyByJoinFactionAsMercenary(clan, targetKingdom, clan.MercenaryAwardMultiplier, false);
          else
            ChangeKingdomAction.ApplyByJoinToKingdom(clan, targetKingdom, false);
        }
        DestroyKingdomAction.Apply(defectorKingdom);
      }

      private void OnKingdomDestroyed(Kingdom kingdom)
      {
        if (StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom != kingdom)
          return;
        this.AddLog(this._playerSupportedKingdomDestroyedLogText);
        this.CompleteQuestWithFail();
        TextObject message = new TextObject("{=atnUtXdO}The {KINGDOM_NAME} has been defeated. Your quest to restore the Empire has failed.");
        if (!StoryModeManager.Current.MainStoryLine.IsOnAntiImperialQuestLine)
          message = new TextObject("{=r48aEAbq}The {KINGDOM_NAME} has been defeated. Your quest to destroy the Empire has failed.");
        message.SetTextVariable("KINGDOM_NAME", StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom.Name);
        MBInformationManager.AddQuickInformation(message);
      }

      private float CalculateWarScoreForKingdom(Kingdom kingdom)
      {
        float num = 0.0f;
        foreach (Settlement settlement in (List<Settlement>) kingdom.Settlements)
          num += this.GetWarScoreOfSettlement(settlement);
        return num + kingdom.TotalStrength;
      }

      private float GetWarScoreOfSettlement(Settlement settlement)
      {
        float scoreOfSettlement = 0.0f;
        if (settlement.IsTown)
          scoreOfSettlement = 3000f;
        else if (settlement.IsCastle)
          scoreOfSettlement = 1000f;
        return scoreOfSettlement;
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.KingdomDestroyedEvent.AddNonSerializedListener((object) this, new Action<Kingdom>(this.OnKingdomDestroyed));
        CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnCampaignQuestCompleted));
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.SettlementOwnerChanged));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      }

      private void OnClanChangedKingdom(
        Clan clan,
        Kingdom oldKingdom,
        Kingdom newKingdom,
        ChangeKingdomAction.ChangeKingdomActionDetail detail,
        bool showNotification = true)
      {
        if (clan != Clan.PlayerClan || oldKingdom != StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom)
          return;
        this.CompleteQuestWithCancel(this._questCanceledLogText);
        StoryModeManager.Current.MainStoryLine.CancelSecondAndThirdPhase();
      }

      private void OnCampaignQuestCompleted(
        QuestBase completedQuest,
        QuestBase.QuestCompleteDetails detail)
      {
        if (completedQuest == this || !(completedQuest is DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest))
          return;
        this.UpdateWarProgressWithKingdom();
        StoryModeManager.Current.MainStoryLine.ThirdPhase.CompleteThirdPhase(detail);
      }

      private void SettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        if ((newOwner == null || newOwner.MapFaction != this._oppositionKingdom) && (oldOwner == null || oldOwner.MapFaction != this._oppositionKingdom) || (double) this.GetWarScoreOfSettlement(settlement) <= 0.0)
          return;
        this.UpdateWarProgressWithKingdom();
      }

      protected override void OnStartQuest()
      {
        DefeatTheConspiracyQuestBehavior.OppositionData oppositionData = new DefeatTheConspiracyQuestBehavior.OppositionData();
        oppositionData.InitialWarScore = this.CalculateWarScoreForKingdom(this._oppositionKingdom);
        oppositionData.ReinforcedWarScore = 0.0f;
        TextObject kingdomsQuestLogText = this._defeatOpposingKingdomsQuestLogText;
        TextObject kingdomsProgressLogText = this._defeatOpposingKingdomsProgressLogText;
        kingdomsQuestLogText.SetTextVariable("FACTION", this._oppositionKingdom.EncyclopediaLinkWithName);
        kingdomsProgressLogText.SetTextVariable("FACTION", this._oppositionKingdom.EncyclopediaLinkWithName);
        oppositionData.QuestLog = this.AddTwoWayContinuousLog(kingdomsQuestLogText, kingdomsProgressLogText, 0, 100);
        this._oppositionData = oppositionData;
      }

      public void CalculateReinforcedWarScore()
      {
        this._oppositionData.ReinforcedWarScore = this.CalculateWarScoreForKingdom(this._oppositionKingdom);
      }

      internal static void AutoGeneratedStaticCollectObjectsDefeatTheConspiracyQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._oppositionKingdom);
        collectedObjects.Add((object) this._oppositionData);
      }

      internal static object AutoGeneratedGetMemberValue_oppositionKingdom(object o)
      {
        return (object) ((DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest) o)._oppositionKingdom;
      }

      internal static object AutoGeneratedGetMemberValue_oppositionData(object o)
      {
        return (object) ((DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest) o)._oppositionData;
      }
    }
  }
}
