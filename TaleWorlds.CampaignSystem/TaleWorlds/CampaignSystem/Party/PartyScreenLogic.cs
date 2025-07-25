// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Party.PartyScreenLogic
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Party
{
  public class PartyScreenLogic
  {
    public PartyPresentationDoneButtonDelegate PartyPresentationDoneButtonDelegate;
    public PartyPresentationDoneButtonConditionDelegate PartyPresentationDoneButtonConditionDelegate;
    public PartyPresentationCancelButtonActivateDelegate PartyPresentationCancelButtonActivateDelegate;
    public PartyPresentationCancelButtonDelegate PartyPresentationCancelButtonDelegate;
    public PartyScreenLogic.PresentationUpdate UpdateDelegate;
    public IsTroopTransferableDelegate IsTroopTransferableDelegate;
    private PartyScreenLogic.TroopSortType _activeOtherPartySortType;
    private PartyScreenLogic.TroopSortType _activeMainPartySortType;
    private bool _isOtherPartySortAscending;
    private bool _isMainPartySortAscending;
    public TroopRoster[] MemberRosters;
    public TroopRoster[] PrisonerRosters;
    public bool IsConsumablesChanges;
    private readonly Dictionary<PartyScreenLogic.TroopSortType, PartyScreenLogic.TroopComparer> _defaultComparers;
    private readonly PartyScreenData _initialData;
    private PartyScreenData _savedData;
    private Game _game;

    public event PartyScreenLogic.PartyGoldDelegate PartyGoldChange;

    public event PartyScreenLogic.PartyMoraleDelegate PartyMoraleChange;

    public event PartyScreenLogic.PartyInfluenceDelegate PartyInfluenceChange;

    public event PartyScreenLogic.PartyHorseDelegate PartyHorseChange;

    public event PartyScreenLogic.PresentationUpdate Update;

    public event PartyScreenClosedDelegate PartyScreenClosedEvent;

    public event PartyScreenLogic.AfterResetDelegate AfterReset;

    public PartyScreenLogic.TroopSortType ActiveOtherPartySortType
    {
      get => this._activeOtherPartySortType;
      set => this._activeOtherPartySortType = value;
    }

    public PartyScreenLogic.TroopSortType ActiveMainPartySortType
    {
      get => this._activeMainPartySortType;
      set => this._activeMainPartySortType = value;
    }

    public bool IsOtherPartySortAscending
    {
      get => this._isOtherPartySortAscending;
      set => this._isOtherPartySortAscending = value;
    }

    public bool IsMainPartySortAscending
    {
      get => this._isMainPartySortAscending;
      set => this._isMainPartySortAscending = value;
    }

    public PartyScreenLogic.TransferState MemberTransferState { get; private set; }

    public PartyScreenLogic.TransferState PrisonerTransferState { get; private set; }

    public PartyScreenLogic.TransferState AccompanyingTransferState { get; private set; }

    public TextObject LeftPartyName { get; private set; }

    public TextObject RightPartyName { get; private set; }

    public TextObject Header { get; private set; }

    public int LeftPartyMembersSizeLimit { get; private set; }

    public int LeftPartyPrisonersSizeLimit { get; private set; }

    public int RightPartyMembersSizeLimit { get; private set; }

    public int RightPartyPrisonersSizeLimit { get; private set; }

    public bool ShowProgressBar { get; private set; }

    public string DoneReasonString { get; private set; }

    public bool IsTroopUpgradesDisabled { get; private set; }

    public CharacterObject RightPartyLeader { get; private set; }

    public CharacterObject LeftPartyLeader { get; private set; }

    public PartyBase LeftOwnerParty { get; private set; }

    public PartyBase RightOwnerParty { get; private set; }

    public PartyScreenData CurrentData { get; private set; }

    public bool TransferHealthiesGetWoundedsFirst { get; private set; }

    public int QuestModeWageDaysMultiplier { get; private set; }

    public Game Game
    {
      get => this._game;
      set => this._game = value;
    }

    private PartyScreenMode CurrentMode => PartyScreenManager.Instance.CurrentMode;

    public PartyScreenLogic()
    {
      this._game = Game.Current;
      this.MemberRosters = new TroopRoster[2];
      this.PrisonerRosters = new TroopRoster[2];
      this.CurrentData = new PartyScreenData();
      this._initialData = new PartyScreenData();
      this._defaultComparers = new Dictionary<PartyScreenLogic.TroopSortType, PartyScreenLogic.TroopComparer>()
      {
        {
          PartyScreenLogic.TroopSortType.Custom,
          (PartyScreenLogic.TroopComparer) new PartyScreenLogic.TroopDefaultComparer()
        },
        {
          PartyScreenLogic.TroopSortType.Type,
          (PartyScreenLogic.TroopComparer) new PartyScreenLogic.TroopTypeComparer()
        },
        {
          PartyScreenLogic.TroopSortType.Name,
          (PartyScreenLogic.TroopComparer) new PartyScreenLogic.TroopNameComparer()
        },
        {
          PartyScreenLogic.TroopSortType.Count,
          (PartyScreenLogic.TroopComparer) new PartyScreenLogic.TroopCountComparer()
        },
        {
          PartyScreenLogic.TroopSortType.Tier,
          (PartyScreenLogic.TroopComparer) new PartyScreenLogic.TroopTierComparer()
        }
      };
      this.IsTroopUpgradesDisabled = false;
    }

    public void Initialize(
      PartyScreenLogicInitializationData initializationData)
    {
      this.MemberRosters[1] = initializationData.RightMemberRoster;
      this.PrisonerRosters[1] = initializationData.RightPrisonerRoster;
      this.MemberRosters[0] = initializationData.LeftMemberRoster;
      this.PrisonerRosters[0] = initializationData.LeftPrisonerRoster;
      this.RightPartyLeader = initializationData.RightLeaderHero?.CharacterObject;
      this.LeftPartyLeader = initializationData.LeftLeaderHero?.CharacterObject;
      this.RightOwnerParty = initializationData.RightOwnerParty;
      this.LeftOwnerParty = initializationData.LeftOwnerParty;
      this.RightPartyName = initializationData.RightPartyName;
      this.RightPartyMembersSizeLimit = initializationData.RightPartyMembersSizeLimit;
      this.RightPartyPrisonersSizeLimit = initializationData.RightPartyPrisonersSizeLimit;
      this.LeftPartyName = initializationData.LeftPartyName;
      this.LeftPartyMembersSizeLimit = initializationData.LeftPartyMembersSizeLimit;
      this.LeftPartyPrisonersSizeLimit = initializationData.LeftPartyPrisonersSizeLimit;
      this.Header = initializationData.Header;
      this.QuestModeWageDaysMultiplier = initializationData.QuestModeWageDaysMultiplier;
      this.TransferHealthiesGetWoundedsFirst = initializationData.TransferHealthiesGetWoundedsFirst;
      this.SetPartyGoldChangeAmount(0);
      this.SetHorseChangeAmount(0);
      this.SetInfluenceChangeAmount(0, 0, 0);
      this.SetMoraleChangeAmount(0);
      this.CurrentData.BindRostersFrom(this.MemberRosters[1], this.PrisonerRosters[1], this.MemberRosters[0], this.PrisonerRosters[0], this.RightOwnerParty, this.LeftOwnerParty);
      this._initialData.InitializeCopyFrom(initializationData.RightOwnerParty, initializationData.LeftOwnerParty);
      this._initialData.CopyFromPartyAndRoster(this.MemberRosters[1], this.PrisonerRosters[1], this.MemberRosters[0], this.PrisonerRosters[0], this.RightOwnerParty);
      if (initializationData.PartyPresentationDoneButtonDelegate == null)
      {
        TaleWorlds.Library.Debug.FailedAssert("Done handler is given null for party screen!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Party\\PartyScreenLogic.cs", nameof (Initialize), 237);
        initializationData.PartyPresentationDoneButtonDelegate = new PartyPresentationDoneButtonDelegate(PartyScreenLogic.DefaultDoneHandler);
      }
      this.PartyPresentationDoneButtonDelegate = initializationData.PartyPresentationDoneButtonDelegate;
      this.PartyPresentationDoneButtonConditionDelegate = initializationData.PartyPresentationDoneButtonConditionDelegate;
      this.PartyPresentationCancelButtonActivateDelegate = initializationData.PartyPresentationCancelButtonActivateDelegate;
      this.PartyPresentationCancelButtonDelegate = initializationData.PartyPresentationCancelButtonDelegate;
      this.IsTroopUpgradesDisabled = initializationData.IsTroopUpgradesDisabled || initializationData.RightOwnerParty == null;
      this.MemberTransferState = initializationData.MemberTransferState;
      this.PrisonerTransferState = initializationData.PrisonerTransferState;
      this.AccompanyingTransferState = initializationData.AccompanyingTransferState;
      this.IsTroopTransferableDelegate = initializationData.TroopTransferableDelegate;
      this.PartyPresentationCancelButtonActivateDelegate = initializationData.PartyPresentationCancelButtonActivateDelegate;
      this.PartyPresentationCancelButtonDelegate = initializationData.PartyPresentationCancelButtonDelegate;
      this.PartyScreenClosedEvent = initializationData.PartyScreenClosedDelegate;
      this.ShowProgressBar = initializationData.ShowProgressBar;
      if (this.CurrentMode != PartyScreenMode.QuestTroopManage)
        return;
      int newTotalAmount = -this.MemberRosters[0].Sum((Func<TroopRosterElement, int>) (t => t.Character.TroopWage * t.Number * this.QuestModeWageDaysMultiplier));
      this._initialData.PartyGoldChangeAmount = newTotalAmount;
      this.SetPartyGoldChangeAmount(newTotalAmount);
    }

    private void SetPartyGoldChangeAmount(int newTotalAmount)
    {
      this.CurrentData.PartyGoldChangeAmount = newTotalAmount;
      PartyScreenLogic.PartyGoldDelegate partyGoldChange = this.PartyGoldChange;
      if (partyGoldChange == null)
        return;
      partyGoldChange();
    }

    private void SetMoraleChangeAmount(int newAmount)
    {
      this.CurrentData.PartyMoraleChangeAmount = newAmount;
      PartyScreenLogic.PartyMoraleDelegate partyMoraleChange = this.PartyMoraleChange;
      if (partyMoraleChange == null)
        return;
      partyMoraleChange();
    }

    private void SetHorseChangeAmount(int newAmount)
    {
      this.CurrentData.PartyHorseChangeAmount = newAmount;
      PartyScreenLogic.PartyHorseDelegate partyHorseChange = this.PartyHorseChange;
      if (partyHorseChange == null)
        return;
      partyHorseChange();
    }

    private void SetInfluenceChangeAmount(
      int heroInfluence,
      int troopInfluence,
      int prisonerInfluence)
    {
      this.CurrentData.PartyInfluenceChangeAmount = (heroInfluence, troopInfluence, prisonerInfluence);
      PartyScreenLogic.PartyInfluenceDelegate partyInfluenceChange = this.PartyInfluenceChange;
      if (partyInfluenceChange == null)
        return;
      partyInfluenceChange();
    }

    private void ProcessCommand(PartyScreenLogic.PartyCommand command)
    {
      switch (command.Code)
      {
        case PartyScreenLogic.PartyCommandCode.TransferTroop:
          this.TransferTroop(command, true);
          break;
        case PartyScreenLogic.PartyCommandCode.UpgradeTroop:
          this.UpgradeTroop(command);
          break;
        case PartyScreenLogic.PartyCommandCode.TransferPartyLeaderTroop:
          this.TransferPartyLeaderTroop(command);
          break;
        case PartyScreenLogic.PartyCommandCode.TransferTroopToLeaderSlot:
          this.TransferTroopToLeaderSlot(command);
          break;
        case PartyScreenLogic.PartyCommandCode.ShiftTroop:
          this.ShiftTroop(command);
          break;
        case PartyScreenLogic.PartyCommandCode.RecruitTroop:
          this.RecruitPrisoner(command);
          break;
        case PartyScreenLogic.PartyCommandCode.ExecuteTroop:
          this.ExecuteTroop(command);
          break;
        case PartyScreenLogic.PartyCommandCode.TransferAllTroops:
          this.TransferAllTroops(command);
          break;
        case PartyScreenLogic.PartyCommandCode.SortTroops:
          this.SortTroops(command);
          break;
      }
    }

    public void AddCommand(PartyScreenLogic.PartyCommand command) => this.ProcessCommand(command);

    public bool ValidateCommand(PartyScreenLogic.PartyCommand command)
    {
      if (command.Code == PartyScreenLogic.PartyCommandCode.TransferTroop || command.Code == PartyScreenLogic.PartyCommandCode.TransferTroopToLeaderSlot)
      {
        CharacterObject character = command.Character;
        if (character == CharacterObject.PlayerCharacter)
          return false;
        if (command.Type == PartyScreenLogic.TroopType.Member)
        {
          int indexOfTroop = this.MemberRosters[(int) command.RosterSide].FindIndexOfTroop(character);
          return ((indexOfTroop == -1 ? 0 : (this.MemberRosters[(int) command.RosterSide].GetElementNumber(indexOfTroop) >= command.TotalNumber ? 1 : 0)) & (command.RosterSide != PartyScreenLogic.PartyRosterSide.Left ? (true ? 1 : 0) : (command.Index != 0 ? 1 : 0))) != 0;
        }
        int indexOfTroop1 = this.PrisonerRosters[(int) command.RosterSide].FindIndexOfTroop(character);
        return indexOfTroop1 != -1 && this.PrisonerRosters[(int) command.RosterSide].GetElementNumber(indexOfTroop1) >= command.TotalNumber;
      }
      if (command.Code == PartyScreenLogic.PartyCommandCode.ShiftTroop)
      {
        CharacterObject character = command.Character;
        if ((character == this.LeftPartyLeader || character == this.RightPartyLeader ? 0 : (command.RosterSide != PartyScreenLogic.PartyRosterSide.Left || this.LeftPartyLeader != null && command.Index == 0 ? (command.RosterSide != PartyScreenLogic.PartyRosterSide.Right ? 0 : (this.RightPartyLeader == null ? 1 : (command.Index != 0 ? 1 : 0))) : 1)) == 0)
          return false;
        if (command.Type == PartyScreenLogic.TroopType.Member)
        {
          int indexOfTroop = this.MemberRosters[(int) command.RosterSide].FindIndexOfTroop(character);
          return indexOfTroop != -1 && indexOfTroop != command.Index;
        }
        int indexOfTroop2 = this.PrisonerRosters[(int) command.RosterSide].FindIndexOfTroop(character);
        return indexOfTroop2 != -1 && indexOfTroop2 != command.Index;
      }
      if (command.Code == PartyScreenLogic.PartyCommandCode.TransferPartyLeaderTroop)
      {
        CharacterObject character = command.Character;
        BasicCharacterObject playerTroop = this._game.PlayerTroop;
        return false;
      }
      if (command.Code == PartyScreenLogic.PartyCommandCode.UpgradeTroop)
      {
        CharacterObject character = command.Character;
        int indexOfTroop = this.MemberRosters[(int) command.RosterSide].FindIndexOfTroop(character);
        if (indexOfTroop == -1 || this.MemberRosters[(int) command.RosterSide].GetElementNumber(indexOfTroop) < command.TotalNumber || character.UpgradeTargets.Length == 0)
          return false;
        if (command.UpgradeTarget < character.UpgradeTargets.Length)
        {
          CharacterObject upgradeTarget = character.UpgradeTargets[command.UpgradeTarget];
          int upgradeXpCost = character.GetUpgradeXpCost(PartyBase.MainParty, command.UpgradeTarget);
          int upgradeGoldCost = character.GetUpgradeGoldCost(PartyBase.MainParty, command.UpgradeTarget);
          if (this.MemberRosters[(int) command.RosterSide].GetElementXp(indexOfTroop) >= upgradeXpCost * command.TotalNumber)
          {
            int? gold = (command.RosterSide == PartyScreenLogic.PartyRosterSide.Left ? this.LeftPartyLeader : this.RightPartyLeader)?.HeroObject.Gold;
            int goldChangeAmount = this.CurrentData.PartyGoldChangeAmount;
            int? nullable = gold.HasValue ? new int?(gold.GetValueOrDefault() + goldChangeAmount) : new int?();
            int num = upgradeGoldCost * command.TotalNumber;
            if (nullable.GetValueOrDefault() >= num & nullable.HasValue)
            {
              if (upgradeTarget.UpgradeRequiresItemFromCategory == null)
                return true;
              foreach (ItemRosterElement itemRosterElement in this.RightOwnerParty.ItemRoster)
              {
                if (itemRosterElement.EquipmentElement.Item.ItemCategory == upgradeTarget.UpgradeRequiresItemFromCategory)
                  return true;
              }
              MBTextManager.SetTextVariable("REQUIRED_ITEM", upgradeTarget.UpgradeRequiresItemFromCategory.GetName(), false);
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_item_needed_for_upgrade"));
              return false;
            }
            MBTextManager.SetTextVariable("VALUE", upgradeGoldCost);
            MBInformationManager.AddQuickInformation(GameTexts.FindText("str_gold_needed_for_upgrade"));
            return false;
          }
          MBInformationManager.AddQuickInformation(new TextObject("{=m1bIfPf1}Character does not have enough experience for upgrade."));
          return false;
        }
        MBInformationManager.AddQuickInformation(new TextObject("{=kaQ7DsW3}Character does not have upgrade target."));
        return false;
      }
      if (command.Code == PartyScreenLogic.PartyCommandCode.RecruitTroop)
        return this.IsPrisonerRecruitable(command.Type, command.Character, command.RosterSide);
      if (command.Code == PartyScreenLogic.PartyCommandCode.ExecuteTroop)
        return this.IsExecutable(command.Type, command.Character, command.RosterSide);
      if (command.Code == PartyScreenLogic.PartyCommandCode.TransferAllTroops)
        return this.GetRoster(command.RosterSide, command.Type).Count != 0;
      if (command.Code != PartyScreenLogic.PartyCommandCode.SortTroops)
        throw new MBUnknownTypeException("Unknown command type in ValidateCommand.");
      return this.GetActiveSortTypeForSide(command.RosterSide) != command.SortType || this.GetIsAscendingSortForSide(command.RosterSide) != command.IsSortAscending;
    }

    private void OnReset(bool fromCancel)
    {
      PartyScreenLogic.AfterResetDelegate afterReset = this.AfterReset;
      if (afterReset == null)
        return;
      afterReset(this, fromCancel);
    }

    protected void TransferTroopToLeaderSlot(PartyScreenLogic.PartyCommand command)
    {
      bool flag = false;
      if (this.ValidateCommand(command))
      {
        CharacterObject character = command.Character;
        if (command.Type == PartyScreenLogic.TroopType.Member)
        {
          int indexOfTroop = this.MemberRosters[(int) command.RosterSide].FindIndexOfTroop(character);
          TroopRosterElement elementCopyAtIndex = this.MemberRosters[(int) command.RosterSide].GetElementCopyAtIndex(indexOfTroop);
          int xpAmount = command.TotalNumber * (elementCopyAtIndex.Xp / elementCopyAtIndex.Number);
          this.MemberRosters[(int) command.RosterSide].AddToCounts(character, -command.TotalNumber, woundedCount: -command.WoundedNumber, index: indexOfTroop);
          this.MemberRosters[(int) ((byte) 1 - command.RosterSide)].AddToCounts(character, command.TotalNumber, woundedCount: command.WoundedNumber, index: 0);
          if (elementCopyAtIndex.Number != command.TotalNumber)
            this.MemberRosters[(int) command.RosterSide].AddXpToTroop(-xpAmount, character);
          this.MemberRosters[(int) ((byte) 1 - command.RosterSide)].AddXpToTroop(xpAmount, character);
        }
        flag = true;
      }
      if (!flag)
        return;
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate != null)
        updateDelegate(command);
      PartyScreenLogic.PresentationUpdate update = this.Update;
      if (update == null)
        return;
      update(command);
    }

    protected void TransferTroop(PartyScreenLogic.PartyCommand command, bool invokeUpdate)
    {
      bool flag = false;
      if (this.ValidateCommand(command))
      {
        CharacterObject troop = command.Character;
        if (command.Type == PartyScreenLogic.TroopType.Member)
        {
          int indexOfTroop = this.MemberRosters[(int) command.RosterSide].FindIndexOfTroop(troop);
          TroopRosterElement elementCopyAtIndex = this.MemberRosters[(int) command.RosterSide].GetElementCopyAtIndex(indexOfTroop);
          int num1 = troop.UpgradeTargets.Length != 0 ? ((IEnumerable<CharacterObject>) troop.UpgradeTargets).Max<CharacterObject>((Func<CharacterObject, int>) (x => Campaign.Current.Models.PartyTroopUpgradeModel.GetXpCostForUpgrade(PartyBase.MainParty, troop, x))) : 0;
          int xpAmount;
          if (command.RosterSide == PartyScreenLogic.PartyRosterSide.Right)
          {
            int num2 = (elementCopyAtIndex.Number - command.TotalNumber) * num1;
            xpAmount = elementCopyAtIndex.Xp < num2 || num2 < 0 ? 0 : elementCopyAtIndex.Xp - num2;
          }
          else
          {
            int num3 = command.TotalNumber * num1;
            xpAmount = elementCopyAtIndex.Xp <= num3 || num3 < 0 ? elementCopyAtIndex.Xp : num3;
            this.MemberRosters[(int) command.RosterSide].AddXpToTroop(-xpAmount, troop);
          }
          this.MemberRosters[(int) command.RosterSide].AddToCounts(troop, -command.TotalNumber, woundedCount: -command.WoundedNumber, removeDepleted: false, index: indexOfTroop);
          this.MemberRosters[(int) ((byte) 1 - command.RosterSide)].AddToCounts(troop, command.TotalNumber, woundedCount: command.WoundedNumber, removeDepleted: false, index: command.Index);
          this.MemberRosters[(int) ((byte) 1 - command.RosterSide)].AddXpToTroop(xpAmount, troop);
        }
        else
        {
          int indexOfTroop = this.PrisonerRosters[(int) command.RosterSide].FindIndexOfTroop(troop);
          TroopRosterElement elementCopyAtIndex = this.PrisonerRosters[(int) command.RosterSide].GetElementCopyAtIndex(indexOfTroop);
          int toRecruitPrisoner = Campaign.Current.Models.PrisonerRecruitmentCalculationModel.GetConformityNeededToRecruitPrisoner(elementCopyAtIndex.Character);
          int xpAmount;
          if (command.RosterSide == PartyScreenLogic.PartyRosterSide.Right)
          {
            this.UpdatePrisonerTransferHistory(troop, -command.TotalNumber);
            int num = (elementCopyAtIndex.Number - command.TotalNumber) * toRecruitPrisoner;
            xpAmount = elementCopyAtIndex.Xp < num || num < 0 ? 0 : elementCopyAtIndex.Xp - num;
          }
          else
          {
            this.UpdatePrisonerTransferHistory(troop, command.TotalNumber);
            int num = command.TotalNumber * toRecruitPrisoner;
            xpAmount = elementCopyAtIndex.Xp <= num || num < 0 ? elementCopyAtIndex.Xp : num;
            this.PrisonerRosters[(int) command.RosterSide].AddXpToTroop(-xpAmount, troop);
          }
          this.PrisonerRosters[(int) command.RosterSide].AddToCounts(troop, -command.TotalNumber, woundedCount: -command.WoundedNumber, removeDepleted: false, index: command.Index);
          this.PrisonerRosters[(int) ((byte) 1 - command.RosterSide)].AddToCounts(troop, command.TotalNumber, woundedCount: command.WoundedNumber, removeDepleted: false, index: command.Index);
          this.PrisonerRosters[(int) ((byte) 1 - command.RosterSide)].AddXpToTroop(xpAmount, troop);
          if (this.CurrentData.RightRecruitableData.ContainsKey(troop))
            this.CurrentData.RightRecruitableData[troop] = MathF.Max(MathF.Min(this.CurrentData.RightRecruitableData[troop], this.PrisonerRosters[1].GetElementNumber(troop)), Campaign.Current.Models.PrisonerRecruitmentCalculationModel.CalculateRecruitableNumber(PartyBase.MainParty, troop));
        }
        flag = true;
      }
      if (!flag)
        return;
      if (this.PrisonerTransferState == PartyScreenLogic.TransferState.TransferableWithTrade && command.Type == PartyScreenLogic.TroopType.Prisoner)
      {
        int num = command.RosterSide == PartyScreenLogic.PartyRosterSide.Right ? 1 : -1;
        this.SetPartyGoldChangeAmount(this.CurrentData.PartyGoldChangeAmount + Campaign.Current.Models.RansomValueCalculationModel.PrisonerRansomValue(command.Character, Hero.MainHero) * command.TotalNumber * num);
      }
      if (this.CurrentMode == PartyScreenMode.QuestTroopManage)
      {
        int num = command.RosterSide == PartyScreenLogic.PartyRosterSide.Right ? -1 : 1;
        this.SetPartyGoldChangeAmount(this.CurrentData.PartyGoldChangeAmount + command.Character.TroopWage * command.TotalNumber * this.QuestModeWageDaysMultiplier * num);
      }
      if (PartyScreenManager.Instance.IsDonating)
      {
        Settlement currentSettlement = Hero.MainHero.CurrentSettlement;
        float heroInfluence = 0.0f;
        float troopInfluence = 0.0f;
        float prisonerInfluence = 0.0f;
        foreach (TroopTradeDifference troopTradeDifference in this._initialData.GetTroopTradeDifferencesFromTo(this.CurrentData))
        {
          int num = troopTradeDifference.FromCount - troopTradeDifference.ToCount;
          if (num > 0)
          {
            if (!troopTradeDifference.IsPrisoner)
              troopInfluence += (float) num * Campaign.Current.Models.PrisonerDonationModel.CalculateInfluenceGainAfterTroopDonation(PartyBase.MainParty, troopTradeDifference.Troop, currentSettlement);
            else if (troopTradeDifference.Troop.IsHero)
              heroInfluence += Campaign.Current.Models.PrisonerDonationModel.CalculateInfluenceGainAfterPrisonerDonation(PartyBase.MainParty, troopTradeDifference.Troop, currentSettlement);
            else
              prisonerInfluence += (float) num * Campaign.Current.Models.PrisonerDonationModel.CalculateInfluenceGainAfterPrisonerDonation(PartyBase.MainParty, troopTradeDifference.Troop, currentSettlement);
          }
        }
        this.SetInfluenceChangeAmount((int) heroInfluence, (int) troopInfluence, (int) prisonerInfluence);
      }
      if (!invokeUpdate)
        return;
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate != null)
        updateDelegate(command);
      PartyScreenLogic.PresentationUpdate update = this.Update;
      if (update == null)
        return;
      update(command);
    }

    protected void ShiftTroop(PartyScreenLogic.PartyCommand command)
    {
      bool flag = false;
      if (this.ValidateCommand(command))
      {
        CharacterObject character = command.Character;
        if (command.Type == PartyScreenLogic.TroopType.Member)
        {
          int indexOfTroop = this.MemberRosters[(int) command.RosterSide].FindIndexOfTroop(character);
          int targetIndex = indexOfTroop < command.Index ? command.Index - 1 : command.Index;
          this.MemberRosters[(int) command.RosterSide].ShiftTroopToIndex(indexOfTroop, targetIndex);
        }
        else
        {
          int indexOfTroop = this.PrisonerRosters[(int) command.RosterSide].FindIndexOfTroop(character);
          this.PrisonerRosters[(int) command.RosterSide].GetElementCopyAtIndex(indexOfTroop);
          int targetIndex = indexOfTroop < command.Index ? command.Index - 1 : command.Index;
          this.PrisonerRosters[(int) command.RosterSide].ShiftTroopToIndex(indexOfTroop, targetIndex);
        }
        flag = true;
      }
      if (!flag)
        return;
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate != null)
        updateDelegate(command);
      PartyScreenLogic.PresentationUpdate update = this.Update;
      if (update == null)
        return;
      update(command);
    }

    protected void TransferPartyLeaderTroop(PartyScreenLogic.PartyCommand command)
    {
      if (!this.ValidateCommand(command))
        return;
      PartyBase partyBase = command.RosterSide == PartyScreenLogic.PartyRosterSide.Left ? this.LeftOwnerParty : this.RightOwnerParty;
    }

    protected void UpgradeTroop(PartyScreenLogic.PartyCommand command)
    {
      if (!this.ValidateCommand(command))
        return;
      CharacterObject character = command.Character;
      CharacterObject upgradeTarget = character.UpgradeTargets[command.UpgradeTarget];
      TroopRoster roster = this.GetRoster(command.RosterSide, command.Type);
      int indexOfTroop = roster.FindIndexOfTroop(character);
      int num = character.GetUpgradeXpCost(PartyBase.MainParty, command.UpgradeTarget) * command.TotalNumber;
      roster.SetElementXp(indexOfTroop, roster.GetElementXp(indexOfTroop) - num);
      List<(EquipmentElement, int)> usedHorses = (List<(EquipmentElement, int)>) null;
      this.SetPartyGoldChangeAmount(this.CurrentData.PartyGoldChangeAmount - character.GetUpgradeGoldCost(PartyBase.MainParty, command.UpgradeTarget) * command.TotalNumber);
      if (upgradeTarget.UpgradeRequiresItemFromCategory != null)
        usedHorses = this.RemoveItemFromItemRoster(upgradeTarget.UpgradeRequiresItemFromCategory, command.TotalNumber);
      int woundedCount = 0;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) roster.GetTroopRoster())
      {
        if (troopRosterElement.Character == character && command.TotalNumber > troopRosterElement.Number - troopRosterElement.WoundedNumber)
          woundedCount = command.TotalNumber - (troopRosterElement.Number - troopRosterElement.WoundedNumber);
      }
      roster.AddToCounts(character, -command.TotalNumber, woundedCount: -woundedCount);
      roster.AddToCounts(upgradeTarget, command.TotalNumber, woundedCount: woundedCount, index: command.Index);
      this.AddUpgradeToHistory(character, upgradeTarget, command.TotalNumber);
      this.AddUsedHorsesToHistory(usedHorses);
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate == null)
        return;
      updateDelegate(command);
    }

    protected void RecruitPrisoner(PartyScreenLogic.PartyCommand command)
    {
      bool flag = false;
      if (this.ValidateCommand(command))
      {
        CharacterObject character = command.Character;
        TroopRoster prisonerRoster = this.PrisonerRosters[(int) command.RosterSide];
        int num = MathF.Min(this.CurrentData.RightRecruitableData[character], command.TotalNumber);
        if (num > 0)
        {
          this.CurrentData.RightRecruitableData[character] -= num;
          int toRecruitPrisoner = Campaign.Current.Models.PrisonerRecruitmentCalculationModel.GetConformityNeededToRecruitPrisoner(character);
          prisonerRoster.AddXpToTroop(-toRecruitPrisoner * num, character);
          prisonerRoster.AddToCounts(character, -num);
          this.MemberRosters[(int) command.RosterSide].AddToCounts(command.Character, num, index: command.Index);
          this.AddRecruitToHistory(character, num);
          flag = true;
        }
        else
          flag = false;
      }
      if (!flag)
        return;
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate != null)
        updateDelegate(command);
      PartyScreenLogic.PresentationUpdate update = this.Update;
      if (update == null)
        return;
      update(command);
    }

    protected void ExecuteTroop(PartyScreenLogic.PartyCommand command)
    {
      bool flag = false;
      if (this.ValidateCommand(command))
      {
        CharacterObject character = command.Character;
        this.PrisonerRosters[(int) command.RosterSide].AddToCounts(character, -1);
        KillCharacterAction.ApplyByExecution(character.HeroObject, Hero.MainHero);
        flag = true;
      }
      if (!flag)
        return;
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate != null)
        updateDelegate(command);
      PartyScreenLogic.PresentationUpdate update = this.Update;
      if (update != null)
        update(command);
      this._initialData.LeftPrisonerRoster.AddToCounts(command.Character, -1);
      this._initialData.RightPrisonerRoster.AddToCounts(command.Character, -1);
    }

    protected void TransferAllTroops(PartyScreenLogic.PartyCommand command)
    {
      if (!this.ValidateCommand(command))
        return;
      PartyScreenLogic.PartyRosterSide side = (byte) 1 - command.RosterSide;
      List<TroopRosterElement> listFromRoster = this.GetListFromRoster(this.GetRoster(command.RosterSide, command.Type));
      int maxValue = -1;
      if (command.RosterSide == PartyScreenLogic.PartyRosterSide.Right)
        maxValue = command.Type != PartyScreenLogic.TroopType.Prisoner ? this.LeftPartyMembersSizeLimit - this.MemberRosters[0].TotalManCount : this.LeftPartyPrisonersSizeLimit - this.PrisonerRosters[0].TotalManCount;
      else if (command.RosterSide == PartyScreenLogic.PartyRosterSide.Left)
        maxValue = command.Type != PartyScreenLogic.TroopType.Prisoner ? this.RightPartyMembersSizeLimit - this.MemberRosters[1].TotalManCount : this.RightPartyPrisonersSizeLimit - this.PrisonerRosters[1].TotalManCount;
      if (maxValue <= 0)
        maxValue = listFromRoster.Sum<TroopRosterElement>((Func<TroopRosterElement, int>) (x => x.Number));
      IEnumerable<string> source = command.Type == PartyScreenLogic.TroopType.Member ? Campaign.Current.GetCampaignBehavior<IViewDataTracker>().GetPartyTroopLocks() : Campaign.Current.GetCampaignBehavior<IViewDataTracker>().GetPartyPrisonerLocks();
      for (int index = 0; index < listFromRoster.Count && maxValue > 0; ++index)
      {
        TroopRosterElement troopRosterElement = listFromRoster[index];
        if ((command.RosterSide != PartyScreenLogic.PartyRosterSide.Right ? 0 : (source.Contains<string>(troopRosterElement.Character.StringId) ? 1 : 0)) == 0 && this.IsTroopTransferable(command.Type, troopRosterElement.Character, (int) command.RosterSide))
        {
          PartyScreenLogic.PartyCommand command1 = new PartyScreenLogic.PartyCommand();
          int totalNumber = MBMath.ClampInt(troopRosterElement.Number, 0, maxValue);
          command1.FillForTransferTroop(command.RosterSide, command.Type, troopRosterElement.Character, totalNumber, troopRosterElement.WoundedNumber, -1);
          this.TransferTroop(command1, false);
          maxValue -= totalNumber;
        }
      }
      PartyScreenLogic.TroopSortType activeSortTypeForSide = this.GetActiveSortTypeForSide(side);
      if (activeSortTypeForSide != PartyScreenLogic.TroopSortType.Custom)
        this.SortRoster(this.GetRoster(side, command.Type), activeSortTypeForSide);
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate != null)
        updateDelegate(command);
      PartyScreenLogic.PresentationUpdate update = this.Update;
      if (update == null)
        return;
      update(command);
    }

    protected void SortTroops(PartyScreenLogic.PartyCommand command)
    {
      if (!this.ValidateCommand(command))
        return;
      this.SetActiveSortTypeForSide(command.RosterSide, command.SortType);
      this.SetIsAscendingForSide(command.RosterSide, command.IsSortAscending);
      this.UpdateComparersAscendingOrder(command.IsSortAscending);
      if (command.SortType != PartyScreenLogic.TroopSortType.Custom)
      {
        TroopRoster roster1 = this.GetRoster(command.RosterSide, PartyScreenLogic.TroopType.Member);
        TroopRoster roster2 = this.GetRoster(command.RosterSide, PartyScreenLogic.TroopType.Prisoner);
        this.SortRoster(roster1, command.SortType);
        this.SortRoster(roster2, command.SortType);
      }
      PartyScreenLogic.PresentationUpdate updateDelegate = this.UpdateDelegate;
      if (updateDelegate != null)
        updateDelegate(command);
      PartyScreenLogic.PresentationUpdate update = this.Update;
      if (update == null)
        return;
      update(command);
    }

    public int GetIndexToInsertTroop(
      PartyScreenLogic.PartyRosterSide side,
      PartyScreenLogic.TroopType type,
      TroopRosterElement troop)
    {
      PartyScreenLogic.TroopSortType activeSortTypeForSide = this.GetActiveSortTypeForSide(side);
      if (activeSortTypeForSide != PartyScreenLogic.TroopSortType.Custom)
        return -1;
      PartyScreenLogic.TroopComparer comparer = this.GetComparer(activeSortTypeForSide);
      TroopRoster roster = this.GetRoster(side, type);
      for (int index = 0; index < roster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = roster.GetElementCopyAtIndex(index);
        if (!elementCopyAtIndex.Character.IsHero)
        {
          if (elementCopyAtIndex.Character.StringId == troop.Character.StringId)
            return -1;
          if (comparer.Compare(elementCopyAtIndex, troop) < 0)
            return index;
        }
      }
      return -1;
    }

    public PartyScreenLogic.TroopSortType GetActiveSortTypeForSide(
      PartyScreenLogic.PartyRosterSide side)
    {
      if (side == PartyScreenLogic.PartyRosterSide.Left)
        return this.ActiveOtherPartySortType;
      return side == PartyScreenLogic.PartyRosterSide.Right ? this.ActiveMainPartySortType : PartyScreenLogic.TroopSortType.Invalid;
    }

    private void SetActiveSortTypeForSide(
      PartyScreenLogic.PartyRosterSide side,
      PartyScreenLogic.TroopSortType sortType)
    {
      if (side == PartyScreenLogic.PartyRosterSide.Left)
      {
        this.ActiveOtherPartySortType = sortType;
      }
      else
      {
        if (side != PartyScreenLogic.PartyRosterSide.Right)
          return;
        this.ActiveMainPartySortType = sortType;
      }
    }

    public bool GetIsAscendingSortForSide(PartyScreenLogic.PartyRosterSide side)
    {
      if (side == PartyScreenLogic.PartyRosterSide.Left)
        return this.IsOtherPartySortAscending;
      return side == PartyScreenLogic.PartyRosterSide.Right && this.IsMainPartySortAscending;
    }

    private void SetIsAscendingForSide(PartyScreenLogic.PartyRosterSide side, bool isAscending)
    {
      if (side == PartyScreenLogic.PartyRosterSide.Left)
      {
        this.IsOtherPartySortAscending = isAscending;
      }
      else
      {
        if (side != PartyScreenLogic.PartyRosterSide.Right)
          return;
        this.IsMainPartySortAscending = isAscending;
      }
    }

    private List<TroopRosterElement> GetListFromRoster(TroopRoster roster)
    {
      List<TroopRosterElement> listFromRoster = new List<TroopRosterElement>();
      for (int index = 0; index < roster.Count; ++index)
        listFromRoster.Add(roster.GetElementCopyAtIndex(index));
      return listFromRoster;
    }

    private void SyncRosterWithList(TroopRoster roster, List<TroopRosterElement> list)
    {
      for (int index = 0; index < list.Count; ++index)
      {
        TroopRosterElement troopRosterElement = list[index];
        int indexOfTroop = roster.FindIndexOfTroop(troopRosterElement.Character);
        roster.SwapTroopsAtIndices(indexOfTroop, index);
      }
    }

    [Conditional("DEBUG")]
    private void EnsureRosterIsSyncedWithList(TroopRoster roster, List<TroopRosterElement> list)
    {
      if (roster.Count != list.Count)
      {
        TaleWorlds.Library.Debug.FailedAssert("Roster count is not synced with the list count", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Party\\PartyScreenLogic.cs", nameof (EnsureRosterIsSyncedWithList), 1045);
      }
      else
      {
        for (int index = 0; index < roster.Count; ++index)
        {
          if (roster.GetCharacterAtIndex(index).StringId != list[index].Character.StringId)
          {
            TaleWorlds.Library.Debug.FailedAssert("Roster is not synced with the list at index: " + (object) index, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Party\\PartyScreenLogic.cs", nameof (EnsureRosterIsSyncedWithList), 1055);
            break;
          }
        }
      }
    }

    private void SortRoster(TroopRoster originalRoster, PartyScreenLogic.TroopSortType sortType)
    {
      PartyScreenLogic.TroopComparer defaultComparer = this._defaultComparers[sortType];
      if (this.IsRosterOrdered(originalRoster, defaultComparer))
        return;
      List<TroopRosterElement> listFromRoster = this.GetListFromRoster(originalRoster);
      listFromRoster.Sort((IComparer<TroopRosterElement>) this._defaultComparers[sortType]);
      this.SyncRosterWithList(originalRoster, listFromRoster);
    }

    private bool IsRosterOrdered(TroopRoster roster, PartyScreenLogic.TroopComparer comparer)
    {
      for (int index = 1; index < roster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex1 = roster.GetElementCopyAtIndex(index - 1);
        TroopRosterElement elementCopyAtIndex2 = roster.GetElementCopyAtIndex(index);
        if (comparer.Compare(elementCopyAtIndex1, elementCopyAtIndex2) >= 1)
          return false;
      }
      return true;
    }

    public bool IsDoneActive()
    {
      int num = Hero.MainHero.Gold >= -this.CurrentData.PartyGoldChangeAmount ? 0 : (this.CurrentData.PartyGoldChangeAmount < 0 ? 1 : 0);
      PartyPresentationDoneButtonConditionDelegate conditionDelegate = this.PartyPresentationDoneButtonConditionDelegate;
      Tuple<bool, TextObject> tuple = conditionDelegate != null ? conditionDelegate(this.MemberRosters[0], this.PrisonerRosters[0], this.MemberRosters[1], this.PrisonerRosters[1], this.LeftPartyMembersSizeLimit, 0) : (Tuple<bool, TextObject>) null;
      bool flag = this.PartyPresentationDoneButtonConditionDelegate == null || tuple != null && tuple.Item1;
      this.DoneReasonString = (string) null;
      this.DoneReasonString = num == 0 ? tuple?.Item2?.ToString() ?? string.Empty : GameTexts.FindText("str_inventory_popup_player_not_enough_gold").ToString();
      return num == 0 & flag;
    }

    public bool IsCancelActive()
    {
      return this.PartyPresentationCancelButtonActivateDelegate == null || this.PartyPresentationCancelButtonActivateDelegate();
    }

    public bool DoneLogic(bool isForced)
    {
      if (Hero.MainHero.Gold < -this.CurrentData.PartyGoldChangeAmount && this.CurrentData.PartyGoldChangeAmount < 0)
      {
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_inventory_popup_player_not_enough_gold"));
        return false;
      }
      FlattenedTroopRoster releasedPrisonerRoster = new FlattenedTroopRoster();
      FlattenedTroopRoster flattenedTroopRoster = new FlattenedTroopRoster();
      foreach (Tuple<CharacterObject, int> tuple in this.CurrentData.TransferredPrisonersHistory)
      {
        int number = MathF.Abs(tuple.Item2);
        if (tuple.Item2 < 0)
          releasedPrisonerRoster.Add(tuple.Item1, number);
        else if (tuple.Item2 > 0)
          flattenedTroopRoster.Add(tuple.Item1, number);
      }
      if (Settlement.CurrentSettlement != null && !flattenedTroopRoster.IsEmpty<FlattenedTroopRosterElement>())
        CampaignEventDispatcher.Instance.OnPrisonersChangeInSettlement(Settlement.CurrentSettlement, flattenedTroopRoster, (Hero) null, true);
      int num = this.PartyPresentationDoneButtonDelegate(this.MemberRosters[0], this.PrisonerRosters[0], this.MemberRosters[1], this.PrisonerRosters[1], flattenedTroopRoster, releasedPrisonerRoster, isForced, this.LeftOwnerParty, this.RightOwnerParty) ? 1 : 0;
      if (num == 0)
        return num != 0;
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.CurrentData.PartyGoldChangeAmount);
      if (this.CurrentData.PartyInfluenceChangeAmount.Item2 != 0)
        GainKingdomInfluenceAction.ApplyForLeavingTroopToGarrison(Hero.MainHero, (float) this.CurrentData.PartyInfluenceChangeAmount.Item2);
      this.FireCampaignRelatedEvents();
      this.SetPartyGoldChangeAmount(0);
      this.SetHorseChangeAmount(0);
      this.SetInfluenceChangeAmount(0, 0, 0);
      this.SetMoraleChangeAmount(0);
      this.CurrentData.UpgradedTroopsHistory = new List<Tuple<CharacterObject, CharacterObject, int>>();
      this.CurrentData.TransferredPrisonersHistory = new List<Tuple<CharacterObject, int>>();
      this.CurrentData.RecruitedPrisonersHistory = new List<Tuple<CharacterObject, int>>();
      this.CurrentData.UsedUpgradeHorsesHistory = new List<Tuple<EquipmentElement, int>>();
      this._initialData.CopyFromScreenData(this.CurrentData);
      return num != 0;
    }

    public void OnPartyScreenClosed(bool fromCancel)
    {
      if (fromCancel)
      {
        PartyPresentationCancelButtonDelegate cancelButtonDelegate = this.PartyPresentationCancelButtonDelegate;
        if (cancelButtonDelegate != null)
          cancelButtonDelegate();
      }
      PartyScreenClosedDelegate screenClosedEvent = this.PartyScreenClosedEvent;
      if (screenClosedEvent == null)
        return;
      screenClosedEvent(this.LeftOwnerParty, this.MemberRosters[0], this.PrisonerRosters[0], this.RightOwnerParty, this.MemberRosters[1], this.PrisonerRosters[1], fromCancel);
    }

    private void UpdateComparersAscendingOrder(bool isAscending)
    {
      foreach (KeyValuePair<PartyScreenLogic.TroopSortType, PartyScreenLogic.TroopComparer> defaultComparer in this._defaultComparers)
        defaultComparer.Value.SetIsAscending(isAscending);
    }

    private void FireCampaignRelatedEvents()
    {
      foreach (Tuple<CharacterObject, CharacterObject, int> tuple in this.CurrentData.UpgradedTroopsHistory)
        CampaignEventDispatcher.Instance.OnPlayerUpgradedTroops(tuple.Item1, tuple.Item2, tuple.Item3);
      FlattenedTroopRoster flattenedTroopRoster = new FlattenedTroopRoster();
      foreach (Tuple<CharacterObject, int> tuple in this.CurrentData.RecruitedPrisonersHistory)
        flattenedTroopRoster.Add(tuple.Item1, tuple.Item2);
      if (flattenedTroopRoster.IsEmpty<FlattenedTroopRosterElement>())
        return;
      CampaignEventDispatcher.Instance.OnMainPartyPrisonerRecruited(flattenedTroopRoster);
    }

    public bool IsTroopTransferable(
      PartyScreenLogic.TroopType troopType,
      CharacterObject character,
      int side)
    {
      if (!this.IsTroopRosterTransferable(troopType) || character.IsNotTransferableInPartyScreen || character == CharacterObject.PlayerCharacter)
        return false;
      return this.IsTroopTransferableDelegate == null || this.IsTroopTransferableDelegate(character, troopType, (PartyScreenLogic.PartyRosterSide) side, this.LeftOwnerParty);
    }

    public bool IsTroopRosterTransferable(PartyScreenLogic.TroopType troopType)
    {
      switch (troopType)
      {
        case PartyScreenLogic.TroopType.Member:
          return this.MemberTransferState == PartyScreenLogic.TransferState.Transferable || this.MemberTransferState == PartyScreenLogic.TransferState.TransferableWithTrade;
        case PartyScreenLogic.TroopType.Prisoner:
          return this.PrisonerTransferState == PartyScreenLogic.TransferState.Transferable || this.PrisonerTransferState == PartyScreenLogic.TransferState.TransferableWithTrade;
        default:
          return false;
      }
    }

    public bool IsPrisonerRecruitable(
      PartyScreenLogic.TroopType troopType,
      CharacterObject character,
      PartyScreenLogic.PartyRosterSide side)
    {
      return side == PartyScreenLogic.PartyRosterSide.Right && troopType == PartyScreenLogic.TroopType.Prisoner && !character.IsHero && this.CurrentData.RightRecruitableData.ContainsKey(character) && this.CurrentData.RightRecruitableData[character] > 0;
    }

    public string GetRecruitableReasonText(
      CharacterObject character,
      bool isRecruitable,
      int troopCount,
      string fiveStackShortcutKeyText,
      string entireStackShortcutKeyText)
    {
      GameTexts.SetVariable("newline", "\n");
      if (isRecruitable)
      {
        if (!string.IsNullOrEmpty(entireStackShortcutKeyText))
        {
          GameTexts.SetVariable("KEY_NAME", entireStackShortcutKeyText);
          GameTexts.SetVariable("STR1", GameTexts.FindText("str_entire_stack_shortcut_recruit_units").ToString());
          GameTexts.SetVariable("STR2", "");
          if (troopCount >= 5 && !string.IsNullOrEmpty(fiveStackShortcutKeyText))
          {
            GameTexts.SetVariable("KEY_NAME", fiveStackShortcutKeyText);
            GameTexts.SetVariable("STR2", GameTexts.FindText("str_five_stack_shortcut_recruit_units").ToString());
          }
          GameTexts.SetVariable("STR2", GameTexts.FindText("str_string_newline_string").ToString());
        }
        if (this.RightOwnerParty.PartySizeLimit <= this.MemberRosters[1].TotalManCount)
        {
          GameTexts.SetVariable("STR1", GameTexts.FindText("str_recruit_party_size_limit"));
          return GameTexts.FindText("str_string_newline_string").ToString();
        }
        GameTexts.SetVariable("STR1", GameTexts.FindText("str_recruit_prisoner"));
        return GameTexts.FindText("str_string_newline_string").ToString();
      }
      return character.IsHero ? GameTexts.FindText("str_cannot_recruit_hero").ToString() : GameTexts.FindText("str_cannot_recruit_prisoner").ToString();
    }

    public bool IsExecutable(
      PartyScreenLogic.TroopType troopType,
      CharacterObject character,
      PartyScreenLogic.PartyRosterSide side)
    {
      return troopType == PartyScreenLogic.TroopType.Prisoner && side == PartyScreenLogic.PartyRosterSide.Right && character.IsHero && (double) character.HeroObject.Age >= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge && (PlayerEncounter.Current == null || PlayerEncounter.Current.EncounterState == PlayerEncounterState.Begin) && FaceGen.GetMaturityTypeWithAge(character.Age) > BodyMeshMaturityType.Tween;
    }

    public string GetExecutableReasonText(CharacterObject character, bool isExecutable)
    {
      if (isExecutable)
        return GameTexts.FindText("str_execute_prisoner").ToString();
      return !character.IsHero ? GameTexts.FindText("str_cannot_execute_nonhero").ToString() : GameTexts.FindText("str_cannot_execute_hero").ToString();
    }

    public int GetCurrentQuestCurrentCount()
    {
      return this.MemberRosters[0].Sum((Func<TroopRosterElement, int>) (item => item.Number));
    }

    public int GetCurrentQuestRequiredCount() => this.LeftPartyMembersSizeLimit;

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
      return true;
    }

    private void AddUpgradeToHistory(CharacterObject fromTroop, CharacterObject toTroop, int num)
    {
      Tuple<CharacterObject, CharacterObject, int> tuple = this.CurrentData.UpgradedTroopsHistory.Find((Predicate<Tuple<CharacterObject, CharacterObject, int>>) (t => t.Item1 == fromTroop && t.Item2 == toTroop));
      if (tuple != null)
      {
        int num1 = tuple.Item3;
        this.CurrentData.UpgradedTroopsHistory.Remove(tuple);
        this.CurrentData.UpgradedTroopsHistory.Add(new Tuple<CharacterObject, CharacterObject, int>(fromTroop, toTroop, num + num1));
      }
      else
        this.CurrentData.UpgradedTroopsHistory.Add(new Tuple<CharacterObject, CharacterObject, int>(fromTroop, toTroop, num));
    }

    private void AddUsedHorsesToHistory(List<(EquipmentElement, int)> usedHorses)
    {
      if (usedHorses == null)
        return;
      foreach ((_, _) in usedHorses)
      {
        (EquipmentElement, int) usedHorse;
        Tuple<EquipmentElement, int> tuple = this.CurrentData.UsedUpgradeHorsesHistory.Find((Predicate<Tuple<EquipmentElement, int>>) (t => t.Equals((object) usedHorse.Item1)));
        if (tuple != null)
        {
          int num = tuple.Item2;
          this.CurrentData.UsedUpgradeHorsesHistory.Remove(tuple);
          this.CurrentData.UsedUpgradeHorsesHistory.Add(new Tuple<EquipmentElement, int>(usedHorse.Item1, num + usedHorse.Item2));
        }
        else
          this.CurrentData.UsedUpgradeHorsesHistory.Add(new Tuple<EquipmentElement, int>(usedHorse.Item1, usedHorse.Item2));
      }
      PartyScreenData currentData = this.CurrentData;
      int horseChangeAmount = currentData.PartyHorseChangeAmount;
      int num1 = usedHorses.Sum<(EquipmentElement, int)>((Func<(EquipmentElement, int), int>) (t => t.Item2));
      int num2;
      int newAmount = num2 = horseChangeAmount + num1;
      currentData.PartyHorseChangeAmount = num2;
      this.SetHorseChangeAmount(newAmount);
    }

    private void UpdatePrisonerTransferHistory(CharacterObject troop, int amount)
    {
      Tuple<CharacterObject, int> tuple = this.CurrentData.TransferredPrisonersHistory.Find((Predicate<Tuple<CharacterObject, int>>) (t => t.Item1 == troop));
      if (tuple != null)
      {
        int num = tuple.Item2;
        this.CurrentData.TransferredPrisonersHistory.Remove(tuple);
        this.CurrentData.TransferredPrisonersHistory.Add(new Tuple<CharacterObject, int>(troop, amount + num));
      }
      else
        this.CurrentData.TransferredPrisonersHistory.Add(new Tuple<CharacterObject, int>(troop, amount));
    }

    private void AddRecruitToHistory(CharacterObject troop, int amount)
    {
      Tuple<CharacterObject, int> tuple = this.CurrentData.RecruitedPrisonersHistory.Find((Predicate<Tuple<CharacterObject, int>>) (t => t.Item1 == troop));
      if (tuple != null)
      {
        int num = tuple.Item2;
        this.CurrentData.RecruitedPrisonersHistory.Remove(tuple);
        this.CurrentData.RecruitedPrisonersHistory.Add(new Tuple<CharacterObject, int>(troop, amount + num));
      }
      else
        this.CurrentData.RecruitedPrisonersHistory.Add(new Tuple<CharacterObject, int>(troop, amount));
      this.SetMoraleChangeAmount(this.CurrentData.PartyMoraleChangeAmount + Campaign.Current.Models.PrisonerRecruitmentCalculationModel.GetPrisonerRecruitmentMoraleEffect(this.RightOwnerParty, troop, amount));
    }

    private string GetItemLockStringID(EquipmentElement equipmentElement)
    {
      return equipmentElement.Item.StringId + (equipmentElement.ItemModifier != null ? equipmentElement.ItemModifier.StringId : "");
    }

    private List<(EquipmentElement, int)> RemoveItemFromItemRoster(
      ItemCategory itemCategory,
      int numOfItemsLeftToRemove = 1)
    {
      List<(EquipmentElement, int)> valueTupleList = new List<(EquipmentElement, int)>();
      IEnumerable<string> lockedItems = Campaign.Current.GetCampaignBehavior<IViewDataTracker>().GetInventoryLocks();
      foreach (ItemRosterElement itemRosterElement in (IEnumerable<ItemRosterElement>) this.RightOwnerParty.ItemRoster.Where<ItemRosterElement>((Func<ItemRosterElement, bool>) (x => x.EquipmentElement.Item?.ItemCategory == itemCategory)).OrderBy<ItemRosterElement, int>((Func<ItemRosterElement, int>) (x => x.EquipmentElement.Item.Value)).OrderBy<ItemRosterElement, bool>((Func<ItemRosterElement, bool>) (x => lockedItems.Contains<string>(this.GetItemLockStringID(x.EquipmentElement)))))
      {
        int num = MathF.Min(numOfItemsLeftToRemove, itemRosterElement.Amount);
        this.RightOwnerParty.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, -num);
        numOfItemsLeftToRemove -= num;
        valueTupleList.Add((itemRosterElement.EquipmentElement, num));
        if (numOfItemsLeftToRemove <= 0)
          break;
      }
      if (numOfItemsLeftToRemove > 0)
        TaleWorlds.Library.Debug.FailedAssert("Couldn't find enough upgrade req items in the inventory.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Party\\PartyScreenLogic.cs", nameof (RemoveItemFromItemRoster), 1478);
      return valueTupleList;
    }

    public void Reset(bool fromCancel) => this.ResetLogic(fromCancel);

    private void ResetLogic(bool fromCancel)
    {
      if (!(this.CurrentData != this._initialData))
        return;
      this.CurrentData.ResetUsing(this._initialData);
      PartyScreenLogic.AfterResetDelegate afterReset = this.AfterReset;
      if (afterReset == null)
        return;
      afterReset(this, fromCancel);
    }

    public void SavePartyScreenData()
    {
      this._savedData = new PartyScreenData();
      this._savedData.InitializeCopyFrom(this.CurrentData.RightParty, this.CurrentData.LeftParty);
      this._savedData.CopyFromScreenData(this.CurrentData);
    }

    public void ResetToLastSavedPartyScreenData(bool fromCancel)
    {
      if (!(this.CurrentData != this._savedData))
        return;
      this.CurrentData.ResetUsing(this._savedData);
      PartyScreenLogic.AfterResetDelegate afterReset = this.AfterReset;
      if (afterReset == null)
        return;
      afterReset(this, fromCancel);
    }

    public void RemoveZeroCounts()
    {
      for (int index = 0; index < this.MemberRosters.Length; ++index)
        this.MemberRosters[index].RemoveZeroCounts();
      for (int index = 0; index < this.PrisonerRosters.Length; ++index)
        this.PrisonerRosters[index].RemoveZeroCounts();
    }

    public int GetTroopRecruitableAmount(CharacterObject troop)
    {
      return !this.CurrentData.RightRecruitableData.ContainsKey(troop) ? 0 : this.CurrentData.RightRecruitableData[troop];
    }

    public TroopRoster GetRoster(
      PartyScreenLogic.PartyRosterSide side,
      PartyScreenLogic.TroopType troopType)
    {
      if (troopType == PartyScreenLogic.TroopType.Member)
        return this.MemberRosters[(int) side];
      return troopType == PartyScreenLogic.TroopType.Prisoner ? this.PrisonerRosters[(int) side] : (TroopRoster) null;
    }

    internal void OnDoneEvent(List<TroopTradeDifference> freshlySellList)
    {
    }

    public bool IsThereAnyChanges()
    {
      return this._initialData.IsThereAnyTroopTradeDifferenceBetween(this.CurrentData);
    }

    public bool HaveRightSideGainedTroops()
    {
      foreach (TroopTradeDifference troopTradeDifference in this._initialData.GetTroopTradeDifferencesFromTo(this.CurrentData))
      {
        if (!troopTradeDifference.IsPrisoner && troopTradeDifference.FromCount < troopTradeDifference.ToCount)
          return true;
      }
      return false;
    }

    public PartyScreenLogic.TroopComparer GetComparer(PartyScreenLogic.TroopSortType sortType)
    {
      return this._defaultComparers[sortType];
    }

    public enum TroopSortType
    {
      Invalid = -1, // 0xFFFFFFFF
      Custom = 0,
      Type = 1,
      Name = 2,
      Count = 3,
      Tier = 4,
    }

    public enum PartyRosterSide : byte
    {
      Left = 0,
      Right = 1,
      None = 99, // 0x63
    }

    [Flags]
    public enum TroopType
    {
      Member = 1,
      Prisoner = 2,
      None = Prisoner | Member, // 0x00000003
    }

    public enum PartyCommandCode
    {
      TransferTroop,
      UpgradeTroop,
      TransferPartyLeaderTroop,
      TransferTroopToLeaderSlot,
      ShiftTroop,
      RecruitTroop,
      ExecuteTroop,
      TransferAllTroops,
      SortTroops,
    }

    public enum TransferState
    {
      NotTransferable,
      Transferable,
      TransferableWithTrade,
    }

    public delegate void PresentationUpdate(PartyScreenLogic.PartyCommand command);

    public delegate void PartyGoldDelegate();

    public delegate void PartyMoraleDelegate();

    public delegate void PartyInfluenceDelegate();

    public delegate void PartyHorseDelegate();

    public delegate void AfterResetDelegate(PartyScreenLogic partyScreenLogic, bool fromCancel);

    public class PartyCommand : ISerializableObject
    {
      public PartyScreenLogic.PartyCommandCode Code { get; private set; }

      public PartyScreenLogic.PartyRosterSide RosterSide { get; private set; }

      public CharacterObject Character { get; private set; }

      public int TotalNumber { get; private set; }

      public int WoundedNumber { get; private set; }

      public int Index { get; private set; }

      public int UpgradeTarget { get; private set; }

      public PartyScreenLogic.TroopType Type { get; private set; }

      public PartyScreenLogic.TroopSortType SortType { get; private set; }

      public bool IsSortAscending { get; private set; }

      public void FillForTransferTroop(
        PartyScreenLogic.PartyRosterSide fromSide,
        PartyScreenLogic.TroopType type,
        CharacterObject character,
        int totalNumber,
        int woundedNumber,
        int targetIndex)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.TransferTroop;
        this.RosterSide = fromSide;
        this.TotalNumber = totalNumber;
        this.WoundedNumber = woundedNumber;
        this.Character = character;
        this.Type = type;
        this.Index = targetIndex;
      }

      public void FillForShiftTroop(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopType type,
        CharacterObject character,
        int targetIndex)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.ShiftTroop;
        this.RosterSide = side;
        this.Character = character;
        this.Type = type;
        this.Index = targetIndex;
      }

      public void FillForTransferTroopToLeaderSlot(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopType type,
        CharacterObject character,
        int totalNumber,
        int woundedNumber,
        int targetIndex)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.TransferTroopToLeaderSlot;
        this.RosterSide = side;
        this.TotalNumber = totalNumber;
        this.WoundedNumber = woundedNumber;
        this.Character = character;
        this.Type = type;
        this.Index = targetIndex;
      }

      public void FillForTransferPartyLeaderTroop(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopType type,
        CharacterObject character,
        int totalNumber)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.TransferPartyLeaderTroop;
        this.RosterSide = side;
        this.TotalNumber = totalNumber;
        this.Character = character;
        this.Type = type;
      }

      public void FillForUpgradeTroop(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopType type,
        CharacterObject character,
        int number,
        int upgradeTargetType,
        int index)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.UpgradeTroop;
        this.RosterSide = side;
        this.TotalNumber = number;
        this.Character = character;
        this.UpgradeTarget = upgradeTargetType;
        this.Type = type;
        this.Index = index;
      }

      public void FillForRecruitTroop(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopType type,
        CharacterObject character,
        int number,
        int index)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.RecruitTroop;
        this.RosterSide = side;
        this.Character = character;
        this.Type = type;
        this.TotalNumber = number;
        this.Index = index;
      }

      public void FillForExecuteTroop(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopType type,
        CharacterObject character)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.ExecuteTroop;
        this.RosterSide = side;
        this.Character = character;
        this.Type = type;
      }

      public void FillForTransferAllTroops(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopType type)
      {
        this.Code = PartyScreenLogic.PartyCommandCode.TransferAllTroops;
        this.RosterSide = side;
        this.Type = type;
      }

      public void FillForSortTroops(
        PartyScreenLogic.PartyRosterSide side,
        PartyScreenLogic.TroopSortType sortType,
        bool isAscending)
      {
        this.RosterSide = side;
        this.Code = PartyScreenLogic.PartyCommandCode.SortTroops;
        this.SortType = sortType;
        this.IsSortAscending = isAscending;
      }

      void ISerializableObject.SerializeTo(IWriter writer)
      {
        writer.WriteByte((byte) this.Code);
        writer.WriteByte((byte) this.RosterSide);
        writer.WriteUInt(this.Character.Id.InternalValue);
        writer.WriteInt(this.TotalNumber);
        writer.WriteInt(this.WoundedNumber);
        writer.WriteInt(this.UpgradeTarget);
        writer.WriteByte((byte) this.Type);
      }

      void ISerializableObject.DeserializeFrom(IReader reader)
      {
        this.Code = (PartyScreenLogic.PartyCommandCode) reader.ReadByte();
        this.RosterSide = (PartyScreenLogic.PartyRosterSide) reader.ReadByte();
        this.Character = (CharacterObject) MBObjectManager.Instance.GetObject(new MBGUID(reader.ReadUInt()));
        this.TotalNumber = reader.ReadInt();
        this.WoundedNumber = reader.ReadInt();
        this.UpgradeTarget = reader.ReadInt();
        this.Type = (PartyScreenLogic.TroopType) reader.ReadByte();
      }
    }

    public abstract class TroopComparer : IComparer<TroopRosterElement>
    {
      private bool _isAscending;

      public void SetIsAscending(bool isAscending) => this._isAscending = isAscending;

      private int GetHeroComparisonResult(TroopRosterElement x, TroopRosterElement y)
      {
        if (x.Character.HeroObject != null)
        {
          if (x.Character.HeroObject == Hero.MainHero)
            return -2;
          if (y.Character.HeroObject == null)
            return -1;
        }
        return 0;
      }

      public int Compare(TroopRosterElement x, TroopRosterElement y)
      {
        int num = this._isAscending ? 1 : -1;
        int comparisonResult1 = this.GetHeroComparisonResult(x, y);
        if (comparisonResult1 != 0)
          return comparisonResult1;
        int comparisonResult2 = this.GetHeroComparisonResult(y, x);
        return comparisonResult2 != 0 ? comparisonResult2 * -1 : this.CompareTroops(x, y) * num;
      }

      protected abstract int CompareTroops(TroopRosterElement x, TroopRosterElement y);
    }

    private class TroopDefaultComparer : PartyScreenLogic.TroopComparer
    {
      protected override int CompareTroops(TroopRosterElement x, TroopRosterElement y) => 0;
    }

    private class TroopTypeComparer : PartyScreenLogic.TroopComparer
    {
      protected override int CompareTroops(TroopRosterElement x, TroopRosterElement y)
      {
        return ((int) x.Character.DefaultFormationClass).CompareTo((int) y.Character.DefaultFormationClass);
      }
    }

    private class TroopNameComparer : PartyScreenLogic.TroopComparer
    {
      protected override int CompareTroops(TroopRosterElement x, TroopRosterElement y)
      {
        return x.Character.Name.ToString().CompareTo(y.Character.Name.ToString());
      }
    }

    private class TroopCountComparer : PartyScreenLogic.TroopComparer
    {
      protected override int CompareTroops(TroopRosterElement x, TroopRosterElement y)
      {
        return x.Number.CompareTo(y.Number);
      }
    }

    private class TroopTierComparer : PartyScreenLogic.TroopComparer
    {
      protected override int CompareTroops(TroopRosterElement x, TroopRosterElement y)
      {
        return x.Character.Tier.CompareTo(y.Character.Tier);
      }
    }
  }
}
