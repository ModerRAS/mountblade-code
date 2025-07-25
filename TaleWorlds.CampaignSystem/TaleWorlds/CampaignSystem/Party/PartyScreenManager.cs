// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Party.PartyScreenManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Party
{
  public class PartyScreenManager
  {
    private PartyScreenMode _currentMode;
    private PartyScreenLogic _partyScreenLogic;
    private static readonly int _countToAddForEachTroopCheatMode = 10;

    public bool IsDonating { get; private set; }

    public PartyScreenMode CurrentMode => this._currentMode;

    public static PartyScreenManager Instance => Campaign.Current.PartyScreenManager;

    public static PartyScreenLogic PartyScreenLogic
    {
      get => PartyScreenManager.Instance._partyScreenLogic;
    }

    private void OpenPartyScreen()
    {
      Game current = Game.Current;
      this._partyScreenLogic = new PartyScreenLogic();
      this._partyScreenLogic.Initialize(new PartyScreenLogicInitializationData()
      {
        LeftOwnerParty = (PartyBase) null,
        RightOwnerParty = PartyBase.MainParty,
        LeftMemberRoster = TroopRoster.CreateDummyTroopRoster(),
        LeftPrisonerRoster = TroopRoster.CreateDummyTroopRoster(),
        RightMemberRoster = PartyBase.MainParty.MemberRoster,
        RightPrisonerRoster = PartyBase.MainParty.PrisonRoster,
        LeftLeaderHero = (Hero) null,
        RightLeaderHero = PartyBase.MainParty.LeaderHero,
        LeftPartyMembersSizeLimit = 0,
        LeftPartyPrisonersSizeLimit = 0,
        RightPartyMembersSizeLimit = PartyBase.MainParty.PartySizeLimit,
        RightPartyPrisonersSizeLimit = PartyBase.MainParty.PrisonerSizeLimit,
        LeftPartyName = (TextObject) null,
        RightPartyName = PartyBase.MainParty.Name,
        TroopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.TroopTransferableDelegate),
        PartyPresentationDoneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.DefaultDoneHandler),
        PartyPresentationDoneButtonConditionDelegate = (PartyPresentationDoneButtonConditionDelegate) null,
        PartyPresentationCancelButtonActivateDelegate = (PartyPresentationCancelButtonActivateDelegate) null,
        PartyPresentationCancelButtonDelegate = (PartyPresentationCancelButtonDelegate) null,
        IsDismissMode = true,
        IsTroopUpgradesDisabled = false,
        Header = (TextObject) null,
        PartyScreenClosedDelegate = (PartyScreenClosedDelegate) null,
        TransferHealthiesGetWoundedsFirst = false,
        ShowProgressBar = false,
        MemberTransferState = PartyScreenLogic.TransferState.Transferable,
        PrisonerTransferState = PartyScreenLogic.TransferState.Transferable,
        AccompanyingTransferState = PartyScreenLogic.TransferState.NotTransferable
      });
      PartyState state = current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(this._partyScreenLogic);
      this._currentMode = PartyScreenMode.Normal;
      current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void CloseScreen(bool isForced, bool fromCancel = false)
    {
      PartyScreenManager.Instance.ClosePartyPresentation(isForced, fromCancel);
    }

    private void ClosePartyPresentation(bool isForced, bool fromCancel)
    {
      if (this._partyScreenLogic == null)
      {
        Debug.FailedAssert("Trying to close party screen when it's already closed!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Party\\PartyScreenManager.cs", nameof (ClosePartyPresentation), 101);
      }
      else
      {
        bool flag = true;
        if (!fromCancel)
          flag = this._partyScreenLogic.DoneLogic(isForced);
        if (!flag)
          return;
        this._partyScreenLogic.OnPartyScreenClosed(fromCancel);
        this._partyScreenLogic = (PartyScreenLogic) null;
        Game.Current.GameStateManager.PopState();
      }
    }

    public static void OpenScreenAsCheat()
    {
      if (!Game.Current.CheatMode)
      {
        MBInformationManager.AddQuickInformation(new TextObject("{=!}Cheat mode is not enabled!"));
      }
      else
      {
        PartyScreenManager.Instance.IsDonating = false;
        Game current = Game.Current;
        PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
        PartyScreenManager.Instance._partyScreenLogic.Initialize(new PartyScreenLogicInitializationData()
        {
          LeftOwnerParty = (PartyBase) null,
          RightOwnerParty = PartyBase.MainParty,
          LeftMemberRoster = PartyScreenManager.GetRosterWithAllGameTroops(),
          LeftPrisonerRoster = TroopRoster.CreateDummyTroopRoster(),
          RightMemberRoster = PartyBase.MainParty.MemberRoster,
          RightPrisonerRoster = PartyBase.MainParty.PrisonRoster,
          LeftLeaderHero = (Hero) null,
          RightLeaderHero = PartyBase.MainParty.LeaderHero,
          LeftPartyMembersSizeLimit = 0,
          LeftPartyPrisonersSizeLimit = 0,
          RightPartyMembersSizeLimit = PartyBase.MainParty.PartySizeLimit,
          RightPartyPrisonersSizeLimit = PartyBase.MainParty.PrisonerSizeLimit,
          LeftPartyName = (TextObject) null,
          RightPartyName = PartyBase.MainParty.Name,
          TroopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.TroopTransferableDelegate),
          PartyPresentationDoneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.DefaultDoneHandler),
          PartyPresentationDoneButtonConditionDelegate = (PartyPresentationDoneButtonConditionDelegate) null,
          PartyPresentationCancelButtonActivateDelegate = (PartyPresentationCancelButtonActivateDelegate) null,
          PartyPresentationCancelButtonDelegate = (PartyPresentationCancelButtonDelegate) null,
          IsDismissMode = true,
          IsTroopUpgradesDisabled = false,
          Header = (TextObject) null,
          PartyScreenClosedDelegate = (PartyScreenClosedDelegate) null,
          TransferHealthiesGetWoundedsFirst = false,
          ShowProgressBar = false,
          MemberTransferState = PartyScreenLogic.TransferState.Transferable,
          PrisonerTransferState = PartyScreenLogic.TransferState.Transferable,
          AccompanyingTransferState = PartyScreenLogic.TransferState.NotTransferable
        });
        PartyState state = current.GameStateManager.CreateState<PartyState>();
        state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
        PartyScreenManager.Instance._currentMode = PartyScreenMode.Normal;
        current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
      }
    }

    private static TroopRoster GetRosterWithAllGameTroops()
    {
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      List<CharacterObject> characterObjectList = new List<CharacterObject>();
      EncyclopediaPage pageOf = Campaign.Current.EncyclopediaManager.GetPageOf(typeof (CharacterObject));
      for (int index = 0; index < CharacterObject.All.Count; ++index)
      {
        CharacterObject o = CharacterObject.All[index];
        if (pageOf.IsValidEncyclopediaItem((object) o))
          characterObjectList.Add(o);
      }
      characterObjectList.Sort((Comparison<CharacterObject>) ((a, b) => a.Name.ToString().CompareTo(b.Name.ToString())));
      for (int index = 0; index < characterObjectList.Count; ++index)
      {
        CharacterObject character = characterObjectList[index];
        dummyTroopRoster.AddToCounts(character, PartyScreenManager._countToAddForEachTroopCheatMode);
      }
      return dummyTroopRoster;
    }

    public static void OpenScreenAsNormal()
    {
      if (Game.Current.CheatMode)
      {
        PartyScreenManager.OpenScreenAsCheat();
      }
      else
      {
        PartyScreenManager.Instance.IsDonating = false;
        PartyScreenManager.Instance.OpenPartyScreen();
      }
    }

    public static void OpenScreenAsRansom()
    {
      PartyScreenManager.Instance._currentMode = PartyScreenMode.Ransom;
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance.IsDonating = false;
      TroopRoster dummyTroopRoster1 = TroopRoster.CreateDummyTroopRoster();
      TroopRoster dummyTroopRoster2 = TroopRoster.CreateDummyTroopRoster();
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.TroopTransferableDelegate);
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.SellPrisonersDoneHandler);
      TextObject textObject = new TextObject("{=SvahUNo6}Ransom Prisoners");
      TextObject text = GameTexts.FindText("str_ransom_broker");
      TextObject header = textObject;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(dummyTroopRoster1, dummyTroopRoster2, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.TransferableWithTrade, PartyScreenLogic.TransferState.NotTransferable, troopTransferableDelegate, leftPartyName: text, header: header, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate));
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsLoot(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonerRoster,
      TextObject leftPartyName,
      int leftPartySizeLimit,
      PartyScreenClosedDelegate partyScreenClosedDelegate = null)
    {
      PartyScreenManager.Instance._currentMode = PartyScreenMode.Loot;
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      TroopRoster leftMemberRoster1 = leftMemberRoster;
      TroopRoster leftPrisonerRoster1 = leftPrisonerRoster;
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.TroopTransferableDelegate);
      PartyScreenClosedDelegate screenClosedDelegate = partyScreenClosedDelegate;
      TextObject leftPartyName1 = leftPartyName;
      int num = leftPartySizeLimit;
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.DefaultDoneHandler);
      TextObject header = new TextObject("{=EOQcQa5l}Aftermath");
      int leftPartyMembersSizeLimit = num;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyScreenClosedDelegate partyScreenClosedDelegate1 = screenClosedDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(leftMemberRoster1, leftPrisonerRoster1, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.Transferable, troopTransferableDelegate, leftPartyName: leftPartyName1, header: header, leftPartyMembersSizeLimit: leftPartyMembersSizeLimit, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate, partyScreenClosedDelegate: partyScreenClosedDelegate1));
      PartyScreenManager.Instance.IsDonating = false;
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsManageTroopsAndPrisoners(
      MobileParty leftParty,
      PartyScreenClosedDelegate onPartyScreenClosed = null)
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.Normal;
      MobileParty party = leftParty;
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.ClanManageTroopAndPrisonerTransferableDelegate);
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.ManageTroopsAndPrisonersDoneHandler);
      PartyScreenClosedDelegate screenClosedDelegate = onPartyScreenClosed;
      TextObject header = new TextObject("{=uQgNPJnc}Manage Troops");
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyScreenClosedDelegate partyScreenClosedDelegate = screenClosedDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainPartyAndOther(party, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.Transferable, troopTransferableDelegate, header, partyPresentationDoneButtonDelegate, partyScreenClosedDelegate: partyScreenClosedDelegate));
      PartyScreenManager.Instance.IsDonating = false;
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsReceiveTroops(
      TroopRoster leftMemberParty,
      TextObject leftPartyName,
      PartyScreenClosedDelegate partyScreenClosedDelegate = null)
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.TroopsManage;
      TroopRoster leftMemberRoster = leftMemberParty;
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.TroopTransferableDelegate);
      PartyScreenClosedDelegate screenClosedDelegate = partyScreenClosedDelegate;
      TextObject leftPartyName1 = leftPartyName;
      int totalManCount = leftMemberParty.TotalManCount;
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.DefaultDoneHandler);
      TextObject header = new TextObject("{=uQgNPJnc}Manage Troops");
      int leftPartyMembersSizeLimit = totalManCount;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyScreenClosedDelegate partyScreenClosedDelegate1 = screenClosedDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(leftMemberRoster, dummyTroopRoster, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.Transferable, troopTransferableDelegate, leftPartyName: leftPartyName1, header: header, leftPartyMembersSizeLimit: leftPartyMembersSizeLimit, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate, partyScreenClosedDelegate: partyScreenClosedDelegate1));
      PartyScreenManager.Instance.IsDonating = false;
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsManageTroops(MobileParty leftParty)
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.TroopsManage;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainPartyAndOther(leftParty, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.Transferable, new IsTroopTransferableDelegate(PartyScreenManager.ClanManageTroopTransferableDelegate), new TextObject("{=uQgNPJnc}Manage Troops"), new PartyPresentationDoneButtonDelegate(PartyScreenManager.DefaultDoneHandler)));
      PartyScreenManager.Instance.IsDonating = false;
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsDonateTroops(MobileParty leftParty)
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.TroopsManage;
      PartyScreenManager.Instance.IsDonating = leftParty.Owner.Clan != Clan.PlayerClan;
      MobileParty party = leftParty;
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.DonateModeTroopTransferableDelegate);
      PartyPresentationDoneButtonConditionDelegate conditionDelegate = new PartyPresentationDoneButtonConditionDelegate(PartyScreenManager.DonateDonePossibleDelegate);
      TextObject header = new TextObject("{=4YfjgtO2}Donate Troops");
      PartyPresentationDoneButtonConditionDelegate partyPresentationDoneButtonConditionDelegate = conditionDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainPartyAndOther(party, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.Transferable, troopTransferableDelegate, header, partyPresentationDoneButtonConditionDelegate: partyPresentationDoneButtonConditionDelegate));
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsDonateGarrisonWithCurrentSettlement()
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.TroopsManage;
      PartyScreenManager.Instance.IsDonating = true;
      if (Hero.MainHero.CurrentSettlement.Town.GarrisonParty == null)
        Hero.MainHero.CurrentSettlement.AddGarrisonParty();
      MobileParty garrisonParty = Hero.MainHero.CurrentSettlement.Town.GarrisonParty;
      int num1 = Math.Max(garrisonParty.Party.PartySizeLimit - garrisonParty.Party.NumberOfAllMembers, 0);
      TroopRoster dummyTroopRoster1 = TroopRoster.CreateDummyTroopRoster();
      TroopRoster dummyTroopRoster2 = TroopRoster.CreateDummyTroopRoster();
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.TroopTransferableDelegate);
      TextObject name = garrisonParty.Name;
      int num2 = num1;
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.DonateGarrisonDoneHandler);
      TextObject header = new TextObject("{=uQgNPJnc}Manage Troops");
      int leftPartyMembersSizeLimit = num2;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(dummyTroopRoster1, dummyTroopRoster2, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.Transferable, troopTransferableDelegate, leftPartyName: name, header: header, leftPartyMembersSizeLimit: leftPartyMembersSizeLimit, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate));
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsDonatePrisoners()
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.PrisonerManage;
      PartyScreenManager.Instance.IsDonating = true;
      if (Hero.MainHero.CurrentSettlement.Town.GarrisonParty == null)
        Hero.MainHero.CurrentSettlement.AddGarrisonParty();
      TroopRoster prisonRoster = Hero.MainHero.CurrentSettlement.Party.PrisonRoster;
      int num1 = Math.Max(Hero.MainHero.CurrentSettlement.Party.PrisonerSizeLimit - prisonRoster.Count, 0);
      TextObject textObject = new TextObject("{=SDzIAtiA}Prisoners of {SETTLEMENT_NAME}");
      textObject.SetTextVariable("SETTLEMENT_NAME", Hero.MainHero.CurrentSettlement.Name);
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      TroopRoster leftPrisonerRoster = prisonRoster;
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.DonatePrisonerTransferableDelegate);
      TextObject leftPartyName = textObject;
      int num2 = num1;
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.DonatePrisonersDoneHandler);
      PartyPresentationDoneButtonConditionDelegate conditionDelegate = new PartyPresentationDoneButtonConditionDelegate(PartyScreenManager.DonateDonePossibleDelegate);
      TextObject header = new TextObject("{=Z212GSiV}Leave Prisoners");
      int leftPartyPrisonersSizeLimit = num2;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyPresentationDoneButtonConditionDelegate partyPresentationDoneButtonConditionDelegate = conditionDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(dummyTroopRoster, leftPrisonerRoster, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, troopTransferableDelegate, leftPartyName: leftPartyName, header: header, leftPartyPrisonersSizeLimit: leftPartyPrisonersSizeLimit, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate, partyPresentationDoneButtonConditionDelegate: partyPresentationDoneButtonConditionDelegate));
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    private static Tuple<bool, TextObject> DonateDonePossibleDelegate(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      int leftLimitNum,
      int rightLimitNum)
    {
      if (PartyScreenManager.PartyScreenLogic.CurrentData.TransferredPrisonersHistory.Any<Tuple<CharacterObject, int>>((Func<Tuple<CharacterObject, int>, bool>) (p => p.Item2 > 0)))
        return new Tuple<bool, TextObject>(false, new TextObject("{=hI7eDbXs}You cannot take prisoners."));
      if (PartyScreenManager.PartyScreenLogic.HaveRightSideGainedTroops())
        return new Tuple<bool, TextObject>(false, new TextObject("{=pvkl6pZh}You cannot take troops."));
      if ((PartyScreenManager.PartyScreenLogic.MemberTransferState != PartyScreenLogic.TransferState.NotTransferable || PartyScreenManager.PartyScreenLogic.AccompanyingTransferState != PartyScreenLogic.TransferState.NotTransferable) && PartyScreenManager.PartyScreenLogic.LeftPartyMembersSizeLimit < PartyScreenManager.PartyScreenLogic.MemberRosters[0].TotalManCount)
        return new Tuple<bool, TextObject>(false, new TextObject("{=R7wiHjcL}Donated troops exceed party capacity."));
      return PartyScreenManager.PartyScreenLogic.PrisonerTransferState != PartyScreenLogic.TransferState.NotTransferable && PartyScreenManager.PartyScreenLogic.LeftPartyPrisonersSizeLimit < PartyScreenManager.PartyScreenLogic.PrisonerRosters[0].TotalManCount ? new Tuple<bool, TextObject>(false, new TextObject("{=3nfPGbN0}Donated prisoners exceed party capacity.")) : new Tuple<bool, TextObject>(true, TextObject.Empty);
    }

    public static bool DonatePrisonerTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase LeftOwnerParty)
    {
      return side == PartyScreenLogic.PartyRosterSide.Right && type == PartyScreenLogic.TroopType.Prisoner;
    }

    public static void OpenScreenAsManagePrisoners()
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.PrisonerManage;
      TroopRoster prisonRoster = Hero.MainHero.CurrentSettlement.Party.PrisonRoster;
      TextObject textObject = new TextObject("{=SDzIAtiA}Prisoners of {SETTLEMENT_NAME}");
      textObject.SetTextVariable("SETTLEMENT_NAME", Hero.MainHero.CurrentSettlement.Name);
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      TroopRoster leftPrisonerRoster = prisonRoster;
      IsTroopTransferableDelegate troopTransferableDelegate = new IsTroopTransferableDelegate(PartyScreenManager.TroopTransferableDelegate);
      TextObject leftPartyName = textObject;
      int prisonerSizeLimit = Hero.MainHero.CurrentSettlement.Party.PrisonerSizeLimit;
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.ManageGarrisonDoneHandler);
      TextObject header = new TextObject("{=aadTnAEg}Manage Prisoners");
      int leftPartyPrisonersSizeLimit = prisonerSizeLimit;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(dummyTroopRoster, leftPrisonerRoster, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, troopTransferableDelegate, leftPartyName: leftPartyName, header: header, leftPartyPrisonersSizeLimit: leftPartyPrisonersSizeLimit, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate));
      PartyScreenManager.Instance.IsDonating = false;
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static bool TroopTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase leftOwnerParty)
    {
      Hero leaderHero = leftOwnerParty?.LeaderHero;
      bool flag = leaderHero != null && leaderHero.Clan == Clan.PlayerClan || leftOwnerParty != null && leftOwnerParty.IsMobile && leftOwnerParty.MobileParty.IsCaravan && leftOwnerParty.Owner == Hero.MainHero || leftOwnerParty != null && leftOwnerParty.IsMobile && leftOwnerParty.MobileParty.IsGarrison && leftOwnerParty.MobileParty.CurrentSettlement?.OwnerClan == Clan.PlayerClan;
      if (!character.IsHero)
        return true;
      if (!character.IsHero || character.HeroObject.Clan == Clan.PlayerClan)
        return false;
      return !character.HeroObject.IsPlayerCompanion || character.HeroObject.IsPlayerCompanion & flag;
    }

    public static bool ClanManageTroopAndPrisonerTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase LeftOwnerParty)
    {
      return !character.IsHero || character.HeroObject.IsPrisoner;
    }

    public static bool ClanManageTroopTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase LeftOwnerParty)
    {
      return !character.IsHero;
    }

    public static bool DonateModeTroopTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase LeftOwnerParty)
    {
      return !character.IsHero && side == PartyScreenLogic.PartyRosterSide.Right;
    }

    public static void OpenScreenWithCondition(
      IsTroopTransferableDelegate isTroopTransferable,
      PartyPresentationDoneButtonConditionDelegate doneButtonCondition,
      PartyPresentationDoneButtonDelegate onDoneClicked,
      PartyPresentationCancelButtonDelegate onCancelClicked,
      PartyScreenLogic.TransferState memberTransferState,
      PartyScreenLogic.TransferState prisonerTransferState,
      TextObject leftPartyName,
      int limit,
      bool showProgressBar,
      bool isDonating,
      PartyScreenMode screenMode = PartyScreenMode.Normal,
      TroopRoster memberRosterLeft = null,
      TroopRoster prisonerRosterLeft = null)
    {
      if (memberRosterLeft == (TroopRoster) null)
        memberRosterLeft = TroopRoster.CreateDummyTroopRoster();
      if (prisonerRosterLeft == (TroopRoster) null)
        prisonerRosterLeft = TroopRoster.CreateDummyTroopRoster();
      PartyScreenManager.Instance._currentMode = screenMode;
      PartyScreenManager.Instance.IsDonating = isDonating;
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      TroopRoster leftMemberRoster = memberRosterLeft;
      TroopRoster leftPrisonerRoster = prisonerRosterLeft;
      int memberTransferState1 = (int) memberTransferState;
      int prisonerTransferState1 = (int) prisonerTransferState;
      IsTroopTransferableDelegate troopTransferableDelegate = isTroopTransferable;
      PartyPresentationCancelButtonDelegate cancelButtonDelegate = onCancelClicked;
      TextObject leftPartyName1 = leftPartyName;
      int num1 = limit;
      PartyPresentationDoneButtonDelegate doneButtonDelegate = onDoneClicked;
      PartyPresentationDoneButtonConditionDelegate conditionDelegate = doneButtonCondition;
      bool flag = showProgressBar;
      TextObject header = new TextObject("{=nZaeTlj8}Exchange Troops");
      int leftPartyMembersSizeLimit = num1;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyPresentationDoneButtonConditionDelegate partyPresentationDoneButtonConditionDelegate = conditionDelegate;
      PartyPresentationCancelButtonDelegate partyPresentationCancelButtonDelegate = cancelButtonDelegate;
      int num2 = flag ? 1 : 0;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(leftMemberRoster, leftPrisonerRoster, (PartyScreenLogic.TransferState) memberTransferState1, (PartyScreenLogic.TransferState) prisonerTransferState1, PartyScreenLogic.TransferState.NotTransferable, troopTransferableDelegate, leftPartyName: leftPartyName1, header: header, leftPartyMembersSizeLimit: leftPartyMembersSizeLimit, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate, partyPresentationDoneButtonConditionDelegate: partyPresentationDoneButtonConditionDelegate, partyPresentationCancelButtonDelegate: partyPresentationCancelButtonDelegate, showProgressBar: num2 != 0));
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenForManagingAlley(
      TroopRoster memberRosterLeft,
      IsTroopTransferableDelegate isTroopTransferable,
      PartyPresentationDoneButtonConditionDelegate doneButtonCondition,
      PartyPresentationDoneButtonDelegate onDoneClicked,
      TextObject leftPartyName,
      PartyPresentationCancelButtonDelegate onCancelButtonClicked)
    {
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenLogicInitializationData dataWithMainParty = PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(memberRosterLeft, TroopRoster.CreateDummyTroopRoster(), PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.NotTransferable, isTroopTransferable, leftPartyName: leftPartyName, leftPartyMembersSizeLimit: Campaign.Current.Models.AlleyModel.MaximumTroopCountInPlayerOwnedAlley + 1, partyPresentationDoneButtonDelegate: onDoneClicked, partyPresentationDoneButtonConditionDelegate: doneButtonCondition, partyPresentationCancelButtonDelegate: onCancelButtonClicked, showProgressBar: true);
      PartyScreenManager.Instance._currentMode = PartyScreenMode.TroopsManage;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(dataWithMainParty);
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsQuest(
      TroopRoster leftMemberRoster,
      TextObject leftPartyName,
      int leftPartySizeLimit,
      int questDaysMultiplier,
      PartyPresentationDoneButtonConditionDelegate doneButtonCondition,
      PartyScreenClosedDelegate onPartyScreenClosed,
      IsTroopTransferableDelegate isTroopTransferable,
      PartyPresentationCancelButtonActivateDelegate partyPresentationCancelButtonActivateDelegate = null)
    {
      Debug.Print("PartyScreenManager::OpenScreenAsQuest");
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.QuestTroopManage;
      TroopRoster leftMemberRoster1 = leftMemberRoster;
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      IsTroopTransferableDelegate troopTransferableDelegate = isTroopTransferable;
      TextObject leftPartyName1 = leftPartyName;
      int num = leftPartySizeLimit;
      PartyPresentationDoneButtonDelegate doneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.ManageTroopsAndPrisonersDoneHandler);
      PartyPresentationDoneButtonConditionDelegate conditionDelegate = doneButtonCondition;
      PartyScreenClosedDelegate screenClosedDelegate = onPartyScreenClosed;
      PartyPresentationCancelButtonActivateDelegate activateDelegate = partyPresentationCancelButtonActivateDelegate;
      TextObject header = new TextObject("{=nZaeTlj8}Exchange Troops");
      int leftPartyMembersSizeLimit = num;
      PartyPresentationDoneButtonDelegate partyPresentationDoneButtonDelegate = doneButtonDelegate;
      PartyPresentationDoneButtonConditionDelegate partyPresentationDoneButtonConditionDelegate = conditionDelegate;
      PartyPresentationCancelButtonActivateDelegate partyPresentationCancelButtonActivateDelegate1 = activateDelegate;
      PartyScreenClosedDelegate partyScreenClosedDelegate = screenClosedDelegate;
      int questModeWageDaysMultiplier = questDaysMultiplier;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(PartyScreenLogicInitializationData.CreateBasicInitDataWithMainParty(leftMemberRoster1, dummyTroopRoster, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.NotTransferable, PartyScreenLogic.TransferState.Transferable, troopTransferableDelegate, leftPartyName: leftPartyName1, header: header, leftPartyMembersSizeLimit: leftPartyMembersSizeLimit, partyPresentationDoneButtonDelegate: partyPresentationDoneButtonDelegate, partyPresentationDoneButtonConditionDelegate: partyPresentationDoneButtonConditionDelegate, partyPresentationCancelButtonActivateDelegate: partyPresentationCancelButtonActivateDelegate1, partyScreenClosedDelegate: partyScreenClosedDelegate, transferHealthiesGetWoundedsFirst: true, showProgressBar: true, questModeWageDaysMultiplier: questModeWageDaysMultiplier));
      PartyScreenManager.Instance.IsDonating = false;
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenWithDummyRoster(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonerRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonerRoster,
      TextObject leftPartyName,
      TextObject rightPartyName,
      int leftPartySizeLimit,
      int rightPartySizeLimit,
      PartyPresentationDoneButtonConditionDelegate doneButtonCondition,
      PartyScreenClosedDelegate onPartyScreenClosed,
      IsTroopTransferableDelegate isTroopTransferable,
      PartyPresentationCancelButtonActivateDelegate partyPresentationCancelButtonActivateDelegate = null)
    {
      Debug.Print("PartyScreenManager::OpenScreenWithDummyRoster");
      PartyScreenManager.Instance._partyScreenLogic = new PartyScreenLogic();
      PartyScreenManager.Instance._currentMode = PartyScreenMode.TroopsManage;
      PartyScreenManager.Instance._partyScreenLogic.Initialize(new PartyScreenLogicInitializationData()
      {
        LeftOwnerParty = (PartyBase) null,
        RightOwnerParty = MobileParty.MainParty.Party,
        LeftMemberRoster = leftMemberRoster,
        LeftPrisonerRoster = leftPrisonerRoster,
        RightMemberRoster = rightMemberRoster,
        RightPrisonerRoster = rightPrisonerRoster,
        LeftLeaderHero = (Hero) null,
        RightLeaderHero = PartyBase.MainParty.LeaderHero,
        LeftPartyMembersSizeLimit = leftPartySizeLimit,
        LeftPartyPrisonersSizeLimit = 0,
        RightPartyMembersSizeLimit = rightPartySizeLimit,
        RightPartyPrisonersSizeLimit = 0,
        LeftPartyName = leftPartyName,
        RightPartyName = rightPartyName,
        TroopTransferableDelegate = isTroopTransferable,
        PartyPresentationDoneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenManager.ManageTroopsAndPrisonersDoneHandler),
        PartyPresentationDoneButtonConditionDelegate = doneButtonCondition,
        PartyPresentationCancelButtonActivateDelegate = partyPresentationCancelButtonActivateDelegate,
        PartyPresentationCancelButtonDelegate = (PartyPresentationCancelButtonDelegate) null,
        PartyScreenClosedDelegate = onPartyScreenClosed,
        IsDismissMode = true,
        IsTroopUpgradesDisabled = true,
        Header = (TextObject) null,
        TransferHealthiesGetWoundedsFirst = true,
        ShowProgressBar = false,
        MemberTransferState = PartyScreenLogic.TransferState.Transferable,
        PrisonerTransferState = PartyScreenLogic.TransferState.NotTransferable,
        AccompanyingTransferState = PartyScreenLogic.TransferState.Transferable
      });
      PartyScreenManager.Instance.IsDonating = false;
      PartyState state = Game.Current.GameStateManager.CreateState<PartyState>();
      state.InitializeLogic(PartyScreenManager.Instance._partyScreenLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenWithDummyRosterWithMainParty(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonerRoster,
      TextObject leftPartyName,
      int leftPartySizeLimit,
      PartyPresentationDoneButtonConditionDelegate doneButtonCondition,
      PartyScreenClosedDelegate onPartyScreenClosed,
      IsTroopTransferableDelegate isTroopTransferable,
      PartyPresentationCancelButtonActivateDelegate partyPresentationCancelButtonActivateDelegate = null)
    {
      Debug.Print("PartyScreenManager::OpenScreenWithDummyRosterWithMainParty");
      PartyScreenManager.OpenScreenWithDummyRoster(leftMemberRoster, leftPrisonerRoster, MobileParty.MainParty.MemberRoster, MobileParty.MainParty.PrisonRoster, leftPartyName, MobileParty.MainParty.Name, leftPartySizeLimit, MobileParty.MainParty.Party.PartySizeLimit, doneButtonCondition, onPartyScreenClosed, isTroopTransferable, partyPresentationCancelButtonActivateDelegate);
    }

    public static void OpenScreenAsCreateClanPartyForHero(
      Hero hero,
      PartyScreenClosedDelegate onScreenClosed = null,
      IsTroopTransferableDelegate isTroopTransferable = null)
    {
      TroopRoster dummyTroopRoster1 = TroopRoster.CreateDummyTroopRoster();
      TroopRoster dummyTroopRoster2 = TroopRoster.CreateDummyTroopRoster();
      TroopRoster rightMemberRoster = MobileParty.MainParty.MemberRoster.CloneRosterData();
      TroopRoster rightPrisonerRoster = MobileParty.MainParty.PrisonRoster.CloneRosterData();
      dummyTroopRoster1.AddToCounts(hero.CharacterObject, 1);
      rightMemberRoster.AddToCounts(hero.CharacterObject, -1);
      TextObject text = GameTexts.FindText("str_lord_party_name");
      text.SetCharacterProperties("TROOP", hero.CharacterObject);
      PartyScreenManager.OpenScreenWithDummyRoster(dummyTroopRoster1, dummyTroopRoster2, rightMemberRoster, rightPrisonerRoster, text, MobileParty.MainParty.Name, Campaign.Current.Models.PartySizeLimitModel.GetAssumedPartySizeForLordParty(hero, hero.Clan.MapFaction, hero.Clan), MobileParty.MainParty.LimitedPartySize, (PartyPresentationDoneButtonConditionDelegate) null, onScreenClosed ?? new PartyScreenClosedDelegate(PartyScreenManager.OpenScreenAsCreateClanPartyForHeroPartyScreenClosed), isTroopTransferable ?? new IsTroopTransferableDelegate(PartyScreenManager.OpenScreenAsCreateClanPartyForHeroTroopTransferableDelegate));
    }

    private static void OpenScreenAsCreateClanPartyForHeroPartyScreenClosed(
      PartyBase leftOwnerParty,
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      PartyBase rightOwnerParty,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      bool fromCancel)
    {
      if (fromCancel)
        return;
      Hero hero = (Hero) null;
      for (int index = 0; index < leftMemberRoster.data.Length; ++index)
      {
        CharacterObject character = leftMemberRoster.data[index].Character;
        if ((character != null ? (character.IsHero ? 1 : 0) : 0) != 0)
          hero = leftMemberRoster.data[index].Character.HeroObject;
      }
      MobileParty newMobileParty = hero.Clan.CreateNewMobileParty(hero);
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) leftMemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character != hero.CharacterObject)
        {
          newMobileParty.MemberRoster.Add(troopRosterElement);
          rightOwnerParty.MemberRoster.AddToCounts(troopRosterElement.Character, -troopRosterElement.Number, woundedCount: -troopRosterElement.WoundedNumber, xpChange: -troopRosterElement.Xp);
        }
      }
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) leftPrisonRoster.GetTroopRoster())
      {
        newMobileParty.PrisonRoster.Add(troopRosterElement);
        rightOwnerParty.PrisonRoster.AddToCounts(troopRosterElement.Character, -troopRosterElement.Number, woundedCount: -troopRosterElement.WoundedNumber, xpChange: -troopRosterElement.Xp);
      }
    }

    private static bool OpenScreenAsCreateClanPartyForHeroTroopTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase LeftOwnerParty)
    {
      return !character.IsHero;
    }

    private static bool SellPrisonersDoneHandler(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty = null,
      PartyBase rightParty = null)
    {
      SellPrisonersAction.ApplyByPartyScreen(leftPrisonRoster);
      return true;
    }

    private static bool DonateGarrisonDoneHandler(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty = null,
      PartyBase rightParty = null)
    {
      Settlement currentSettlement = Hero.MainHero.CurrentSettlement;
      MobileParty garrisonParty = currentSettlement.Town.GarrisonParty;
      if (garrisonParty == null)
      {
        currentSettlement.AddGarrisonParty();
        garrisonParty = currentSettlement.Town.GarrisonParty;
      }
      for (int index = 0; index < leftMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = leftMemberRoster.GetElementCopyAtIndex(index);
        garrisonParty.AddElementToMemberRoster(elementCopyAtIndex.Character, elementCopyAtIndex.Number);
        if (elementCopyAtIndex.Character.IsHero)
          EnterSettlementAction.ApplyForCharacterOnly(elementCopyAtIndex.Character.HeroObject, currentSettlement);
      }
      return true;
    }

    private static bool DonatePrisonersDoneHandler(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster leftSideTransferredPrisonerRoster,
      FlattenedTroopRoster rightSideTransferredPrisonerRoster,
      bool isForced,
      PartyBase leftParty = null,
      PartyBase rightParty = null)
    {
      if (!rightSideTransferredPrisonerRoster.IsEmpty<FlattenedTroopRosterElement>())
      {
        Settlement currentSettlement = Hero.MainHero.CurrentSettlement;
        foreach (CharacterObject troop in rightSideTransferredPrisonerRoster.Troops)
        {
          if (troop.IsHero)
            EnterSettlementAction.ApplyForPrisoner(troop.HeroObject, currentSettlement);
        }
        CampaignEventDispatcher.Instance.OnPrisonerDonatedToSettlement(rightParty.MobileParty, rightSideTransferredPrisonerRoster, currentSettlement);
      }
      return true;
    }

    private static bool ManageGarrisonDoneHandler(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty = null,
      PartyBase rightParty = null)
    {
      Settlement currentSettlement = Hero.MainHero.CurrentSettlement;
      for (int index = 0; index < leftMemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = leftMemberRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Character.IsHero)
          EnterSettlementAction.ApplyForCharacterOnly(elementCopyAtIndex.Character.HeroObject, currentSettlement);
      }
      for (int index = 0; index < leftPrisonRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = leftPrisonRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Character.IsHero)
          EnterSettlementAction.ApplyForPrisoner(elementCopyAtIndex.Character.HeroObject, currentSettlement);
      }
      return true;
    }

    private static bool ManageTroopsAndPrisonersDoneHandler(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty = null,
      PartyBase rightParty = null)
    {
      return true;
    }

    private static bool DefaultDoneHandler(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty = null,
      PartyBase rightParty = null)
    {
      PartyScreenManager.HandleReleasedAndTakenPrisoners(takenPrisonerRoster, releasedPrisonerRoster);
      return true;
    }

    private static void HandleReleasedAndTakenPrisoners(
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster)
    {
      if (!releasedPrisonerRoster.IsEmpty<FlattenedTroopRosterElement>())
        EndCaptivityAction.ApplyByReleasedByChoice(releasedPrisonerRoster);
      if (takenPrisonerRoster.IsEmpty<FlattenedTroopRosterElement>())
        return;
      TakePrisonerAction.ApplyByTakenFromPartyScreen(takenPrisonerRoster);
    }
  }
}
