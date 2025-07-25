// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.BarberCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class BarberCampaignBehavior : 
    CampaignBehaviorBase,
    IFacegenCampaignBehavior,
    ICampaignBehavior
  {
    private const int BarberCost = 100;
    private bool _isOpenedFromBarberDialogue;
    private StaticBodyProperties _previousBodyProperties;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
    }

    public override void SyncData(IDataStore store)
    {
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("barber_start_talk_beggar", "start", "close_window", "{=pWzdxd7O}May the Heavens bless you, my poor {?PLAYER.GENDER}lady{?}fellow{\\?}, but I can't spare a coin right now.", new ConversationSentence.OnConditionDelegate(this.InDisguiseSpeakingToBarber), new ConversationSentence.OnConsequenceDelegate(this.InitializeBarberConversation));
      campaignGameStarter.AddDialogLine("barber_start_talk", "start", "barber_question1", "{=2aXYYNBG}Come to have your hair cut, {?PLAYER.GENDER}my lady{?}my lord{\\?}? A new look for a new day?", new ConversationSentence.OnConditionDelegate(this.IsConversationAgentBarber), new ConversationSentence.OnConsequenceDelegate(this.InitializeBarberConversation));
      campaignGameStarter.AddPlayerLine("player_accept_haircut", "barber_question1", "start_cut_token", "{=Q7wBRXtR}Yes, I have. ({GOLD_COST} {GOLD_ICON})", new ConversationSentence.OnConditionDelegate(this.GivePlayerAHaircutCondition), new ConversationSentence.OnConsequenceDelegate(this.GivePlayerAHaircut), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.DoesPlayerHaveEnoughGold));
      campaignGameStarter.AddPlayerLine("player_refuse_haircut", "barber_question1", "no_haircut_conversation_token", "{=xPAAZAaI}My hair is fine as it is, thank you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("barber_ask_if_done", "start_cut_token", "finish_cut_token", "{=M3K8wUOO}So... Does this please you, {?PLAYER.GENDER}my lady{?}my lord{\\?}?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_done_with_haircut", "finish_cut_token", "finish_barber", "{=zTF4bJm0}Yes, it's fine.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_not_done_with_haircut", "finish_cut_token", "start_cut_token", "{=BnoSOi3r}Actually...", new ConversationSentence.OnConditionDelegate(this.GivePlayerAHaircutCondition), new ConversationSentence.OnConsequenceDelegate(this.GivePlayerAHaircut), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.DoesPlayerHaveEnoughGold));
      campaignGameStarter.AddDialogLine("barber_no_haircut_talk", "no_haircut_conversation_token", "close_window", "{=BusYGTrN}Excellent! Have a good day, then, {?PLAYER.GENDER}my lady{?}my lord{\\?}.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("barber_haircut_finished", "finish_barber", "player_had_a_haircut_token", "{=akqJbZpH}Marvellous! You cut a splendid appearance, {?PLAYER.GENDER}my lady{?}my lord{\\?}, if you don't mind my saying. Most splendid.", new ConversationSentence.OnConditionDelegate(this.DidPlayerHaveAHaircut), new ConversationSentence.OnConsequenceDelegate(this.ChargeThePlayer));
      campaignGameStarter.AddDialogLine("barber_haircut_no_change", "finish_barber", "player_did_not_cut_token", "{=yLIZlaS1}Very well. Do come back when you're ready, {?PLAYER.GENDER}my lady{?}my lord{\\?}.", new ConversationSentence.OnConditionDelegate(this.DidPlayerNotHaveAHaircut), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_no_haircut_finish_talk", "player_did_not_cut_token", "close_window", "{=oPUVNuhN}I'll keep you in mind", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_haircut_finish_talk", "player_had_a_haircut_token", "close_window", "{=F9Xjbchh}Thank you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool InDisguiseSpeakingToBarber()
    {
      return this.IsConversationAgentBarber() && Campaign.Current.IsMainHeroDisguised;
    }

    private bool DoesPlayerHaveEnoughGold(out TextObject explanation)
    {
      if (Hero.MainHero.Gold < 100)
      {
        explanation = new TextObject("{=RYJdU43V}Not Enough Gold");
        return false;
      }
      explanation = TextObject.Empty;
      return true;
    }

    private void ChargeThePlayer()
    {
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, 100);
    }

    private bool DidPlayerNotHaveAHaircut() => !this.DidPlayerHaveAHaircut();

    private bool DidPlayerHaveAHaircut()
    {
      return Hero.MainHero.BodyProperties.StaticProperties != this._previousBodyProperties;
    }

    private bool IsConversationAgentBarber()
    {
      return Settlement.CurrentSettlement?.Culture.Barber == CharacterObject.OneToOneConversationCharacter;
    }

    private bool GivePlayerAHaircutCondition()
    {
      MBTextManager.SetTextVariable("GOLD_COST", 100);
      return true;
    }

    private void GivePlayerAHaircut()
    {
      this._isOpenedFromBarberDialogue = true;
      BarberState state = Game.Current.GameStateManager.CreateState<BarberState>((object) Hero.MainHero.CharacterObject, (object) this.GetFaceGenFilter());
      this._isOpenedFromBarberDialogue = false;
      GameStateManager.Current.PushState((TaleWorlds.Core.GameState) state);
    }

    private void InitializeBarberConversation()
    {
      this._previousBodyProperties = Hero.MainHero.BodyProperties.StaticProperties;
    }

    private LocationCharacter CreateBarber(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject barber = culture.Barber;
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(barber, out minimumAge, out maximumAge, "Barber");
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) barber)).Monster(FaceGen.GetMonsterWithSuffix(barber.Race, "_settlement_slow")).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "sp_barber", true, relation, (string) null, true);
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("center");
      if (CampaignMission.Current.Location != locationWithId || !Campaign.Current.IsDay || !unusedUsablePointCount.TryGetValue("sp_merchant_notary", out int _))
        return;
      locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateBarber), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
    }

    public IFaceGeneratorCustomFilter GetFaceGenFilter()
    {
      return (IFaceGeneratorCustomFilter) new BarberCampaignBehavior.BarberFaceGeneratorCustomFilter(!this._isOpenedFromBarberDialogue, this.GetAvailableHaircuts(), this.GetAvailableFacialHairs());
    }

    private int[] GetAvailableFacialHairs()
    {
      List<int> source = new List<int>();
      CultureCode cultureCode = !this._isOpenedFromBarberDialogue || Settlement.CurrentSettlement == null ? CultureCode.Invalid : Settlement.CurrentSettlement.Culture.GetCultureCode();
      if (!Hero.MainHero.IsFemale)
      {
        switch (cultureCode)
        {
          case CultureCode.Empire:
            source.AddRange((IEnumerable<int>) new int[8]
            {
              5,
              6,
              9,
              12,
              23,
              24,
              25,
              26
            });
            break;
          case CultureCode.Sturgia:
            source.AddRange((IEnumerable<int>) new int[25]
            {
              1,
              2,
              4,
              8,
              9,
              10,
              11,
              12,
              13,
              14,
              15,
              16,
              17,
              18,
              19,
              20,
              21,
              22,
              24,
              25,
              26,
              29,
              32,
              34,
              35
            });
            break;
          case CultureCode.Aserai:
            source.AddRange((IEnumerable<int>) new int[6]
            {
              36,
              37,
              38,
              39,
              40,
              41
            });
            break;
          case CultureCode.Vlandia:
            source.AddRange((IEnumerable<int>) new int[18]
            {
              1,
              2,
              3,
              5,
              6,
              7,
              8,
              9,
              10,
              12,
              13,
              14,
              22,
              23,
              24,
              25,
              26,
              32
            });
            break;
          case CultureCode.Khuzait:
            source.AddRange((IEnumerable<int>) new int[6]
            {
              0,
              28,
              29,
              31,
              32,
              33
            });
            break;
          case CultureCode.Battania:
            source.AddRange((IEnumerable<int>) new int[24]
            {
              0,
              1,
              2,
              4,
              8,
              10,
              11,
              12,
              13,
              14,
              15,
              16,
              17,
              18,
              19,
              20,
              21,
              22,
              24,
              29,
              31,
              32,
              34,
              35
            });
            break;
        }
        source.AddRange((IEnumerable<int>) new int[1]);
      }
      return source.Distinct<int>().ToArray<int>();
    }

    private int[] GetAvailableHaircuts()
    {
      List<int> source = new List<int>();
      CultureCode cultureCode = !this._isOpenedFromBarberDialogue || Settlement.CurrentSettlement == null ? CultureCode.Invalid : Settlement.CurrentSettlement.Culture.GetCultureCode();
      if (Hero.MainHero.IsFemale)
      {
        switch (cultureCode)
        {
          case CultureCode.Empire:
            source.AddRange((IEnumerable<int>) new int[0]);
            break;
          case CultureCode.Sturgia:
            source.AddRange((IEnumerable<int>) new int[4]
            {
              8,
              9,
              13,
              15
            });
            break;
          case CultureCode.Aserai:
            source.AddRange((IEnumerable<int>) new int[5]
            {
              13,
              17,
              18,
              19,
              20
            });
            break;
          case CultureCode.Vlandia:
            source.AddRange((IEnumerable<int>) new int[0]);
            break;
          case CultureCode.Khuzait:
            source.AddRange((IEnumerable<int>) new int[3]
            {
              7,
              12,
              13
            });
            break;
          case CultureCode.Battania:
            source.AddRange((IEnumerable<int>) new int[3]
            {
              8,
              9,
              15
            });
            break;
        }
        source.AddRange((IEnumerable<int>) new int[12]
        {
          0,
          1,
          2,
          3,
          4,
          5,
          6,
          10,
          11,
          14,
          16,
          21
        });
      }
      else
      {
        switch (cultureCode)
        {
          case CultureCode.Empire:
            source.AddRange((IEnumerable<int>) new int[6]
            {
              1,
              4,
              5,
              8,
              14,
              15
            });
            break;
          case CultureCode.Sturgia:
            source.AddRange((IEnumerable<int>) new int[11]
            {
              1,
              2,
              3,
              4,
              5,
              8,
              10,
              16,
              18,
              20,
              27
            });
            break;
          case CultureCode.Aserai:
            source.AddRange((IEnumerable<int>) new int[11]
            {
              1,
              2,
              3,
              4,
              5,
              21,
              22,
              23,
              24,
              25,
              26
            });
            break;
          case CultureCode.Vlandia:
            source.AddRange((IEnumerable<int>) new int[8]
            {
              1,
              4,
              5,
              8,
              11,
              14,
              15,
              28
            });
            break;
          case CultureCode.Khuzait:
            source.AddRange((IEnumerable<int>) new int[3]
            {
              12,
              17,
              28
            });
            break;
          case CultureCode.Battania:
            source.AddRange((IEnumerable<int>) new int[13]
            {
              1,
              2,
              3,
              4,
              5,
              7,
              8,
              10,
              16,
              17,
              18,
              19,
              20
            });
            break;
        }
        source.AddRange((IEnumerable<int>) new int[4]
        {
          0,
          6,
          9,
          13
        });
      }
      return source.Distinct<int>().ToArray<int>();
    }

    private class BarberFaceGeneratorCustomFilter : IFaceGeneratorCustomFilter
    {
      private readonly int[] _haircutIndices;
      private readonly int[] _facialHairIndices;
      private readonly bool _defaultStages;

      public BarberFaceGeneratorCustomFilter(
        bool useDefaultStages,
        int[] haircutIndices,
        int[] faircutIndices)
      {
        this._haircutIndices = haircutIndices;
        this._facialHairIndices = faircutIndices;
        this._defaultStages = useDefaultStages;
      }

      public int[] GetHaircutIndices(BasicCharacterObject character) => this._haircutIndices;

      public int[] GetFacialHairIndices(BasicCharacterObject character) => this._facialHairIndices;

      public FaceGeneratorStage[] GetAvailableStages()
      {
        return this._defaultStages ? new FaceGeneratorStage[7]
        {
          FaceGeneratorStage.Body,
          FaceGeneratorStage.Face,
          FaceGeneratorStage.Eyes,
          FaceGeneratorStage.Nose,
          FaceGeneratorStage.Mouth,
          FaceGeneratorStage.Hair,
          FaceGeneratorStage.Taint
        } : new FaceGeneratorStage[1]
        {
          FaceGeneratorStage.Hair
        };
      }
    }
  }
}
