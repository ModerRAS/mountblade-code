// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Inventory.FakeInventoryListener
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Inventory
{
  public class FakeInventoryListener : InventoryListener
  {
    public override int GetGold() => 0;

    public override TextObject GetTraderName() => TextObject.Empty;

    public override void SetGold(int gold)
    {
    }

    public override void OnTransaction()
    {
    }

    public override PartyBase GetOppositeParty() => (PartyBase) null;
  }
}
