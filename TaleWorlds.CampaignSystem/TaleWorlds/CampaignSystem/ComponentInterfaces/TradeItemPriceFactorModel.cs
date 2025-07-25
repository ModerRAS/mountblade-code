// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.TradeItemPriceFactorModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class TradeItemPriceFactorModel : GameModel
  {
    public abstract float GetTradePenalty(
      ItemObject item,
      MobileParty clientParty,
      PartyBase merchant,
      bool isSelling,
      float inStore,
      float supply,
      float demand);

    public abstract float GetBasePriceFactor(
      ItemCategory itemCategory,
      float inStoreValue,
      float supply,
      float demand,
      bool isSelling,
      int transferValue);

    public abstract int GetPrice(
      EquipmentElement itemRosterElement,
      MobileParty clientParty,
      PartyBase merchant,
      bool isSelling,
      float inStoreValue,
      float supply,
      float demand);

    public abstract int GetTheoreticalMaxItemMarketValue(ItemObject item);
  }
}
