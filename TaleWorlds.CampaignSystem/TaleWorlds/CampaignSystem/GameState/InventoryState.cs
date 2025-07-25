// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.InventoryState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class InventoryState : PlayerGameState
  {
    private IInventoryStateHandler _handler;

    public override bool IsMenuState => true;

    public InventoryLogic InventoryLogic { get; private set; }

    public IInventoryStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public void InitializeLogic(InventoryLogic inventoryLogic)
    {
      this.InventoryLogic = inventoryLogic;
    }
  }
}
