// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes.ItemSoldNotificationItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes
{
  public class ItemSoldNotificationItemVM : SettlementNotificationItemBaseVM
  {
    private int _number;
    private PartyBase _heroParty;

    public ItemRosterElement Item { get; }

    public PartyBase ReceiverParty { get; }

    public PartyBase PayerParty { get; }

    public ItemSoldNotificationItemVM(
      Action<SettlementNotificationItemBaseVM> onRemove,
      PartyBase receiverParty,
      PartyBase payerParty,
      ItemRosterElement item,
      int number,
      int createdTick)
      : base(onRemove, createdTick)
    {
      this.Item = item;
      this.ReceiverParty = receiverParty;
      this.PayerParty = payerParty;
      this._number = number;
      this._heroParty = receiverParty.IsSettlement ? payerParty : receiverParty;
      this.Text = SandBoxUIHelper.GetItemSoldNotificationText(this.Item, this._number, this._number < 0);
      this.CharacterName = this._heroParty.LeaderHero != null ? this._heroParty.LeaderHero.Name.ToString() : this._heroParty.Name.ToString();
      this.CharacterVisual = new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(PartyBaseHelper.GetVisualPartyLeader(this._heroParty)));
      this.RelationType = 0;
      this.CreatedTick = createdTick;
      if (this._heroParty.LeaderHero == null)
        return;
      this.RelationType = this._heroParty.LeaderHero.Clan.IsAtWarWith((IFaction) Hero.MainHero.Clan) ? -1 : 1;
    }

    public void AddNewTransaction(int amount)
    {
      this._number += amount;
      if (this._number == 0)
        this.ExecuteRemove();
      else
        this.Text = SandBoxUIHelper.GetItemSoldNotificationText(this.Item, this._number, this._number < 0);
    }
  }
}
