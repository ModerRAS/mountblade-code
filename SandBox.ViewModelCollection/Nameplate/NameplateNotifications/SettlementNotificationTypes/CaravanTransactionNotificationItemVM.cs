// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes.CaravanTransactionNotificationItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes
{
  public class CaravanTransactionNotificationItemVM : SettlementNotificationItemBaseVM
  {
    private List<(EquipmentElement, int)> _items;
    private bool _isSelling;

    public MobileParty CaravanParty { get; private set; }

    public CaravanTransactionNotificationItemVM(
      Action<SettlementNotificationItemBaseVM> onRemove,
      MobileParty caravanParty,
      List<(EquipmentElement, int)> items,
      int createdTick)
      : base(onRemove, createdTick)
    {
      this._items = items;
      List<(EquipmentElement, int)> list = this._items.DistinctBy<(EquipmentElement, int), EquipmentElement>((Func<(EquipmentElement, int), EquipmentElement>) (i => i.Item1)).ToList<(EquipmentElement, int)>();
      if (list.Count < this._items.Count)
        this._items = list;
      this.CaravanParty = caravanParty;
      if (items.Count > 0 && items[0].Item2 > 0)
        this._isSelling = true;
      this.Text = SandBoxUIHelper.GetItemsTradedNotificationText(items, this._isSelling);
      this.CharacterName = caravanParty.LeaderHero?.Name.ToString() ?? caravanParty.Name.ToString();
      if (caravanParty.Party.Owner != null)
      {
        this.CharacterVisual = new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(this.CaravanParty.Party.Owner.CharacterObject));
      }
      else
      {
        CharacterObject visualPartyLeader = PartyBaseHelper.GetVisualPartyLeader(this.CaravanParty.Party);
        if (visualPartyLeader != null)
          this.CharacterVisual = new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(visualPartyLeader));
      }
      this.RelationType = 0;
      if (caravanParty == null)
        return;
      IFaction mapFaction = caravanParty.MapFaction;
      this.RelationType = (mapFaction != null ? (mapFaction.IsAtWarWith((IFaction) Hero.MainHero.Clan) ? 1 : 0) : 0) != 0 ? -1 : 1;
    }

    public void AddNewItems(List<(EquipmentElement, int)> newItems)
    {
      for (int i = 0; i < newItems.Count; i++)
      {
        (EquipmentElement, int) tuple = this._items.FirstOrDefault<(EquipmentElement, int)>((Func<(EquipmentElement, int), bool>) (t => t.Item1.Equals((object) newItems[i].Item1)));
        if (!tuple.Item1.IsEmpty)
        {
          int index = this._items.IndexOf(tuple);
          tuple.Item2 += newItems[i].Item2;
          this._items[index] = tuple;
        }
        else
          this._items.Add((newItems[i].Item1, newItems[i].Item2));
      }
      this.Text = SandBoxUIHelper.GetItemsTradedNotificationText(this._items, this._isSelling);
    }
  }
}
