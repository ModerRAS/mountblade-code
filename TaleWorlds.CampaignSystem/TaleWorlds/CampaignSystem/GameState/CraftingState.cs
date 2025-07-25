// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.CraftingState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class CraftingState : TaleWorlds.Core.GameState
  {
    private ICraftingStateHandler _handler;

    public override bool IsMenuState => true;

    public Crafting CraftingLogic { get; private set; }

    public ICraftingStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public void InitializeLogic(Crafting newCraftingLogic, bool isReplacingWeaponClass = false)
    {
      this.CraftingLogic = newCraftingLogic;
      if (this._handler == null)
        return;
      if (isReplacingWeaponClass)
        this._handler.OnCraftingLogicRefreshed();
      else
        this._handler.OnCraftingLogicInitialized();
    }
  }
}
