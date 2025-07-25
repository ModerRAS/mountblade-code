// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes.SettlementNameplateNotificationsVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes
{
  public class SettlementNameplateNotificationsVM : ViewModel
  {
    private readonly Settlement _settlement;
    private int _tickSinceEnabled;
    private const int _maxTickDeltaToCongregate = 10;
    private MBBindingList<SettlementNotificationItemBaseVM> _notifications;

    public bool IsEventsRegistered { get; private set; }

    public SettlementNameplateNotificationsVM(Settlement settlement)
    {
      this._settlement = settlement;
      this.Notifications = new MBBindingList<SettlementNotificationItemBaseVM>();
    }

    public void Tick() => ++this._tickSinceEnabled;

    private void OnTroopRecruited(
      Hero recruiterHero,
      Settlement settlement,
      Hero troopSource,
      CharacterObject troop,
      int amount)
    {
      if (amount <= 0 || settlement != this._settlement || !this._settlement.IsInspected || recruiterHero == null || recruiterHero.CurrentSettlement != this._settlement && (recruiterHero.PartyBelongedTo == null || recruiterHero.PartyBelongedTo.LastVisitedSettlement != this._settlement))
        return;
      TroopRecruitmentNotificationItemVM notificationByPredicate = this.GetUpdatableNotificationByPredicate<TroopRecruitmentNotificationItemVM>((Func<TroopRecruitmentNotificationItemVM, bool>) (n => n.RecruiterHero == recruiterHero));
      if (notificationByPredicate != null)
        notificationByPredicate.AddNewAction(amount);
      else
        this.Notifications.Add((SettlementNotificationItemBaseVM) new TroopRecruitmentNotificationItemVM(new Action<SettlementNotificationItemBaseVM>(this.RemoveItem), recruiterHero, amount, this._tickSinceEnabled));
    }

    private void OnCaravanTransactionCompleted(
      MobileParty caravanParty,
      Town town,
      List<(EquipmentElement, int)> items)
    {
      if (this._settlement != town.Owner.Settlement)
        return;
      CaravanTransactionNotificationItemVM notificationByPredicate = this.GetUpdatableNotificationByPredicate<CaravanTransactionNotificationItemVM>((Func<CaravanTransactionNotificationItemVM, bool>) (n => n.CaravanParty == caravanParty));
      if (notificationByPredicate != null)
        notificationByPredicate.AddNewItems(items);
      else
        this.Notifications.Add((SettlementNotificationItemBaseVM) new CaravanTransactionNotificationItemVM(new Action<SettlementNotificationItemBaseVM>(this.RemoveItem), caravanParty, items, this._tickSinceEnabled));
    }

    private void OnPrisonerSold(PartyBase sellerParty, PartyBase buyerParty, TroopRoster prisoners)
    {
      if (!sellerParty.IsMobile || buyerParty == null || !buyerParty.IsSettlement || buyerParty.Settlement != this._settlement || !this._settlement.IsInspected || prisoners.Count <= 0 || sellerParty.LeaderHero == null)
        return;
      MobileParty sellerMobileParty = sellerParty.MobileParty;
      PrisonerSoldNotificationItemVM notificationByPredicate = this.GetUpdatableNotificationByPredicate<PrisonerSoldNotificationItemVM>((Func<PrisonerSoldNotificationItemVM, bool>) (n => n.Party == sellerMobileParty));
      if (notificationByPredicate != null)
        notificationByPredicate.AddNewPrisoners(prisoners);
      else
        this.Notifications.Add((SettlementNotificationItemBaseVM) new PrisonerSoldNotificationItemVM(new Action<SettlementNotificationItemBaseVM>(this.RemoveItem), sellerMobileParty, prisoners, this._tickSinceEnabled));
    }

    private void OnTroopGivenToSettlement(
      Hero giverHero,
      Settlement givenSettlement,
      TroopRoster givenTroops)
    {
      if (!this._settlement.IsInspected || givenTroops.TotalManCount <= 0 || giverHero == null || givenSettlement != this._settlement)
        return;
      TroopGivenToSettlementNotificationItemVM notificationByPredicate = this.GetUpdatableNotificationByPredicate<TroopGivenToSettlementNotificationItemVM>((Func<TroopGivenToSettlementNotificationItemVM, bool>) (n => n.GiverHero == giverHero));
      if (notificationByPredicate != null)
        notificationByPredicate.AddNewAction(givenTroops);
      else
        this.Notifications.Add((SettlementNotificationItemBaseVM) new TroopGivenToSettlementNotificationItemVM(new Action<SettlementNotificationItemBaseVM>(this.RemoveItem), giverHero, givenTroops, this._tickSinceEnabled));
    }

    private void OnItemSold(
      PartyBase receiverParty,
      PartyBase payerParty,
      ItemRosterElement item,
      int number,
      Settlement currentSettlement)
    {
      if (!this._settlement.IsInspected || number <= 0 || currentSettlement != this._settlement)
        return;
      int num = receiverParty.IsSettlement ? -1 : 1;
      ItemSoldNotificationItemVM notificationByPredicate = this.GetUpdatableNotificationByPredicate<ItemSoldNotificationItemVM>((Func<ItemSoldNotificationItemVM, bool>) (n =>
      {
        EquipmentElement equipmentElement = n.Item.EquipmentElement;
        ItemObject itemObject1 = equipmentElement.Item;
        equipmentElement = item.EquipmentElement;
        ItemObject itemObject2 = equipmentElement.Item;
        if (itemObject1 != itemObject2)
          return false;
        return n.PayerParty == receiverParty || n.PayerParty == payerParty;
      }));
      if (notificationByPredicate != null)
        notificationByPredicate.AddNewTransaction(number * num);
      else
        this.Notifications.Add((SettlementNotificationItemBaseVM) new ItemSoldNotificationItemVM(new Action<SettlementNotificationItemBaseVM>(this.RemoveItem), receiverParty, payerParty, item, number * num, this._tickSinceEnabled));
    }

    private void OnIssueUpdated(
      IssueBase issue,
      IssueBase.IssueUpdateDetails updateType,
      Hero relatedHero)
    {
      if (updateType != IssueBase.IssueUpdateDetails.IssueFinishedByAILord || relatedHero == null || relatedHero.CurrentSettlement != this._settlement)
        return;
      this.Notifications.Add((SettlementNotificationItemBaseVM) new IssueSolvedByLordNotificationItemVM(new Action<SettlementNotificationItemBaseVM>(this.RemoveItem), relatedHero, this._tickSinceEnabled));
    }

    private void RemoveItem(SettlementNotificationItemBaseVM item)
    {
      this.Notifications.Remove(item);
    }

    public void RegisterEvents()
    {
      if (this.IsEventsRegistered)
        return;
      CampaignEvents.OnTroopRecruitedEvent.AddNonSerializedListener((object) this, new Action<Hero, Settlement, Hero, CharacterObject, int>(this.OnTroopRecruited));
      CampaignEvents.OnPrisonerSoldEvent.AddNonSerializedListener((object) this, new Action<PartyBase, PartyBase, TroopRoster>(this.OnPrisonerSold));
      CampaignEvents.OnCaravanTransactionCompletedEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Town, List<(EquipmentElement, int)>>(this.OnCaravanTransactionCompleted));
      CampaignEvents.OnTroopGivenToSettlementEvent.AddNonSerializedListener((object) this, new Action<Hero, Settlement, TroopRoster>(this.OnTroopGivenToSettlement));
      CampaignEvents.OnItemSoldEvent.AddNonSerializedListener((object) this, new Action<PartyBase, PartyBase, ItemRosterElement, int, Settlement>(this.OnItemSold));
      CampaignEvents.OnIssueUpdatedEvent.AddNonSerializedListener((object) this, new Action<IssueBase, IssueBase.IssueUpdateDetails, Hero>(this.OnIssueUpdated));
      this._tickSinceEnabled = 0;
      this.IsEventsRegistered = true;
    }

    public void UnloadEvents()
    {
      if (!this.IsEventsRegistered)
        return;
      CampaignEvents.OnTroopRecruitedEvent.ClearListeners((object) this);
      CampaignEvents.OnItemSoldEvent.ClearListeners((object) this);
      CampaignEvents.OnPrisonerSoldEvent.ClearListeners((object) this);
      CampaignEvents.OnCaravanTransactionCompletedEvent.ClearListeners((object) this);
      CampaignEvents.OnTroopGivenToSettlementEvent.ClearListeners((object) this);
      CampaignEvents.OnIssueUpdatedEvent.ClearListeners((object) this);
      this._tickSinceEnabled = 0;
      this.IsEventsRegistered = false;
    }

    public bool IsValidItemForNotification(ItemRosterElement item)
    {
      switch (item.EquipmentElement.Item.Type)
      {
        case ItemObject.ItemTypeEnum.Horse:
        case ItemObject.ItemTypeEnum.OneHandedWeapon:
        case ItemObject.ItemTypeEnum.TwoHandedWeapon:
        case ItemObject.ItemTypeEnum.Polearm:
        case ItemObject.ItemTypeEnum.Arrows:
        case ItemObject.ItemTypeEnum.Bolts:
        case ItemObject.ItemTypeEnum.Shield:
        case ItemObject.ItemTypeEnum.Bow:
        case ItemObject.ItemTypeEnum.Crossbow:
        case ItemObject.ItemTypeEnum.Thrown:
        case ItemObject.ItemTypeEnum.Goods:
        case ItemObject.ItemTypeEnum.HeadArmor:
        case ItemObject.ItemTypeEnum.BodyArmor:
        case ItemObject.ItemTypeEnum.LegArmor:
        case ItemObject.ItemTypeEnum.HandArmor:
        case ItemObject.ItemTypeEnum.Pistol:
        case ItemObject.ItemTypeEnum.Musket:
        case ItemObject.ItemTypeEnum.Bullets:
        case ItemObject.ItemTypeEnum.Animal:
        case ItemObject.ItemTypeEnum.ChestArmor:
        case ItemObject.ItemTypeEnum.Cape:
        case ItemObject.ItemTypeEnum.HorseHarness:
          return true;
        default:
          return false;
      }
    }

    private T GetUpdatableNotificationByPredicate<T>(Func<T, bool> predicate) where T : SettlementNotificationItemBaseVM
    {
      for (int index = 0; index < this.Notifications.Count; ++index)
      {
        SettlementNotificationItemBaseVM notification = this.Notifications[index];
        if (this._tickSinceEnabled - notification.CreatedTick < 10 && notification is T notificationByPredicate && predicate(notificationByPredicate))
          return notificationByPredicate;
      }
      return default (T);
    }

    public MBBindingList<SettlementNotificationItemBaseVM> Notifications
    {
      get => this._notifications;
      set
      {
        if (value == this._notifications)
          return;
        this._notifications = value;
        this.OnPropertyChangedWithValue<MBBindingList<SettlementNotificationItemBaseVM>>(value, nameof (Notifications));
      }
    }
  }
}
